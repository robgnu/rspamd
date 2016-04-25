
#line 1 "src/ragel/smtp_addr_parser.rl"

#line 76 "src/ragel/smtp_addr_parser.rl"



#line 9 "src/libmime/parsers/smtp_addr_parser.c"
static const char _smtp_addr_parser_trans_keys[] = {
	0, 0, 9, 126, 33, 126, 33, 126, 48, 122, 48, 122, 48, 122, 48, 122,
	46, 122, 48, 57, 46, 57, 48, 57, 46, 57, 48, 57, 48, 93, 48, 93,
	93, 93, 46, 57, 46, 46, 46, 57, 46, 46, 46, 122, 46, 122, 48, 122,
	33, 126, 33, 126, 48, 122, 32, 126, 32, 126, 64, 64, 32, 126, 33, 126,
	33, 126, 33, 126, 48, 122, 46, 122, 48, 122, 48, 122, 48, 122, 46, 122,
	48, 57, 46, 57, 48, 57, 46, 57, 48, 57, 48, 93, 48, 93, 93, 93,
	62, 62, 46, 57, 46, 46, 46, 57, 46, 46, 46, 122, 46, 122, 48, 122,
	33, 126, 33, 126, 48, 122, 32, 126, 32, 126, 64, 64, 32, 126, 48, 122,
	44, 122, 64, 64, 33, 126, 48, 122, 48, 122, 44, 122, 64, 64, 33, 126,
	48, 122, 9, 122, 9, 32, 9, 32, 9, 32, 9, 32, 0
};

static const char _smtp_addr_parser_key_spans[] = {
	0, 118, 94, 94, 75, 75, 75, 75,
	77, 10, 12, 10, 12, 10, 46, 46,
	1, 12, 1, 12, 1, 77, 77, 75,
	94, 94, 75, 95, 95, 1, 95, 94,
	94, 94, 75, 77, 75, 75, 75, 77,
	10, 12, 10, 12, 10, 46, 46, 1,
	1, 12, 1, 12, 1, 77, 77, 75,
	94, 94, 75, 95, 95, 1, 95, 75,
	79, 1, 94, 75, 75, 79, 1, 94,
	75, 114, 24, 24, 24, 24
};

static const short _smtp_addr_parser_index_offsets[] = {
	0, 0, 119, 214, 309, 385, 461, 537,
	613, 691, 702, 715, 726, 739, 750, 797,
	844, 846, 859, 861, 874, 876, 954, 1032,
	1108, 1203, 1298, 1374, 1470, 1566, 1568, 1664,
	1759, 1854, 1949, 2025, 2103, 2179, 2255, 2331,
	2409, 2420, 2433, 2444, 2457, 2468, 2515, 2562,
	2564, 2566, 2579, 2581, 2594, 2596, 2674, 2752,
	2828, 2923, 3018, 3094, 3190, 3286, 3288, 3384,
	3460, 3540, 3542, 3637, 3713, 3789, 3869, 3871,
	3966, 4042, 4157, 4182, 4207, 4232
};

