#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	struct<1177> Local_13 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	struct<47> Local_1190[32];
	struct<287> Local_2695 = { 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_2982 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_3000 = 255;
	var uLocal_3001 = 255;
	var uLocal_3002 = 255;
	var uLocal_3003 = 255;
	var uLocal_3004 = 255;
	var uLocal_3005 = 255;
	var uLocal_3006 = 255;
	var uLocal_3007 = 255;
	var uLocal_3008 = 255;
	var uLocal_3009 = 255;
	var uLocal_3010 = 255;
	var uLocal_3011 = 255;
	var uLocal_3012 = 255;
	var uLocal_3013 = 255;
	var uLocal_3014 = 255;
	var uLocal_3015 = 255;
	var uLocal_3016 = 255;
	var uLocal_3017 = 255;
	var uLocal_3018 = 255;
	var uLocal_3019 = 255;
	var uLocal_3020 = 255;
	var uLocal_3021 = 255;
	var uLocal_3022 = 255;
	var uLocal_3023 = 255;
	var uLocal_3024 = 255;
	var uLocal_3025 = 255;
	var uLocal_3026 = 255;
	var uLocal_3027 = 255;
	var uLocal_3028 = 255;
	var uLocal_3029 = 255;
	var uLocal_3030 = 255;
	var uLocal_3031 = 255;
	struct<6> Local_3032[32];
	struct<1422> Local_3225 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	float fLocal_4672 = 0f;
	float fLocal_4673 = 0f;
	var uLocal_4674 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_4672 = 1f;
	fLocal_4673 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_7))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_2982, 50, 46);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_2982), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_3032, 193, 47);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_3032[0 /*6*/]), 193, "m_baseClientData");
	func_11();
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
	}
}

int func_3(struct<2> Param0)
{
	if (func_15(0, 0))
	{
		return 1;
	}
	else if (func_16(Param0, 0, 128))
	{
		return 1;
	}
	else if (!func_17())
	{
		return 1;
	}
	else if (func_18(Local_3225, 64))
	{
		return 1;
	}
	else if (Local_3225.f_10 == 9)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	NETWORK::_0x236905C700FDB54D();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_21();
	}
	func_22();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
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
			func_6();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_23() == 0)
		{
			if (func_24())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 1177, 38);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_13), 1177, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1190, 1505, 39);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_1190[0 /*47*/]), 1505, "m_clientData");
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	vector3 vVar22;

	Local_3225 = { *iParam0 };
	Local_3225.f_1332 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_3225.f_1336 = MISC::GET_GAME_TIMER();
	Local_3225.f_1268 = func_25(iParam0->f_1) + 1000;
	Local_3225.f_1269 = func_26(iParam0->f_1, iParam0->f_2, iParam0->f_3) + 1000;
	Local_3225.f_1338 = { func_27(iParam0->f_1, iParam0->f_3) };
	Local_3225.f_1346 = { func_28(iParam0->f_1, iParam0->f_3) };
	Local_3225.f_1293 = func_29(iParam0->f_1, iParam0->f_2);
	Local_3225.f_1294 = func_30(iParam0->f_1, iParam0->f_2);
	Local_3225.f_1295 = func_31(iParam0->f_1, iParam0->f_2);
	Local_3225.f_1399 = { func_32(iParam0->f_1, iParam0->f_2) };
	func_34(func_33(iParam0->f_1, iParam0->f_2));
	func_35(1619021308);
	if (func_36(&Var0, iParam0->f_1))
	{
		Var5 = { Var0 };
		if (func_37(&Var5) && func_38(&Var5, iParam0->f_3))
		{
			Local_3225.f_1273 = 1;
			func_39(Var5, 1189568052, &(Local_3225.f_1273), 0);
			Local_3225.f_1275 = 2;
			func_39(Var5, -1755025897, &(Local_3225.f_1275), 0);
			Local_3225.f_1274 = 2;
			func_39(Var5, 948567928, &(Local_3225.f_1274), 0);
			Local_3225.f_1276 = 28;
			func_39(Var5, -823479386, &(Local_3225.f_1276), 1);
			Local_3225.f_1387 = joaat("standard");
			func_40(Var5, -467067774, &iVar10, 1);
			func_41(iVar10);
			func_42(Var5, -13272314, &bVar11, 0);
			if (bVar11)
			{
				func_43(134217728);
			}
		}
		Var5 = { Var0 };
		if (((func_44(&Var5) && func_45(&Var5, Local_3225.f_2)) && func_37(&Var5)) && func_38(&Var5, iParam0->f_3))
		{
			if (Local_3225.f_9 != -785841056)
			{
				func_40(Var5, 511429636, &iVar12, 0);
				iVar13 = iVar12;
				if (iVar13 != 0)
				{
					MISC::_0xBE83CAE8ED77A94F(iVar12);
				}
				iVar14 = -1;
				func_39(Var5, -1102158142, &iVar14, 0);
				if (iVar14 >= 0 && iVar14 < 24)
				{
					NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iVar14, 0, 0, 0, false);
				}
			}
		}
	}
	if (func_46(iParam0->f_1, iParam0->f_3, &iVar15))
	{
		iVar16 = func_48(func_47(-1892463704, iVar15));
		iVar17 = func_48(func_47(1374282888, iVar15));
		Local_3225.f_1277 = (iVar16 + iVar17);
	}
	iVar18 = func_49(iParam0->f_1);
	if (iVar18 != 0)
	{
		if (func_50(iVar18, &(Local_3225.f_1391), 600, -1, 0, 0))
		{
			func_51();
		}
	}
	func_52();
	func_53();
	func_54();
	if (Local_3225.f_9 != -785841056)
	{
		func_55(9999.9f);
		GRAPHICS::_0x5199405EABFBD7F0(func_56());
		GRAPHICS::_0x5199405EABFBD7F0(func_57());
		GRAPHICS::_0x5199405EABFBD7F0(func_58());
		Local_3225.f_1417 = GRAPHICS::_0x842CCC9491FFCD9B(func_59());
		GRAPHICS::_0xF3E039322BFBD4D8(Local_3225.f_1417);
		func_60(&(Local_3225.f_1421), 1, 0);
		Local_3225.f_1421.f_2 = -1812916243;
		func_61(&(Local_3225.f_1421), 0);
		if (func_62(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_63(1);
		}
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
		AUDIO::START_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	else if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(iParam0->f_6, PLAYER::PLAYER_ID()))
	{
		func_43(131072);
	}
	func_64();
	if (func_65(131072))
	{
		vVar19 = { func_66(iParam0->f_1, iParam0->f_2) };
		vVar22 = { func_67(iParam0->f_1, iParam0->f_2) };
		if (func_68(vVar19))
		{
		}
		else
		{
			func_69(vVar19, vVar22);
		}
		func_70(1);
	}
	if (Local_3225.f_9 != -785841056)
	{
		func_71();
	}
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_2982.f_17[iVar0] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		iVar0++;
	}
	func_72();
}

int func_15(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070355->f_26837 = 1;
		return 1;
	}
	if (func_73(*Global_1051163) && !func_74(*Global_1051163, Param0))
	{
		Global_1070355->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
	{
		Global_1070355->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1273882 /*70*/] > 2)
	{
		Global_1070355->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070355->f_26837 = 6;
		return 1;
	}
	if (func_77())
	{
		Global_1070355->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_73(*Global_1051163))
		{
			Global_1070355->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070355->f_26837 = 9;
		return 1;
	}
	Global_1070355->f_26837 = 0;
	return 0;
}

int func_17()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	return func_78((Global_1183537->f_66[iParam0 /*20*/])->f_6, iParam1);
}

void func_19()
{
	switch (Local_2982)
	{
		case 0:
			func_79();
			break;
		case 1:
			func_80();
			break;
		case 3:
			func_81();
			break;
		case 4:
			func_82();
			break;
		case 5:
			func_83();
			break;
		case 6:
			func_84();
			break;
		case 7:
			func_85();
			break;
		case 8:
			func_86();
			break;
	}
}

void func_20()
{
	func_87();
	func_53();
	func_88();
	func_89();
	func_54();
	func_90();
	func_91();
	func_92();
	func_93();
	switch (Local_3225.f_10)
	{
		case 0:
			func_94();
			break;
		case 1:
			func_95();
			break;
		case 2:
			func_96();
			break;
		case 3:
			func_97();
			break;
		case 4:
			func_98();
			break;
		case 5:
			func_99();
			break;
		case 6:
			func_100();
			break;
		case 7:
			func_101();
			break;
		case 8:
			func_102();
			break;
	}
}

void func_21()
{
	if (Local_2982 > 5)
	{
		NETWORK::_0x78335E12DB0BF961(664);
	}
	func_103();
}

void func_22()
{
	bool bVar0;

	func_104();
	func_105(1);
	func_106();
	func_107();
	func_108();
	func_109();
	func_110();
	func_112(func_111(Local_3225.f_1));
	func_113(1);
	func_61(&(Local_3225.f_1421), 0);
	if (DATAFILE::_0x7907969497EA92F5(Local_3225.f_1391))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_3225.f_1391);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_3225.f_1392))
	{
		VOLUME::DELETE_VOLUME(Local_3225.f_1392);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_3225.f_1393))
	{
		VOLUME::DELETE_VOLUME(Local_3225.f_1393);
	}
	if (func_114())
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	GRAPHICS::_0x37D7BDBA89F13959(func_56());
	GRAPHICS::_0x37D7BDBA89F13959(func_57());
	GRAPHICS::_0x37D7BDBA89F13959(func_58());
	if (Local_3225.f_9 != -785841056)
	{
		func_115(Local_3225.f_1337);
		MISC::CLEAR_OVERRIDE_WEATHER();
		NETWORK::_0x65F040D91001ED4B(0);
		func_116();
		HUD::_DISABLE_HUD_CONTEXT(690901814);
		func_117(&(Local_3225.f_1421));
		if (GRAPHICS::_0xEEF83A759AE06A27(Local_3225.f_1417) && !func_118())
		{
			GRAPHICS::_0x71845905BCCDE781(Local_3225.f_1417);
			GRAPHICS::_0xEDA5CBECF56E1386(Local_3225.f_1417);
			GRAPHICS::_0x38D9D50F2085E9B3(Local_3225.f_1417);
		}
		if (CAM::DOES_CAM_EXIST(Local_3225.f_1415))
		{
			CAM::DESTROY_CAM(Local_3225.f_1415, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
		{
			PED::DELETE_PED(&(Local_3225.f_1416));
		}
		AUDIO::_0x2E399EAFBEEA74D5();
	}
	AUDIO::_0x531A78D6BF27014B(func_119());
	AUDIO::_0x9D746964E0CF2C5F(func_120(), func_121());
	AUDIO::_0x9D746964E0CF2C5F(func_122(), func_123());
	func_124();
	func_125();
	func_126(1, 1);
	func_127(0);
	if (func_65(131072))
	{
		func_70(0);
		func_128();
	}
	if (Local_3225.f_9 == -785841056)
	{
		if (func_130(func_129(Local_3225.f_1)))
		{
			func_131(Local_3225.f_1, Local_3225.f_2);
			func_132(func_129(Local_3225.f_1));
			func_133();
		}
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
		AUDIO::STOP_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	if (func_134(4096) || func_134(8192))
	{
		bVar0 = func_134(8192);
		func_135(Local_3225, Local_3225.f_1, Local_3225.f_7, bVar0);
	}
	else if (func_134(16384))
	{
		func_136(Local_3225, Local_3225.f_1, Local_3225.f_7);
	}
	else
	{
		func_137(Local_3225, Local_3225.f_7, 0);
	}
	func_138();
	func_139(Local_3225.f_9, Local_3225.f_4);
}

int func_23()
{
	return Global_1572887->f_13;
}

bool func_24()
{
	return Global_1051202->f_8;
}

int func_25(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 120000;
	if (func_36(&Var1, iParam0))
	{
		func_39(Var1, -463492762, &iVar0, 0);
	}
	return iVar0;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 300000;
	if ((((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_37(&Var1)) && func_38(&Var1, uParam2))
	{
		func_39(Var1, 1576411076, &iVar0, 0);
	}
	return iVar0;
}

struct<8> func_27(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

struct<8> func_28(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, -1771940760, &Var0, 0);
	}
	return Var0;
}

float func_29(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 200f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

float func_30(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = func_29(iParam0, uParam1);
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, -1393462640, &uVar0, 0);
	}
	return uVar0;
}

float func_31(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, 2005647695, &fVar0, 0);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (func_30(iParam0, uParam1) + 200f);
	}
	return fVar0;
}

