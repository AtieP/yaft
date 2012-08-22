/* See LICENSE for licence details. */
void load_glyph(glyph_t **fonts, char *path)
{
	int count = 0, state = 0;
	char buf[BUFSIZE], *endp;
	FILE *fp;
	u16 code = DEFAULT_CHAR;
	glyph_t *gp = NULL;

	fp = efopen(path, "r");

	while (fgets(buf, BUFSIZE, fp) != NULL) {
		switch (state) {
		case 0:
			code = atoi(buf);
			if (fonts[code] != NULL) {
				free(fonts[code]->bitmap);
				free(fonts[code]);
			}
			gp = (glyph_t *) emalloc(sizeof(glyph_t));
			state = 1;
			break;
		case 1:
			sscanf(buf, "%d %d", &gp->size.x, &gp->size.y);
			gp->bitmap = (u32 *) emalloc(gp->size.y * sizeof(u32));
			state = 2;
			break;
		case 2:
			gp->bitmap[count++] = strtol(buf, &endp, 16);
			if (count >= gp->size.y) {
				fonts[code] = gp;
				state = count = 0;
			}
			break;
		default:
			break;
		}
	}

	efclose(fp);
}

void load_alias(glyph_t **fonts, char *alias)
{
	unsigned int dst, src;
	char buf[BUFSIZE];
	FILE *fp;

	fp = efopen(alias, "r");

	while (fgets(buf, BUFSIZE, fp) != NULL) {
		sscanf(buf, "%X %X", &dst, &src);
		if (dst < 0 || dst >= UCS2_CHARS
			|| src < 0 || src >= UCS2_CHARS)
			continue;

		if (fonts[dst] == NULL && fonts[src] != NULL)
			fonts[dst] = fonts[src];
	}

	efclose(fp);
}

void load_fonts(glyph_t **fonts, char **font_path, char *alias)
{
	int i;
	glyph_t *gp;

	for (i = 0; i < UCS2_CHARS; i++)
		fonts[i] = NULL;

	for (i = 0; font_path[i] != NULL; i++)
		load_glyph(fonts, font_path[i]);

	if (alias != NULL)
		load_alias(fonts, alias);

	gp = fonts[DEFAULT_CHAR];
	if (gp == NULL || gp->size.x == 0 || gp->size.y == 0) {
		fprintf(stderr, "DEFAULT_CHAR(U+%.2X) not found or invalid cell size x:%d y:%d\n",
				DEFAULT_CHAR, gp->size.x, gp->size.y);
		exit(EXIT_FAILURE);
	}
}