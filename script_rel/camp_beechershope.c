#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	struct<3480> Local_18 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1225574343, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1056964608, 1055622431, 1050253722, 1022739087, 0, -1116355953, 1055286886, 1055286886, 1049582633, 1049247089, 1032805417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 3;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 3;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	int iLocal_3514 = 0;
	struct<8> Local_3515[18];
	int iLocal_3660 = 0;
	struct<4> Local_3661[13];
	var uLocal_3714 = 0;
	int iLocal_3715 = 0;
	int iLocal_3716 = 0;
	int iLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	vector3 vLocal_3721 = { 0f, 0f, 0f };
	int iLocal_3724 = 0;
	int iLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	vector3 vLocal_3729 = { 0f, 0f, 0f };
	int iLocal_3732 = 0;
	int iLocal_3733 = 0;
	int iLocal_3734 = 0;
	int iLocal_3735 = 0;
	int iLocal_3736 = 0;
	int iLocal_3737 = 0;
	int iLocal_3738 = 0;
	int iLocal_3739[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_3759[19] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_3779 = 0;
	int iLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	int iLocal_3787 = 0;
	int iLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	int iLocal_3791 = 0;
	int iLocal_3792 = 0;
	int iLocal_3793 = 0;
	int iLocal_3794 = 0;
	struct<4> Local_3795 = { 0, 0, 0, 2 } ;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	int iLocal_3807 = 0;
	struct<4> Local_3808[2];
	bool bLocal_3817 = false;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	int iLocal_3824 = 0;
	int iLocal_3825 = 0;
	int iLocal_3826 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	iLocal_3514 = -1;
	iLocal_3716 = -1175017925;
	iLocal_3717 = -1338064109;
	vLocal_3721 = { -1644.826f, -1359.316f, 84.2079f };
	iLocal_3724 = 697120431;
	iLocal_3725 = -766047609;
	vLocal_3729 = { -1632.548f, -1357.204f, 83.384f };
	iLocal_3824 = 1;
	Local_18.f_46 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2698))
	{
		func_1(&Local_18);
	}
	func_2();
	func_3();
	func_4();
	func_5();
	func_6(&(Local_18.f_1721));
	func_7(&(Local_18.f_1797));
	func_8(&(Local_18.f_1869));
	func_9();
	func_10(&Local_18);
	while (func_11())
	{
		BUILTIN::WAIT(0);
		bVar0 = func_12(16);
		func_13(&(Local_18.f_1721));
		func_13(&(Local_18.f_1797));
		func_13(&(Local_18.f_1869));
		func_13(&(Local_18.f_1934));
		func_14();
		func_15();
		func_16();
		if (!bVar0)
		{
			if (func_17())
			{
				func_18(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900);
			}
		}
		switch (Local_18)
		{
			case 0:
				if (func_19())
				{
					func_20(1);
				}
				break;
			case 1:
				func_21(&Local_18);
				func_22();
				func_23();
				func_24();
				func_25();
				func_26();
				func_27(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
				if (!bVar0)
				{
					func_28();
					func_29();
					func_30();
				}
				func_31(&Local_18);
				iVar1 = func_32();
				if (!bVar0 && iVar1 == 1)
				{
					func_33(Local_18.f_45, Local_18.f_46);
					if (func_34(Local_18.f_45))
					{
						func_35(Local_18.f_45, &(Local_18.f_2024));
						func_36(0);
						func_37();
						func_39(func_38(4194304));
					}
				}
				else
				{
					func_40(Local_18.f_45);
				}
				func_41(Global_1898004, Local_18.f_46);
				func_42(&Local_18);
				if (!bVar0)
				{
					func_43(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (func_38(32768))
				{
					func_44(&(Global_1357549->f_3));
					func_45(&Local_18);
					func_46();
					if (func_47(Local_18.f_45, iVar1))
					{
						func_48(&(Global_1357549->f_1691));
					}
					func_49(&Local_18);
					func_50(32768);
				}
				if (func_51() && func_47(Local_18.f_45, iVar1))
				{
					func_52(Local_18.f_45, &(Global_1357549->f_1691));
				}
				else if (Global_1357549->f_1691 != 0)
				{
					func_48(&(Global_1357549->f_1691));
				}
				break;
			case 2:
				func_53(&Local_18, 0);
				func_54("Shutdown camp....", 1, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		func_55();
	}
	func_53(&Local_18, 0);
	if (func_56() == -1)
	{
	}
	else
	{
		func_57();
	}
}

void func_1(var uParam0)
{
	func_53(uParam0, 1);
	func_58(uParam0->f_46, 1);
	if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	int iVar0;

	Local_18.f_40 = 0;
	Local_18.f_41 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_18.f_14[iVar0] = 0;
		iVar0++;
	}
}

void func_3()
{
	func_60(0, 14994/*func_59*/, 0);
	func_60(1, 15351/*func_61*/, 1);
	func_60(2, 15367/*func_62*/, 1);
	func_60(3, 15430/*func_63*/, 1);
	func_60(4, 15461/*func_64*/, 2);
	func_60(5, 15575/*func_65*/, 16);
	func_60(6, 15710/*func_66*/, 1);
	func_60(7, 16324/*func_67*/, 4);
	func_60(8, 16418/*func_68*/, 1);
	func_60(9, 16548/*func_69*/, 128);
	func_60(10, 16557/*func_70*/, 792);
	func_60(11, 16605/*func_71*/, 1024);
}

void func_4()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_72(32, -1);
		func_73();
		func_74();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
}

void func_5()
{
	func_75(32);
}

void func_6(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 17286/*func_76*/, 17390/*func_77*/, 17829/*func_78*/);
	func_79(iParam0, 1, 18117/*func_80*/, 18163/*func_81*/, 18629/*func_82*/);
	func_79(iParam0, 2, 18659/*func_83*/, 18697/*func_84*/, 19125/*func_85*/);
	func_79(iParam0, 3, 19155/*func_86*/, 19181/*func_87*/, 19260/*func_88*/);
	func_79(iParam0, 4, 19268/*func_89*/, 19422/*func_90*/, 19260/*func_88*/);
	func_91(iParam0, 0);
}

void func_7(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 19494/*func_92*/, 19572/*func_93*/, 19260/*func_88*/);
	func_79(iParam0, 1, 20728/*func_94*/, 20855/*func_95*/, 19260/*func_88*/);
	func_79(iParam0, 2, 19260/*func_88*/, 21697/*func_96*/, 19260/*func_88*/);
	func_79(iParam0, 3, 21855/*func_97*/, 22401/*func_98*/, 19260/*func_88*/);
	func_79(iParam0, 4, 23029/*func_99*/, 23259/*func_100*/, 19260/*func_88*/);
	func_79(iParam0, 5, 23682/*func_101*/, 23715/*func_102*/, 19260/*func_88*/);
	func_79(iParam0, 6, 24432/*func_103*/, 24517/*func_104*/, 19260/*func_88*/);
	func_91(iParam0, 0);
}

void func_8(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 24572/*func_105*/, 24654/*func_106*/, 19260/*func_88*/);
	func_79(iParam0, 1, 24975/*func_107*/, 25011/*func_108*/, 19260/*func_88*/);
	func_79(iParam0, 2, 25480/*func_109*/, 25611/*func_110*/, 26020/*func_111*/);
	func_79(iParam0, 3, 26039/*func_112*/, 26106/*func_113*/, 26510/*func_114*/);
	func_91(iParam0, 0);
}

void func_9()
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	func_79(&(Local_18.f_1934), 0, 26579/*func_115*/, 26616/*func_116*/, 19260/*func_88*/);
	func_79(&(Local_18.f_1934), 1, 26799/*func_117*/, 26822/*func_118*/, 19260/*func_88*/);
	func_79(&(Local_18.f_1934), 2, 27027/*func_119*/, 27074/*func_120*/, 19260/*func_88*/);
	func_79(&(Local_18.f_1934), 3, 27348/*func_121*/, 27399/*func_122*/, 19260/*func_88*/);
	func_79(&(Local_18.f_1934), 4, 27418/*func_123*/, 27474/*func_124*/, 19260/*func_88*/);
	func_91(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 8;
	uParam0->f_47 = 15;
	uParam0->f_1714 = { func_125() };
	uParam0->f_1717 = 0f;
	if (!func_51())
	{
		func_126();
	}
	if (Global_40.f_4283.f_5 >= 9 || func_127(1))
	{
		func_128(Local_3661[0 /*4*/], 461310338, 0, "BeechersHope/bch_default_chickens");
		func_128(Local_3661[1 /*4*/], 698292842, 0, "BeechersHope/bch_default_chickens");
		func_128(Local_3661[2 /*4*/], -473821519, 0, "BeechersHope/bch_default_chickens");
		func_128(Local_3661[3 /*4*/], 1397058998, 0, "BeechersHope/bch_default_chickens");
		func_128(Local_3661[4 /*4*/], -56704918, 0, "BeechersHope/bch_default_chickens");
		func_128(Local_3661[5 /*4*/], -1036864070, 0, "BeechersHope/bch_default_cow");
		func_128(Local_3661[6 /*4*/], -233385727, 0, "BeechersHope/bch_default_horses");
		func_128(Local_3661[7 /*4*/], -784953535, 0, "BeechersHope/bch_default_horses");
		func_128(Local_3661[8 /*4*/], -543937540, 0, "BeechersHope/bch_default_horses");
		func_128(Local_3661[9 /*4*/], -489455940, 0, "BeechersHope/bch_default_sheep");
		func_128(Local_3661[10 /*4*/], 1695122218, 0, "BeechersHope/bch_default_sheep");
		func_128(Local_3661[11 /*4*/], -1072154298, 0, "BeechersHope/bch_default_sheep");
		func_128(Local_3661[12 /*4*/], 1785734161, 0, "BeechersHope/bch_default_cow_2");
	}
	STREAMING::REQUEST_MODEL(joaat("chuckwagon002x"), false);
	PROPSET::_REQUEST_PROPSET(1044628870);
	func_129();
	func_130(-1679361598, 0, 0, 0, 1, 0, 0, 0);
	func_130(-1449650908, 0, 0, 0, 1, 0, 0, 0);
	func_130(-1169508727, 0, 0, 0, 1, 0, 0, 0);
	func_130(-925412446, 0, 0, 0, 1, 0, 0, 0);
	func_130(-702255556, 0, 0, 0, 1, 0, 0, 0);
	func_130(-1017263949, 0, 0, 0, 1, 0, 0, 0);
	func_130(-760486065, 0, 0, 0, 1, 0, 0, 0);
	func_130(-537755172, 0, 0, 0, 1, 0, 0, 0);
	func_130(220978254, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0x7F458B543006C8FE(-1679361598, 18);
	OBJECT::_0x7F458B543006C8FE(-1449650908, 18);
	OBJECT::_0x7F458B543006C8FE(-1169508727, 18);
	OBJECT::_0x7F458B543006C8FE(-925412446, 18);
	OBJECT::_0x7F458B543006C8FE(-702255556, 18);
	OBJECT::_0x7F458B543006C8FE(-1017263949, 18);
	OBJECT::_0x7F458B543006C8FE(-760486065, 18);
	OBJECT::_0x7F458B543006C8FE(-537755172, 18);
	OBJECT::_0x7F458B543006C8FE(220978254, 18);
	func_131(262144);
	AUDIO::SET_AUDIO_FLAG("DisableInhibitIdleMusicInCamp", true);
	if (!func_132())
	{
		func_133(10, 3);
	}
}

int func_11()
{
	return 1;
}

int func_12(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(&uParam0->f_1[uParam0->f_62 /*3*/]);
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_38(1) && func_134(0, 0, 1))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_3[0])) || !VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_3[2])))
	{
		return;
	}
	if ((func_135(&Global_1935630, 16384) || func_138(func_137(func_136()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	iVar0 = func_139(Global_1359489->f_10);
	if (func_140(iVar0, Global_1359489->f_10))
	{
		func_141(iVar0);
	}
	iVar1 = Local_18.f_1712;
	if (func_140((Global_1357549->f_1675[iVar1 /*5*/])->f_3, -1))
	{
		func_141((Global_1357549->f_1675[iVar1 /*5*/])->f_3);
	}
	iVar2 = Local_18.f_1712 + 1;
	if (iVar2 >= 3)
	{
		iVar2 = 0;
	}
	Local_18.f_1712 = iVar2;
}

void func_15()
{
	var uVar0;

	if (func_142())
	{
		if (!func_143())
		{
			func_144(1);
			func_145(32);
		}
	}
	else if (func_12(32768))
	{
		if (func_146(&uVar0))
		{
			if (!func_143())
			{
				func_144(1);
			}
			func_147();
			func_148(32);
			func_144(0);
		}
		if (func_143())
		{
			func_144(0);
		}
		if ((func_149() == 7 && func_150()) && !func_151(67))
		{
			if (!func_152(-999503751))
			{
				func_153(-999503751);
			}
			if (!func_152(81053684))
			{
				func_153(81053684);
			}
			if (!func_152(-1719060085))
			{
				func_153(-1719060085);
			}
			if (!func_152(-2061583405))
			{
				func_153(-2061583405);
			}
		}
	}
	else
	{
		if (!func_143())
		{
			func_144(1);
			func_145(32);
		}
		if ((func_149() == 7 && func_150()) && !func_151(67))
		{
			if (func_152(-999503751))
			{
				func_154(-999503751);
			}
			if (func_152(81053684))
			{
				func_154(81053684);
			}
			if (func_152(-1719060085))
			{
				func_154(-1719060085);
			}
			if (func_152(-2061583405))
			{
				func_154(-2061583405);
			}
		}
	}
}

void func_16()
{
	func_155();
}

int func_17()
{
	switch (Local_18.f_51.f_20)
	{
		case 14:
		case 15:
		case 16:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_18(float fParam0, float fParam1, float fParam2)
{
	func_156(fParam0, fParam1, fParam2);
	func_158(func_157());
	func_159(MONEY::_MONEY_GET_CASH_BALANCE());
}

int func_19()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (MISC::IS_BIT_SET(Local_18.f_41, iVar1))
		{
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				if (func_160(iVar1))
				{
					MISC::SET_BIT(&(Local_18.f_40), iVar1);
					Local_18.f_27[iVar1] = MISC::GET_GAME_TIMER() + 20000;
				}
			}
			if (MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				Call_Loc(&Local_18.f_1[iVar1]);
				if (StackVal)
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
				else if (MISC::GET_GAME_TIMER() > &Local_18.f_27[iVar1])
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
			}
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)
{
	Local_18 = iParam0;
}

void func_21(var uParam0)
{
	func_161(uParam0);
	func_162(&(Global_1357549->f_3[0]), &(Global_1357549->f_3[2]), &(Global_1357549->f_3[4]), &(Global_1357549->f_3[5]));
	func_163(&(Global_1357549->f_3[2]));
	func_164(uParam0);
	func_165();
	if (func_12(32768))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			FIRE::STOP_ENTITY_FIRE(Global_35, 1);
		}
		if (!func_38(2048))
		{
			if (!func_12(64))
			{
				func_166(0);
			}
			PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 1);
			if (!func_38(67108864))
			{
				FIRE::_0x24DB6B9F2B719043(0.1f);
			}
		}
	}
	else if (func_38(2048))
	{
		PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	}
	if (!func_12(32768) && func_38(2048))
	{
		if (!func_12(64))
		{
			func_166(1);
		}
		if (!func_38(67108864))
		{
			FIRE::_0x24DB6B9F2B719043(-1f);
		}
	}
	if (func_38(512))
	{
		if (!func_38(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1616532217, false);
		}
	}
	if (func_167())
	{
		if (!func_12(1024))
		{
			AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
			func_148(1024);
		}
	}
	else if (func_12(1024))
	{
		AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
		func_145(1024);
	}
	if (MISC::GET_GAME_TIMER() <= Global_1357549->f_1892)
	{
		func_131(4194304);
	}
	else
	{
		func_50(4194304);
	}
	if ((((!func_12(262144) && func_168(&(Global_1357549->f_3[2]), Global_36)) && !func_12(4)) && !func_12(2)) && func_149() != 8)
	{
		CAM::_0x632BE8D84846FA56();
	}
	if (Local_18.f_2019 != 0)
	{
		if (!func_38(16777216))
		{
			MAP::_0x1392105DA88BBFFB(Local_18.f_2019, Local_18.f_2019.f_3, Local_18.f_2019.f_4, Local_18.f_2019.f_2, Local_18.f_2019.f_1);
			func_131(16777216);
		}
	}
	else if (func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (func_132())
	{
		if (!func_138(Local_18.f_47, 64))
		{
			func_169(Local_18.f_47, 64);
		}
	}
	else if (func_138(Local_18.f_47, 64))
	{
		func_170(Local_18.f_47, 64);
	}
	Global_1357549->f_1484 = MISC::GET_GAME_TIMER();
}

void func_22()
{
	char* sVar0;
	float fVar1;
	int iVar2;

	if (func_167())
	{
		return;
	}
	if (Global_1357549->f_1658 == 0)
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 20) != 0)
		{
			return;
		}
	}
	Global_1357549->f_1659[0] = 0;
	Global_1357549->f_1659[1] = 1;
	sVar0 = "script@common@cnv_camp@grief@tent@tentgrief";
	fVar1 = 21f;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_1663[iVar2])) == 0)
		{
			Global_1357549->f_1663[iVar2] = func_171(&(Global_1357549->f_1659[iVar2]));
		}
		switch (Global_1357549->f_1658)
		{
			case 0:
				if (func_172(iVar2))
				{
					if (func_173(iVar2))
					{
						if (func_174(Global_1357549->f_1651[iVar2 /*3*/]))
						{
							if (func_175(Global_1357549->f_1651[iVar2 /*3*/]) > fVar1)
							{
								if (func_176(&(Global_1357549->f_1659[iVar2]), 1, 1) || func_177(&(Global_1357549->f_1659[iVar2]), 8))
								{
									Global_1357549->f_1666 = 0;
									Global_1357549->f_1667 = 0;
									Global_1357549->f_1658 = 1;
								}
							}
							else if (func_175(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 5f) && Global_1357549->f_1666 == 0)
							{
								Global_1357549->f_1666 = 1;
								func_179(func_178(&(Global_1357549->f_1659[iVar2])), "EXPLAIN_YOURSELF", 272211449, Global_35, 1, 0, 0, 1);
								TASK::TASK_LOOK_AT_ENTITY(func_178(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
							}
							else if (func_175(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 12f) && Global_1357549->f_1667 == 0)
							{
								Global_1357549->f_1667 = 1;
								TASK::TASK_LOOK_AT_ENTITY(func_178(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
								func_179(func_178(&(Global_1357549->f_1659[iVar2])), "INTRUDED_AGAIN", 272211449, Global_35, 1, 0, 0, 1);
							}
							else if (Global_1357549->f_1668 == 0)
							{
								if (func_180())
								{
									Global_1357549->f_1668 = 1;
									func_179(func_178(&(Global_1357549->f_1659[iVar2])), "ITEM_PICKUP_REACT", -128067431, Global_35, 1, 0, 0, 1);
								}
							}
						}
						else
						{
							func_179(func_178(&(Global_1357549->f_1659[iVar2])), "GET_OUT", 272211449, Global_35, 1, 0, 0, 1);
							func_181(Global_1357549->f_1651[iVar2 /*3*/], 0);
						}
					}
					else if (func_174(Global_1357549->f_1651[iVar2 /*3*/]))
					{
						Global_1357549->f_1666 = 0;
						Global_1357549->f_1667 = 0;
						Global_1357549->f_1668 = 0;
						func_182(Global_1357549->f_1651[iVar2 /*3*/]);
					}
				}
				break;
			case 1:
				if (func_174(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_183(&(Global_1357549->f_1659[iVar2])))
					{
						Global_1357549->f_1669 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549->f_1669);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549->f_1669, func_184(&(Global_1357549->f_1659[iVar2])));
						Global_1357549->f_1658 = 5;
					}
					else
					{
						func_185(&(Global_1357549->f_1659[iVar2]), 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					}
				}
				break;
			case 5:
				if (func_174(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549->f_1669))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1357549->f_1669, 1, 0))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549->f_1669, func_184(&(Global_1357549->f_1659[iVar2]))))
							{
								func_186(&(Global_1357549->f_1659[iVar2]));
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549->f_1669, func_184(&(Global_1357549->f_1659[iVar2])), true);
								PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
								ANIMSCENE::START_ANIM_SCENE(Global_1357549->f_1669);
								func_179(func_178(&(Global_1357549->f_1659[iVar2])), "LEAVE_NOW", 272211449, Global_35, 1, 0, 0, 1);
								Global_1357549->f_1658 = 6;
							}
						}
					}
				}
				break;
			case 6:
				if (func_174(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0xCDC5512A407CF08D(Global_1357549->f_1669))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549->f_1669, func_184(&(Global_1357549->f_1659[iVar2])));
						ANIMSCENE::RESET_ANIM_SCENE(Global_1357549->f_1669, 0);
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1669);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_178(&(Global_1357549->f_1659[iVar2])), 1030835986);
						PED::SET_PED_CONFIG_FLAG(func_178(&(Global_1357549->f_1659[iVar2])), 40, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						_NAMESPACE48::RETASK_PERSISTENT_CHARACTER(_NAMESPACE48::_0x32A1E3B83D501096(func_178(&(Global_1357549->f_1659[iVar2]))));
						func_187(&(Global_1357549->f_1659[iVar2]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
						func_188(Global_1357549->f_1651[iVar2 /*3*/]);
						Global_1357549->f_1658 = 7;
					}
				}
				break;
			case 7:
				if (func_174(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_175(Global_1357549->f_1651[iVar2 /*3*/]) > 1.5f)
					{
						func_182(Global_1357549->f_1651[iVar2 /*3*/]);
						func_189(&(Global_1357549->f_1659[iVar2]));
						PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
						Global_1357549->f_1658 = 0;
					}
				}
				break;
		}
		iVar2++;
	}
}