Vector3 func_32(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, 221135615, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_33(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

void func_34(vector3 vParam0)
{
	if (!func_144(Local_3225.f_1396, vParam0))
	{
		Local_3225.f_1396 = { vParam0 };
	}
}

int func_35(int iParam0)
{
	if (Local_3225.f_1384 != iParam0)
	{
		Local_3225.f_1384 = iParam0;
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1183537->f_443))
	{
		return false;
	}
	*uParam0 = Global_1183537->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_145(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_37(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_38(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_39(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_40(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_41(int iParam0)
{
	if (Local_3225.f_1387 != iParam0)
	{
		Local_3225.f_1387 = iParam0;
	}
}

int func_42(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_43(int iParam0)
{
	func_146(&(Local_3225.f_1334), iParam0);
}

bool func_44(var uParam0)
{
	*uParam0 = Global_1183537->f_443;
	uParam0->f_2 = -1782115362;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_45(var uParam0, var uParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_46(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	var uVar5;

	if ((func_36(&Var0, iParam0) && func_37(&Var0)) && func_38(&Var0, uParam1))
	{
		if (func_40(Var0, 915697271, &uVar5, 1))
		{
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

struct<2> func_47(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_48(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_49(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0))
	{
		func_40(Var1, 733859289, &uVar0, 0);
	}
	return uVar0;
}

int func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_15(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_15(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_51()
{
	Local_2695 = Local_3225.f_1391;
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_2695))
	{
	}
	func_147(&Local_2695);
	if (!func_148(&Local_13, &Local_2695))
	{
	}
	func_149(&Local_13, 0);
	func_150(&Local_13);
}

void func_52()
{
	struct<2> Var0;

	if (func_18(Local_3225, 256))
	{
		func_151(0, Local_3225.f_1332);
		return;
	}
	else if (func_18(Local_3225, 512) && !func_152())
	{
		func_151(0, Local_3225.f_1332);
		func_153(&(Local_3225.f_1383), 8);
	}
	else if (func_154(&Local_3225))
	{
		func_151(0, Local_3225.f_1332);
		func_153(&(Local_3225.f_1383), 3);
	}
	else
	{
		Var0 = { func_155() };
		if (func_73(Var0))
		{
			if (!func_74(Var0, Local_3225.f_7))
			{
				func_151(0, Local_3225.f_1332);
				if (func_153(&(Local_3225.f_1383), 1))
				{
				}
			}
			else
			{
				func_151(2, Local_3225.f_1332);
				func_153(&(Local_3225.f_1383), 0);
			}
		}
		else
		{
			func_151(1, Local_3225.f_1332);
			func_153(&(Local_3225.f_1383), 0);
		}
	}
}

void func_53()
{
	if (func_156(Local_3225.f_1332))
	{
		if (!func_134(256))
		{
			if (Local_3225.f_9 != -785841056)
			{
				func_157(-2121539959, 0);
			}
			else
			{
				func_157(-1256206172, 0);
			}
			func_43(256);
		}
	}
	else
	{
		func_104();
	}
}

void func_54()
{
	struct<35> Var0;
	struct<12> Var58;

	if (!func_156(Local_3225.f_1332))
	{
		return;
	}
	if (func_158())
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	if (Local_3225.f_9 == -785841056)
	{
		func_43(512);
	}
	else if (!func_134(512))
	{
		Var58.f_1 = -1;
		Var58.f_3 = -1082130432;
		Var58.f_4 = 2;
		Var58.f_5 = -1082130432;
		Var58.f_7 = -1082130432;
		Var58.f_9 = -1082130432;
		Var58.f_11 = -1082130432;
		if (!func_159(&(Local_3225.f_1310)))
		{
			Var58.f_6 = 0;
			Var58.f_4 = 2;
			Var58.f_2 = 2;
			Var58 = 0;
			Var58.f_10 = 2;
			Var58.f_8 = 0;
			func_160(&Var0, Var58, 3);
		}
		func_161(&Var0, -2121539959, 0, 0);
		func_162(&Var0, 1);
		func_163(&Var0, 1);
		func_164(&Var0, 1);
		func_165(&Var0, Local_3225.f_7, 1, 1);
		func_166();
	}
}

void func_55(float fParam0)
{
	if (Global_1070355->f_21175 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1070355->f_21175 = fParam0;
		}
	}
}

char* func_56()
{
	return "MP_FreeRoamCountdown";
}

char* func_57()
{
	return "MP_MatchEndPulseWinner";
}

char* func_58()
{
	return "MP_MatchEndPulseLoser";
}

char* func_59()
{
	return "MP_Trans_SceneToPhoto";
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_61(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

bool func_62(int iParam0)
{
	return func_167(1, iParam0);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_168(17);
	}
	else
	{
		func_169(17);
	}
}

void func_64()
{
	int iVar0;

	iVar0 = func_170(Local_3225.f_2);
	Local_2695.f_114 = { func_171(iVar0) };
	func_41(1229355466);
	func_172(Local_3225.f_2);
	func_173(524288);
	Local_3225.f_1420 = 0;
	func_173(131072);
	func_173(2097152);
	func_173(1048576);
	func_174();
	func_175();
}

bool func_65(int iParam0)
{
	return func_78(Local_3225.f_1335, iParam0);
}

Vector3 func_66(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, -135059083, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_67(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, -1922656805, &vVar0, 0);
	}
	return vVar0;
}

int func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_69(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1099293->f_26.f_21))
	{
		bVar0 = true;
	}
	else if (!func_144(ENTITY::GET_ENTITY_COORDS(Global_1099293->f_26.f_21, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1099293->f_26.f_25 = { vParam0 };
		Global_1099293->f_26.f_31 = { vParam3 };
		Global_1099293->f_26.f_22 = 1;
		STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		func_176(4096);
	}
	else
	{
		func_177(4096);
	}
}

void func_71()
{
	int iVar0;

	if (Local_3225.f_1295 <= 0f)
	{
		return;
	}
	Local_3225.f_1394 = VOLUME::_0xB3FB80A32BAE3065(Local_3225.f_1396, 0f, 0f, 0f, Local_3225.f_1295, Local_3225.f_1295, Local_3225.f_1295);
	if (VOLUME::DOES_VOLUME_EXIST(Local_3225.f_1394))
	{
		iVar0 = func_178();
		POPULATION::_0x2161278C6322F740(iVar0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_3225.f_1394, iVar0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Local_3225.f_1394, iVar0, 0, 0, -1, -1, 0);
		PATHFIND::_0xB03944057FD735BA(Local_3225.f_1394, 4, 0);
	}
}

void func_72()
{
	if (func_179(0) && func_180(0) != func_181())
	{
		func_182(0);
	}
	Local_13.f_1156 = MISC::GET_GAME_TIMER();
}

int func_73(struct<2> Param0)
{
	if (!func_183(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_184(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1184367->f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
{
	if (!Global_1070355->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1183982[iParam1 /*12*/] && iParam0) != 0;
}

int func_77()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_73(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_79()
{
	if (func_185(2, Local_3225.f_1332))
	{
		if (!func_186(2))
		{
			if (func_187())
			{
				func_188(2);
			}
		}
		else
		{
			func_189();
			func_190(1);
		}
	}
}

void func_80()
{
	if (!func_186(4))
	{
		if (func_191())
		{
			func_188(4);
		}
	}
	else if (func_192(4))
	{
		func_193(&(Local_2982.f_1), 0);
		func_190(3);
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_194();
	if (func_159(&(Local_2982.f_1)))
	{
		iVar0 = func_195(&(Local_2982.f_1));
		iVar1 = (Local_3225.f_1268 - iVar0);
		if (func_68(Local_3225.f_1399))
		{
			iVar2 = func_196();
		}
		else
		{
			iVar2 = BUILTIN::CEIL((IntToFloat(func_196()) * 0.5f));
		}
		if (iVar1 <= iVar2)
		{
			func_190(4);
		}
		else if (Local_3225.f_9 != -785841056 && iVar1 >= 16000)
		{
			iVar3 = func_197(2);
			if (iVar3 >= Local_3225.f_1276 && func_192(8))
			{
				func_198(&(Local_2982.f_1), (Local_3225.f_1268 - 16000));
			}
		}
	}
}

void func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_195(&(Local_2982.f_1));
	iVar1 = (Local_3225.f_1268 - iVar0);
	if (!func_186(16))
	{
		if (iVar1 <= func_199())
		{
			if (func_200())
			{
				func_188(16);
			}
		}
	}
	else if (iVar1 <= 1000)
	{
		func_201();
		func_202(1, Local_3225.f_1275);
		func_203(1);
		func_204();
		if (Local_2982.f_12 != 0)
		{
			func_205();
			func_190(6);
		}
		else
		{
			Local_2982.f_16 = func_197(2);
			func_206(0);
			func_188(2048);
			func_190(5);
		}
	}
}

void func_83()
{
	func_207();
	func_206(1);
	func_202(0, -1);
	func_203(0);
	if ((func_208() || func_209() > Local_3225.f_1269) || Local_2982.f_12 != 0)
	{
		func_205();
	}
}

void func_84()
{
	if (func_192(32))
	{
		if (!func_159(&(Local_2982.f_7)))
		{
			func_210(&(Local_2982.f_7));
		}
		else if (func_195(&(Local_2982.f_7)) > 500)
		{
			func_211();
			func_190(7);
		}
	}
}

void func_85()
{
	func_190(8);
}

void func_86()
{
	if (func_212())
	{
		func_190(9);
	}
}

void func_87()
{
	if (!func_65(262144))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (func_213())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			func_173(262144);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_214(262144);
	}
}

void func_88()
{
	(Global_1183537->f_66[Local_3225 /*20*/])->f_2 = Local_3225.f_10 >= 3;
	(Global_1183537->f_66[Local_3225 /*20*/])->f_1 = &Local_3032[Local_3225.f_1332 /*6*/];
	if (&Local_3032[Local_3225.f_1332 /*6*/] != 2)
	{
		return;
	}
	if (func_215())
	{
		func_216();
	}
	else if (func_217())
	{
		func_218(1);
	}
}

void func_89()
{
	(Global_1183537->f_66[Local_3225 /*20*/])->f_2 = Local_3225.f_10 >= 3;
	(Global_1183537->f_66[Local_3225 /*20*/])->f_1 = &Local_3032[Local_3225.f_1332 /*6*/];
	if (&Local_3032[Local_3225.f_1332 /*6*/] != 2)
	{
		return;
	}
	switch (Local_3225.f_1)
	{
		case 15:
			func_220(func_219(), Local_3225.f_7, 1, 0);
			break;
	}
}

void func_90()
{
	if (func_156(Local_3225.f_1332) && func_134(134217728))
	{
		func_221(0);
	}
}

void func_91()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_222(iVar0);
				break;
			case 1741908893:
				func_223(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_92()
{
	int iVar0;

	if (Local_3225.f_1419 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (&Local_2982.f_17[iVar0] == PLAYER::PLAYER_ID())
			{
				Local_3225.f_1419 = iVar0;
			}
			iVar0++;
		}
	}
}

void func_93()
{
}

void func_94()
{
	bool bVar0;

	if (Local_2982 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_226();
	if (!func_185(2, Local_3225.f_1332))
	{
		bVar0 = true;
		if (!func_227(func_111(Local_3225.f_1)))
		{
			bVar0 = false;
		}
		if (func_114())
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				bVar0 = false;
			}
		}
		if ((!AUDIO::_0xD9130842D7226045(func_119(), 0) || !AUDIO::_0xE368E8422C860BA7(func_120(), func_121(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_122(), func_123(), -2))
		{
			bVar0 = false;
		}
		if (Local_3225.f_9 != -785841056)
		{
			if (!func_230(&(Local_3225.f_1337), func_228(PED::IS_PED_MALE(Global_35)), func_229()))
			{
				bVar0 = false;
			}
			if (!func_231(&(Local_3225.f_1421)))
			{
				bVar0 = false;
			}
		}
		if (!func_232())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_233(2, Local_3225.f_1332);
		}
		else if (Local_3225.f_1336 == -1 || (MISC::GET_GAME_TIMER() - Local_3225.f_1336) > Global_1901929->f_295.f_176)
		{
			if (Local_3225.f_1336 == -1)
			{
			}
			func_233(2, Local_3225.f_1332);
		}
	}
	else if (Local_2982 > 0)
	{
		if (Local_3225.f_9 != -785841056)
		{
			func_113(0);
		}
		StringCopy(&(Local_3225.f_13.f_950), MISC::_CREATE_VAR_STRING(2, &(Local_3225.f_1338)), 64);
		func_52();
		func_225(1);
	}
}

void func_95()
{
	if (Local_2982 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_226();
	if (!func_185(4, Local_3225.f_1332))
	{
		if (func_234())
		{
			func_233(4, Local_3225.f_1332);
		}
	}
	else if (Local_2982 > 1)
	{
		func_235();
		if (Local_3225.f_9 == -785841056)
		{
			func_225(3);
		}
		else
		{
			func_225(2);
		}
	}
}

void func_96()
{
	if (Local_2982 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_236();
	func_237();
	if (!func_134(2097152))
	{
		if (func_134(1))
		{
			if (func_238() || func_239())
			{
				if (func_62(255))
				{
					return;
				}
				func_240();
			}
			else if (func_62(255) || CAM::IS_SCREEN_FADED_OUT())
			{
				if (!func_159(&(Local_3225.f_1319)))
				{
					func_210(&(Local_3225.f_1319));
				}
				else if (func_195(&(Local_3225.f_1319)) > 30000)
				{
					func_240();
				}
			}
		}
	}
	else if (!func_62(255))
	{
		if (!func_241(67108864))
		{
			func_242(67108864);
		}
		func_243(1);
		AUDIO::_0x2E399EAFBEEA74D5();
		func_244(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_233(8, Local_3225.f_1332);
		func_225(3);
	}
}

void func_97()
{
	if (Local_2982 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_236();
	func_245();
	func_237();
	func_246();
	func_247();
	func_248();
	if (Local_2982 > 3)
	{
		func_249();
		func_250();
		func_225(4);
	}
}

void func_98()
{
	int iVar0;
	int iVar1;

	if (Local_2982 >= 6)
	{
		func_224();
		func_251(Local_3225, 2);
		func_225(6);
		return;
	}
	func_236();
	func_245();
	func_237();
	func_248();
	if (!func_185(16, Local_3225.f_1332))
	{
		iVar0 = func_195(&(Local_2982.f_1));
		iVar1 = (Local_3225.f_1268 - iVar0);
		if (iVar1 <= func_199())
		{
			if (func_252())
			{
				func_233(16, Local_3225.f_1332);
			}
		}
	}
	else if (Local_2982 > 4)
	{
		func_253();
		func_254();
		func_255();
		func_52();
		func_256();
		func_257(&(Local_3225.f_1005), 1);
		func_258();
		func_259();
		func_260();
		func_251(Local_3225, 2);
		func_225(5);
	}
}

void func_99()
{
	if (Local_2982 >= 8)
	{
		func_225(8);
		return;
	}
	func_261();
	if (Local_2982 > 5)
	{
		func_224();
		return;
	}
	else if (func_134(8192))
	{
		func_224();
		func_225(6);
		return;
	}
	func_236();
	func_245();
	func_262();
	func_263();
	func_255();
	func_264();
	func_265();
	if (!func_266())
	{
		func_267();
	}
	func_268();
	func_269();
	func_270();
}

void func_100()
{
	NETWORK::_0x236905C700FDB54D();
	if (!func_271())
	{
		func_272();
	}
	func_273();
	func_274();
	func_275();
	if (!func_156(Local_3225.f_1332))
	{
		func_225(8);
		return;
	}
	if (!func_185(32, Local_3225.f_1332))
	{
		func_233(32, Local_3225.f_1332);
	}
	else if (Local_2982 > 6 || func_134(8192))
	{
		if (!func_134(268435456))
		{
			func_276(Local_2982.f_10);
			if (func_156(Local_3225.f_1332))
			{
				if (!MISC::IS_BIT_SET(Local_3225.f_13.f_11.f_158, 0))
				{
					func_277(&(Local_3225.f_13));
					func_278(&(Local_3225.f_13));
					func_281(func_279(), func_280(), Local_3225.f_11, Local_3225.f_12, 30000);
				}
				func_282();
				func_283();
			}
		}
		else if (!func_134(536870912))
		{
			if (Local_3225.f_1282 >= Local_3225.f_1281)
			{
				func_43(536870912);
			}
			else if (!func_159(&(Local_3225.f_1313)))
			{
				func_193(&(Local_3225.f_1313), 0);
			}
			else if (func_195(&(Local_3225.f_1313)) > 500)
			{
				func_43(536870912);
			}
		}
		else
		{
			func_284();
			func_225(7);
		}
	}
}

void func_101()
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	var uVar10;
	char cVar11[64];
	char cVar19[64];
	int iVar27;
	var uVar28;
	bool bVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	NETWORK::_0x236905C700FDB54D();
	func_275();
	func_285();
	if (!func_156(Local_3225.f_1332))
	{
		func_126(1, 1);
		func_225(8);
		return;
	}
	func_273();
	func_286();
	if (func_287())
	{
		if (func_288())
		{
			if (!func_289())
			{
				Local_3225.f_1384 = 1310067901;
			}
		}
		else if (func_65(8192))
		{
			Local_3225.f_1384 = joaat("leaderboard");
		}
		else
		{
			Local_3225.f_1384 = 0;
		}
		func_281(func_279(), func_280(), Local_3225.f_11, Local_3225.f_12, 30000);
	}
	else if (func_288())
	{
		Local_3225.f_1384 = 1310067901;
		func_281(0, func_280(), 0, 0, 30000);
	}
	else
	{
		func_290();
	}
	if (!func_65(32))
	{
		if (func_291())
		{
			func_292(&(Local_3225.f_1005));
			uVar0 = func_293();
			if (func_134(4096))
			{
				GRAPHICS::_0x3A9A281FF71249E9(func_57(), uVar0);
			}
			else
			{
				GRAPHICS::_0x3A9A281FF71249E9(func_58(), uVar0);
			}
			if (!func_288() || Local_3225.f_9 == -785841056)
			{
				func_257(&(Local_3225.f_1005), 1);
			}
			func_173(32);
		}
	}
	else if (!func_65(64))
	{
		func_294();
		if (Local_3225.f_9 == -785841056)
		{
			if (!func_295(Local_3225.f_1287))
			{
				func_296();
				iVar1 = 6000;
				if (Local_2982.f_12 != 0 || !func_297(Local_3225.f_1384))
				{
					iVar1 = 1000;
				}
				if (!func_159(&(Local_3225.f_1316)))
				{
					func_210(&(Local_3225.f_1316));
				}
				else if (func_195(&(Local_3225.f_1316)) > iVar1)
				{
					if (func_298())
					{
						return;
					}
					func_290();
					func_173(64);
					func_225(8);
				}
			}
		}
		else if (((!func_295(Local_3225.f_1287) && !func_299()) && !func_300()) && !func_301())
		{
			if (UIAPPS::_IS_ANY_APP_RUNNING())
			{
				if (!func_159(&(Local_3225.f_1322)))
				{
					func_210(&(Local_3225.f_1322));
				}
				else if (func_195(&(Local_3225.f_1322)) > 10000)
				{
					func_302();
					func_303(&(Local_3225.f_1322));
				}
			}
			else
			{
				func_296();
				if (!func_159(&(Local_3225.f_1316)))
				{
					func_210(&(Local_3225.f_1316));
				}
				else if (func_195(&(Local_3225.f_1316)) > 1000 && !func_295(Local_3225.f_1289))
				{
					func_127(0);
					func_173(64);
				}
			}
		}
		else
		{
			if (func_159(&(Local_3225.f_1316)))
			{
				func_303(&(Local_3225.f_1316));
			}
			if (func_159(&(Local_3225.f_1322)))
			{
				func_303(&(Local_3225.f_1322));
			}
		}
	}
	else if (!func_65(128))
	{
		func_294();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !func_62(255))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::_0x9B1FC259187C97C0("winners_pose");
			}
		}
		else if (func_294() && func_304())
		{
			GRAPHICS::ANIMPOSTFX_STOP(func_57());
			GRAPHICS::ANIMPOSTFX_STOP(func_58());
			if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (PED::IS_PED_HOGTIED(Global_35))
				{
					TASK::_0x79559BAD83CCD038(Global_35, 3, 0, 0, 0, 1090519040);
				}
				if (PED::_0x0E99E3BF11BB6367(Global_35))
				{
					iVar2 = PED::_0xD0B7AEB56229D317(Global_35);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && PED::IS_PED_A_PLAYER(iVar2))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
						PED::_0x789DABD18E9024DB(Global_35, 32768, 1);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
				}
				if (PED::_0x3BDFCF25B58B0415(Global_35))
				{
					PED::_0x789DABD18E9024DB(Global_35, 4096, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_3225.f_1416, true, false) };
					if (!func_68(vVar3))
					{
						vVar6 = { func_305(vVar3, 10f, 0.25f) };
						ENTITY::SET_ENTITY_COORDS(Global_35, vVar6, true, false, true, true);
					}
				}
			}
			if (Local_2982.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
			{
				func_225(8);
				return;
			}
			func_306();
			func_307();
			func_173(128);
		}
	}
	else if (!func_65(512))
	{
		func_307();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_3225.f_1415) && !CAM::IS_CAM_ACTIVE(Local_3225.f_1415))
				{
					CAM::SET_CAM_ACTIVE(Local_3225.f_1415, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416) && !ENTITY::IS_ENTITY_DEAD(Local_3225.f_1416))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3225.f_1416, true);
				}
				func_308();
				HUD::_0x4CC5F2FC1332577F(690901814);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			func_303(&(Local_3225.f_1316));
			Local_3225.f_1418 = 1500;
			if (!func_309())
			{
				if (Local_2982.f_10 != 255)
				{
					iVar9 = func_310();
					Local_3225.f_1418 = func_311(iVar9);
					uVar10 = func_312(iVar9);
					func_313(Local_3225.f_1416, iVar9, 2, 0, 0, uVar10);
				}
			}
			func_173(512);
		}
	}
	else if (!func_65(1024))
	{
		func_307();
		if (!func_159(&(Local_3225.f_1316)))
		{
			StringCopy(&cVar11, func_314(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar11))
			{
				StringCopy(&cVar11, MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			cVar19 = { func_315() };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
			{
				cVar19 = { Local_3225.f_1406 };
			}
			if (func_134(8192) || func_65(524288))
			{
				func_320(&(Local_3225.f_1421), &cVar19, func_316(), func_317(), func_319(func_318(&(Local_3225.f_13), 0)), "", "", Local_3225.f_1414);
			}
			else if (Local_2982.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(func_321()))
				{
					func_320(&(Local_3225.f_1421), "", "", MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
				else
				{
					func_320(&(Local_3225.f_1421), "", "", func_321(), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
			}
			else if (Local_2982.f_10 == PLAYER::PLAYER_ID())
			{
				func_320(&(Local_3225.f_1421), &cVar11, &cVar19, func_319(func_318(&(Local_3225.f_13), 0)), "", "", "", Local_3225.f_1414);
			}
			else
			{
				func_320(&(Local_3225.f_1421), &cVar11, &cVar19, func_322(Local_3225.f_1406, Local_3225.f_1414, func_318(&(Local_3225.f_13), 0)), "", "", "", Local_3225.f_1414);
			}
			func_210(&(Local_3225.f_1316));
		}
		else
		{
			iVar27 = Local_3225.f_1418;
			func_323(&iVar27);
			if (func_324() || (iVar27 > 0 && func_195(&(Local_3225.f_1316)) > iVar27))
			{
				AUDIO::_0x9B1FC259187C97C0("photograph");
				GRAPHICS::_0x9B8D5D4CB8AF58B3(Local_3225.f_1417);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_3225.f_1417);
				func_173(1024);
			}
		}
	}
	else if (!func_65(2048))
	{
		func_307();
		if (GRAPHICS::_0x9AB192A9EF980EED(Local_3225.f_1417, 2, 0, &uVar28))
		{
			bVar29 = true;
		}
		if (bVar29 || func_195(&(Local_3225.f_1316)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(func_122(), func_123(), true, 0);
			func_61(&(Local_3225.f_1421), 1);
			func_210(&(Local_3225.f_1316));
			func_173(2048);
		}
	}
	else if (!func_65(4096))
	{
		func_307();
		if (func_325(&(Local_3225.f_1421)) || func_195(&(Local_3225.f_1316)) > 8000)
		{
			func_210(&(Local_3225.f_1316));
			func_173(4096);
		}
	}
	else if (!func_65(8192))
	{
		func_307();
		if (func_195(&(Local_3225.f_1316)) > 5000)
		{
			if (!func_326())
			{
				func_117(&(Local_3225.f_1421));
			}
			func_35(func_327());
			func_303(&(Local_3225.f_1316));
			func_173(8192);
		}
	}
	else if (!func_65(16384))
	{
		func_307();
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_13.f_11))
		{
			if (Local_3225.f_1283 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_3225.f_13.f_11, "info_value_07", func_328(Local_3225.f_1283));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_3225.f_13.f_11, "info_value_07", true);
				Local_3225.f_1283 = 0;
			}
			if (Local_3225.f_1285 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_08", func_328(Local_3225.f_1285));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_08", true);
				Local_3225.f_1285 = 0;
			}
			if (Local_3225.f_1284 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_06", func_328(Local_3225.f_1284));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_06", true);
				Local_3225.f_1284 = 0;
			}
			if (Local_3225.f_1286 > 0)
			{
				Local_3225.f_1286 = 0;
			}
		}
		if (!func_159(&(Local_3225.f_1316)))
		{
			func_210(&(Local_3225.f_1316));
		}
		else if (func_195(&(Local_3225.f_1316)) > 2000)
		{
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
			if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar33) || _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(iVar33) <= 1) || !_NAMESPACE26::_0x93A91A351A07360E(iVar33))
			{
				iVar30 = 1;
				if (func_185(512, Local_3225.f_1332))
				{
					iVar31++;
				}
				if (func_185(1024, Local_3225.f_1332))
				{
					iVar32++;
				}
			}
			else
			{
				iVar36 = 0;
				iVar36 = 0;
				while (iVar36 <= 31)
				{
					iVar34 = PLAYER::INT_TO_PLAYERINDEX(iVar36);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar34) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iVar33, iVar34)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar34))
					{
						iVar35 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar34);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar35))
						{
							iVar30++;
							if (func_185(512, iVar35))
							{
								iVar31++;
							}
							if (func_185(1024, iVar35))
							{
								iVar32++;
							}
							if ((_NAMESPACE26::_0x424B17A7DC5C90BC(iVar34) && iVar34 != PLAYER::PLAYER_ID()) && func_185(1024, iVar35))
							{
								iVar31 = 7;
							}
						}
					}
					iVar36++;
				}
			}
			if (iVar31 > iVar30)
			{
				iVar31 = iVar30;
			}
			if (iVar32 > iVar30)
			{
				iVar32 = iVar30;
			}
			if (!func_329(Local_3225.f_1297))
			{
				if (iVar30 > 1)
				{
					Local_3225.f_1297 = func_330(MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					Local_3225.f_1297 = func_330("FME_PROMPT_RETURN_TO_FREE_ROAM", joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (func_329(Local_3225.f_1297))
			{
				if (iVar30 > 1)
				{
					func_331(Local_3225.f_1297, MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), 1);
				}
				else
				{
					func_331(Local_3225.f_1297, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!func_185(512, Local_3225.f_1332))
				{
					if (func_332(Local_3225.f_1297, 1))
					{
						func_233(512, Local_3225.f_1332);
						func_333(Local_3225.f_1297, 0, 1, 1);
					}
				}
			}
			if (!func_185(1024, Local_3225.f_1332))
			{
				if (iVar31 >= iVar30 || func_195(&(Local_3225.f_1316)) > 62000)
				{
					func_233(1024, Local_3225.f_1332);
				}
			}
			else if (iVar32 >= iVar30)
			{
				func_334(&(Local_3225.f_1297), 1, 1);
				func_303(&(Local_3225.f_1316));
				func_173(16384);
			}
		}
	}
	else if (!func_65(32768))
	{
		if (func_326())
		{
			func_117(&(Local_3225.f_1421));
		}
		func_307();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::_0x9B1FC259187C97C0("fade_to_black");
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			func_173(32768);
			func_225(8);
		}
	}
}

void func_102()
{
	NETWORK::_0x236905C700FDB54D();
	if (func_335())
	{
		func_225(9);
	}
}

void func_103()
{
}

void func_104()
{
	if (func_134(256))
	{
		func_336(0);
		func_337(256);
	}
}

void func_105(bool bParam0)
{
	if (func_134(512))
	{
		if (Local_3225.f_9 == -785841056)
		{
		}
		func_338(1, bParam0);
		func_337(512);
	}
}

void func_106()
{
	func_339(4);
	func_339(16);
}

void func_107()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_340(iVar0);
		iVar0++;
	}
	if (func_185(16384, Local_3225.f_1332))
	{
		if (func_341())
		{
			func_342();
			func_343(16384, Local_3225.f_1332);
		}
	}
	if (func_185(8192, Local_3225.f_1332))
	{
		if (!func_344(Global_1273882->f_15))
		{
			func_345(1, 0, 0);
			func_343(8192, Local_3225.f_1332);
		}
	}
}

