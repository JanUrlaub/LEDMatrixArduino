#include <MD_MAX72xx.h>
//https://pjrp.github.io/MDParolaFontEditor
MD_MAX72XX::fontType_t kathiFont[] PROGMEM = 
{
	6, 2, 0, 0, 0, 255, 8, 	// 0
	0, 	// 1 - 'Empty Cell'
	5, 62, 91, 79, 91, 62, 	// 2 - 'Sad Smiley'
	5, 62, 107, 79, 107, 62, 	// 3 - 'Happy Smiley'
	5, 28, 62, 124, 62, 28, 	// 4 - 'Heart'
	5, 24, 60, 126, 60, 24, 	// 5 - 'Diamond'
	5, 28, 87, 125, 87, 28, 	// 6 - 'Clubs'
	5, 28, 94, 127, 94, 28, 	// 7 - 'Spades'
	4, 0, 24, 60, 24, 	// 8 - 'Bullet Point'
	5, 255, 231, 195, 231, 255, 	// 9 - 'Rev Bullet Point'
	4, 0, 24, 36, 24, 	// 10 - 'Hollow Bullet Point'
	5, 255, 231, 219, 231, 255, 	// 11 - 'Rev Hollow BP'
	5, 48, 72, 58, 6, 14, 	// 12 - 'Male'
	5, 38, 41, 121, 41, 38, 	// 13 - 'Female'
	5, 64, 127, 5, 5, 7, 	// 14 - 'Music Note 1'
	5, 64, 127, 5, 37, 63, 	// 15 - 'Music Note 2'
	5, 90, 60, 231, 60, 90, 	// 16 - 'Snowflake'
	5, 127, 62, 28, 28, 8, 	// 17 - 'Right Pointer'
	5, 8, 28, 28, 62, 127, 	// 18 - 'Left Pointer'
	5, 20, 34, 127, 34, 20, 	// 19 - 'UpDown Arrows'
	5, 255, 255, 255, 255, 255, 	// 20 - 'Full Block'
	5, 240, 240, 240, 240, 240, 	// 21 - 'Half Block Bottom'
	3, 255, 255, 255, 	// 22 - 'Half Block LHS'
	5, 0, 0, 0, 255, 255, 	// 23 - 'Half Block RHS'
	5, 15, 15, 15, 15, 15, 	// 24 - 'Half Block Top'
	5, 8, 4, 126, 4, 8, 	// 25 - 'Up Arrow'
	5, 16, 32, 126, 32, 16, 	// 26 - 'Down Arrow'
	5, 8, 8, 42, 28, 8, 	// 27 - 'Right Arrow'
	5, 8, 28, 42, 8, 8, 	// 28 - 'Left Arrow'
	5, 170, 0, 85, 0, 170, 	// 29 - '30% shading'
	5, 170, 85, 170, 85, 170, 	// 30 - '50% shading'
	5, 48, 56, 62, 56, 48, 	// 31 - 'Up Pointer'
	5, 6, 14, 62, 14, 6, 	// 32 - 'Down Pointer'
	2, 0, 0, 	// 33  - 'Space'
	1, 95, 	// 34 - '!'
	3, 7, 0, 7, 	// 35 - '""'
	5, 20, 127, 20, 127, 20, 	// 36 - '#'
	5, 68, 74, 255, 74, 50, 	// 37 - '$'
	5, 99, 19, 8, 100, 99, 	// 38 - '%'
	5, 54, 73, 73, 54, 72, 	// 39 - '&'
	1, 7, 	// 40 - '''
	3, 62, 65, 65, 	// 41 - '('
	3, 65, 65, 62, 	// 42 - ')'
	5, 8, 42, 28, 42, 8, 	// 43 - '*'
	5, 8, 8, 62, 8, 8, 	// 44 - '+'
	3, 96, 224, 0, 	// 45'
	4, 8, 8, 8, 8, 	// 46 - '-'
	2, 96, 96, 	// 47 - '.'
	6, 31, 63, 48, 48, 63, 31, 	// 48 - 0
	6, 0, 0, 0, 0, 63, 63, 	// 49 - 1
	6, 63, 63, 49, 49, 49, 48, 	// 50 - 2
	6, 49, 49, 49, 49, 63, 30, 	// 51 - 3
	6, 1, 1, 1, 1, 63, 63, 	// 52 - 4
	6, 49, 49, 49, 49, 63, 31, 	// 53 - 5
	6, 15, 0, 0, 0, 0, 0, 	// 54 - '4'
	5, 79, 73, 73, 73, 49, 	// 55 - '5'
	5, 62, 73, 73, 73, 48, 	// 56 - '6'
	5, 3, 1, 1, 1, 127, 	// 57 - '7'
	5, 1, 1, 121, 5, 3, 	// 58 - european style '7'
	5, 54, 73, 73, 73, 54, 	// 59 - '8'
	5, 6, 73, 73, 73, 62, 	// 60 - '9'
	2, 108, 108, 	// 61 - ':'
	2, 108, 236, 	// 62 - ';'
	3, 8, 20, 34, 	// 63 - '<'
	4, 20, 20, 20, 20, 	// 64 - '='
	3, 34, 20, 8, 	// 65 - '>'
	5, 1, 89, 9, 9, 6, 	// 66 - '?'
	5, 62, 65, 93, 89, 78, 	// 67 - '@'
	5, 126, 9, 9, 9, 126, 	// 68 - 'A'
	5, 127, 73, 73, 73, 54, 	// 69 - 'B'
	5, 62, 65, 65, 65, 65, 	// 70 - 'C'
	5, 127, 65, 65, 65, 62, 	// 71 - 'D'
	5, 127, 73, 73, 73, 65, 	// 72 - 'E'
	5, 127, 9, 9, 9, 1, 	// 73 - 'F'
	5, 62, 65, 65, 73, 121, 	// 74 - 'G'
	5, 127, 8, 8, 8, 127, 	// 75 - 'H'
	3, 65, 127, 65, 	// 76 - 'I'
	5, 48, 65, 65, 65, 63, 	// 77 - 'J'
	5, 127, 8, 20, 34, 65, 	// 78 - 'K'
	5, 127, 64, 64, 64, 64, 	// 79 - 'L'
	5, 127, 2, 12, 2, 127, 	// 80 - 'M'
	5, 127, 4, 8, 16, 127, 	// 81 - 'N'
	5, 62, 65, 65, 65, 62, 	// 82 - 'O'
	5, 127, 9, 9, 9, 6, 	// 83 - 'P'
	5, 62, 65, 65, 97, 126, 	// 84 - 'Q'
	5, 127, 9, 25, 41, 70, 	// 85 - 'R'
	5, 70, 73, 73, 73, 49, 	// 86 - 'S'
	5, 1, 1, 127, 1, 1, 	// 87 - 'T'
	5, 63, 64, 64, 64, 63, 	// 88 - 'U'
	5, 31, 32, 64, 32, 31, 	// 89 - 'V'
	5, 63, 64, 56, 64, 63, 	// 90 - 'W'
	5, 99, 20, 8, 20, 99, 	// 91 - 'X'
	5, 3, 4, 120, 4, 3, 	// 92 - 'Y'
	5, 97, 81, 73, 69, 67, 	// 93 - 'Z'
	3, 127, 65, 65, 	// 94 - '['
	5, 3, 4, 8, 16, 96, 	// 95 - '\'
	3, 65, 65, 127, 	// 96 - ']'
	5, 4, 2, 1, 2, 4, 	// 97 - '^'
	4, 128, 128, 128, 128, 	// 98 - '_'
	3, 1, 2, 4, 	// 99 - '`'
	4, 56, 68, 68, 124, 	// 100 - 'a'
	4, 127, 68, 68, 56, 	// 101 - 'b'
	4, 56, 68, 68, 68, 	// 102 - 'c'
	4, 56, 68, 68, 127, 	// 103 - 'd'
	4, 56, 84, 84, 88, 	// 104 - 'e'
	4, 4, 126, 5, 1, 	// 105 - 'f'
	4, 24, 164, 164, 124, 	// 106 - 'g'
	4, 127, 4, 4, 120, 	// 107 - 'h'
	1, 125, 	// 108 - 'i'
	3, 132, 133, 124, 	// 109 - 'j'
	4, 127, 16, 40, 68, 	// 110 - 'k'
	1, 127, 	// 111 - 'l'
	5, 124, 4, 120, 4, 120, 	// 112 - 'm'
	4, 124, 4, 4, 120, 	// 113 - 'n'
	4, 56, 68, 68, 56, 	// 114 - 'o'
	4, 252, 36, 36, 24, 	// 115 - 'p'
	4, 24, 36, 36, 252, 	// 116 - 'q'
	4, 124, 4, 4, 8, 	// 117 - 'r'
	4, 88, 84, 84, 52, 	// 118 - 's'
	3, 4, 127, 4, 	// 119 - 't'
	4, 60, 64, 64, 124, 	// 120 - 'u'
	4, 28, 32, 64, 124, 	// 121 - 'v'
	5, 60, 64, 48, 64, 60, 	// 122 - 'w'
	4, 108, 16, 16, 108, 	// 123 - 'x'
	4, 28, 160, 160, 124, 	// 124 - 'y'
	4, 100, 84, 84, 76, 	// 125 - 'z'
	4, 8, 54, 65, 65, 	// 126 - '{'
	1, 127, 	// 127 - '|'
	4, 65, 65, 54, 8, 	// 128 - '}'
	4, 2, 1, 2, 1, 	// 129 - '~'
	5, 127, 65, 65, 65, 127, 	// 130 - 'Hollow Block'
	5, 62, 85, 85, 85, 65, 	// 131 - 'Euro symbol'
	5, 56, 68, 68, 56, 68, 	// 132 - 'Alpha'
	5, 124, 42, 42, 62, 20, 	// 133 - 'Beta'
	5, 126, 2, 2, 6, 6, 	// 134 - 'Gamma'
	5, 2, 126, 2, 126, 2, 	// 135 - 'Pi'
	5, 99, 85, 73, 65, 99, 	// 136 - 'Sigma'
	5, 56, 68, 68, 60, 4, 	// 137 - 'Theta'
	5, 64, 126, 32, 30, 32, 	// 138 - 'mu'
	5, 6, 2, 126, 2, 2, 	// 139 - 'Tau'
	8, 99, 19, 8, 100, 99, 0, 96, 96, 	// 140 - 'Percent 00'
	5, 42, 42, 42, 42, 42, 	// 141 - '3 Bar Equals'
	3, 81, 74, 68, 	// 142 - '>='
	3, 68, 74, 81, 	// 143 - '<='
	5, 0, 0, 255, 1, 3, 	// 144 - 'Top of Integral'
	3, 224, 128, 255, 	// 145 - 'Bot of Integral'
	5, 54, 18, 54, 36, 54, 	// 146 - 'Wavy ='
	3, 2, 5, 2, 	// 147 - 'Degree'
	2, 24, 24, 	// 148 - 'Math Product'
	2, 16, 16, 	// 149 - 'Short Dash'
	5, 48, 64, 255, 1, 1, 	// 150 - 'Square Root'
	4, 31, 1, 1, 30, 	// 151 - 'Superscript n'
	0, 	// 152
	0, 	// 153  
	0, 	// 154  
	0, 	// 155
	9, 1, 1, 127, 1, 127, 2, 12, 2, 127, 	// 156 - 'Trademark'
	0, 	// 157
	0, 	// 158
	0, 	// 159
	0, 	// 160
	0, 	// 161
	0, 	// 162
	1, 0, 	// 163 - ' Non-breaking space'
	1, 125, 	// 164 - '¡ Inverted Exclamation Mark'
	4, 24, 36, 126, 36, 	// 165 - '¢ Cent sign'
	4, 68, 126, 69, 65, 	// 166 - '£ Pound sign'
	5, 34, 28, 20, 28, 34, 	// 167 - '¤ Currency sign'
	5, 1, 42, 124, 42, 1, 	// 168 - '¥ Yen sign'
	1, 119, 	// 169 - '¦ Broken bar'
	4, 78, 85, 85, 57, 	// 170 - '§ Section sign'
	3, 2, 0, 2, 	// 171 - '¨ Diaeresis (Umlaut)'
	7, 126, 129, 189, 165, 165, 129, 126, 	// 172 - '© Copyright sign'
	3, 38, 41, 47, 	// 173 - 'ª Feminine Ordinal Indicator'
	5, 8, 20, 42, 20, 34, 	// 174 - '« Left-pointing double angle quotation mark'
	4, 8, 8, 8, 24, 	// 175 - '¬ Not sign'
	6, 248, 252, 12, 12, 252, 248, 	// 176 - 0
	6, 128, 192, 96, 48, 248, 252, 	// 177 - 1
	6, 12, 140, 140, 140, 252, 248, 	// 178 - 2
	6, 140, 140, 140, 140, 252, 120, 	// 179 - 3
	6, 252, 252, 128, 128, 252, 252, 	// 180 - 4
	6, 252, 252, 140, 140, 140, 12, 	// 181 - 5
	6, 21, 0, 0, 0, 0, 0, 	// 182 - '³ Superscript three'
	2, 2, 1, 	// 183 - '´ Acute accent'
	4, 248, 32, 64, 120, 	// 184 - 'µ Micro sign'
	5, 6, 9, 127, 1, 127, 	// 185 - 'Pilcrow sign'
	2, 24, 24, 	// 186 - '· Middle dot'
	4, 0, 128, 160, 192, 	// 187 - '¸ Cedilla'
	3, 18, 31, 16, 	// 188 - '¹ Superscript one'
	3, 38, 41, 38, 	// 189 - 'º Masculine ordinal indicator'
	5, 34, 20, 42, 20, 8, 	// 190 - '» Right-pointing double angle quotation mark'
	8, 64, 47, 16, 8, 4, 30, 17, 124, 	// 191 - '¼ Vulgar fraction one quarter'
	8, 64, 47, 16, 8, 4, 98, 85, 76, 	// 192 - '½ Vulgar fraction one half'
	9, 21, 85, 63, 16, 8, 4, 30, 17, 124, 	// 193 - '¾ Vulgar fraction three quarters'
	5, 48, 72, 72, 77, 64, 	// 194 - '¿ Inverted Question Mark'
	5, 120, 21, 22, 20, 120, 	// 195 - 'À Latin Capital Letter A with grave'
	5, 120, 20, 22, 21, 120, 	// 196 - 'Á Latin Capital letter A with acute'
	5, 122, 21, 20, 21, 122, 	// 197 - 'Â Latin Capital letter A with circumflex'
	5, 120, 22, 21, 22, 121, 	// 198 - 'Ã Latin Capital letter A with tilde'
	5, 120, 21, 20, 21, 120, 	// 199 - 'Ä Latin Capital letter A with diaeresis'
	5, 120, 20, 21, 20, 120, 	// 200 - 'Å Latin Capital letter A with ring above'
	7, 126, 9, 9, 127, 73, 73, 65, 	// 201 - 'Æ Latin Capital letter Æ'
	5, 158, 161, 97, 33, 33, 	// 202 - 'Ç Latin Capital letter C with cedilla'
	5, 124, 84, 85, 70, 68, 	// 203 - 'È Latin Capital letter E with grave'
	5, 124, 84, 86, 69, 68, 	// 204 - 'É Latin Capital letter E with acute'
	5, 126, 85, 84, 69, 70, 	// 205 - 'Ê Latin Capital letter E with circumflex'
	5, 124, 85, 84, 69, 68, 	// 206 - 'Ë Latin Capital letter E with diaeresis'
	3, 69, 126, 68, 	// 207 - 'Ì Latin Capital letter I with grave'
	3, 68, 126, 69, 	// 208 - 'Í Latin Capital letter I with acute'
	3, 70, 125, 70, 	// 209 - 'Î Latin Capital letter I with circumflex'
	3, 69, 124, 69, 	// 210 - 'Ï Latin Capital letter I with diaeresis'
	5, 8, 127, 73, 65, 62, 	// 211 - 'Ð Latin Capital letter Eth'
	5, 124, 10, 17, 34, 125, 	// 212 - 'Ñ Latin Capital letter N with tilde'
	5, 56, 68, 69, 70, 56, 	// 213 - 'Ò Latin Capital letter O with grave'
	5, 56, 68, 70, 69, 56, 	// 214 - 'Ó Latin Capital letter O with acute'
	5, 58, 69, 68, 69, 58, 	// 215 - 'Ô Latin Capital letter O with circumflex'
	5, 56, 70, 69, 70, 57, 	// 216 - 'Õ Latin Capital letter O with tilde'
	5, 56, 69, 68, 69, 56, 	// 217 - 'Ö Latin Capital letter O with diaeresis'
	5, 34, 20, 8, 20, 34, 	// 218 - '× Multiplication sign'
	5, 124, 98, 90, 70, 62, 	// 219 - 'Ø Latin Capital letter O with stroke'
	5, 60, 64, 65, 66, 60, 	// 220 - 'Ù Latin Capital letter U with grave'
	5, 60, 64, 66, 65, 60, 	// 221 - 'Ú Latin Capital letter U with acute'
	5, 60, 66, 65, 66, 60, 	// 222 - 'Û Latin Capital Letter U with circumflex'
	5, 60, 65, 64, 65, 60, 	// 223 - 'Ü Latin Capital Letter U with diaeresis'
	5, 2, 4, 122, 5, 2, 	// 224 - 'Ý Latin Capital Letter Y with acute'
	4, 63, 18, 18, 12, 	// 225 - 'Þ Latin Capital Letter Thorn'
	5, 126, 73, 73, 78, 48, 	// 226 - 'ß Latin Small Letter sharp S'
	4, 56, 69, 70, 124, 	// 227 - 'à Latin Small Letter A with grave'
	4, 56, 68, 70, 125, 	// 228 - 'á Latin Small Letter A with acute'
	4, 56, 70, 69, 126, 	// 229 - 'â Latin Small Letter A with circumflex'
	4, 58, 69, 70, 125, 	// 230 - 'ã Latin Small Letter A with tilde'
	4, 56, 69, 68, 125, 	// 231 - 'ä Latin Small Letter A with diaeresis'
	4, 48, 74, 77, 122, 	// 232 - 'å Latin Small Letter A with ring above'
	7, 32, 84, 84, 56, 84, 84, 88, 	// 233 - 'æ Latin Small Letter Æ'
	4, 156, 162, 98, 34, 	// 234 - 'ç Latin Small Letter C with cedilla'
	4, 56, 85, 86, 88, 	// 235 - 'è Latin Small Letter E with grave'
	4, 56, 84, 86, 89, 	// 236 - 'é Latin Small Letter E with acute'
	4, 56, 86, 85, 90, 	// 237 - 'ê Latin Small Letter E with circumflex'
	4, 56, 85, 84, 89, 	// 238 - 'ë Latin Small Letter E with diaeresis'
	2, 1, 122, 	// 239 - 'ì Latin Small Letter I with grave'
	2, 122, 1, 	// 240 - 'í Latin Small Letter I with acute'
	3, 2, 121, 2, 	// 241 - 'î Latin Small Letter I with circumflex'
	3, 2, 120, 2, 	// 242 - 'ï Latin Small Letter I with diaeresis'
	4, 48, 75, 75, 60, 	// 243 - 'ð Latin Small Letter Eth'
	4, 122, 9, 10, 113, 	// 244 - 'ñ Latin Small Letter N with tilde'
	4, 48, 73, 74, 48, 	// 245 - 'ò Latin Small Letter O with grave'
	4, 48, 72, 74, 49, 	// 246 - 'ó Latin Small Letter O with acute'
	4, 48, 74, 73, 50, 	// 247 - 'ô Latin Small Letter O with circumflex'
	4, 50, 73, 74, 49, 	// 248 - 'õ Latin Small Letter O with tilde'
	4, 57, 68, 68, 57, 	// 249 - 'ö Latin Small Letter O with diaeresis'
	5, 8, 8, 42, 8, 8, 	// 250 - '÷ Division sign'
	4, 56, 84, 76, 56, 	// 251 - 'ø Latin Small Letter O with stroke'
	4, 56, 65, 66, 120, 	// 252 - 'ù Latin Small Letter U with grave'
	4, 56, 64, 66, 121, 	// 253 - 'ú Latin Small Letter U with acute'
	4, 56, 66, 65, 122, 	// 254 - 'û Latin Small Letter U with circumflex'
	4, 58, 64, 64, 122, 	// 255 - 'ü Latin Small Letter U with diaeresis'
};