void func_23()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (Global_1357549->f_11)
	{
		case 0:
			func_190();
			Global_1357549->f_11 = 1;
			break;
		case 1:
			func_191();
			break;
		case 2:
			break;
	}
}

void func_24()
{
	int iVar0;

	iVar0 = func_149();
	if (((iVar0 == 0 || iVar0 == 7) || iVar0 == 4) || iVar0 == 5)
	{
		if (!func_192(1024))
		{
			func_193(1024);
			func_131(-2147483648);
		}
		if (!func_192(64))
		{
			func_193(64);
			func_131(-2147483648);
		}
		if (iVar0 == 7)
		{
			if (!func_38(131072))
			{
				func_131(131072);
				func_131(-2147483648);
			}
		}
	}
	else if (func_167() && !func_194())
	{
		if (!func_192(64))
		{
			func_193(64);
			func_131(-2147483648);
		}
	}
	else if (func_38(-2147483648))
	{
		if (func_192(1024))
		{
			func_195(1024);
		}
		if (func_192(64))
		{
			func_195(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
}

void func_25()
{
	if (func_12(32768) && !func_38(2048))
	{
		if (func_38(4096))
		{
			return;
		}
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (func_134(0, 0, 1))
		{
			return;
		}
		func_131(4096);
	}
	if (func_38(4096))
	{
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (!func_196())
		{
			return;
		}
		if (!func_38(8192))
		{
			func_197();
			Local_18.f_50 = MISC::GET_GAME_TIMER() + 5500;
			func_131(8192);
		}
		else
		{
			func_198();
			func_199();
			Local_18.f_50 = (MISC::GET_GAME_TIMER() + 120000);
		}
	}
}

void func_26()
{
}

void func_27(var uParam0, var uParam1)
{
	if (uParam1->f_5 == -15)
	{
		func_200(&(uParam1->f_5));
	}
	if (func_201(uParam1->f_5) && func_202(uParam1->f_5))
	{
		func_203(uParam0, uParam1);
		func_200(&(uParam1->f_5));
	}
}

void func_28()
{
	if (func_204(2))
	{
		if (func_205())
		{
			if (func_151(15))
			{
				if (func_151(4) && !func_151(37))
				{
					if (!func_206(605) && !func_207(605))
					{
						func_208(605, 0);
					}
				}
				else if (func_151(43))
				{
					if (!func_206(605) && !func_207(605))
					{
						func_208(605, 0);
					}
				}
			}
		}
		if (func_150() && func_151(73))
		{
			if (!func_206(606) && !func_207(606))
			{
				func_208(606, 0);
			}
		}
	}
	if (func_209() && !func_206(538))
	{
		if ((MAP::DOES_BLIP_EXIST(Local_18.f_51.f_14) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_15)) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_13))
		{
			func_208(538, 0);
		}
	}
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			switch ((Local_18.f_3057[iVar1 /*21*/])->f_3)
			{
				case 0:
					if (func_38(4))
					{
						if (func_210(&(Local_18.f_3057[iVar1 /*21*/])))
						{
							func_211(Local_18.f_3057[iVar1 /*21*/], 1, 1);
						}
					}
					else if (VOLUME::DOES_VOLUME_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_4))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Local_18.f_3057[iVar1 /*21*/])->f_4, false, 0))
						{
							if (!func_212((Local_18.f_3057[iVar1 /*21*/])->f_6))
							{
								if (!func_210(&(Local_18.f_3057[iVar1 /*21*/])))
								{
									Local_18.f_3057[iVar1 /*21*/] = func_214(func_213(), (Local_18.f_3057[iVar1 /*21*/])->f_16, (Local_18.f_3057[iVar1 /*21*/])->f_4, 2, 1, 0, (Local_18.f_3057[iVar1 /*21*/])->f_17, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										func_215(&(Local_18.f_3057[iVar1 /*21*/]), 26, 1, 1);
									}
									if ((Local_18.f_3057[iVar1 /*21*/])->f_18 != -1)
									{
										func_216(&(Local_18.f_3057[iVar1 /*21*/]), (Local_18.f_3057[iVar1 /*21*/])->f_18, 0, 1);
									}
								}
								else if (((Local_18.f_3057[iVar1 /*21*/])->f_17 == 0 && func_217(&(Local_18.f_3057[iVar1 /*21*/]), 1)) || ((Local_18.f_3057[iVar1 /*21*/])->f_17 != 0 && func_218(&(Local_18.f_3057[iVar1 /*21*/]), 1)))
								{
									func_211(Local_18.f_3057[iVar1 /*21*/], 1, 1);
									(Local_18.f_3057[iVar1 /*21*/])->f_3 = 1;
								}
							}
						}
					}
					break;
				case 1:
					if (func_219(Global_35, 0, 1, 1) == joaat("weapon_kit_binoculars"))
					{
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LOOK_AT_COORD(0, (Local_18.f_3057[iVar1 /*21*/])->f_6, -1, 1, 51, 1);
					TASK::TASK_PAUSE(0, 400);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, (Local_18.f_3057[iVar1 /*21*/])->f_6, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
					(Local_18.f_3057[iVar1 /*21*/])->f_3 = 2;
					break;
				case 2:
					if (!CAM::DOES_CAM_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_5))
					{
						if (!func_212((Local_18.f_3057[iVar1 /*21*/])->f_9))
						{
							(Local_18.f_3057[iVar1 /*21*/])->f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Local_18.f_3057[iVar1 /*21*/])->f_9, (Local_18.f_3057[iVar1 /*21*/])->f_12, (Local_18.f_3057[iVar1 /*21*/])->f_15, false, 2);
						}
					}
					if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
					{
						func_220(iVar1);
						if (func_210((Local_18.f_3057[iVar1 /*21*/])->f_1))
						{
							if (func_221(iVar1))
							{
							}
							else
							{
								if (func_212((Local_18.f_3057[iVar1 /*21*/])->f_9))
								{
									if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										CAM::SET_GAMEPLAY_COORD_HINT((Local_18.f_3057[iVar1 /*21*/])->f_6, -1, 2000, 2000, 0);
									}
								}
								else if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_5))
								{
									if (!CAM::IS_CAM_RENDERING((Local_18.f_3057[iVar1 /*21*/])->f_5))
									{
										CAM::SET_CAM_ACTIVE((Local_18.f_3057[iVar1 /*21*/])->f_5, true);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									}
								}
								func_222(iVar1);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iVar1 /*21*/])->f_20, 0);
								if (func_210((Local_18.f_3057[iVar1 /*21*/])->f_2))
								{
									if (func_223((Local_18.f_3057[iVar1 /*21*/])->f_2, 1))
									{
										if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												(Local_18.f_3057[iVar2 /*21*/])->f_3 = 0;
												func_211(Local_18.f_3057[iVar2 /*21*/], 1, 1);
												func_211(&((Local_18.f_3057[iVar2 /*21*/])->f_1), 1, 1);
												func_211(&((Local_18.f_3057[iVar2 /*21*/])->f_2), 1, 1);
												iVar2++;
											}
										}
										(Local_18.f_3057[iVar1 /*21*/])->f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								func_224(Local_18.f_3057[iVar1 /*21*/]);
							}
							iVar1++;
						}
					}
			}
		}
	}

void func_30()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_225(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = PED::_0x4C8B59171957BCF7(PLAYER::PLAYER_PED_ID());
	}
	if (func_226(iVar0))
	{
		if (func_227(iVar0) && func_228(iVar0))
		{
			if (Global_1357549->f_1897 != iVar0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
				{
					func_229();
				}
				func_230(iVar0, Local_18.f_45, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 == iVar0)
		{
			func_229();
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 != iVar0) && func_225(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_231(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2);
			if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				if (func_232(iVar0, TASK::_0xA8452DD321607029(iVar1, 1), 1) < 8f)
				{
					if (!func_206(604))
					{
						func_208(604, 0);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1897) && func_226(Global_1357549->f_1897))
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
			{
				if (!MAP::_0x9FA00E2FC134A9D0(Global_1357549->f_1897))
				{
					Global_1357549->f_1897.f_1 = MAP::_0x23F74C2FDA6E7C61(-1230993421, Global_1357549->f_1897);
					MAP::_0x662D364ABF16DE2F(Global_1357549->f_1897.f_1, 287169430);
					MAP::_0x662D364ABF16DE2F(Global_1357549->f_1897.f_1, -201249929);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549->f_1897.f_1, "BLIP_CAMP_HORSE");
				}
			}
			else if (MAP::GET_BLIP_FROM_ENTITY(Global_1357549->f_1897) != Global_1357549->f_1897.f_1)
			{
				MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
			{
				MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
			}
			if (Global_40.f_4283.f_567)
			{
				func_229();
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
	{
		MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
	}
}

void func_31(var uParam0)
{
	if (((func_233(-1461741225, 1) || func_233(-404697685, 1)) || func_233(1674863702, 1)) || func_233(-1917134080, 1))
	{
		return;
	}
	if (func_234())
	{
		if (!func_174(&(uParam0->f_3480)))
		{
			func_235();
			func_181(&(uParam0->f_3480), 0);
		}
		if (func_175(&(uParam0->f_3480)) > 10f && !func_167())
		{
			func_236();
		}
	}
}

int func_32()
{
	return Global_40.f_4283.f_4;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_237(iParam0);
	if (iVar0 != -1)
	{
		if (!func_238(19, 4))
		{
			if (VOLUME::DOES_VOLUME_EXIST((Global_1914319->f_3[19 /*446*/])->f_26))
			{
				VOLUME::DELETE_VOLUME((Global_1914319->f_3[19 /*446*/])->f_26);
			}
			switch (iParam0)
			{
				case 1:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(-142.2027f, -23.89317f, 95.0883f, 0f, 0f, -19.50431f, 2f, 1.8f, 5f);
					break;
				case 2:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(674.9565f, -1251.201f, 43.0152f, 0f, 0f, -101.9433f, 2f, 1.8f, 5f);
					break;
				case 3:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(1874.646f, -1859.152f, 41.8f, 0f, 0f, -99.40799f, 2f, 1.8f, 5f);
					break;
				case 6:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(2365.858f, 1346.675f, 105.1305f, 0f, 0f, -22.49011f, 2f, 1.8f, 5f);
					break;
			}
			func_239(19, 16384);
			func_239(19, 32768);
			func_240(19, -1, &(Global_1357549->f_3[4]), iParam1, iVar1, 0, 12, -1082130432, 0, 0);
		}
		if (func_241(iVar0))
		{
			func_242(iVar0, 19, 0, 1);
		}
	}
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_35(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_38(8))
	{
		if (!uParam1->f_1029)
		{
			func_243(uParam1);
			uParam1->f_1029 = 1;
		}
		return;
	}
	else if (uParam1->f_1029)
	{
		uParam1->f_1029 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_244(iParam0, iVar1, (*uParam1)[iVar1 /*257*/], &iVar0);
		iVar1++;
	}
}

void func_36(int iParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam0)
	{
		Local_18.f_3054 = func_245(Local_18.f_2024[0 /*257*/]);
		Local_18.f_3055 = func_245(Local_18.f_2024[2 /*257*/]);
		Local_18.f_3056 = func_245(Local_18.f_2024[1 /*257*/]);
		Global_1357549->f_1899 = func_246();
		Global_1357549->f_1900 = func_247(Local_18.f_3056, Global_1357549->f_1899);
	}
}

void func_37()
{
	if (func_12(8192) || func_248())
	{
		func_249(1000);
		return;
	}
	if (Local_18.f_51.f_20 != 0)
	{
		func_249(1000);
		return;
	}
	if (func_250(Local_18.f_51.f_1, 1) || func_250(Local_18.f_51.f_6, 1))
	{
		func_249(1000);
		return;
	}
}

int func_38(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_39(bool bParam0)
{
	HUD::_0x4CC5F2FC1332577F(-950624750);
	if (bParam0 && func_251())
	{
		func_252();
	}
	else
	{
		func_253();
	}
}

void func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_237(iParam0);
	if (iVar0 != -1)
	{
		if (func_238(19, 4))
		{
			func_254(19);
		}
		if (!func_241(iVar0))
		{
			func_242(iVar0, 19, 1, 1);
		}
	}
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_135(&Global_1935630, 16384)) || func_135(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_255(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_256();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_257((*uParam0)[iVar3 /*3*/], 1) && func_258(iParam1)) && !func_259(iParam1, 16))
							{
								func_261(iParam1, func_260(), -1, 0, -1, 0);
								func_262((*uParam0)[iVar3 /*3*/], 1);
							}
							func_263(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_56() == -1)
	{
		if (func_264() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_265();
			func_266(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_267(bVar0);
	if (func_56() == -1)
	{
		func_269((iParam1 == func_268() && bVar0));
	}
}

void func_42(var uParam0)
{
	func_270(&Local_3661, &uLocal_3714, &iLocal_3514, 1);
	func_271(&(uParam0->f_51), &Local_3515);
	func_272(&(uParam0->f_51), &Local_3515);
	func_273(uParam0);
	func_274(&uLocal_3718, &uLocal_3720, &uLocal_3719, vLocal_3721, iLocal_3716, -1922743096, iLocal_3717);
	func_274(&uLocal_3726, &uLocal_3728, &uLocal_3727, vLocal_3729, iLocal_3724, 24394704, iLocal_3725);
	func_275();
	func_276();
	func_277();
}

void func_43(int* iParam0, var uParam1)
{
	if (func_278())
	{
		func_279(iParam0);
		func_280(0, 0);
		func_281();
	}
	func_282(iParam0);
	func_283(iParam0, uParam1);
	func_284(iParam0);
	func_285(iParam0, uParam1);
	if (!func_287(func_286()))
	{
		return;
	}
	func_288(iParam0);
}

void func_44(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0[2];
	if (VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		func_289(iVar0);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iVar0);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iVar0);
		COMPANION::_0x7274F84B1501B523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0[iVar1]))
		{
			func_290(uParam0[iVar1]);
		}
		iVar1++;
	}
}

void func_45(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_151(73);
	bVar1 = func_151(70);
	uParam0->f_1713 = 9;
	iVar2 = 0;
	Global_1357549->f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_INNER]");
	if ((func_291(588987611) || func_291(227918160)) || func_291(2008888900))
	{
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1638.882f, -1356.022f, 112.498f, 0f, 0f, 74.99999f, 3f, 2f, 40f, 665633627, 0);
	}
	if (((func_291(1649996811) || func_291(227918160)) || func_291(168171957)) || func_291(2008888900))
	{
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1670.094f, -1342.445f, 101.6522f, 0f, 0f, -34f, 14f, 9f, 50f, -1612834106, 0);
	}
	if (func_291(168171957) || func_291(227918160))
	{
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1626.051f, -1401.164f, 93.2211f, 0f, 0f, 7.999992f, 4.75f, 4.75f, 40f, -1612834106, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1629.937f, -1392.412f, 96.2211f, 0f, 0f, -41f, 4.25f, 4.25f, 40f, -1612834106, 0);
	}
	if (((func_291(168171957) || func_291(1193080109)) || func_291(-491981251)) || func_291(-618620429))
	{
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1641.548f, -1360.057f, 98.3145f, 0f, 0f, -30f, 14.55f, 17.25f, 40f, -1612834106, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1642.431f, -1361.456f, 98.45139f, 0f, 0f, -30f, 21.5f, 12.5f, 40f, -1612834106, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1648.027f, -1347.69f, 98f, 0f, 0f, -30f, 9.25f, 5.75f, 40f, -1612834106, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1643.429f, -1370.81f, 98.289f, 0f, 0f, -30f, 13.75f, 7f, 40f, -1612834106, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1648.45f, -1372.039f, 98.061f, 0f, 0f, -30f, 6.25f, 2f, 40f, -1612834106, 0);
	}
	if (func_291(-491981251) || func_291(-618620429))
	{
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1674.602f, -1344.577f, 115.2522f, 0f, 0f, 0f, 2.75f, 2.75f, 40f, 665633627, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1661.908f, -1336.698f, 109.565f, 0f, 0f, 0f, 2.75f, 2.5f, 40f, 665633627, 0);
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1627.55f, -1331.23f, 108.5894f, 0f, 0f, -21f, 2.25f, 1.5f, 40f, 665633627, 0);
	}
	if ((func_291(1193080109) || func_291(-491981251)) || func_291(-618620429))
	{
		func_292(Global_1357549->f_3[0], &iVar2, 0, -1582.914f, -1393.803f, 98.08f, 0f, 0f, -25f, 5.5f, 6f, 40f, -1612834106, 0);
	}
	Global_1357549->f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_OUTER]");
	Global_1357549->f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_OUTER_THRESHOLD]");
	func_292(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, -1618.26f, -1387.421f, 121.6319f, 0f, 0f, 51.00005f, 50f, 75f, 50f, 665633627, 0);
	Global_1357549->f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_SURROUNDING]");
	Global_1357549->f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1626.729f, -1375.789f, 114.5493f, 0f, 0f, 6f, 101f, 126f, 50f, 665633627, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1704.27f, -1433.937f, 112.6512f, 0f, 0f, 9.999996f, 28f, 84f, 60f, -1612834106, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1661.808f, -1479.296f, 124.6512f, 0f, 0f, -13.99999f, 54f, 19f, 50f, 665633627, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1580.68f, -1489.235f, 120.2263f, 0f, 0f, 13f, 31f, 5f, 40f, 665633627, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1547.357f, -1454.696f, 123.6074f, 0f, 0f, -27f, 11f, 40f, 40f, 665633627, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1530.24f, -1400.403f, 107.1596f, 0f, 0f, 0f, 7f, 55f, 60f, -1612834106, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1556.43f, -1315.928f, 96.0094f, 0f, 0f, 2.5f, 55f, 106f, 60f, -1612834106, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1562.405f, -1255.967f, 117.9601f, 0f, 0f, -27f, 37f, 19f, 50f, 665633627, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1607.675f, -1256.359f, 100.8084f, 0f, 0f, 19f, 61f, 34f, 60f, -1612834106, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1700.762f, -1293.963f, 121.3372f, 0f, 0f, -130f, 28f, 10f, 40f, 665633627, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1721.101f, -1328.251f, 117.2535f, 0f, 0f, -13f, 7f, 43f, 60f, -1612834106, 0);
	func_292(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, -1722.965f, -1358.271f, 121.4061f, 0f, 0f, 3.000003f, 7f, 22f, 40f, 665633627, 0);
	if (bVar1)
	{
		Global_1357549->f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1641.649f, -1360.09f, 85.30408f, 0f, 0f, -29.80834f, 14f, 16f, 4f, "BeechersHope volCampAreas[CVA_PROPERTY]");
	}
	else if (bVar0)
	{
		Global_1357549->f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1669.27f, -1342.481f, 84.53038f, 0f, 0f, -30.98296f, 14.1664f, 8.399044f, 4.258486f, "BeechersHope volCampAreas[CVA_PROPERTY]");
	}
	else
	{
		Global_1357549->f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1640.215f, -1360.859f, 83.3224f, 0f, 0f, -29.80834f, 6.267948f, 4.391808f, 5.871133f, "BeechersHope volCampAreas[CVA_PROPERTY]");
	}
}

void func_46()
{
	((*Global_1888801)[37 /*35*/])->f_15 = { func_125() };
	((*Global_1888801)[37 /*35*/])->f_18 = 1;
	(Global_1395601->f_5[15 /*28*/])->f_15 = { ((*Global_1888801)[37 /*35*/])->f_15 };
	func_130(1606546482, 0, 0, 0, 1, 0, 0, 0);
	func_130(1731691513, 0, 0, 0, 1, 0, 0, 0);
	func_130(-1984149246, 0, 0, 0, 1, 0, 0, 0);
	func_130(818583340, 0, 0, 0, 1, 0, 0, 0);
}

int func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		case 8:
			return func_151(73);
	}
	return 0;
}

void func_48(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
	func_293(uParam0);
	func_294(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		func_295(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_6), 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_5))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_5);
	}
	func_296(uParam0);
}

void func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::SET_VOLUME_RELATIONSHIP(&(Global_1357549->f_3[2]), 1030835986);
	VOLUME::SET_VOLUME_RELATIONSHIP(&(Global_1357549->f_3[3]), 1030835986);
	if (uParam0->f_1713 != 0)
	{
		VOLUME::_0xB469CFD9E065EB99(&(Global_1357549->f_3[4]), uParam0->f_1713);
	}
	iVar0 = &Global_1357549->f_3[2];
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iVar0, 0, 4787584, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iVar0, 0, 4787584, 0, -1, -1, 0);
	func_297(iVar0, 0);
	func_298(&(Global_1357549->f_3[4]), 0, 0, 0);
	func_299(iVar0, 0);
	func_300(iVar0, 0, 0);
	iVar1 = 0;
	func_301(&iVar1, 0);
	func_301(&iVar1, 14);
	func_301(&iVar1, 16);
	COMPANION::_0x3CAAD93FA5B9579A(iVar0, 2, iVar1);
	func_302(Local_18.f_47, Local_18.f_1714, Local_18.f_1717, &(Global_1357549->f_3[6]));
}