void func_108()
{
	if (func_134(1))
	{
		func_346();
		func_347(0);
		func_337(1);
	}
}

void func_109()
{
	if (func_134(1024))
	{
		func_348(1);
		func_337(1024);
	}
}

void func_110()
{
	if (func_134(2048))
	{
		if (Local_3225.f_9 == -785841056)
		{
			func_349(0);
		}
		else
		{
			func_350(1);
			LAW::_ENABLE_DISPATCH_LAW_2(1);
			LAW::_ENABLE_DISPATCH_LAW(1);
		}
		func_337(2048);
	}
}

struct<8> func_111(int iParam0)
{
	struct<8> Var0;
	struct<5> Var8;

	if (func_36(&Var8, iParam0) && func_140(&Var8))
	{
		func_141(Var8, -874721119, &Var0, 1);
	}
	return Var0;
}

void func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (HUD::TEXT_BLOCK_IS_LOADED(func_351()))
	{
		HUD::_TEXT_BLOCK_DELETE(func_351());
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0) && HUD::TEXT_BLOCK_IS_LOADED(&uParam0))
	{
		HUD::_TEXT_BLOCK_DELETE(&uParam0);
	}
}

void func_113(bool bParam0)
{
	Global_1939057->f_15 = !bParam0;
}

int func_114()
{
	return 0;
}

void func_115(int iParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, 1, 0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_116()
{
	if (Global_1070355->f_21175 >= 0f)
	{
		Global_1070355->f_21175 = -1f;
	}
}

void func_117(var uParam0)
{
	var uVar0;

	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
	}
}

bool func_118()
{
	return Global_1070355->f_27136.f_62.f_42 != 0;
}

char* func_119()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

char* func_120()
{
	return "Toast_On";
}

char* func_121()
{
	return "HUD_Toast_Soundset";
}

char* func_122()
{
	return "photograph";
}

char* func_123()
{
	return "rdro_gamemode_transition_sounds";
}

void func_124()
{
	if (!func_185(65536, Local_3225.f_1332))
	{
		return;
	}
	if (!func_185(32768, Local_3225.f_1332))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_352(Local_3225.f_1437, Local_3225.f_1441))
	{
		func_343(32768, Local_3225.f_1332);
	}
}

void func_125()
{
}

void func_126(bool bParam0, bool bParam1)
{
	func_258();
	if (bParam0)
	{
		func_290();
	}
	if (bParam1)
	{
		func_353();
		func_354();
	}
	func_355();
	func_356();
	func_357();
	func_358();
	func_359();
	func_259();
	func_360();
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		if ((func_65(131072) && func_361() == 4) && !func_361() == 10)
		{
			func_362(10);
		}
	}
	else if ((func_65(131072) && func_361() == 4) || func_361() == 10)
	{
		if (!func_361() == 0)
		{
			func_363(0, 0, 0, 1);
		}
	}
}

void func_128()
{
	Global_1099293->f_26.f_25 = { 0f, 0f, 0f };
	Global_1099293->f_26.f_31 = { 0f, 0f, 0f };
	Global_1099293->f_26.f_24 = 1;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 7;
		case 12:
			return 10;
		case 13:
			return 8;
		case 14:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_130(int iParam0)
{
	return Global_1102098->f_935.f_27 == iParam0;
}

void func_131(int iParam0, int iParam1)
{
	if (iParam0 != -1 && (Global_1183537->f_1[iParam0 /*4*/])->f_2 != iParam1)
	{
		(Global_1183537->f_1[iParam0 /*4*/])->f_2 = iParam1;
	}
}

void func_132(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1102098->f_935.f_5[iParam0] = Global_1273882->f_21;
	}
}

void func_133()
{
	if (Global_1102098->f_935.f_27 != -1)
	{
		Global_1102098->f_935.f_27 = -1;
	}
}

bool func_134(int iParam0)
{
	return func_78(Local_3225.f_1334, iParam0);
}

int func_135(int iParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_364(Param2) && !func_365(Param2))
	{
		return 0;
	}
	if (bParam4)
	{
		func_366(Param2, 0, 4, 0);
	}
	else
	{
		func_366(Param2, 0, 0, 0);
	}
	func_367(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 1;
	}
	func_251(iParam0, 128);
	func_251(iParam0, 64);
	return 1;
}

int func_136(int iParam0, var uParam1, struct<2> Param2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_364(Param2) && !func_365(Param2))
	{
		return 0;
	}
	func_366(Param2, 0, 1, 0);
	func_367(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_251(iParam0, 256);
	func_251(iParam0, 64);
	return 1;
}

int func_137(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	if (!func_364(Param1) && !func_365(Param1))
	{
		return 0;
	}
	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) > 1)
		{
			func_368(1);
		}
	}
	if (func_18(iParam0, 32))
	{
		func_366(Param1, 0, 2, 0);
	}
	else
	{
		func_366(Param1, 0, -1, 0);
	}
	func_367(iParam0, Param1);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_251(iParam0, 64);
	return 1;
}

void func_138()
{
	func_369(2048);
}

int func_139(int iParam0, int iParam1)
{
	if (iParam0 == -785841056)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	DECORATOR::DECOR_SET_INT(Global_35, "iFmeLastEventPlayed", iParam1);
	return 1;
}