static const char _smtp_addr_parser_indicies[] = {
	0, 0, 0, 0, 0, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	0, 2, 3, 2, 2, 2, 2, 2,
	1, 1, 2, 2, 1, 1, 1, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 1, 1, 4, 2, 1, 2,
	5, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 1, 1, 1, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 1,
	6, 1, 6, 6, 6, 6, 6, 1,
	1, 6, 6, 1, 1, 7, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 1, 1, 1, 6, 1, 6, 8,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 1, 1, 1, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 1, 6,
	1, 6, 6, 6, 6, 6, 1, 1,
	6, 6, 1, 1, 1, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	1, 1, 1, 6, 1, 6, 1, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 1, 1, 1, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 1, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	1, 1, 1, 1, 1, 1, 1, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 10, 1, 1, 1, 1, 1, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 1, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 1, 1, 1, 1,
	1, 1, 1, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 1, 1, 1,
	1, 1, 1, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 1, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	1, 1, 1, 1, 1, 1, 1, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 1, 1, 1, 1, 12, 1, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 1, 13, 13, 13, 13, 13, 13,
	13, 13, 13, 13, 1, 1, 1, 1,
	1, 1, 1, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 1, 1, 1,
	1, 15, 1, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 1, 16, 1,
	17, 17, 17, 17, 17, 17, 17, 17,
	17, 17, 18, 1, 1, 1, 1, 1,
	1, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 1, 1, 1, 1, 20,
	1, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 1, 21, 21, 21, 21,
	21, 21, 21, 21, 21, 21, 1, 22,
	1, 23, 23, 23, 23, 23, 23, 23,
	23, 23, 23, 1, 24, 24, 24, 24,
	24, 24, 24, 24, 24, 24, 1, 25,
	1, 26, 26, 26, 26, 26, 26, 26,
	26, 26, 26, 1, 27, 27, 27, 27,
	27, 27, 27, 27, 27, 27, 1, 28,
	28, 28, 28, 28, 28, 28, 28, 28,
	28, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 29, 1, 30, 30,
	30, 30, 30, 30, 30, 30, 30, 30,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 29, 1, 29, 1, 25,
	1, 31, 31, 31, 31, 31, 31, 31,
	31, 31, 31, 1, 25, 1, 22, 1,
	32, 32, 32, 32, 32, 32, 32, 32,
	32, 32, 1, 22, 1, 16, 1, 33,
	33, 33, 33, 33, 33, 33, 33, 33,
	33, 18, 1, 1, 1, 1, 1, 1,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 1, 1, 1, 1, 20, 1,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 1, 16, 1, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 18,
	1, 1, 1, 1, 1, 1, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	1, 1, 1, 1, 20, 1, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	1, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 18, 1, 1, 1, 1,
	1, 1, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 1, 1, 1, 1,
	20, 1, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 1, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 1,
	1, 1, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 1, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 1, 1,
	29, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 34, 34, 34, 34, 34, 34,
	34, 34, 1, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 1, 1, 1,
	1, 1, 1, 1, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 1, 1,
	1, 1, 20, 1, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 1, 35,
	35, 36, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 37, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 35, 35,
	35, 35, 35, 35, 35, 35, 1, 38,
	38, 39, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 40, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 1, 41,
	1, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	38, 38, 38, 38, 38, 38, 38, 38,
	1, 42, 43, 42, 42, 42, 42, 42,
	1, 1, 42, 42, 1, 1, 1, 42,
	42, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 1, 1, 1, 42, 44, 42,
	45, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 42, 1, 1, 1, 42, 42,
	42, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 42, 42, 42, 42, 42, 42,
	42, 42, 42, 42, 42, 42, 42, 1,
	46, 1, 46, 46, 46, 46, 46, 1,
	1, 46, 46, 1, 1, 47, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 1, 1, 1, 46, 1, 46, 48,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 1, 1, 1, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 1, 46,
	1, 46, 46, 46, 46, 46, 1, 1,
	46, 46, 1, 1, 1, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	1, 1, 1, 46, 1, 46, 1, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 1, 1, 1, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 1, 49, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	1, 1, 1, 1, 1, 1, 1, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	49, 50, 1, 1, 1, 1, 1, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	49, 49, 49, 49, 49, 49, 49, 49,
	49, 1, 51, 1, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 1, 1,
	1, 1, 53, 1, 1, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 1,
	1, 1, 1, 54, 1, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 1,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 1, 1, 1, 1, 1, 1,
	1, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 1, 1, 1, 1, 1,
	1, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 1, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 1, 1,
	1, 1, 1, 1, 1, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 1,
	1, 1, 1, 54, 1, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 52,
	52, 52, 52, 52, 52, 52, 52, 1,
	55, 55, 55, 55, 55, 55, 55, 55,
	55, 55, 1, 1, 1, 1, 1, 1,
	1, 56, 56, 56, 56, 56, 56, 56,
	56, 56, 56, 56, 56, 56, 56, 56,
	56, 56, 56, 56, 56, 56, 56, 56,
	56, 56, 56, 1, 1, 1, 1, 57,
	1, 56, 56, 56, 56, 56, 56, 56,
	56, 56, 56, 56, 56, 56, 56, 56,
	56, 56, 56, 56, 56, 56, 56, 56,
	56, 56, 56, 1, 58, 1, 59, 59,
	59, 59, 59, 59, 59, 59, 59, 59,
	60, 1, 1, 1, 1, 1, 1, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 1, 1, 1, 1, 62, 1, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 1, 63, 63, 63, 63, 63, 63,
	63, 63, 63, 63, 1, 64, 1, 65,
	65, 65, 65, 65, 65, 65, 65, 65,
	65, 1, 66, 66, 66, 66, 66, 66,
	66, 66, 66, 66, 1, 67, 1, 68,
	68, 68, 68, 68, 68, 68, 68, 68,
	68, 1, 69, 69, 69, 69, 69, 69,
	69, 69, 69, 69, 1, 70, 70, 70,
	70, 70, 70, 70, 70, 70, 70, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 71, 1, 72, 72, 72, 72,
	72, 72, 72, 72, 72, 72, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 71, 1, 71, 1, 73, 1, 67,
	1, 74, 74, 74, 74, 74, 74, 74,
	74, 74, 74, 1, 67, 1, 64, 1,
	75, 75, 75, 75, 75, 75, 75, 75,
	75, 75, 1, 64, 1, 58, 1, 76,
	76, 76, 76, 76, 76, 76, 76, 76,
	76, 60, 1, 1, 1, 1, 1, 1,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 1, 1, 1, 1, 62, 1,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 1, 58, 1, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 60,
	1, 1, 1, 1, 1, 1, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	1, 1, 1, 1, 62, 1, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	1, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 60, 1, 1, 1, 1,
	1, 1, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 1, 1, 1, 1,
	62, 1, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 1, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 1,
	1, 1, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 1, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 1, 1,
	71, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 77, 77, 77, 77, 77, 77,
	77, 77, 1, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 1, 1, 1,
	1, 1, 1, 1, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 1, 1,
	1, 1, 62, 1, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 61, 61,
	61, 61, 61, 61, 61, 61, 1, 78,
	78, 79, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 80, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 78, 78,
	78, 78, 78, 78, 78, 78, 1, 81,
	81, 82, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 83, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 1, 84,
	1, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	81, 81, 81, 81, 81, 81, 81, 81,
	1, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 1, 1, 1, 1, 1,
	1, 1, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 1, 1, 1, 1,
	1, 1, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 1, 86, 1, 87,
	1, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 88, 1, 1, 1, 1,
	1, 1, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 1, 1, 1, 1,
	89, 1, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 1, 87, 1, 90,
	91, 90, 90, 90, 90, 90, 1, 1,
	90, 90, 1, 1, 1, 90, 90, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	1, 1, 1, 90, 1, 90, 1, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	90, 1, 1, 1, 90, 90, 90, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	90, 90, 90, 90, 90, 90, 90, 90,
	90, 90, 90, 90, 90, 1, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	1, 1, 1, 1, 1, 1, 1, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 1, 1, 1, 1, 89, 1, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 85, 85, 85, 85, 85, 85, 85,
	85, 1, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 1, 1, 1, 1,
	1, 1, 1, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 1, 1, 1,
	1, 1, 1, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 1, 93, 1,
	94, 1, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 95, 1, 1, 1,
	1, 1, 1, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 1, 1, 1,
	1, 96, 1, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 1, 94, 1,
	97, 98, 97, 97, 97, 97, 97, 1,
	1, 97, 97, 1, 1, 1, 97, 97,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 1, 1, 1, 97, 1, 97, 1,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 97, 1, 1, 1, 97, 97, 97,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 97, 97, 97, 97, 97, 97, 97,
	97, 97, 97, 97, 97, 97, 1, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 1, 1, 1, 1, 1, 1, 1,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 1, 1, 1, 1, 96, 1,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 92, 92, 92, 92, 92, 92,
	92, 92, 1, 99, 99, 99, 99, 99,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 99, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	100, 1, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 1, 1, 1, 1,
	1, 1, 1, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 1, 1, 1,
	1, 12, 1, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 1, 101, 101,
	101, 101, 101, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 101, 1, 102,
	102, 102, 102, 102, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 102, 1,
	103, 103, 103, 103, 103, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 103,
	1, 104, 104, 104, 104, 104, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	104, 1, 0
};

static const char _smtp_addr_parser_trans_targs[] = {
	1, 0, 2, 27, 31, 68, 2, 3,
	4, 73, 7, 73, 6, 8, 23, 26,
	9, 21, 24, 23, 26, 10, 11, 19,
	12, 13, 17, 14, 15, 75, 16, 18,
	20, 22, 25, 28, 29, 30, 28, 29,
	30, 4, 32, 59, 77, 63, 32, 33,
	34, 35, 38, 36, 35, 76, 37, 39,
	55, 58, 40, 53, 56, 55, 58, 41,
	42, 51, 43, 44, 49, 45, 46, 48,
	47, 76, 50, 52, 54, 57, 60, 61,
	62, 60, 61, 62, 34, 64, 65, 63,
	66, 67, 32, 59, 69, 70, 68, 71,
	72, 2, 27, 74, 5, 74, 74, 74,
	74
};

static const char _smtp_addr_parser_trans_actions[] = {
	0, 0, 1, 2, 0, 2, 0, 0,
	3, 4, 0, 0, 0, 5, 5, 5,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 6, 0, 0,
	0, 0, 0, 7, 8, 7, 0, 3,
	0, 9, 10, 11, 0, 11, 0, 0,
	3, 4, 0, 0, 0, 12, 0, 5,
	5, 5, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 6,
	0, 13, 0, 0, 0, 0, 7, 8,
	7, 0, 3, 0, 9, 0, 0, 0,
	0, 0, 7, 0, 0, 0, 0, 0,
	0, 7, 0, 14, 0, 0, 15, 16,
	17
};