void func_50(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

bool func_51()
{
	return Global_40.f_4283.f_322 > 1;
}

void func_52(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (*uParam1)
	{
		case 0:
			if (func_303(iParam0))
			{
				func_304(iParam0, uParam1);
				func_305(uParam1, 2);
			}
			break;
		case 2:
			if (func_303(iParam0))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_294(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_306(uParam1);
					}
					if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && VOLUME::DOES_VOLUME_EXIST(uParam1->f_5)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (MISC::IS_BIT_SET(uParam1->f_1, 4))
						{
							func_307(uParam1->f_8, 0);
							MISC::CLEAR_BIT(&(uParam1->f_1), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
					{
						func_307(uParam1->f_8, 1);
						MISC::SET_BIT(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_293(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_308(uParam1);
					}
					if ((ENTITY::IS_ENTITY_DEAD(Global_35) || !VOLUME::DOES_VOLUME_EXIST(uParam1->f_5)) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					}
					PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
					PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
					PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
					PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1842627646, "BLIP_CAMP_HITCH", 1, 0, 0, 0);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(uParam1->f_1, 5))
				{
					func_294(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 3))
				{
					func_293(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 3))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
				{
					if (func_218(uParam1->f_8, 1))
					{
						if (func_309(&iVar0))
						{
							func_310(uParam1->f_8, 1);
							MISC::SET_BIT(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								case 0:
									if (!func_206(611))
									{
										func_311("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										func_312(611);
									}
									break;
								case 1:
									if (!func_206(612))
									{
										func_311("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										func_312(612);
									}
									break;
								case 2:
									if (!func_313())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											func_311("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											func_311("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
										}
									}
									break;
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 5))
			{
				if (func_223(uParam1->f_10, 1))
				{
					MISC::SET_BIT(&(uParam1->f_1), 7);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					func_295(0, uParam1);
					func_294(uParam1);
					func_305(uParam1, 3);
					return;
				}
				if (func_223(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					MISC::CLEAR_BIT(&(uParam1->f_1), 7);
					func_295(0, uParam1);
					func_294(uParam1);
					func_305(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (func_223(&(uParam1->f_12[iVar1]), 1))
					{
						uParam1->f_7 = func_314(iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
						MISC::CLEAR_BIT(&(uParam1->f_1), 7);
						func_295(0, uParam1);
						func_294(uParam1);
						func_305(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (func_223(uParam1->f_9, 1))
				{
					func_294(uParam1);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, func_315(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_316(iParam0));
				if (MISC::IS_BIT_SET(uParam1->f_1, 7))
				{
					func_305(uParam1, 6);
				}
				else
				{
					func_305(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					func_317(uParam1->f_7);
				}
				func_319(func_318(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				MISC::SET_BIT(&(uParam1->f_1), 1);
				return;
			}
			if (func_320(iParam0, uParam1))
			{
				func_321(0);
				func_322();
				if (func_323(0) == 0)
				{
					func_324(0, 5);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, func_315(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_316(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_305(uParam1, 5);
			}
			break;
		case 6:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 8))
			{
				if (func_325())
				{
					func_326();
				}
				func_327(2);
				func_329(func_328(iParam0));
				PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::PLAYER_ID(), 0);
				MISC::CLEAR_AREA(func_328(iParam0), 0.4f, 2442122);
				MISC::SET_BIT(&(uParam1->f_1), 8);
			}
			if (func_330(func_328(iParam0), 0f, 1))
			{
				PHYSICS::ACTIVATE_PHYSICS(Global_1900383->f_393);
				ENTITY::SET_ENTITY_COORDS(Global_35, func_315(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_316(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_BIT(&(uParam1->f_1), 8);
				MISC::CLEAR_BIT(&(uParam1->f_1), 7);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_305(uParam1, 5);
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() > uParam1->f_2)
			{
				func_295(1, uParam1);
				func_305(uParam1, 7);
			}
			break;
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				func_305(uParam1, 2);
			}
			break;
	}
}

void func_53(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, false);
	func_253();
	HUD::_0x8BC7C1F929D07BF3(-950624750);
	if (func_38(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		func_50(2097152);
	}
	func_331(uParam0);
	func_332(uParam0);
	func_145(235110816);
	if (!func_167())
	{
		if (!func_12(64))
		{
			func_333(1);
			func_334(0);
		}
		if (bParam1 == 0)
		{
			func_335(1, -1);
		}
		MISC::_0x1096603B519C905F("");
		if (!PED::_0xA911EE21EDF69DAF(PLAYER::PLAYER_PED_ID()) && !(func_336(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 0) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()))))
		{
			PED::_0x9851DE7AEC10B4E1(func_337(func_149()), func_338(), 1, 0);
		}
	}
	if (func_339(4))
	{
		func_340(0);
	}
	PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	func_341(1, 0, 1103626240);
	if (!func_12(16777216))
	{
		func_342();
		func_145(16777216);
	}
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_145(2048);
	}
	if (func_12(32))
	{
		func_144(1);
		func_145(32);
	}
	if (func_38(1073741824))
	{
		func_50(1073741824);
	}
	func_343(&(uParam0->f_51));
	func_344();
	func_345(uParam0->f_46);
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
	func_346(uParam0->f_46, 4);
	func_346(uParam0->f_46, 8);
	func_267(0);
	if (func_56() == -1)
	{
		func_269(0);
	}
	if (func_347(32))
	{
		func_145(4);
		func_145(2);
		func_348(32);
		iVar0 = 0;
		while (iVar0 < &Global_1360165)
		{
			if (!func_349(iVar0) && func_350(iVar0, 0))
			{
				func_351(iVar0);
			}
			iVar0++;
		}
	}
	if (Local_18.f_1721.f_62 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		func_89();
		func_352();
	}
	if (func_268() == uParam0->f_46)
	{
		func_353(bParam1);
		func_195(1073741824);
		func_354(0, 0, 0);
	}
	if (func_355(uParam0->f_46, &uVar2, &iVar3, 0, 0))
	{
		iVar1 = uVar2;
		while (iVar1 <= iVar3)
		{
			if (!func_356(iVar1, 0))
			{
				func_357(iVar1);
			}
			iVar1++;
		}
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_1663[iVar4])))
		{
			VOLUME::DELETE_VOLUME(&(Global_1357549->f_1663[iVar4]));
		}
		iVar4++;
	}
	func_358();
	func_359();
	func_360(uParam0);
	func_361(uParam0);
	func_362();
	func_363();
	func_364();
	func_199();
	func_365(0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(func_337(func_149()), 100f);
	if (func_347(8))
	{
		func_366(0);
		func_348(8);
	}
	if (!func_12(64))
	{
		func_166(1);
	}
	if (func_367(1))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 1);
		func_368(1);
	}
	if (func_367(8192))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 1);
		func_368(8192);
	}
	iVar5 = func_369(7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		PED::SET_PED_CONFIG_FLAG(iVar5, 419, false);
	}
	func_145(229376);
	func_50(2560);
	Global_1357549->f_1896 = 0;
	PED::_0x0ADA3EC589E1736E();
	if (func_370(func_260()))
	{
		func_371(func_260(), 8);
	}
	func_372(&(Local_18.f_2024));
	func_373(&(Local_18.f_2024));
	func_374(&(Local_18.f_2024));
	Local_18.f_43 = 0;
	func_48(&(Global_1357549->f_1691));
	func_375();
	if (Local_18.f_2019 != 0 && func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (!func_38(67108864))
	{
		FIRE::_0x24DB6B9F2B719043(-1f);
	}
	if (func_38(-2147483648))
	{
		if (func_192(1024))
		{
			func_195(1024);
		}
		if (func_192(64))
		{
			func_195(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
	if (func_149() == 2 || func_149() == 3)
	{
		if (func_376(13, 0) > 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pirogue"));
		}
	}
	func_377(8);
	func_377(16);
	func_378(Global_1935630, 8388608);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
}

void func_54(char* sParam0, int iParam1, int iParam2)
{
}

void func_55()
{
	if (func_12(32768))
	{
		func_131(2048);
	}
	else
	{
		func_50(2048);
	}
	if (func_38(4194304))
	{
		func_131(8388608);
	}
	else
	{
		func_50(8388608);
	}
}

int func_56()
{
	return Global_1572887->f_12;
}

void func_57()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_56() != -1)
	{
		return 1;
	}
	if (!func_379(iParam0))
	{
		return 1;
	}
	if (func_355(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_380(Global_1897950->f_1, 16))
			{
				func_381(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_59()
{
	int iVar0;
	char cVar1[64];

	MISC::_0x9BF2C0C568C61641(1);
	if (func_370(func_382(Local_18.f_46)))
	{
		func_371(func_382(Local_18.f_46), 4);
	}
	if (func_38(32768))
	{
		func_50(32768);
	}
	func_385(func_384(func_383(Local_18.f_46)));
	iVar0 = func_386(func_149());
	func_387(iVar0, 1137976064, 1120952528, -1, 1, 1, 0);
	func_388(Local_18.f_45, Global_40.f_4283.f_4, &(Local_18.f_2019));
	func_265();
	func_45(&Local_18);
	func_49(&Local_18);
	func_389(Global_1898004);
	func_390(Global_1898004, &(Global_1357549->f_3[2]), 1);
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && PED::_0xA911EE21EDF69DAF(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(Global_35))))
	{
		func_148(33554432);
		func_391(17, -2147483648, 1, -1);
		StringCopy(&cVar1, func_392(func_149()), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_393(17, cVar1, 2);
		}
	}
	if (func_149() == 2 || func_149() == 3)
	{
		if (func_376(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(joaat("pirogue"), false);
		}
	}
	func_394();
	return 1;
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	Local_18.f_1[iParam0] = iParam1;
	Local_18.f_14[iParam0] = iParam2;
}

int func_61()
{
	return func_395(Local_18.f_46);
}

int func_62()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 1))
		{
			func_396(&(Local_18.f_2024));
			MISC::SET_BIT(&(Local_18.f_43), 1);
		}
		return func_397(&(Local_18.f_2024));
	}
	return 1;
}

int func_63()
{
	if (!MISC::IS_BIT_SET(Local_18.f_43, 4))
	{
		MISC::SET_BIT(&(Local_18.f_43), 4);
	}
	return 1;
}

int func_64()
{
	if (func_149() == 2 || func_149() == 3)
	{
		if (func_376(13, 0) > 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(joaat("pirogue")))
			{
				return 0;
			}
		}
	}
	if (func_398())
	{
		if (!func_134(0, 0, 1))
		{
			func_399(func_337(func_149()), func_338(), 0);
			func_400(func_337(func_149()), func_338(), 0);
		}
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_18.f_3479 == -1)
	{
		func_401(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (func_402(Local_18.f_45))
	{
		iVar0 = func_403(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_404(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	uVar0 = func_405();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_406(iVar1))
		{
			Local_18.f_3402[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_407(iVar1));
			STREAMING::REQUEST_MODEL(&(Local_18.f_3402[iVar1]), false);
			iVar2++;
			if (uVar0 && func_408(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_409(iVar1, 1));
				Local_18.f_3430[iVar1] = &Local_18.f_3430[iVar1];
				STREAMING::REQUEST_MODEL(&(Local_18.f_3430[iVar1]), false);
				iVar2++;
				if (STREAMING::HAS_MODEL_LOADED(&(Local_18.f_3430[iVar1])) && &Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = func_410(iVar1);
					if (PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iVar3, &(Local_18.f_3430[iVar1])))
					{
						Local_18.f_3374[iVar1] = PED::_REQUEST_METAPED_OUTFIT(&(Local_18.f_3430[iVar1]), iVar3);
					}
				}
			}
		}
		if ((iVar2 - Local_18.f_44) > 5)
		{
			Local_18.f_44 = iVar2;
			return 0;
		}
		iVar1++;
	}
	if (Global_40.f_4283.f_567)
	{
		Local_18.f_3478 = func_411();
		if (Local_18.f_3478 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (func_412(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549->f_1675[iVar4 /*5*/] = func_413(iVar4);
			if (&Global_1357549->f_1675[iVar4 /*5*/] == 0)
			{
			}
			else
			{
				Local_18.f_3458[iVar4] = _NAMESPACE48::_0xA00DF706C60173D1(&(Global_1357549->f_1675[iVar4 /*5*/]));
				if (&Local_18.f_3458[iVar4] != 0)
				{
					STREAMING::REQUEST_MODEL(&(Local_18.f_3458[iVar4]), false);
					iVar2++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar4++;
		}
	}
	if (func_355(Local_18.f_46, &uVar6, &iVar7, 0, 1))
	{
		iVar5 = uVar6;
		while (iVar5 <= iVar7)
		{
			if (!func_414(iVar5))
			{
			}
			else if (func_380(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = _NAMESPACE48::_0xA00DF706C60173D1(func_415(iVar5));
				if (&Local_18.f_3462[iVar8] != 0)
				{
					STREAMING::REQUEST_MODEL(&(Local_18.f_3462[iVar8]), false);
					iVar2++;
					iVar8++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	return 1;
}

int func_67()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 2))
		{
			func_416(Local_18.f_45, &(Local_18.f_2024));
			func_417(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
			MISC::SET_BIT(&(Local_18.f_43), 2);
		}
		return func_418(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
	}
	return 1;
}

int func_68()
{
	bool bVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_18.f_43, 3))
	{
		Local_18.f_42 = MISC::GET_GAME_TIMER() + 15000;
		Global_1357549->f_2 = 0;
		func_419();
		MISC::SET_BIT(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_420(&Local_18))
	{
		bVar0 = true;
	}
	else if (MISC::GET_GAME_TIMER() > Local_18.f_42)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_421(Local_18.f_46, 4);
		iVar1 = 0;
		while (iVar1 < 27)
		{
			func_422(iVar1, 4, 1);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_69()
{
	return 1;
}

int func_70()
{
	func_423(&Local_18);
	func_46();
	func_424(&(Local_18.f_51));
	func_425();
	func_426();
	func_36(1);
	func_419();
	func_427();
	return 1;
}

int func_71()
{
	if (func_428(32))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_429(32);
	}
	func_331(&Local_18);
	func_332(&Local_18);
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	func_430(&(Global_1391438->f_5), 32, 1);
	func_431();
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
	func_432(0);
	func_421(Local_18.f_46, 8);
	func_131(1073741824);
	return 1;
}

void func_72(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_57();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_57();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_57();
					break;
				case 2:
					func_57();
					break;
				case 4:
					func_57();
					break;
				case 3:
					func_57();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_57();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_57();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_57();
		}
		if (func_56() == 0)
		{
			if (func_433())
			{
				func_57();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_57();
	}
	return 1;
}

void func_74()
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar0++;
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_57();
					break;
				case 2:
					func_57();
					break;
				case 4:
					func_57();
					break;
				case 3:
					func_57();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (iVar0 >= 3600)
		{
			func_57();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_75(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_76()
{
	if (func_347(8))
	{
		func_366(0);
		func_348(8);
	}
	if (func_347(4))
	{
		func_166(1);
		func_348(4);
	}
	Local_18.f_1718 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Local_18.f_1718.f_1))
	{
		ITEMSET::DESTROY_ITEMSET(Local_18.f_1718.f_1);
	}
	if (func_347(32))
	{
		func_348(32);
	}
	Local_18.f_1718.f_1 = ITEMSET::CREATE_ITEMSET(false);
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_233(180573150, 1))
	{
		return -1;
	}
	if (func_12(4))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (PED::_0x5407B7288D0478B7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (func_134(0, 0, 1))
	{
		return -1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return -1;
	}
	bVar0 = ((Local_18.f_45 == 7 || Local_18.f_45 == 8) || Local_18.f_45 == 4);
	if (!func_347(1))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			if (bVar0)
			{
				func_311("RANCH_LAW_WARN", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_311("CAMP_LAW_WARN", 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar0)
		{
			func_311("RANCH_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_311("CAMP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		func_434(1);
	}
	if (!bVar0)
	{
		func_435();
	}
	if (func_38(512))
	{
		if (bVar0)
		{
			func_435();
			return 2;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1357549->f_1497 != -1)
	{
		iVar1 = func_178(Global_1357549->f_1497);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = func_436(Local_18.f_1718.f_1);
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				iVar4 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Local_18.f_1718.f_1));
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar1, iVar4, 17))
				{
					if (bVar0)
					{
						func_435();
						return 2;
					}
					else
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return -1;
}

void func_78()
{
	if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_311("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			func_437(2, 158959085, 0, "RANCH_LAW_HON", 0, 0, 1065353216, 0);
		}
		else
		{
			func_311("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			func_437(2, 158959085, 0, "RANCH_COMBAT_HON", 0, 0, 1065353216, 0);
		}
	}
	else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		func_311("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		func_437(2, 158959085, 0, "CAMP_LAW_HON", 0, 0, 1065353216, 0);
	}
	else
	{
		func_311("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		func_437(2, 158959085, 0, "CAMP_COMBAT_HON", 0, 0, 1065353216, 0);
	}
	func_438();
}

void func_79(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	iParam0->f_1[iVar0 /*3*/] = iParam2;
	(iParam0->f_1[iVar0 /*3*/])->f_1 = iParam3;
	(iParam0->f_1[iVar0 /*3*/])->f_2 = iParam4;
}

void func_80()
{
	func_148(4);
	func_148(2);
	func_434(32);
	Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
}

int func_81()
{
	int iVar0;
	struct<7> Var1;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vector3 vVar25;

	func_439();
	func_440();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_134(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar0 = func_436(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	Var1.f_8 = -1082130432;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		iVar22 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar21, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar22))
		{
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
			{
				case 0:
					iVar23 = 21030;
					break;
				case 1:
					iVar23 = 14284;
					break;
				case 2:
					iVar23 = 65478;
					break;
				case 3:
					iVar23 = 6884;
					break;
				case 4:
					iVar23 = 56200;
					break;
				case 5:
					iVar23 = 0;
					break;
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					iVar24 = joaat("weapon_repeater_carbine");
					break;
				case 1:
					iVar24 = joaat("weapon_rifle_springfield");
					break;
			}
			vVar25 = { func_441(func_337(func_149()), 50f, 2f) };
			Var1.f_14 = 1;
			Var1.f_13 = 0;
			Var1.f_16 = 1;
			Var1.f_18 = 1;
			Var1.f_19 = 0;
			Var1.f_12 = 1;
			Var1.f_7 = 200f;
			Var1.f_10 = iVar22;
			Var1 = { vVar25 };
			Var1.f_3 = { PED::GET_PED_BONE_COORDS(iVar22, iVar23, 0f, 0f, 0f) };
			Var1.f_6 = iVar24;
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
			ENTITY::_SET_ENTITY_HEALTH(iVar22, 0, 0);
			if (iVar0 <= 1)
			{
				Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 4000;
			}
			else
			{
				Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
			}
		}
		else
		{
			iVar21++;
		}
	}
	return -1;
}

void func_82()
{
	Local_18.f_3373 = -1;
	func_145(2);
	func_145(4);
	func_348(32);
}

void func_83()
{
	func_148(4);
	func_148(2);
	func_434(32);
	Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 5000;
}

int func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar20;
	int iVar21;

	func_439();
	func_440();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_134(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	iVar0 = func_436(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iVar2, 1, 1))
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iVar2);
			func_145(4);
			func_145(2);
			return -1;
		}
		iVar1++;
	}
	if (!func_347(16))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
			if (ENTITY::IS_ENTITY_DEAD(iVar20))
			{
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					case 1:
						iVar21 = 14284;
						break;
					case 2:
						iVar21 = 65478;
						break;
					case 3:
						iVar21 = 6884;
						break;
					case 4:
						iVar21 = 56200;
						break;
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { PED::GET_PED_BONE_COORDS(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				WEAPON::_0x5230D3F6EE56CFE6(iVar20, 0);
				TASK::TASK_SHOOT_WITH_WEAPON(iVar20, &Var3);
			}
			iVar1++;
		}
		func_434(16);
	}
	return -1;
}

void func_85()
{
	Local_18.f_3373 = -1;
	func_145(2);
	func_145(4);
	func_348(32);
}

void func_86()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	CAM::DO_SCREEN_FADE_OUT(3000);
}

int func_87()
{
	func_439();
	if (func_134(0, 0, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return -1;
}

void func_88()
{
}

void func_89()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 16, 0, 0, 0, 0);
	}
	PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
	vVar2 = { func_442(func_149(), &uVar0, &uVar1) };
	func_443(vVar2, uVar1, uVar0, 0);
	func_444(0);
	func_445();
	func_446(6);
	func_447(4096);
	Global_1310720->f_6 = 1;
	Global_1310720->f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = func_178(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	func_448();
}

int func_90()
{
	func_439();
	if (func_196())
	{
		func_352();
		return 0;
	}
	return -1;
}

void func_91(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*iParam0 = iVar0;
	func_449(iParam0);
}

void func_92()
{
	Local_18.f_1786 &= 8193;
	Local_18.f_1786.f_1 = 0;
	Local_18.f_1786.f_2 = 0;
	Local_18.f_1786.f_3 = 0;
	Local_18.f_1786.f_5 = 0;
	Local_18.f_1786.f_7 = 0;
	Local_18.f_1786.f_8 = 0;
	Local_18.f_1786.f_10 = -1;
}

int func_93()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;

	if (func_38(64) && func_38(32))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_3[4])))
	{
		return -1;
	}
	if (func_367(1))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(1361896662, 1);
			func_368(1);
		}
	}
	if (func_367(8192))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(-2146271366, 1);
			func_368(8192);
		}
	}
	if (func_367(4096))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			func_368(4096);
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[5]), false, 0))
	{
		return -1;
	}
	if (func_367(4096))
	{
		func_450(0);
	}
	bVar0 = false;
	if (func_451(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_452(2);
			}
		}
		else if (!func_38(32))
		{
			func_452(4);
		}
	}
	else if (func_453(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_452(32);
			}
		}
		else if (!func_38(32))
		{
			func_452(64);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_18.f_1786.f_5 = PED::GET_MOUNT(Global_35);
		if (func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_452(8);
				}
			}
			else if (!func_38(32))
			{
				func_452(16);
			}
		}
	}
	else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1786.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		if (func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_452(8);
				}
			}
			else if (!func_38(32))
			{
				func_452(16);
			}
		}
	}
	else
	{
		Local_18.f_1786.f_5 = func_369(0);
		if (func_336(Local_18.f_1786.f_5, 0) && func_454(Local_18.f_1786.f_5, 2043986356))
		{
			if (func_451(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
			{
				if (bVar0)
				{
					if (!func_38(64))
					{
						func_452(8);
					}
				}
				else if (!func_38(32))
				{
					func_452(16);
				}
			}
		}
	}
	bVar1 = false;
	Local_18.f_1786.f_6 = func_369(1);
	if ((func_336(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_454(Local_18.f_1786.f_6, 2043986356))
	{
		bVar1 = true;
	}
	else
	{
		Local_18.f_1786.f_6 = func_369(0);
		if ((func_336(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_454(Local_18.f_1786.f_6, 2043986356))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (func_451(Local_18.f_1786.f_6, &(Local_18.f_1786.f_9), &bVar0))
		{
			if (bVar0)
			{
				func_452(2048);
			}
			else
			{
				func_452(1024);
			}
		}
	}
	if (((((((func_367(2) || func_367(4)) || func_367(8)) || func_367(16)) || func_367(32)) || func_367(64)) || func_367(2048)) || func_367(1024))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_455())
		{
			return 6;
		}
		else
		{
			return 1;
		}
	}
	if (!func_367(4096) && func_455())
	{
		iVar2 = func_369(1);
		if (func_451(iVar2, &uVar3, &bVar0))
		{
			func_452(4096);
		}
		else
		{
			iVar2 = func_369(0);
			if (func_451(iVar2, &uVar3, &bVar0))
			{
				func_452(4096);
			}
		}
	}
	if ((!func_367(1) && !func_367(4096)) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_452(1);
	}
	if ((!func_367(8192) && !func_367(4096)) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_452(8192);
	}
	return -1;
}

void func_94()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	Local_18.f_1786.f_10 = func_456(1, 8);
	Local_18.f_1786.f_2 = MISC::GET_GAME_TIMER() + 3000;
	if ((func_367(2) || func_367(8)) || func_367(32))
	{
		func_208(535, 0);
	}
	if ((func_367(4) || func_367(16)) || func_367(64))
	{
		func_208(536, 0);
	}
}

int func_95()
{
	int iVar0;

	if ((func_367(8) || func_367(16)) || func_367(64))
	{
		func_457(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_367(2048) || func_367(1024))
	{
		func_457(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (Local_18.f_1786.f_10 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_2)
	{
		return 2;
	}
	iVar0 = func_178(Local_18.f_1786.f_10);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1786.f_10 = func_456(1, 8);
		return -1;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1786.f_1)
	{
		return -1;
	}
	if (!func_367(128))
	{
		if (func_179(iVar0, "GENERIC_ANGRY_REACTION", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_179(iVar0, "GENERIC_SHOCKED_DISBELIEF", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_179(iVar0, "STOP_THAT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_179(iVar0, "STOP_THAT_ANNOYED", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_179(iVar0, "CUT_THAT_OUT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_179(iVar0, "GENERIC_INTERRUPT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
	}
	else if (!func_367(256))
	{
		if ((func_367(2) || func_367(8)) || func_367(32))
		{
			if (func_179(iVar0, "GREET_PLAYER_DEAD_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_452(256);
				return 2;
			}
			if (func_179(iVar0, "GREET_PLAYER_DEAD_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_452(256);
				return 2;
			}
			if (func_179(iVar0, "GREET_PLAYER_DEAD_BODY_LONGTIME", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_452(256);
				return 2;
			}
		}
		if ((func_367(4) || func_367(16)) || func_367(64))
		{
			if (func_179(iVar0, "GREET_PLAYER_HOGTIED_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_452(256);
				return 2;
			}
			if (func_179(iVar0, "GREET_PLAYER_HOGTIED_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_452(256);
				return 2;
			}
		}
		if (func_179(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(256);
			return 2;
		}
		if (func_179(iVar0, "KNOCKOUT_WARNING", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_452(256);
			return 2;
		}
	}
	return -1;
}

int func_96()
{
	bool bVar0;

	bVar0 = true;
	if ((func_367(8) || func_367(16)) || func_367(64))
	{
		bVar0 = func_457(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_367(2048) || func_367(1024))
	{
		bVar0 = func_457(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (bVar0)
	{
		if (func_458(3072))
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

void func_97()
{
	int iVar0;

	if (((func_367(2) || func_367(4)) || func_367(8)) || func_367(16))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_367(2) || func_367(4))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_7, 0f, 0f, 0f, 1073741824, 1);
			}
			if (func_367(4))
			{
				if (PED::IS_PED_HOGTIED(Local_18.f_1786.f_7))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_7);
				}
			}
		}
		if (func_367(8) || func_367(16))
		{
			func_457(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_5))
			{
				if (PED::_0xA911EE21EDF69DAF(Local_18.f_1786.f_5))
				{
					if (TASK::_0xEFC4303DDC6E60D3(Global_35))
					{
						TASK::_0xED27560703F37258(0);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_8);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_8, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, -1.5f, 0f), 1f, 8);
					}
					else
					{
						TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(0, Local_18.f_1786.f_5, Local_18.f_1786.f_8);
						if (func_367(16))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, 3f, 0f), 1f, 20000, 0.25f, false, 40000f);
						}
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (func_367(16))
			{
				if (PED::IS_PED_HOGTIED(Local_18.f_1786.f_8))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_8);
				}
			}
		}
		func_459(Global_35, &iVar0, 0, 0, 1, 1);
		Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
	}
	if (func_367(32) || func_367(64))
	{
		func_457(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PED::SET_PED_RESET_FLAG(Global_35, 295, true);
	}
}

int func_98()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (func_367(128) || func_367(256))
	{
		if (!func_367(512))
		{
			if (func_179(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_452(512);
			}
		}
	}
	if (func_367(2048) || func_367(1024))
	{
		func_457(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	func_457(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_454(Global_35, -208384378)) || func_454(Global_35, -1619621311)) || func_454(Global_35, 724175444)) || func_454(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_7))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_7))
		{
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_7);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_7))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_7, func_460(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_8))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_8))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_5, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_8);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_8))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_8, func_460(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 3, 0);
	}
	if (func_367(2048) || func_367(1024))
	{
		return 4;
	}
	if (!func_367(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_452(1);
	}
	if (!func_367(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_452(8192);
	}
	return 5;
}

void func_99()
{
	int iVar0;

	func_457(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_6) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_9);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_6, 0f, -1.5f, 0f), 1f, 8);
			if (func_367(16))
			{
				if (PED::IS_PED_HOGTIED(Local_18.f_1786.f_9))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_9);
				}
			}
			func_459(Global_35, &iVar0, 0, 0, 1, 1);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 500;
		}
	}
}