bool func_140(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_141(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_142(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_143(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_144(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

void func_146(var uParam0, int iParam1)
{
	func_370(uParam0, iParam1);
}

void func_147(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_372(uParam0, func_371(iVar0, 1));
		iVar0++;
	}
}

int func_148(var uParam0, var uParam1)
{
	struct<5> Var0;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1))
	{
		return 0;
	}
	Var0 = *uParam1;
	Var0.f_2 = -668747133;
	Var0.f_3 = Local_3225.f_2;
	Var0.f_4 = joaat("standard");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!func_39(Var0, 217762429, &(uParam1->f_1), 0))
	{
		uParam1->f_1 = 600000000;
	}
	return 1;
}

void func_149(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	vector3 vVar9;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;

	if (func_373(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0 = Local_2695;
		Var0.f_2 = 439583753;
		Var0.f_3 = iParam1;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
		iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar7 = 0;
		while (iVar7 <= (iVar6 - 1))
		{
			Var0.f_1 = uVar5;
			Var0.f_3 = iParam1;
			Var0.f_4 = iVar7;
			Var0.f_2 = -1678548701;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			uVar8 = Var0.f_1;
			vVar9 = { 0f, 0f, 0f };
			iVar12 = -1;
			bVar13 = false;
			bVar14 = false;
			iVar15 = -1;
			iVar16 = -1;
			Var0.f_2 = -828272613;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				if (!func_143(Var0, -1049349821, &vVar9, 1))
				{
				}
				if (!func_40(Var0, 179535921, &iVar12, 1))
				{
				}
				if (!func_42(Var0, 2011932436, &bVar13, 0))
				{
				}
				if (!func_42(Var0, -1678866018, &bVar14, 0))
				{
				}
				if (!func_39(Var0, 483086319, &iVar15, 0))
				{
				}
				if (!func_39(Var0, 1789390703, &iVar16, 0))
				{
				}
			}
			vVar17 = { 0f, 0f, 0f };
			fVar20 = 0f;
			Var0.f_1 = uVar8;
			Var0.f_2 = 1907897756;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				if (!func_143(Var0, -1049349821, &vVar17, 1))
				{
				}
				if (!func_142(Var0, 1914071458, &fVar20, 1))
				{
				}
			}
			*(uParam0->f_9[iVar7 /*7*/]) = { vVar9 };
			(uParam0->f_9[iVar7 /*7*/])->f_3 = iVar12;
			if (bVar13)
			{
				func_374(iVar7, 1);
			}
			if (bVar14)
			{
				func_374(iVar7, 2);
			}
			if (iVar15 > 0)
			{
				(uParam0->f_9[iVar7 /*7*/])->f_4 = iVar15;
			}
			if (iVar16 > 0)
			{
				(uParam0->f_9[iVar7 /*7*/])->f_5 = iVar16;
			}
			*(uParam0->f_325[iVar7 /*4*/]) = { vVar17 };
			(uParam0->f_325[iVar7 /*4*/])->f_3 = fVar20;
			iVar7++;
		}
	}
}

int func_150(var uParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;

	if (func_373(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0.f_2 = -784532701;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
		iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar7 = 0;
		while (iVar7 <= (iVar6 - 1))
		{
			Var0.f_1 = uVar5;
			Var0.f_3 = iVar7;
			Var0.f_2 = 653187835;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			if (!func_143(Var0, -1049349821, &((uParam0->f_1025[iVar7 /*14*/])->f_1), 1))
			{
			}
			if (!func_143(Var0, 1276750075, &((uParam0->f_1025[iVar7 /*14*/])->f_4), 1))
			{
			}
			if (!func_142(Var0, 1726885030, &((uParam0->f_1025[iVar7 /*14*/])->f_7), 1))
			{
			}
			if (!func_42(Var0, -946156189, &((uParam0->f_1025[iVar7 /*14*/])->f_8), 1))
			{
			}
			if (!func_42(Var0, -204185654, &((uParam0->f_1025[iVar7 /*14*/])->f_9), 1))
			{
			}
			if (!func_143(Var0, -2049688002, &((uParam0->f_1025[iVar7 /*14*/])->f_10), 0))
			{
			}
			if (!func_142(Var0, -202007812, &((uParam0->f_1025[iVar7 /*14*/])->f_13), 0))
			{
			}
			iVar7++;
		}
	}
	return 1;
}

void func_151(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (&Local_3032[iParam1 /*6*/] != iParam0)
	{
		if (iParam0 == 0 && &Local_3032[iParam1 /*6*/] == 2)
		{
			func_137(Local_3225, Local_3225.f_7, 1);
		}
		Local_3032[iParam1 /*6*/] = iParam0;
	}
}

bool func_152()
{
	return Global_1572887->f_106.f_75 != 1;
}

int func_153(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	return 0;
}

struct<2> func_155()
{
	if (Global_1182844->f_129 <= 0)
	{
		return func_375(0);
	}
	if (Global_1182844->f_130 < 0 || Global_1182844->f_131 == 0)
	{
		return func_375(0);
	}
	return ((*Global_1182844)[Global_1182844->f_130 /*4*/])->f_1;
}

bool func_156(int iParam0)
{
	return &Local_3032[iParam0 /*6*/] == 2;
}

int func_157(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (Global_1131373->f_4641.f_676 == iParam0)
	{
		return 1;
	}
	Global_1131373->f_4641.f_671.f_1 = 0;
	Global_1131373->f_4641.f_671.f_2 = 1613014828;
	Global_1131373->f_4641.f_671.f_3 = iParam0;
	Global_1131373->f_4641.f_671.f_4 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1131373->f_4641.f_671)))
	{
		return 0;
	}
	Global_1131373->f_4641.f_676 = iParam0;
	iVar4 = 0;
	while (iVar4 < 99)
	{
		iVar2 = func_376(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1131373->f_4641.f_671.f_4 = iVar1;
				Global_1131373->f_4641.f_671.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1131373->f_4641.f_671)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_377(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1131373->f_4641.f_671.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1131373->f_4641.f_671)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1131373->f_4641.f_2[func_378(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_158()
{
	if (func_134(512))
	{
		return 0;
	}
	if (((Local_3225.f_9 == -785841056 && Local_3225.f_1 == 13) && func_301()) && !func_134(512))
	{
		func_379();
		return 1;
	}
	if (Local_3225.f_9 == -785841056 && func_380(Global_35))
	{
		func_381(&(Local_3225.f_1270), 1);
		return 1;
	}
	if ((Local_3225.f_9 == -785841056 && func_382(&(Local_3225.f_1270))) && func_383(&(Local_3225.f_1270)) < 2f)
	{
		return 1;
	}
	return 0;
}

bool func_159(var uParam0)
{
	return func_384(*uParam0, 1);
}

void func_160(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1954462->f_1465.f_117.f_12 = iParam13;
	func_385(&(Global_1954462->f_1465.f_117), Param1, Param1.f_1);
	func_386(&(Global_1954462->f_1465.f_117), Param1.f_2, Param1.f_3);
	func_387(&(Global_1954462->f_1465.f_117), Param1.f_4, Param1.f_5);
	func_388(&(Global_1954462->f_1465.f_117), Param1.f_6, Param1.f_7);
	func_389(&(Global_1954462->f_1465.f_117), Param1.f_8, Param1.f_9);
	func_390(&(Global_1954462->f_1465.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_391(uParam0);
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_162(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_392(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_391(uParam0);
}

void func_163(var uParam0, int iParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = iParam1;
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_2 = 1;
	uParam0->f_21 = iParam1;
}

void func_165(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_393(uParam0, Param1, iParam4);
		func_168(111);
	}
	else
	{
		Global_1131373->f_5583 = { *uParam0 };
		Global_1131373->f_5583.f_13 = { Param1 };
		func_169(111);
	}
}

void func_166()
{
	bool bVar0;

	bVar0 = false;
	if (func_394(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0, 0) > 0)
	{
		bVar0 = true;
	}
	INVENTORY::_0x644CCB76A76CFBD6(1, 1, 1, 1, 1, 1);
	if (bVar0)
	{
		func_395(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 752097756);
		WEAPON::_0x83B8D50EB9446BBA(Global_35, 1);
	}
	if (Local_3225.f_1 == 12)
	{
		if (!func_395(201475512, 1, 752097756))
		{
		}
	}
	func_43(512);
	func_396();
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_397(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_398())
	{
		return func_397(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_397(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_168(int iParam0)
{
	if (func_399(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_400(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case -1900781664:
			return 8;
		case -824858074:
			return 6;
		case -79540972:
			return 3;
		case 2063714806:
			return 10;
		default:
			break;
	}
	return 0;
}

Vector3 func_171(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0.x = 0;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 2:
			vVar0.x = 0;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 3:
			vVar0.x = 0;
			vVar0.f_1 = 2;
			vVar0.f_2 = 0;
			break;
		case 4:
			vVar0.x = 0;
			vVar0.f_1 = 3;
			vVar0.f_2 = 0;
			break;
		case 5:
			vVar0.x = 0;
			vVar0.f_1 = 4;
			vVar0.f_2 = 0;
			break;
		case 6:
			vVar0.x = 0;
			vVar0.f_1 = 5;
			vVar0.f_2 = 0;
			break;
		case 7:
			vVar0.x = 1;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 8:
			vVar0.x = 2;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 9:
			vVar0.x = 24;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 10:
			vVar0.x = 24;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 11:
			vVar0.x = 23;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 12:
			vVar0.x = 3;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 13:
			vVar0.x = 3;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 14:
			vVar0.x = 3;
			vVar0.f_1 = 2;
			vVar0.f_2 = 1;
			break;
		case 15:
			vVar0.x = 3;
			vVar0.f_1 = 3;
			vVar0.f_2 = 1;
			break;
		case 16:
			vVar0.x = 3;
			vVar0.f_1 = 4;
			vVar0.f_2 = 1;
			break;
		case 17:
			vVar0.x = 3;
			vVar0.f_1 = 5;
			vVar0.f_2 = 1;
			break;
		case 18:
			vVar0.x = 3;
			vVar0.f_1 = 6;
			vVar0.f_2 = 1;
			break;
		case 19:
			vVar0.x = 3;
			vVar0.f_1 = 7;
			vVar0.f_2 = 1;
			break;
		default:
			break;
	}
	return vVar0;
}

void func_172(var uParam0)
{
}

void func_173(int iParam0)
{
	func_146(&(Local_3225.f_1335), iParam0);
}

void func_174()
{
	func_35(227643027);
	func_401(&(Local_3225.f_1020), 1, 0);
	func_402(&(Local_3225.f_1020), 0, 0);
	func_403(&(Local_3225.f_1020), 0, 0);
	func_401(&(Local_3225.f_1020), 1, 1);
	func_404(&(Local_3225.f_1020), -250506368 /* GXTEntry: "Train" */, 1);
	func_406(&(Local_3225.f_1020), func_405(-250506368 /* GXTEntry: "Train" */), 1);
	func_407(&(Local_3225.f_1020), 0f, 1);
	func_408(&(Local_3225.f_1020), 1, 1);
}

void func_175()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 37)
	{
		(Local_2695.f_2[iVar0 /*3*/])->f_2 = -1;
		iVar0++;
	}
}

void func_176(int iParam0)
{
	if (func_409(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

void func_177(int iParam0)
{
	if (!func_410(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 - (Global_1099293->f_26.f_9 && iParam0));
}

int func_178()
{
	return 10208;
}

bool func_179(int iParam0)
{
	return (Global_1130300->f_2[iParam0 /*17*/])->f_1 != 0;
}

int func_180(int iParam0)
{
	return (Global_1130300->f_2[iParam0 /*17*/])->f_1;
}

int func_181()
{
	return 1758415199;
}

int func_182(int iParam0)
{
	struct<13> Var0;

	if (!func_411(iParam0))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 2;
		Var0.f_5 = iParam0;
		return func_413(&Var0, func_412(0, 8));
	}
	return 1;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070355->f_634.f_601;
		case 3:
			return Global_1070355->f_634.f_2103;
		case 4:
			return Global_1070355->f_634.f_12605;
		case 5:
			return Global_1070355->f_634.f_12907;
		case 6:
			return Global_1070355->f_634.f_15909;
		case 7:
			return Global_1070355->f_634.f_15980;
		case 8:
			return Global_1070355->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

bool func_185(int iParam0, int iParam1)
{
	return func_78((Local_3032[iParam1 /*6*/])->f_1, iParam0);
}

bool func_186(int iParam0)
{
	return func_78(Local_2982.f_13, iParam0);
}

int func_187()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	if (func_179(0))
	{
		bVar1 = true;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!func_415(func_414(Local_3225.f_2)))
		{
			iVar0 = 0;
		}
		iVar2++;
	}
	if (!func_415(func_416()))
	{
		iVar0 = 0;
	}
	if (!func_415(func_417()))
	{
		iVar0 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		if (!func_415(func_418()))
		{
			iVar0 = 0;
		}
		iVar2++;
	}
	if (!bVar1)
	{
		if (!func_419(Local_3225.f_2, &(Local_2695.f_114), &(Local_13.f_1156)))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_188(int iParam0)
{
	func_146(&(Local_2982.f_13), iParam0);
}

void func_189()
{
}

void func_190(int iParam0)
{
	Local_2982 = iParam0;
}

int func_191()
{
	if (!func_420(1, Local_3225.f_1332))
	{
		if (Local_13.f_1156 == -1 || (MISC::GET_GAME_TIMER() - Local_13.f_1156) > Global_1901929->f_295.f_178)
		{
			if (Local_13.f_1156 == -1)
			{
			}
			func_190(8);
		}
		return 0;
	}
	else if (func_421())
	{
		return 1;
	}
	return 0;
}

int func_192(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_78((Local_3032[iVar0 /*6*/])->f_1, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1 || !func_159(uParam0))
	{
		func_210(uParam0);
	}
}

void func_194()
{
	if (!func_422(4) && func_423())
	{
		if (func_424(0))
		{
			func_425(4);
		}
	}
	if (!func_422(2))
	{
		if (func_426())
		{
			func_425(2);
		}
	}
}

int func_195(var uParam0)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	if (func_427(uParam0))
	{
		return uParam0->f_2;
	}
	return func_428(uParam0->f_1);
}

int func_196()
{
	return 10000;
}

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_3032[iVar2 /*6*/] >= iParam0)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_198(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_429(uParam0, 1);
	func_430(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_199()
{
	return 3000;
}

int func_200()
{
	return 1;
}

void func_201()
{
	if (!func_159(&(Local_2982.f_4)))
	{
		func_193(&(Local_2982.f_4), 0);
	}
}

void func_202(bool bParam0, int iParam1)
{
	if (!bParam0 && !func_431(2, 30))
	{
		return;
	}
	func_433(func_432(iParam1));
}

void func_203(bool bParam0)
{
	int iVar0;

	if (!bParam0 && !func_431(2, 60))
	{
		return;
	}
	Local_2982.f_14++;
	iVar0 = func_197(2);
	Local_2982.f_15 = (Local_2982.f_15 + iVar0);
}

void func_204()
{
	func_434(0, 1);
	func_435(0);
	func_436(0, "MOVING");
}

void func_205()
{
	func_203(1);
	func_437();
	func_190(6);
}

void func_206(bool bParam0)
{
	int iVar0;

	if (!func_186(64))
	{
		if (Local_3225.f_1387 == joaat("standard") && (Local_3225.f_9 == joaat("standard") || Local_3225.f_9 == joaat("themed")))
		{
			iVar0 = func_438(2);
			if (iVar0 <= 1)
			{
				func_188(64);
				if (bParam0)
				{
					func_188(128);
				}
			}
		}
		else if ((Local_3225.f_1387 == 1839318411 && Local_3225.f_9 == joaat("standard")) && Local_3225.f_3 == 1455184052)
		{
			func_188(64);
			if (bParam0)
			{
				func_188(128);
			}
		}
	}
}

void func_207()
{
	if (Local_3225.f_9 == 1038512660 || Local_3225.f_9 == -785841056)
	{
		return;
	}
	if (Local_3225.f_13.f_11.f_2 == 0)
	{
		return;
	}
	if (func_318(&(Local_3225.f_13), 0) > 0f && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_3225.f_13.f_210[0 /*23*/])->f_14))
	{
		func_439((Local_3225.f_13.f_210[0 /*23*/])->f_14);
	}
}

int func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	func_440();
	func_441();
	func_442();
	func_443();
	func_444();
	if (Local_13.f_1173 >= 2 && Local_13.f_1173 <= 5)
	{
		iVar0 = Local_13.f_1159;
		iVar1 = func_445(iVar0);
		iVar2 = Local_2695.f_277;
		if (iVar1 == 18 && iVar2 <= 0)
		{
			if (!func_422(1024))
			{
				func_425(1024);
			}
		}
	}
	if (func_422(128))
	{
		bVar3 = true;
	}
	else if (!func_446(8))
	{
		if (func_447() == 0)
		{
			bVar3 = true;
			func_448(0f);
			Local_2695.f_277 = 0;
		}
		if (func_209() > 5000 && Local_3225.f_1267 <= 0)
		{
			bVar3 = true;
			func_448(0f);
			Local_2695.f_277 = 0;
		}
	}
	if (func_422(1024))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (!func_159(&(Local_2982.f_4)))
	{
		return 0;
	}
	return func_195(&(Local_2982.f_4));
}

void func_210(var uParam0)
{
	func_198(uParam0, 0);
}

void func_211()
{
	bool bVar0;

	if (Local_3225.f_9 == 1038512660)
	{
		func_449(&bVar0);
		if (bVar0)
		{
			func_188(256);
		}
	}
	else if (Local_3225.f_9 == -785841056)
	{
		if (Local_2982.f_12 != 1 && Local_2982.f_12 != 4)
		{
			func_450();
			func_433(0);
		}
	}
	else
	{
		func_450();
		if (func_186(2048))
		{
			func_433(0);
		}
	}
}

bool func_212()
{
	return func_451();
}

bool func_213()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

void func_214(int iParam0)
{
	func_452(&(Local_3225.f_1335), iParam0);
}

int func_215()
{
	switch (Local_3225.f_1)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 1:
			return func_453();
		default:
			break;
	}
	return 0;
}

void func_216()
{
	Global_1131373->f_6289.f_22 = MISC::GET_FRAME_COUNT();
}

int func_217()
{
	switch (Local_3225.f_1)
	{
		case 11:
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_218(int iParam0)
{
	if (!func_454(Global_1131373->f_6289.f_97, iParam0))
	{
		func_146(&(Global_1131373->f_6289.f_97), iParam0);
	}
}

int func_219()
{
	return Global_1102098->f_34.f_772;
}

void func_220(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_73(Param1))
		{
			return;
		}
		if (func_455(Param1, 1))
		{
			return;
		}
		if (func_456(Param1))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_457(iVar0);
	if (Global_1102098->f_34.f_353[iVar0 /*6*/] && (Global_1102098->f_34.f_353[iVar0 /*6*/])->f_5 == -1)
	{
		return;
	}
	if (!func_365(Param1) || !bParam3)
	{
		Global_1102098->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_5 = 5;
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1273882->f_21;
		if (bParam4)
		{
			((*Global_1264881)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
		if (bParam3)
		{
			(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		}
		*(Global_1102098->f_34.f_546[iVar0 /*7*/]) = { func_458(iParam0) };
	}
	else
	{
		Global_1102098->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_5 = -1;
		(Global_1102098->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1273882->f_21;
		*(Global_1102098->f_34.f_546[iVar0 /*7*/]) = { func_458(iParam0) };
		if (bParam4)
		{
			((*Global_1264881)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
	}
	if ((Global_1102098->f_34[iVar0 /*11*/])->f_6)
	{
		func_459(iVar0);
	}
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		Global_1903928->f_485[1] = 1;
	}
	Global_1903928->f_485[0] = 1;
	MISC::SET_BIT(&(Global_1956121->f_1), 0);
}

void func_222(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 56:
			func_460(iParam0);
			break;
		case 3:
			func_461(iParam0);
			break;
	}
}

void func_223(int iParam0)
{
	struct<10> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	if ((iVar12 == -116590068 && func_462(&(Local_3225.f_1362))) && func_463(&(Local_3225.f_1362), &Var0))
	{
		func_464(&(Local_3225.f_1362));
		Local_3225.f_1282++;
		Local_3225.f_1283 = (Local_3225.f_1283 + Var0.f_8);
		Local_3225.f_1285 = (Local_3225.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_3225.f_1, Local_3225.f_3, &iVar13))
			{
				func_465(func_47(-1901704681, iVar13), Var0.f_8);
			}
		}
	}
	if ((iVar12 == -2069558689 && func_462(&(Local_3225.f_1366))) && func_463(&(Local_3225.f_1366), &Var0))
	{
		func_464(&(Local_3225.f_1366));
		Local_3225.f_1282++;
		Local_3225.f_1283 = (Local_3225.f_1283 + Var0.f_8);
		Local_3225.f_1285 = (Local_3225.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_3225.f_1, Local_3225.f_3, &iVar14))
			{
				func_465(func_47(-1901704681, iVar14), Var0.f_8);
			}
		}
	}
	if ((iVar12 == 1172622856 && func_462(&(Local_3225.f_1370))) && func_463(&(Local_3225.f_1370), &Var0))
	{
		func_464(&(Local_3225.f_1370));
		Local_3225.f_1282++;
		Local_3225.f_1283 = (Local_3225.f_1283 + Var0.f_8);
		Local_3225.f_1285 = (Local_3225.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_3225.f_1, Local_3225.f_3, &iVar15))
			{
				func_465(func_47(-1901704681, iVar15), Var0.f_8);
			}
		}
	}
	if ((((((iVar12 == -309190573 || iVar12 == 1440367028) || iVar12 == -697003817) || iVar12 == -252981337) || iVar12 == -926779719) || iVar12 == 1387750829) || ((iVar12 == 1519614621 && func_462(&(Local_3225.f_1374))) && func_463(&(Local_3225.f_1374), &Var0)))
	{
		func_464(&(Local_3225.f_1374));
		Local_3225.f_1282++;
	}
	if (((iVar12 != 0 && iVar12 == Local_3225.f_1382) && func_462(&(Local_3225.f_1378))) && func_463(&(Local_3225.f_1378), &Var0))
	{
		func_464(&(Local_3225.f_1378));
		Local_3225.f_1282++;
		Local_3225.f_1284 = (Local_3225.f_1284 + Var0.f_9);
		if (Var0.f_9 > 0)
		{
			if (func_46(Local_3225.f_1, Local_3225.f_3, &iVar16))
			{
				func_465(func_47(1532301684, iVar16), Var0.f_9);
			}
		}
	}
}

void func_224()
{
	func_466();
	func_467();
	func_225(Local_2982);
}

void func_225(int iParam0)
{
	Local_3225.f_10 = iParam0;
}

void func_226()
{
	if (!func_431(1, 30))
	{
		return;
	}
	func_52();
}

int func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;

	iVar0 = 1;
	HUD::TEXT_BLOCK_REQUEST(func_351());
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_351()))
	{
		iVar0 = 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		HUD::TEXT_BLOCK_REQUEST(&uParam0);
		if (!HUD::TEXT_BLOCK_IS_LOADED(&uParam0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char* func_228(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

char* func_229()
{
	return "LIVE";
}

int func_230(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, 1) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return 0;
}

int func_231(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return 1;
}

int func_232()
{
	int iVar0;

	iVar0 = 1;
	PROPSET::_REQUEST_PROPSET_2(func_468());
	if (!PROPSET::_HAS_PROPSET_LOADED_2(func_468()))
	{
		iVar0 = 0;
	}
	if (!func_470(func_469(Local_3225.f_2, 0), Local_2695.f_272[0], Local_13.f_1170[0], 0, 0))
	{
		iVar0 = 0;
	}
	if (!func_470(func_469(Local_3225.f_2, 1), Local_2695.f_272[1], Local_13.f_1170[1], 0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_233(int iParam0, int iParam1)
{
	func_146(&((Local_3032[iParam1 /*6*/])->f_1), iParam0);
}

int func_234()
{
	int iVar0;
	float fVar1;

	if (!func_420(1, Local_3225.f_1332))
	{
		iVar0 = func_471(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_451();
			func_472();
			if (VEHICLE::_0xBD3C4A2ED509205E(iVar0))
			{
				fVar1 = func_473(func_170(Local_3225.f_2));
				if (fVar1 != 0f)
				{
					VEHICLE::_0x8EC47DD4300BF063(iVar0, fVar1);
				}
				func_474();
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_434(0, 1);
				}
				func_475(1);
			}
		}
	}
	else if (func_476(1))
	{
		func_477(Local_3225.f_2);
		return 1;
	}
	return 0;
}

void func_235()
{
}

void func_236()
{
	func_226();
	func_478();
	func_479();
	func_480();
	func_481();
	func_482();
	func_483();
	func_275();
	func_484();
	if (Local_3225.f_9 != -785841056)
	{
		func_485();
		func_486();
	}
	else
	{
		func_487();
	}
	func_488();
}

void func_237()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<8> Var5;
	struct<8> Var13;
	struct<8> Var21;
	struct<8> Var29;
	char cVar37[64];

	NETWORK::_0x236905C700FDB54D();
	if (!func_156(Local_3225.f_1332))
	{
		bVar0 = true;
		if (Local_3225.f_9 == -785841056 && &Local_3032[Local_3225.f_1332 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_126(1, bVar0);
		return;
	}
	if (func_159(&(Local_2982.f_1)))
	{
		iVar1 = func_195(&(Local_2982.f_1));
		iVar2 = (Local_3225.f_1268 - iVar1);
		iVar3 = (iVar2 / 1000);
		if (iVar3 < 21)
		{
			func_250();
		}
		if (func_489())
		{
			func_490(&(Local_3225.f_1005), iVar2, 0, -1, 0);
			if (iVar3 < 4)
			{
				if (!func_65(16))
				{
					func_173(16);
					GRAPHICS::ANIMPOSTFX_PLAY(func_56());
					func_491(&(Local_3225.f_1260));
				}
				if (iVar3 < 1)
				{
					iVar3 = 1;
				}
			}
		}
	}
	if (!func_295(Local_3225.f_1288))
	{
		func_492(0, "", -1, 0);
	}
	if (((func_65(16) || !func_493(255)) || !ENTITY::DOES_ENTITY_EXIST(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_492(0, "", -1, 0);
	}
	else if (((func_68(Local_3225.f_1396) || (func_68(Local_3225.f_1399) && func_494(Global_36, Local_3225.f_1396) <= Local_3225.f_1293)) || (!func_68(Local_3225.f_1399) && func_494(Global_36, Local_3225.f_1399) <= Local_3225.f_1293)) || !func_495(Local_3225.f_1))
	{
		if (Local_3225.f_1266 != 4)
		{
			if (Local_3225.f_9 == -785841056)
			{
				sVar4 = func_496();
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					func_492(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_POSSE_VERSUS", &(Local_3225.f_1338)), -1, 0);
				}
				else
				{
					func_492(4, sVar4, -1, 0);
				}
			}
			else
			{
				Var5 = { Local_3225.f_1346 };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
				{
					Var5 = { Local_3225.f_1338 };
				}
				if (func_65(1048576))
				{
					func_492(4, MISC::_CREATE_VAR_STRING(2, "FME_OBJECTIVE_WAIT_ST"), -1, 0);
				}
				else if (Local_3225.f_1 == 1)
				{
					func_492(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_CHALLENGES", &Var5), -1, 0);
				}
				else
				{
					func_492(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT", &Var5), -1, 0);
				}
			}
		}
	}
	else if ((func_134(131072) && !func_134(1048576)) && func_329(Local_3225.f_1296))
	{
		if (Local_3225.f_1266 != 2)
		{
			func_492(2, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_FAST_TRAVEL_POSSE_VERSUS", &(Local_3225.f_1338)), 7500, 0);
			func_43(1048576);
		}
	}
	else if (Local_3225.f_1266 != 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_497()))
		{
			func_492(3, func_497(), -1, 0);
		}
		else if (Local_3225.f_9 == -785841056)
		{
			func_492(3, "FME_OBJECTIVE_ENTER_AREA_POSSE_VERSUS", -1, 0);
		}
		else
		{
			func_492(3, "FME_OBJECTIVE_ENTER_AREA", -1, 0);
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Local_3225.f_1325))
	{
		if (!func_68(Local_3225.f_1396) && func_495(Local_3225.f_1))
		{
			func_498(&(Local_3225.f_1325));
		}
	}
	if (!func_489())
	{
		return;
	}
	if (!func_134(2))
	{
		if (((((func_48(func_499(415667248)) >= func_500() || Local_3225.f_9 != joaat("standard")) || Local_3225.f_9 != joaat("themed")) || func_501()) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))) || _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) < 2)
		{
			func_43(2);
		}
		else if (func_502(Local_3225.f_1289))
		{
			Var13 = { Local_3225.f_1346 };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
			{
				Var13 = { Local_3225.f_1338 };
			}
			Local_3225.f_1289 = func_503(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE", &Var13));
			func_465(func_499(415667248), 1);
			func_43(2);
		}
	}
	else if (!func_134(4))
	{
		if (Local_3225.f_1277 >= func_500())
		{
			func_43(4);
		}
		else if (func_502(Local_3225.f_1289))
		{
			Var21 = { func_504(Local_3225.f_1, Local_3225.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
			{
				Local_3225.f_1289 = func_503(&Var21);
			}
			func_43(4);
		}
	}
	else if (!func_134(8))
	{
		if (Local_3225.f_1277 >= func_500())
		{
			func_43(8);
		}
		else if (func_502(Local_3225.f_1289))
		{
			Var29 = { func_505(Local_3225.f_1, Local_3225.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
			{
				Local_3225.f_1289 = func_503(&Var29);
			}
			func_43(8);
		}
	}
	else if (!func_134(16))
	{
		if (func_134(8388608) && func_502(Local_3225.f_1289))
		{
			StringCopy(&cVar37, func_506(), 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar37))
			{
				Local_3225.f_1289 = func_503(&cVar37);
			}
			func_43(16);
		}
	}
}

int func_238()
{
	if (Global_1070355->f_27136.f_62.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1070355->f_27136.f_105);
	if (iVar1 < Global_1901929->f_1.f_36)
	{
		return 0;
	}
	return 1;
}

void func_240()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	func_507(1, 0, 0);
	func_63(0);
	func_43(2097152);
	func_508(&vVar0, &uVar3, &iVar4);
	if (!func_68(vVar0) && !iVar4 == -1)
	{
		if ((!func_134(134217728) && !func_509(Local_3225.f_1, Local_3225.f_3)) && func_510(Local_3225.f_1, Local_3225.f_3))
		{
			func_511(1, 0);
		}
		func_512(vVar0, uVar3, 1);
	}
	else
	{
		func_513(1, 1);
	}
}

bool func_241(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_242(int iParam0)
{
	func_514(&(Global_1572887->f_106.f_15), iParam0);
}

void func_243(bool bParam0)
{
	if (Global_1070355->f_27244.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1070355->f_27244.f_1 == 0)
	{
		return;
	}
	func_514(&(Global_1070355->f_27244.f_2), 2);
}

void func_244(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1070355->f_27136.f_62.f_28 = 1;
		Global_1070355->f_27136.f_62.f_29 = iParam3;
		Global_1070355->f_27136.f_62.f_26 = iParam6;
		Global_1070355->f_27136.f_62.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1070355->f_27136.f_62.f_8), 18);
		}
	}
	else
	{
		Global_1070355->f_27136.f_62.f_30 = 1;
		Global_1070355->f_27136.f_62.f_33 = !bParam1;
		Global_1070355->f_27136.f_62.f_31 = iParam2;
		Global_1070355->f_27136.f_62.f_32 = iParam4;
		Global_1070355->f_27136.f_62.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1070355->f_27136.f_62.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1070355->f_27136.f_62.f_8), 18);
		}
	}
}

void func_245()
{
	float fVar0;
	float fVar1;

	if (Local_3225.f_9 != -785841056 || !func_495(Local_3225.f_1))
	{
		return;
	}
	if ((!func_156(Local_3225.f_1332) || !func_134(131072)) || func_68(Local_3225.f_1396))
	{
		func_515();
		return;
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35)) || PED::IS_PED_INCAPACITATED(Global_35)) || func_516()) || Global_1915170->f_20142)
	{
		func_515();
		return;
	}
	fVar0 = func_494(Global_36, Local_3225.f_1396);
	fVar1 = (Local_3225.f_1294 + 35f);
	if (Local_3225.f_10 > 3)
	{
		if (func_134(262144) || (Local_3225.f_1293 > 0f && fVar0 <= fVar1))
		{
			func_337(131072);
			func_515();
			return;
		}
	}
	if (fVar0 < fVar1)
	{
		func_515();
		return;
	}
	if (!func_329(Local_3225.f_1296) && !PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		Local_3225.f_1296 = func_517("FM_FAST_TRAVEL", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		if (!func_134(524288))
		{
			func_43(524288);
		}
	}
	if (func_329(Local_3225.f_1296))
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			if (func_518(Local_3225.f_1296, 0))
			{
				func_334(&(Local_3225.f_1296), 0, 1);
			}
		}
		else
		{
			if (!func_518(Local_3225.f_1296, 0))
			{
				func_333(Local_3225.f_1296, 1, 1, 1);
			}
			if (func_519(Local_3225.f_1296, 0))
			{
				func_513(1, 1);
				func_43(262144);
			}
		}
		if (Local_3225.f_1266 == 2 && func_520(Local_3225.f_1288))
		{
			func_521(Local_3225.f_1296, 0, 1);
		}
		else
		{
			func_521(Local_3225.f_1296, 1, 1);
		}
	}
}

void func_246()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_156(Local_3225.f_1332))
	{
		return;
	}
	if (Local_3225.f_9 != joaat("standard") && Local_3225.f_9 != joaat("themed"))
	{
		return;
	}
	if (func_68(Local_3225.f_1399))
	{
		return;
	}
	if (!func_522() > 0f)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_3225.f_1327))
	{
		Local_3225.f_1327 = MAP::BLIP_ADD_FOR_RADIUS(-188007767, Local_3225.f_1399, func_522());
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_3225.f_1327, Local_3225.f_1399);
	}
	if (func_159(&(Local_3225.f_1307)) && func_195(&(Local_3225.f_1307)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_3225.f_1260) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_1260.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_1260.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_523()))
		{
			func_303(&(Local_3225.f_1307));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35)) || func_62(255)) || func_295(Local_3225.f_1287)) || func_159(&(Local_3225.f_1307)))
	{
		func_339(4);
		func_524();
		func_258();
		return;
	}
	if (func_525())
	{
		func_526(4);
		if (!func_159(&(Local_3225.f_1304)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_119(), true, 0);
			func_492(5, "FME_OBJECTIVE_ABANDON_LOBBY_WARNING", -1, 0);
			func_210(&(Local_3225.f_1304));
		}
		else
		{
			iVar0 = func_196();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_195(&(Local_3225.f_1304)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_3225.f_1399 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_527(&(Local_3225.f_1260), cVar1, vVar2, func_522(), 1, 0, 0, 1);
			if (func_195(&(Local_3225.f_1304)) > iVar0)
			{
				func_528();
				func_529(Global_35, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_119(), true, 0);
					func_339(4);
					func_524();
					func_258();
				}
			}
		}
	}
	else
	{
		if (Local_3225.f_1266 == 5)
		{
			func_210(&(Local_3225.f_1307));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_119(), true, 0);
		}
		func_249();
	}
}

void func_247()
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	if (func_185(65536, Local_3225.f_1332))
	{
		return;
	}
	iVar0 = func_530();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == joaat("weapon_fishingrod"))
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (!WEAPON::_0xF29A186ED428B552(Global_35, iVar0))
	{
		return;
	}
	WEAPON::_0x6929E22158E52265(Global_35, 0, &Var1);
	WEAPON::_0x6929E22158E52265(Global_35, 1, &Var5);
	if (func_352(Var1, Var5))
	{
		func_233(65536, Local_3225.f_1332);
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	func_474();
	func_472();
	if (func_422(4) && !func_446(16))
	{
		if (func_531(0, Local_3225.f_1332))
		{
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				iVar5 = func_532(0, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && VEHICLE::IS_VEHICLE_MODEL(iVar5, joaat("privateflatcar01x")))
				{
					iVar4 = PROPSET::_0xCE2ACD6F602803E5(iVar5);
					iVar3 = ITEMSET::CREATE_ITEMSET(true);
					iVar2 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar4, iVar3, 0, false, false);
					iVar1 = 0;
					while (iVar1 <= (iVar2 - 1))
					{
						iVar6 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar3));
						if (ENTITY::GET_ENTITY_MODEL(iVar6) == func_418())
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
							ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
						}
						iVar1++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar3);
				}
				iVar0++;
			}
			func_533(16);
		}
	}
	if (!func_446(256) && func_502(Local_3225.f_1289))
	{
		Local_3225.f_1289 = func_503("FME_ST_DESC");
		func_533(256);
	}
	else if (!func_446(512) && func_502(Local_3225.f_1289))
	{
		Local_3225.f_1289 = func_503(MISC::_CREATE_VAR_STRING(10, "FME_ST_DESC_2", func_535(PLAYER::GET_PLAYER_NAME(func_534()), joaat("COLOR_PURE_WHITE"))));
		func_533(512);
	}
	else if (!func_446(1024) && func_502(Local_3225.f_1289))
	{
		Local_3225.f_1289 = func_503("FME_ST_DESC_3");
		func_533(1024);
	}
	else if (!func_446(2048) && func_502(Local_3225.f_1289))
	{
		Local_3225.f_1289 = func_503("FME_ST_DESC_4");
		func_533(2048);
	}
	func_536(8192, 60000);
	func_536(16384, 10000);
}

void func_249()
{
	if (func_68(Local_3225.f_1399))
	{
		return;
	}
	if (Local_3225.f_1266 == 5)
	{
		if (func_295(Local_3225.f_1289))
		{
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1289, 0);
		}
		func_492(0, "", -1, 0);
	}
	func_339(4);
	func_524();
	func_258();
}

void func_250()
{
	if (Local_3225.f_9 == -785841056)
	{
		return;
	}
	if (func_134(8192))
	{
		return;
	}
	if (!func_134(4194304))
	{
		NETWORK::_0xE546BDA1B3E288EE(512);
		func_43(4194304);
	}
}

void func_251(int iParam0, int iParam1)
{
	func_146(&((Global_1183537->f_66[iParam0 /*20*/])->f_6), iParam1);
}

int func_252()
{
	return 1;
}

void func_253()
{
	Local_3225.f_1279 = func_48(func_537(-190907223));
}

void func_254()
{
	Local_3225.f_1280 = func_48(func_537(-1048906573));
}

int func_255()
{
	if (Local_3225.f_1387 == joaat("standard") && func_186(64))
	{
		func_41(-1477057661);
		func_52();
		func_256();
		return 1;
	}
	return 0;
}

void func_256()
{
	switch (Local_3225.f_1387)
	{
		case joaat("standard"):
		case -669315698:
			func_538(0);
			break;
		case 142723591:
		case 1229355466:
			func_539();
			break;
		case -1893775542:
		case -1869754940:
			func_540();
			break;
		case -1477057661:
		case -1323241207:
			func_538(1);
			break;
		case -1130541276:
		case 1839318411:
			func_541(1);
			break;
	}
}

void func_257(var uParam0, bool bParam1)
{
	struct<14> Var0;

	if (uParam0->f_2 > 0)
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(12, 1, 0);
		if (bParam1)
		{
			func_292(uParam0);
			func_542();
		}
		func_543(uParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_544(0);
		func_545(0);
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(uParam0, &Var0, 15);
	}
}

void func_258()
{
	func_546(&(Local_3225.f_1260), 1);
}

void func_259()
{
	if (MAP::DOES_BLIP_EXIST(Local_3225.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_3225.f_1325));
	}
	if (MAP::DOES_BLIP_EXIST(Local_3225.f_1326))
	{
		MAP::REMOVE_BLIP(&(Local_3225.f_1326));
	}
	if (MAP::DOES_BLIP_EXIST(Local_3225.f_1327))
	{
		MAP::REMOVE_BLIP(&(Local_3225.f_1327));
	}
}

void func_260()
{
	func_547(3072, 1);
	func_548();
}

void func_261()
{
	int iVar0;

	iVar0 = Local_3225.f_1269;
	if (func_159(&(Local_2982.f_4)))
	{
		iVar0 = (iVar0 - func_195(&(Local_2982.f_4)));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 < 15000)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	Local_3225.f_1267 = iVar0;
}

void func_262()
{
	bool bVar0;
	struct<8> Var1;
	bool bVar9;
	struct<8> Var10;
	bool bVar18;
	char cVar19[64];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;

	func_286();
	if (!func_156(Local_3225.f_1332))
	{
		bVar0 = true;
		if (Local_3225.f_9 == -785841056 && &Local_3032[Local_3225.f_1332 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_126(1, bVar0);
		return;
	}
	if (!func_65(2))
	{
		if (func_549())
		{
			func_281(func_279(), func_280(), 0, 0, 30000);
		}
		Var1 = { func_550() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringCopy(&Var1, func_551(Local_3225.f_1338), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_552()))
		{
			Var10 = { func_553(Local_3225.f_1, Local_3225.f_3) };
		}
		else
		{
			bVar9 = true;
		}
		if (func_186(64))
		{
			iVar27 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
			if (_NAMESPACE26::_0x0F99F6436528A089(iVar27) && _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(iVar27) > 1)
			{
				StringCopy(&cVar19, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 64);
				func_173(8);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_554()))
		{
			bVar18 = true;
		}
		if (bVar9 || bVar18)
		{
			if (bVar9 && bVar18)
			{
				Local_3225.f_1287 = func_557(&Var1, func_552(), func_554(), func_555(), func_556());
			}
			else if (bVar9)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					Local_3225.f_1287 = func_558(&Var1, func_552(), func_555(), func_556());
				}
				else
				{
					Local_3225.f_1287 = func_557(&Var1, func_552(), &cVar19, func_555(), func_556());
				}
			}
			else if (bVar18)
			{
				Local_3225.f_1287 = func_557(&Var1, &Var10, func_554(), func_555(), func_556());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
		{
			Local_3225.f_1287 = func_558(&Var1, &Var10, func_555(), func_556());
		}
		else
		{
			Local_3225.f_1287 = func_557(&Var1, &Var10, &cVar19, func_555(), func_556());
		}
		func_173(2);
	}
	else if (!func_65(4))
	{
		if (func_549())
		{
			func_281(func_279(), func_280(), 0, 0, 30000);
		}
		if (!func_295(Local_3225.f_1287))
		{
			func_173(4);
		}
	}
	else
	{
		func_281(func_279(), func_280(), 0, 0, 30000);
		if (((Local_3225.f_1005.f_2 != 2 || Local_3225.f_1005.f_1 != 2) || !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729)) || !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_13.f_11.f_2))
		{
			return;
		}
		if (!func_65(8) && func_186(64))
		{
			if (!func_295(Local_3225.f_1287) && func_502(Local_3225.f_1289))
			{
				iVar28 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
				if (_NAMESPACE26::_0x0F99F6436528A089(iVar28) && _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(iVar28) > 1)
				{
					Var29 = { func_550() };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
					{
						Var29 = { Local_3225.f_1338 };
					}
					Local_3225.f_1287 = func_558(&Var29, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 0, 0);
				}
				func_173(8);
			}
		}
		else if (!func_134(32))
		{
			bVar37 = true;
			bVar38 = false;
			func_559(Local_3225.f_1325, &bVar37, &bVar38);
			if (Local_3225.f_1277 >= func_500() && !bVar38)
			{
				func_43(32);
			}
			else if (!func_295(Local_3225.f_1287) && func_502(Local_3225.f_1289))
			{
				if (bVar37)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_559(Local_3225.f_1325, &bVar37, &bVar38)))
					{
						Local_3225.f_1289 = func_503(func_559(Local_3225.f_1325, &bVar37, &bVar38));
					}
					func_43(32);
				}
			}
		}
		else if (!func_134(128))
		{
			if ((func_48(func_499(-470974965)) >= 5 || !func_297(Local_3225.f_1384)) || !func_560())
			{
				func_43(64);
				func_43(128);
			}
			else if (!func_295(Local_3225.f_1287) && func_502(Local_3225.f_1289))
			{
				if (!func_134(64))
				{
					Local_3225.f_1289 = func_503("FME_HELP_SCOREBOARD_1");
					func_43(64);
				}
				else
				{
					Local_3225.f_1289 = func_503("FME_HELP_SCOREBOARD_2");
					func_465(func_499(-470974965), 1);
					func_43(128);
				}
			}
		}
		else if (!func_134(65536))
		{
			if (func_48(func_499(1769987584)) >= func_500())
			{
				func_43(65536);
			}
			else if ((((func_287() && func_560()) && !func_295(Local_3225.f_1287)) && func_502(Local_3225.f_1289)) && (Local_3032[Local_3225.f_1332 /*6*/])->f_2 > 0f)
			{
				bVar39 = false;
				if (func_280() & 1024 == 1024)
				{
					bVar39 = true;
				}
				if (func_561(bVar39, 1, &iVar40))
				{
					if (!func_159(&(Local_3225.f_1301)))
					{
						func_210(&(Local_3225.f_1301));
					}
					else if (func_195(&(Local_3225.f_1301)) >= 2000)
					{
						Local_3225.f_1289 = func_503(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE_DRAW", func_535(PLAYER::GET_PLAYER_NAME(iVar40), func_562(iVar40, 1, -1, 0))));
						func_465(func_499(1769987584), 1);
						func_43(65536);
					}
				}
				else if (func_159(&(Local_3225.f_1301)))
				{
					func_303(&(Local_3225.f_1301));
				}
			}
		}
	}
}

void func_263()
{
	if (Local_3225.f_9 == -785841056)
	{
		return;
	}
	if (func_156(Local_3225.f_1332))
	{
		func_526(16);
	}
	else
	{
		func_339(16);
	}
}

void func_264()
{
	if (func_156(Local_3225.f_1332))
	{
		func_563();
	}
}

void func_265()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_156(Local_3225.f_1332))
	{
		return;
	}
	if (Local_3225.f_9 != joaat("standard") && Local_3225.f_9 != joaat("themed"))
	{
		return;
	}
	if (func_361() == 4)
	{
		return;
	}
	if (func_68(Local_3225.f_1396))
	{
		return;
	}
	if (!func_564())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_3225.f_1327))
	{
		Local_3225.f_1327 = func_565();
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_3225.f_1327, Local_3225.f_1396);
	}
	if (func_159(&(Local_3225.f_1307)) && func_195(&(Local_3225.f_1307)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_3225.f_1260) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_1260.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_1260.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_523()))
		{
			func_303(&(Local_3225.f_1307));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35)) || func_62(255)) || func_295(Local_3225.f_1287)) || func_159(&(Local_3225.f_1307)))
	{
		func_339(4);
		func_524();
		func_258();
		return;
	}
	if (func_566())
	{
		func_526(4);
		if (!MAP::DOES_BLIP_EXIST(Local_3225.f_1326))
		{
			Local_3225.f_1326 = MAP::BLIP_ADD_FOR_COORDS(408396114, Local_3225.f_1396);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_3225.f_1326, "FME_OBJECTIVE_ABANDON_BLIP_NAME");
			MAP::BLIP_ADD_MODIFIER(Local_3225.f_1326, 231194138);
		}
		else
		{
			MAP::SET_BLIP_COORDS(Local_3225.f_1326, Local_3225.f_1396);
		}
		if (!func_159(&(Local_3225.f_1304)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_119(), true, 0);
			func_492(5, "FME_OBJECTIVE_ABANDON_WARNING", -1, 0);
			func_210(&(Local_3225.f_1304));
		}
		else
		{
			iVar0 = func_567();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_195(&(Local_3225.f_1304)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_3225.f_1396 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_527(&(Local_3225.f_1260), cVar1, vVar2, Local_3225.f_1294, 1, 0, 0, 1);
			if (func_195(&(Local_3225.f_1304)) > iVar0)
			{
				func_528();
				func_529(Global_35, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_119(), true, 0);
					func_339(4);
					func_524();
					func_258();
				}
			}
		}
	}
	else
	{
		if (Local_3225.f_1266 == 5)
		{
			func_210(&(Local_3225.f_1307));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_119(), true, 0);
			if (func_295(Local_3225.f_1289))
			{
				_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1289, 0);
			}
			func_492(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_3225.f_1326))
		{
			MAP::REMOVE_BLIP(&(Local_3225.f_1326));
		}
		func_339(4);
		func_524();
		func_258();
	}
}

int func_266()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 <= (Local_3225.f_1276 - 1))
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar7 = Local_3225.f_1389;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = (Local_3032[iVar7 /*6*/])->f_2;
			fVar1 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_3);
			fVar2 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_5);
			fVar4 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar6));
		}
		func_568(&(Local_3225.f_13), fVar0, iVar6, Local_3225.f_971[iVar7], !func_156(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		Local_3225.f_1389++;
		if (Local_3225.f_1389 >= 32)
		{
			Local_3225.f_1389 = 0;
		}
		iVar8++;
	}
	iVar9 = func_48(func_537(-1048906573));
	iVar9 = (iVar9 - Local_3225.f_1280);
	if (iVar9 != (Local_3032[Local_3225.f_1332 /*6*/])->f_4)
	{
		(Local_3032[Local_3225.f_1332 /*6*/])->f_4 = iVar9;
	}
	func_569(&(Local_3225.f_13));
	return 1;
}

void func_267()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = func_48(func_537(-190907223));
	iVar0 = (iVar0 - Local_3225.f_1279);
	if (iVar0 != (Local_3032[Local_3225.f_1332 /*6*/])->f_3)
	{
		(Local_3032[Local_3225.f_1332 /*6*/])->f_3 = iVar0;
	}
	iVar1 = func_48(func_537(-1048906573));
	iVar1 = (iVar1 - Local_3225.f_1280);
	if (iVar1 != (Local_3032[Local_3225.f_1332 /*6*/])->f_4)
	{
		(Local_3032[Local_3225.f_1332 /*6*/])->f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_3225.f_1389;
		iVar7 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
		iVar8 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar7))
		{
			fVar2 = (Local_3032[iVar9 /*6*/])->f_2;
			fVar3 = BUILTIN::TO_FLOAT((Local_3032[iVar9 /*6*/])->f_3);
			fVar4 = BUILTIN::TO_FLOAT((Local_3032[iVar9 /*6*/])->f_4);
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar7);
			fVar5 = BUILTIN::TO_FLOAT((Local_3032[iVar9 /*6*/])->f_5);
			fVar6 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8));
		}
		func_568(&(Local_3225.f_13), fVar2, iVar8, Local_3225.f_971[iVar9], !func_156(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_3225.f_1389++;
		if (Local_3225.f_1389 >= 32)
		{
			Local_3225.f_1389 = 0;
		}
		iVar10++;
	}
	func_570(&(Local_3225.f_13));
}

void func_268()
{
	char* sVar0;
	int iVar1;

	if ((Local_3225.f_9 == 1038512660 || Local_3225.f_9 == -785841056) || !func_571())
	{
		return;
	}
	if (Local_2982.f_11 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2982.f_11))
	{
		if (Local_2982.f_11 != Local_3225.f_1004)
		{
			if (Local_3225.f_1004 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_3225.f_1004))
			{
				func_572(Local_3225.f_1004);
			}
			if (Local_3225.f_1004 == 255)
			{
			}
			Local_3225.f_1004 = Local_2982.f_11;
			if ((func_156(Local_3225.f_1332) && !func_295(Local_3225.f_1287)) && !func_65(2097152))
			{
				if (Local_3225.f_1004 == PLAYER::PLAYER_ID())
				{
					iVar1 = joaat("COLOR_WHITE");
					sVar0 = "FME_GAME_UPDATE_NEW_LEADER_SELF";
				}
				else
				{
					iVar1 = func_562(Local_3225.f_1004, 1, -1, 0);
					sVar0 = MISC::_CREATE_VAR_STRING(10, "FME_GAME_UPDATE_NEW_LEADER", func_535(PLAYER::GET_PLAYER_NAME(Local_3225.f_1004), iVar1));
				}
				Local_3225.f_1291 = func_573(sVar0, iVar1);
			}
		}
		if (Local_3225.f_1004 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_3225.f_1004))
		{
			func_574(Local_3225.f_1004, joaat("trophy"));
		}
	}
}

void func_269()
{
	if (func_159(&(Local_3225.f_1310)) && func_195(&(Local_3225.f_1310)) > 120000)
	{
		func_303(&(Local_3225.f_1310));
		func_105(0);
		func_54();
	}
}

void func_270()
{
	func_575(Local_13.f_1173);
	func_576();
	func_577();
	func_548();
	func_578();
	func_579();
	func_476(0);
	func_580();
	func_581();
	func_582();
	if (func_446(8))
	{
		func_276(PLAYER::PLAYER_ID());
		func_583();
		func_43(8192);
	}
	if (!func_422(128) && !func_446(8))
	{
		if (func_447() == 0)
		{
			func_448(0f);
			Local_2695.f_277 = 0;
		}
		if (func_209() > 5000 && Local_3225.f_1267 <= 0)
		{
			func_448(0f);
			Local_2695.f_277 = 0;
		}
	}
}

int func_271()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = 0f;
		iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		iVar7 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
		{
			fVar1 = (Local_3032[iVar0 /*6*/])->f_2;
			fVar2 = BUILTIN::TO_FLOAT((Local_3032[iVar0 /*6*/])->f_3);
			fVar3 = BUILTIN::TO_FLOAT((Local_3032[iVar0 /*6*/])->f_4);
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
			fVar4 = BUILTIN::TO_FLOAT((Local_3032[iVar0 /*6*/])->f_5);
			fVar5 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar7));
		}
		func_568(&(Local_3225.f_13), fVar1, iVar7, Local_3225.f_971[iVar0], !func_156(iVar0), fVar2, fVar3, 0, fVar4, fVar5);
		iVar0++;
	}
	func_569(&(Local_3225.f_13));
	return 1;
}

void func_272()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = (Local_3032[iVar7 /*6*/])->f_2;
			fVar1 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_3);
			fVar2 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_5);
			fVar4 = fVar1;
		}
		func_568(&(Local_3225.f_13), fVar0, iVar6, Local_3225.f_971[iVar7], !func_156(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		iVar7++;
	}
	func_570(&(Local_3225.f_13));
}

void func_273()
{
	if (Local_3225.f_9 == -785841056)
	{
		return;
	}
	_NAMESPACE79::_0x1C38C3577901AF1F();
	func_584();
}

void func_274()
{
	if (!func_156(Local_3225.f_1332))
	{
		func_126(1, 1);
		return;
	}
	func_286();
	func_281(func_279(), func_280(), Local_3225.f_11, Local_3225.f_12, 30000);
}

void func_275()
{
	if (!func_585(2, -1))
	{
		return;
	}
	if ((func_361() != 4 && func_361() != 10) && func_361() != 0)
	{
		return;
	}
	func_586();
}

int func_276(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	StringCopy(&(Local_3225.f_1406), func_587(iParam0), 64);
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Local_3225.f_1414 = joaat("COLOR_PURE_WHITE");
	}
	else
	{
		Local_3225.f_1414 = func_562(iParam0, 1, -1, 0);
	}
	return 1;
}

void func_277(var uParam0)
{
	uParam0->f_947 = 1;
}

void func_278(var uParam0)
{
	uParam0->f_948 = 1;
}

int func_279()
{
	return func_588();
}

int func_280()
{
	return 2129921;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	Local_3225.f_11 = iParam2;
	Local_3225.f_12 = iParam3;
	iVar0 = 551037070;
	iVar1 = joaat("COLOR_PURE_WHITE");
	iVar2 = joaat("COLOR_RED");
	iVar3 = joaat("COLOR_PURE_WHITE");
	if (Local_3225.f_1387 == joaat("standard"))
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_3225.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_3225.f_13.f_11.f_159), 16);
		}
	}
	else if (func_589())
	{
		iVar2 = 551037070;
		iVar3 = joaat("COLOR_BLACK");
		iVar0 = joaat("COLOR_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_3225.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_3225.f_13.f_11.f_159), 16);
		}
	}
	else if (func_590())
	{
		iVar2 = 551037070;
	}
	if (Local_3225.f_1 == 7)
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_3225.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_3225.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_3225.f_1 == 6 || Local_3225.f_1 == 5)
	{
		if ((func_318(&(Local_3225.f_13), 0) > 0f && (Local_3225.f_13.f_210[0 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_3225.f_13.f_210[0 /*23*/])->f_14))
		{
			if (Local_3225.f_13.f_210[0 /*23*/])->f_14 == PLAYER::PLAYER_ID()
			{
				if ((((func_318(&(Local_3225.f_13), 1) > 0f && (Local_3225.f_13.f_210[1 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_3225.f_13.f_210[1 /*23*/])->f_14)) && _NAMESPACE26::_NETWORK_IS_IN_MY_GANG((Local_3225.f_13.f_210[1 /*23*/])->f_14)) && !func_591((Local_3225.f_13.f_210[1 /*23*/])->f_14, 1))
				{
					iVar2 = 551037070;
				}
			}
			else if (_NAMESPACE26::_NETWORK_IS_IN_MY_GANG((Local_3225.f_13.f_210[0 /*23*/])->f_14) && !func_591((Local_3225.f_13.f_210[0 /*23*/])->f_14, 1))
			{
				iVar2 = 551037070;
			}
		}
	}
	uVar4 = 1;
	switch (Local_3225.f_1384)
	{
		case joaat("timer"):
			func_490(&(Local_3225.f_1005), iParam0, 0, iParam4, func_592());
			break;
		case 1310067901:
			func_593(&(Local_3225.f_1005), &(Local_3225.f_13), &uVar4, iParam1, 1);
			break;
		case joaat("leaderboard"):
			func_593(&(Local_3225.f_1005), &(Local_3225.f_13), &uVar4, iParam1 | 256, 1);
			break;
		case -2065086408:
			func_594(&(Local_3225.f_1005), &(Local_3225.f_13), &uVar4, iParam0, 0, iParam4, func_592(), iParam1 | 2048, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 1619021308:
			func_595(&(Local_3225.f_1005), &(Local_3225.f_13), &uVar4, iParam0, 0, iParam4, func_592(), iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 524681:
			func_596(&(Local_3225.f_1005), &(Local_3225.f_1020), iParam0, 0, iParam4, func_592(), Local_3225.f_1259, 0, 0, 0, 0);
			break;
		case -1828147615:
			func_597(&(Local_3225.f_1005), &(Local_3225.f_1020), &(Local_3225.f_13), &uVar4, iParam0, 0, iParam4, func_592(), 404851220, 0, iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 227643027:
			func_598(&(Local_3225.f_1005), &(Local_3225.f_1020), &(Local_3225.f_13), iParam0, &uVar4, 0, iParam4, func_592(), 404851220, 0, 0, 1, 0, iParam1, 1, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"));
			break;
		case 1086838518:
			func_593(&(Local_3225.f_1005), &(Local_3225.f_13), &uVar4, iParam1, 1);
			func_596(&(Local_3225.f_1005), &(Local_3225.f_1020), iParam0, 0, iParam4, func_592(), Local_3225.f_1259, 0, 0, 0, 0);
			break;
	}
}

void func_282()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	struct<5> Var9;
	vector3 vVar14;

	if (Local_3225.f_9 == -785841056)
	{
		return;
	}
	iVar0 = Local_2982.f_10;
	if (func_186(256))
	{
		iVar1 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar1))
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1);
			if (iVar2 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar0 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			fVar7 = 0f;
			bVar8 = true;
			if (!func_599(&vVar4, &fVar7, &bVar8))
			{
				if (((func_36(&Var9, Local_3225.f_1) && func_44(&Var9)) && func_45(&Var9, Local_3225.f_2)) && func_600(&Var9))
				{
					func_143(Var9, 2060397848, &vVar4, 1);
					func_142(Var9, -185561597, &fVar7, 1);
				}
			}
			Local_3225.f_1402 = { vVar4 };
			Local_3225.f_1416 = PED::CLONE_PED(iVar3, 0f, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_3225.f_1416))
				{
					PED::RESURRECT_PED(Local_3225.f_1416);
				}
				else
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_3225.f_1416, 100, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3225.f_1416, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3225.f_1416, 0, 1);
				ENTITY::SET_ENTITY_COORDS(Local_3225.f_1416, vVar4, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Local_3225.f_1416, fVar7);
				if (bVar8)
				{
					ENTITY::_0x9587913B9E772D29(Local_3225.f_1416, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_3225.f_1416, true);
				ENTITY::SET_ENTITY_COLLISION(Local_3225.f_1416, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3225.f_1416, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_3225.f_1416, false);
				PED::CLEAR_PED_DECORATIONS(Local_3225.f_1416);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3225.f_1416, true, true);
				if (func_601())
				{
					Local_3225.f_1415 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (CAM::DOES_CAM_EXIST(Local_3225.f_1415))
					{
						vVar14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_3225.f_1416, true, false), ENTITY::GET_ENTITY_HEADING(Local_3225.f_1416), 0.3f, 2f, 0.3f) };
						CAM::SET_CAM_COORD(Local_3225.f_1415, vVar14);
						CAM::POINT_CAM_AT_ENTITY(Local_3225.f_1415, Local_3225.f_1416, 0.3f, 0f, 0.3f, true);
						CAM::SET_CAM_FOV(Local_3225.f_1415, 35f);
						ENTITY::SET_ENTITY_HEADING(Local_3225.f_1416, func_602(vVar4, vVar14, 1));
					}
				}
			}
		}
	}
}

void func_283()
{
	if (func_134(268435456))
	{
		return;
	}
	if (Local_2982.f_12 == 0)
	{
		func_603();
		if (Local_3225.f_9 == 1038512660)
		{
			if (func_186(256))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_3225.f_9 == -785841056)
		{
			if (func_134(32768))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_2982.f_10 == PLAYER::PLAYER_ID() || func_134(8192))
		{
			func_43(4096);
		}
		else
		{
			if ((Local_3032[Local_3225.f_1332 /*6*/])->f_2 <= 0f)
			{
				func_604((func_197(2) - 1));
			}
			func_43(16384);
		}
		if (func_134(4096) || func_134(8192))
		{
			func_605(Local_3225.f_1, Local_3225.f_3, Local_3225.f_1333);
		}
		else if (func_134(16384))
		{
			func_606(Local_3225.f_1, Local_3225.f_3, Local_3225.f_1333);
		}
		func_607();
	}
	if (Local_2982.f_12 == 4)
	{
		func_43(16384);
	}
	func_43(268435456);
}

void func_284()
{
}

void func_285()
{
	if (func_446(8))
	{
		func_575(Local_13.f_1173);
		func_576();
		func_577();
		func_578();
	}
	else
	{
		func_608(0, 0f);
	}
}