static const char _smtp_addr_parser_eof_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 14, 0, 15, 16, 17
};

static const int smtp_addr_parser_start = 1;
static const int smtp_addr_parser_first_final = 73;
static const int smtp_addr_parser_error = 0;

static const int smtp_addr_parser_en_main = 1;


#line 79 "src/ragel/smtp_addr_parser.rl"

static int
rspamd_smtp_addr_parse (const char *data, size_t len, struct rspamd_email_address *addr)
{
  const char *p = data, *pe = data + len, *eof;
  int cs;

  g_assert (addr != NULL);
  memset (addr, 0, sizeof (*addr));
  addr->raw = data;
  addr->raw_len = len;
  eof = pe;


#line 654 "src/libmime/parsers/smtp_addr_parser.c"
	{
	cs = smtp_addr_parser_start;
	}

#line 93 "src/ragel/smtp_addr_parser.rl"

#line 661 "src/libmime/parsers/smtp_addr_parser.c"
	{
	int _slen;
	int _trans;
	const char *_keys;
	const char *_inds;
	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	_keys = _smtp_addr_parser_trans_keys + (cs<<1);
	_inds = _smtp_addr_parser_indicies + _smtp_addr_parser_index_offsets[cs];

	_slen = _smtp_addr_parser_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=(*p) &&
		(*p) <= _keys[1] ?
		(*p) - _keys[0] : _slen ];

	cs = _smtp_addr_parser_trans_targs[_trans];

	if ( _smtp_addr_parser_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _smtp_addr_parser_trans_actions[_trans] ) {
	case 7:
#line 5 "src/ragel/smtp_addr_parser.rl"
	{
    addr->user = p;
  }
	break;
	case 3:
#line 9 "src/ragel/smtp_addr_parser.rl"
	{
    if (addr->user) {
      addr->user_len = p - addr->user;
    }
  }
	break;
	case 4:
#line 15 "src/ragel/smtp_addr_parser.rl"
	{
    addr->domain = p;
  }
	break;
	case 5:
#line 25 "src/ragel/smtp_addr_parser.rl"
	{
    addr->domain = p;
    addr->flags |= RSPAMD_EMAIL_ADDR_IP;
  }
	break;
	case 6:
#line 30 "src/ragel/smtp_addr_parser.rl"
	{
    if (addr->domain) {
      addr->domain_len = p - addr->domain;
    }
  }
	break;
	case 9:
#line 36 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_QUOTED;
  }
	break;
	case 16:
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
	case 11:
#line 51 "src/ragel/smtp_addr_parser.rl"
	{
    addr->addr = p;
  }
	break;
	case 2:
#line 55 "src/ragel/smtp_addr_parser.rl"
	{
    addr->addr = p;
  }
	break;
	case 13:
#line 59 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_BRACED;
    if (addr->addr) {
      addr->addr_len = p - addr->addr;
    }
  }
	break;
	case 8:
#line 5 "src/ragel/smtp_addr_parser.rl"
	{
    addr->user = p;
  }
#line 9 "src/ragel/smtp_addr_parser.rl"
	{
    if (addr->user) {
      addr->user_len = p - addr->user;
    }
  }
	break;
	case 12:
#line 19 "src/ragel/smtp_addr_parser.rl"
	{
    if (addr->domain) {
      addr->domain_len = p - addr->domain;
    }
  }
#line 59 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_BRACED;
    if (addr->addr) {
      addr->addr_len = p - addr->addr;
    }
  }
	break;
	case 17:
#line 40 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_EMPTY;
    addr->addr = "";
    addr->user = addr->addr;
    addr->domain = addr->addr;
  }
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
	case 10:
#line 51 "src/ragel/smtp_addr_parser.rl"
	{
    addr->addr = p;
  }
#line 5 "src/ragel/smtp_addr_parser.rl"
	{
    addr->user = p;
  }
	break;
	case 1:
#line 55 "src/ragel/smtp_addr_parser.rl"
	{
    addr->addr = p;
  }
#line 5 "src/ragel/smtp_addr_parser.rl"
	{
    addr->user = p;
  }
	break;
	case 15:
#line 66 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_BRACED;
    if (addr->addr) {
      addr->addr_len = p - addr->addr;
    }
  }
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
	case 14:
#line 19 "src/ragel/smtp_addr_parser.rl"
	{
    if (addr->domain) {
      addr->domain_len = p - addr->domain;
    }
  }
#line 66 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_BRACED;
    if (addr->addr) {
      addr->addr_len = p - addr->addr;
    }
  }
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
#line 846 "src/libmime/parsers/smtp_addr_parser.c"
	}

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	switch ( _smtp_addr_parser_eof_actions[cs] ) {
	case 16:
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
	case 17:
#line 40 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_EMPTY;
    addr->addr = "";
    addr->user = addr->addr;
    addr->domain = addr->addr;
  }
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
	case 15:
#line 66 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_BRACED;
    if (addr->addr) {
      addr->addr_len = p - addr->addr;
    }
  }
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
	case 14:
#line 19 "src/ragel/smtp_addr_parser.rl"
	{
    if (addr->domain) {
      addr->domain_len = p - addr->domain;
    }
  }
#line 66 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_BRACED;
    if (addr->addr) {
      addr->addr_len = p - addr->addr;
    }
  }
#line 47 "src/ragel/smtp_addr_parser.rl"
	{
    addr->flags |= RSPAMD_EMAIL_ADDR_VALID;
  }
	break;
#line 909 "src/libmime/parsers/smtp_addr_parser.c"
	}
	}

	_out: {}
	}

#line 94 "src/ragel/smtp_addr_parser.rl"

  return cs;
}
