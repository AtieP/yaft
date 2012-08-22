/* See LICENSE for licence details. */
/*
	Standard VGA colors
	http://en.wikipedia.org/wiki/ANSI_escape_code
*/
#define BLACK   0x000000
#define RED     0xAA0000
#define GREEN   0x00AA00
#define BROWN   0xAA5500
#define BLUE    0x0000AA
#define MAGENTA 0xAA00AA
#define CYAN    0x00AAAA
#define GRAY    0xAAAAAA

#define DARKGRAY     0x555555
#define LIGHTRED     0xFF5555
#define LIGHTGREEN   0x55FF55
#define YELLOW       0xFFFF55
#define LIGHTBLUE    0x5555FF
#define LIGHTMAGENTA 0xFF55FF
#define LIGHTCYAN    0x55FFFF
#define WHITE        0xFFFFFF

/* 256 color */
#define COLOR_16 0x000000
#define COLOR_17 0x00005F
#define COLOR_18 0x000087
#define COLOR_19 0x0000AF
#define COLOR_20 0x0000D7
#define COLOR_21 0x0000FF
#define COLOR_22 0x005F00
#define COLOR_23 0x005F5F
#define COLOR_24 0x005F87
#define COLOR_25 0x005FAF
#define COLOR_26 0x005FD7
#define COLOR_27 0x005FFF
#define COLOR_28 0x008700
#define COLOR_29 0x00875F
#define COLOR_30 0x008787
#define COLOR_31 0x0087AF
#define COLOR_32 0x0087D7
#define COLOR_33 0x0087FF
#define COLOR_34 0x00AF00
#define COLOR_35 0x00AF5F
#define COLOR_36 0x00AF87
#define COLOR_37 0x00AFAF
#define COLOR_38 0x00AFD7
#define COLOR_39 0x00AFFF
#define COLOR_40 0x00D700
#define COLOR_41 0x00D75F
#define COLOR_42 0x00D787
#define COLOR_43 0x00D7AF
#define COLOR_44 0x00D7D7
#define COLOR_45 0x00D7FF
#define COLOR_46 0x00FF00
#define COLOR_47 0x00FF5F
#define COLOR_48 0x00FF87
#define COLOR_49 0x00FFAF
#define COLOR_50 0x00FFD7
#define COLOR_51 0x00FFFF
#define COLOR_52 0x5F0000
#define COLOR_53 0x5F005F
#define COLOR_54 0x5F0087
#define COLOR_55 0x5F00AF
#define COLOR_56 0x5F00D7
#define COLOR_57 0x5F00FF
#define COLOR_58 0x5F5F00
#define COLOR_59 0x5F5F5F
#define COLOR_60 0x5F5F87
#define COLOR_61 0x5F5FAF
#define COLOR_62 0x5F5FD7
#define COLOR_63 0x5F5FFF
#define COLOR_64 0x5F8700
#define COLOR_65 0x5F875F
#define COLOR_66 0x5F8787
#define COLOR_67 0x5F87AF
#define COLOR_68 0x5F87D7
#define COLOR_69 0x5F87FF
#define COLOR_70 0x5FAF00
#define COLOR_71 0x5FAF5F
#define COLOR_72 0x5FAF87
#define COLOR_73 0x5FAFAF
#define COLOR_74 0x5FAFD7
#define COLOR_75 0x5FAFFF
#define COLOR_76 0x5FD700
#define COLOR_77 0x5FD75F
#define COLOR_78 0x5FD787
#define COLOR_79 0x5FD7AF
#define COLOR_80 0x5FD7D7
#define COLOR_81 0x5FD7FF
#define COLOR_82 0x5FFF00
#define COLOR_83 0x5FFF5F
#define COLOR_84 0x5FFF87
#define COLOR_85 0x5FFFAF
#define COLOR_86 0x5FFFD7
#define COLOR_87 0x5FFFFF
#define COLOR_88 0x870000
#define COLOR_89 0x87005F
#define COLOR_90 0x870087
#define COLOR_91 0x8700AF
#define COLOR_92 0x8700D7
#define COLOR_93 0x8700FF
#define COLOR_94 0x875F00
#define COLOR_95 0x875F5F
#define COLOR_96 0x875F87
#define COLOR_97 0x875FAF
#define COLOR_98 0x875FD7
#define COLOR_99 0x875FFF
#define COLOR_100 0x878700
#define COLOR_101 0x87875F
#define COLOR_102 0x878787
#define COLOR_103 0x8787AF
#define COLOR_104 0x8787D7
#define COLOR_105 0x8787FF
#define COLOR_106 0x87AF00
#define COLOR_107 0x87AF5F
#define COLOR_108 0x87AF87
#define COLOR_109 0x87AFAF
#define COLOR_110 0x87AFD7
#define COLOR_111 0x87AFFF
#define COLOR_112 0x87D700
#define COLOR_113 0x87D75F
#define COLOR_114 0x87D787
#define COLOR_115 0x87D7AF
#define COLOR_116 0x87D7D7
#define COLOR_117 0x87D7FF
#define COLOR_118 0x87FF00
#define COLOR_119 0x87FF5F
#define COLOR_120 0x87FF87
#define COLOR_121 0x87FFAF
#define COLOR_122 0x87FFD7
#define COLOR_123 0x87FFFF
#define COLOR_124 0xAF0000
#define COLOR_125 0xAF005F
#define COLOR_126 0xAF0087
#define COLOR_127 0xAF00AF
#define COLOR_128 0xAF00D7
#define COLOR_129 0xAF00FF
#define COLOR_130 0xAF5F00
#define COLOR_131 0xAF5F5F
#define COLOR_132 0xAF5F87
#define COLOR_133 0xAF5FAF
#define COLOR_134 0xAF5FD7
#define COLOR_135 0xAF5FFF
#define COLOR_136 0xAF8700
#define COLOR_137 0xAF875F
#define COLOR_138 0xAF8787
#define COLOR_139 0xAF87AF
#define COLOR_140 0xAF87D7
#define COLOR_141 0xAF87FF
#define COLOR_142 0xAFAF00
#define COLOR_143 0xAFAF5F
#define COLOR_144 0xAFAF87
#define COLOR_145 0xAFAFAF
#define COLOR_146 0xAFAFD7
#define COLOR_147 0xAFAFFF
#define COLOR_148 0xAFD700
#define COLOR_149 0xAFD75F
#define COLOR_150 0xAFD787
#define COLOR_151 0xAFD7AF
#define COLOR_152 0xAFD7D7
#define COLOR_153 0xAFD7FF
#define COLOR_154 0xAFFF00
#define COLOR_155 0xAFFF5F
#define COLOR_156 0xAFFF87
#define COLOR_157 0xAFFFAF
#define COLOR_158 0xAFFFD7
#define COLOR_159 0xAFFFFF
#define COLOR_160 0xD70000
#define COLOR_161 0xD7005F
#define COLOR_162 0xD70087
#define COLOR_163 0xD700AF
#define COLOR_164 0xD700D7
#define COLOR_165 0xD700FF
#define COLOR_166 0xD75F00
#define COLOR_167 0xD75F5F
#define COLOR_168 0xD75F87
#define COLOR_169 0xD75FAF
#define COLOR_170 0xD75FD7
#define COLOR_171 0xD75FFF
#define COLOR_172 0xD78700
#define COLOR_173 0xD7875F
#define COLOR_174 0xD78787
#define COLOR_175 0xD787AF
#define COLOR_176 0xD787D7
#define COLOR_177 0xD787FF
#define COLOR_178 0xD7AF00
#define COLOR_179 0xD7AF5F
#define COLOR_180 0xD7AF87
#define COLOR_181 0xD7AFAF
#define COLOR_182 0xD7AFD7
#define COLOR_183 0xD7AFFF
#define COLOR_184 0xD7D700
#define COLOR_185 0xD7D75F
#define COLOR_186 0xD7D787
#define COLOR_187 0xD7D7AF
#define COLOR_188 0xD7D7D7
#define COLOR_189 0xD7D7FF
#define COLOR_190 0xD7FF00
#define COLOR_191 0xD7FF5F
#define COLOR_192 0xD7FF87
#define COLOR_193 0xD7FFAF
#define COLOR_194 0xD7FFD7
#define COLOR_195 0xD7FFFF
#define COLOR_196 0xFF0000
#define COLOR_197 0xFF005F
#define COLOR_198 0xFF0087
#define COLOR_199 0xFF00AF
#define COLOR_200 0xFF00D7
#define COLOR_201 0xFF00FF
#define COLOR_202 0xFF5F00
#define COLOR_203 0xFF5F5F
#define COLOR_204 0xFF5F87
#define COLOR_205 0xFF5FAF
#define COLOR_206 0xFF5FD7
#define COLOR_207 0xFF5FFF
#define COLOR_208 0xFF8700
#define COLOR_209 0xFF875F
#define COLOR_210 0xFF8787
#define COLOR_211 0xFF87AF
#define COLOR_212 0xFF87D7
#define COLOR_213 0xFF87FF
#define COLOR_214 0xFFAF00
#define COLOR_215 0xFFAF5F
#define COLOR_216 0xFFAF87
#define COLOR_217 0xFFAFAF
#define COLOR_218 0xFFAFD7
#define COLOR_219 0xFFAFFF
#define COLOR_220 0xFFD700
#define COLOR_221 0xFFD75F
#define COLOR_222 0xFFD787
#define COLOR_223 0xFFD7AF
#define COLOR_224 0xFFD7D7
#define COLOR_225 0xFFD7FF
#define COLOR_226 0xFFFF00
#define COLOR_227 0xFFFF5F
#define COLOR_228 0xFFFF87
#define COLOR_229 0xFFFFAF
#define COLOR_230 0xFFFFD7
#define COLOR_231 0xFFFFFF
#define COLOR_232 0x080808
#define COLOR_233 0x121212
#define COLOR_234 0x1C1C1C
#define COLOR_235 0x262626
#define COLOR_236 0x303030
#define COLOR_237 0x3A3A3A
#define COLOR_238 0x444444
#define COLOR_239 0x4E4E4E
#define COLOR_240 0x585858
#define COLOR_241 0x626262
#define COLOR_242 0x6C6C6C
#define COLOR_243 0x767676
#define COLOR_244 0x808080
#define COLOR_245 0x8A8A8A
#define COLOR_246 0x949494
#define COLOR_247 0x9E9E9E
#define COLOR_248 0xA8A8A8
#define COLOR_249 0xB2B2B2
#define COLOR_250 0xBCBCBC
#define COLOR_251 0xC6C6C6
#define COLOR_252 0xD0D0D0
#define COLOR_253 0xDADADA
#define COLOR_254 0xE4E4E4
#define COLOR_255 0xEEEEEE

const u32 color_palette[] = {
	/* system color: 16 */
	BLACK, RED, GREEN, BROWN, BLUE, MAGENTA, CYAN, GRAY,
	DARKGRAY, LIGHTRED, LIGHTGREEN, YELLOW, LIGHTBLUE, LIGHTMAGENTA, LIGHTCYAN, WHITE,
	/* color cube: 216 */
	COLOR_16, COLOR_17, COLOR_18, COLOR_19, COLOR_20, COLOR_21, COLOR_22, COLOR_23,
	COLOR_24, COLOR_25, COLOR_26, COLOR_27, COLOR_28, COLOR_29, COLOR_30, COLOR_31,
	COLOR_32, COLOR_33, COLOR_34, COLOR_35, COLOR_36, COLOR_37, COLOR_38, COLOR_39,
	COLOR_40, COLOR_41, COLOR_42, COLOR_43, COLOR_44, COLOR_45, COLOR_46, COLOR_47,
	COLOR_48, COLOR_49, COLOR_50, COLOR_51, COLOR_52, COLOR_53, COLOR_54, COLOR_55,
	COLOR_56, COLOR_57, COLOR_58, COLOR_59, COLOR_60, COLOR_61, COLOR_62, COLOR_63,
	COLOR_64, COLOR_65, COLOR_66, COLOR_67, COLOR_68, COLOR_69, COLOR_70, COLOR_71,
	COLOR_72, COLOR_73, COLOR_74, COLOR_75, COLOR_76, COLOR_77, COLOR_78, COLOR_79,
	COLOR_80, COLOR_81, COLOR_82, COLOR_83, COLOR_84, COLOR_85, COLOR_86, COLOR_87,
	COLOR_88, COLOR_89, COLOR_90, COLOR_91, COLOR_92, COLOR_93, COLOR_94, COLOR_95,
	COLOR_96, COLOR_97, COLOR_98, COLOR_99, COLOR_100, COLOR_101,COLOR_102, COLOR_103,
	COLOR_104, COLOR_105, COLOR_106, COLOR_107, COLOR_108, COLOR_109, COLOR_110, COLOR_111,
	COLOR_112, COLOR_113, COLOR_114, COLOR_115, COLOR_116, COLOR_117, COLOR_118, COLOR_119,
	COLOR_120, COLOR_121, COLOR_122, COLOR_123, COLOR_124, COLOR_125, COLOR_126, COLOR_127,
	COLOR_128, COLOR_129, COLOR_130, COLOR_131, COLOR_132, COLOR_133, COLOR_134, COLOR_135,
	COLOR_136, COLOR_137, COLOR_138, COLOR_139, COLOR_140, COLOR_141, COLOR_142, COLOR_143,
	COLOR_144, COLOR_145, COLOR_146, COLOR_147, COLOR_148, COLOR_149, COLOR_150, COLOR_151,
	COLOR_152, COLOR_153, COLOR_154, COLOR_155, COLOR_156, COLOR_157, COLOR_158, COLOR_159,
	COLOR_160, COLOR_161, COLOR_162, COLOR_163, COLOR_164, COLOR_165, COLOR_166, COLOR_167,
	COLOR_168, COLOR_169, COLOR_170, COLOR_171, COLOR_172, COLOR_173, COLOR_174, COLOR_175,
	COLOR_176, COLOR_177, COLOR_178, COLOR_179, COLOR_180, COLOR_181, COLOR_182, COLOR_183,
	COLOR_184, COLOR_185, COLOR_186, COLOR_187, COLOR_188, COLOR_189, COLOR_190, COLOR_191,
	COLOR_192, COLOR_193, COLOR_194, COLOR_195, COLOR_196, COLOR_197, COLOR_198, COLOR_199,
	COLOR_200, COLOR_201, COLOR_202, COLOR_203, COLOR_204, COLOR_205, COLOR_206, COLOR_207,
	COLOR_208, COLOR_209, COLOR_210, COLOR_211, COLOR_212, COLOR_213, COLOR_214, COLOR_215,
	COLOR_216, COLOR_217, COLOR_218, COLOR_219, COLOR_220, COLOR_221, COLOR_222, COLOR_223,
	COLOR_224, COLOR_225, COLOR_226, COLOR_227, COLOR_228, COLOR_229, COLOR_230, COLOR_231,
	/* gray scale: 24 */
	COLOR_232, COLOR_233, COLOR_234, COLOR_235, COLOR_236, COLOR_237, COLOR_238, COLOR_239,
	COLOR_240, COLOR_241, COLOR_242, COLOR_243, COLOR_244, COLOR_245, COLOR_246, COLOR_247,
	COLOR_248, COLOR_249, COLOR_250, COLOR_251, COLOR_252, COLOR_253, COLOR_254, COLOR_255,
};