void func_286()
{
	if ((func_156(Local_3225.f_1332) && func_297(Local_3225.f_1384)) && Local_2982.f_12 == 0)
	{
		if (!func_18(Local_3225, 4096))
		{
			func_251(Local_3225, 4096);
		}
		if (!func_609())
		{
			func_251(Local_3225, 16384);
		}
	}
	else
	{
		if (func_18(Local_3225, 4096))
		{
			func_610(Local_3225, 4096);
		}
		if (func_18(Local_3225, 16384))
		{
			func_610(Local_3225, 16384);
		}
	}
}

bool func_287()
{
	return func_18(Local_3225, 4096);
}

int func_288()
{
	switch (Local_3225.f_1)
	{
		case 7:
		case 12:
		case 13:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_289()
{
	return 0;
}

void func_290()
{
	func_611(&(Local_3225.f_1020), 1, 0);
	func_612(&(Local_3225.f_13));
	func_257(&(Local_3225.f_1005), 1);
}

int func_291()
{
	struct<8> Var0;
	char cVar8[64];
	struct<8> Var16;
	char cVar24[64];
	bool bVar32;
	struct<8> Var33;
	char cVar41[64];

	if (func_62(255))
	{
		return 0;
	}
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(11, 1, 0);
	if (func_613())
	{
		return 1;
	}
	Var0 = { func_550() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_3225.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_3225.f_1338 };
		}
	}
	if (Local_2982.f_12 != 0)
	{
		StringCopy(&cVar8, func_614(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			if (Local_3225.f_9 == -785841056)
			{
				StringCopy(&cVar8, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_321()))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
			{
				Local_3225.f_1287 = func_558(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_321(), func_615(), func_616());
			}
			else
			{
				Local_3225.f_1287 = func_558(&cVar8, func_321(), func_615(), func_616());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			Local_3225.f_1287 = func_558(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_617(Local_2982.f_12), func_615(), func_616());
		}
		else
		{
			Local_3225.f_1287 = func_558(&cVar8, func_617(Local_2982.f_12), func_615(), func_616());
		}
	}
	else if (Local_3225.f_9 != -785841056)
	{
		Local_3225.f_1287 = func_618(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_615(), func_616());
	}
	else if (func_134(4096))
	{
		Var16 = { func_619() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
		{
			StringCopy(&Var16, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
		}
		StringCopy(&cVar24, func_620(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar24))
		{
			Local_3225.f_1287 = func_558(&Var16, func_319(func_318(&(Local_3225.f_13), 0)), func_615(), func_616());
		}
		else
		{
			Local_3225.f_1287 = func_557(&Var16, func_319(func_318(&(Local_3225.f_13), 0)), &cVar24, func_615(), func_616());
		}
	}
	else
	{
		bVar32 = false;
		Var33 = { func_621() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
		{
			if (!func_185(4096, Local_3225.f_1332) && Local_3225.f_1333 >= 0)
			{
				bVar32 = true;
			}
			else if (Local_3225.f_9 == -785841056)
			{
				StringCopy(&Var33, func_614(), 64);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
				{
					StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
				}
			}
			else
			{
				StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER", 64);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_322(Local_3225.f_1406, Local_3225.f_1414, func_318(&(Local_3225.f_13), 0))))
		{
			if (bVar32)
			{
				Local_3225.f_1287 = func_618(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_622(Local_3225.f_1333)), func_615(), func_616());
			}
			else
			{
				Local_3225.f_1287 = func_618(&Var33, func_615(), func_616());
			}
		}
		else
		{
			StringCopy(&cVar41, func_620(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar41))
			{
				if (bVar32)
				{
					Local_3225.f_1287 = func_558(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_622(Local_3225.f_1333)), func_322(Local_3225.f_1406, Local_3225.f_1414, func_318(&(Local_3225.f_13), 0)), func_615(), func_616());
				}
				else
				{
					Local_3225.f_1287 = func_558(&Var33, func_322(Local_3225.f_1406, Local_3225.f_1414, func_318(&(Local_3225.f_13), 0)), func_615(), func_616());
				}
			}
			else if (bVar32)
			{
				Local_3225.f_1287 = func_557(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_622(Local_3225.f_1333)), func_322(Local_3225.f_1406, Local_3225.f_1414, func_318(&(Local_3225.f_13), 0)), &cVar41, func_615(), func_616());
			}
			else
			{
				Local_3225.f_1287 = func_557(&Var33, func_322(Local_3225.f_1406, Local_3225.f_1414, func_318(&(Local_3225.f_13), 0)), &cVar41, func_615(), func_616());
			}
		}
	}
	return 1;
}

void func_292(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_11))
		{
			AUDIO::_STOP_SOUND_WITH_ID(uParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

int func_293()
{
	return 7000;
}

bool func_294()
{
	vector3 vVar0;
	bool bVar3;

	if (Local_3225.f_9 == -785841056)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_3225.f_1416, true, false) };
	if (func_68(vVar0))
	{
		return true;
	}
	if (func_62(255))
	{
		return false;
	}
	if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::_0x387AD749E3B69B70(vVar0, func_623(Local_3225.f_1415), 60f, 0);
		return false;
	}
	bVar3 = true;
	if (!STREAMING::_0x0909F71B5C070797())
	{
		bVar3 = false;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar0);
	if (!STREAMING::_0xDA8B2EAF29E872E2(vVar0))
	{
		bVar3 = false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	if (!ENTITY::_0x6BFBDC46139C45AB(vVar0))
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		return false;
	}
	if (!func_624())
	{
		bVar3 = false;
	}
	return bVar3;
}

bool func_295(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_625(iParam0))
	{
		iVar0 = _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

void func_296()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((((!func_65(65536) && Local_3225.f_9 == -785841056) && func_287()) && func_560()) && func_502(Local_3225.f_1289))
	{
		bVar0 = false;
		if (func_280() & 1024 == 1024)
		{
			bVar0 = true;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= (Local_3225.f_1333 - 1))
		{
			iVar1 = (Local_3225.f_13.f_210[iVar2 /*23*/])->f_14;
			if (func_626(iVar1, bVar0, 0))
			{
				Local_3225.f_1289 = func_503("FME_HELP_SCORE_SURPASS");
				func_173(65536);
			}
			else
			{
				iVar2++;
			}
		}
	}
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case joaat("timer"):
			return 0;
		default:
			break;
	}
	return 1;
}

int func_298()
{
	return 0;
}

bool func_299()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_300()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(7);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_301()
{
	return (func_627() && func_628());
}

void func_302()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

void func_303(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::_0xF49F14462F0AE27C(iVar1);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_VISIBLE(iVar2)) && func_629(iVar2, Local_3225.f_1402, 1) < 10f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_305(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_630(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

void func_306()
{
	return;
}

void func_307()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(false);
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, false);
			}
		}
		iVar1++;
	}
}

void func_308()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_3225.f_1337))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_3225.f_1337, ENTITY::GET_ENTITY_COORDS(Local_3225.f_1416, true, false), ENTITY::GET_ENTITY_ROTATION(Local_3225.f_1416, 2), 2);
	ANIMSCENE::START_ANIM_SCENE(Local_3225.f_1337);
}

int func_309()
{
	return 0;
}

int func_310()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
	{
		case 0:
			return -1639456476 /* GXTEntry: "Shoot \'Em Up" */;
		case 1:
			return -2106738342 /* GXTEntry: "Spit" */;
		case 2:
			return 425751659 /* GXTEntry: "Thumbs Up" */;
		case 3:
			return -339257980 /* GXTEntry: "Wave" */;
		case 4:
			return -822629770 /* GXTEntry: "Nod Head" */;
		case 5:
			return -653113914 /* GXTEntry: "Shake Head" */;
		case 6:
			return 354512356 /* GXTEntry: "Damn You" */;
		case 7:
			return -166523388 /* GXTEntry: "What\'s The Smell?" */;
		default:
			break;
	}
	return 425751659 /* GXTEntry: "Thumbs Up" */;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case -1639456476: /* GXTEntry: "Shoot \'Em Up" */
			return 1500;
		case -2106738342: /* GXTEntry: "Spit" */
			return 1800;
		case 425751659: /* GXTEntry: "Thumbs Up" */
			return 1500;
		case -339257980: /* GXTEntry: "Wave" */
			return 1500;
		case -822629770: /* GXTEntry: "Nod Head" */
			return 1800;
		case -653113914: /* GXTEntry: "Shake Head" */
			return 1800;
		case 354512356: /* GXTEntry: "Damn You" */
			return 1400;
		case -166523388: /* GXTEntry: "What\'s The Smell?" */
			return 1800;
		default:
			break;
	}
	return 1500;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case -2106738342: /* GXTEntry: "Spit" */
		case -1639456476: /* GXTEntry: "Shoot \'Em Up" */
		case -402959: /* GXTEntry: "Hell Yeah" */
		case 486225122: /* GXTEntry: "Point" */
		case 1927505461: /* GXTEntry: "Blow Kiss" */
			return 1;
		case -339257980: /* GXTEntry: "Wave" */
		case 425751659: /* GXTEntry: "Thumbs Up" */
			return 3;
		case -822629770: /* GXTEntry: "Nod Head" */
		case -653113914: /* GXTEntry: "Shake Head" */
		case -110352861: /* GXTEntry: "I\'m Hit" */
		case 445839715: /* GXTEntry: "Yeehaw" */
		case 803206066: /* GXTEntry: "Point and Laugh" */
			return 0;
		case -166523388: /* GXTEntry: "What\'s The Smell?" */
		case -23808358:
		case 354512356: /* GXTEntry: "Damn You" */
		case 1533402397: /* GXTEntry: "Bring It On" */
			return 2;
		default:
			break;
	}
	return -1;
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	if (!func_631(iParam1))
	{
		return;
	}
	TASK::_TASK_EMOTE(iParam0, uParam5, iParam2, iParam1, iParam3, iParam4, 0, 0);
}

char* func_314()
{
	return "";
}

struct<8> func_315()
{
	char cVar0[64];

	Local_3225.f_1414 = joaat("COLOR_PURE_WHITE");
	StringCopy(&cVar0, func_587(PLAYER::PLAYER_ID()), 64);
	return cVar0;
}

char* func_316()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_ST_SHARD_OUTRO_PRIMARY_EARNED", func_632());
}

char* func_317()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_ST_SHARD_OUTRO_PRIMARY_KILLS", func_633());
}

float func_318(var uParam0, int iParam1)
{
	return (uParam0->f_210[iParam1 /*23*/])->f_5;
}

char[] func_319(float fParam0)
{
	return func_317();
}

void func_320(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[0])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[1])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[2])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[3])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

char* func_321()
{
	return "";
}

char* func_322(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return "";
}

void func_323(var uParam0)
{
}

int func_324()
{
	return 0;
}

int func_325(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_231(uParam0);
		return 0;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

int func_326()
{
	return 0;
}

int func_327()
{
	return joaat("leaderboard");
}

char* func_328(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_329(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949749)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3);
}

int func_330(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_634(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_635(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_331(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_329(iParam0))
	{
		return;
	}
	iVar0 = func_636(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, sParam1);
}

bool func_332(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_329(iParam0))
	{
		return false;
	}
	iVar0 = func_636(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

void func_333(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_329(iParam0))
	{
		return;
	}
	iVar0 = func_636(iParam0);
	if (bParam1)
	{
		func_637(iParam0, 4);
		if (bParam3)
		{
			func_638(iVar0, 1);
		}
		func_639(iVar0, 1);
	}
	else
	{
		func_640(iParam0, 4);
		func_639(iVar0, 0);
	}
}

void func_334(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_329(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_636(*uParam0);
	if (((*Global_1949749)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_641(iVar0);
	*uParam0 = 0;
}

int func_335()
{
	func_608(0, 0f);
	return 1;
}

int func_336(bool bParam0)
{
	if (!func_157(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_337(int iParam0)
{
	func_452(&(Local_3225.f_1334), iParam0);
}

void func_338(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_642(&(Global_1131373->f_5525), bParam1);
		func_168(113);
	}
	else
	{
		func_169(113);
	}
}

void func_339(int iParam0)
{
	if (func_643(&Global_1903001, iParam0))
	{
		func_644(Global_1903001, iParam0);
	}
}

void func_340(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	func_645(iVar0, iParam0);
	func_646(iVar0, iParam0);
}

bool func_341()
{
	return func_647(256);
}

void func_342()
{
	if (func_647(256))
	{
		func_648(256);
	}
}

void func_343(int iParam0, int iParam1)
{
	func_452(&((Local_3032[iParam1 /*6*/])->f_1), iParam0);
}

int func_344(int iParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_649(iVar0, 0, 1))
	{
		return 0;
	}
	if (func_650(iVar0, 32))
	{
		return 1;
	}
	return 0;
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_341())
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (!func_650(PLAYER::PLAYER_ID(), 32))
		{
			func_651(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_ON");
				func_652(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_653(iParam0, _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_650(PLAYER::PLAYER_ID(), 32))
	{
		func_654(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_OFF");
			func_652(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_653(iParam0, _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		}
	}
}

void func_346()
{
	func_168(88);
}

void func_347(bool bParam0)
{
	if (bParam0)
	{
		func_169(48);
	}
	else
	{
		func_168(48);
	}
}

void func_348(bool bParam0)
{
	if (bParam0)
	{
		func_169(105);
		if (!Global_1273882->f_12)
		{
			func_655(16);
		}
	}
	else
	{
		func_168(105);
		if (!Global_1273882->f_12)
		{
			func_655(16);
		}
	}
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_656(Global_1939168, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_657(Global_1939168, 8388608);
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

char* func_351()
{
	return "FMUI";
}

int func_352(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		bVar0 = true;
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		WEAPON::_0xEC1F85DA51D3D6C4(PLAYER::PLAYER_PED_ID(), &uParam0, &uParam4);
		return 1;
	}
	return 0;
}

void func_353()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_1405))
	{
		func_658(Local_3225.f_1405);
	}
}

void func_354()
{
	if (func_295(Local_3225.f_1291))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1291, 0);
	}
}

void func_355()
{
	func_334(&(Local_3225.f_1296), 1, 1);
	func_334(&(Local_3225.f_1297), 1, 1);
}

void func_356()
{
	if (func_295(Local_3225.f_1289))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1289, 0);
	}
}

void func_357()
{
	if (func_295(Local_3225.f_1287))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1287, 0);
	}
}

void func_358()
{
	if (func_295(Local_3225.f_1288))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1288, 0);
	}
	Local_3225.f_1288 = 0;
	Local_3225.f_1266 = 0;
}

void func_359()
{
	if (func_295(Local_3225.f_1290))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_3225.f_1290, 0);
	}
}

void func_360()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_572(iVar0);
		iVar0++;
	}
}

int func_361()
{
	return Global_1099293->f_26.f_12;
}

void func_362(int iParam0)
{
	Global_1099293->f_26.f_12 = iParam0;
}

void func_363(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_362(iParam0);
	if (!func_659(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_660(128) && !func_661(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_662() == 4)
	{
		func_168(17);
	}
	func_176(1024);
}

bool func_364(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_663(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_365(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_663(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_366(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_365(Param0) && !func_364(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_664(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_663(Param0) == 3)
		{
			func_665(1, -1706799532);
		}
		else if (func_663(Param0) == 4)
		{
			func_665(0, -1706799532);
		}
	}
	if (func_663(Param0) == 3 || (func_663(Param0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_664(Param0))))
	{
		if (iParam3 != -1)
		{
			func_666(Param0, iParam3, iParam4);
		}
		else
		{
			func_666(Param0, 2, iParam4);
		}
	}
	func_667(Param0, 0);
	if (func_74(func_375(0), Param0))
	{
		func_350(1);
		func_668(0);
		func_669(0);
		func_670(1);
	}
	func_671(Param0);
	Global_1051202->f_43.f_1 = 1;
	iVar0 = func_672(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_367(int iParam0, struct<2> Param1)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_673(Param1, &Var0);
	func_674(0);
	func_675(1);
	if (func_676((Global_1183537->f_66[iParam0 /*20*/])->f_3) == -785841056)
	{
		SCRIPTS::