int func_100()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	func_457(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (func_367(128) || func_367(256))
	{
		if (!func_367(512))
		{
			if (func_179(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_452(512);
			}
		}
	}
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_454(Global_35, -208384378)) || func_454(Global_35, -1619621311)) || func_454(Global_35, 724175444)) || func_454(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_9))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_6, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_9);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_9))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_9, func_460(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 3, 0);
	}
	if (!func_367(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_452(1);
	}
	if (!func_367(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_452(8192);
	}
	return 5;
}

void func_101()
{
	Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
}

int func_102()
{
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_1)
	{
		if (func_367(2))
		{
			func_368(2);
			func_437(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((((func_367(8) || func_367(16)) || func_367(32)) || func_367(64)) || func_367(2048)) || func_367(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_367(4))
		{
			func_368(4);
			func_437(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((((func_367(8) || func_367(16)) || func_367(32)) || func_367(64)) || func_367(2048)) || func_367(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_367(8))
		{
			func_368(8);
			func_437(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((func_367(32) || func_367(64)) || func_367(2048)) || func_367(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_367(16))
		{
			func_368(16);
			func_437(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((func_367(32) || func_367(64)) || func_367(2048)) || func_367(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_367(2048))
		{
			func_368(2048);
			func_437(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (func_367(32) || func_367(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_367(1024))
		{
			func_368(1024);
			func_437(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (func_367(32) || func_367(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_367(32))
		{
			func_368(32);
			func_437(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
		}
		if (func_367(64))
		{
			func_368(64);
			func_437(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
		}
		return 0;
	}
	return -1;
}

void func_103()
{
	vector3 vVar0;
	vector3 vVar3;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
	vVar0 = { func_461() };
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 * Vector(20f, 20f, 20f) };
	vVar3 = { Global_36 - vVar0 };
	TASK::TASK_SMART_FLEE_COORD(Global_35, vVar3, 2000f, -1, 8388608, 1f);
}

int func_104()
{
	if (!func_462(Global_35, &(Global_1357549->f_3[4]), 1, 0))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		return 0;
	}
	return -1;
}

void func_105()
{
	Local_18.f_1862 = 0;
	Local_18.f_1862.f_1 = 0;
	Local_18.f_1862.f_2 = 0;
	Local_18.f_1862.f_3 = -1;
	Local_18.f_1862.f_5 = func_463();
	if (Local_18.f_1862.f_4 != -1)
	{
		func_464(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_4 = -1;
}

int func_106()
{
	vector3 vVar0;
	var uVar3;

	if (func_38(1))
	{
		if (func_134(0, 0, 1))
		{
			return -1;
		}
		else
		{
			func_50(1);
		}
	}
	if ((func_135(&Global_1935630, 16384) || func_138(func_137(func_136()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return -1;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_3[0])))
	{
		return -1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return -1;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_465(func_149(), &vVar0, &uVar3) && BUILTIN::VDIST2(vVar0, Global_36) < 4f)
		{
			return -1;
		}
		Local_18.f_1862.f_5 = PED::GET_MOUNT(Global_35);
		func_466(1);
	}
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1862.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		func_466(2);
	}
	if (!func_467(1) && !func_467(2))
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return -1;
	}
	return 1;
}

void func_107()
{
	Local_18.f_1862.f_3 = func_456(1, 8);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1500;
}

int func_108()
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (func_38(1))
	{
		if (func_134(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_135(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (func_467(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return 3;
		}
	}
	if (func_467(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	if (Local_18.f_1862.f_3 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 2;
	}
	iVar0 = func_178(Local_18.f_1862.f_3);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1862.f_3 = func_456(1, 8);
		return -1;
	}
	if (!func_467(4))
	{
		if (func_179(iVar0, "RIDING_HORSE_IN_CAMP", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_466(4);
			return 2;
		}
		if (func_179(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_466(4);
			return 2;
		}
		if (func_179(iVar0, "SHAME_ON_YOU_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_466(4);
			return 2;
		}
		if (func_179(iVar0, "PLAYER_ACTING_WEIRD", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_466(4);
			return 2;
		}
		if (func_179(iVar0, "PLAYER_ACTING_WEIRD_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_466(4);
			return 2;
		}
	}
	return -1;
}

void func_109()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	if (!func_469(func_468(44)) && func_149() != 0)
	{
		func_208(533, 0);
	}
	Local_18.f_1862.f_4 = func_470(Local_18.f_1862.f_5);
	if (Local_18.f_1862.f_4 != -1)
	{
		func_471(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER();
	if (func_149() != 0)
	{
		Local_18.f_1862.f_1 += 1200;
	}
}

int func_110()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (func_135(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!func_467(4))
	{
		if (func_38(1))
		{
			if (func_134(0, 0, 1))
			{
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
		{
			return 0;
		}
	}
	if (func_467(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
			return 3;
		}
	}
	if (func_467(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	func_457(Local_18.f_1862.f_5, &(Local_18.f_1862.f_2), 32, 0, 0, 1084227584, 100, 0, 0);
	if (MISC::GET_GAME_TIMER() < Local_18.f_1862.f_1)
	{
		return -1;
	}
	if (func_467(4))
	{
		if (!func_467(8))
		{
			if (func_179(Global_35, "DEFUSE_ARGUMENT_TOUGH", 1017772929, 0, 0, 0, 0, 1))
			{
				func_466(8);
				Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1000;
				return -1;
			}
		}
	}
	if (func_467(1))
	{
		if (!func_454(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (func_467(2))
	{
		if (!func_467(64))
		{
			TASK::_0xED27560703F37258(Global_35);
			func_466(64);
		}
	}
	return -1;
}

void func_111()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
}

void func_112()
{
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 355, true);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
}

int func_113()
{
	if (func_467(1) && !func_467(32))
	{
		if (func_472(Global_35, Local_18.f_1862.f_5, 1, 1) > 2f || MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
		{
			Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
			func_473(1);
		}
		else
		{
			return -1;
		}
	}
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_18.f_1862.f_5, 6, 1);
	if (func_38(1))
	{
		if (func_134(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_135(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!func_467(16))
	{
		if (func_179(Global_35, "SPURS_HORSE", 1017772929, 0, 0, 0, 0, 1))
		{
			func_466(16);
		}
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_18.f_1862.f_6))
	{
		Local_18.f_1862.f_6 = func_474();
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_18.f_1862.f_6))
	{
		if (!func_467(32))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 1.5f, 35000, 0.25f, false, 40000f);
			func_466(32);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 0.5f, 0.5f, 2f, false, true, 0))
		{
			return 0;
		}
	}
	return -1;
}

void func_114()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, false);
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, false);
	}
}

void func_115()
{
	Local_18.f_1934.f_65 = 0;
	Local_18.f_1934.f_66 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransitionBlinkSlow");
	func_475();
}

int func_116()
{
	if (func_476())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_477())
	{
		return -1;
	}
	if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return -1;
	}
	Local_18.f_1934.f_66 = PED::_0xD806CD2A4F2C2996(Global_35);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66) && ENTITY::IS_ENTITY_A_PED(Local_18.f_1934.f_66)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_18.f_1934.f_66)))
	{
		return -1;
	}
	else if (func_478(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (func_479(Global_35))
	{
		Local_18.f_1934.f_84 = 1;
	}
	return 1;
}

void func_117()
{
	Local_18.f_1934.f_79 = GRAPHICS::_0xB958D97A0DFAA0C2("CamTransitionBlinkSlow");
}

int func_118()
{
	float fVar0;

	if (!func_477())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66))
	{
		return 0;
	}
	if (PED::_0xD806CD2A4F2C2996(Global_35) != Local_18.f_1934.f_66)
	{
		return 0;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return -1;
	}
	if (func_476())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_480(Global_35))
	{
		return -1;
	}
	if (func_454(Global_35, -208384378))
	{
		return -1;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	fVar0 = BUILTIN::VDIST2(Global_36, func_481(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
	if (fVar0 > 3f)
	{
		return 2;
	}
	return 3;
}

void func_119()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlinkSlow");
	func_181(&(Local_18.f_1934.f_80), 1);
}

int func_120()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransitionBlinkSlow") && GRAPHICS::_0xFBF161FCFEC8589E("CamTransitionBlinkSlow", 2, 0, &(Local_18.f_1934.f_79)))
	{
		ENTITY::_0x203BEFFDBE12E96A(PLAYER::PLAYER_PED_ID(), func_481(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), func_482(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), 1, 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_482(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_482(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
		return 4;
	}
	if (func_174(&(Local_18.f_1934.f_80)) && func_483(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	return -1;
}

void func_121()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
}

int func_122()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return 4;
}

void func_123()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (Local_18.f_1934.f_79)
	{
		GRAPHICS::_0xA201A3D0AC087C37("CamTransitionBlinkSlow");
		Local_18.f_1934.f_79 = 0;
	}
	func_181(&(Local_18.f_1934.f_80), 1);
}

int func_124()
{
	float fVar0;
	var uVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_1934.f_66, true, false) };
		if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar4.x, vVar4.y, (vVar4.z + 10f), &fVar0, &uVar1))
		{
			if (vVar4.z < fVar0)
			{
				vVar7 = { func_481(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67) };
				fVar10 = func_482(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3);
				vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, fVar10, 0f, 0.75f, 0f) };
				vVar11.f_2 = fVar0;
				ENTITY::SET_ENTITY_COORDS(Local_18.f_1934.f_66, vVar11, true, false, true, true);
				ENTITY::_0x9587913B9E772D29(Local_18.f_1934.f_66, 0);
			}
		}
		if (!func_480(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_18.f_1934.f_83 && func_287(Local_18.f_45))
			{
				func_208(615, 1);
			}
			else if (Local_18.f_45 == 8 || Local_18.f_45 == 7)
			{
				func_208(617, 1);
			}
			else
			{
				func_208(616, 1);
			}
			Local_18.f_1934.f_83 = 0;
			Local_18.f_1934.f_84 = 0;
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 0;
		}
	}
	if (func_174(&(Local_18.f_1934.f_80)) && func_483(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return -1;
}

Vector3 func_125()
{
	if (func_151(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_151(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_126()
{
	Global_40.f_4283.f_322 = 2;
}

int func_127(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_484(iParam0))
	{
		return 0;
	}
	return func_485(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_128(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_1 = _NAMESPACE48::_0x112DDF56300BC6E5(*uParam0);
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(uParam0->f_1))
	{
		uParam0->f_1 = _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(*uParam0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(*uParam0, sParam3);
	}
}

void func_129()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_3795))
	{
		Local_3795 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@mech@prop_player_food_order@table@stew@action_pl_female", 0, "pl_Action_Left", false, true);
		Local_3795.f_1 = 2;
		Local_3795.f_2 = 1;
		Local_3795.f_3[0] = "pl_Action_Left";
		Local_3795.f_3[1] = "pl_Action_Right";
	}
	func_486(&Local_3808, joaat("p_spoon01x"), "p_spoon01x_PH_R_HAND", 0);
	func_486(&Local_3808, -1621868985, "p_bowl04x_stew_PH_L_HAND", 1);
	STREAMING::_0x19A6BE7D9C6884D3(-1177373461, 1, ENTITY::GET_ENTITY_MODEL(Global_35), 0);
	STREAMING::_0x19A6BE7D9C6884D3(1627566189, 3, ENTITY::GET_ENTITY_MODEL(Global_35), 0);
	STREAMING::REQUEST_MODEL((Local_3808[1 /*4*/])->f_2, false);
	STREAMING::REQUEST_MODEL((Local_3808[0 /*4*/])->f_2, false);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_3795);
}

void func_130(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_487(iParam0, 0, 0);
	if (func_488(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_489(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_490(iParam0, 1);
			}
			else
			{
				func_491(iParam0, 1);
			}
		}
		else
		{
			func_492(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_493())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_131(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

bool func_132()
{
	return func_376(10, 0) >= 3;
}

void func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

int func_134(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_494())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_495(&(Global_1898164->f_1[0 /*5*/]));
		if (func_484(iVar0) && func_496(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_497(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_136()
{
	return Global_1894899->f_2;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_138(int iParam0, int iParam1)
{
	if (!func_498(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

int func_139(int iParam0)
{
	if (!func_499(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_140(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_454(iParam0, 713668775))
	{
		return 0;
	}
	if (((func_454(iParam0, -76381094) || func_454(iParam0, -1098463898)) || func_454(iParam0, 993674639)) || TASK::GET_IS_TASK_ACTIVE(iParam0, 7))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iParam0))
	{
		return 1;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iParam0, -1))
	{
		return 0;
	}
	if (iParam1 != -1 && func_500(iParam1))
	{
		return 0;
	}
	return 1;
}

void func_141(int iParam0)
{
	int iVar0;

	iVar0 = func_474();
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return;
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, TASK::_0xA8452DD321607029(iVar0, 1), 1.5f, 20000, 0.25f, false, 40000f);
}

bool func_142()
{
	return Global_1949598->f_1;
}

bool func_143()
{
	return func_501();
}

void func_144(bool bParam0)
{
	if (bParam0 == func_143())
	{
		return;
	}
	if (bParam0)
	{
		func_154(81053684);
		if (!func_503(func_502(0)))
		{
			func_154(-525676072);
		}
	}
	else
	{
		func_153(81053684);
		func_153(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

void func_145(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_146(var uParam0)
{
	if (-1829635046 == func_504(81053684))
	{
		if (func_505(uParam0))
		{
			return 1;
		}
	}
	else if (func_506(-525676072, uParam0))
	{
		if (func_505(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_147()
{
	int iVar0;

	if (!func_501())
	{
		return 0;
	}
	if (!func_505(&iVar0))
	{
		return 0;
	}
	if (!func_507(iVar0))
	{
		return 0;
	}
	return func_508(iVar0, 0);
}

void func_148(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_149()
{
	return Global_40.f_4283;
}

int func_150()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_485(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_152(int iParam0)
{
	return func_510(func_509(iParam0));
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_511(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_512(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_513(func_509(iParam0), 6);
}

void func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_511(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_512(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_514(func_509(iParam0), 6);
}

void func_155()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_38(16);
	bVar1 = Global_1357549->f_1485 > BUILTIN::TO_FLOAT(5400);
	bVar2 = func_12(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		func_131(16);
		func_437(2, -549508280, 0, 0, 0, 0, 1065353216, 0);
	}
	if (bVar0 && !bVar2)
	{
		func_50(16);
		Global_1357549->f_1485 = 0f;
	}
}

void func_156(float fParam0, float fParam1, float fParam2)
{
	struct<16> Var0;

	Var0 = { func_515(fParam0, fParam1, fParam2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1357549->f_1886.f_1, &Var0);
}

int func_157()
{
	return Global_40.f_4283.f_324;
}

void func_158(int iParam0)
{
	int iVar0;
	int iVar1;

	func_516(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2.f_1, iVar1);
}

void func_159(int iParam0)
{
	int iVar0;
	int iVar1;

	func_516(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4.f_1, iVar1);
}

int func_160(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (MISC::IS_BIT_SET(&(Local_18.f_14[iParam0]), iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_161(var uParam0)
{
	func_517(uParam0, &(Global_1357549->f_3[2]), &(Global_1357549->f_3[3]), 0);
	func_518(&(Global_1357549->f_3[2]));
	if (((!func_12(64) && !func_347(4)) && !func_135(&Global_1935630, 4194304)) && VOLUME::IS_POINT_IN_VOLUME(&(Global_1357549->f_3[2]), Global_36))
	{
		func_166(0);
	}
	if (uParam0->f_49)
	{
		func_519(uParam0);
	}
	else
	{
		func_520(uParam0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0) && VOLUME::IS_POINT_IN_VOLUME(iParam0, Global_36))
	{
		if (!func_12(1073741824))
		{
			func_148(1073741824);
		}
	}
	else if (func_12(1073741824))
	{
		func_145(1073741824);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam1) && VOLUME::IS_POINT_IN_VOLUME(iParam1, Global_36))
	{
		if (!func_12(32768))
		{
			func_148(32768);
		}
	}
	else if (func_12(32768))
	{
		func_145(32768);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam2) && VOLUME::IS_POINT_IN_VOLUME(iParam2, Global_36))
	{
		if (!func_38(512))
		{
			func_131(512);
		}
	}
	else if (func_38(512))
	{
		func_50(512);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam3) && VOLUME::IS_POINT_IN_VOLUME(iParam3, Global_36))
	{
		if (!func_38(1024))
		{
			func_131(1024);
		}
	}
	else if (func_38(1024))
	{
		func_50(1024);
	}
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;

	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_369(&(iVar1[iVar4]));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VOLUME::DOES_VOLUME_EXIST(iParam0)) && VOLUME::IS_POINT_IN_VOLUME(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			func_521(&(iVar1[iVar4]), 1);
		}
		else
		{
			func_521(&(iVar1[iVar4]), 0);
		}
		iVar4++;
	}
}

void func_164(var uParam0)
{
	if (!func_38(33554432))
	{
		if (func_38(1024))
		{
			func_131(33554432);
			POPULATION::_0xC6DCC2A3A8825C85(0);
		}
	}
	else
	{
		POPULATION::_0x8EC7CD701F872F87(0f, 4270208, 0, 0, -1, -1);
		POPULATION::_0x8EC7CD701F872F87(0.3f, 1760, 0, 0, -1, -1);
		if (!func_38(512))
		{
			POPULATION::_0xBC90BDF4E5228EA1();
			func_50(33554432);
		}
	}
}

void func_165()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (((MISC::GET_FRAME_COUNT() % 15) != 0 || func_522(4)) || func_167())
	{
		return;
	}
	iVar0 = func_149();
	vVar1 = { func_460(iVar0) };
	fVar4 = 50f;
	if ((iVar0 == 7 || iVar0 == 8) || iVar0 == 3)
	{
		fVar4 = 150f;
	}
	iVar5 = _NAMESPACE49::_0xBA2C49EA6A8D24FF(vVar1, fVar4, 0, 1, 0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar5) || !ENTITY::DOES_ENTITY_EXIST(iVar6)) || !MISC::_0x5170DDA6D63ACAAA(iVar6)) || ENTITY::IS_ENTITY_ON_SCREEN(iVar5))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar6, 186, false);
	ENTITY::SET_ENTITY_COORDS(iVar5, 523.9103f, -6.4477f, 110.8692f, false, false, false, true);
	_NAMESPACE49::_0x9D16896F0DBE78A2(523.9103f, -6.4477f, 110.8692f, 2.5f);
}

void func_166(bool bParam0)
{
	func_333(bParam0);
	func_334(!bParam0);
}

bool func_167()
{
	return Global_1898164->f_163;
}

bool func_168(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_169(int iParam0, int iParam1)
{
	if (!func_498(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

void func_170(int iParam0, int iParam1)
{
	if (!func_498(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (&Global_40.f_9384[iParam0 /*2*/] - (Global_40.f_9384[iParam0 /*2*/] && iParam1));
}

int func_171(int iParam0)
{
	switch (func_149())
	{
		case 2:
			return func_523(iParam0);
		case 1:
			return func_524(iParam0);
		case 6:
			return func_525(iParam0);
		case 3:
			return func_526(iParam0);
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_527())
	{
		return 0;
	}
	if (AUDIO::_0x54B187F111D9C6F8(Global_35, 0))
	{
		return 0;
	}
	if (func_336(func_178(&(Global_1357549->f_1659[iParam0])), 0))
	{
		if (PED::_0x9337183FDA2E9035(func_178(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()) || PED::_0xA454D234E45BB6E5(func_178(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)
{
	int iVar0;

	iVar0 = func_178(&(Global_1357549->f_1659[iParam0]));
	if (func_336(iVar0, 0) && func_176(&(Global_1357549->f_1659[iParam0]), 1, 1))
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_1663[iParam0])))
		{
			if (func_462(Global_35, &(Global_1357549->f_1663[iParam0]), 1, 0) && func_462(iVar0, &(Global_1357549->f_1663[iParam0]), 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_174(var uParam0)
{
	return func_528(*uParam0, 1);
}

float func_175(var uParam0)
{
	if (!func_174(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_529(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_530() - uParam0->f_1);
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_531(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_532(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_336(func_178(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_533(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_532(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0, int iParam1)
{
	if (!func_531(iParam0))
	{
		return 0;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1) != 0)
	{
		return 1;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (!func_531(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_179(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_534(iParam0, &Var0);
}

int func_180()
{
	int iVar0;

	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 || !func_174(uParam0))
	{
		func_188(uParam0);
	}
}

void func_182(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_183(int iParam0)
{
	if (!func_499(iParam0))
	{
		return false;
	}
	if (!func_349(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

char* func_184(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	if (func_149() == 3)
	{
		if (iParam0 == 0)
		{
			sVar0 = "PL_DUTCH";
		}
		else
		{
			sVar0 = "PL_JOHN_SHADY";
		}
	}
	else if (iParam0 == 0)
	{
		sVar0 = "PL_DUTCH";
	}
	else
	{
		sVar0 = "PL_JOHN";
	}
	return sVar0;
}

int func_185(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_499(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_532(iParam0, 2, 1))
			{
				func_422(iParam0, 2, 1);
			}
			if (func_408(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_535(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_187(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_336(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_336(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_536(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_535(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_537(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_535(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_537(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_532(iParam0, 44, 0))
			{
				func_535(iParam0, 44, 0);
			}
			if (func_538(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_537(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_422(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_539(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_540(iParam0, 0, 0, 1);
			}
			func_422(iParam0, 33, 1);
			func_422(iParam0, 34, 1);
			func_422(iParam0, 29, 1);
			if (!func_212(vVar0) && iParam7)
			{
				func_537(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_537(iParam0, 4);
			}
			else
			{
				func_537(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_536(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_541(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_537(iParam0, 4);
			}
			else
			{
				func_537(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_542(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_543(iParam0, iParam13, 0);
						func_544(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_532(iParam0, 25, 0))
						{
							func_422(iParam0, 25, 0);
						}
						func_535(iParam0, 66, 0);
						func_537(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_537(iParam0, 5);
				}
				func_535(iParam0, 28, 1);
			}
			else
			{
				func_537(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_537(iParam0, 6);
			}
			break;
		case 6:
			if (func_336(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_545(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_546(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_537(iParam0, 7);
		case 7:
			func_539(iParam0, bParam9, bParam15, 0);
			func_547(iParam0, 4, bParam11);
			func_548(iParam0);
			if (bParam20)
			{
				if (func_549(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_550(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_537(iParam0, 0);
			func_551(iParam0, 16, 1);
			func_422(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_186(int iParam0)
{
	func_552(iParam0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "ARTHUR", Global_35, 0);
	if (iParam0 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_178(0), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "DUTCH", func_178(0), 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_178(1), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "JOHN", func_178(1), 0);
	}
	func_553(iParam0);
}

void func_187(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_499(iParam0))
	{
		return;
	}
	if (func_349(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_535(iParam0, 56, 1);
		func_181(&(Global_1359489->f_40), 1);
	}
	func_554(iParam0, 0);
	func_547(iParam0, 4, 0);
	func_555(iParam0);
	func_548(iParam0);
	func_422(iParam0, 37, 1);
	bVar0 = func_336(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_556(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_532(iParam0, 64, 1))
	{
		func_422(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_422(iParam0, 33, 1);
		func_422(iParam0, 34, 1);
		func_557(iParam0, 1056964608, -1, 1061158912);
		func_539(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_535(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_535(iParam0, 35, 1);
			if (bParam8)
			{
				func_535(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_558(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_422(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_535(iParam0, 33, 1);
		func_539(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_181(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_182(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_535(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_559(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_532(iParam0, 45, 1))
	{
		func_422(iParam0, 45, 1);
	}
	func_560(iParam0, 16, 1);
	func_422(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_336(func_139(iParam0), 0))
		{
			func_561(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_188(var uParam0)
{
	func_562(uParam0, 0f);
}

void func_189(int iParam0)
{
	if (func_149() == 3 && iParam0 == 0)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(58833085, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-629053815, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(58833085);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-629053815);
	}
	if (func_149() == 3 && iParam0 == 1)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(1163459288, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1163459288);
	}
}

void func_190()
{
	Global_1357549->f_12[0 /*14*/] = 1;
	(Global_1357549->f_12[0 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[0 /*14*/])->f_2 = { -148.3662f, -26.0562f, 95.8773f };
	(Global_1357549->f_12[0 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[0 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[1 /*14*/] = 1;
	(Global_1357549->f_12[1 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[1 /*14*/])->f_2 = { -148.0154f, -13.4206f, 95.314f };
	(Global_1357549->f_12[1 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[1 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[2 /*14*/] = 1;
	(Global_1357549->f_12[2 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[2 /*14*/])->f_2 = { -125.0946f, -21.7405f, 95.1253f };
	(Global_1357549->f_12[2 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[2 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[8 /*14*/] = 1;
	(Global_1357549->f_12[8 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[8 /*14*/])->f_2 = { -132.0545f, -31.1304f, 95.9688f };
	(Global_1357549->f_12[8 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[8 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[7 /*14*/] = 1;
	(Global_1357549->f_12[7 /*14*/])->f_1 = 172011504;
	(Global_1357549->f_12[7 /*14*/])->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	(Global_1357549->f_12[7 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[7 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[6 /*14*/] = 1;
	(Global_1357549->f_12[6 /*14*/])->f_1 = -1365193577;
	(Global_1357549->f_12[6 /*14*/])->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	(Global_1357549->f_12[6 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[6 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[4 /*14*/] = 1;
	(Global_1357549->f_12[4 /*14*/])->f_1 = 172011504;
	(Global_1357549->f_12[4 /*14*/])->f_2 = { -129.8749f, -30.5768f, 95.5843f };
	(Global_1357549->f_12[4 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[4 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[5 /*14*/] = 1;
	(Global_1357549->f_12[5 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[5 /*14*/])->f_2 = { -129.8767f, -30.3077f, 95.6024f };
	(Global_1357549->f_12[5 /*14*/])->f_5 = -1753113092;
	(Global_1357549->f_12[5 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[9 /*14*/] = 1;
	(Global_1357549->f_12[9 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[9 /*14*/])->f_2 = { -131.4675f, -31.6383f, 97.1984f };
	(Global_1357549->f_12[9 /*14*/])->f_5 = 219115318;
	(Global_1357549->f_12[9 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[12 /*14*/] = 1;
	(Global_1357549->f_12[12 /*14*/])->f_1 = 163126540;
	(Global_1357549->f_12[12 /*14*/])->f_2 = { -116.1046f, -36.3356f, 95.1647f };
	(Global_1357549->f_12[12 /*14*/])->f_5 = -1200234060;
	(Global_1357549->f_12[12 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[13 /*14*/] = 2;
	(Global_1357549->f_12[13 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[13 /*14*/])->f_2 = { 690.5589f, -1253.308f, 43.9556f };
	(Global_1357549->f_12[13 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[13 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[14 /*14*/] = 2;
	(Global_1357549->f_12[14 /*14*/])->f_1 = -1010466481;
	(Global_1357549->f_12[14 /*14*/])->f_2 = { 691.5306f, -1258.313f, 44.2328f };
	(Global_1357549->f_12[14 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[14 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[15 /*14*/] = 2;
	(Global_1357549->f_12[15 /*14*/])->f_1 = 1084869405;
	(Global_1357549->f_12[15 /*14*/])->f_2 = { 673.365f, -1269.473f, 44.0022f };
	(Global_1357549->f_12[15 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[15 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[16 /*14*/] = 2;
	(Global_1357549->f_12[16 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[16 /*14*/])->f_2 = { 675.5692f, -1269.244f, 45.3696f };
	(Global_1357549->f_12[16 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[16 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[17 /*14*/] = 2;
	(Global_1357549->f_12[17 /*14*/])->f_1 = -850189983;
	(Global_1357549->f_12[17 /*14*/])->f_2 = { 676.3393f, -1250.768f, 43.8081f };
	(Global_1357549->f_12[17 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[17 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[18 /*14*/] = 2;
	(Global_1357549->f_12[18 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[18 /*14*/])->f_2 = { 662.1107f, -1256.578f, 42.7845f };
	(Global_1357549->f_12[18 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[18 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[19 /*14*/] = 2;
	(Global_1357549->f_12[19 /*14*/])->f_1 = 2728487;
	(Global_1357549->f_12[19 /*14*/])->f_2 = { 661.0519f, -1259.052f, 43.1332f };
	(Global_1357549->f_12[19 /*14*/])->f_5 = -1200234060;
	(Global_1357549->f_12[19 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[20 /*14*/] = 2;
	(Global_1357549->f_12[20 /*14*/])->f_1 = 1128417383;
	(Global_1357549->f_12[20 /*14*/])->f_2 = { 672.6604f, -1241.364f, 43.4735f };
	(Global_1357549->f_12[20 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[20 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[21 /*14*/] = 2;
	(Global_1357549->f_12[21 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[21 /*14*/])->f_2 = { 674.6741f, -1238.333f, 43.6628f };
	(Global_1357549->f_12[21 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[21 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[22 /*14*/] = 2;
	(Global_1357549->f_12[22 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[22 /*14*/])->f_2 = { 656.9509f, -1234.653f, 45.8639f };
	(Global_1357549->f_12[22 /*14*/])->f_5 = 1566690690;
	(Global_1357549->f_12[22 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[23 /*14*/] = 2;
	(Global_1357549->f_12[23 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[23 /*14*/])->f_2 = { 653.0373f, -1246.106f, 44.595f };
	(Global_1357549->f_12[23 /*14*/])->f_5 = 480074467;
	(Global_1357549->f_12[23 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[24 /*14*/] = 2;
	(Global_1357549->f_12[24 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[24 /*14*/])->f_2 = { 650.8378f, -1252.101f, 43.1323f };
	(Global_1357549->f_12[24 /*14*/])->f_5 = 436323736;
	(Global_1357549->f_12[24 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[25 /*14*/] = 2;
	(Global_1357549->f_12[25 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[25 /*14*/])->f_2 = { 650.781f, -1252.204f, 43.132f };
	(Global_1357549->f_12[25 /*14*/])->f_5 = 436323736;
	(Global_1357549->f_12[25 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[26 /*14*/] = 2;
	(Global_1357549->f_12[26 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[26 /*14*/])->f_2 = { 652.8052f, -1253.324f, 43.6418f };
	(Global_1357549->f_12[26 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[26 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[27 /*14*/] = 2;
	(Global_1357549->f_12[27 /*14*/])->f_1 = 1034009086;
	(Global_1357549->f_12[27 /*14*/])->f_2 = { 652.6848f, -1253.207f, 43.2953f };
	(Global_1357549->f_12[27 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[27 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[36 /*14*/] = 3;
	(Global_1357549->f_12[36 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[36 /*14*/])->f_2 = { 1878.206f, -1864.335f, 43.5632f };
	(Global_1357549->f_12[36 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[36 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[37 /*14*/] = 3;
	(Global_1357549->f_12[37 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[37 /*14*/])->f_2 = { 1872.988f, -1881.333f, 44.1306f };
	(Global_1357549->f_12[37 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[37 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[38 /*14*/] = 3;
	(Global_1357549->f_12[38 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[38 /*14*/])->f_2 = { 1883.117f, -1885.653f, 43.7719f };
	(Global_1357549->f_12[38 /*14*/])->f_5 = 480074467;
	(Global_1357549->f_12[38 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[39 /*14*/] = 3;
	(Global_1357549->f_12[39 /*14*/])->f_1 = 1079213989;
	(Global_1357549->f_12[39 /*14*/])->f_2 = { 1875.758f, -1881.731f, 42.8273f };
	(Global_1357549->f_12[39 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[39 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[28 /*14*/] = 2;
	(Global_1357549->f_12[28 /*14*/])->f_1 = -160392273;
	(Global_1357549->f_12[28 /*14*/])->f_2 = { 652.6238f, -1253.39f, 43.6368f };
	(Global_1357549->f_12[28 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[28 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[29 /*14*/] = 2;
	(Global_1357549->f_12[29 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[29 /*14*/])->f_2 = { 653.7182f, -1253.372f, 44.8718f };
	(Global_1357549->f_12[29 /*14*/])->f_5 = 219115318;
	(Global_1357549->f_12[29 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[31 /*14*/] = 2;
	(Global_1357549->f_12[31 /*14*/])->f_1 = 1034009086;
	(Global_1357549->f_12[31 /*14*/])->f_2 = { 654.2183f, -1251.526f, 43.2551f };
	(Global_1357549->f_12[31 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[31 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[34 /*14*/] = 3;
	(Global_1357549->f_12[34 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[34 /*14*/])->f_2 = { 1889.558f, -1879.846f, 42.6053f };
	(Global_1357549->f_12[34 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[34 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[35 /*14*/] = 3;
	(Global_1357549->f_12[35 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[35 /*14*/])->f_2 = { 1875.46f, -1860.001f, 42.5923f };
	(Global_1357549->f_12[35 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[35 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[32 /*14*/] = 3;
	(Global_1357549->f_12[32 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[32 /*14*/])->f_2 = { 1868.881f, -1874.209f, 42.3693f };
	(Global_1357549->f_12[32 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[32 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[33 /*14*/] = 3;
	(Global_1357549->f_12[33 /*14*/])->f_1 = 964593693;
	(Global_1357549->f_12[33 /*14*/])->f_2 = { 1869.735f, -1870.672f, 42.18f };
	(Global_1357549->f_12[33 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[33 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[30 /*14*/] = 2;
	(Global_1357549->f_12[30 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[30 /*14*/])->f_2 = { 654.0408f, -1251.324f, 43.2742f };
	(Global_1357549->f_12[30 /*14*/])->f_5 = -1753113092;
	(Global_1357549->f_12[30 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[10 /*14*/] = 1;
	(Global_1357549->f_12[10 /*14*/])->f_1 = -1611076340;
	(Global_1357549->f_12[10 /*14*/])->f_2 = { -118.1006f, -34.2279f, 94.8062f };
	(Global_1357549->f_12[10 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[10 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[11 /*14*/] = 1;
	(Global_1357549->f_12[11 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[11 /*14*/])->f_2 = { -108.722f, -41.1198f, 97.1374f };
	(Global_1357549->f_12[11 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[11 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[3 /*14*/] = 1;
	(Global_1357549->f_12[3 /*14*/])->f_1 = -1920340119;
	(Global_1357549->f_12[3 /*14*/])->f_2 = { -121.9807f, -22.507f, 95.3463f };
	(Global_1357549->f_12[3 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[3 /*14*/])->f_6 = 0f;
}

void func_191()
{
	int iVar0;

	iVar0 = Global_1357549->f_573;
	if (iVar0 >= 0 && iVar0 < 40)
	{
		if (func_149() == &Global_1357549->f_12[iVar0 /*14*/])
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE((Global_1357549->f_12[iVar0 /*14*/])->f_1) && func_563() == 0)
				{
					(Global_1357549->f_12[iVar0 /*14*/])->f_7 = ENTITY::_0x6F3068258A499E52((Global_1357549->f_12[iVar0 /*14*/])->f_5, (Global_1357549->f_12[iVar0 /*14*/])->f_2, 15);
				}
			}
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
			{
				if (!(Global_1357549->f_12[iVar0 /*14*/])->f_10)
				{
					(Global_1357549->f_12[iVar0 /*14*/])->f_10 = ENTITY::_0x1FF441D7954F8709((Global_1357549->f_12[iVar0 /*14*/])->f_7);
					if ((Global_1357549->f_12[iVar0 /*14*/])->f_10)
					{
						(Global_1357549->f_12[iVar0 /*14*/])->f_8 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA((Global_1357549->f_12[iVar0 /*14*/])->f_7));
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549->f_573 == iVar0 || (Global_1357549->f_12[iVar0 /*14*/])->f_9)
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_10)
			{
				func_564(iVar0);
			}
		}
		iVar0++;
	}
	Global_1357549->f_573++;
	if (Global_1357549->f_573 >= 40)
	{
		Global_1357549->f_573 = 0;
	}
}

bool func_192(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_193(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

int func_194()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_195(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

int func_196()
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return 0;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		return 0;
	}
	if (func_142())
	{
		return 0;
	}
	if (func_38(1048576))
	{
		return 0;
	}
	return 1;
}

void func_197()
{
	char* sVar0;
	struct<16> Var1;

	sVar0 = func_565(func_149());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	Var1 = { func_515(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900) };
	func_567(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_SUPPLIES", func_566(&Var1, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_198()
{
	char* sVar0;
	int iVar1;
	char* sVar2;

	sVar0 = func_565(func_149());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iVar1 = func_157();
	sVar2 = MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iVar1) * 0.01f), 2);
	func_567(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_FUNDS", func_566(sVar2, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_199()
{
	func_50(4096);
	func_50(8192);
}

void func_200(int iParam0)
{
	int iVar1;

	if (*iParam0 == -15)
	{
		*iParam0 = func_568();
	}
	if (func_569())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(18, 27);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(7, 21);
	}
	func_570(iParam0, 0, 0, iVar1, 0, 0, 0, 0);
}

bool func_201(int iParam0)
{
	return iParam0 != -15;
}

bool func_202(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_203(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!func_571(uParam0, uParam1))
	{
		return;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 20)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (func_572(iVar0) && func_573((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			bVar2 = true;
		}
	}
	if (iVar1 >= 20)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		iVar1++;
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, ((*uParam0)[iVar0 /*257*/])->f_253);
		if (!MISC::IS_BIT_SET(uParam1[iVar0], iVar3))
		{
			MISC::SET_BIT((*uParam1)[iVar0], iVar3);
			return;
		}
	}
	if (iVar1 >= 50)
	{
		return;
	}
}

bool func_204(int iParam0)
{
	return func_574(Global_35, iParam0);
}

int func_205()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_575(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_208(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_575(iParam0, &iVar0, &iVar1);
	if (!func_576(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_577(iVar0, iVar1);
}

int func_209()
{
	return func_12(1073741824);
}

bool func_210(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_210(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_578(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_579(iVar0);
	*iParam0 = 0;
}

int func_212(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_213()
{
	return "INSPECT";
}

int func_214(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_580(iVar0, 2))
		{
			if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_10 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_581(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_210(iParam0))
	{
		return;
	}
	iVar0 = func_578(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_210(iParam0))
	{
		return;
	}
	iVar0 = func_578(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_217(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_210(iParam0))
	{
		return false;
	}
	iVar0 = func_578(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_218(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_210(iParam0))
	{
		return false;
	}
	iVar0 = func_578(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_219(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_220(int iParam0)
{
	if (!func_210((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_1 = func_582(func_213(), -1384133541, 1710877787, 0);
		func_216((Local_18.f_3057[iParam0 /*21*/])->f_1, 799218720, 0, 1);
	}
}

int func_221(int iParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_583((Local_18.f_3057[iParam0 /*21*/])->f_1, 1, 1);
	uVar1 = func_583((Local_18.f_3057[iParam0 /*21*/])->f_1, 0, 1);
	if (bVar0 || uVar1)
	{
		func_211(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
		iVar2 = iParam0;
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (bVar0)
			{
				iVar2++;
				if (iVar2 >= 15)
				{
					iVar2 = 0;
				}
			}
			else
			{
				iVar2 = (iVar2 - 1);
				if (iVar2 < 0)
				{
					iVar2 = 14;
				}
			}
			if ((Local_18.f_3057[iVar2 /*21*/])->f_19 == (Local_18.f_3057[iParam0 /*21*/])->f_19)
			{
				func_584(iParam0, iVar2);
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_222(int iParam0)
{
	if (!func_210((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_2 = func_586(func_585(), 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_216((Local_18.f_3057[iParam0 /*21*/])->f_2, 799218720, 0, 1);
	}
}

bool func_223(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_210(iParam0))
	{
		return false;
	}
	iVar0 = func_578(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_224(var uParam0)
{
	if (uParam0->f_3 != 0)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_5))
		{
			if (CAM::IS_CAM_RENDERING(uParam0->f_5))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_5, false);
		}
		if (func_210(uParam0->f_2))
		{
			func_211(&(uParam0->f_2), 1, 1);
		}
		if (func_210(uParam0->f_1))
		{
			func_211(&(uParam0->f_1), 1, 1);
		}
		if (func_210(*uParam0))
		{
			func_211(uParam0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		uParam0->f_3 = 0;
	}
}

int func_225(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_226(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if ((((iParam0 == func_369(0) || iParam0 == func_369(1)) || iParam0 == func_369(2)) || iParam0 == func_369(3)) || iParam0 == func_369(4))
	{
		return 0;
	}
	if (func_587() < 1)
	{
		return 0;
	}
	return 1;
}

bool func_227(int iParam0)
{
	return func_574(iParam0, 2);
}

int func_228(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

void func_229()
{
	struct<7> Var0;

	Global_40.f_4283.f_567 = { Var0 };
	func_588();
	Global_1357549->f_1897 = 0;
}

void func_230(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549->f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	Global_40.f_4283.f_567.f_6 = func_589(iParam0);
	func_590(iParam0);
}

int func_231(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;

	if (func_212(vParam0))
	{
		return 0;
	}
	if (iParam3 == 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(&(Global_1357549->f_3[iParam3]), iVar2, -1805387726, 1, 1, 0, 0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
	iVar4 = 0;
	fVar5 = 9999.99f;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar4, iVar2);
		if (TASK::_0x0CC36D4156006509(iVar0))
		{
			vVar7 = { TASK::_0xA8452DD321607029(iVar0, 1) };
			if (!func_212(vVar7))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
				if (fVar6 < fVar5)
				{
					fVar5 = fVar6;
					iVar1 = iVar0;
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

float func_232(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_233(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_591(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_234()
{
	return &Global_1935436 == 2;
}

void func_235()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 < 5)
			{
				func_592(iVar0);
			}
		}
		iVar0++;
	}
}

void func_236()
{
	if (!Global_1935436->f_18.f_1)
	{
		Global_1935436->f_18.f_1 = 1;
	}
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 56;
		case 2:
			return 57;
		case 3:
			return 58;
		case 6:
			return 59;
		default:
			break;
	}
	return -1;
}

bool func_238(int iParam0, int iParam1)
{
	if (!func_593(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

void func_239(int iParam0, int iParam1)
{
	func_594(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_595(iParam3, iParam0);
	vVar1 = { func_596(iVar0) };
	vVar4 = { func_597(iVar0) };
	if (func_212(vVar1))
	{
		return;
	}
	if (!func_598(19, 16384))
	{
		if (!func_414(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_254(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	if (func_212(vVar4))
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	}
	else
	{
		(Global_1914319->f_15936[iVar0 /*6*/])->f_2 = { vVar4 };
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = iVar0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_25 = iParam2;
	(Global_1914319->f_3[iParam0 /*446*/])->f_26 = iParam4;
	(Global_1914319->f_3[iParam0 /*446*/])->f_28 = iParam5;
	(Global_1914319->f_3[iParam0 /*446*/])->f_29 = iParam9;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = iParam3;
	(Global_1914319->f_3[iParam0 /*446*/])->f_409 = iParam8;
	if (func_599(iVar0) || func_600(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			case 61:
				iVar7 = 922959422;
				break;
			case 73:
				iVar7 = 646741747;
				break;
			case 43:
				iVar7 = -1159824322;
				break;
			case 41:
				iVar7 = 327042733;
				break;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_20 = func_601(5, (Global_1914319->f_3[iParam0 /*446*/])->f_10, 2, iVar7);
	}
	*(Global_1393529->f_114[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_602(iParam0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_19 = fParam7;
	(Global_1914319->f_3[iParam0 /*446*/])->f_8 = iParam6;
	if (!func_603(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_604(iParam3);
			break;
		case 10:
			func_605(iParam3);
			break;
		case 18:
			func_606();
			break;
		case 9:
			func_607();
			break;
		case 22:
			func_608();
			break;
	}
	func_609((Global_1914319->f_3[iParam0 /*446*/])->f_10);
	func_610(iParam0, 16);
	func_611(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_241(int iParam0)
{
	return func_612(iParam0, 32);
}

void func_242(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_613(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_614(iParam0, 4))
		{
			func_615(iParam0, 4);
		}
	}
	else
	{
		func_616(iParam0, 4);
	}
	func_617(iParam0);
}

void func_243(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_618((*uParam0)[iVar0 /*257*/]);
		func_619((*uParam0)[iVar0 /*257*/]);
		func_620((*uParam0)[iVar0 /*257*/]);
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*257*/])->f_254), 0);
		iVar0++;
	}
}

void func_244(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_621(iParam0, iParam1))
	{
		if (uParam2->f_255 != 0)
		{
			func_618(uParam2);
			func_619(uParam2);
			func_620(uParam2);
		}
		return;
	}
	iVar0 = func_622(iParam1);
	if (*uParam2 != iParam1 || uParam2->f_1 != iVar0)
	{
		func_618(uParam2);
		func_619(uParam2);
		func_620(uParam2);
		*uParam2 = iParam1;
		uParam2->f_1 = iVar0;
		MISC::SET_BIT(&(uParam2->f_254), 0);
	}
	if (uParam2->f_256 != &Global_40.f_4283.f_415[iParam1])
	{
		MISC::SET_BIT(&(uParam2->f_254), 0);
		MISC::CLEAR_BIT(&(uParam2->f_254), 4);
		uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
	}
	if (MISC::IS_BIT_SET(uParam2->f_254, 0))
	{
		if (!MISC::IS_BIT_SET(uParam2->f_254, 1))
		{
			func_623(iParam1, uParam2);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 2))
		{
			if (func_624(uParam2))
			{
				func_625(iParam0, iParam1, iVar0, uParam2);
			}
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 3))
		{
			func_626(uParam2, Global_40.f_4283.f_415[iParam1]);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 4))
		{
			func_627(uParam2, Global_40.f_4283.f_415[iParam1], iParam3);
		}
		else
		{
			func_619(uParam2);
			func_620(uParam2);
			MISC::CLEAR_BIT(&(uParam2->f_254), 0);
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam2->f_253)
	{
		if (!MISC::IS_BIT_SET(uParam2->f_255, iVar1) || MISC::IS_BIT_SET(&(Global_40.f_4283.f_415[iParam1]), iVar1))
		{
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_249(5000);
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_249(5000);
			}
		}
		iVar1++;
	}
	uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
}

float func_245(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (*uParam0 == 4)
	{
		return 0f;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_253)
	{
		if ((uParam0->f_9[iVar2 /*9*/])->f_8 != 0 && !func_628((uParam0->f_9[iVar2 /*9*/])->f_8))
		{
			iVar1++;
		}
		else if (!MISC::IS_BIT_SET(&(Global_40.f_4283.f_415[*uParam0]), iVar2))
		{
			iVar0++;
		}
		iVar2++;
	}
	fVar3 = (BUILTIN::TO_FLOAT(iVar0) / IntToFloat((uParam0->f_253 - iVar1)));
	return (fVar3 * 100f);
}

float func_246()
{
	int iVar0;

	iVar0 = func_629();
	return func_631((IntToFloat(iVar0) * func_630()), 100f);
}

float func_247(float fParam0, float fParam1)
{
	return ((fParam0 / 2f) + (fParam1 / 2f));
}

int func_248()
{
	if (func_336(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_249(int iParam0)
{
	Global_1357549->f_1892 = (MISC::GET_GAME_TIMER() + iParam0);
}

bool func_250(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_210(iParam0))
	{
		return false;
	}
	iVar0 = func_578(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_251()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_632())
	{
		return 0;
	}
	if (func_233(180573150, 1))
	{
		return 0;
	}
	if (func_233(-404697685, 1))
	{
		return 0;
	}
	return 1;
}

void func_252()
{
	HUD::_0x4CC5F2FC1332577F(1670279562);
}

void func_253()
{
	HUD::_0x8BC7C1F929D07BF3(1670279562);
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_414((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_633((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_634((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_635((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_610(iParam0, 536870912);
	iVar1 = func_636(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_637(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_638(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_639(iParam0, 0);
}

bool func_255(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_256()
{
	return func_135(&Global_1935630, 4096);
}

bool func_257(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_258(int iParam0)
{
	if (!func_379(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_640(iParam0));
}

bool func_259(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_260()
{
	return Global_1897952->f_41;
}

void func_261(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;

	if (!func_641())
	{
		return;
	}
	sVar1 = func_642(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_643(iParam4))
	{
		if (func_379(iParam0))
		{
			iParam4 = func_644(func_382(iParam0));
		}
		else
		{
			iParam4 = func_644(iParam1);
		}
	}
	if (func_643(iParam4))
	{
		iVar3 = func_645(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_647(func_646(iParam2));
	}
	else if ((func_648(iParam1, 2) || func_649(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_379(iParam0) && func_650(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_651(func_568());
		iVar5 = func_652(func_568());
		if (iVar5 < 10)
		{
			StringConCat(&sVar6, "0", 8);
		}
		StringIntConCat(&sVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_653(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_566(&sVar6, 109029619), sVar9, func_566(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_653(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_566(&sVar6, 109029619), func_566(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_567(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_262(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_263(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_56() == 0)
	{
		return;
	}
	if (func_654(128))
	{
		return;
	}
	if (!func_655(iParam0))
	{
		return;
	}
	if (func_650(iParam0, 32))
	{
		return;
	}
	func_421(iParam0, 32);
	func_656(Global_1935630, 8192);
	func_658(func_657(-1532769513, -36357794), 1);
	switch (func_382(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_658(func_657(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_658(func_657(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_658(func_657(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_658(func_657(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_658(func_657(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_658(func_657(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::MAP_DISCOVER_REGION(1822876181);
			break;
		case 1:
			MAP::MAP_DISCOVER_REGION(1092217275);
			break;
		case 2:
			MAP::MAP_DISCOVER_REGION(1855549007);
			MAP::MAP_DISCOVER_REGION(1542246539);
			break;
		case 6:
			MAP::MAP_DISCOVER_REGION(-237206861);
			break;
		case 7:
			MAP::MAP_DISCOVER_REGION(276890716);
			break;
		case 9:
			MAP::MAP_DISCOVER_REGION(-353968602);
			break;
		case 10:
			MAP::MAP_DISCOVER_REGION(-1354901649);
			MAP::MAP_DISCOVER_REGION(-1354901649);
			break;
		case 11:
			MAP::MAP_DISCOVER_REGION(-496244122);
			break;
		case 12:
			MAP::MAP_DISCOVER_REGION(-678676588);
			break;
		case 15:
			MAP::MAP_DISCOVER_REGION(-732274047);
			break;
		case 16:
			MAP::MAP_DISCOVER_REGION(-12216052);
			break;
		case 17:
			MAP::MAP_DISCOVER_REGION(-1456731677);
			break;
		case 21:
			MAP::MAP_DISCOVER_REGION(-2086563810);
			break;
		case 22:
			MAP::MAP_DISCOVER_REGION(221661572);
			break;
		case 24:
			MAP::MAP_DISCOVER_REGION(222265732);
			break;
		case 25:
			MAP::MAP_DISCOVER_REGION(-1484929764);
			break;
		case 26:
			MAP::MAP_DISCOVER_REGION(1104975149);
			break;
		case 27:
			MAP::MAP_DISCOVER_REGION(235472255);
			break;
		case 28:
			MAP::MAP_DISCOVER_REGION(-1337880478);
			break;
		case 29:
			MAP::MAP_DISCOVER_REGION(-1813267128);
			break;
		case 30:
			MAP::MAP_DISCOVER_REGION(-1941572412);
			break;
		case 31:
			MAP::MAP_DISCOVER_REGION(1006072805);
			break;
		case 121:
			MAP::MAP_DISCOVER_REGION(929640770);
			break;
		case 122:
			MAP::MAP_DISCOVER_REGION(1603579970);
			break;
		case 124:
			MAP::MAP_DISCOVER_REGION(-1332669948);
			break;
		case 123:
			MAP::MAP_DISCOVER_REGION(-1807212021);
			break;
		case 34:
			MAP::MAP_DISCOVER_REGION(-1347759053);
			break;
		case 36:
			MAP::MAP_DISCOVER_REGION(-918096609);
			break;
		case 114:
			MAP::MAP_DISCOVER_REGION(1728445882);
			break;
		case 37:
			MAP::MAP_DISCOVER_REGION(-507075109);
			break;
		case 40:
			MAP::MAP_DISCOVER_REGION(462373845);
			break;
		case 42:
			MAP::MAP_DISCOVER_REGION(-1727895786);
			break;
		case 43:
			MAP::MAP_DISCOVER_REGION(1826504111);
			break;
		case 44:
			MAP::MAP_DISCOVER_REGION(1714554710);
			break;
		case 45:
			MAP::MAP_DISCOVER_REGION(-91026072);
			break;
		case 54:
			MAP::MAP_DISCOVER_REGION(893855320);
			break;
		case 55:
			MAP::MAP_DISCOVER_REGION(326709244);
			break;
		case 49:
			MAP::MAP_DISCOVER_REGION(653799702);
			break;
		case 62:
			MAP::MAP_DISCOVER_REGION(415864829);
			break;
		case 64:
			MAP::MAP_DISCOVER_REGION(-1836330842);
			break;
		case 65:
			MAP::MAP_DISCOVER_REGION(648073069);
			break;
		case 66:
			MAP::MAP_DISCOVER_REGION(770074951);
			break;
		case 68:
			MAP::MAP_DISCOVER_REGION(-1276637644);
			break;
		case 71:
			MAP::MAP_DISCOVER_REGION(-431488293);
			break;
		case 72:
			MAP::MAP_DISCOVER_REGION(-1101810198);
			break;
		case 74:
			MAP::MAP_DISCOVER_REGION(-1344767066);
			break;
		case 77:
			MAP::MAP_DISCOVER_REGION(1472232821);
			break;
		case 79:
			MAP::MAP_DISCOVER_REGION(-1368676121);
			break;
		case 63:
			MAP::MAP_DISCOVER_REGION(-33677540);
			break;
		case 80:
			MAP::MAP_DISCOVER_REGION(1602161184);
			MAP::MAP_DISCOVER_REGION(-443207523);
			MAP::MAP_DISCOVER_REGION(-683043834);
			break;
		case 82:
			MAP::MAP_DISCOVER_REGION(147256338);
			MAP::MAP_DISCOVER_REGION(-134804027);
			MAP::MAP_DISCOVER_REGION(2027689141);
			break;
		case 83:
			MAP::MAP_DISCOVER_REGION(-161135375);
			break;
		case 85:
			MAP::MAP_DISCOVER_REGION(1625008147);
			break;
		case 86:
			MAP::MAP_DISCOVER_REGION(121074776);
			break;
		case 87:
			MAP::MAP_DISCOVER_REGION(1876184276);
			break;
		case 89:
			MAP::MAP_DISCOVER_REGION(458479023);
			break;
		case 91:
			MAP::MAP_DISCOVER_REGION(85299473);
			break;
		case 96:
			MAP::MAP_DISCOVER_REGION(-1150244084);
			break;
		case 98:
			MAP::MAP_DISCOVER_REGION(759314201);
			break;
		case 99:
			MAP::MAP_DISCOVER_REGION(2063457042);
			break;
		case 100:
			MAP::MAP_DISCOVER_REGION(1877776161);
			break;
		case 102:
			MAP::MAP_DISCOVER_REGION(2143316225);
			break;
		case 104:
			MAP::MAP_DISCOVER_REGION(-1623232489);
			MAP::MAP_DISCOVER_REGION(-1393093729);
			break;
		case 106:
			MAP::MAP_DISCOVER_REGION(1354284392);
			break;
		case 107:
			MAP::MAP_DISCOVER_REGION(-1430883057);
			break;
		case 109:
			MAP::MAP_DISCOVER_REGION(820139809);
			break;
		case 112:
			MAP::MAP_DISCOVER_REGION(1561007383);
			MAP::MAP_DISCOVER_REGION(-960425936);
			break;
	}
	if (bParam1)
	{
		func_421(iParam0, 64);
	}
}

bool func_264()
{
	return (Global_1894899 & 1 != 0 && func_136() != -1);
}

void func_265()
{
	if (!func_659(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_660(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_266(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_661() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_659(iVar1) && !func_662(iVar1, iParam2)) && (!bParam3 || !func_663(iVar1))) && (!bParam4 || !func_664(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_665(iVar0);
			}
		}
		iVar0++;
	}
}

void func_267(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_268()
{
	return Global_40.f_4283.f_1;
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

void func_270(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar1 = func_666(16);
	bVar2 = iVar1 == *iParam2;
	bVar3 = true;
	if (!bVar2)
	{
		*uParam1 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(((*uParam0)[iVar0 /*4*/])->f_1))
			{
				if (iVar1 >= ((*uParam0)[iVar0 /*4*/])->f_3)
				{
					if (bParam3)
					{
						if (func_667(uParam0[iVar0 /*4*/]))
						{
							iVar4++;
							iVar5 = 1;
						}
					}
					if ((bParam3 && iVar5) && iVar4 <= 2)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*4*/])->f_2))
						{
							((*uParam0)[iVar0 /*4*/])->f_2 = _NAMESPACE48::_0x08FC896D2CB31FCC(((*uParam0)[iVar0 /*4*/])->f_1, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*4*/])->f_2))
							{
								bVar3 = false;
							}
						}
					}
					else
					{
						_NAMESPACE48::_0x4F81EAD1DE8FA19B(((*uParam0)[iVar0 /*4*/])->f_1);
					}
				}
				else
				{
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*uParam0)[iVar0 /*4*/])->f_1);
				}
			}
			iVar0++;
		}
	}
	if (!*uParam1)
	{
		*uParam1 = 1;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*4*/])->f_2))
			{
				if (!DECORATOR::DECOR_EXIST_ON(((*uParam0)[iVar0 /*4*/])->f_2, "CaravanLivestock"))
				{
					DECORATOR::DECOR_SET_BOOL(((*uParam0)[iVar0 /*4*/])->f_2, "CaravanLivestock", true);
				}
			}
			else if (iVar1 >= ((*uParam0)[iVar0 /*4*/])->f_3 && ((*uParam0)[iVar0 /*4*/])->f_1 != 0)
			{
				((*uParam0)[iVar0 /*4*/])->f_2 = _NAMESPACE48::GET_PERSCHAR_PED_INDEX(((*uParam0)[iVar0 /*4*/])->f_1);
				*uParam1 = 0;
			}
			iVar0++;
		}
	}
	if (!bVar3)
	{
		return;
	}
	if (!bVar2)
	{
		*iParam2 = iVar1;
	}
}

void func_271(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	bool bVar9;
	bool bVar10;

	if (uParam0->f_1581 != 15 && func_668())
	{
		uParam0->f_1581 = 15;
	}
	if (!func_669(uParam0))
	{
		if (!func_212(uParam0->f_1603) && !CAM::IS_SPHERE_VISIBLE(uParam0->f_1603, 2f))
		{
			func_400(uParam0->f_1603, 5f, 2);
			uParam0->f_1603 = { 0f, 0f, 0f };
		}
		if (!func_670(uParam0->f_1598, 262144) && func_671(14))
		{
			func_400(-107.8019f, -36.5988f, 94.9012f, 5f, 0);
			func_672(&(uParam0->f_1598), 262144);
		}
		if (uParam0->f_1581 > 1 && uParam0->f_1581 < 11)
		{
			if (((*uParam1)[uParam0->f_1645 /*8*/])->f_2 == 2)
			{
				func_673(uParam0, (*uParam1)[uParam0->f_1645 /*8*/]);
				if (!uParam0->f_1617)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", false);
				}
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", false);
			uParam0->f_1581 = -1;
			func_674(uParam1);
			if (func_210(uParam0->f_1611))
			{
				func_675(func_578(uParam0->f_1611), 0);
			}
			if (func_38(4))
			{
				func_674(uParam1);
				func_211(&(uParam0->f_1610), 1, 1);
				uParam0->f_1581 = -1;
				func_676(uParam0, uParam1, 1, 1, 0);
			}
		}
	}
	else if (uParam0->f_1581 == -1)
	{
		func_677(&(uParam0->f_1598), 262144);
		func_673(uParam0, (*uParam1)[uParam0->f_1645 /*8*/]);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		func_678(uParam1);
		func_679(uParam0, uParam1);
	}
	if (func_38(4) && (uParam0->f_1581 != 11 || uParam0->f_1581 != -1))
	{
		if (PED::IS_PED_SWIMMING(Global_35) || PED::_0x59643424B68D52B5(Global_35))
		{
			if (func_210(uParam0->f_1610))
			{
				func_211(&(uParam0->f_1610), 1, 1);
			}
			if (func_210(uParam0->f_1610))
			{
				func_310(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			func_676(uParam0, uParam1, 0, 1, 1);
		}
	}
	if (func_336(Global_35, 0) && func_680(uParam0))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1616) && !CAM::IS_SPHERE_VISIBLE(TASK::_0xA8452DD321607029(uParam0->f_1616, 1), 1.5f))
	{
		TASK::DELETE_SCENARIO_POINT(uParam0->f_1616);
	}
	if (func_670(uParam0->f_1598, 32))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 288, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 202, true);
		PAD::_0x2804658EB7D8A50B(6, 855606917);
		if (uParam0->f_1590.f_1 == 14)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 316, true);
		}
	}
	if (!func_680(uParam0) && func_210(uParam0->f_1610))
	{
		func_211(&(uParam0->f_1610), 1, 1);
	}
	if ((uParam0->f_1625 && func_682(Global_36, func_681()) > 25f) && !CAM::IS_SPHERE_VISIBLE(func_681(), 1.5f))
	{
		vVar1 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1626, func_683(iVar0)))
			{
				vVar1 = { func_684(iVar0) };
			}
			else
			{
				iVar0++;
			}
		}
		if (!func_212(vVar1))
		{
			if (uParam0->f_1624 == 5)
			{
				uParam0->f_1619[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_milkcan01x"), vVar1, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar0]), Global_36602, 0, vVar1, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
			}
			else if (uParam0->f_1624 == 6)
			{
				uParam0->f_1619[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_crate03x"), vVar1, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar0]), Global_36602, 0, vVar1, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
			}
			MISC::SET_BIT(&(uParam0->f_1626), func_683(iVar0));
			TASK::_0x4161648394262FDF(func_681(), 1f);
			uParam0->f_1625 = 0;
		}
	}
	if (func_670(uParam0->f_1598, 524288))
	{
		vVar5 = { 0f, 0f, 0f };
		if (uParam0->f_1630.f_2 > 2)
		{
			iVar8 = 2;
		}
		else
		{
			iVar8 = uParam0->f_1630.f_2;
		}
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			vVar5 = { 0f, 0f, 0f };
			if (!MISC::IS_BIT_SET(uParam0->f_1626, func_683(iVar4)))
			{
				vVar5 = { func_684(iVar4) };
				if (!func_212(vVar5))
				{
					uParam0->f_1619[iVar4] = OBJECT::CREATE_OBJECT(joaat("p_milkcan01x"), vVar5, true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar4]), Global_36602, 0, vVar5, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
					MISC::SET_BIT(&(uParam0->f_1626), func_683(iVar4));
				}
			}
			iVar4++;
		}
		if (uParam0->f_1630.f_3 > 2)
		{
			iVar8 = 4;
		}
		else
		{
			iVar8 = (iVar8 + uParam0->f_1630.f_3);
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			vVar5 = { 0f, 0f, 0f };
			if (!MISC::IS_BIT_SET(uParam0->f_1626, func_683(iVar4)))
			{
				vVar5 = { func_684(iVar4) };
				if (!func_212(vVar5))
				{
					uParam0->f_1619[iVar4] = OBJECT::CREATE_OBJECT(joaat("p_crate03x"), vVar5, true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar4]), Global_36602, 0, vVar5, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
					MISC::SET_BIT(&(uParam0->f_1626), func_683(iVar4));
				}
			}
			iVar4++;
		}
		func_677(&(uParam0->f_1598), 524288);
	}
	switch (uParam0->f_1581)
	{
		case 0:
			func_685(uParam0, uParam1);
			break;
		case 1:
			if (func_686(uParam0))
			{
				func_687(uParam0, uParam1);
			}
			break;
		case 2:
			func_688(uParam0, uParam1);
			break;
		case 3:
			func_689(uParam0, uParam1);
			break;
		case 8:
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			func_690(uParam0, uParam1);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			PAD::_0x2804658EB7D8A50B(6, 855606917);
			if (uParam0->f_1590.f_1 == 14)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 316, true);
			}
			if (func_336(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			bVar9 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
			if ((!func_210(uParam0->f_1610) && !bVar9) && uParam0->f_1582.f_2 != 5)
			{
				uParam0->f_1610 = func_691("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_675(func_578(uParam0->f_1610), 0);
			}
			if (bVar9 && func_250(uParam0->f_1610, 1))
			{
				func_675(func_578(uParam0->f_1610), 0);
				PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
			}
			else if (!bVar9 && !func_250(uParam0->f_1610, 1))
			{
				func_675(func_578(uParam0->f_1610), 1);
			}
			else if (!func_250(uParam0->f_1610, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
			}
			if (func_149() == 8)
			{
				if (!func_206(297))
				{
					func_692(297);
				}
			}
			else if (!func_206(296))
			{
				func_692(296);
			}
			func_693(uParam0, uParam1);
			break;
		case 4:
			func_690(uParam0, uParam1);
			func_694(uParam0, uParam1);
			func_693(uParam0, uParam1);
			break;
		case 9:
			func_690(uParam0, uParam1);
			CAM::_0x71D71E08A7ED5BD7(1);
			if (func_695())
			{
				uParam0->f_1581 = 5;
			}
			break;
		case 5:
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			if (uParam0->f_1590.f_1 == 14)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 316, true);
			}
			PAD::_0x2804658EB7D8A50B(6, 855606917);
			bVar10 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
			if (uParam0->f_1582.f_1 != 7)
			{
				if ((!func_210(uParam0->f_1610) && !bVar10) && uParam0->f_1582.f_2 != 5)
				{
					uParam0->f_1610 = func_691("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_675(func_578(uParam0->f_1610), 0);
				}
				if (bVar9 && func_250(uParam0->f_1610, 1))
				{
					func_675(func_578(uParam0->f_1610), 0);
					PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
				}
				else if (!bVar10 && !func_250(uParam0->f_1610, 1))
				{
					func_675(func_578(uParam0->f_1610), 1);
				}
				else if (!func_250(uParam0->f_1610, 1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
				}
			}
			func_690(uParam0, uParam1);
			if (func_336(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			func_696(uParam0, uParam1);
			func_693(uParam0, uParam1);
			break;
		case 6:
			if (func_697(uParam0, uParam1))
			{
				uParam0->f_1581 = 8;
			}
			break;
		case 13:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				uParam0->f_1581 = 14;
			}
			break;
		case 14:
			func_698(uParam0, uParam1, 2);
			break;
		case -1:
			break;
		case 10:
			func_699(uParam0, uParam1);
			break;
		case 11:
			func_676(uParam0, uParam1, 0, 1, 0);
			break;
		case 12:
			func_700(uParam0, uParam1);
			break;
		case 15:
			if (!func_668())
			{
				uParam0->f_1581 = 0;
			}
			break;
	}
}

void func_272(var uParam0, var uParam1)
{
	if (func_151(75) && !ENTITY::DOES_ENTITY_EXIST(Global_36602))
	{
		Global_36602 = VEHICLE::CREATE_VEHICLE(joaat("chuckwagon002x"), -1618.703f, -1386.282f, 81.9044f, -35f, false, true, true, false);
		PROPSET::_CREATE_PROPSET_3(1044628870, 0f, 0f, 0f, Global_36602, 0f, true, 1, false);
	}
	if ((((func_670(uParam0->f_1598, 2048) && !func_210(iLocal_3660)) && !func_670(uParam0->f_1598, 4096)) && !func_701(262144)) && !func_702(18, 6))
	{
		iLocal_3660 = func_703("CHORE_SELL_PRODUCT", -719620017, func_681(), 10f, 2, 1, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	if (func_702(18, 6) && func_210(iLocal_3660))
	{
		func_211(&iLocal_3660, 1, 1);
	}
	if (func_218(iLocal_3660, 1))
	{
		uParam0->f_1613 = 0;
		func_699(uParam0, &Local_3515);
		func_211(&iLocal_3660, 1, 1);
	}
}

void func_273(var uParam0)
{
	func_704(uParam0);
}

int func_274(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	if (func_705(Global_35, vParam3, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(*uParam2))
	{
		*uParam2 = TASK::_0xF533D68FF970D190(vParam3, iParam8, 1f, 0, 0);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::GET_PROP_FOR_SCENARIO_POINT(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_0xDB1BD07FB464584D(iParam6, 0);
		return 0;
	}
	else
	{
		if (!TXD::_0xBE72591D1509FFE4(iParam6))
		{
			TXD::_0xDB1BD07FB464584D(iParam6, 0);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_0xE124889AE0521FCF(*uParam1, iParam6, 0, 0);
				TXD::_0x8232F37DF762ACB2(iParam6);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_275()
{
	if (func_706(109))
	{
		if (iLocal_3732)
		{
			switch (iLocal_3737)
			{
				case 0:
					func_707();
					break;
				case 1:
					func_708();
					break;
				case 2:
					func_709();
					break;
				case 4:
					func_710();
					break;
				default:
					break;
			}
		}
		else
		{
			iLocal_3737 = 0;
			func_711();
			iLocal_3732 = 1;
		}
	}
}

void func_276()
{
	if (func_701(32768))
	{
		return;
	}
	if (func_167())
	{
		return;
	}
	if (!func_176(13, 1, 1))
	{
		return;
	}
	if (AUDIO::_0x6BFFB7C276866996(Global_35) == -1767995510)
	{
		if (!func_174(&uLocal_3818))
		{
			func_181(&uLocal_3818, 0);
		}
		if (func_175(&uLocal_3818) > 8f && func_712(13) > 144f)
		{
			bLocal_3817 = true;
		}
	}
	if (bLocal_3817)
	{
		if (func_179(func_178(13), "GREET_ABIGAIL_POSTCLOSER_POSTTAXIDERMY2_CONV1", -1454469014, 0, 1, 0, 0, 1))
		{
			func_75(32768);
		}
	}
}

void func_277()
{
	int iVar0;

	if (!iLocal_3826)
	{
		if (func_151(73) && !func_151(68))
		{
			iVar0 = TASK::_0xF533D68FF970D190(-1673.618f, -1338.303f, 83.20375f, -1525360788, 1f, 0, 0);
			if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
			{
				TASK::_0xEEE4829304F93EEE(iVar0, 0);
				iLocal_3826 = 1;
			}
		}
	}
}

bool func_278()
{
	return Global_1357549->f_1616;
}

void func_279(var uParam0)
{
	uParam0->f_1424 = 0;
}

void func_280(int iParam0, bool bParam1)
{
	Global_1357549->f_1616 = iParam0;
	if (bParam1)
	{
	}
}

void func_281()
{
	if (func_149() != 2 && func_149() != 1)
	{
		return;
	}
}

void func_282(var uParam0)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		if (func_233(-666548248, 1) == 0)
		{
			bVar0 = true;
			func_387(-666548248, 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		func_713(-666548248, 1, 0);
	}
	if (bVar0)
	{
		if (func_210(uParam0->f_1))
		{
			func_714(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549->f_1672 == 0)
	{
		if (func_715(-774242862, 0, 0) >= 1)
		{
			func_716(-774242862, joaat("p_moneystack01x"));
			return;
		}
		if (func_715(-2100684454, 0, 0) >= 1)
		{
			func_716(-2100684454, joaat("p_moneystack01x"));
			return;
		}
		if (func_715(-1167047117, 0, 0) >= 1)
		{
			func_716(-1167047117, joaat("p_moneystack01x"));
			return;
		}
		if (func_715(396444962, 0, 0) >= 1)
		{
			func_716(396444962, joaat("p_moneystack01x"));
			return;
		}
		if (func_715(-498064062, 0, 0) >= 1)
		{
			func_716(-498064062, joaat("p_moneystack01x"));
			return;
		}
		if (func_715(513694516, 0, 0) >= 1)
		{
			func_716(513694516, joaat("p_moneystack01x"));
			return;
		}
	}
}

void func_283(int* iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;

	vVar0 = { func_717(func_286()) };
	fVar3 = 5f;
	if (func_212(vVar0))
	{
		return;
	}
	if ((func_718(26) == 0 || func_167()) && !func_12(8))
	{
		func_719(iParam0);
		return;
	}
	if (func_233(-1461741225, 1))
	{
		func_719(iParam0);
		return;
	}
	if (func_32() != 1)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && !func_248())
	{
		if (!func_12(8))
		{
			*iParam0 = MAP::_0x554D9D53F696D002(168093330, vVar0);
			MAP::_0x662D364ABF16DE2F(*iParam0, 1046501997);
			MAP::SET_BLIP_SPRITE(*iParam0, -1954662204, true);
			MAP::SET_BLIP_FLASH_TIMER(*iParam0, 66, -1);
			func_720(*iParam0, func_268());
		}
	}
	func_721(iParam0, uParam1);
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_863))
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 15) == 0)
		{
			iParam0->f_863 = TASK::_0xF533D68FF970D190(vVar0, 1855656219, fVar3, 1, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
	{
		STREAMING::REQUEST_MODEL(joaat("p_moneystack01x"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("p_moneystack01x")))
		{
			iParam0->f_866 = TASK::_0x7467165EE97D3C68(iParam0->f_863);
			func_722(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_866, true);
			}
		}
		return;
	}
	if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) || func_12(67108864))
	{
		return;
	}
	if (iParam0->f_856 == 0)
	{
		if (func_12(8192) == 0)
		{
			if (!func_210(iParam0->f_1))
			{
				if (Global_1357549->f_1672 == 0)
				{
					iParam0->f_1 = func_703("GIVE_TITHE", -719620017, func_723(func_286()), func_724(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_216(iParam0->f_1, 736625733, 0, 1);
				}
				else if (func_725())
				{
					iParam0->f_1 = func_703("ITEM_TITHE", -719620017, func_723(func_286()), func_724(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_714(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					func_216(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = func_703("ITEM_TITHE", -719620017, func_723(func_286()), func_724(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_727(iParam0->f_1, "ITEM_TITHE", func_726(Global_1357549->f_1672), 1);
					func_216(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (func_232(Global_35, func_723(func_286()), 1) <= (func_724() + 0.25f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 736625733, func_728(), 0);
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bVar4 = false;
		if ((((func_729() || func_730()) || PED::_0xA911EE21EDF69DAF(Global_35)) || func_479(Global_35)) || func_731())
		{
			bVar4 = true;
		}
		if (func_210(iParam0->f_1))
		{
			func_307(iParam0->f_1, bVar4);
		}
		if (func_210(iParam0->f_6))
		{
			func_307(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (func_210(iParam0->f_855) == 0)
		{
			iParam0->f_855 = func_691("BACK_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (func_223(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			func_211(&(iParam0->f_855), 1, 1);
			func_211(&(iParam0->f_883), 1, 1);
			func_211(&(iParam0->f_884), 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			iParam0->f_856 = 0;
		}
	}
	if (func_732(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_210(iParam0->f_1))
		{
			func_733(iParam0->f_1, 0, 1);
		}
		if (func_210(iParam0->f_6))
		{
			func_733(iParam0->f_6, 0, 1);
		}
		if (func_174(&(iParam0->f_870)) == 0)
		{
			func_181(&(iParam0->f_870), 0);
		}
		if (((func_734(Global_35, 1, 0, 0) == joaat("weapon_unarmed") && func_734(Global_35, 0, 1, 0) == joaat("weapon_unarmed")) && func_735() == 0) && PED::_0xA911EE21EDF69DAF(Global_35) == 0)
		{
			if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) == 0)
			{
				if (func_175(&(iParam0->f_870)) > 0f)
				{
					func_148(8192);
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					AUDIO::PLAY_SOUND_FRONTEND("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					func_736(iParam0);
					iParam0->f_2 = 0;
					func_75(128);
					func_719(iParam0);
				}
			}
		}
		else
		{
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
			func_562(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_284(int* iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_212(func_737(func_286())) == 0)
	{
		if (func_232(Global_35, func_737(func_286()), 1) < 20f && !func_150())
		{
			if (iParam0->f_4 == 1)
			{
				iParam0->f_4 = 0;
				if (func_206(256) == 0)
				{
					func_208(256, 0);
				}
				else if (func_206(257) == 0)
				{
					func_208(257, 0);
				}
			}
		}
	}
	switch (func_149())
	{
		case 1:
			iVar0 = 56;
			break;
		case 2:
			iVar0 = 57;
			break;
		case 6:
			iVar0 = 59;
			break;
		case 3:
			iVar0 = 58;
			break;
	}
	if (iVar0 != -1)
	{
		if (func_12(33554432))
		{
			if (!func_233(-692943180, 1))
			{
				func_387(-692943180, 195285667, 1120952528, 2, 1, 1, 0);
			}
		}
		else if (func_233(-692943180, 1))
		{
			func_713(-692943180, 1, 0);
		}
		if (func_738(iParam0))
		{
			if (func_612(iVar0, 16384))
			{
				func_739(iVar0, 16384);
			}
		}
		else if (func_612(iVar0, 16384) == 0)
		{
			func_740(iVar0, 16384);
		}
	}
}

void func_285(int* iParam0, var uParam1)
{
	if (func_32() == 1)
	{
		func_741(&(iParam0->f_14), ((*uParam1)[2 /*257*/])->f_255);
		func_741(&(iParam0->f_15), ((*uParam1)[0 /*257*/])->f_255);
		func_741(&(iParam0->f_13), ((*uParam1)[1 /*257*/])->f_255);
	}
	else
	{
		func_742(iParam0);
	}
}

int func_286()
{
	switch (func_56())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_288(int* iParam0)
{
	vector3 vVar0[24];

	if (Global_1357549->f_1671 == -1)
	{
		return;
	}
	switch (Global_1357549->f_1671)
	{
		case 0:
			StringCopy(&cVar0, "DONATE_M_SMALL", 24);
			break;
		case 1:
			StringCopy(&cVar0, "DONATE_M_MID", 24);
			break;
		case 2:
			StringCopy(&cVar0, "DONATE_M_BIG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "DONATE_FOOD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "DONATE_SUPP", 24);
			break;
		case 5:
			StringCopy(&cVar0, "DONATE_REMIND", 24);
			break;
		case 6:
			StringCopy(&cVar0, "DONATE_LOW", 24);
			break;
		case 7:
			StringCopy(&cVar0, "ASK_ABIGAIL", 24);
			func_743(&(iParam0->f_1325), func_178(13), "ABIGAIL", 0);
			break;
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			func_743(&(iParam0->f_1325), func_178(13), "ABIGAIL", 0);
			break;
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			func_743(&(iParam0->f_1325), func_178(14), "JACK", 0);
			break;
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			func_743(&(iParam0->f_1325), func_178(14), "JACK", 0);
			break;
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			func_743(&(iParam0->f_1325), func_178(14), "JACK", 0);
			break;
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			func_743(&(iParam0->f_1325), func_178(14), "JACK", 0);
			break;
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			func_743(&(iParam0->f_1325), func_178(7), "CHARLES_SMITH", 0);
			break;
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			func_743(&(iParam0->f_1325), func_178(19), "SUSAN", 0);
			break;
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			func_743(&(iParam0->f_1325), func_178(19), "SUSAN", 0);
			break;
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			func_743(&(iParam0->f_1325), func_178(19), "SUSAN", 0);
			break;
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			func_743(&(iParam0->f_1325), func_178(19), "SUSAN", 0);
			break;
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			func_743(&(iParam0->f_1325), func_178(19), "SUSAN", 0);
			break;
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			func_743(&(iParam0->f_1325), func_178(19), "SUSAN", 0);
			break;
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			func_743(&(iParam0->f_1325), func_178(21), "SWANSON", 0);
			break;
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			func_743(&(iParam0->f_1325), func_178(21), "SWANSON", 0);
			break;
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			func_743(&(iParam0->f_1325), func_178(21), "SWANSON", 0);
			break;
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			func_743(&(iParam0->f_1325), func_178(17), "PEARSON", 0);
			break;
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			func_743(&(iParam0->f_1325), func_178(17), "PEARSON", 0);
			break;
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			func_743(&(iParam0->f_1325), func_178(17), "PEARSON", 0);
			break;
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			func_743(&(iParam0->f_1325), func_178(17), "PEARSON", 0);
			break;
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			func_743(&(iParam0->f_1325), func_178(17), "PEARSON", 0);
			break;
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			func_743(&(iParam0->f_1325), func_178(17), "PEARSON", 0);
			break;
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			func_743(&(iParam0->f_1325), func_178(2), "JAVIER", 0);
			break;
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			func_743(&(iParam0->f_1325), func_178(2), "JAVIER", 0);
			break;
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			func_743(&(iParam0->f_1325), func_178(2), "JAVIER", 0);
			break;
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			func_743(&(iParam0->f_1325), func_178(3), "BILL", 0);
			break;
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			func_743(&(iParam0->f_1325), func_178(3), "BILL", 0);
			break;
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			func_743(&(iParam0->f_1325), func_178(3), "BILL", 0);
			break;
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			func_743(&(iParam0->f_1325), func_178(8), "SEAN", 0);
			break;
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			func_743(&(iParam0->f_1325), func_178(8), "SEAN", 0);
			break;
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			func_743(&(iParam0->f_1325), func_178(8), "SEAN", 0);
			break;
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			func_743(&(iParam0->f_1325), func_178(10), "KIERAN", 0);
			break;
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			func_743(&(iParam0->f_1325), func_178(10), "KIERAN", 0);
			break;
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			func_743(&(iParam0->f_1325), func_178(10), "KIERAN", 0);
			break;
		case 88:
			StringCopy(&cVar0, "ASK_TILLY", 24);
			func_743(&(iParam0->f_1325), func_178(22), "TILLY", 0);
			break;
		case 89:
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			func_743(&(iParam0->f_1325), func_178(22), "TILLY", 0);
			break;
		case 90:
			StringCopy(&cVar0, "THANK_TILLY", 24);
			func_743(&(iParam0->f_1325), func_178(22), "TILLY", 0);
			break;
		case 52:
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			func_743(&(iParam0->f_1325), func_178(9), "LENNY", 0);
			break;
		case 53:
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			func_743(&(iParam0->f_1325), func_178(9), "LENNY", 0);
			break;
		case 54:
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			func_743(&(iParam0->f_1325), func_178(9), "LENNY", 0);
			break;
		case 55:
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			func_743(&(iParam0->f_1325), func_178(9), "LENNY", 0);
			break;
		case 56:
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			func_743(&(iParam0->f_1325), func_178(9), "LENNY", 0);
			break;
		case 57:
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			func_743(&(iParam0->f_1325), func_178(9), "LENNY", 0);
			break;
		case 58:
			StringCopy(&cVar0, "ASK_MARY1", 24);
			func_743(&(iParam0->f_1325), func_178(15), "MARYBETH", 0);
			break;
		case 59:
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			func_743(&(iParam0->f_1325), func_178(15), "MARYBETH", 0);
			break;
		case 60:
			StringCopy(&cVar0, "THANK_MARY1", 24);
			func_743(&(iParam0->f_1325), func_178(15), "MARYBETH", 0);
			break;
		case 61:
			StringCopy(&cVar0, "ASK_MARY2", 24);
			func_743(&(iParam0->f_1325), func_178(15), "MARYBETH", 0);
			break;
		case 62:
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			func_743(&(iParam0->f_1325), func_178(15), "MARYBETH", 0);
			break;
		case 63:
			StringCopy(&cVar0, "THANK_MARY2", 24);
			func_743(&(iParam0->f_1325), func_178(15), "MARYBETH", 0);
			break;
		case 91:
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			func_743(&(iParam0->f_1325), func_178(4), "UNCLE", 0);
			break;
		case 92:
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			func_743(&(iParam0->f_1325), func_178(4), "UNCLE", 0);
			break;
		case 93:
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			func_743(&(iParam0->f_1325), func_178(4), "UNCLE", 0);
			break;
		case 94:
			StringCopy(&cVar0, "ASK_TRELW", 24);
			func_743(&(iParam0->f_1325), func_178(23), "TRELAWNY", 0);
			break;
		case 95:
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			func_743(&(iParam0->f_1325), func_178(23), "TRELAWNY", 0);
			break;
		case 96:
			StringCopy(&cVar0, "THANK_TRELW", 24);
			func_743(&(iParam0->f_1325), func_178(23), "TRELAWNY", 0);
			break;
		case 64:
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			func_743(&(iParam0->f_1325), func_178(5), "HOSEA", 0);
			break;
		case 65:
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			func_743(&(iParam0->f_1325), func_178(5), "HOSEA", 0);
			break;
		case 66:
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			func_743(&(iParam0->f_1325), func_178(5), "HOSEA", 0);
			break;
		case 67:
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			func_743(&(iParam0->f_1325), func_178(5), "HOSEA", 0);
			break;
		case 68:
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			func_743(&(iParam0->f_1325), func_178(5), "HOSEA", 0);
			break;
		case 69:
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			func_743(&(iParam0->f_1325), func_178(5), "HOSEA", 0);
			break;
		case 70:
			StringCopy(&cVar0, "ASK_KAREN", 24);
			func_743(&(iParam0->f_1325), func_178(20), "KAREN", 0);
			break;
		case 71:
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			func_743(&(iParam0->f_1325), func_178(20), "KAREN", 0);
			break;
		case 72:
			StringCopy(&cVar0, "THANK_KAREN", 24);
			func_743(&(iParam0->f_1325), func_178(20), "KAREN", 0);
			break;
		case 73:
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			func_743(&(iParam0->f_1325), func_178(0), "DUTCH", 0);
			break;
		case 74:
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			func_743(&(iParam0->f_1325), func_178(0), "DUTCH", 0);
			break;
		case 75:
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			func_743(&(iParam0->f_1325), func_178(0), "DUTCH", 0);
			break;
		case 76:
			StringCopy(&cVar0, "ASK_MICAH", 24);
			func_743(&(iParam0->f_1325), func_178(6), "MICAH_BELL", 0);
			break;
		case 77:
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			func_743(&(iParam0->f_1325), func_178(6), "MICAH_BELL", 0);
			break;
		case 78:
			StringCopy(&cVar0, "THANK_MICAH", 24);
			func_743(&(iParam0->f_1325), func_178(6), "MICAH_BELL", 0);
			break;
		case 79:
			StringCopy(&cVar0, "ASK_SADIE", 24);
			func_743(&(iParam0->f_1325), func_178(11), "SADIE_ADLER", 0);
			break;
		case 80:
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			func_743(&(iParam0->f_1325), func_178(11), "SADIE_ADLER", 0);
			break;
		case 81:
			StringCopy(&cVar0, "THANK_SADIE", 24);
			func_743(&(iParam0->f_1325), func_178(11), "SADIE_ADLER", 0);
			break;
		case 85:
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			func_743(&(iParam0->f_1325), func_178(16), "MOLLY", 0);
			break;
		case 86:
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			func_743(&(iParam0->f_1325), func_178(16), "MOLLY", 0);
			break;
		case 87:
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			func_743(&(iParam0->f_1325), func_178(16), "MOLLY", 0);
			break;
		case 97:
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			func_743(&(iParam0->f_1325), func_178(0), "DUTCH", 0);
			func_744(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549->f_1671 = -1;
			return;
	}
	Global_1357549->f_1671 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_744(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
	}
}

void func_289(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam0);
	POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam0);
}

void func_290(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_745(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_292(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	int iVar11;

	if (iParam2 < 0 || iParam2 > 4)
	{
		return;
	}
	iVar0 = func_746(iParam2, 1);
	iVar1 = func_746(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			func_747(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			func_747(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && VOLUME::DOES_VOLUME_EXIST(*iParam1))
	{
		fVar5 = func_748(iParam2);
		fVar6 = func_749((vParam9.x - fVar5), 0.1f);
		fVar7 = func_749((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam12, vParam3, vParam6, vVar8);
		VOLUME::_0x6E0D3C3F828DA773(*iParam1, iVar11);
	}
}

void func_293(var uParam0)
{
	if (func_210(uParam0->f_8))
	{
		func_211(&(uParam0->f_8), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
}

void func_294(var uParam0)
{
	int iVar0;

	if (func_210(uParam0->f_10))
	{
		func_211(&(uParam0->f_10), 1, 1);
	}
	if (func_210(uParam0->f_11))
	{
		func_211(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_210(&(uParam0->f_12[iVar0])))
		{
			func_211(uParam0->f_12[iVar0], 1, 1);
		}
		iVar0++;
	}
	if (func_210(uParam0->f_9))
	{
		func_211(&(uParam0->f_9), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 5);
}

void func_295(bool bParam0, var uParam1)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&(uParam1->f_1), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam1->f_1), 2);
	}
}

void func_296(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

void func_297(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

void func_298(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_750(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_299(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_300(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_301(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_302(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (!func_498(iParam0))
	{
		return;
	}
	if (func_212(vParam1))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_15 = { vParam1 };
	(Global_1395601->f_5[iParam0 /*28*/])->f_18 = uParam4;
	(Global_1395601->f_5[iParam0 /*28*/])->f_23 = iParam5;
	if (VOLUME::DOES_VOLUME_EXIST(iParam5))
	{
	}
	if (!func_134(242, 1, 1))
	{
		func_751(iParam0, 1);
	}
	func_752(iParam0);
	func_753(iParam0, 1);
	(Global_40.f_9384[iParam0 /*2*/])->f_1 = func_568();
}

int func_303(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_134(0, 0, 1))
	{
		return 0;
	}
	if (iParam0 == 7)
	{
		if (!func_151(60))
		{
			return 0;
		}
	}
	return 1;
}

void func_304(int iParam0, var uParam1)
{
	vector3 vVar0;

	func_296(uParam1);
	vVar0 = { func_754(iParam0) };
	uParam1->f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
	uParam1->f_6 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar0, 2f, 1, 36, 0);
	if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_4));
	}
	uParam1->f_4 = MAP::_0x554D9D53F696D002(1687768444, func_754(iParam0));
	MAP::_0x662D364ABF16DE2F(uParam1->f_4, 287169430);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "BLIP_CAMP_HITCH");
	MAP::SET_BLIP_FLASH_TIMER(uParam1->f_4, 68, -1);
	func_720(uParam1->f_4, func_268());
}

void func_305(var uParam0, int iParam1)
{
	if (iParam1 == *uParam0)
	{
		return;
	}
	*uParam0 = iParam1;
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
}

void func_306(var uParam0)
{
	uParam0->f_8 = func_214("BLIP_CAMP_HITCH", 1940454787, uParam0->f_5, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	MISC::SET_BIT(&(uParam0->f_1), 3);
}

void func_307(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_210(iParam0))
	{
		return;
	}
	iVar0 = func_578(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iVar0 /*18*/])->f_3, !bParam1);
}

void func_308(var uParam0)
{
	if (func_755())
	{
		uParam0->f_11 = func_756(uParam0);
		HUD::_UIPROMPT_SET_GROUP(func_757(uParam0->f_11), 1842627646, 0);
	}
	else if (func_758())
	{
		uParam0->f_10 = func_214("CAMP_HITCH_SADDLE", 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		HUD::_UIPROMPT_SET_GROUP(func_757(uParam0->f_10), 1842627646, 0);
	}
	if (func_759(2) == 2)
	{
		func_760(2, -1384133541, uParam0);
	}
	if (func_759(3) == 2)
	{
		func_760(3, 1710877787, uParam0);
	}
	if (func_759(4) == 2)
	{
		func_760(4, 1141111167, uParam0);
	}
	uParam0->f_9 = func_214("SHOP_EXIT", 992265328, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_757(uParam0->f_9), 1842627646, 0);
	MISC::SET_BIT(&(uParam0->f_1), 5);
}

int func_309(var uParam0)
{
	*uParam0 = -1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0;
	}
	if (func_758())
	{
		return 1;
	}
	if (func_759(2) == 2)
	{
		return 1;
	}
	if (func_759(3) == 2)
	{
		return 1;
	}
	if (func_759(4) == 2)
	{
		return 1;
	}
	if (func_755())
	{
		return 1;
	}
	else if (!func_761())
	{
		*uParam0 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_369(0)) && func_227(func_369(0)))
	{
		*uParam0 = 2;
	}
	else if (func_762(0) || (ENTITY::DOES_ENTITY_EXIST(func_369(0)) && ENTITY::IS_ENTITY_DEAD(func_369(0))))
	{
		*uParam0 = 1;
	}
	return 0;
}

void func_310(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_210(iParam0))
	{
		return;
	}
	iVar0 = func_578(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

var func_311(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_312(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	func_575(iParam0, &uVar0, &uVar1);
	func_763(&uVar0, &uVar1);
}

bool func_313()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		default:
			break;
	}
	return -1;
}

Vector3 func_315(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -108.5488f, -31.9591f, 94.9533f;
		case 2:
			return 703.402f, -1230.448f, 44.2554f;
		case 3:
			return 1848.78f, -1838.562f, 42.1948f;
		case 5:
			return 2277.974f, -753.376f, 41.0869f;
		case 6:
			return 2370.903f, 1339.88f, 105.1385f;
		case 7:
			return -2591.979f, 464.4913f, 145.3082f;
		case 8:
			if (!func_764())
			{
				return -1663.893f, -1331.753f, 82.9211f;
			}
			else
			{
				return -1642.401f, -1376.996f, 82.9705f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_316(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 302.5949f;
		case 2:
			return 25.2604f;
		case 3:
			return 296.4873f;
		case 5:
			return 318.2845f;
		case 6:
			return 350.6767f;
		case 7:
			return 320.8711f;
		case 8:
			if (!func_764())
			{
				return 102.5146f;
			}
			else
			{
				return 76.6876f;
			}
			break;
	}
	return 0f;
}

void func_317(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_765();
	func_766(0, iParam0);
	func_767(0, 1);
	if (bVar0)
	{
		func_767(iParam0, 2);
		if (func_768(iParam0))
		{
			func_769(iParam0);
		}
	}
	else
	{
		iVar1 = func_369(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			func_770(iVar1);
			PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, 1);
		}
		func_771(iParam0);
		func_772(iParam0);
		func_767(iParam0, 0);
	}
	if (func_773() == 0)
	{
		func_774(0);
		func_327(0);
	}
}

Vector3 func_318(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_775(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_775(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.529f, 44.1236f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_775(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_775(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.179f, -1838.022f, 42.1198f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_775(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_775(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.944f, -751.8282f, 40.9738f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_775(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_775(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.779f, 1341.602f, 105.1376f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_775(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_775(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_775(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_775(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_764())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				case 0:
					if (!func_764())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_775(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_775(iParam0), 0.75f, 0f, 0f);
					}
					break;
				case 1:
					if (!func_764())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_775(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_775(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_319(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_320(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	struct<11> Var17;

	if (!func_776())
	{
		return 1;
	}
	vVar0 = { func_318(iParam0, -1) };
	if (func_212(vVar0))
	{
		return 0;
	}
	iVar6 = func_369(0);
	iVar7 = func_369(1);
	bVar8 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (func_777(iVar7, vVar0, 2f, 1, 0))
		{
			bVar8 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && PED::IS_PED_READY_TO_RENDER(iVar6))
	{
		if (PED::_0xB676EFDA03DADA52(iVar6, 1) != 0 || PED::GET_MOUNT(Global_35) == iVar6)
		{
			return 1;
		}
		func_778();
		func_779();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, 0, 1);
		MISC::CLEAR_AREA(vVar0, 1f, 2442122);
		if (bVar8)
		{
			vVar3 = { func_318(iParam0, 1) };
		}
		else
		{
			vVar3 = { vVar0 };
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, func_775(iParam0));
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar6, vVar0, 0.25f, -1, 0, 0, 0, 0);
		iVar9 = TASK::_0xF533D68FF970D190(vVar0, -1805387726, 0.5f, 0, 0);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar9))
		{
			vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_780(2, 1)) };
			PHYSICS::_0x06AADE17334F7A40(iVar6, vVar10);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && bVar8)
		{
			vVar3 = { func_318(iParam0, 0) };
			ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar7, func_775(iParam0));
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar7, vVar0, 0.25f, -1, 0, 0, 0, 0);
			if (TASK::DOES_SCENARIO_POINT_EXIST(iVar9))
			{
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_780(2, 0)) };
				PHYSICS::_0x06AADE17334F7A40(iVar7, vVar13);
			}
		}
		uParam1->f_3 = iVar6;
		return 1;
	}
	Var17.f_10 = 7;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_3))
	{
		Var17.f_10 = 0;
		Var17.f_6 = { vVar0 };
		Var17.f_9 = 0f;
		Var17.f_1 = 0;
		Var17 = 1;
		Var17.f_2 = 1;
		iVar6 = func_781(&iVar16, &Var17);
		switch (iVar16)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iParam0 = func_782(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_768(iParam0))
	{
		return;
	}
	iVar0 = func_369(iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::IS_ENTITY_A_PED(iVar4))
		{
		}
		else
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (!PED::IS_PED_HUMAN(iVar5))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
			{
			}
			else
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar4);
			}
		}
		iVar3++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

void func_322()
{
	int iVar0;

	iVar0 = func_369(0);
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 136, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 136, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 312, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 312, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 113, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 113, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 367, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 367, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 72, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 72, false);
	}
	if (!PED::_0x2C76FA0E01681F8D(iVar0, 0))
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 0, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, false);
	}
	if (ENTITY::_0x083D497D57B7400F(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iVar0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	}
	if (!ENTITY::_0x75DF9E73F2F005FD(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
	}
}

int func_323(int iParam0)
{
	iParam0 = func_782(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_782(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_718(43))
		{
			return;
		}
	}
	iVar0 = func_783(iParam0);
	if (func_784(iVar0) || func_785(iVar0))
	{
		return;
	}
	iVar1 = func_323(iParam0);
	if (iVar1 >= func_786(iVar0))
	{
		return;
	}
	if (func_787(iParam0, iParam1))
	{
		return;
	}
	if (func_788(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_789(iParam0, iParam1);
	fVar3 = func_790(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_369(iParam0);
			if (func_791(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_792())
			{
				fVar3 = (fVar3 * 2f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 4:
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_793(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_794(iParam1, fVar3);
			break;
	}
	func_795(iParam0, fVar3);
	func_796(iParam0, iParam1, (fVar2 + fVar3));
}

int func_325()
{
	int iVar0;

	iVar0 = func_797();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_326()
{
	int iVar0;

	iVar0 = func_797();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_798(0);
}

void func_327(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

Vector3 func_328(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.3742f, -33.2291f, 94.9708f;
		case 2:
			return 704.5956f, -1229.202f, 44.2563f;
		case 3:
			return 1848.884f, -1836.363f, 42.333f;
		case 5:
			return 2277.335f, -751.5715f, 41.0714f;
		case 6:
			return 2369.604f, 1340.72f, 105.1302f;
		case 7:
			return -2590.858f, 468.7466f, 145.054f;
		case 8:
			if (!func_764())
			{
				return -1664.295f, -1330.149f, 82.9397f;
			}
			else
			{
				return -1646.427f, -1375.833f, 82.9658f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_329(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_330(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (func_325())
	{
		func_799();
		func_326();
	}
	iVar0 = func_800();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	func_798(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::_0xF0B4F759F35CC7F5(iVar1, 822715387, 0, 0, 0);
	return 1;
}

void func_331(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (&uParam0->f_3374[iVar0] != 0)
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(&(uParam0->f_3374[iVar0]));
			uParam0->f_3374[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_332(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_801(uParam0->f_3402[iVar0]);
		func_801(uParam0->f_3430[iVar0]);
		iVar0++;
	}
	func_801(&(uParam0->f_3478));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_801(uParam0->f_3458[iVar1]);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 15)
	{
		func_801(uParam0->f_3462[iVar2]);
		iVar2++;
	}
}

void func_333(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_378(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_656(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_334(bool bParam0)
{
	if (!bParam0 && func_291(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_335(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_802(&Global_0, 8);
	}
	if (!func_803() || func_56() != -1)
	{
		return;
	}
	func_802(&Global_0, 1);
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_670(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_670(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_125();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_338()
{
	int iVar0;

	iVar0 = func_268();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			if ((Global_1898077->f_1 == 1 || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 2:
			if ((((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 5:
			if (((Global_1898077->f_1 == 5 || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 3:
			if (Global_1898077->f_1 == 3 || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 4:
			if (Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_340(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_804(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_805();
		Global_1898077->f_9 = func_806(Global_1894899->f_2);
		func_807(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_341(int iParam0, bool bParam1, float fParam2)
{
	func_808(iParam0, bParam1, fParam2);
}

void func_342()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			Global_1934765->f_275[iVar0 /*2*/] = 0;
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = 0;
			func_809();
			return;
		}
		iVar0++;
	}
}

void func_343(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	func_719(iParam0);
	func_810(iParam0);
	func_742(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
	if (func_811())
	{
		INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0->f_864);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("ledger_ct");
		OBJECT::DELETE_OBJECT(&(iParam0->f_864));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
	HUD::_TEXT_BLOCK_DELETE("CPGENAU");
	func_812(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549->f_1723 = 0;
	func_547(iVar0, 512, 0);
	if (((func_286() == 1 || func_286() == 2) || func_286() == 3) || func_286() == 6)
	{
		func_813(&(iParam0->f_1428));
	}
}

void func_344()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759((Global_1357549->f_12[iVar0 /*14*/])->f_7);
			(Global_1357549->f_12[iVar0 /*14*/])->f_7 = 0;
			(Global_1357549->f_12[iVar0 /*14*/])->f_10 = 0;
			(Global_1357549->f_12[iVar0 /*14*/])->f_8 = 0;
		}
		iVar0++;
	}
}

void func_345(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_254(iVar0);
		}
		iVar0++;
	}
}

void func_346(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

bool func_347(int iParam0)
{
	return (Local_18.f_1718 && iParam0) == iParam0;
}

void func_348(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 - (Local_18.f_1718 && iParam0));
}

bool func_349(int iParam0)
{
	return func_408(iParam0, 16, 1);
}

bool func_350(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_178(iParam0);
	if (bParam1)
	{
		if (!func_336(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_814(), 1);
}

void func_351(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_499(iParam0))
	{
		return;
	}
	if (!func_350(iParam0, 0))
	{
	}
	func_815(iParam0);
	Global_1359489->f_15 = func_816(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_817();
	func_422(iParam0, 32, 1);
	if (func_336(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_136();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

void func_352()
{
	func_387(-505205920, 1017034651, -469960592, 4, 1, 1, 1);
	func_818(544);
	func_818(595);
	func_818(548);
	func_819(0);
	func_819(19);
	func_820(1, 1, 0);
	func_821();
}

void func_353(bool bParam0)
{
	int iVar0;

	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_349(iVar0) && !func_822(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_532(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_823(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

void func_354(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (bParam0)
	{
		func_148(4096);
		if (iParam1 && VOLUME::DOES_VOLUME_EXIST(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_336(func_139(iVar0), 0))
				{
					if (!func_500(iVar0))
					{
						if (func_408(iVar0, 32768, 1))
						{
							_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(func_824(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_145(4096);
	}
}

int func_355(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_56() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (