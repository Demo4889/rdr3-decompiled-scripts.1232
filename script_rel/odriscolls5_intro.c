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
	vector3 vLocal_14 = { 0f, 0f, 9.809089E-45f };
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	struct<2907> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<4> Var1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(Local_32))
		{
			func_2(Global_1935630, 32768);
		}
		func_3(&Local_32, 1);
	}
	func_4(&uScriptParam_0, &Local_32);
	while (!func_5(&Local_32, 1))
	{
		if (func_6(&Local_32) != 10)
		{
			if ((func_6(&Local_32) == 3 || func_6(&Local_32) == 4) && (!func_7(&Local_32) || func_8(&(Local_32.f_958)) > 0))
			{
				func_9(&Local_32, func_5(&Local_32, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&Local_32)) && func_5(&Local_32, 65536))
			{
				func_9(&Local_32, 1);
			}
		}
		if (func_6(&Local_32) >= 3 && func_6(&Local_32) <= 7)
		{
			func_11(&Local_32);
		}
		if (((((func_6(&Local_32) >= 5 && func_6(&Local_32) <= 7) && !func_5(&Local_32, 4096)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_32.f_428.f_444)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_32.f_428.f_444, 0)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_32.f_428.f_444))
		{
			MemCopy(&Var1, {func_12(Local_32)}, 4);
			func_13(Var1, &(Local_32.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
		}
		switch (func_6(&Local_32))
		{
			case 8:
				if (func_14(&Local_32))
				{
					func_15(&Local_32);
					func_16(&Local_32);
					func_17(&Local_32, 0);
				}
				else if (!func_10(&Local_32))
				{
					if (!func_18(&(Local_32.f_2899)))
					{
						func_19(&(Local_32.f_2899), 0);
					}
					if (!func_20(&Local_32))
					{
						if (func_21(&(Local_32.f_2899)) >= 1f)
						{
							func_22(Local_32.f_2889, 2097152);
							func_23(&Local_32);
							func_24(&Local_32);
							func_17(&Local_32, 10);
						}
					}
					else
					{
						if (!func_5(&Local_32, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_32, 536870912);
						}
						func_26(&(Local_32.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&Local_32))
				{
					func_16(&Local_32);
				}
				if (!func_10(&Local_32) || func_5(&Local_32, 65536))
				{
					if (func_27(&Local_32))
					{
						func_17(&Local_32, 1);
					}
				}
				break;
			case 1:
				if (func_10(&Local_32))
				{
					func_16(&Local_32);
				}
				if (func_28(&Local_32))
				{
					func_17(&Local_32, 2);
				}
				break;
			case 2:
				if (func_10(&Local_32))
				{
					func_16(&Local_32);
				}
				if (func_29(&Local_32))
				{
					if (!func_7(&Local_32) || func_10(&Local_32))
					{
						if (!func_30(Local_32.f_2889))
						{
							Local_32.f_2889 = func_32(func_31(Local_32));
						}
						func_22(Local_32.f_2889, 4);
						func_25(&Local_32, 8192);
					}
					if (func_10(&Local_32))
					{
						func_33(&Local_32);
						func_17(&Local_32, 9);
					}
					else
					{
						func_17(&Local_32, 3);
					}
				}
				break;
			case 9:
				if (func_16(&Local_32))
				{
					func_34(&Local_32);
					func_15(&Local_32);
					func_35(&Local_32);
					if (!func_5(&Local_32, 256))
					{
						func_36(&Local_32);
						func_37(Local_32);
						func_38(&Local_32);
						func_17(&Local_32, 7);
					}
					else
					{
						func_17(&Local_32, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&Local_32, 8192))
				{
					if (func_8(&(Local_32.f_958)) == 3)
					{
						func_22(Local_32.f_2889, 4);
						func_25(&Local_32, 8192);
					}
				}
				func_39(&Local_32);
				if (func_40(func_32(((*Global_1835011)[Local_32 /*74*/])->f_1), 512))
				{
				}
				else if (func_41(&Local_32) || func_42(&Local_32, 32768))
				{
					func_34(&Local_32);
					func_15(&Local_32);
					func_17(&Local_32, 4);
					func_19(&(Local_32.f_2890), 0);
				}
				else if (func_10(&Local_32) && !func_1(Local_32))
				{
					if (!func_18(&(Local_32.f_2899)))
					{
						func_19(&(Local_32.f_2899), 0);
					}
					if (!func_20(&Local_32))
					{
						if (func_21(&(Local_32.f_2899)) >= 1f)
						{
							func_22(Local_32.f_2889, 2097152);
							func_23(&Local_32);
							func_24(&Local_32);
							func_17(&Local_32, 10);
						}
					}
					else
					{
						if (!func_5(&Local_32, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_32, 536870912);
						}
						func_26(&(Local_32.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_32);
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_32) || (func_42(&Local_32, 32768) && !func_5(&Local_32, 268435456)))
				{
					func_35(&Local_32);
					if (!func_5(&Local_32, 256))
					{
						func_36(&Local_32);
						func_38(&Local_32);
						if (!func_45(&Global_1935630, 524288) || func_42(&Local_32, 524288))
						{
							func_37(Local_32);
							func_17(&Local_32, 7);
						}
						else
						{
							func_17(&Local_32, 6);
						}
					}
					else
					{
						func_37(Local_32);
						func_17(&Local_32, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_32);
				func_47(&Local_32);
				if (func_48(&(Local_32.f_2884)) >= func_49(&Local_32))
				{
					func_36(&Local_32);
					func_38(&Local_32);
					func_26(&(Local_32.f_2884));
					if (!func_42(&Local_32, 524288))
					{
						func_37(Local_32);
						func_17(&Local_32, 7);
					}
					else
					{
						func_17(&Local_32, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(Local_32.f_2906)))
				{
					func_19(&(Local_32.f_2906), 0);
				}
				if ((func_50(&(Local_32.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_32.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_32.f_428.f_444))
				{
					func_37(Local_32);
					func_17(&Local_32, 7);
				}
				else if (func_48(&(Local_32.f_2906)) >= 5f)
				{
					func_37(Local_32);
					func_17(&Local_32, 7);
				}
				break;
			case 7:
				func_51(&Local_32);
				if (func_52(&Local_32))
				{
					func_17(&Local_32, 10);
				}
				break;
			case 10:
				if (func_3(&Local_32, 0))
				{
					func_25(&Local_32, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return 0;
	}
	return func_40(iVar0, 1024);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return 0;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_56(iParam0);
	func_57(iParam0);
	func_58(iParam0);
	func_59(*iParam0);
	func_60(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630->f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (func_5(iParam0, 1024))
	{
		func_61(1);
		func_2(Global_1935630, 32768);
	}
	else
	{
		func_62();
	}
	if (bParam1)
	{
		if (func_63(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		func_64(&(iParam0->f_958));
	}
	func_65(iParam0, 0);
	if (func_5(iParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		func_66(iParam0, 536870912);
	}
	if (bParam1)
	{
		func_67(1, 0, 0);
	}
	if (func_5(iParam0, -2147483648))
	{
		func_68();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_4(var uParam0, int iParam1)
{
	vector3 vVar0;

	*iParam1 = *uParam0;
	PED::_RESERVE_AMBIENT_PEDS(10);
	iParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(iParam1);
	if (func_10(iParam1))
	{
		func_70(&(iParam1->f_428));
		func_71(iParam1);
		func_25(iParam1, 16777216);
		func_17(iParam1, 8);
	}
	else
	{
		func_17(iParam1, 0);
	}
	if (!func_5(iParam1, 1073741824))
	{
		func_72(*iParam1);
		func_73(*iParam1);
	}
	vVar0 = { func_12(*iParam1) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		func_25(iParam1, 134217728);
	}
	func_19(&(iParam1->f_2896), 0);
	return 1;
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0->f_2 && iParam1) != 0;
}

int func_6(int iParam0)
{
	return iParam0->f_1;
}

int func_7(int iParam0)
{
	if (func_5(iParam0, 16))
	{
		return 0;
	}
	return func_5(iParam0, 524288);
}

int func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, bool bParam1)
{
	vector3 vVar0[24];

	if (!CAM::IS_SCREEN_FADED_OUT() && !func_5(iParam0, 4))
	{
		if (func_48(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		func_26(&(iParam0->f_2896));
		if ((func_74(0, 0, 1) && !func_5(iParam0, 65536)) && !func_40(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (func_5(iParam0, 128))
	{
		return;
	}
	if (func_5(iParam0, 134217728))
	{
		if (!func_5(iParam0, 16777216))
		{
			func_75(iParam0, 16);
			if (func_7(iParam0))
			{
				func_76(iParam0);
			}
			func_25(iParam0, 16777216);
		}
		cVar0 = { func_12(*iParam0) };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!func_40(iParam0->f_2889, 128))
			{
				func_22(iParam0->f_2889, 128);
			}
		}
		else if (func_40(iParam0->f_2889, 128))
		{
			func_78(iParam0->f_2889, 128);
		}
	}
}

int func_10(int iParam0)
{
	if (func_5(iParam0, 65536))
	{
		return 1;
	}
	if (!func_79((*Global_1835011)[*iParam0 /*74*/]))
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	int iVar0;

	if (!func_18(&(iParam0->f_2893)))
	{
		func_19(&(iParam0->f_2893), 0);
	}
	if (func_48(&(iParam0->f_2893)) >= 1f)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
		{
			iVar0 = func_80(7);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!func_5(iParam0, 512))
				{
					PED::_0xE9B168527B337BF0(iVar0, iParam0->f_425);
					func_25(iParam0, 512);
				}
			}
			else if (func_5(iParam0, 512))
			{
				func_66(iParam0, 512);
			}
		}
		func_26(&(iParam0->f_2893));
	}
}

Vector3 func_12(int iParam0)
{
	vector3 vVar0;

	if (!func_81(iParam0))
	{
		return vVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_9;
}

int func_13(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_82(uParam4, &sParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_50(uParam4) != 1)
	{
		func_84(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_50(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, 0))
				{
					func_85(uParam4, &sParam0);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				func_86(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_70(uParam4);
				}
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_88(uParam4);
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), 0);
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, 1, 0))
			{
				if (func_77(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, 1, 0))
					{
						func_86(uParam4, 4);
					}
					else if (!func_90(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100f, 1, 1))
					{
						func_92(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_89(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_93(1, 0);
					func_85(uParam4, &sParam0);
					func_86(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				func_86(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (func_87(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, 0)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444) || func_83(uParam4, 512)))
			{
				if (!func_83(uParam4, 1024) && func_95(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_83(uParam4, 512))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, 512);
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
			if (func_83(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_97(uParam4) - func_98(uParam4)))) <= 2f)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
					{
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_98(uParam4) > 5000)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
			}
			if (func_100(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, 1);
						func_86(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_83(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, 536870912);
				}
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= (func_97(uParam4) - 5000))
				{
					func_105();
				}
			}
			break;
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_83(uParam4, 524288))
			{
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						func_96(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, 1);
						if (_NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_87(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, 0);
						}
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, 0);
						}
						func_86(uParam4, 3);
					}
				}
				if (func_50(uParam4) == 3)
				{
					if (func_83(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_86(uParam4, 4);
			break;
	}
	return 0;
}

int func_14(int iParam0)
{
	func_25(iParam0, 262144);
	if (func_106(iParam0))
	{
		func_25(iParam0, 65536);
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	if (!func_5(iParam0, 131072))
	{
		if (!func_5(iParam0, 2048) && !func_7(iParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 312, 0);
			HUD::_0x4CC5F2FC1332577F(-1679307491);
		}
		func_107(*iParam0);
		func_25(iParam0, 1024);
		func_108(0);
		func_109(Global_1935630, 32768);
		func_110(2);
		func_111(iParam0);
		func_112(1);
		func_59(*iParam0);
		func_60(*iParam0);
		func_33(iParam0);
		if (!func_5(iParam0, -2147483648))
		{
			func_68();
		}
		func_58(iParam0);
		func_25(iParam0, 131072);
	}
}

int func_16(int iParam0)
{
	return 1;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(var uParam0)
{
	return func_113(*uParam0, 1);
}

void func_19(var uParam0, int iParam1)
{
	if (iParam1 || !func_18(uParam0))
	{
		func_26(uParam0);
	}
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_114(iVar1) && func_115(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_116(iVar1))
				{
					if (func_117(iVar2, 1116471296, -1082130432, -1082130432, -1082130432))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

float func_21(var uParam0)
{
	if (!func_18(uParam0))
	{
		return 0f;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

void func_23(var uParam0)
{
	func_120(&(uParam0->f_428));
}

void func_24(var uParam0)
{
	func_121(&(uParam0->f_958), uParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		func_109(Global_1935630, 32768);
		func_107(*iParam0);
	}
}

void func_26(var uParam0)
{
	func_122(uParam0, 0f);
}

int func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_123(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_124(iParam0)))
	{
		vVar0 = { func_12(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { func_125(&(iParam0->f_428)) };
			if (!func_90(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_126(*iParam0), true) >= 10f)
				{
					func_127(iParam0, func_126(*iParam0));
				}
				else
				{
					func_127(iParam0, vVar3);
				}
			}
			else
			{
				return 0;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return 0;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_129(iParam0);
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_132(iParam0);
	func_133(iParam0);
	return 1;
}

int func_28(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, 1073741824) && !func_136(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_29(int iParam0)
{
	int iVar0;

	if (!func_137())
	{
		return 0;
	}
	PED::_0xAB0D553FE20A6E25(0.7f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_25))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_25, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_25, joaat("weapon_unarmed"), true, 0, false, false);
		func_139(iLocal_25, func_138(0, 0), 2, 1073741824);
		func_131(iParam0, iLocal_25, 0, 0, 0, 1);
		func_140(iParam0, iLocal_25, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_26))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_26, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_26, joaat("weapon_unarmed"), true, 0, false, false);
		func_139(iLocal_26, func_138(0, 1), 2, 1073741824);
		func_131(iParam0, iLocal_26, 0, 0, 0, 1);
		func_140(iParam0, iLocal_26, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_27))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_27, true);
		func_139(iLocal_27, func_138(0, 2), 2, 1073741824);
		func_131(iParam0, iLocal_27, 0, 0, 0, 1);
		func_140(iParam0, iLocal_27, 0);
	}
	func_141(-1, 1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[iVar0])) && (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 6))
		{
			func_142(iParam0, &(vLocal_14.f_2[iVar0]), 0, 0, 0, 1, 0);
			func_140(iParam0, &(vLocal_14.f_2[iVar0]), 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[iVar0])) && ((iVar0 == 5 || iVar0 == 4) || iVar0 == 3))
		{
			if (iVar0 == 4)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_24, "p_cs_sacklarge01x^1", &(vLocal_14.f_2[iVar0]), 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_24, func_143(&(vLocal_14.f_2[iVar0])), &(vLocal_14.f_2[iVar0]), 0);
			}
			func_144(&(iParam0->f_428), &(vLocal_14.f_2[iVar0]), func_143(&(vLocal_14.f_2[iVar0])), 0, 0, 0);
		}
		iVar0++;
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_24);
	iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2793.85f, -1169.772f, 47.924f, 0f, 0f, 59.47334f, 7.5f, 7f, 3.115668f, "m_sbiIntroBlockingVolume");
	iLocal_31 = func_145(iLocal_30, 0, 0, 0);
	func_146(-74215266, 1, 0, 0, 0, 0, 0, 0);
	return 1;
}

int func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_32(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_33(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {func_147(*iParam0)}, 3);
	SCRIPTS::REQUEST_SCRIPT(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(Global_1935630, 32768);
	func_148(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_149())
	{
		func_150();
	}
	if (func_42(iParam0, 524288))
	{
		func_109(Global_1935630, 524288);
	}
	else if (!func_42(iParam0, 32768))
	{
		Global_43804 = iParam0->f_958.f_1684;
	}
	func_151(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, 262144))
	{
		if (func_152(&(((*Global_1835011)[*iParam0 /*74*/])->f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(func_153(4), 0, 0);
		}
		else if (func_152(&(((*Global_1835011)[*iParam0 /*74*/])->f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(func_153(2), 0, 0);
		}
		else if (func_152(&(((*Global_1835011)[*iParam0 /*74*/])->f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(func_153(8), 0, 0);
		}
		else if (func_152(&(((*Global_1835011)[*iParam0 /*74*/])->f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(func_153(16), 0, 0);
		}
		else if (func_152(&(((*Global_1835011)[*iParam0 /*74*/])->f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(func_153(32), 0, 0);
		}
	}
}

int func_36(int iParam0)
{
	int iVar0;

	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_31, false);
	func_154(138, 0, 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[iVar0])))
		{
			func_140(iParam0, &(vLocal_14.f_2[iVar0]), 0);
		}
		iVar0++;
	}
	return 1;
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_155(iParam0))
	{
		return;
	}
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 2048);
	((*Global_1835011)[iParam0 /*74*/])->f_71 = 0;
	uVar1 = func_156(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		HUD::SET_MISSION_NAME(true, &uVar1);
		MISC::_0x1096603B519C905F(&uVar1);
	}
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> Var3;

	vVar0 = { func_12(*iParam0) };
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, 1, 0))
	{
		Global_43799 = iParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(iParam0->f_958), 8))
		{
			if (!func_63(&(iParam0->f_958), 131072))
			{
				if (!func_63(&(iParam0->f_958), 32768))
				{
					if (!func_5(iParam0, 8))
					{
						func_157(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

int func_39(int iParam0)
{
	if (func_158() > 0.8f)
	{
		func_159(0.8f);
	}
	if (((!iLocal_28 && func_160(Global_35, iLocal_25, 1, 1) < 15f) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0)) && func_162(&(iParam0->f_958.f_1771), func_161("ODR5_DUTSADBNT"), 0, -1, 0, 0))
	{
		iLocal_28 = 1;
	}
	return 1;
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

int func_41(int iParam0)
{
	if (func_7(iParam0))
	{
		func_164(&(iParam0->f_958), func_163(iParam0), iParam0->f_958, 0);
		return func_165(iParam0);
	}
	if (func_5(iParam0, 64))
	{
		return 0;
	}
	if (func_166(iParam0))
	{
		func_67(1, 0, 0);
		iLocal_29 = 0;
		return 1;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

void func_43(var uParam0)
{
}

int func_44(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_164(&(iParam0->f_958), func_163(iParam0), iParam0->f_958, 0);
	}
	return func_106(iParam0);
}

bool func_45(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_46(int iParam0)
{
}

void func_47(int iParam0)
{
	if ((!func_5(iParam0, 33554432) && !func_42(iParam0, 524288)) && !func_42(iParam0, 32768))
	{
		if (func_167(&(iParam0->f_958)))
		{
			func_168(&(iParam0->f_958), 0, 0);
			func_25(iParam0, 33554432);
		}
	}
}

float func_48(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

float func_49(var uParam0)
{
	return uParam0->f_2887;
}

int func_50(var uParam0)
{
	return *uParam0;
}

void func_51(int iParam0)
{
}

int func_52(int iParam0)
{
	vector3 vVar0;
	bool bVar3;

	vVar0 = { func_12(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (func_155(*iParam0))
		{
			return 1;
		}
		return 0;
	}
	bVar3 = func_169();
	if (bVar3)
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_169())
		{
			func_25(iParam0, 32);
		}
		else if (func_48(&(iParam0->f_2884)) >= 60f)
		{
			return 1;
		}
	}
	else
	{
		if (!func_169())
		{
			return 1;
		}
		if (!func_5(iParam0, 4096))
		{
			if (func_155(*iParam0))
			{
				func_25(iParam0, 4096);
			}
			else
			{
				func_111(iParam0);
			}
		}
		else if (!func_155(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;

	if (!func_5(uParam0, 1024))
	{
		func_154(138, 0, 1, 0, 0);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[iVar0])))
			{
				OBJECT::DELETE_OBJECT(vLocal_14.f_2[iVar0]);
			}
			iVar0++;
		}
	}
	if (iLocal_29)
	{
		func_159(1f);
	}
	return 1;
}

void func_54(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_426))
	{
		func_170(uParam0->f_426);
	}
}

void func_55(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
	{
		func_171(&(uParam0->f_427), uParam0->f_425, 0);
		if (PATHFIND::_0xDE0EA444735C1368(uParam0->f_425))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME(uParam0->f_425);
		}
		func_66(uParam0, 512);
		func_60(*uParam0);
		VOLUME::DELETE_VOLUME(uParam0->f_425);
	}
}

void func_56(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_40(uParam0->f_2889, 2097152);
	bVar1 = func_5(uParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_114(iVar3))
		{
		}
		else if (!func_115(iVar3))
		{
		}
		else if (!func_116(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				func_172(uParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(var uParam0)
{
	func_173(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_5))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_5));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	return 1;
}

void func_59(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	((*Global_1835011)[iParam0 /*74*/])->f_58 = 0;
	((*Global_1835011)[iParam0 /*74*/])->f_59 = 0;
	((*Global_1835011)[iParam0 /*74*/])->f_60 = 0;
}

void func_60(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	((*Global_1835011)[iParam0 /*74*/])->f_61 = 0;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_174(bParam0);
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_175())
	{
		return;
	}
	func_176();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_114(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (func_177(iVar2))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_1664 && iParam1) != 0;
}

void func_64(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2));
				if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), 0, 1);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_65(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && !ITEMSET::IS_ITEMSET_VALID(uParam0->f_2888))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_2888))
	{
		uParam0->f_2888 = ITEMSET::CREATE_ITEMSET(true);
	}
	LAW::_0x522F74636DF10201(PLAYER::GET_PLAYER_INDEX(), uParam0->f_2888);
	if (ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2888) <= 0)
	{
		LAW::_0xDA1A9ADC4E3D4B16(uParam0->f_2888, 1, 0);
	}
	if (ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2888) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2888))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_2888)));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(uParam0->f_2888);
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 - (iParam0->f_2 && iParam1));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_68()
{
	int iVar0;

	if (func_178(&Global_1898437) && func_179(&Global_1898437) == 1)
	{
		iVar0 = func_180(&Global_1898437);
		if ((func_81(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) > 0)
		{
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1835011)[iVar0 /*74*/])->f_22), 1);
		}
	}
}

int func_69(var uParam0)
{
	return 1;
}

void func_70(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_181(uParam0) };
	func_182(uParam0, &Var0);
}

void func_71(var uParam0)
{
	char cVar0[64];
	char cVar8[64];

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_425))
	{
		StringCopy(&cVar0, func_183(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		uParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_184(*uParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_185(uParam0, uParam0->f_425, 0);
		func_186(*uParam0, uParam0->f_425);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_426))
	{
		StringCopy(&cVar8, func_183(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		uParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_184(*uParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		func_187(uParam0, uParam0->f_426);
	}
}

void func_72(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_188(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_73(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_189(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

int func_74(int iParam0, bool bParam1, int iParam2)
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
		if (func_190())
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
		iVar0 = func_180(&(Global_1898164->f_1[0 /*5*/]));
		if (func_191(iVar0) && func_192(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_178(&(Global_1898164->f_1[0 /*5*/])))
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

void func_75(int iParam0, int iParam1)
{
	func_96(&(iParam0->f_428), iParam1);
}

void func_76(int iParam0)
{
	func_193(&(iParam0->f_428), &(iParam0->f_958));
}

int func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_83(uParam0, 256) && !func_83(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_82(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_90(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			vVar0 = { func_125(uParam0) };
			if (!func_90(vVar0))
			{
				func_194(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_195(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_196(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_197();
				uParam0->f_529 = 0;
			}
			func_198(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_199(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, 4096, 1);
			func_103(uParam0, 32768, 1);
			func_103(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_200(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (func_200(uParam0) >= func_196(uParam0))
				{
				}
				Var4 = { func_201(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_202(uParam0);
				}
				Var4 = { func_201(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_203(uParam0, 0, 0, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
		{
			return 1;
		}
		func_88(uParam0);
		if (!uParam0->f_529)
		{
			if (func_204())
			{
				func_205(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_181(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_462[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_462[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_462[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, uParam0->f_462[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, uParam0->f_462[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_83(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &Var15))
				{
					if (!func_83(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, &Var15) && !ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &Var15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_444, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &Var15);
						}
						func_96(uParam0, 16777216);
					}
					if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_96(uParam0, 256);
			func_103(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_78(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

int func_79(var uParam0)
{
	if (func_152(&(uParam0->f_29), 62))
	{
		switch (func_206())
		{
			case 1:
				if (!func_152(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_152(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_152(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_152(&(uParam0->f_29), 32))
				{
					if (func_152(&(uParam0->f_29), 2))
					{
						if (func_208(func_207()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

int func_80(int iParam0)
{
	iParam0 = func_209(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

bool func_81(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_82(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_83(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_210("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_210("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_96(uParam0, 8192);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, 0)) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444)) || func_83(uParam0, 512))
	{
		if (!func_211(uParam0->f_501, 128))
		{
			func_212();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, func_213(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, func_213(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_211(uParam0->f_501, 128))
		{
			func_212();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_214(iVar1))
		{
			if (func_215(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_211(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_216(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_444);
		func_212();
	}
}

void func_85(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_50(uParam0) == 2 && (func_217(uParam0->f_500, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_181(uParam0) };
		func_218(uParam0, &Var0);
	}
	func_219(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_220(uParam0, 0);
	}
	if (func_221())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_222();
	}
	if (func_223())
	{
		func_224(1);
	}
	func_203(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_225(uParam0, cVar8);
	func_93(1, 0);
	func_198(uParam0);
	if (func_87(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	func_226(uParam0);
	func_227(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43799 = uParam0->f_444;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_439 && iParam1) != 0;
}

void func_88(var uParam0)
{
	if ((!func_83(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_444, 0))
	{
		func_228(uParam0);
		func_227(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		func_96(uParam0, 32768);
	}
}

Vector3 func_89(var uParam0)
{
	return uParam0->f_5;
}

int func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_229(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_93(bool bParam0, int iParam1)
{
	if (func_230())
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_231())
		{
			func_232(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_94(var uParam0)
{
	vector3 vVar0;

	if (!func_83(uParam0, 4))
	{
		if (func_217(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_233(uParam0) };
		if (!func_217(uParam0->f_500, 524288))
		{
			func_234(&(uParam0->f_512));
		}
		func_235(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_236(uParam0, 0f, 0f, 0f);
		func_237(uParam0);
		func_238(uParam0);
		func_239(uParam0, 0f, 0f, 0f, 0, 0);
		func_240(uParam0);
		func_96(uParam0, 4);
		func_241(uParam0, 0);
		func_242(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_513)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_513));
		}
	}
}

int func_95(var uParam0, int iParam1)
{
	if (func_83(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_444, "ExportCamera") && iParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444))
	{
		func_96(uParam0, 262144);
		func_241(uParam0, 1);
		return 1;
	}
	return 0;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_97(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_444) * 1000f));
}

int func_98(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000f));
}

int func_99(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_243(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return 1;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_444, 0))
	{
		if (func_83(uParam0, 524288))
		{
			ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444) && func_83(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_101(var uParam0)
{
	if (((func_83(uParam0, 1073741824) && !func_83(uParam0, 524288)) && func_83(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_102(var uParam0)
{
	if (!func_83(uParam0, 536870912))
	{
		func_241(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_197();
		func_96(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_244(uParam0);
	func_86(uParam0, 1);
	func_199(uParam0);
	func_245(uParam0);
	func_246(uParam0);
	func_247(uParam0, 4);
	func_202(uParam0);
	func_220(uParam0, 1);
	func_198(uParam0);
	func_248(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	func_249(!func_211(uParam0->f_501, 128));
	if (!func_211(uParam0->f_501, 128))
	{
		func_212();
	}
}

void func_103(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_250(2000);
	Global_16 = 0;
	func_251();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_211(*uParam0, 8));
	if (!func_211(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_211(*uParam0, 2) || func_211(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(-1679307491);
	}
	if (!func_211(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_211(*uParam0, 32))
	{
		func_252(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_253(-1623728698, 0);
	}
	func_242(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_105()
{
	Global_1935630->f_52 = 1;
}

int func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && func_5(iParam0, 1048576))
	{
		func_66(iParam0, 1048576);
		return 0;
	}
	if (!func_5(iParam0, 8388608))
	{
		if (BUILTIN::VDIST2(func_184(*iParam0), Global_36) < (10f * 10f))
		{
			func_25(iParam0, 8388608);
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return 0;
		}
	}
	if (!func_5(iParam0, 1048576))
	{
		if (bVar0)
		{
			func_25(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_184(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (func_254(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return 1;
	}
	else if (BUILTIN::VDIST2(func_184(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return 1;
	}
	else if (!func_5(iParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_184(*iParam0), 1f, 20000, 0.25f, false, 40000f);
		HUD::_0x4CC5F2FC1332577F(-1679307491);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
		PED::FORCE_PED_MOTION_STATE(Global_35, -668482597, false, 1, false);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		func_25(iParam0, 2097152);
	}
	if (func_18(&(iParam0->f_2890)))
	{
		if (func_48(&(iParam0->f_2890)) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_107(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 1024);
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_2(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_109(Global_1935630, 4194304);
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

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(int iParam0)
{
	int iVar0;

	if (func_255() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_257(func_256(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_256(iVar0), func_258(), 1))
			{
				func_259(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	if (Global_1935630->f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_108(0);
		func_65(iParam0, 1);
	}
	func_260(1, 0, 1);
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, 0, 0f);
	func_261(0f);
	Global_1935436->f_11 = 1;
	if (func_262())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_263();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_115(int iParam0)
{
	return func_264(iParam0, 16, 1);
}

bool func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_117(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_195(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_118(var uParam0)
{
	return func_113(*uParam0, 2);
}

float func_119()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_120(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
}

void func_121(var uParam0, int iParam1)
{
	func_265(uParam0, 4);
	func_266(uParam0, 10);
	func_267(uParam0, iParam1);
}

void func_122(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_119() - fParam1);
	func_268(uParam0, 1);
	func_269(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!ITEMSET::IS_ITEMSET_VALID(iParam1) || !ITEMSET::IS_ITEMSET_VALID(iParam2)) || !ITEMSET::IS_ITEMSET_VALID(iParam3))
	{
		return;
	}
	if (!func_270(iParam0))
	{
	}
	((*Global_1835011)[iParam0 /*74*/])->f_58 = iParam1;
	((*Global_1835011)[iParam0 /*74*/])->f_59 = iParam2;
	((*Global_1835011)[iParam0 /*74*/])->f_60 = iParam3;
}

Vector3 func_124(var uParam0)
{
	return func_89(&(uParam0->f_428));
}

Vector3 func_125(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_271(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_445, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_445, func_213(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

Vector3 func_126(int iParam0)
{
	return func_184(iParam0);
}

void func_127(var uParam0, vector3 vParam1)
{
	func_194(&(uParam0->f_428), vParam1);
}

int func_128(var uParam0)
{
	PED::_0xAB0D553FE20A6E25(0.7f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	if (!func_272(5))
	{
		return 0;
	}
	if (func_158() > 0.8f)
	{
		func_159(0.8f);
		iLocal_29 = 1;
	}
	func_273(uParam0, 0, &iLocal_25, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0);
	func_273(uParam0, 11, &iLocal_26, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0);
	iLocal_27 = func_274(138, 1, 0, 0, 1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_25) && ENTITY::DOES_ENTITY_EXIST(iLocal_26)) && ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		iLocal_24 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@dst5@leadin@INT@static_scene_props", 1, 0, false, true);
		func_275();
		func_277(&(uParam0->f_428), func_276("dst5_int"));
		return 1;
	}
	return 0;
}

void func_129(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(vLocal_14.x))
	{
		vLocal_14.x = ITEMSET::CREATE_ITEMSET(false);
	}
}

void func_130(var uParam0)
{
	func_173(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_142(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_132(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_12(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, 16384))
	{
		func_25(iParam0, 16384);
		if (!func_278(&vVar0))
		{
			return;
		}
		func_279(iParam0, vVar0, 0);
		func_25(iParam0, 524288);
	}
}

void func_133(int iParam0)
{
	if (func_200(&(iParam0->f_428)) != 15f || func_196(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_280(&(iParam0->f_428), 50f);
			func_281(&(iParam0->f_428), 75f);
			break;
		case 34:
			func_280(&(iParam0->f_428), 35f);
			func_281(&(iParam0->f_428), 50f);
			break;
		case 62:
			func_280(&(iParam0->f_428), 25f);
			func_281(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

bool func_134(var uParam0)
{
	return func_282(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_5(iParam0, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = func_283(*iParam0);
	if (!func_114(iVar0))
	{
		return 1;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_256(iVar0));
	return func_273(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	char cVar9[64];

	iVar0 = 1;
	MemCopy(&uVar1, {func_188(iParam0)}, 8);
	StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
	{
		if (!func_284(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_189(iParam0)}, 8);
		StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
		{
			if (!func_285(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_137()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cigar02x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlebeer01x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_beermugglass01x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_nutbowl01x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_sacklarge01x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_dressbox01x")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_barrag01x")))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_24, 1, 0))
	{
		return 0;
	}
	return 1;
}

struct<4> func_138(int iParam0, int iParam1)
{
	return func_286(iParam0, iParam1);
}

void func_139(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_287(iParam0, Param1, Param1.f_3, iParam5, iParam6);
}

void func_140(var uParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43615))
	{
		Global_43615 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_43615))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_43615);
	}
	if (bParam2)
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, func_288(), true);
	}
}

void func_141(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(vLocal_14.y))
	{
		vLocal_14.f_1 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		vLocal_14.f_2[0] = OBJECT::CREATE_OBJECT(joaat("p_cigar02x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[0]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[0]), bParam1);
	}
	func_289(&(vLocal_14.f_2[0]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[0]), vLocal_14.y);
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		vLocal_14.f_2[1] = OBJECT::CREATE_OBJECT(joaat("p_bottlebeer01x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[1]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[1]), bParam1);
	}
	func_289(&(vLocal_14.f_2[1]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[1]), vLocal_14.y);
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		vLocal_14.f_2[2] = OBJECT::CREATE_OBJECT(joaat("p_beermugglass01x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[2]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[2]), bParam1);
	}
	func_289(&(vLocal_14.f_2[2]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[2]), vLocal_14.y);
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		vLocal_14.f_2[3] = OBJECT::CREATE_OBJECT(joaat("p_nutbowl01x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[3]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[3]), bParam1);
	}
	func_289(&(vLocal_14.f_2[3]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[3]), vLocal_14.y);
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		vLocal_14.f_2[4] = OBJECT::CREATE_OBJECT(joaat("p_cs_sacklarge01x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[4]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[4]), bParam1);
	}
	func_289(&(vLocal_14.f_2[4]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[4]), vLocal_14.y);
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		vLocal_14.f_2[5] = OBJECT::CREATE_OBJECT(joaat("p_cs_dressbox01x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[5]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[5]), bParam1);
	}
	func_289(&(vLocal_14.f_2[5]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[5]), vLocal_14.y);
	if (!ENTITY::DOES_ENTITY_EXIST(&(vLocal_14.f_2[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		vLocal_14.f_2[6] = OBJECT::CREATE_OBJECT(joaat("p_cs_barrag01x"), 2791.106f, -1169.426f, 48.1392f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(vLocal_14.f_2[6]), 0f, 0f, -19.001f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(&(vLocal_14.f_2[6]), bParam1);
	}
	func_289(&(vLocal_14.f_2[6]), vLocal_14.x);
	func_289(&(vLocal_14.f_2[6]), vLocal_14.y);
}

void func_142(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_144(&(uParam0->f_428), iParam1, sParam2, iParam3, iParam4, bParam6);
	func_290(uParam0, iParam1, sParam2);
	if (bParam5)
	{
		func_291(uParam0, iParam1);
	}
}

char* func_143(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_292(iVar0);
}

void func_144(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_293(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_294(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_295(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_296(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_297(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_298(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_299(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

int func_145(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_300(iParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return iVar0;
}

void func_146(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_301(iParam0, 0, 0);
	if (func_302(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_303(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_304(iParam0, 1);
			}
			else
			{
				func_305(iParam0, 1);
			}
		}
		else
		{
			func_306(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_307())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

struct<4> func_147(int iParam0)
{
	struct<4> Var0;

	if (!func_81(iParam0))
	{
		return Var0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_3;
}

void func_148(var uParam0)
{
	struct<12> Var0;
	int iVar12;

	if (func_308(&(uParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_428.f_13[iVar12 /*12*/])))
		{
			*(Global_43618[iVar12 /*12*/]) = { *(uParam0->f_428.f_13[iVar12 /*12*/]) };
		}
		else
		{
			*(Global_43618[iVar12 /*12*/]) = { Var0 };
		}
		iVar12++;
	}
}

bool func_149()
{
	return func_309(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_150()
{
	if (func_149())
	{
		Global_18 = 0;
		Global_43883 = 0;
		if (!func_169())
		{
			func_61(1);
		}
	}
}

void func_151(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_63(uParam1, 32768))
	{
		Var0 = { func_181(uParam0) };
		func_218(uParam0, &Var0);
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_310(uParam1, uParam1->f_1684) };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_310(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), 0);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (func_63(uParam1, 268435456))
		{
			func_311(&(uParam0->f_500), 16384);
		}
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_312(uParam1, 524288);
	}
	if (func_313(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_314(uParam1->f_1016[uParam1->f_1684 /*41*/], 256))
		{
			func_311(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1692)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

int func_152(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

void func_154(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_315(iParam0))
	{
		return;
	}
	if (!func_316(iParam0, 1))
	{
		return;
	}
	if (!func_316(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_317(iParam0)) && func_318(iParam0))
	{
		return;
	}
	func_319(iParam0, 1);
	func_320(iParam0);
	if (func_322(func_321(iParam0)))
	{
		iVar0 = func_323(iParam0);
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			_NAMESPACE48::RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = _NAMESPACE48::GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_319(iParam0, 16);
	}
	if (func_316(iParam0, 128) && !bParam3)
	{
		func_324(iParam0, 0);
	}
}

int func_155(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_325(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

var func_156(int iParam0)
{
	var uVar0;

	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_8;
}

int func_157(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam1->f_1016[uParam1->f_1684 /*41*/])->f_30)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, &((uParam1->f_1016[uParam1->f_1684 /*41*/])->f_30)))
		{
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &((uParam1->f_1016[uParam1->f_1684 /*41*/])->f_30)))
			{
				func_218(uParam0, &((uParam1->f_1016[uParam1->f_1684 /*41*/])->f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

float func_158()
{
	return (func_326(150f, BUILTIN::TO_FLOAT(Global_1934765->f_286)) / BUILTIN::TO_FLOAT(300));
}

void func_159(float fParam0)
{
	func_327(BUILTIN::CEIL((BUILTIN::TO_FLOAT(300) - (BUILTIN::TO_FLOAT(300) * fParam0))));
}

float func_160(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

Vector3 func_161(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_162(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_328(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

struct<4> func_163(int iParam0)
{
	return iParam0->f_2880;
}

int func_164(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_63(uParam0, 32768))
	{
		return 1;
	}
	if (func_8(uParam0) >= 3)
	{
		uParam0->f_1896 = func_329(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1897 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630->f_40))
			{
				uParam0->f_1898 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_330(uParam0);
	}
	if (func_8(uParam0) < 10)
	{
		if (func_8(uParam0) == 3)
		{
			func_331(uParam0, iParam5, bParam6);
		}
		else if (func_8(uParam0) > 3)
		{
			if (func_332(uParam0) == 0)
			{
				if (!func_63(uParam0, 524288))
				{
					func_333(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_265(uParam0, 4);
					func_266(uParam0, 10);
					func_267(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_63(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			func_334(0);
			func_335();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1684 >= 0)
			{
				if (!func_314(uParam0->f_1016[uParam0->f_1688 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_336(uParam0, uParam0->f_1684))
				{
					if (func_337(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						func_338(uParam0, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_27, (uParam0->f_1345[uParam0->f_1688 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					func_338(uParam0, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_27, (uParam0->f_1345[uParam0->f_1688 /*22*/])->f_1, 1065353216);
				}
				func_339(uParam0);
			}
		}
	}
	bVar0 = func_340(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_63(uParam0, 268435456) && bVar1) && !func_63(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					iVar2 = 1;
				}
			}
			if (!bVar3 || iVar2)
			{
				func_341(uParam0, 131072);
				func_341(uParam0, 268435456);
			}
		}
		if (func_313(uParam0, 64) || (uParam0->f_1684 >= 0 && !func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 524288)))
		{
			if (CAM::GET_LETTER_BOX_RATIO() > 0f || func_332(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_8(uParam0) == 3 || func_63(uParam0, 131072))
	{
		func_342(uParam0);
		if (!func_63(uParam0, 262144))
		{
			if ((bVar0 && func_63(uParam0, 65536)) || func_63(uParam0, 131072))
			{
				func_341(uParam0, 32768);
				func_265(uParam0, 4);
				func_266(uParam0, 10);
				uParam0->f_1769 = 1;
				func_267(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_8(uParam0) >= 3)
	{
		func_343(uParam0, iParam5);
		func_344(uParam0);
		if (!func_345(uParam0, 1))
		{
			func_346(uParam0);
		}
		func_347(uParam0);
	}
	switch (func_8(uParam0))
	{
		case 0:
			func_348(uParam0, Param1, iParam5);
			break;
		case 1:
			func_349(uParam0);
			break;
		case 2:
			func_350(uParam0);
			break;
		case 3:
			if (func_351(uParam0))
			{
				func_110(2);
				func_338(uParam0, (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_27, (uParam0->f_1345[uParam0->f_1684 /*22*/])->f_1, 1065353216);
				func_26(&(uParam0->f_1872));
				func_265(uParam0, 1);
				func_352();
				func_266(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_63(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_8(uParam0) == 5)
			{
				if (func_353(uParam0))
				{
					func_265(uParam0, 2);
					func_266(uParam0, 6);
				}
			}
			if (func_8(uParam0) == 6)
			{
				if (func_354(uParam0))
				{
					func_265(uParam0, 3);
					func_266(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || func_21(&(uParam0->f_1872)) >= 15f)
			{
				if (func_355(uParam0, iParam5))
				{
					if (func_356(uParam0))
					{
						uParam0->f_1685 = func_357(uParam0);
						func_26(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_DISABLE_HUD_CONTEXT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_265(uParam0, 6);
						func_266(uParam0, 9);
					}
					else
					{
						func_265(uParam0, 4);
						func_266(uParam0, 10);
						func_267(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_355(uParam0, iParam5))
			{
				func_267(uParam0, iParam5);
				func_266(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	return func_351(&(iParam0->f_958));
}

int func_166(int iParam0)
{
	float fVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar1 = iParam0->f_423;
		fVar0 = 10f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar1 = iParam0->f_424;
		fVar0 = 15f;
	}
	else
	{
		iVar1 = iParam0->f_422;
		fVar0 = 5f;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iVar1))
	{
		if (func_358(Global_35, iVar1, 1, 0))
		{
			func_25(iParam0, 8388608);
			return 1;
		}
	}
	if (BUILTIN::VDIST2(func_184(*iParam0), Global_36) < (fVar0 * fVar0))
	{
		func_25(iParam0, 8388608);
		return 1;
	}
	return 0;
}

int func_167(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0 /*18*/])->f_17 == 0 && (uParam0->f_475[iVar0 /*18*/])->f_2 == 9) && (uParam0->f_475[iVar0 /*18*/])->f_4 >= 0)
		{
			iVar1 = (uParam0->f_1522[(uParam0->f_475[iVar0 /*18*/])->f_4 /*10*/])->f_8;
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar1) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar1, 1, 0))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar2 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar2 /*13*/])->f_2))
					{
						Var3 = { func_359(uParam0, (uParam0->f_3[iVar2 /*13*/])->f_2) };
						if (ANIMSCENE::_0x6F1F0B17109309DA(iVar1, &Var3))
						{
							if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE((uParam0->f_3[iVar2 /*13*/])->f_2, iVar1) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE((uParam0->f_3[iVar2 /*13*/])->f_2, -1))
							{
								return 1;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_168(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout") && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout", true);
					}
				}
				else if (func_63(uParam0, 32768) && func_360(uParam0->f_1522[iVar0 /*10*/], 128))
				{
					func_361((uParam0->f_1522[iVar0 /*10*/])->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_169()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43799) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43799, 0));
}

void func_170(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	func_362(vVar0, 0);
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam1);
	POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam1);
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	func_363(iParam2);
	if (bParam4)
	{
		func_364(uParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(uParam0, 4194304))
		{
			bParam6 = func_365((*Global_1835011)[*uParam0 /*74*/], 1024);
			bVar0 = func_365((*Global_1835011)[*uParam0 /*74*/], 65536);
		}
	}
	func_366(iParam1, iParam3, bParam4, bParam5, -1082130432, 1, 1, bParam6, bVar0, 0, 0);
}

void func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_367((*uParam0)[iVar0 /*3*/]))
		{
			if (func_368(((*uParam0)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_369((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_370((*uParam1)[iVar0 /*5*/]))
		{
			if (func_368(((*uParam1)[iVar0 /*5*/])->f_4, iParam12))
			{
				func_371((*uParam1)[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_372((*uParam2)[iVar0 /*3*/]))
		{
			if (func_368(((*uParam2)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_373((*uParam2)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_374((*uParam3)[iVar0 /*3*/]))
		{
			if (func_368(((*uParam3)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_375((*uParam3)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_368(uParam4->f_1, iParam12))
	{
		func_376(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_377((*uParam5)[iVar0 /*67*/]))
		{
			if (func_368(((*uParam5)[iVar0 /*67*/])->f_3, iParam12))
			{
				func_378((*uParam5)[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_377((*uParam5)[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_379(((*uParam5)[iVar0 /*67*/])->f_4[iVar1 /*3*/]))
				{
					if (func_368((((*uParam5)[iVar0 /*67*/])->f_4[iVar1 /*3*/])->f_2, iParam12))
					{
						func_380(((*uParam5)[iVar0 /*67*/])->f_4[iVar1 /*3*/], ((*uParam5)[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_381((*uParam6)[iVar0 /*4*/]))
		{
			if (func_368(((*uParam6)[iVar0 /*4*/])->f_3, iParam12))
			{
				func_382((*uParam6)[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_383((*uParam7)[iVar0 /*5*/]))
		{
			if (func_368(((*uParam7)[iVar0 /*5*/])->f_4, iParam12))
			{
				func_384((*uParam7)[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_385((*uParam8)[iVar0 /*3*/]))
		{
			if (func_368(((*uParam8)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_386((*uParam8)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_387((*uParam9)[iVar0 /*3*/]))
		{
			if (func_368(((*uParam9)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_388((*uParam9)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_389((*uParam10)[iVar0 /*4*/]))
		{
			if (func_368(((*uParam10)[iVar0 /*4*/])->f_3, iParam12))
			{
				func_390((*uParam10)[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_391((*uParam11)[iVar0 /*3*/]))
		{
			if (func_368(((*uParam11)[iVar0 /*3*/])->f_2, iParam12))
			{
				func_392((*uParam11)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_174(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_175()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Global_43805[iVar0 /*6*/])) && SCRIPTS::IS_THREAD_ACTIVE((Global_43805[iVar0 /*6*/])->f_1, false)) && (Global_43805[iVar0 /*6*/])->f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(&(Global_43805[iVar0 /*6*/]), "pl_breakout")) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(Global_43805[iVar0 /*6*/]), "pl_breakout"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_176()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Global_43805[iVar0 /*6*/])) && SCRIPTS::IS_THREAD_ACTIVE((Global_43805[iVar0 /*6*/])->f_1, false)) && (Global_43805[iVar0 /*6*/])->f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(&(Global_43805[iVar0 /*6*/]), "pl_breakout")) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(Global_43805[iVar0 /*6*/]), "pl_breakout"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_43805[iVar0 /*6*/]), "pl_breakout", true);
		}
		iVar0++;
	}
}

int func_177(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Global_43805[iVar0 /*6*/])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Global_43805[iVar0 /*6*/]), 0)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, &(Global_43805[iVar0 /*6*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_178(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_179(int iParam0)
{
	if (!func_178(iParam0))
	{
		return 0;
	}
	return func_394(func_393(iParam0));
}

int func_180(int iParam0)
{
	if (!func_178(iParam0))
	{
		return -1;
	}
	return func_395(func_393(iParam0));
}

struct<8> func_181(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_396(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_397() };
	}
	return Var0;
}

void func_182(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_183()
{
	return "unnamed";
}

Vector3 func_184(int iParam0)
{
	if (func_398(iParam0))
	{
		return func_399(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uParam0->f_425 = iParam1;
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	func_66(uParam0, 512);
	uParam0->f_427 = func_145(iParam1, 0, 0, 0);
}

void func_186(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_270(iParam0))
	{
	}
	((*Global_1835011)[iParam0 /*74*/])->f_61 = iParam1;
}

void func_187(var uParam0, int iParam1)
{
	char cVar0[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uParam0->f_426 = iParam1;
	func_400(iParam1);
	StringCopy(&cVar0, func_183(), 64);
	func_401(iParam1, &cVar0, 1, 0, 0, 0, -1082130432);
}

struct<2> func_188(int iParam0)
{
	struct<2> Var0;

	MemCopy(&Var0, {func_156(iParam0)}, 2);
	return Var0;
}

struct<2> func_189(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_188(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

int func_190()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_193(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam1->f_1016[iVar0 /*41*/])->f_30)))
		{
			func_402(uParam0, &((uParam1->f_1016[iVar0 /*41*/])->f_30), 1);
		}
		iVar0++;
	}
}

void func_194(var uParam0, vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_195(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_196(var uParam0)
{
	return uParam0->f_435;
}

void func_197()
{
	struct<4> Var0;

	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_403(Var0);
	}
}

void func_198(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]) && (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, uParam0->f_462[iVar0 /*9*/]) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_444, uParam0->f_462[iVar0 /*9*/])))
		{
			ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, uParam0->f_462[iVar0 /*9*/]);
		}
		(uParam0->f_462[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

void func_199(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_404(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_83(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_103(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_103(uParam0, 16, 1);
}

float func_200(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_201(var uParam0)
{
	return uParam0->f_446;
}

void func_202(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_405() };
	func_182(uParam0, &Var0);
}

void func_203(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_406(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_183());
		func_96(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_407(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_96(uParam0, 16);
	}
}

bool func_204()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_205(int iParam0)
{
	struct<4> Var0;

	if (func_408(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_403(Var0);
}

int func_206()
{
	return &Global_1899516;
}

int func_207()
{
	return &Global_1899515;
}

int func_208(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_209(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> func_210(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_212()
{
	if (func_409(Global_43800))
	{
		func_410(&Global_43800, 0, 0);
	}
}

char* func_213(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_411(iVar0);
}

int func_214(int iParam0)
{
	int iVar0;

	if (func_412(iParam0))
	{
		iVar0 = _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam1 && !func_409(iParam0))
	{
		return false;
	}
	return !func_413(iParam0, 4);
}

int func_216(int iParam0, bool bParam1)
{
	if (!func_409(Global_43800))
	{
		Global_43800 = func_414("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_415(Global_43800, 0, 1);
		func_416(Global_43800, 6, 1);
		if (bParam1)
		{
			func_416(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_215(Global_43800, 0))
		{
			func_417(Global_43800, 1, 1);
		}
		if (func_418(Global_43800, 1) != 0f && iParam0)
		{
			func_415(Global_43800, 1, 1);
		}
		else
		{
			func_415(Global_43800, 0, 1);
		}
		return func_419(Global_43800, 1);
	}
	return 0;
}

bool func_217(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_218(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_462[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_446 };
			*(uParam0->f_462[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_182(uParam0, sParam1);
	func_103(uParam0, 2097152, 1);
	func_96(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_444, sParam1, true);
}

void func_219(var uParam0, var uParam1)
{
	if (((!func_83(uParam0, 32) || func_420(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_311(&(uParam0->f_500), 256);
	}
}

void func_220(var uParam0, int iParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_221()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_222()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

int func_223()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

void func_224(int iParam0)
{
	if (func_223())
	{
		Global_1357509 = 1;
	}
	if (func_421(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_225(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

void func_226(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]))
		{
			func_422(uParam0, uParam0->f_462[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_405() };
	func_422(uParam0, &Var1);
	Var1 = { func_181(uParam0) };
	func_422(uParam0, &Var1);
}

void func_227(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_243(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_243(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_423(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_243(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_424(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_228(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_243(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_298(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

float func_229(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_230()
{
	return func_412(_NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_231()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_232(int iParam0)
{
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

Vector3 func_233(var uParam0)
{
	return uParam0->f_502;
}

void func_234(var uParam0)
{
	int iVar0;

	if (func_425(&iVar0))
	{
		if (func_426(iVar0, 0))
		{
			if (func_427(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_252(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_426(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_235(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_428(0, 0);
		func_429(-1);
	}
	func_92(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_217(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_217(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_217(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_217(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_217(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_217(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_217(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_217(*uParam0, 4) && !func_217(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(-1679307491);
	}
	if (!func_217(*uParam0, 2048))
	{
		func_430(0, 0);
	}
	if (func_217(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_217(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, 1);
	}
	if (func_217(*uParam0, 8192))
	{
		func_431();
	}
	if (!func_217(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_217(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_217(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_217(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_432() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_90(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_433(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_434(2);
						func_435(-1);
						func_436(vVar3);
						func_438(func_437());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_217(*uParam0, 4096))
	{
		func_424(Global_35);
	}
	if (!func_217(*uParam0, 1048576))
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(7, 1, 0);
	}
	if (!func_217(*uParam0, 2097152))
	{
		if (func_439() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_236(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

void func_237(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_83(uParam0, 2048) && !func_90(func_440(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_287(iVar1, func_440(uParam0), func_441(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_287(iVar3, func_440(uParam0), func_441(uParam0), 2, 1073741824);
		}
	}
}

void func_238(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_83(uParam0, 268435456) && !func_90(func_440(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_440(uParam0) };
			func_287(iVar0, vVar1, func_442(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_239(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 };
	uParam0->f_508 = iParam4;
	if (func_90(vParam1))
	{
		func_103(uParam0, 2048, 1);
	}
	else
	{
		func_96(uParam0, 2048);
		if (bParam5)
		{
			func_96(uParam0, -2147483648);
		}
	}
}

void func_240(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_243(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_444(func_443(iVar1, 0, 1, 0)))
						{
							if (!func_445(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_444(func_443(iVar1, 1, 1, 0)))
						{
							if (!func_445(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_241(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_242(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_255() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_446(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_447(iParam1, 29, bVar4, 1, 0);
			func_447(iParam1, 31, bVar4, 1, 0);
			func_447(iParam1, 30, bVar4, 1, 0);
			func_447(iParam1, 22, bVar4, 1, 0);
			func_447(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_448(32768) && func_449(1108822547, 8)) && func_450(10, iParam3))
	{
		func_451(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_452(iVar1, 1);
			if (func_449(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_450(iVar1, iParam3))
				{
				}
				else if ((func_449(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_449(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_447(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_453(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_447(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_449(iVar3, 1))
							{
								func_454(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_244(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	func_455(uParam0);
	func_194(uParam0, 0f, 0f, 0f);
	func_456(uParam0);
}

void func_245(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_246(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_247(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_299(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_248(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_249(bool bParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_212();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_250(int iParam0)
{
	func_457();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_251()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

int func_252(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_458(iParam1, 1, 0) };
		iParam3 = func_459(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_461(iParam1, iParam2, func_460(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_462(1, (func_255() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_460(iParam3, 1) /*11*/])
			{
				func_463(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_448(32768) && iParam1 != &Global_1946804->f_57[func_460(iParam3, 1) /*11*/])
			{
				func_464();
				func_463(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_463(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_465(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_463(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_205(0);
			func_466(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_463(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_253(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_458(iParam0, 0, 0) };
	Var5 = { func_467(iParam0, Var0, Var0.f_4, 0) };
	if (func_468(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_469(0), &Var5, iParam1);
}

int func_254(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_470(*uParam1, 128))
	{
		if (!func_471(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_470(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_472(iVar2))
			{
				return 0;
			}
			if (!func_471(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_473(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_470(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_474(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0)));
			func_475(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_470(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_470(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_472(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_474(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_474(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_474(iParam2, 8192))
				{
					HUD::_DISABLE_HUD_CONTEXT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_470(*uParam1, 2336))
		{
			if (!func_472(iVar2))
			{
			}
			if (func_476(iVar2, *uParam1))
			{
				func_477(uParam1, 32);
				func_477(uParam1, 256);
				func_477(uParam1, 2048);
				func_475(uParam1, 512);
				func_475(uParam1, 1024);
				func_475(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_470(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_472(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_477(uParam1, 64);
			}
		}
		if (func_474(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_474(iParam2, 1024))) || func_474(iParam2, 8)) && !func_470(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_475(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_474(iParam2, 4096)) && !func_470(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_475(uParam1, 2048);
			func_475(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_474(iParam2, 32)) && !func_470(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_475(uParam1, 256);
			func_475(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_475(uParam1, 64);
		}
		else if (!func_474(iParam2, 1))
		{
			if (!func_474(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_473(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_470(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_475(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_475(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_474(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_475(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_474(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_475(uParam1, 8);
	}
	return 0;
}

int func_255()
{
	return Global_1572887->f_12;
}

int func_256(int iParam0)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_257(int iParam0, int iParam1)
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
	if (func_470(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_470(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_258()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_259(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

void func_260(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(_NAMESPACE48::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3)))
					{
						_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(_NAMESPACE48::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, 0, 0);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_261(float fParam0)
{
	func_479(10, fParam0);
}

int func_262()
{
	if (func_255() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_263()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

bool func_264(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_478(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_267(var uParam0, int iParam1)
{
	int iVar0;

	if (func_313(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISABLE_HUD_CONTEXT(-1679307491);
			HUD::_DISABLE_HUD_CONTEXT(474191950);
			break;
		default:
			if (func_149())
			{
				if (!func_63(uParam0, 524288))
				{
					HUD::_0x4CC5F2FC1332577F(-1679307491);
				}
				HUD::_DISABLE_HUD_CONTEXT(474191950);
			}
			break;
	}
	if (func_149())
	{
		func_312(uParam0, 512);
		func_480(uParam0, 128);
		PED::_0xCB9401F918CB0F75(Global_35, "PlayLeadin", 0, -1);
		if (func_481(uParam0->f_1016[uParam0->f_1684 /*41*/], 4))
		{
			PED::_0xCB9401F918CB0F75(Global_35, func_482((uParam0->f_1016[uParam0->f_1684 /*41*/])->f_39), 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_150();
	func_168(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	func_480(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_1875);
	}
	if (func_313(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_483()))
	{
		CAM::_0x798BE43C9393632B(func_483());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1345[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1345[iVar0 /*22*/])->f_2), func_483())) && CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1345[iVar0 /*22*/])->f_2)))
		{
			if ((uParam0->f_1345[iVar0 /*22*/])->f_21)
			{
				CAM::_0x798BE43C9393632B(&((uParam0->f_1345[iVar0 /*22*/])->f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_63(uParam0, 524288) || iParam1 == 1)
	{
		func_212();
	}
	if (func_313(uParam0, 16))
	{
		if (func_332(uParam0) == 0)
		{
			if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
			{
			}
		}
		else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
		}
	}
	func_484();
	if (func_313(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1901, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
		}
	}
	func_346(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_270(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_485(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

struct<4> func_271(var uParam0)
{
	return uParam0->f_440;
}

int func_272(int iParam0)
{
	if (!func_486(iParam0))
	{
		return 0;
	}
	return func_487(iParam0, 8);
}

int func_273(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;

	if (!func_114(iParam1))
	{
		return 0;
	}
	if (func_488(iParam0, *uParam2))
	{
		if (*uParam2 != func_489(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (func_90(vVar0))
	{
		vVar0 = { func_126(*iParam0) };
	}
	if (!func_490(iParam1, 28, 1))
	{
		func_491(iParam1, 28, 1);
	}
	*uParam2 = func_492(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*uParam2))
		{
			return 0;
		}
		func_291(iParam0, *uParam2);
		func_493(iParam0, *uParam2);
		func_494(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!func_471(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		func_142(iParam0, *uParam2, 0, 0, 0, 1, 0);
		func_495(iParam1, 0, 0, 1);
		func_496(iParam1);
		return 1;
	}
	return 0;
}

int func_274(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_497(iParam0, 1))
	{
		return 0;
	}
	if (func_322(func_321(iParam0)))
	{
		iVar1 = func_323(iParam0);
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				_NAMESPACE48::REVIVE_PERSCHAR(iVar1);
			}
		}
		_NAMESPACE48::_0x6759BEE6762E140B(iVar1);
		iVar0 = _NAMESPACE48::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((iParam4 && !func_317(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_498(iParam0, 1);
	func_499(iParam0);
	if (bParam3)
	{
		func_498(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_275()
{
	STREAMING::REQUEST_MODEL(joaat("p_cigar02x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_bottlebeer01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_beermugglass01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_nutbowl01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_sacklarge01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_dressbox01x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_barrag01x"), false);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_24);
}

struct<8> func_276(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_277(var uParam0, struct<8> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return;
	}
	uParam0->f_454 = { Param1 };
}

int func_278(char* sParam0)
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
	{
		return 1;
	}
	return 0;
}

void func_279(int iParam0, char[12] cParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {cParam1}, 4);
	func_25(iParam0, 32768);
	func_500(&(iParam0->f_958), iParam4);
}

void func_280(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_281(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_367((*uParam0)[iVar1 /*3*/]))
		{
			if (func_368(((*uParam0)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_501((*uParam0)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_370((*uParam1)[iVar1 /*5*/]))
		{
			if (func_368(((*uParam1)[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_502((*uParam1)[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_372((*uParam2)[iVar1 /*3*/]))
		{
			if (func_368(((*uParam2)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_503((*uParam2)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_374((*uParam3)[iVar1 /*3*/]))
		{
			if (func_368(((*uParam3)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_375((*uParam3)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_368(uParam4->f_1, iParam12))
	{
		if (!func_376(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_377((*uParam5)[iVar1 /*67*/]))
		{
			if (func_368(((*uParam5)[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_504((*uParam5)[iVar1 /*67*/]))
				{
					if (!func_505((*uParam5)[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_377((*uParam5)[iVar1 /*67*/]))
		{
			if (func_368(((*uParam5)[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_504((*uParam5)[iVar1 /*67*/]))
				{
					if (func_505((*uParam5)[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_379(((*uParam5)[iVar1 /*67*/])->f_4[iVar2 /*3*/]))
							{
								if (!func_506(((*uParam5)[iVar1 /*67*/])->f_4[iVar2 /*3*/], ((*uParam5)[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_381((*uParam6)[iVar1 /*4*/]))
		{
			if (func_368(((*uParam6)[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_507((*uParam6)[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_383((*uParam7)[iVar1 /*5*/]))
		{
			if (func_368(((*uParam7)[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_508((*uParam7)[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_385((*uParam8)[iVar1 /*3*/]))
		{
			if (func_368(((*uParam8)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_509((*uParam8)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_387((*uParam9)[iVar1 /*3*/]))
		{
			if (func_368(((*uParam9)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_510((*uParam9)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_389((*uParam10)[iVar1 /*4*/]))
		{
			if (func_368(((*uParam10)[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_511((*uParam10)[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_391((*uParam11)[iVar1 /*3*/]))
		{
			if (func_368(((*uParam11)[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_512((*uParam11)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_283(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_513(iParam0);
	return -1;
}

int func_284(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_188(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_285(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_189(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

struct<4> func_286(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_514(iParam0, iParam1) };
	Var0.f_3 = func_515(iParam0, iParam1);
	return Var0;
}

void func_287(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_516(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_517(iParam0))
	{
		if (func_518(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_470(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_287(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_287(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_470(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_470(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_470(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_470(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_470(iParam5, 129))
	{
		if (func_470(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_470(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_470(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_470(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_517(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_470(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_470(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

char* func_288()
{
	return "cutDeleteMe";
}

void func_289(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

void func_290(var uParam0, int iParam1, char* sParam2)
{
	func_519(&(uParam0->f_958), iParam1, sParam2, 0);
}

void func_291(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, uParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, uParam0->f_5);
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			EVENT::_0xBB1E41DD3D3C6250(iVar0, "SpMissionTriggers", 0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				ANIMSCENE::_0x99B2A2E3655DEAF1(iVar0, "ClosestScenario");
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(iParam1, uParam0->f_6);
		}
	}
}

char* func_292(int iParam0)
{
	switch (iParam0)
	{
		case joaat("p_cs_ledger01x"):
			return "P_CS_LEDGER01X";
		case joaat("p_cs_rope01x"):
			return "P_CS_ROPE01X";
		case joaat("p_door01x"):
			return "P_DOOR01X";
		case joaat("p_door03x"):
			return "P_DOOR03X";
		case joaat("p_door12x"):
			return "p_door12x";
		case joaat("p_door13x"):
			return "P_DOOR13X";
		case joaat("p_door45x"):
			return "p_door45x";
		case joaat("p_chairvictorian01x"):
			return "p_chairvictorian01x";
		case joaat("p_crate03x"):
			return "p_crate03x";
		case joaat("p_cs_jug01x"):
			return "p_cs_jug01x";
		case joaat("p_cs_wagon02x"):
			return "p_cs_wagon02x";
		case joaat("p_door37x"):
			return "P_DOOR37X";
		case joaat("p_door_val_genstore"):
			return "p_door_val_genstore";
		case joaat("p_doorstrawberry01x"):
			return "p_doorstrawberry01x";
		case joaat("p_doorfrench01l"):
			return "p_doorfrench01l";
		case joaat("p_doorfrench01r"):
			return "p_doorfrench01r";
		case joaat("p_doormansiongate01x"):
			return "p_doormansiongate01x";
		case joaat("p_doornbd39x"):
			return "p_doornbd39x";
		case joaat("p_doorsaloon02x"):
			return "p_doorsaloon02x";
		case joaat("p_doorvh_saloon_l"):
			return "P_DOORVH_SALOON_L";
		case joaat("p_doorvh_saloon_r"):
			return "P_DOORVH_SALOON_R";
		case joaat("p_cigarlit01x"):
			return "p_cigarlit01x";
		case joaat("p_pebble01x"):
			return "p_pebble01x";
		case joaat("p_cs_rope03x"):
			return "p_cs_rope03x";
		case joaat("p_cards01x"):
			return "P_CARDS01X";
		case joaat("p_cs_pokerhand01x"):
			return "P_CS_POKERHAND01X";
		case joaat("p_cs_pokerhand02x"):
			return "P_CS_POKERHAND02X";
		case joaat("p_cs_holdemhand01x"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("p_cs_holdemhand02x"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("p_cs_bucket01x"):
			return "P_CS_BUCKET01X";
		case joaat("p_cs_syringe01x"):
			return "p_cs_syringe01x";
		case joaat("p_bottlejd01x"):
			return "p_bottleJD01x";
		case joaat("p_rag02x"):
			return "p_rag02x";
		case joaat("p_magneto02x"):
			return "p_magneto02x";
		case joaat("p_magneto01x"):
			return "p_magneto01x";
		case joaat("p_cs_wantedalive01x"):
			return "p_cs_wantedalive01x";
		case joaat("p_cs_rcridethelightning"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("p_pen01x"):
			return "p_pen01x";
		case joaat("p_cs_letter01a_x"):
			return "p_cs_letter01a_x";
		case joaat("p_cs_electricchair01x"):
			return "p_cs_electricchair01x";
		case joaat("p_cs_generator01x"):
			return "p_cs_generator01x";
		case joaat("p_cs_electrichelmet01x"):
			return "p_cs_electricHelmet01x";
		case joaat("p_cs_gag01x"):
			return "p_cs_gag01x";
		case joaat("p_door_sha_man01x"):
			return "p_door_sha_man01x";
		case joaat("p_stool01x"):
			return "p_stool01x";
		case joaat("p_stool02x"):
			return "p_stool02x";
		case joaat("p_jugglingball01x"):
			return "p_jugglingball01x";
		case joaat("p_chair02x"):
			return "p_chair02x";
		case joaat("p_chair04x"):
			return "p_chair04x";
		case joaat("p_crate15x"):
			return "p_crate15x";
		case joaat("p_cleaver01x"):
			return "p_cleaver01x";
		case joaat("p_bottle003x"):
			return "p_bottle003x";
		case joaat("p_cs_book02x"):
			return "p_cs_book02x";
		case joaat("p_stickydymt_single"):
			return "p_stickydymt_single";
		case joaat("p_cs_fusedynamite01x"):
			return "p_cs_fusedynamite01x";
		case joaat("p_dynamite01x"):
			return "p_dynamite01x";
		case joaat("p_cs_fusespool01x"):
			return "p_cs_fusespool01x";
		case joaat("p_cs_detonator01x"):
			return "p_cs_detonator01x";
		case joaat("p_cs_bedrollclsd01x"):
			return "p_cs_bedrollclsd01x";
		case joaat("p_cigarette_cs01x"):
			return "P_CIGARETTE_CS01X";
		case joaat("p_matches01x"):
			return "P_MATCHES01X";
		case joaat("p_matchstick01x"):
			return "P_MATCHSTICK01X";
		case joaat("p_woodenchair01x"):
			return "P_WOODENCHAIR01X";
		case joaat("p_chair_crate02x"):
			return "P_CHAIR_CRATE02X";
		case joaat("p_knittingneedle01x"):
			return "p_knittingneedle01x";
		case joaat("p_knittingsquare01x"):
			return "p_knittingsquare01x";
		case joaat("p_cs_rabbitmeat01x"):
			return "p_cs_rabbitMeat01x";
		case joaat("p_cs_rabbitmeat02x"):
			return "p_cs_rabbitMeat02x";
		case joaat("p_bottle03x"):
			return "p_bottle03x";
		case joaat("p_cs_billstack01x"):
			return "p_cs_billstack01x";
		case joaat("p_cs_billsingle01x"):
			return "p_cs_billSingle01x";
		case joaat("p_binoculars01x"):
			return "p_binoculars01x";
		case joaat("p_doorrhosheriff02x"):
			return "p_doorrhosheriff02x";
		case joaat("p_barstool01x"):
			return "P_BARSTOOL01X";
		case joaat("p_cs_shotglass01x"):
			return "p_cs_shotglass01x";
		case joaat("p_lamp18x"):
			return "p_lamp18x";
		case joaat("p_clock06x"):
			return "p_clock06x";
		case joaat("p_bottle02x"):
			return "p_bottle02x";
		case joaat("p_cs_lootsack01x"):
			return "p_cs_lootSack01x";
		case joaat("p_winebox01x"):
			return "p_wineBox01x";
		case joaat("p_strongbox01x"):
			return "p_strongBox01x";
		case joaat("p_clocktable02x"):
			return "P_CLOCKTABLE02X";
		case joaat("p_gen_statue03b"):
			return "p_gen_statue03b";
		case joaat("p_stoolwinter01x"):
			return "P_STOOLWINTER01X";
		case joaat("p_cs_barrag01x"):
			return "P_CS_BARRAG01X";
		case joaat("p_plate01x"):
			return "P_PLATE01X";
		case joaat("p_knife01x"):
			return "P_KNIFE01X";
		case joaat("p_knife02x"):
			return "P_KNIFE02X";
		case joaat("p_cs_catfish_whole01x"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("p_cs_catfish_whole01bx"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("p_woodwhittle01x"):
			return "P_WOODWHITTLE01X";
		case joaat("p_stickfirepoker01x"):
			return "P_STICKFIREPOKER01X";
		case joaat("p_cs_woodpile01x"):
			return "P_CS_WOODPILE01X";
		case joaat("p_fork01x"):
			return "P_FORK01X";
		case joaat("p_knife04x"):
			return "P_KNIFE04X";
		case joaat("p_knife03x"):
			return "p_knife03x";
		case joaat("p_cs_bottleslim01x"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("p_cs_blanket01x"):
			return "P_CS_BLANKET01X";
		case joaat("p_bedrollclosed01x"):
			return "P_BEDROLLCLOSED01X";
		case joaat("p_cs_kindling01x"):
			return "P_CS_KINDLING01X";
		case joaat("p_cigarthin01x"):
			return "P_CIGARTHIN01X";
		case joaat("p_door_wglass01x"):
			return "p_door_wglass01x";
		case joaat("p_broom02x"):
			return "p_broom02x";
		case joaat("p_amb_clipboard_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("p_chair07x"):
			return "P_CHAIR07X";
		case joaat("p_cs_cratetnt01x"):
			return "p_cs_cratetnt01x";
		case joaat("p_cs_flourbag01x"):
			return "p_cs_flourbag01x";
		case joaat("p_cs_supplies01x"):
			return "p_cs_supplies01x";
		case joaat("p_cs_supplies02x"):
			return "p_cs_supplies02x";
		case joaat("p_cs_supplies03x"):
			return "p_cs_supplies03x";
		case joaat("p_door04x"):
			return "p_door04x";
		case joaat("p_door11x"):
			return "p_door11x";
		case joaat("p_doorrhosaloon01_l"):
			return "p_doorrhosaloon01_l";
		case joaat("p_doorrhosaloon01_r"):
			return "p_doorrhosaloon01_r";
		case joaat("p_val_gate2m02x"):
			return "P_VAL_GATE2M02X";
		case joaat("p_cs_stmdnky01x"):
			return "P_CS_STMDNKY01X";
		case joaat("p_cs_hookpulley01x"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("p_chair_cs05x"):
			return "P_CHAIR_CS05X";
		case joaat("p_chair18x"):
			return "P_CHAIR_18X";
		case joaat("p_chair19x"):
			return "P_CHAIR19X";
		case joaat("p_chair20x"):
			return "P_CHAIR20X";
		case joaat("p_chair05x"):
			return "P_CHAIR05X";
		case joaat("p_chair22x"):
			return "p_chair22x";
		case joaat("p_glass01x"):
			return "p_glass01x";
		case joaat("p_diningchairs01x"):
			return "P_DININGCHAIRS01X";
		case joaat("p_windsorchair03x"):
			return "P_WINDSORCHAIR03X";
		case joaat("p_windsorchair02x"):
			return "P_WINDSORCHAIR02X";
		case joaat("p_door_val_jail02x"):
			return "p_door_val_jail02x";
		case joaat("p_cratetnt01x"):
			return "P_CRATETNT01X";
		case joaat("p_cratetnt02x"):
			return "P_CRATETNT02X";
		case joaat("p_moneystack01x"):
			return "P_MONEYSTACK01X";
		case joaat("p_axe01x"):
			return "P_AXE01X";
		case joaat("p_hoe01x"):
			return "P_HOE01X";
		case joaat("p_shovel01x"):
			return "P_SHOVEL01X";
		case joaat("p_shovel04x"):
			return "P_SHOVEL04X";
		case joaat("p_broom01x"):
			return "P_BROOM01X";
		case joaat("p_pitchfork01x"):
			return "P_PITCHFORK01X";
		case joaat("p_scythe01x"):
			return "P_SCYTHE01X";
		case joaat("p_skiff02x"):
			return "P_SKIFF02x";
		case joaat("p_door_nbx_doc01x_l"):
			return "p_door_nbx_doc01x_l";
		case joaat("p_door_nbx_doc01x_r"):
			return "p_door_nbx_doc01x_r";
		case joaat("p_cs_camera"):
			return "p_cs_camera";
		case joaat("p_cs_cameratripod"):
			return "p_cs_cameratripod";
		case joaat("p_cs_camerabag01x"):
			return "p_cs_camerabag01x";
		case joaat("p_cameraflash01x"):
			return "p_cameraflash01x";
		case joaat("p_cs_shutterrelease"):
			return "p_cs_shutterrelease";
		case joaat("rowboatswamp"):
			return "rowboatswamp";
		case joaat("p_chair25x"):
			return "P_CHAIR25X";
		case joaat("p_doorbrait01bx"):
			return "P_DOORBRAIT01BX";
		case joaat("p_cs_map01x"):
			return "P_CS_MAP01X";
		case joaat("p_hammer03x"):
			return "p_hammer03x";
		case joaat("p_cs_nailbarrel01x"):
			return "p_cs_nailbarrel01x";
		case joaat("p_cs_book04x"):
			return "p_cs_book04x";
		case joaat("p_cs_fan01x"):
			return "p_cs_Fan01x";
		case joaat("p_cs_ledgersmall01x"):
			return "p_cs_ledgerSmall01x";
		case joaat("p_cs_envelope01x"):
			return "p_cs_envelope01x";
		case joaat("p_wrappedmeat01x"):
			return "p_wrappedmeat01x";
		case joaat("p_cs_letter02x"):
			return "P_CS_LETTER02X";
		case joaat("p_cs_book03x"):
			return "p_cs_book03x";
		case joaat("p_cs_giftbox01x"):
			return "p_cs_giftBox01x";
		case joaat("p_boiler01x"):
			return "p_boiler01x";
		case joaat("p_boiler02x"):
			return "p_boiler02x";
		case joaat("p_mugcoffee01x"):
			return "p_mugCoffee01x";
		case joaat("p_glasstallbeer01x"):
			return "p_glasstallbeer01x";
		case joaat("p_pitcher02x"):
			return "p_pitcher02x";
		case joaat("p_tray03x"):
			return "p_tray03x";
		case joaat("p_sit_chairwicker01b"):
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case joaat("p_ladle02x"):
			return "P_LADLE02X";
		case joaat("p_cs_pot01x"):
			return "P_CS_POT01X";
		case joaat("p_chairdining03x"):
			return "P_CHAIRDINING03X";
		case joaat("p_spoon01x"):
			return "P_SPOON01X";
		case joaat("p_bowl03x"):
			return "P_BOWL03X";
		case joaat("p_cs_bridecatalogue01x"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("p_jewelrybox02bx"):
			return "P_JEWELRYBOX02BX";
		case joaat("p_cs_letterfolded01x"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("p_cs_arthurhat01x"):
			return "P_CS_ARTHURHAT01X";
		case joaat("p_oar03x"):
			return "P_OAR03X";
		case joaat("p_door_val_bankvault"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("p_door_combank01x"):
			return "P_DOOR_COMBANK01X";
		case joaat("p_cs_donation01x"):
			return "P_CS_DONATION01X";
		case joaat("p_door_nbx_bank03x_r"):
			return "p_door_nbx_bank03x_R";
		case joaat("p_door_nbx_bank03x_l"):
			return "p_door_nbx_bank03x_L";
		case joaat("p_camp_plate_02x"):
			return "p_camp_plate_02x";
		case joaat("p_stewplate02x"):
			return "p_stewplate02x";
		case joaat("p_cs_log01x"):
			return "p_cs_log01x";
		case joaat("p_ndb_hotelplank01x"):
			return "p_ndb_hotelplank01x";
		case joaat("p_glass06x"):
			return "p_glass06x";
		case joaat("p_cs_rag01x"):
			return "p_cs_rag01x";
		case joaat("p_inkwell01x"):
			return "p_inkwell01x";
		case joaat("p_cigar02x"):
			return "p_cigar02x";
		case joaat("p_bottlebeer01x"):
			return "p_bottleBeer01x";
		case joaat("p_beermugglass01x"):
			return "p_beermugglass01x";
		case joaat("p_nutbowl01x"):
			return "p_nutBowl01x";
		case joaat("p_cs_sacklarge01x"):
			return "p_cs_sacklarge01x";
		case joaat("p_cs_dressbox01x"):
			return "p_cs_dressbox01x";
		case joaat("p_bell05x"):
			return "p_bell05x";
		case joaat("p_woodendeskchair01x"):
			return "p_woodendeskchair01x";
		case joaat("p_chair06x"):
			return "p_chair06x";
		case joaat("p_jug01x"):
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case joaat("p_bottleslim01x"):
			return "p_bottleslim01x";
		case joaat("p_cs_journal01x"):
			return "p_cs_journal01x";
		case joaat("p_mortarpestle02x"):
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case joaat("p_cs_ropelegsplit"):
			return "p_cs_ropeLegSplit";
		case joaat("p_cs_ropehandssplit"):
			return "p_cs_ropeHandsSplit";
		case joaat("p_fishingpole01x"):
			return "p_fishingpole01x";
		case joaat("p_fishingpole02x"):
			return "P_FISHINGPOLE02X";
		case joaat("p_cs_flowernecklace"):
			return "p_cs_flowernecklace";
		case joaat("p_cs_flowers01x"):
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case joaat("p_cs_fishingpolebag01x"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("p_stick02x"):
			return "P_STICK02X";
		case joaat("p_cs_sock01x"):
			return "P_CS_SOCK01X";
		case joaat("p_door_val_bank00_rx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_door_val_bank00_lx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_can10x"):
			return "p_can10x";
		case joaat("p_cs_rabbitgut"):
			return "p_cs_rabbitgut";
		case joaat("p_cs_rabbitheadless"):
			return "p_cs_rabbitheadless";
		case joaat("p_cs_rabbitfeetless"):
			return "p_cs_rabbitfeetless";
		case joaat("p_kettle03x"):
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case joaat("p_cs_bookhardcv01x"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("p_letterbundle_01x"):
			return "P_LETTERBUNDLE_01X";
		case joaat("p_letterenvelope_cs01x"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("p_package08x"):
			return "P_PACKAGE08X";
		case joaat("p_cigarbox02x"):
			return "P_CIGARBOX02X";
		case joaat("p_crucifix02x"):
			return "p_crucifix02x";
		case joaat("p_bottlecrate01x"):
			return "p_bottleCrate01x";
		case joaat("p_can05x"):
			return "p_can05x";
		case joaat("p_cs_suitcase04x"):
			return "p_cs_suitcase04x";
		case joaat("p_cs_bagstrauss01x"):
			return "p_cs_bagstrauss01x";
		case joaat("p_bottle008x"):
			return "P_BOTTLE008X";
		case joaat("p_bottle009x"):
			return "P_BOTTLE009X";
		case joaat("p_bottle010x"):
			return "P_BOTTLE010X";
		case joaat("p_pocketmirror01x"):
			return "p_pocketMirror01x";
		case joaat("p_cigarette01x"):
			return "P_CIGARETTE01X";
		case joaat("p_traveltrunk02x"):
			return "P_TRAVELTRUNK02X";
		case joaat("p_chairwhite01x"):
			return "P_CHAIRWHITE01X";
		case joaat("p_journal_open01x"):
			return "P_JOURNAL_OPEN01X";
		case joaat("p_table42_cs"):
			return "p_table42_cs";
		case joaat("p_cs_newspaper_02x"):
			return "p_cs_newspaper_02x";
		case joaat("p_cs_potatoslice01x"):
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case joaat("p_spittoon01x"):
			return "p_spittoon01x";
		case joaat("p_woodbowl01x"):
			return "p_woodbowl01x";
		case joaat("p_pencil01x"):
			return "p_pencil01x";
		case joaat("p_spoonmid01x"):
			return "P_SPOONMID01X";
		case joaat("p_pan01x"):
			return "P_PAN01X";
		case joaat("p_pipe01x"):
			return "P_Pipe01x";
		case joaat("p_cs_railroadbond01x"):
			return "p_cs_railroadbond01x";
		case joaat("p_sharpeningstone01x"):
			return "p_sharpeningstone01x";
		case joaat("p_treestump02x"):
			return "p_treestump02x";
		case joaat("p_plate17x"):
			return "p_plate17x";
		case joaat("p_cs_newspaper_01x"):
			return "p_cs_newspaper_01x";
		case joaat("p_sadiehat01x"):
			return "p_sadiehat01x";
		case joaat("p_door_bla_jail_l_01x"):
			return "p_door_bla_jail_l_01x";
		case joaat("p_door_bla_jail_r_01x"):
			return "p_door_bla_jail_r_01x";
		case joaat("p_mashedpotato02x"):
			return "p_mashedPotato02x";
		case joaat("p_cs_bookhardcv08x"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

char* func_293(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_213(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_143(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_520(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_294(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_295(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_296(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_297(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_299(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_300(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_301(int iParam0, int iParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
		{
			OBJECT::ADD_DOOR_TO_SYSTEM_NEW(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::ADD_DOOR_TO_SYSTEM_NEW(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM_NEW(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, 1);
	}
	return iParam0;
}

int func_302(int iParam0)
{
	if (func_521(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_302(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_304(int iParam0, int iParam1)
{
	if (func_302(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_305(int iParam0, int iParam1)
{
	if (func_302(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_306(int iParam0, int iParam1)
{
	if (func_302(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_307()
{
	return 1;
}

int func_308(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar1 /*12*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_309(int iParam0)
{
	return Global_43883 == iParam0;
}

Vector3 func_310(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	switch (&uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { (uParam0->f_1016[iParam1 /*41*/])->f_4 - (uParam0->f_1016[iParam1 /*41*/])->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_522(vVar10) * Vector(2f, 2f, 2f) };
			*(vVar0[0 /*3*/]) = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + (uParam0->f_1016[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			*(vVar0[1 /*3*/]) = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + (uParam0->f_1016[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[1 /*3*/]), &((vVar0[1 /*3*/])->f_2), 0);
			if (!func_90(*(vVar0[0 /*3*/])))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[0 /*3*/]), (uParam0->f_1016[iParam1 /*41*/])->f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[1 /*3*/]), (uParam0->f_1016[iParam1 /*41*/])->f_7, true))
				{
					return *(vVar0[1 /*3*/]);
				}
				else
				{
					return *(vVar0[0 /*3*/]);
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if ((uParam0->f_1016[iParam1 /*41*/])->f_13 < (uParam0->f_1016[iParam1 /*41*/])->f_12)
			{
				fVar13 = (((uParam0->f_1016[iParam1 /*41*/])->f_12 + ((uParam0->f_1016[iParam1 /*41*/])->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = (((uParam0->f_1016[iParam1 /*41*/])->f_12 + (uParam0->f_1016[iParam1 /*41*/])->f_13) / 2f);
			}
			*(vVar0[0 /*3*/]) = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS(fVar13) * ((uParam0->f_1016[iParam1 /*41*/])->f_11 + 5f)), (BUILTIN::SIN(fVar13) * ((uParam0->f_1016[iParam1 /*41*/])->f_11 + 5f))) };
			(vVar0[0 /*3*/])->f_2 = ((vVar0[0 /*3*/])->f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			if (!func_90(*(vVar0[0 /*3*/])))
			{
				return *(vVar0[0 /*3*/]);
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_311(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_312(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

bool func_314(var uParam0, int iParam1)
{
	return func_523(uParam0->f_27, iParam1);
}

bool func_315(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_316(int iParam0, int iParam1)
{
	if (func_255() != -1)
	{
		return false;
	}
	if (!func_315(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

bool func_317(int iParam0)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_318(int iParam0)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_319(int iParam0, int iParam1)
{
	if (func_255() != -1)
	{
		return;
	}
	if (!func_315(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_320(int iParam0)
{
	int iVar0;

	if (!func_315(iParam0))
	{
		return;
	}
	iVar0 = func_524(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_321(int iParam0)
{
	if (!func_315(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_322(int iParam0)
{
	return iParam0 != 0;
}

int func_323(int iParam0)
{
	if (!func_315(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_324(int iParam0, bool bParam1)
{
	if (!func_315(iParam0))
	{
		return 0;
	}
	if (!func_316(iParam0, 2))
	{
		return 0;
	}
	if (func_321(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_323(iParam0)))
	{
		return 1;
	}
	if (func_316(iParam0, 1) && !bParam1)
	{
		func_498(iParam0, 128);
		return 1;
	}
	func_319(iParam0, 129);
	func_320(iParam0);
	_NAMESPACE48::DELETE_PERSCHAR(func_323(iParam0));
	func_525(iParam0, 0);
	return 1;
}

bool func_325(int iParam0)
{
	int iVar0;

	iVar0 = func_526(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

float func_326(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_327(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_527(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_158());
		}
		return;
	}
	iVar0 = func_528();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_158());
}

void func_328(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_329(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_529(bParam1, iParam2, iParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_330(var uParam0)
{
	bool bVar0;

	if (!func_63(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(-1181125641);
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-1181125641))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_530(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_530(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_341(uParam0, 134217728);
		}
	}
}

void func_331(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_63(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!func_63(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_339(uParam0);
	func_531(uParam0, uParam0->f_1897, uParam0->f_1899);
	func_532(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && (uParam0->f_1016[uParam0->f_1895 /*41*/])->f_17 > 0f) && uParam0->f_1688 >= 0) && !func_91(Global_35, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, ((uParam0->f_1016[uParam0->f_1895 /*41*/])->f_17 + 5f), 1, 1)) && !func_63(uParam0, 33554432)) && !func_63(uParam0, 4))
		{
			func_533(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!func_63(uParam0, 4))
	{
		if (func_534(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				func_341(uParam0, 8);
				return;
			}
		}
		else
		{
			func_533(uParam0, uParam0->f_1897);
		}
		if ((uParam0->f_1016[uParam0->f_1690 /*41*/])->f_29)
		{
			fVar0 = func_535(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					func_341(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					func_341(uParam0, 16);
					if (((!func_63(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, true) < ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_11 + 5f))
					{
						func_536(uParam0);
						func_341(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				func_312(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if ((uParam0->f_1016[iVar2 /*41*/])->f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (func_314(uParam0->f_1016[uParam0->f_1688 /*41*/], 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (func_63(uParam0, 16))
	{
		fVar4 = func_195(Global_35, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1);
		if (uParam0->f_1897 && fVar4 <= ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		}
		fVar5 = func_442(Global_36, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_17 || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1.f_2 + (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_10))
			{
				func_338(uParam0, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_27, (uParam0->f_1345[uParam0->f_1688 /*22*/])->f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || func_63(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879) && func_535(uParam0, uParam0->f_1688) < 10000f) && func_63(uParam0, 16)) || func_63(uParam0, 4))
		{
			if (!func_63(uParam0, 4))
			{
				func_341(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_336(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (func_254(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584, 100, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_7, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				uParam0->f_1686 = 0;
				func_312(uParam0, 4);
			}
		}
	}
	else if (func_63(uParam0, 4))
	{
		func_312(uParam0, 4);
	}
}

int func_332(var uParam0)
{
	return *uParam0;
}

void func_333(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_63(uParam0, 512))
	{
		return;
	}
	if (func_21(&(uParam0->f_1872)) < 2f)
	{
		return;
	}
	if (func_216(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_341(uParam0, 524288);
	}
}

void func_334(bool bParam0)
{
	if (bParam0)
	{
		func_537(4);
	}
	func_537(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_335()
{
	Global_1905944->f_5695 = 1;
}

int func_336(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0 /*18*/])->f_17 == 1 && (uParam0->f_475[iVar0 /*18*/])->f_2 == 4) && &uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_337(var uParam0)
{
	return uParam0->f_2;
}

void func_338(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_523(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_523(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1897)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1898, 214, true);
	}
	if (uParam0->f_1896 && func_63(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_523(uParam1, 262144) && Global_1935630->f_44 == joaat("weapon_lasso"))
	{
		iVar0 |= 16;
	}
	func_538(&iVar1, uParam2);
	func_539(&(uParam0->f_1904), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_63(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_540();
	func_541(uParam0, 1);
}

void func_339(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;

	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !func_345(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_1016[iVar0 /*41*/])->f_1, true) <= (uParam0->f_1016[iVar0 /*41*/])->f_16;
		Var2 = { uParam0->f_1692 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1345[iVar0 /*22*/])->f_2)))
			{
				StringCopy(&(uParam0->f_1692), func_542((uParam0->f_1345[iVar0 /*22*/])->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692), func_483(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1345[iVar0 /*22*/])->f_10)))
			{
				StringCopy(&(uParam0->f_1692.f_8), func_542((uParam0->f_1345[iVar0 /*22*/])->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692.f_8), func_543(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1692)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_IS_CAMERA_AVAILABLE(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1345[iVar0 /*22*/])
		{
			if (!func_544((uParam0->f_1345[iVar0 /*22*/])->f_1, 8))
			{
				if (!func_544((uParam0->f_1345[iVar0 /*22*/])->f_1, 8))
				{
					func_538(&iVar19, (uParam0->f_1345[iVar0 /*22*/])->f_1);
					func_545(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { (uParam0->f_1016[iVar0 /*41*/])->f_1 };
				iVar24 = -1;
				if ((uParam0->f_1345[iVar0 /*22*/])->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar25 /*13*/])->f_2))
						{
							if ((uParam0->f_1345[iVar0 /*22*/])->f_20 == (uParam0->f_3[iVar25 /*13*/])->f_3)
							{
								iVar23 = (uParam0->f_3[iVar25 /*13*/])->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_544((uParam0->f_1345[iVar0 /*22*/])->f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = (uParam0->f_3[(uParam0->f_1345[iVar0 /*22*/])->f_20 /*13*/])->f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
											func_480(uParam0, 16);
										}
										return;
									}
								}
								if ((uParam0->f_1345[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1345[iVar0 /*22*/])->f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_546(Global_35, iVar23, 1), (uParam0->f_1345[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1345[iVar0 /*22*/])->f_19) };
								}
							}
							else if ((uParam0->f_1345[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1345[iVar0 /*22*/])->f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_442(Global_36, (uParam0->f_1016[iVar0 /*41*/])->f_1, 1), (uParam0->f_1345[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1345[iVar0 /*22*/])->f_19) };
							}
							fVar27 = (uParam0->f_1016[iVar0 /*41*/])->f_16;
							fVar28 = (uParam0->f_1016[iVar0 /*41*/])->f_14;
							bVar29 = func_544((uParam0->f_1345[iVar0 /*22*/])->f_1, 2);
							bVar30 = (func_544((uParam0->f_1345[iVar0 /*22*/])->f_1, 1) && !bVar29);
							bVar31 = func_544((uParam0->f_1345[iVar0 /*22*/])->f_1, 4);
							bVar32 = false;
							if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1692));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_547(0, 0);
								}
								bVar32 = true;
								func_480(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !func_548(uParam0->f_1708.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1708));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !func_548(uParam0->f_1731.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1731));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
							}
							StringCopy(&(uParam0->f_1692), "", 64);
							StringCopy(&(uParam0->f_1692.f_8), "", 64);
							func_549(uParam0, 2);
						}
					}
				}
			}
		}
	}

int func_340(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_550(uParam0, &iVar0))
	{
		func_551(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_341(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

void func_342(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_332(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1688;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < (uParam0->f_1016[iVar0 /*41*/])->f_1.f_2)
		{
			return;
		}
		fVar1 = (uParam0->f_1016[iVar0 /*41*/])->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = (uParam0->f_1016[iVar0 /*41*/])->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_1016[iVar0 /*41*/])->f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - (uParam0->f_1016[iVar0 /*41*/])->f_1.f_2));
		bVar4 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875);
		if (bVar4)
		{
			vVar6 = { VOLUME::GET_VOLUME_COORDS(uParam0->f_1875) };
			fVar5 = MISC::ABSF((vVar6.z - (uParam0->f_1016[iVar0 /*41*/])->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= (uParam0->f_1016[iVar0 /*41*/])->f_10 || (bVar4 && fVar5 <= (uParam0->f_1016[iVar0 /*41*/])->f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_1016[iVar0 /*41*/])->f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902))
			{
				func_341(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1902 == iVar9)
			{
				func_341(uParam0, 65536);
				return;
			}
		}
		func_312(uParam0, 65536);
	}
}

void func_343(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_8(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1894)
		{
			if ((uParam0->f_475[iVar0 /*18*/])->f_7)
			{
				func_552(uParam0, iVar0, iParam1);
			}
			else if ((uParam0->f_475[iVar0 /*18*/])->f_6)
			{
				bVar1 = func_553(uParam0, iVar0);
				if (bVar1)
				{
					func_554(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_336(uParam0, uParam0->f_1684))
		{
			func_555(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1691;
	while (iVar0 <= (uParam0->f_1894 - 1))
	{
		if ((uParam0->f_475[iVar0 /*18*/])->f_7)
		{
			func_552(uParam0, iVar0, iParam1);
		}
		else if ((uParam0->f_475[iVar0 /*18*/])->f_6)
		{
			bVar1 = func_553(uParam0, iVar0);
			if (bVar1)
			{
				func_554(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1691 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1691 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_344(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1921);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1921);
			if (MISC::_0xBDC6E364C9C78178(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_345(var uParam0, int iParam1)
{
	return (uParam0->f_1665 && iParam1) != 0;
}

void func_346(var uParam0)
{
	func_556(&(uParam0->f_1904));
}

void func_347(var uParam0)
{
	uParam0->f_1665 = 0;
}

void func_348(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_557(uParam0, 4);
	if (func_558(uParam0, &sParam1, iParam5))
	{
		func_266(uParam0, 1);
	}
}

void func_349(var uParam0)
{
	if (!func_559(uParam0))
	{
		return;
	}
	if (!func_63(uParam0, 4194304))
	{
		func_560(uParam0);
		func_341(uParam0, 4194304);
	}
	if (func_561(uParam0))
	{
		func_562(uParam0);
		func_563(uParam0);
		func_266(uParam0, 2);
	}
}

void func_350(var uParam0)
{
	uParam0->f_1685 = -1;
	func_265(uParam0, 0);
	func_266(uParam0, 3);
	func_564(uParam0, 0);
	func_248(&(uParam0->f_1869));
	func_565(uParam0);
	func_248(&(uParam0->f_1872));
}

int func_351(var uParam0)
{
	if (uParam0->f_1770)
	{
		return 0;
	}
	return uParam0->f_1769;
}

void func_352()
{
	Global_18 = 1;
	Global_43883 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_353(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_195(Global_35, (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1, 0) < (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_14)
		{
			return 1;
		}
		else if ((uParam0->f_1016[uParam0->f_1684 /*41*/])->f_14 >= (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

int func_354(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_195(Global_35, (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1, 0) < (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_15)
		{
			return 1;
		}
		else if ((uParam0->f_1016[uParam0->f_1684 /*41*/])->f_15 >= (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

int func_355(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_1685 < 0)
	{
		return 1;
	}
	switch ((uParam0->f_475[uParam0->f_1685 /*18*/])->f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, 1) == 8)
			{
				return 1;
			}
			else if (func_48(&(uParam0->f_1872)) >= 15f)
			{
				func_341(uParam0, 32768);
				return 1;
			}
			break;
		case 9:
			if (!uParam0->f_1768)
			{
				if (func_48(&(uParam0->f_1872)) >= 15f)
				{
					func_341(uParam0, 32768);
					return 1;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_566(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_566(uParam0), 0))
				{
					uParam0->f_1768 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_566(uParam0));
				bVar1 = ANIMSCENE::_0xD8254CB2C586412B(func_566(uParam0), 0);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_566(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return 1;
		default:
			return func_48(&(uParam0->f_1872)) >= 15f;
	}
	return 0;
}

int func_356(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/])->f_17 == 2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_357(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/])->f_17 == 2 && func_567(uParam0->f_475[iVar0 /*18*/], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_358(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

struct<8> func_359(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, func_293(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = func_568(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_360(var uParam0, int iParam1)
{
	return (uParam0->f_9 && iParam1) != 0;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (func_74(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43836 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Global_43805[iVar0 /*6*/])))
		{
			Global_43805[iVar0 /*6*/] = iParam0;
			(Global_43805[iVar0 /*6*/])->f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			(Global_43805[iVar0 /*6*/])->f_3 = iParam1;
			(Global_43805[iVar0 /*6*/])->f_4 = iParam2;
			(Global_43805[iVar0 /*6*/])->f_5 = iParam3;
			Global_43836++;
			return;
		}
		iVar0++;
	}
}

void func_362(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_90(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_548(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::RELEASE_LOCK_VOLUME(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_363(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_GROUP(iParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
	}
}

void func_364(var uParam0, int iParam1, char* sParam2)
{
	func_569(&(uParam0->f_428), iParam1, sParam2);
}

bool func_365(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_366(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_491(iParam0, 56, 1);
		func_19(&(Global_1359489->f_40), 1);
	}
	func_570(iParam0, 0);
	func_571(iParam0, 4, 0);
	func_572(iParam0);
	func_573(iParam0);
	func_574(iParam0, 37, 1);
	bVar0 = func_257(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_575(iParam0, 0);
	bVar2 = _NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_490(iParam0, 64, 1))
	{
		func_574(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_574(iParam0, 33, 1);
		func_574(iParam0, 34, 1);
		func_576(iParam0, 1056964608, -1, 1061158912);
		func_577(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_491(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_491(iParam0, 35, 1);
			if (bParam8)
			{
				func_491(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_578(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_574(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_491(iParam0, 33, 1);
		func_577(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_19(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_248(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_491(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_579(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_490(iParam0, 45, 1))
	{
		func_574(iParam0, 45, 1);
	}
	func_580(iParam0, 16, 1);
	func_574(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_257(func_581(iParam0), 0))
		{
			func_582(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_367(var uParam0)
{
	return *uParam0 != 0;
}

bool func_368(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_583(iParam1);
	return (uParam0 && uVar0) != 0;
}

void func_369(var uParam0)
{
	if (!func_584(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_585(&(uParam0->f_1), 1);
	}
}

bool func_370(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_371(var uParam0)
{
	if (!func_584(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_585(&(uParam0->f_3), 1);
	}
}

bool func_372(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_373(var uParam0)
{
	if (!func_584(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_585(&(uParam0->f_1), 1);
	}
}

bool func_374(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_375(var uParam0)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_586(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_376(var uParam0)
{
	if (func_584(*uParam0, 2))
	{
		return 1;
	}
	if (!func_584(*uParam0, 1))
	{
		func_587(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_585(uParam0, 2);
		return 1;
	}
	return 0;
}

bool func_377(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_378(var uParam0)
{
	char* sVar0;

	if (!func_584(uParam0->f_2, 1))
	{
		if (func_504(uParam0))
		{
			if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
			{
				sVar0 = func_411(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_zero") && func_262())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_three") && func_588())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_585(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_379(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_380(var uParam0, int iParam1)
{
	if (!func_584(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, 1, 0))
		{
			return;
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam1, *uParam0);
		func_585(&(uParam0->f_1), 1);
	}
}

bool func_381(var uParam0)
{
	return *uParam0 != 0;
}

void func_382(var uParam0)
{
	if (!func_584(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROPSET(*uParam0);
		func_585(&(uParam0->f_2), 1);
	}
}

bool func_383(var uParam0)
{
	return *uParam0 != 0;
}

void func_384(var uParam0)
{
	if (!func_584(uParam0->f_3, 1))
	{
		WEAPON::_0x72D4CB5DB927009C(*uParam0, uParam0->f_1, uParam0->f_2);
		func_585(&(uParam0->f_3), 1);
	}
}

bool func_385(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_386(var uParam0)
{
	if (!func_584(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_585(&(uParam0->f_1), 1);
	}
}

bool func_387(var uParam0)
{
	return func_589(*uParam0);
}

void func_388(var uParam0)
{
	if (!func_584(uParam0->f_1, 1))
	{
		STREAMING::_REQUEST_IMAP(*uParam0);
		func_585(&(uParam0->f_1), 1);
	}
}

bool func_389(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_390(var uParam0)
{
	if (!func_584(uParam0->f_2, 1))
	{
		AUDIO::_0xE368E8422C860BA7(*uParam0, uParam0->f_1, -2);
		func_585(&(uParam0->f_2), 1);
	}
}

bool func_391(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_392(var uParam0)
{
	if (!func_584(uParam0->f_1, 1))
	{
		STREAMING::_0x2B6529C54D29037A(*uParam0);
		func_585(&(uParam0->f_1), 1);
	}
}

int func_393(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_394(var uParam0)
{
	return uParam0 & 31;
}

int func_395(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

struct<8> func_396(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_397()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_399(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

void func_400(int iParam0)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0, (Global_1393237->f_11[iVar0 /*30*/])->f_3))
		{
			func_590(iVar0, 4096, 0);
			func_590(iVar0, 131072, 0);
			func_591(iVar0, 1);
		}
		iVar0++;
	}
}

int func_401(int iParam0, char[4] cParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_592(vVar0, vVar3.x, cParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

void func_402(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_593(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]))
		{
			if (!func_594(uParam0, sParam1) || func_83(uParam0, 8388608))
			{
				StringCopy(uParam0->f_462[iVar0 /*9*/], sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, 1, 0))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_96(uParam0, 4194304);
					}
				}
				else
				{
					func_96(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_403(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_595(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_595(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_596(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_446(8);
}

void func_404(var uParam0)
{
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> func_405()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_406(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_407(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, iParam2, iVar0);
}

bool func_408(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_409(int iParam0)
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

void func_410(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_409(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_597(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_598(iVar0);
	*uParam0 = 0;
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		case joaat("cs_abe"):
			return "Abe";
		case joaat("cs_edmundlowry"):
			return "EdmundLowry";
		case joaat("cs_aberdeenpigfarmer"):
			return "ABERDEENPIGFARMER";
		case joaat("cs_aberdeensister"):
			return "ABERDEENSISTER";
		case joaat("cs_abigailroberts"):
			return "AbigailRoberts";
		case joaat("cs_albertmason"):
			return "AlbertMason";
		case joaat("cs_archiedown"):
			return "ArchieDown";
		case joaat("cs_baptiste"):
			return "Baptiste";
		case joaat("cs_bartholomewbraithwaite"):
			return "BartholomewBraithwaite";
		case joaat("cs_beatenupcaptain"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("cs_beaugray"):
			return "BeauGray";
		case joaat("cs_penelopebraithwaite"):
			return "PenelopeBraithwaite";
		case joaat("cs_billwilliamson"):
			return "BillWilliamson";
		case joaat("cs_braithwaiteservant"):
			return "BraithwaiteServant";
		case joaat("cs_catherinebraithwaite"):
			return "CatherineBraithwaite";
		case joaat("cs_charlessmith"):
			return "CharlesSmith";
		case joaat("cs_cigcardguy"):
			return "CS_CIGCARDGUY";
		case joaat("cs_dinoboneslady"):
			return "CS_DINOBONESLADY";
		case joaat("cs_cleet"):
			return "Cleet";
		case joaat("cs_colmodriscoll"):
			return "ColmODriscoll";
		case joaat("cs_creoleguy"):
			return "CreoleGuy";
		case joaat("cs_sddoctor_01"):
			return "SDDoctor_01";
		case joaat("cs_dalemaroney"):
			return "DaleMaroney";
		case joaat("cs_dutch"):
			return "Dutch";
		case joaat("cs_edithdown"):
			return "EdithDown";
		case joaat("cs_fussar"):
			return "Fussar";
		case joaat("cs_fishcollector"):
			return "cs_fishcollector";
		case joaat("cs_bronte"):
			return "Bronte";
		case joaat("cs_guidomartelli"):
			return "GuidoMartelli";
		case joaat("u_m_m_nbxbrontegoon_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("g_m_m_unibrontegoons_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("cs_garethbraithwaite"):
			return "GarethBraithwaite";
		case joaat("cs_genstoryfemale"):
			return "GenStoryFemale";
		case joaat("cs_genstorymale"):
			return "GenStoryMale";
		case joaat("cs_leon"):
			return "Leon";
		case joaat("cs_geraldbraithwaite"):
			return "GeraldBraithwaite";
		case joaat("cs_hoseamatthews"):
			return "HoseaMatthews";
		case joaat("cs_jackmarston"):
			return "JackMarston";
		case joaat("cs_jackmarston_teen"):
			return "JackMarston_Teen";
		case joaat("cs_jamie"):
			return "Jamie";
		case joaat("cs_javierescuella"):
			return "JavierEscuella";
		case joaat("cs_jimcalloway"):
			return "JimCalloway";
		case joaat("cs_joe"):
			return "Joe";
		case joaat("cs_johnmarston"):
			return "JohnMarston";
		case joaat("cs_johnweathers"):
			return "CS_JOHNWEATHERS";
		case joaat("cs_josiahtrelawny"):
			return "JosiahTrelawny";
		case joaat("cs_karen"):
			return "Karen";
		case joaat("cs_mrsadler"):
			return "MrsAdler";
		case joaat("cs_kieran"):
			return "Kieran";
		case joaat("cs_leostrauss"):
			return "LeoStrauss";
		case joaat("cs_londonderryson"):
			return "LondonderrySon";
		case joaat("cs_marybeth"):
			return "MaryBeth";
		case joaat("cs_marylinton"):
			return "MaryLinton";
		case joaat("cs_micahbell"):
			return "MicahBell";
		case joaat("cs_mollyoshea"):
			return "MollyOshea";
		case joaat("cs_mrlinton"):
			return "CS_MrLinton";
		case joaat("cs_mrpearson"):
			return "MrPearson";
		case joaat("cs_mrslondonderry"):
			return "MrsLondonderry";
		case joaat("cs_mud2bigguy"):
			return "Mud2BigGuy";
		case joaat("cs_professorbell"):
			return "ProfessorBell";
		case joaat("cs_revswanson"):
			return "RevSwanson";
		case joaat("cs_samaritan"):
			return "CS_Samaritan";
		case joaat("cs_strdeputy_01"):
			return "StrDeputy_01";
		case joaat("cs_strdeputy_02"):
			return "StrDeputy_02";
		case joaat("cs_strsheriff_01"):
		case joaat("u_m_m_strsherriff_01"):
			return "StrSheriff_01";
		case joaat("cs_susangrimshaw"):
			return "SusanGrimshaw";
		case joaat("cs_tavishgray"):
			return "TavishGray";
		case joaat("cs_theodorelevin"):
			return "TheodoreLevin";
		case joaat("cs_thomasdown"):
			return "ThomasDown";
		case joaat("cs_tilly"):
			return "Tilly";
		case joaat("cs_uncle"):
			return "Uncle";
		case joaat("g_m_m_unicriminals_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("g_m_m_uniduster_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("cs_valsheriff"):
			return "CS_VALSHERIFF";
		case joaat("s_m_m_marshallsrural_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("u_m_o_vhtexoticshopkeeper_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("cs_sean"):
			return "Sean";
		case joaat("cs_lenny"):
			return "Lenny";
		case joaat("cs_hercule"):
			return "Hercule";
		case joaat("cs_creolecaptain"):
			return "CreoleCaptain";
		case joaat("u_m_m_creolecaptain_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("cs_ringmaster"):
			return "RingMaster";
		case joaat("u_m_m_valbartender_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("a_m_m_emrfarmhand_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("a_m_m_grisurvivalist_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("cs_lillymillet"):
			return "LillyMillet";
		case joaat("a_f_m_strtownfolk_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("a_m_m_strtownfolk_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("s_m_m_strlumberjack_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("g_m_m_unicriminals_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("g_m_m_unicornwallgoons_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("a_m_m_nbxupperclass_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("a_f_m_nbxupperclass_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("a_m_m_valfarmer_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("a_m_m_valtownfolk_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("a_m_m_valtownfolk_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("a_f_m_valtownfolk_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("u_m_m_nbxbartender_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("cs_nbxexecuted"):
			return "NBXExecuted";
		case joaat("cs_rhodeputy_01"):
			return "RHODEPUTY_01";
		case joaat("u_m_m_rhdsheriff_01"):
			return "RHDSHERIFF_01";
		case joaat("cs_leighgray"):
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case joaat("u_m_m_strgenstoreowner_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("cs_tomdickens"):
			return "TomDickens";
		case joaat("cs_davidgeddes"):
			return "DavidGeddes";
		case joaat("cs_ansel_atherton"):
			return "ANSEL_ATHERTON";
		case joaat("cs_wrobel"):
			return "CS_Wrobel";
		case joaat("a_c_cow"):
			return "COW";
		case joaat("a_c_bull_01"):
			return "BULL";
		case joaat("cs_albertcakeesquire"):
			return "ALBERTCAKEESQUIRE";
		case joaat("u_m_o_blwgeneralstoreowner_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("a_c_dogcatahoulacur_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("a_c_dogrufus_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("a_c_doglion_01"):
			return "A_C_DOGLION_01";
		case joaat("cs_tigerhandler"):
			return "Handler";
		case joaat("cs_valauctionboss_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("cs_nbxreceptionist_01"):
			return "NbxReceptionist_01";
		case joaat("u_m_m_bivforeman_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("u_m_m_racforeman_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("cs_chainprisoner_01"):
			return "CHAINPRISONER_01";
		case joaat("cs_chainprisoner_02"):
			return "CHAINPRISONER_02";
		case joaat("u_m_m_valpokerplayer_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("u_m_m_valpokerplayer_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("cs_duncangeddes"):
			return "DUNCANGEDDES";
		case joaat("cs_angusgeddes"):
			return "ANGUSGEDDES";
		case joaat("cs_evelynmiller"):
			return "EvelynMiller";
		case joaat("cs_sistercalderon"):
			return "SISTERCALDERON";
		case joaat("cs_edgarross"):
			return "EDGARROSS";
		case joaat("cs_wintonholmes"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("u_f_m_rkshomesteadtenant_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("cs_rockyseven_widow"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("u_m_m_bht_strawberryduel"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("u_m_m_rhdtrainstationworker_01"):
			return "StationWorker";
		case joaat("cs_levisimon"):
			return "LEVISIMON";
		case joaat("s_m_m_fussarhenchman_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("a_c_donkey_01"):
			return "A_C_DONKEY_01";
		case joaat("a_m_m_guatownfolk_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("a_m_o_guatownfolk_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("u_m_o_valbartender_01"):
			return "U_M_O_ValBartender_01";
		case joaat("u_m_m_nbxbartender_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("cs_unidusterjail_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("a_m_m_rhdtownfolk_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("u_m_m_unibountyhunter_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("u_m_m_unibountyhunter_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("cs_brotherdorkins"):
			return "BrotherDorkins";
		case joaat("g_m_m_unibraithwaites_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("a_m_m_gamhighsociety_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("u_m_m_strfreightstationowner_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("cs_eagleflies"):
			return "EagleFlies";
		case joaat("cs_rainsfall"):
			return "CS_RAINSFALL";
		case joaat("a_m_m_wapwarriors_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("a_m_y_nbxstreetkids_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("u_m_m_bht_shackescape"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("a_m_m_htlroughtravellers_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("cs_lemiuxassistant"):
			return "LemiuxAssistant";
		case joaat("p_keys01x"):
			return "p_keys01x";
		case joaat("cs_balloonoperator"):
			return "CS_BALLOONOPERATOR";
		case joaat("a_m_m_bivworker_01"):
			return "Worker1";
		case joaat("u_m_m_bht_mineforeman"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("a_m_m_nbxslums_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("cs_sdpriest"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("a_c_bear_01"):
			return "A_C_BEAR_01";
		case joaat("cs_marshall_thurwell"):
			return "MARSHALL_THURWELL";
		case joaat("cs_famousgunslinger_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("cs_sd_streetkid_01"):
			return "cs_sd_streetkid_01";
		case joaat("cs_sd_streetkid_02"):
			return "cs_sd_streetkid_02";
		case joaat("cs_obediahhinton"):
			return "ObediahHinton";
		case joaat("cs_poisonwellshaman"):
			return "PoisonWellShaman";
		case joaat("cs_cooper"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("u_m_m_bht_benedictallbright"):
			return "u_m_m_bht_benedictallbright";
		case joaat("cs_jules"):
			return "Jules";
		case joaat("cs_mrdevon"):
			return "MRDEVON";
		case joaat("cs_mrwayne"):
			return "MRWAYNE";
		case joaat("cs_paytah"):
			return "PAYTAH";
		case joaat("cs_valdeputy_01"):
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case joaat("a_m_m_nbxdockworkers_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("u_m_m_valsheriff_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("s_m_m_bankclerk_01"):
			return "S_M_M_BANKCLERK_01";
		case joaat("u_m_m_nbxbronteasc_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case joaat("p_c_horse_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_412(int iParam0)
{
	return iParam0 != 0;
}

bool func_413(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_414(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	while (iVar0 < 48)
	{
		if (func_413(iVar0, 2))
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
		func_599(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_415(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_409(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	func_600(iVar0, iParam1);
}

void func_416(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_409(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_417(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_409(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	if (bParam1)
	{
		func_601(iParam0, 4);
		func_600(iVar0, 1);
		func_602(iVar0, 1);
	}
	else
	{
		func_603(iParam0, 4);
		func_602(iVar0, 0);
	}
}

float func_418(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_409(iParam0))
	{
		return 0f;
	}
	iVar0 = func_597(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_419(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_409(iParam0))
	{
		return false;
	}
	iVar0 = func_597(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_420(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_201(uParam0) };
	Var8 = { func_181(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

int func_421(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_604(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_422(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_201(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_444, sParam1)) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1))
	{
		ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_444, sParam1);
	}
}

void func_423(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_424(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

int func_425(var uParam0)
{
	if (-1829635046 == func_605(81053684))
	{
		if (func_606(uParam0))
		{
			return 1;
		}
	}
	else if (func_607(-525676072, uParam0))
	{
		if (func_606(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_427(int iParam0)
{
	struct<2> Var0;

	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_428(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_429(int iParam0)
{
	int iVar0;

	if (func_255() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_430(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_444(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_608(1);
	}
}

void func_431()
{
	int iVar0;

	iVar0 = func_443(Global_35, 9, 1, 0);
	if (func_444(iVar0))
	{
		return;
	}
	iVar0 = func_443(Global_35, 7, 1, 0);
	if (func_444(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_443(Global_35, 0, 1, 0);
	if (func_444(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_443(Global_35, 1, 1, 0);
	if (func_444(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_443(Global_35, 18, 1, 0);
	if (func_444(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_609();
	if (func_444(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_610(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_611(3072, 0);
	if (func_444(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_610(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_432()
{
	return Global_1900383->f_393;
}

int func_433(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_406(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_434(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_435(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_436(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_437()
{
	return &Global_1899515;
}

void func_438(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

var func_439()
{
	return (func_612() || func_613());
}

Vector3 func_440(var uParam0)
{
	return uParam0->f_505;
}

float func_441(var uParam0)
{
	return uParam0->f_508;
}

float func_442(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_443(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_444(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_445(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_446(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_447(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_452(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_614(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_448(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_449(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_460(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_450(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_451(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_449(1108822547, 6))
	{
		if (bParam2)
		{
			func_447(iParam0, iVar0, func_255() != -1, 0, 0);
			func_453(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_454(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_452(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_453(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_460(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_460(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_454(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_460(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_460(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_460(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_455(var uParam0)
{
	struct<8> Var0;

	uParam0->f_454 = { Var0 };
}

void func_456(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_462[iVar0 /*9*/], "", 64);
		iVar0++;
	}
}

void func_457()
{
	Global_1911774 = 1;
}

struct<5> func_458(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_615(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_616(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_467(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_617(bParam1) };
			if (iParam2 && func_618(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_619(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_619(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_620(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_621(bParam1) };
			switch (func_427(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_622(iParam0, -1823706425))
			{
				Var0 = { func_467(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, -1838434463);
			}
			else if (func_622(iParam0, -1483207246))
			{
				Var0 = { func_467(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_623(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_459(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_452(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_460(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_461(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_624();
	if (iParam2 == 39)
	{
		Var0 = { func_458(iParam0, 1, 0) };
		iParam2 = func_460(func_459(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_625(iParam0, 866047851) && func_626(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_448(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_627(func_452(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_628(iParam2);
	func_629(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_630(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_630(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_631(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_632(iParam0, iParam2, iParam1, func_255() != -1);
	if (bParam4)
	{
		func_633(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_633(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_454(func_452(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_462(bool bParam0, bool bParam1, bool bParam2)
{
	func_634(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_463(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_446(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_635(Var0);
}

void func_464()
{
	func_636(&(Global_1946804->f_2776));
	func_637(32768);
	func_454(1108822547, 8, 6);
}

int func_465(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_460(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_403(Var0);
}

struct<4> func_467(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_426(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_469(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_468(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_467(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_469(bParam6), &Var0, 0);
	return uVar4;
}

int func_469(bool bParam0)
{
	if (func_255() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_470(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_471(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_471(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_473(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_638(vVar0, vVar3, vParam1);
}

bool func_474(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_475(int iParam0, int iParam1)
{
	func_639(iParam0, iParam1);
}

int func_476(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_471(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_470(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_470(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_470(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_477(var uParam0, int iParam1)
{
	func_640(uParam0, iParam1);
}

bool func_478(int iParam0)
{
	return iParam0 > -1;
}

void func_479(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_641(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_642(1, bVar1, 1, sVar2);
		func_643(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_644(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_645();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_644(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_644(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_480(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

bool func_481(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_482(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_483()
{
	return "default_leadin_camera";
}

void func_484()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1181125641);
	STREAMING::REMOVE_ANIM_DICT(func_530(1));
}

int func_485(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_646(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_486(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_487(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_488(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_5))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam1, uParam0->f_5);
}

int func_489(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_490(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_478(iParam0))
		{
			return false;
		}
	}
	func_647(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_491(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_478(iParam0))
		{
			return;
		}
	}
	func_647(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_492(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_114(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_490(iParam0, 2, 1))
			{
				func_574(iParam0, 2, 1);
			}
			if (func_264(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_491(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_366(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_257(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_257(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_648(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_491(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_649(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_491(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_649(iParam0, 1);
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
			if (!func_490(iParam0, 44, 0))
			{
				func_491(iParam0, 44, 0);
			}
			if (func_650(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_649(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_574(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_577(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_495(iParam0, 0, 0, 1);
			}
			func_574(iParam0, 33, 1);
			func_574(iParam0, 34, 1);
			func_574(iParam0, 29, 1);
			if (!func_90(vVar0) && uParam7)
			{
				func_649(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_649(iParam0, 4);
			}
			else
			{
				func_649(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_648(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_287(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_649(iParam0, 4);
			}
			else
			{
				func_649(iParam0, 5);
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
				if (func_651(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_652(iParam0, iParam13, 0);
						func_653(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_490(iParam0, 25, 0))
						{
							func_574(iParam0, 25, 0);
						}
						func_491(iParam0, 66, 0);
						func_649(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_649(iParam0, 5);
				}
				func_491(iParam0, 28, 1);
			}
			else
			{
				func_649(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_649(iParam0, 6);
			}
			break;
		case 6:
			if (func_257(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
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
					func_654(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_655(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_649(iParam0, 7);
		case 7:
			func_577(iParam0, bParam9, bParam15, 0);
			func_571(iParam0, 4, bParam11);
			func_573(iParam0);
			if (bParam20)
			{
				if (func_656(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_657(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_649(iParam0, 0);
			func_658(iParam0, 16, 1);
			func_574(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_493(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_7))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, uParam0->f_7))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, uParam0->f_7);
	}
}

void func_494(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	if (uParam2 && (!func_169() || !ANIMSCENE::_0x6F1F0B17109309DA(Global_43799, func_213(iParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
		if (!Global_1935630->f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, -1871534317, true, 0, false);
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1030835986);
	ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	if (bParam3)
	{
		func_656(iParam0);
	}
}

void func_495(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_659(iParam0, bParam3);
	}
	else
	{
		func_660(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_661(iParam0, bParam3);
	}
	else
	{
		func_662(iParam0, bParam3);
	}
}

void func_496(int iParam0)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_SET_PED_DRUNKNESS(iVar0, 0, 0f);
}

int func_497(int iParam0, bool bParam1)
{
	if (!func_315(iParam0))
	{
		return 0;
	}
	if ((func_316(iParam0, 1) && !func_317(iParam0)) && func_318(iParam0))
	{
		return 0;
	}
	if (!func_316(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_663(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_498(int iParam0, int iParam1)
{
	if (func_255() != -1)
	{
		return;
	}
	if (!func_315(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_499(int iParam0)
{
	if (!func_315(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_500(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

int func_501(var uParam0)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_369(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_502(var uParam0)
{
	if (func_584(uParam0->f_3, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_3, 1))
	{
		func_371(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_585(&(uParam0->f_3), 2);
				return 1;
			}
			break;
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_585(&(uParam0->f_3), 2);
				return 1;
			}
			break;
	}
	return 0;
}

int func_503(var uParam0)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_373(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_504(var uParam0)
{
	vector3 vVar0;
	var uVar3;

	if (func_584(uParam0->f_2, 1))
	{
		return 1;
	}
	if (!uParam0->f_66)
	{
		return 0;
	}
	if (uParam0->f_65 <= 0f)
	{
		return 1;
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
	{
		ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_1, &vVar0, &uVar3, 2);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > uParam0->f_65)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_505(var uParam0)
{
	if (func_584(uParam0->f_2, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_2, 1))
	{
		func_378(uParam0);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, 1, 0))
	{
		func_585(&(uParam0->f_2), 2);
		return 1;
	}
	return 0;
}

int func_506(var uParam0, int iParam1)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, 1, 0))
	{
		return 0;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_380(uParam0, iParam1);
	}
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam1, *uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_507(var uParam0)
{
	if (func_584(uParam0->f_2, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_2, 1))
	{
		func_382(uParam0);
	}
	if (PROPSET::_HAS_PROPSET_LOADED(*uParam0))
	{
		func_585(&(uParam0->f_2), 2);
		return 1;
	}
	return 0;
}

int func_508(var uParam0)
{
	if (func_584(uParam0->f_3, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_3, 1))
	{
		func_384(uParam0);
	}
	if (WEAPON::_0xFF07CF465F48B830(*uParam0))
	{
		func_585(&(uParam0->f_3), 2);
		return 1;
	}
	return 0;
}

int func_509(var uParam0)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_386(uParam0);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_510(var uParam0)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_388(uParam0);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(*uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_511(var uParam0)
{
	if (func_584(uParam0->f_2, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_2, 1))
	{
		func_390(uParam0);
	}
	if (AUDIO::_0xE368E8422C860BA7(*uParam0, uParam0->f_1, -2))
	{
		func_585(&(uParam0->f_2), 2);
		return 1;
	}
	return 0;
}

int func_512(var uParam0)
{
	if (func_584(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_584(uParam0->f_1, 1))
	{
		func_392(uParam0);
	}
	if (STREAMING::_0x2C04D89A0FB4E244(*uParam0))
	{
		func_585(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_513(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

Vector3 func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2794.382f, -1170.167f, 46.924f;
				case 1:
					return 2793.889f, -1169.104f, 46.924f;
				case 2:
					return 2792.731f, -1167.983f, 46.9323f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_515(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 32f;
				case 1:
					return 185f;
				case 2:
					return 247f;
			}
			break;
	}
	return 0f;
}

int func_516(var uParam0)
{
	return uParam0;
}

bool func_517(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_518(int iParam0)
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

void func_519(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	func_664(uParam0);
	iVar0 = func_665(uParam0, iParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_293(iParam1);
		}
		iVar0 = func_666(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_667(uParam0);
		}
		else
		{
			Var1.f_10 = joaat("weapon_unarmed");
			MISC::_COPY_MEMORY(uParam0->f_3[iVar0 /*13*/], &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_667(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	(uParam0->f_3[iVar0 /*13*/])->f_2 = iParam1;
	(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9))
	{
		(uParam0->f_3[iVar0 /*13*/])->f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL((uParam0->f_3[iVar0 /*13*/])->f_9, sParam2))
		{
		}
		(uParam0->f_3[iVar0 /*13*/])->f_9 = sParam2;
	}
	func_341(uParam0, 2);
}

char* func_520(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("canoe"):
			return "CANOE";
		case joaat("wagon02x"):
			return "WAGON02X";
		case joaat("wagon04x"):
			return "WAGON04X";
		case joaat("wagon05x"):
			return "WAGON05X";
		case joaat("chuckwagon000x"):
			return "CHUCKWAGON000X";
		case joaat("wagoncircus02x"):
			return "WAGONCIRCUS02X";
		case joaat("coach2"):
			return "COACH2";
		case joaat("privatecoalcar01x"):
			return "PRIVATECOALCAR01X";
		case joaat("northpassenger01x"):
			return "NORTHPASSENGER01X";
		case joaat("privatesteamer01x"):
			return "PRIVATESTEAMER01X";
		case joaat("privatedining01x"):
			return "PRIVATEDINING01X";
		case joaat("utilliwag"):
			return "UTILLIWAG";
		case joaat("skiff"):
			return "SKIFF";
		case joaat("handcart"):
			return "HANDCART";
		case joaat("rowboatswamp"):
			return "ROWBOATSWAMP";
		case joaat("rowboatswamp02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_521(int iParam0)
{
	return iParam0 != 0;
}

Vector3 func_522(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_523(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_524(int iParam0)
{
	int iVar0;

	iVar0 = func_323(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::GET_PERSCHAR_PED_INDEX(iVar0);
}

void func_525(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_526(int iParam0)
{
	if (!func_178(iParam0))
	{
		return -1;
	}
	return func_646(iParam0);
}

int func_527(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false) && &Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_528()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_529(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_531(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		if (!bParam1)
		{
			func_668(uParam0);
		}
		else if (bParam2)
		{
			func_669(uParam0);
		}
		else
		{
			func_670(uParam0, uParam0->f_1898);
		}
	}
	else
	{
		if (!func_63(uParam0, 1048576) && bParam1)
		{
			func_670(uParam0, uParam0->f_1898);
		}
		else if (!func_63(uParam0, 2097152) && bParam2)
		{
			func_669(uParam0);
		}
		else if ((func_63(uParam0, 1048576) && !bParam1) || (func_63(uParam0, 2097152) && !bParam2))
		{
			func_668(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1882 * FtoV(func_671(uParam0->f_1898)) };
			if (!func_548(vVar0, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1875), 1056964608, 1) && !func_90(vVar0))
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_1875, vVar0);
			}
		}
	}
}

void func_532(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_1688 < 0)
	{
		return;
	}
	if ((uParam0->f_1899 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901)) && VEHICLE::_0xEA44E97849E9F3DD(uParam0->f_1901))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_0xA8BA0BAE0173457B(uParam0->f_1901, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || func_195(iVar2, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1) < func_195(iVar1, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_63(uParam0, 8192))
		{
			if (func_195(iVar1, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1) <= ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_17 + 5f) || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 5f)
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1901, 5f);
				}
			}
			else if ((!func_672(512) || func_673(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1901, 50f);
			}
		}
	}
}

void func_533(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 2)
	{
		if ((uParam0->f_1633[iVar2 /*15*/])->f_11 && VOLUME::DOES_VOLUME_EXIST((uParam0->f_1633[iVar2 /*15*/])->f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1898) && !(uParam0->f_1633[iVar2 /*15*/])->f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1898, (uParam0->f_1633[iVar2 /*15*/])->f_12);
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_1898, 1);
				(uParam0->f_1633[iVar2 /*15*/])->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || func_63(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISABLE_HUD_CONTEXT(-1679307491);
					}
					uParam0->f_1687 = 0;
					func_312(uParam0, 33554432);
				}
				bVar3 = func_523((uParam0->f_1633[iVar2 /*15*/])->f_10, 131072);
				if (func_674(Global_35, (uParam0->f_1633[iVar2 /*15*/])->f_12, 0, 1))
				{
					if (uParam0->f_1688 >= 0)
					{
						func_338(uParam0, (uParam0->f_1633[iVar2 /*15*/])->f_10, (uParam0->f_1345[uParam0->f_1688 /*22*/])->f_1, 1065353216);
						PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
					}
					if (bVar3)
					{
						func_675();
					}
					func_676(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_677(uParam0->f_1633[iVar2 /*15*/]) != 0)
				{
					func_676(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_523((uParam0->f_1633[iVar2 /*15*/])->f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (((func_195(Global_35, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1) > (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_17 && func_674(uParam0->f_1898, (uParam0->f_1633[iVar2 /*15*/])->f_12, 0, 1)) || uParam0->f_1687 != 0) || func_63(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_254(Global_35, &(uParam0->f_1687), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
							uParam0->f_1687 = 0;
							func_312(uParam0, 33554432);
						}
						else
						{
							func_341(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

int func_534(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return 0;
	}
	if (func_63(uParam0, 33554432))
	{
		return 0;
	}
	if (func_314(uParam0->f_1016[uParam0->f_1688 /*41*/], 2) && uParam0->f_1897)
	{
		return 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1876))
	{
		return 1;
	}
	if (func_63(uParam0, 65536))
	{
		return 1;
	}
	return 0;
}

float func_535(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	fVar16 = 10000f;
	switch (&uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_1016[iParam1 /*41*/])->f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_1016[iParam1 /*41*/])->f_4, true);
			vVar0 = { (uParam0->f_1016[iParam1 /*41*/])->f_4 - (uParam0->f_1016[iParam1 /*41*/])->f_1 };
			if (func_678(&vVar3, (uParam0->f_1016[iParam1 /*41*/])->f_1, (uParam0->f_1016[iParam1 /*41*/])->f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= (uParam0->f_1016[iParam1 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_1016[iParam1 /*41*/])->f_1.f_2 + (uParam0->f_1016[iParam1 /*41*/])->f_10))
			{
				func_679(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_1016[iParam1 /*41*/])->f_1, true) - (uParam0->f_1016[iParam1 /*41*/])->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_536(var uParam0)
{
	int iVar0;

	func_680(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_1016[iVar0 /*41*/])->f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1016[iVar0 /*41*/])->f_22)) && func_681(uParam0, iVar0)) && !func_481(uParam0->f_1016[iVar0 /*41*/], 1))
			{
				if (!func_682(uParam0, &((uParam0->f_1016[iVar0 /*41*/])->f_22)))
				{
					func_162(&(uParam0->f_1771), (uParam0->f_1016[iVar0 /*41*/])->f_22, 0, -1, 1, 0);
				}
				func_683(uParam0->f_1016[iVar0 /*41*/], 1);
			}
		}
		iVar0++;
	}
}

void func_537(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_538(var uParam0, var uParam1)
{
	*uParam0 = 0;
	if (!func_544(uParam1, 8))
	{
		if (func_544(uParam1, 1))
		{
			*uParam0 = 1;
		}
		else if (func_544(uParam1, 4))
		{
			*uParam0 = 4;
		}
		else if (func_544(uParam1, 2))
		{
			*uParam0 = 2;
		}
	}
}

void func_539(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_545(sParam0, iParam2);
	func_684(iParam1, fParam3);
}

void func_540()
{
	if (MISC::IS_BIT_SET(&Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(Global_1357510, 0);
	}
}

void func_541(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 || iParam1);
}

char* func_542(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_543()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_544(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_545(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_685(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_685(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_685(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			CAM::_0x6A4D224FC7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_IS_CAMERA_AVAILABLE(sParam0))
		{
			CAM::_0xB8B207C34285E978(sParam0);
		}
	}
}

float func_546(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_442(vVar0, vVar3, iParam2);
}

void func_547(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_548(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_549(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 - (uParam0->f_1665 && iParam1));
}

int func_550(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (func_63(uParam0, 4))
	{
		return 0;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
	{
		return 0;
	}
	if (!(uParam0->f_1016[uParam0->f_1688 /*41*/])->f_29)
	{
		return 0;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_29)
	{
		if (&uParam0->f_1016[uParam0->f_1688 /*41*/] == 0)
		{
			vVar3 = { (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_4 - (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_678(&vVar0, uParam0->f_1765, Global_36, vVar6, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1)
				{
					if (vVar0.x > (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1.f_1)
					{
						if (vVar0.y > (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1.f_2 - 0.1f) || vVar0.z > ((uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1.f_2 + (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_10)) || (func_314(uParam0->f_1016[uParam0->f_1688 /*41*/], 2) && (uParam0->f_1897 || uParam0->f_1899)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*uParam1 = uParam0->f_1688;
					return 1;
				}
			}
		}
		else if (func_63(uParam0, 8))
		{
			*uParam1 = uParam0->f_1684;
			return 1;
		}
	}
	return 0;
}

void func_551(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		(uParam0->f_1016[iParam1 /*41*/])->f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43804 = iParam1;
		uParam0->f_1769 = 1;
	}
}

void func_552(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;

	switch ((uParam0->f_475[iParam1 /*18*/])->f_2)
	{
		case 9:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8) && ANIMSCENE::IS_ANIM_SCENE_RUNNING((uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8, 0))
			{
				fVar1 = ANIMSCENE::GET_ANIM_SCENE_PHASE((uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8);
				iVar0 = 0;
				while (iVar0 < 35)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2)) && (uParam0->f_3[iVar0 /*13*/])->f_8 > 0f) && fVar1 >= (uParam0->f_3[iVar0 /*13*/])->f_8) && !ENTITY::IS_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2, true);
					}
					iVar0++;
				}
				if (((func_567(uParam0->f_475[iParam1 /*18*/], 4) && (uParam0->f_475[iParam1 /*18*/])->f_12 < 1f) && fVar1 >= (uParam0->f_475[iParam1 /*18*/])->f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				}
				if (func_567(uParam0->f_475[iParam1 /*18*/], 64) && func_686(uParam0, iParam1, 0))
				{
					func_687(uParam0, (uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8, (uParam0->f_475[iParam1 /*18*/])->f_13, (uParam0->f_475[iParam1 /*18*/])->f_14);
				}
			}
			break;
		case 10:
			if (((uParam0->f_475[iParam1 /*18*/])->f_3 >= 0 && (uParam0->f_475[iParam1 /*18*/])->f_5 >= 0) && (uParam0->f_475[iParam1 /*18*/])->f_3 != (uParam0->f_475[iParam1 /*18*/])->f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_3 /*13*/])->f_2) && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_5 /*13*/])->f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_3 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_3 /*13*/])->f_2)))
					{
						func_688(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_3 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_5 /*13*/])->f_2, (uParam0->f_475[iParam1 /*18*/])->f_13, (uParam0->f_475[iParam1 /*18*/])->f_14);
					}
					if ((func_567(uParam0->f_475[iParam1 /*18*/], 128) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_5 /*13*/])->f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_5 /*13*/])->f_2)))
					{
						func_688(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_5 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_3 /*13*/])->f_2, (uParam0->f_475[iParam1 /*18*/])->f_13, (uParam0->f_475[iParam1 /*18*/])->f_14);
					}
				}
			}
			break;
		case 4:
			func_555(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_553(var uParam0, int iParam1)
{
	if ((uParam0->f_475[iParam1 /*18*/])->f_1 > uParam0->f_1683)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_475[iParam1 /*18*/])->f_3 /*13*/])->f_2))
	{
	}
	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
	{
		return 0;
	}
	if ((uParam0->f_475[iParam1 /*18*/])->f_1 == 0)
	{
		return 1;
	}
	if ((uParam0->f_475[iParam1 /*18*/])->f_17 == 2 && func_8(uParam0) == 9)
	{
		return 1;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if (func_8(uParam0) > 3 && &uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if ((((func_8(uParam0) > 3 && (uParam0->f_475[iParam1 /*18*/])->f_17 == 1) && func_337(uParam0) != 11) && func_336(uParam0, uParam0->f_1684)) && (uParam0->f_475[iParam1 /*18*/])->f_2 != 4)
	{
		return 0;
	}
	if (((uParam0->f_475[iParam1 /*18*/])->f_2 == 9 && (uParam0->f_475[iParam1 /*18*/])->f_4 >= 0) && ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED((uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8, 1, 0))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/])->f_8, func_213(Global_35)))
		{
			if (func_360(uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/], 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_360(uParam0->f_1522[(uParam0->f_475[iParam1 /*18*/])->f_4 /*10*/], 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_554(var uParam0, int iParam1, var uParam2)
{
	switch ((uParam0->f_475[iParam1 /*18*/])->f_2)
	{
		case 9:
			func_689(uParam0, uParam2, iParam1);
			break;
		case 4:
			func_555(uParam0, iParam1, 0, 0);
			break;
		case 5:
			(uParam0->f_475[iParam1 /*18*/])->f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_22)))
			{
				if (func_48(&(uParam0->f_1872)) >= IntToFloat(((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_25 / 1000)))
				{
					func_680(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_22)))
					{
						func_162(&(uParam0->f_1771), (uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_22));
					}
					(uParam0->f_475[iParam1 /*18*/])->f_7 = 1;
				}
			}
			else
			{
				(uParam0->f_475[iParam1 /*18*/])->f_7 = 1;
			}
			break;
		case 10:
			(uParam0->f_475[iParam1 /*18*/])->f_7 = 1;
			break;
		case 11:
			(uParam0->f_475[iParam1 /*18*/])->f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_555(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;

	iVar2 = uParam0->f_1688;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_475[iParam1 /*18*/];
		fVar3 = (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_7;
		fVar4 = (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (func_337(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_690(uParam0, iVar2))
				{
					uParam0->f_1685 = iParam1;
				}
				(uParam0->f_475[iParam1 /*18*/])->f_7 = 1;
			}
			if (((!func_314(uParam0->f_1016[iVar2 /*41*/], 32) && func_691()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459))) || (!func_314(uParam0->f_1016[iVar2 /*41*/], 128) && uParam0->f_1899))
			{
				if (uParam0->f_1899)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 0.1f, -1, false);
					if (!func_63(uParam0, 8192))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1901, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1901, 24, 1000);
					func_564(uParam0, 8);
				}
				else
				{
					func_341(uParam0, 131072);
					func_564(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				func_564(uParam0, 5);
			}
			else
			{
				func_692(uParam0);
			}
			break;
		case 1:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3f;
			if ((((!func_471(Global_35, 716706914) && !func_471(Global_35, 242628503)) && func_21(&(uParam0->f_1869)) >= 2.5f) || (!func_444(func_443(Global_35, 0, 1, 0)) && !func_444(func_443(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_692(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3.5f;
			iVar1 = 5664;
			if (func_314(uParam0->f_1016[uParam0->f_1688 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_336(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_254(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_692(uParam0);
			}
			if ((!uParam0->f_1897 && !uParam0->f_1899) || bVar0)
			{
				uParam0->f_1686 = 0;
				if (func_337(uParam0) == 5 || iParam1 < 0)
				{
					func_692(uParam0);
				}
				else
				{
					func_693(uParam0, iParam1, bParam2);
					func_26(&(uParam0->f_1869));
					func_564(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = func_21(&(uParam0->f_1869)) >= 1f;
			if (func_694(Global_35, 242628503) || bVar0)
			{
				func_564(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!func_314(uParam0->f_1016[iVar2 /*41*/], 256))
			{
				if (func_425(&(uParam0->f_1903)))
				{
					func_695(uParam0->f_1903, 0);
				}
			}
			func_26(&(uParam0->f_1869));
			func_564(uParam0, 4);
			break;
		case 4:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if ((func_314(uParam0->f_1016[iVar2 /*41*/], 256) || !func_425(&uVar5)) || bVar0)
			{
				if (func_696())
				{
					func_697();
					func_564(uParam0, 10);
				}
				else
				{
					func_564(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if (func_696() || bVar0)
			{
				func_564(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			iVar1 = 5664;
			if (func_314(uParam0->f_1016[uParam0->f_1688 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_336(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_254(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1686 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1901, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				func_564(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (func_21(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!func_63(uParam0, 8192))
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1901, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
				func_341(uParam0, 131072);
				func_564(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_556(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
		{
			CAM::_0x798BE43C9393632B(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_557(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 - (uParam0->f_1666.f_1 && iParam1));
}

int func_558(var uParam0, char* sParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	char cVar20[64];
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;

	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1889);
	if (!bVar0)
	{
		uParam0->f_1889 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam0->f_1889);
	if (!bVar1)
	{
		return 0;
	}
	func_698(uParam0);
	func_500(uParam0, uParam2);
	if (func_63(uParam0, 16384))
	{
		func_699(uParam0);
	}
	Var2.f_10 = joaat("weapon_unarmed");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_700(uParam0, iVar18);
		if (func_701(uParam0, 0))
		{
			if (func_702(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					(uParam0->f_1016[iVar16 /*41*/])->f_27 = 0;
					func_703(uParam0, 1, &((uParam0->f_1016[iVar16 /*41*/])->f_1));
					func_703(uParam0, 2, &((uParam0->f_1016[iVar16 /*41*/])->f_1.f_1));
					func_703(uParam0, 3, &((uParam0->f_1016[iVar16 /*41*/])->f_1.f_2));
					func_703(uParam0, 4, &((uParam0->f_1016[iVar16 /*41*/])->f_11));
					func_703(uParam0, 5, &((uParam0->f_1016[iVar16 /*41*/])->f_12));
					func_703(uParam0, 6, &((uParam0->f_1016[iVar16 /*41*/])->f_13));
					func_703(uParam0, 7, &((uParam0->f_1016[iVar16 /*41*/])->f_4));
					func_703(uParam0, 8, &((uParam0->f_1016[iVar16 /*41*/])->f_4.f_1));
					func_703(uParam0, 9, &((uParam0->f_1016[iVar16 /*41*/])->f_4.f_2));
					func_703(uParam0, 10, &((uParam0->f_1016[iVar16 /*41*/])->f_7));
					func_703(uParam0, 11, &((uParam0->f_1016[iVar16 /*41*/])->f_7.f_1));
					func_703(uParam0, 12, &((uParam0->f_1016[iVar16 /*41*/])->f_7.f_2));
					func_703(uParam0, 13, &((uParam0->f_1016[iVar16 /*41*/])->f_10));
					func_703(uParam0, 14, &((uParam0->f_1016[iVar16 /*41*/])->f_14));
					func_703(uParam0, 15, &((uParam0->f_1016[iVar16 /*41*/])->f_15));
					if (func_702(uParam0, 16, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/] = iVar17;
					}
					func_703(uParam0, 19, &((uParam0->f_1016[iVar16 /*41*/])->f_16));
					func_703(uParam0, 20, &((uParam0->f_1016[iVar16 /*41*/])->f_17));
					func_703(uParam0, 31, &((uParam0->f_1016[iVar16 /*41*/])->f_18));
					if (func_704(uParam0, 21, &cVar20))
					{
						MemCopy(&((uParam0->f_1016[iVar16 /*41*/])->f_19), {cVar20}, 3);
					}
					if (func_704(uParam0, 22, &cVar20))
					{
						MemCopy(&((uParam0->f_1016[iVar16 /*41*/])->f_22), {cVar20}, 3);
					}
					func_702(uParam0, 23, &((uParam0->f_1016[iVar16 /*41*/])->f_25));
					func_705(uParam0, &((uParam0->f_1016[iVar16 /*41*/])->f_27));
					if (func_704(uParam0, 35, &((uParam0->f_1016[iVar16 /*41*/])->f_30)))
					{
					}
					if (func_702(uParam0, 39, &iVar17))
					{
						(uParam0->f_1016[iVar16 /*41*/])->f_39 = iVar17;
					}
					else
					{
						(uParam0->f_1016[iVar16 /*41*/])->f_39 = 1;
					}
					if (func_703(uParam0, 40, &((uParam0->f_1016[iVar16 /*41*/])->f_40)))
					{
						func_683(uParam0->f_1016[iVar16 /*41*/], 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1016[iVar16 /*41*/])->f_30)))
					{
						(uParam0->f_1016[iVar16 /*41*/])->f_30 = { func_405() };
					}
					(uParam0->f_1016[iVar16 /*41*/])->f_29 = 1;
					if (uParam0->f_1895 == -1 || (uParam0->f_1016[uParam0->f_1895 /*41*/])->f_17 < (uParam0->f_1016[iVar16 /*41*/])->f_17)
					{
						uParam0->f_1895 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_1016[iVar18 /*41*/])->f_29)
		{
			vVar29 = { vVar29 + (uParam0->f_1016[iVar18 /*41*/])->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1900 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_1016[iVar18 /*41*/])->f_29)
		{
			if (!func_706(vVar29, (uParam0->f_1016[iVar18 /*41*/])->f_1, 5f, 1))
			{
				uParam0->f_1900 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_700(uParam0, iVar18);
				if (func_701(uParam0, 45))
				{
					if (func_702(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_707(uParam0->f_1522[iVar16 /*10*/], 2);
							func_704(uParam0, 46, uParam0->f_1522[iVar16 /*10*/]);
							if (func_708(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_707(uParam0->f_1522[iVar16 /*10*/], 1);
								}
							}
							if (func_702(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_707(uParam0->f_1522[iVar16 /*10*/], 8);
								}
								else if (iVar17 == 2)
								{
									func_707(uParam0->f_1522[iVar16 /*10*/], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 35)
			{
				iVar16 = -1;
				func_700(uParam0, iVar18);
				if (func_701(uParam0, 50))
				{
					if (func_702(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_702(uParam0, 43, &(Var2.f_3));
					if (func_704(uParam0, 52, &cVar20))
					{
						MemCopy(&(Var2.f_4), {cVar20}, 4);
					}
					func_703(uParam0, 53, &(Var2.f_8));
					if (func_702(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_708(uParam0, 55, &(Var2.f_11));
					func_708(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_709(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 35)
						{
							(uParam0->f_3[iVar32 /*13*/])->f_3 = Var2.f_3;
							(uParam0->f_3[iVar32 /*13*/])->f_4 = { Var2.f_4 };
							(uParam0->f_3[iVar32 /*13*/])->f_8 = Var2.f_8;
							(uParam0->f_3[iVar32 /*13*/])->f_10 = Var2.f_10;
							(uParam0->f_3[iVar32 /*13*/])->f_11 = Var2.f_11;
							(uParam0->f_3[iVar32 /*13*/])->f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (func_710(Var2.f_1))
							{
								func_341(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_700(uParam0, iVar18);
			if (func_701(uParam0, 82))
			{
				if (func_704(uParam0, 83, &cVar20))
				{
					MemCopy(&(uParam0->f_459), {cVar20}, 4);
				}
				func_704(uParam0, 84, &(uParam0->f_459.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459.f_4)))
				{
					if (uParam0->f_459.f_15 == 1)
					{
						uParam0->f_459.f_4 = { func_397() };
					}
					else if (uParam0->f_459.f_15 == 2)
					{
						uParam0->f_459.f_4 = { func_405() };
					}
					else
					{
						uParam0->f_459.f_4 = { func_405() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_700(uParam0, iVar18);
				if (func_701(uParam0, 57))
				{
					if (func_702(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_475[iVar16 /*18*/])->f_8 = 0;
							func_702(uParam0, 58, uParam0->f_475[iVar16 /*18*/]);
							if (func_702(uParam0, 59, &iVar17))
							{
								(uParam0->f_475[iVar16 /*18*/])->f_1 = func_711(iVar17);
							}
							if (func_702(uParam0, 60, &iVar17))
							{
								(uParam0->f_475[iVar16 /*18*/])->f_2 = func_712(iVar17);
							}
							func_702(uParam0, 61, &((uParam0->f_475[iVar16 /*18*/])->f_3));
							func_703(uParam0, 67, &((uParam0->f_475[iVar16 /*18*/])->f_10));
							func_703(uParam0, 70, &((uParam0->f_475[iVar16 /*18*/])->f_11));
							func_703(uParam0, 68, &((uParam0->f_475[iVar16 /*18*/])->f_9));
							func_702(uParam0, 72, &((uParam0->f_475[iVar16 /*18*/])->f_5));
							func_703(uParam0, 77, &((uParam0->f_475[iVar16 /*18*/])->f_12));
							func_702(uParam0, 78, &((uParam0->f_475[iVar16 /*18*/])->f_13));
							func_702(uParam0, 79, &((uParam0->f_475[iVar16 /*18*/])->f_14));
							if (func_702(uParam0, 73, &iVar17))
							{
								(uParam0->f_475[iVar16 /*18*/])->f_17 = iVar17;
							}
							if (func_702(uParam0, 75, &iVar17))
							{
								(uParam0->f_475[iVar16 /*18*/])->f_4 = iVar17;
								bVar15 = true;
							}
							func_703(uParam0, 80, &((uParam0->f_475[iVar16 /*18*/])->f_15));
							if (func_708(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 1;
								}
							}
							if (func_708(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 512;
								}
							}
							if (func_708(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 2;
								}
							}
							if (func_708(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 16;
								}
							}
							if (func_708(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 32;
								}
							}
							if (func_708(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 4;
								}
							}
							if (func_708(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 64;
								}
							}
							if (func_708(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 128;
								}
							}
							if (func_708(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_475[iVar16 /*18*/])->f_8 |= 256;
								}
							}
							if (!bVar15 && (uParam0->f_475[iVar16 /*18*/])->f_2 == 9)
							{
								(uParam0->f_475[iVar16 /*18*/])->f_4 = (uParam0->f_475[iVar16 /*18*/])->f_3;
								(uParam0->f_475[iVar16 /*18*/])->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							(uParam0->f_475[iVar16 /*18*/])->f_16 = (uParam0->f_475[iVar16 /*18*/])->f_2;
							(uParam0->f_475[iVar16 /*18*/])->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1894 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_700(uParam0, iVar18);
				if (func_701(uParam0, 85))
				{
					func_702(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_708(uParam0, 87, uParam0->f_1345[iVar18 /*22*/]);
						func_704(uParam0, 96, &((uParam0->f_1345[iVar18 /*22*/])->f_2));
						func_704(uParam0, 97, &((uParam0->f_1345[iVar18 /*22*/])->f_10));
						func_703(uParam0, 93, &((uParam0->f_1345[iVar18 /*22*/])->f_18));
						func_703(uParam0, 94, &((uParam0->f_1345[iVar18 /*22*/])->f_19));
						func_702(uParam0, 95, &((uParam0->f_1345[iVar18 /*22*/])->f_20));
						(uParam0->f_1345[iVar18 /*22*/])->f_1 = 0;
						func_713(uParam0, &((uParam0->f_1345[iVar18 /*22*/])->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_700(uParam0, iVar18);
				if (func_701(uParam0, 98))
				{
					if (func_702(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_1633[iVar16 /*15*/])->f_10 = 0;
							func_714(uParam0, 99, uParam0->f_1633[iVar16 /*15*/]);
							func_714(uParam0, 100, &((uParam0->f_1633[iVar16 /*15*/])->f_6));
							func_714(uParam0, 101, &((uParam0->f_1633[iVar16 /*15*/])->f_3));
							if (func_702(uParam0, 102, &iVar17))
							{
								(uParam0->f_1633[iVar16 /*15*/])->f_9 = iVar17;
							}
							func_705(uParam0, &((uParam0->f_1633[iVar16 /*15*/])->f_10));
							(uParam0->f_1633[iVar16 /*15*/])->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1889);
			func_341(uParam0, 1);
			func_341(uParam0, 16384);
			func_715(uParam0);
			return 1;
		}
	}

int func_559(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1522[iVar0 /*10*/]) && func_360(uParam0->f_1522[iVar0 /*10*/], 2)) && !func_360(uParam0->f_1522[iVar0 /*10*/], 16)) && func_716(uParam0, iVar0))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8))
			{
				(uParam0->f_1522[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/], 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
				return 0;
			}
			else if (!ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1522[iVar0 /*10*/])->f_8, 0))
			{
				return 0;
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout"))
			{
				func_707(uParam0->f_1522[iVar0 /*10*/], 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
			func_707(uParam0->f_1522[iVar0 /*10*/], 16);
		}
		iVar0++;
	}
	return 1;
}

void func_560(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1522[iVar0 /*10*/]) && func_360(uParam0->f_1522[iVar0 /*10*/], 2))
		{
			iVar1 = 0;
			if (func_716(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			(uParam0->f_1522[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_483(), 64);
	StringCopy(&(Var2.f_8), func_543(), 64);
	uParam0->f_1708 = { Var2 };
	uParam0->f_1731 = { Var2 };
	if (!func_313(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(func_483());
		func_480(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1345[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1345[iVar0 /*22*/])->f_2), func_483()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1345[iVar0 /*22*/])->f_2)))
			{
				CAM::_0x6A4D224FC7643941(&((uParam0->f_1345[iVar0 /*22*/])->f_2));
				(uParam0->f_1345[iVar0 /*22*/])->f_21 = 1;
			}
		}
		iVar0++;
	}
}

int func_561(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8))
		{
			if (!func_360(uParam0->f_1522[iVar0 /*10*/], 64))
			{
				if (ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1522[iVar0 /*10*/])->f_8, 0))
				{
					func_717(uParam0, (uParam0->f_1522[iVar0 /*10*/])->f_8);
					ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
					bVar1 = false;
					func_707(uParam0->f_1522[iVar0 /*10*/], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED((uParam0->f_1522[iVar0 /*10*/])->f_8, 1, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1016[iVar0 /*41*/])->f_19)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1016[iVar0 /*41*/])->f_19), "empty"))
		{
			HUD::TEXT_BLOCK_REQUEST(&((uParam0->f_1016[iVar0 /*41*/])->f_19));
			if (!HUD::TEXT_BLOCK_IS_LOADED(&((uParam0->f_1016[iVar0 /*41*/])->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_313(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(func_483()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1345[iVar0 /*22*/])->f_2)) && (uParam0->f_1345[iVar0 /*22*/])->f_21) && !CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1345[iVar0 /*22*/])->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_90(uParam0->f_1885) || uParam0->f_1888 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout"))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_0xADF1D53F3B1FE0A7((uParam0->f_1522[iVar0 /*10*/])->f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1888, uParam0->f_1885) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1888);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_1522[iVar0 /*10*/])->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_562(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && !func_517((uParam0->f_3[iVar0 /*13*/])->f_2)) && func_444((uParam0->f_3[iVar0 /*13*/])->f_10)) && !func_710((uParam0->f_3[iVar0 /*13*/])->f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 0, 0))
				{
					if (func_718((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if ((uParam0->f_3[iVar0 /*13*/])->f_11)
				{
					if (func_719(iVar1, 0, 0, 0) != (uParam0->f_3[iVar0 /*13*/])->f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_563(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_3[iVar0 /*13*/])->f_12)
		{
			func_720(uParam0->f_3[iVar0 /*13*/]);
		}
		iVar0++;
	}
}

void func_564(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_26(&(uParam0->f_1869));
}

void func_565(var uParam0)
{
	func_721(uParam0);
	func_722(uParam0);
}

int func_566(var uParam0)
{
	if (uParam0->f_1685 < 0 || (uParam0->f_475[uParam0->f_1685 /*18*/])->f_4 < 0)
	{
		return -1;
	}
	return (uParam0->f_1522[(uParam0->f_475[uParam0->f_1685 /*18*/])->f_4 /*10*/])->f_8;
}

bool func_567(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_568(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar1 /*13*/])->f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(iParam1) == ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar1 /*13*/])->f_2))
				{
					iVar0++;
					if (iParam1 == (uParam0->f_3[iVar1 /*13*/])->f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_569(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!func_445(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_723(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, iParam1);
		}
	}
}

void func_570(int iParam0, bool bParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_724(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_571(iParam0, 1, 0);
		}
	}
	func_571(iParam0, 16, bParam1);
}

void func_571(int iParam0, int iParam1, bool bParam2)
{
	if (!func_478(iParam0))
	{
		return;
	}
	func_725(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_572(int iParam0)
{
	func_571(iParam0, 8, 0);
}

void func_573(int iParam0)
{
	func_491(iParam0, 36, 1);
}

void func_574(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_478(iParam0))
		{
			return;
		}
	}
	func_647(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_575(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_726(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_576(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_114(iParam0))
	{
		iVar1 = func_256(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_727(iParam0);
		}
	}
	if (func_490(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_256(iParam0), 137, true);
	}
}

void func_577(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_478(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_574(iParam0, 50, 1);
		func_574(iParam0, 48, 1);
		func_574(iParam0, 49, 1);
		func_574(iParam0, 51, 1);
		func_574(iParam0, 52, 1);
		func_574(iParam0, 54, 1);
		func_574(iParam0, 55, 1);
	}
	else
	{
		func_491(iParam0, 50, 1);
		func_491(iParam0, 48, 1);
		func_491(iParam0, 49, 1);
		func_491(iParam0, 51, 1);
		if (bParam3)
		{
			func_491(iParam0, 54, 1);
		}
		else
		{
			func_574(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_491(iParam0, 52, 1);
			if (bParam3)
			{
				func_491(iParam0, 55, 1);
			}
		}
		else
		{
			func_574(iParam0, 52, 1);
			if (!bParam3)
			{
				func_574(iParam0, 55, 1);
			}
		}
	}
}

void func_578(int iParam0, bool bParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_256(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_256(iParam0), 204, false);
	}
}

void func_579(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (!func_116(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_490(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_575(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_256(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_728(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_491(iParam0, 2, 1);
	}
	else
	{
		func_729(iParam0);
		func_491(iParam0, 1, 1);
	}
}

void func_580(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_581(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_582(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_478(iParam1))
	{
		return;
	}
	iVar0 = func_581(iParam1);
	if (func_730(iParam1))
	{
		if (!func_731(iParam1))
		{
			return;
		}
	}
	func_574(iParam1, 39, 1);
	func_732(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_732(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_732(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_491(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_733(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

bool func_584(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_585(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_586(var uParam0)
{
	if (!func_584(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_585(&(uParam0->f_1), 1);
	}
}

void func_587(var uParam0)
{
	if (!func_584(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_585(uParam0, 1);
	}
}

int func_588()
{
	if (func_255() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_589(int iParam0)
{
	return iParam0 != 0;
}

void func_590(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

void func_591(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_24 = iParam1;
	}
}

int func_592(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_90(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_734(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_735(iVar0, bParam8);
	return iVar0;
}

int func_593(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(uParam0->f_462[iVar0 /*9*/], sParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_594(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_181(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_595(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_596(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_597(int iParam0)
{
	return iParam0;
}

void func_598(int iParam0)
{
	if (!func_736(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_599(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_600(iParam0, 1);
	func_602(iParam0, 1);
	func_603(iParam0, 128);
}

void func_600(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_413(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_601(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_602(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_603(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_604(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

int func_605(int iParam0)
{
	int iVar0;

	iVar0 = func_460(func_737(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_606(int iParam0)
{
	if (func_607(81053684, iParam0))
	{
		return 1;
	}
	if (func_607(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_607(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_460(func_737(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_427(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

void func_608(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_609()
{
	if (!func_444(Global_1935630->f_45))
	{
		return joaat("weapon_unarmed");
	}
	return Global_1935630->f_45;
}

bool func_610(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_444(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_444(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_255() == -1 && !func_738(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_738(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_444(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_739(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_740(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_741(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_611(int iParam0, int iParam1)
{
	var uVar0;

	return func_742(&uVar0, iParam0, iParam1);
}

bool func_612()
{
	return &Global_1935436 == 1;
}

bool func_613()
{
	return &Global_1935436 == 2;
}

int func_614(int iParam0)
{
	int iVar0;

	iVar0 = func_427(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

struct<4> func_615(bool bParam0)
{
	return func_467(1328661203, func_743(), -1591664384, bParam0);
}

int func_616(int iParam0)
{
	vector3 vVar0;

	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_617(bool bParam0)
{
	int iVar0;

	iVar0 = func_469(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224214))
		{
			*Global_1224214 = { func_467(923904168, func_615(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224222))
		{
			*Global_1224222 = { func_467(923904168, func_615(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_467(923904168, func_615(bParam0), -740156546, 0);
}

int func_618(int iParam0, bool bParam1)
{
	if (func_427(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_744(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_619(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_468(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_620(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_745(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_621(bool bParam0)
{
	int iVar0;

	iVar0 = func_469(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224218))
		{
			*Global_1224218 = { func_467(271701509, func_615(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_467(271701509, func_615(bParam0), 12999093, 0);
}

int func_622(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_427(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_623(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_469(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

void func_624()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_625(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_626(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_627(int iParam0)
{
	func_454(iParam0, 8, 6);
}

void func_628(int iParam0)
{
	func_746(&(Global_1946804->f_2589), iParam0);
}

void func_629(int iParam0, int iParam1)
{
	func_747(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_630(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_631(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_427(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_450(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_629(iVar1, iVar3);
		}
	}
	if (func_748(-1586649372) && func_450(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_629(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_629(iVar1, iVar3);
					}
				}
			}
			func_749(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_749(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_629(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_749(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_629(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_629(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_749(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_749(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_629(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_749(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_629(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_629(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_427(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_629(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_625(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_427(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_427(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_629(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_427(&(uParam0->f_1[iVar1 /*3*/])) || func_625(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_629(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_632(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_750(0);
	if (iParam2 != 0 && func_751(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_752(iParam0, func_452(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_633(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_255() != -1;
	iVar7 = func_750(0);
	if (func_448(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_452(iVar0, 1);
			if (func_449(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_449(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_753(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_754(uParam0);
				if (iVar3 > 0)
				{
					if (!func_448(524288))
					{
						func_446(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_452(iVar0, 1);
							if (func_449(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_449(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_753(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_629(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_637(524288);
				}
			}
		}
	}

void func_634(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_755(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_255() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_756(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_757(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_757(Global_40.f_7729);
				Global_1946804->f_1378 = func_757(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_758(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_759(0, 1);
	}
}

void func_635(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_595(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_596(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_446(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_595(Param0))
			{
				return;
			}
			func_596(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_446(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_466(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_636(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_637(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_638(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_639(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_640(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

char* func_641(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_642(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_643(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_760(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_644(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_645()
{
	func_761();
	func_762();
	func_763();
}

int func_646(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_764(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_647(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_648(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_256(iParam0);
	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_649(int iParam0, int iParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_650(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_765(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_485(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_325(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_765(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_766(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_767(iParam0, 0))
					{
						func_491(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_768(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_574(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_257(func_256(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_257(func_581(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_651(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_114(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_769(iParam0, iParam1);
	return uVar0;
}

void func_652(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_651(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_491(iParam0, 25, 1);
	}
}

void func_653(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_770(iParam2))
		{
			iVar0 = func_771(iParam2, -1);
			if (func_772(iParam1, iVar0))
			{
				if (func_773(iParam1, iVar0))
				{
					if (func_774(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_775(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_776(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_491(iParam0, 66, 0);
		}
	}
}

void func_654(int iParam0)
{
	func_777(iParam0);
	func_778(iParam0, 0);
}

void func_655(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

int func_656(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_657(int iParam0, int iParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_610(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_610(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_658(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_659(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_779(iVar0);
	func_491(iParam0, 60, 1);
	if (bParam1)
	{
		func_780(iParam0);
	}
}

void func_660(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_781(iVar0);
	func_574(iParam0, 60, 1);
	if (bParam1)
	{
		func_782(iParam0);
	}
}

void func_661(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_783(iVar0);
	if (iParam0 == 14)
	{
		func_784(iVar0);
	}
	func_491(iParam0, 61, 1);
	if (bParam1)
	{
		func_785(iParam0);
	}
}

void func_662(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	iVar0 = func_256(iParam0);
	func_786(iVar0);
	func_574(iParam0, 61, 1);
	if (bParam1)
	{
		func_787(iParam0);
	}
}

bool func_663(int iParam0, int iParam1)
{
	if (func_255() != -1)
	{
		return false;
	}
	if (!func_315(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_323(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_524(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(func_323(iParam0));
}

void func_664(var uParam0)
{
	int iVar0;
	struct<11> Var1;

	Var1.f_10 = joaat("weapon_unarmed");
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9) && ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			MISC::_COPY_MEMORY(uParam0->f_3[iVar0 /*13*/], &Var1, 13);
		}
		iVar0++;
	}
}

int func_665(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_3[iVar0 /*13*/])->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_666(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) && MISC::ARE_STRINGS_EQUAL((uParam0->f_3[iVar0 /*13*/])->f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_667(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_668(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	func_788(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630->f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_312(uParam0, 1048576);
	func_312(uParam0, 2097152);
}

void func_669(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	func_788(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::_0xEA44E97849E9F3DD(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_0xA8BA0BAE0173457B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	func_341(uParam0, 2097152);
	func_312(uParam0, 1048576);
}

void func_670(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	func_788(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1882 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1882 * FtoV(func_671(iParam1)) };
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_341(uParam0, 1048576);
	func_312(uParam0, 2097152);
}

float func_671(int iParam0)
{
	if (TASK::IS_PED_SPRINTING(iParam0))
	{
		return 1f;
	}
	if (TASK::IS_PED_RUNNING(iParam0))
	{
		return 0.9f;
	}
	if (TASK::IS_PED_WALKING(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

int func_672(int iParam0)
{
	switch (func_255())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_673(int iParam0)
{
	switch (func_255())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

bool func_674(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_675()
{
	PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1098542161, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1591726981, false);
}

void func_676(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (func_677(uParam0->f_1633[iParam1 /*15*/]))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!func_523((uParam0->f_1633[iParam1 /*15*/])->f_10, 256))
			{
				if (func_425(&(uParam0->f_1903)))
				{
					func_695(uParam0->f_1903, 0);
					func_789(uParam0->f_1633[iParam1 /*15*/], 2);
				}
			}
			break;
		case 1:
			if (!func_523((uParam0->f_1633[iParam1 /*15*/])->f_10, 256))
			{
				if (!func_790())
				{
					func_789(uParam0->f_1633[iParam1 /*15*/], 0);
				}
			}
			else
			{
				func_789(uParam0->f_1633[iParam1 /*15*/], 0);
			}
			break;
		case 2:
			if (!func_791())
			{
				func_789(uParam0->f_1633[iParam1 /*15*/], 0);
			}
			break;
	}
}

int func_677(var uParam0)
{
	return uParam0->f_14;
}

int func_678(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { vParam4 - vParam1 };
	vVar3 = { vParam1 - vParam10 };
	fVar6 = func_792(vParam7, vVar0);
	fVar7 = -func_792(vParam7, vVar3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return 0;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return 0;
	}
	return 1;
}

void func_679(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;

	if (!func_793(uParam0, iParam1))
	{
		*uParam2 = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS((uParam0->f_1016[iParam1 /*41*/])->f_12) * (uParam0->f_1016[iParam1 /*41*/])->f_11), (BUILTIN::SIN((uParam0->f_1016[iParam1 /*41*/])->f_12) * (uParam0->f_1016[iParam1 /*41*/])->f_11)) };
		vParam3 = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS((uParam0->f_1016[iParam1 /*41*/])->f_13) * (uParam0->f_1016[iParam1 /*41*/])->f_11), (BUILTIN::SIN((uParam0->f_1016[iParam1 /*41*/])->f_13) * (uParam0->f_1016[iParam1 /*41*/])->f_11)) };
	}
	else
	{
		*uParam2 = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + Vector(0f, ((BUILTIN::COS((uParam0->f_1016[iParam1 /*41*/])->f_12) * (uParam0->f_1016[iParam1 /*41*/])->f_11) + (uParam0->f_1016[iParam1 /*41*/])->f_18), ((BUILTIN::SIN((uParam0->f_1016[iParam1 /*41*/])->f_12) * (uParam0->f_1016[iParam1 /*41*/])->f_11) + (uParam0->f_1016[iParam1 /*41*/])->f_18)) };
		vParam3 = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + Vector(0f, ((BUILTIN::COS((uParam0->f_1016[iParam1 /*41*/])->f_13) * (uParam0->f_1016[iParam1 /*41*/])->f_11) + (uParam0->f_1016[iParam1 /*41*/])->f_18), ((BUILTIN::SIN((uParam0->f_1016[iParam1 /*41*/])->f_13) * (uParam0->f_1016[iParam1 /*41*/])->f_11) + (uParam0->f_1016[iParam1 /*41*/])->f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1897 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875)) && func_91(uParam0->f_1898, (uParam0->f_1016[iParam1 /*41*/])->f_1, (uParam0->f_1016[iParam1 /*41*/])->f_17, 1, 1))
	{
		vVar34 = { VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1875) };
		vVar37 = { VOLUME::GET_VOLUME_COORDS(uParam0->f_1875) };
		*(vVar3[0 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*(vVar3[1 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*(vVar3[2 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		*(vVar3[3 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		*(vVar16[0 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar3[0 /*3*/]), *(vVar3[1 /*3*/]), true) };
		*(vVar16[1 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar3[0 /*3*/]), *(vVar3[2 /*3*/]), true) };
		*(vVar16[2 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar3[3 /*3*/]), *(vVar3[1 /*3*/]), true) };
		*(vVar16[3 /*3*/]) = { MISC::_0x83ACC65D9ACEC5EF((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar3[3 /*3*/]), *(vVar3[2 /*3*/]), true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar16[0 /*3*/]), true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar16[1 /*3*/]), true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar16[2 /*3*/]), true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_1016[iParam1 /*41*/])->f_1, *(vVar16[3 /*3*/]), true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (&fVar29[iVar40] < &fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { *(vVar16[iVar41 /*3*/]) };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*uParam8 = func_442((uParam0->f_1016[iParam1 /*41*/])->f_1, vVar0, 0);
	if (*uParam8 < (uParam0->f_1016[iParam1 /*41*/])->f_12)
	{
		*uParam8 = (*uParam8 + 360f);
	}
	if ((uParam0->f_1016[iParam1 /*41*/])->f_13 < (uParam0->f_1016[iParam1 /*41*/])->f_12)
	{
		*uParam9 = ((uParam0->f_1016[iParam1 /*41*/])->f_13 + 360f);
	}
	else
	{
		*uParam9 = (uParam0->f_1016[iParam1 /*41*/])->f_13;
	}
	if (*uParam8 < *uParam9)
	{
		vVar42 = { (uParam0->f_1016[iParam1 /*41*/])->f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0f, (BUILTIN::COS(*uParam8) * (uParam0->f_1016[iParam1 /*41*/])->f_11), (BUILTIN::SIN(*uParam8) * (uParam0->f_1016[iParam1 /*41*/])->f_11)) };
		fVar45 = 0f;
		uParam0->f_1879 = { vVar42 + Vector(0f, ((BUILTIN::COS(*uParam8) * (uParam0->f_1016[iParam1 /*41*/])->f_17) + fVar45), ((BUILTIN::SIN(*uParam8) * (uParam0->f_1016[iParam1 /*41*/])->f_17) + fVar45)) };
	}
}

void func_680(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((uParam0->f_3[iVar0 /*13*/])->f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_3[iVar0 /*13*/])->f_4)))
			{
				func_794(&(uParam0->f_1771), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), &((uParam0->f_3[iVar0 /*13*/])->f_4), 0);
			}
		}
		iVar0++;
	}
}

int func_681(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == (uParam0->f_475[iVar0 /*18*/])->f_2 && &uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_682(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_1016[iVar0 /*41*/])->f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1016[iVar0 /*41*/])->f_22)) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1016[iVar0 /*41*/])->f_22), sParam1)) && func_481(uParam0->f_1016[iVar0 /*41*/], 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_683(var uParam0, int iParam1)
{
	uParam0->f_26 = (uParam0->f_26 || iParam1);
}

void func_684(var uParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!func_795(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	if (!func_795(uParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (!func_795(uParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	}
	if (!func_795(uParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	}
	if (!func_795(uParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
	if (!func_795(uParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	if (!(func_796(17) && func_195(Global_35, ((*Global_1835011)[17 /*74*/])->f_18, 0) < 10f))
	{
		if (!func_795(uParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
		}
	}
	if (!func_795(uParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1664638556, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_795(uParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!func_795(uParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!func_795(uParam0, 32))
		{
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
		}
	}
}

bool func_685(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_686(var uParam0, int iParam1, bool bParam2)
{
	if ((uParam0->f_475[iParam1 /*18*/])->f_17 == 0 && func_8(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if ((uParam0->f_475[iParam1 /*18*/])->f_17 == 2 && func_8(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (((uParam0->f_475[iParam1 /*18*/])->f_17 == 1 && func_8(uParam0) > 3) && func_8(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	return 0;
}

void func_687(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	char cVar1[64];
	int iVar9;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			StringCopy(&cVar1, (uParam0->f_3[iVar0 /*13*/])->f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_359(uParam0, (uParam0->f_3[iVar0 /*13*/])->f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2);
				if (PED::IS_PED_HUMAN(iVar9) && iVar9 != Global_35)
				{
					func_688(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_688(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<23> Var0;

	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = uParam1;
	Var0.f_4 = 14283;
	Var0.f_14 = uParam2;
	Var0.f_15 = uParam3;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

void func_689(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;

	if ((uParam0->f_475[iParam2 /*18*/])->f_4 < 0)
	{
		return;
	}
	iVar0 = (uParam0->f_475[iParam2 /*18*/])->f_4;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED((uParam0->f_1522[iVar0 /*10*/])->f_8, 1, 0))
		{
			func_717(uParam0, (uParam0->f_1522[iVar0 /*10*/])->f_8);
			ANIMSCENE::_0xADF1D53F3B1FE0A7((uParam0->f_1522[iVar0 /*10*/])->f_8, &vVar1, &vVar4, 2);
			if (func_360(uParam0->f_1522[iVar0 /*10*/], 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX((uParam0->f_1522[iVar0 /*10*/])->f_8, func_213(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (func_442(vVar1, Global_36, 1) - func_442(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_1522[iVar0 /*10*/])->f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1522[iVar0 /*10*/])->f_8, func_213(Global_35)) && (uParam0->f_475[iParam2 /*18*/])->f_17 != 0)
			{
				if ((func_8(uParam0) > 3 && !func_314(uParam0->f_1016[&uParam0->f_475[iParam2 /*18*/] /*41*/], 16)) && !func_314(uParam0->f_1016[&uParam0->f_475[iParam2 /*18*/] /*41*/], 32768))
				{
					func_797(uParam0, 1);
				}
				if (uParam0->f_1899)
				{
					if (func_314(uParam0->f_1016[&uParam0->f_475[iParam2 /*18*/] /*41*/], 128))
					{
					}
					else
					{
						func_341(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((uParam0->f_1522[iVar0 /*10*/])->f_8, 0))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1522[iVar0 /*10*/])->f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((uParam0->f_1522[iVar0 /*10*/])->f_8, "b_PlayerArthur", !func_588(), false);
				}
				ANIMSCENE::START_ANIM_SCENE((uParam0->f_1522[iVar0 /*10*/])->f_8);
				if ((uParam0->f_475[iParam2 /*18*/])->f_17 == 0)
				{
					func_707(uParam0->f_1522[iVar0 /*10*/], 128);
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST((uParam0->f_1522[iVar0 /*10*/])->f_8, "pl_breakout"))
					{
						func_361((uParam0->f_1522[iVar0 /*10*/])->f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED((uParam0->f_1522[iVar0 /*10*/])->f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED((uParam0->f_1522[iVar0 /*10*/])->f_8, 0);
			}
			if (func_567(uParam0->f_475[iParam2 /*18*/], 4))
			{
				uParam0->f_1685 = iParam2;
				if (((((func_332(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && (uParam0->f_475[iParam2 /*18*/])->f_17 == 1) && &uParam0->f_475[iParam2 /*18*/] < 8) && !func_314(uParam0->f_1016[&uParam0->f_475[iParam2 /*18*/] /*41*/], 32768)) && !func_314(uParam0->f_1016[&uParam0->f_475[iParam2 /*18*/] /*41*/], 524288))
				{
					CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
					func_480(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 35)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && (uParam0->f_3[iVar20 /*13*/])->f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar20 /*13*/])->f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam0->f_3[iVar20 /*13*/])->f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1522[iVar0 /*10*/])->f_8, func_213(Global_35)) && (uParam0->f_475[iParam2 /*18*/])->f_17 != 0) && !func_314(uParam0->f_1016[&uParam0->f_475[iParam2 /*18*/] /*41*/], 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX((uParam0->f_1522[iVar0 /*10*/])->f_8, func_213(Global_35), &vVar21, false, 0, 2) && !func_90(vVar21))
				{
					func_798(uParam0, 0);
				}
			}
			(uParam0->f_475[iParam2 /*18*/])->f_7 = 1;
		}
	}
}

int func_690(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (&uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			if (func_567(uParam0->f_475[iVar0 /*18*/], 4))
			{
				return 1;
			}
			if ((uParam0->f_475[iVar0 /*18*/])->f_2 == 11)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_691()
{
	return ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35));
}

void func_692(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1897)
	{
		if (func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 8192) && PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, 147004056, false, 0, false);
		}
		if (!func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 65536) || (!func_444(func_443(Global_35, 0, 1, 0)) && !func_444(func_443(Global_35, 1, 1, 0))))
		{
			if (func_336(uParam0, uParam0->f_1684))
			{
				func_799((uParam0->f_1016[uParam0->f_1684 /*41*/])->f_7);
			}
		}
	}
	if (!func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 16) && (func_444(func_443(Global_35, 0, 1, 0)) || func_444(func_443(Global_35, 1, 1, 0))))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, 1, 0, 1, 0);
		if (func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		func_564(uParam0, 1);
	}
	else if ((!func_336(uParam0, uParam0->f_1684) && !func_345(uParam0, 4)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		func_564(uParam0, 3);
	}
	else
	{
		func_564(uParam0, 6);
	}
}

void func_693(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	func_800(uParam0, iParam1, &vVar1, &fVar0);
	func_798(uParam0, func_544((uParam0->f_1345[&uParam0->f_475[iParam1 /*18*/] /*22*/])->f_1, 8));
	func_26(&(uParam0->f_1869));
	PED::_0xCB9401F918CB0F75(Global_35, "PlayLeadin", 1, -1);
	if ((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_39 != 0)
	{
		if (!func_801(uParam0, &(uParam0->f_475[iParam1 /*18*/])))
		{
			func_683(uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/], 4);
			PED::_0xCB9401F918CB0F75(Global_35, func_482((uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_39), 1, -1);
		}
	}
	func_799(vVar1);
	if ((uParam0->f_475[iParam1 /*18*/])->f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, (uParam0->f_475[iParam1 /*18*/])->f_15);
		func_480(uParam0, 32);
	}
	if (func_567(uParam0->f_475[iParam1 /*18*/], 16))
	{
		func_802(uParam0, &(uParam0->f_475[iParam1 /*18*/]), &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(*(vVar4[iVar24 /*3*/]));
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		func_803(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		func_804(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

int func_694(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_695(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_805())
	{
		return 0;
	}
	if (!func_806(iParam0))
	{
		return 0;
	}
	if (func_807(iParam0))
	{
		iVar0 = 0;
		if (func_427(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_475(&iVar0, 2);
			}
		}
		return func_808(iParam0, iVar0);
	}
	return 0;
}

bool func_696()
{
	return &Global_1357517;
}

void func_697()
{
	Global_1357516 = 0;
}

void func_698(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1889, iVar0, func_809(iVar0));
		iVar0++;
	}
}

void func_699(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;

	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_459 = { Var1 };
	StringCopy(&(uParam0->f_459), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		*(uParam0->f_475[iVar0 /*18*/]) = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1522)
	{
		*(uParam0->f_1522[iVar0 /*10*/]) = { Var76 };
		iVar0++;
	}
	uParam0->f_1683 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		*(uParam0->f_1016[iVar0 /*41*/]) = { Var35 };
		*(uParam0->f_1345[iVar0 /*22*/]) = { Var86 };
		iVar0++;
	}
	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;
	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_1692)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
	}
}

void func_700(var uParam0, int iParam1)
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
}

bool func_701(var uParam0, int iParam1)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return bVar0;
}

bool func_702(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_703(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_FLOAT(uParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_704(var uParam0, int iParam1, char[4] cParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_1889));
	return bVar0;
}

void func_705(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_708(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_708(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_708(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_708(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (func_708(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (func_708(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (func_708(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (func_708(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (func_708(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (func_708(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (func_708(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (func_708(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (func_708(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (func_708(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

bool func_706(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_229(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_707(var uParam0, int iParam1)
{
	uParam0->f_9 = (uParam0->f_9 || iParam1);
}

bool func_708(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, &(uParam0->f_1889));
	return bVar0;
}

int func_709(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		uParam0->f_1921 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			if (((func_710(iParam1) && !&uParam0->f_3[iVar0 /*13*/]) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) == Global_35)
			{
				iParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
			}
			if (ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar0 /*13*/])->f_2) == iParam1)
			{
				if (!&uParam0->f_3[iVar0 /*13*/])
				{
					(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar0 /*13*/])->f_2);
					*iParam2 = iVar0;
					if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && !ITEMSET::IS_IN_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921))
					{
						ITEMSET::ADD_TO_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921);
					}
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && !MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL((uParam0->f_3[iVar0 /*13*/])->f_9, func_411(iParam1)))
				{
					if (!&uParam0->f_3[iVar0 /*13*/])
					{
						(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar0 /*13*/])->f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && !ITEMSET::IS_IN_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921);
						}
						return 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AN_OBJECT((uParam0->f_3[iVar0 /*13*/])->f_2) && !MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL((uParam0->f_3[iVar0 /*13*/])->f_9, func_292(iParam1)))
				{
					if (!&uParam0->f_3[iVar0 /*13*/])
					{
						(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar0 /*13*/])->f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && !ITEMSET::IS_IN_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921);
						}
						return 1;
					}
				}
			}
		}
		else if (STREAMING::IS_MODEL_VALID(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2) && !MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_3[iVar0 /*13*/])->f_9)) && MISC::_DOES_STRING_EXIST_IN_STRING((uParam0->f_3[iVar0 /*13*/])->f_9, "^"))
		{
			if ((ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && STREAMING::IS_MODEL_A_PED(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_411(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING((uParam0->f_3[iVar0 /*13*/])->f_9, func_411(iParam1)))
				{
					if (!&uParam0->f_3[iVar0 /*13*/])
					{
						(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar0 /*13*/])->f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && !ITEMSET::IS_IN_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921);
						}
						return 1;
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AN_OBJECT((uParam0->f_3[iVar0 /*13*/])->f_2) && STREAMING::_0x274EE1B90CFA669E(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_292(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING((uParam0->f_3[iVar0 /*13*/])->f_9, func_292(iParam1)))
				{
					if (!&uParam0->f_3[iVar0 /*13*/])
					{
						(uParam0->f_3[iVar0 /*13*/])->f_1 = ENTITY::GET_ENTITY_MODEL((uParam0->f_3[iVar0 /*13*/])->f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && !ITEMSET::IS_IN_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET((uParam0->f_3[iVar0 /*13*/])->f_2, uParam0->f_1921);
						}
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_710(int iParam0)
{
	return (((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two")) || iParam0 == 11966224);
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
	}
	return 0;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 8:
			return 5;
		case 10:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
			return 11;
	}
	return 0;
}

void func_713(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_708(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (func_708(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_708(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_708(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_708(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

bool func_714(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_1889));
	return bVar0;
}

void func_715(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!func_63(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_1016[iVar0 /*41*/])->f_29)
		{
			(uParam0->f_1016[iVar0 /*41*/])->f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((uParam0->f_1016[iVar0 /*41*/])->f_1, -uParam0->f_1888, uParam0->f_1885) };
			vVar1 = { (uParam0->f_1016[iVar0 /*41*/])->f_7 - (uParam0->f_1016[iVar0 /*41*/])->f_1 };
			vVar1 = { vVar1 + uParam0->f_1885 };
			(uParam0->f_1016[iVar0 /*41*/])->f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((uParam0->f_1016[iVar0 /*41*/])->f_1, -uParam0->f_1888, vVar1) };
			(uParam0->f_1016[iVar0 /*41*/])->f_12 = ((uParam0->f_1016[iVar0 /*41*/])->f_12 + uParam0->f_1888);
			(uParam0->f_1016[iVar0 /*41*/])->f_13 = ((uParam0->f_1016[iVar0 /*41*/])->f_13 + uParam0->f_1888);
			if ((uParam0->f_1016[iVar0 /*41*/])->f_12 > 180f)
			{
				(uParam0->f_1016[iVar0 /*41*/])->f_12 = (-180f + (MISC::ABSF((uParam0->f_1016[iVar0 /*41*/])->f_12) - 180f));
			}
			else if ((uParam0->f_1016[iVar0 /*41*/])->f_12 < -180f)
			{
				(uParam0->f_1016[iVar0 /*41*/])->f_12 = (180f - (MISC::ABSF((uParam0->f_1016[iVar0 /*41*/])->f_12) - 180f));
			}
			if ((uParam0->f_1016[iVar0 /*41*/])->f_13 > 180f)
			{
				(uParam0->f_1016[iVar0 /*41*/])->f_13 = (-180f + (MISC::ABSF((uParam0->f_1016[iVar0 /*41*/])->f_13) - 180f));
			}
			else if ((uParam0->f_1016[iVar0 /*41*/])->f_13 < -180f)
			{
				(uParam0->f_1016[iVar0 /*41*/])->f_13 = (180f - (MISC::ABSF((uParam0->f_1016[iVar0 /*41*/])->f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((uParam0->f_1633[iVar0 /*15*/])->f_11)
		{
			*(uParam0->f_1633[iVar0 /*15*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(uParam0->f_1633[iVar0 /*15*/]), -uParam0->f_1888, uParam0->f_1885) };
			(uParam0->f_1633[iVar0 /*15*/])->f_6.f_2 = ((uParam0->f_1633[iVar0 /*15*/])->f_6.f_2 + uParam0->f_1888);
		}
		iVar0++;
	}
	func_312(uParam0, 8388608);
}

int func_716(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((((uParam0->f_475[iVar0 /*18*/])->f_2 == 9 && (uParam0->f_475[iVar0 /*18*/])->f_4 == iParam1) && !func_360(uParam0->f_1522[iParam1 /*10*/], 32)) && (((uParam0->f_475[iVar0 /*18*/])->f_1 == 0 && !func_567(uParam0->f_475[iVar0 /*18*/], 512)) || func_567(uParam0->f_475[iVar0 /*18*/], 1)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_717(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			StringCopy(&cVar1, (uParam0->f_3[iVar0 /*13*/])->f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_359(uParam0, (uParam0->f_3[iVar0 /*13*/])->f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, (uParam0->f_3[iVar0 /*13*/])->f_2, 0);
					if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
					{
						PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), false);
					}
				}
				else if (func_710((uParam0->f_3[iVar0 /*13*/])->f_1))
				{
					if (func_588())
					{
						StringCopy(&cVar1, func_411(joaat("player_zero")), 64);
						if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, (uParam0->f_3[iVar0 /*13*/])->f_2, 0);
						}
					}
					else
					{
						StringCopy(&cVar1, func_411(11966224), 64);
						if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, (uParam0->f_3[iVar0 /*13*/])->f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_718(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_719(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_720(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = VEHICLE::_0xA8BA0BAE0173457B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2), iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				PED::DELETE_PED(&iVar1);
			}
			iVar0++;
		}
	}
}

void func_721(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_788((uParam0->f_1633[iVar0 /*15*/])->f_12);
		iVar0++;
	}
}

void func_722(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((uParam0->f_1633[iVar0 /*15*/])->f_11)
		{
			func_788((uParam0->f_1633[iVar0 /*15*/])->f_12);
			switch ((uParam0->f_1633[iVar0 /*15*/])->f_9)
			{
				case 0:
					(uParam0->f_1633[iVar0 /*15*/])->f_12 = VOLUME::_CREATE_VOLUME_BOX(*(uParam0->f_1633[iVar0 /*15*/]), (uParam0->f_1633[iVar0 /*15*/])->f_6, (uParam0->f_1633[iVar0 /*15*/])->f_3);
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME((uParam0->f_1633[iVar0 /*15*/])->f_12, 15);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION((uParam0->f_1633[iVar0 /*15*/])->f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					(uParam0->f_1633[iVar0 /*15*/])->f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(*(uParam0->f_1633[iVar0 /*15*/]), (uParam0->f_1633[iVar0 /*15*/])->f_6, (uParam0->f_1633[iVar0 /*15*/])->f_3);
					PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME((uParam0->f_1633[iVar0 /*15*/])->f_12, 15);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION((uParam0->f_1633[iVar0 /*15*/])->f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

char* func_723(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return func_810((uParam0->f_13[iVar0 /*12*/])->f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_724(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_725(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

void func_726(int iParam0)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_811(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_727(int iParam0)
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_256(iParam0)))
		{
			func_658(iParam0, 67108864, 1);
			func_574(iParam0, 19, 1);
		}
	}
}

float func_728(int iParam0)
{
	if (!func_478(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_256(iParam0);
	iVar1 = func_575(iParam0, 0);
	func_812(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_730(int iParam0)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_731(int iParam0)
{
	if (!func_478(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_732(int iParam0, int iParam1, bool bParam2)
{
	if (!func_478(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_733(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_478(iParam0))
	{
		return 0;
	}
	iVar0 = func_581(iParam0);
	if (func_257(iVar0, 0))
	{
		if (func_257(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_730(iParam0)) || func_731(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_813(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_814(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_815(iParam0);
					_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(func_816(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_816(iParam0, 0));
					func_817(iParam0);
				}
			}
			else
			{
				if (func_264(iParam0, 32768, 1))
				{
					iVar2 = func_816(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_257(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_264(iParam0, 32768, 1))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_815(iParam0);
				_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(func_816(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_816(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_815(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_818(iParam0, 0);
	return 1;
}

bool func_734(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_735(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_736(int iParam0)
{
	return func_413(iParam0, 2);
}

int func_737(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_459(iVar0);
}

int func_738(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_739(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_458(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_819((375 + iVar28), 1);
			if (func_619(iParam0, &Var0, iVar5, 0))
			{
				if (func_620(iParam0, &Var6, iVar5))
				{
					Var29 = { func_467(iParam0, Var0, iVar5, 0) };
					func_820(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_821(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_822(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_823(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_740(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_741(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_742(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_824(uParam1, 128);
	if (func_825("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_826(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_444(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_824(uParam1, 16))) && (!WEAPON::_0x6AD66548840472E5(Var4.f_4) || func_824(uParam1, 4))) && (!func_718(Var4.f_4) || func_824(uParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_827(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

struct<4> func_743()
{
	struct<4> Var0;

	return Var0;
}

int func_744(int iParam0, bool bParam1)
{
	if (func_828(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_469(bParam1), iParam0, 0);
}

int func_745(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_469(0);
	*uParam1 = { func_467(iParam0, func_617(0), iParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

void func_746(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_829(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_829(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_830(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_747(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_831(uParam0, 1))
	{
		func_832(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_748(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_460(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_460(iParam0, 1) /*11*/];
}

void func_749(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_629(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_629(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_629(iVar2, iVar0);
		}
	}
}

int func_750(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_833();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_751(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_752(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

int func_753(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_460(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_448(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_754(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_755(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_255() == -1)
	{
		func_834(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_835(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_756(int iParam0, int iParam1)
{
	if (func_255() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_757(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

void func_758(int iParam0, bool bParam1, int iParam2)
{
	func_836(&(Global_1946804->f_1378), iParam0);
	func_837(2, iParam0, 6);
	if (bParam1)
	{
		func_759(0, 1);
	}
}

void func_759(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_838(0);
	}
	if (bParam0)
	{
		func_446(8);
		func_446(512);
	}
	else
	{
		func_446(8);
		func_446(16);
	}
}

char* func_760(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_641(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_641(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_761()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_839())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_840(2);
	}
	if (Global_1347477->f_119)
	{
		return func_840(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_841();
	fVar2 = func_842();
	fVar3 = func_843();
	fVar4 = func_844();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_845()));
	fVar7 = (func_840(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_846(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_847(3, fVar9, fVar9 > 100f);
	return func_848(fVar7, -100f, 100f);
}

float func_762()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_839())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_840(1);
	}
	if (Global_1347477->f_119)
	{
		return func_840(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_841();
	fVar2 = func_842();
	fVar3 = func_843();
	fVar4 = func_844();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_845()));
	fVar7 = (func_840(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_846(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_847(2, fVar9, fVar9 > 100f);
	return func_848(fVar7, -100f, 100f);
}

float func_763()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_839())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_840(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_849())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_850())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_840(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_841();
	fVar2 = func_842();
	fVar3 = func_843();
	fVar4 = func_844();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_845()));
	fVar7 = (func_840(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_846(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_847(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_840(0);
	}
	return func_848(fVar7, -100f, 100f);
}

int func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_765(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_478(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_851(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_852(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_851(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_325(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_852(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_851(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_264(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_852(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_851(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_325(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_851(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_852(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_853(747937920, 1) && !func_851(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_256(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_651(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_767(int iParam0, bool bParam1)
{
	if (!func_478(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_115(iParam0) || func_490(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_768(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

bool func_769(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_478(iParam0))
	{
		return false;
	}
	func_854(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_770(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_771(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_855(296923297, iParam1);
			return func_856(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_855(1237718549, iParam1);
			return func_856(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_772(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_773(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_774(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_772(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_775(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_776(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_772(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_772(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_772(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_772(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_772(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_772(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_772(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_772(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_772(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_772(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_772(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_772(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_772(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_772(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_772(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_772(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_772(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_772(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_772(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_772(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_772(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_772(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_772(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_772(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_772(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_772(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_777(int iParam0)
{
	func_857(iParam0, 1);
	func_857(iParam0, 128);
	func_857(iParam0, 256);
	func_857(iParam0, 512);
	func_857(iParam0, 1024);
	func_857(iParam0, 2048);
	func_857(iParam0, 4096);
	func_857(iParam0, 65536);
	func_857(iParam0, 16384);
	func_857(iParam0, 262144);
	func_857(iParam0, 524288);
	func_857(iParam0, 1048576);
	func_857(iParam0, 2097152);
	func_857(iParam0, 32768);
	func_857(iParam0, 131072);
	func_857(iParam0, 134217728);
	func_857(iParam0, 1073741824);
}

void func_778(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_779(int iParam0)
{
	if (func_858(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_780(int iParam0)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (func_814(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_581(iParam0);
	func_779(iVar0);
	func_732(iParam0, 8192, 1);
}

void func_781(int iParam0)
{
	if (func_858(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_782(int iParam0)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (func_814(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_581(iParam0);
	func_781(iVar0);
	func_732(iParam0, 8192, 0);
}

void func_783(int iParam0)
{
	if (func_858(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_784(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_115(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_785(int iParam0)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (func_814(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_581(iParam0);
	func_783(iVar0);
	func_732(iParam0, 16384, 1);
}

void func_786(int iParam0)
{
	if (func_858(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_787(int iParam0)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (func_814(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_581(iParam0);
	func_786(iVar0);
	func_732(iParam0, 16384, 0);
}

void func_788(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_789(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

bool func_790()
{
	return func_859();
}

bool func_791()
{
	return func_860();
}

float func_792(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_793(var uParam0, int iParam1)
{
	var uVar0;

	if (func_691())
	{
		return 1;
	}
	if (func_425(&uVar0))
	{
		return 1;
	}
	if ((func_444(func_719(Global_35, 0, 0, 0)) && !func_314(uParam0->f_1016[iParam1 /*41*/], 16)) && !func_314(uParam0->f_1016[iParam1 /*41*/], 64))
	{
		return 1;
	}
	return 0;
}

void func_794(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_861(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

bool func_795(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_796(int iParam0)
{
	int iVar0;

	if (!func_81(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_797(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_63(uParam0, 64) && func_332(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		iVar0 = func_719(Global_35, 0, 0, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 0, 1, 0);
				func_341(uParam0, 256);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
			}
		}
		iVar0 = func_719(Global_35, 0, 1, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(Global_35, 1, 1, 1, 0);
				func_341(uParam0, 256);
			}
		}
	}
	else
	{
		func_862(0);
		func_862(1);
	}
}

void func_798(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 312, 0);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56, 0);
	}
	func_541(uParam0, 4);
	HUD::_0x4CC5F2FC1332577F(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((func_332(uParam0) == 0 && uParam0->f_1684 >= 0) && !func_314(uParam0->f_1016[uParam0->f_1684 /*41*/], 524288))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
		func_480(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	func_863(0);
	if (func_223())
	{
		func_224(0);
	}
}

void func_799(vector3 vParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 250;
	if (func_444(func_443(Global_35, 0, 1, 0)) || func_444(func_443(Global_35, 1, 1, 0)))
	{
		iVar0 = 2000;
	}
	fVar1 = ENTITY::GET_ENTITY_HEADING(Global_35);
	if (!func_90(vParam0))
	{
		fVar1 = func_442(Global_36, vParam0, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, false, true);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, true, true);
	}
}

void func_800(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (func_567(uParam0->f_475[iParam1 /*18*/], 32))
	{
		if (func_63(uParam0, 8))
		{
			*uParam2 = { (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1 + func_522(Global_36 - (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1) };
			if (!func_481(uParam0->f_1016[uParam0->f_1684 /*41*/], 2))
			{
				*fParam3 = func_442(Global_36, (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1, 1);
			}
			else
			{
				*fParam3 = (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_40;
			}
		}
		else
		{
			*uParam2 = { (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1 + func_522(Global_36 - (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1) };
			if (!func_481(uParam0->f_1016[uParam0->f_1688 /*41*/], 2))
			{
				*fParam3 = func_442(Global_36, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1);
			}
			else
			{
				*fParam3 = (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_40;
			}
		}
	}
	else
	{
		*uParam2 = { func_864(uParam0) };
		if (func_63(uParam0, 8))
		{
			if (!func_481(uParam0->f_1016[uParam0->f_1684 /*41*/], 2))
			{
				*fParam3 = func_442(Global_36, (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_1, 1);
			}
			else
			{
				*fParam3 = (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_40;
			}
		}
		else if (!func_481(uParam0->f_1016[uParam0->f_1688 /*41*/], 2))
		{
			*fParam3 = func_442(Global_36, (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_1, 1);
		}
		else
		{
			*fParam3 = (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_40;
		}
	}
}

int func_801(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;

	iVar12 = 0;
	while (iVar12 < 30)
	{
		if ((((uParam0->f_475[iVar12 /*18*/])->f_17 == 1 && (uParam0->f_475[iVar12 /*18*/])->f_2 == 9) && (uParam0->f_475[iVar12 /*18*/])->f_4 >= 0) && &uParam0->f_475[iVar12 /*18*/] == iParam1)
		{
			iVar13 = (uParam0->f_1522[(uParam0->f_475[iVar12 /*18*/])->f_4 /*10*/])->f_8;
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar13) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar13, 1, 0)) && ANIMSCENE::_0x6F1F0B17109309DA(iVar13, func_213(Global_35)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar13, func_213(Global_35), &vVar0, false, 0, 2))
				{
					if (!func_90(vVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar12++;
	}
	return 0;
}

void func_802(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;

	func_865(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	func_865(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF((uParam0->f_1016[iParam1 /*41*/])->f_12) == MISC::ABSF((uParam0->f_1016[iParam1 /*41*/])->f_13))
	{
		if (MISC::ABSF((uParam0->f_1016[iParam1 /*41*/])->f_12) >= 90f)
		{
			fVar15 = 180f;
		}
		else
		{
			fVar15 = 90f;
		}
	}
	else
	{
		fVar15 = ((uParam0->f_1016[iParam1 /*41*/])->f_12 - (uParam0->f_1016[iParam1 /*41*/])->f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if ((uParam0->f_1016[iParam1 /*41*/])->f_12 < (uParam0->f_1016[iParam1 /*41*/])->f_13)
		{
			fVar15 = ((uParam0->f_1016[iParam1 /*41*/])->f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = ((uParam0->f_1016[iParam1 /*41*/])->f_13 + MISC::ABSF(fVar15));
		}
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
	}
	*uParam7 = { (uParam0->f_1016[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS(fVar15) * ((uParam0->f_1016[iParam1 /*41*/])->f_11 / 2f)), (BUILTIN::SIN(fVar15) * ((uParam0->f_1016[iParam1 /*41*/])->f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*((*uParam2)[iVar14 /*3*/]) = { func_866(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

void func_803(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;

	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, func_442(Global_36, *((*uParam3)[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608, 1084227584, 1193033728);
	if (func_481(uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, (uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_40, 0);
	}
	else
	{
		vVar0 = { func_867(uParam0, iParam1) };
		if (!func_90(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_804(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	float fVar5;

	vVar0 = { func_867(uParam0, iParam1) };
	if (!func_90(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, func_442(Global_36, vParam3, 1), 0);
		}
		fVar3 = func_442(vParam3, vVar0, 1);
		if (func_481(uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
		{
			fVar3 = (uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_40;
		}
		if (func_567(uParam0->f_475[iParam1 /*18*/], 256))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1f, 20000, fVar3, 1056964608, 0);
		}
		else
		{
			bVar4 = 4;
			bVar4 = (bVar4 || 4194304);
			fVar3 = (fVar3 % 360f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, bVar4, fVar3);
		}
		if (!func_481(uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/], 4) && !func_481(uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
		else
		{
			TASK::TASK_ACHIEVE_HEADING(0, fVar3, 0);
			TASK::TASK_STAND_STILL(0, -1);
		}
	}
	else
	{
		fVar5 = 40000f;
		if (func_481(uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/], 2))
		{
			fVar5 = (uParam0->f_1016[&uParam0->f_475[iParam1 /*18*/] /*41*/])->f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

bool func_805()
{
	return Global_1946804->f_2792;
}

int func_806(int iParam0)
{
	if (func_859())
	{
		return 0;
	}
	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	if (!func_868(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_807(int iParam0)
{
	return func_869(iParam0);
}

int func_808(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_870(iParam0);
	if (func_625(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_425(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_871();
			}
			else
			{
				iVar0 = func_872();
			}
		}
		else if (func_470(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_873();
		}
		else
		{
			iVar0 = func_874();
		}
	}
	else if (func_606(&iVar2))
	{
		if (func_625(iVar2, -1303648999))
		{
			iVar0 = func_871();
		}
		else
		{
			iVar0 = func_872();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_873();
	}
	else
	{
		iVar0 = func_874();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

char* func_809(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
		case 1:
			return ":x1";
		case 2:
			return ":y1";
		case 3:
			return ":z1";
		case 4:
			return ":x2";
		case 5:
			return ":y2";
		case 6:
			return ":z2";
		case 7:
			return ":edgex";
		case 8:
			return ":edgey";
		case 9:
			return ":edgez";
		case 10:
			return ":xhit";
		case 11:
			return ":yhit";
		case 12:
			return ":zhit";
		case 13:
			return ":height";
		case 14:
			return ":trig1";
		case 15:
			return ":trig2";
		case 16:
			return ":areaType";
		case 17:
			return ":moveBlend";
		case 18:
			return ":animBlend";
		case 19:
			return ":fCamZoom";
		case 20:
			return ":fDismount";
		case 21:
			return ":tlDialogueFile";
		case 22:
			return ":tlDialogueLabel";
		case 23:
			return ":iDialogueDelay";
		case 24:
			return ":bQuickStop";
		case 25:
			return ":nomount";
		case 26:
			return ":bAllowClimb";
		case 27:
			return ":bAllowWeapon";
		case 28:
			return ":bAllowCarry";
		case 29:
			return ":usevehicle";
		case 30:
			return ":bSwapWeapon";
		case 31:
			return ":fFixupBuffer";
		case 32:
			return ":bAllowBandana";
		case 33:
			return ":bPickupCarriable";
		case 34:
			return ":bAllowCrouch";
		case 35:
			return ":playlist";
		case 36:
			return ":bPlayerHasControl";
		case 37:
			return ":bStopToHolster";
		case 38:
			return ":bFixupPlayerEarly";
		case 39:
			return ":walkStopOptions";
		case 40:
			return ":fWalkStopHeading";
		case 41:
			return ":bAllowLasso";
		case 42:
			return ":bNoLetterbox";
		case 43:
			return ":index";
		case 44:
			return ":tele";
		case 45:
			return "leadinData/scenes/scene(%i)";
		case 46:
			return ":sceneName";
		case 47:
			return ":sceneIndex";
		case 48:
			return ":sceneRel";
		case 49:
			return ":sceneFoot";
		case 50:
			return "leadinData/entities/entity(%i)";
		case 51:
			return ":model";
		case 52:
			return ":tlVoiceID";
		case 53:
			return ":fVisible";
		case 54:
			return ":weapon";
		case 55:
			return ":forceinhand";
		case 56:
			return ":bDeleteDraftAnimals";
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
		case 58:
			return ":zone";
		case 59:
			return ":when";
		case 60:
			return ":what";
		case 61:
			return ":who";
		case 62:
			return ":syncType";
		case 63:
			return ":loop";
		case 64:
			return ":pause";
		case 65:
			return ":master";
		case 66:
			return ":bezier";
		case 67:
			return ":bezheading";
		case 68:
			return ":fVisible";
		case 69:
			return ":useradoffset";
		case 70:
			return ":radoffset";
		case 71:
			return ":returnlook";
		case 72:
			return ":lookatwho";
		case 73:
			return ":behaviourtype";
		case 74:
			return ":lookatplayer";
		case 75:
			return ":animscene";
		case 76:
			return ":nonavmesh";
		case 77:
			return ":phaseplayerend";
		case 78:
			return ":lookblendin";
		case 79:
			return ":lookblendout";
		case 80:
			return ":foliagemod";
		case 81:
			return ":disableinitloop";
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
		case 83:
			return ":cutName";
		case 84:
			return ":cutPlaylist";
		case 85:
			return "leadinData/cameras/camera(%i)";
		case 86:
			return ":index";
		case 87:
			return ":bDisabled";
		case 88:
			return ":bUseRightCam";
		case 89:
			return ":bUseLeftCam";
		case 90:
			return ":bUseCenterCam";
		case 91:
			return ":bUseNewCam";
		case 92:
			return ":bFocusOnEntity";
		case 96:
			return ":sCameraDictionaryName";
		case 97:
			return ":sCameraRequestName";
		case 95:
			return ":iNewCamLookAt";
		case 93:
			return ":fNewCamFocusOffsetHorz";
		case 94:
			return ":fNewCamFocusOffsetVert";
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
		case 99:
			return ":vOrigin";
		case 100:
			return ":vRotation";
		case 101:
			return ":vScale";
		case 102:
			return ":eType";
	}
	return "";
}

char* func_810(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_811(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_812(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_875(iParam1);
	}
}

float func_813(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_229(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_814(int iParam0, bool bParam1)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_876(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_815(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_581(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_816(int iParam0, int iParam1)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_877(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_817(int iParam0)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_818(int iParam0, int iParam1)
{
	if (!func_478(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_819(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_820(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_878(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_623(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_821(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_469(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_821(bool bParam0)
{
	if (func_255() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_469(bParam0));
}

int func_822(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_828(iParam0))
	{
		return 0;
	}
	if (!func_821(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_823(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_879(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_824(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_825(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_469(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_826(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_827(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_828(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_829(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_830(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_831(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_832(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_833()
{
	return Global_1946804->f_1;
}

void func_834(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_835(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_836(var uParam0, int iParam1)
{
	int iVar0;

	if (func_255() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_834(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_835(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_837(int iParam0, int iParam1, int iParam2)
{
	if (func_255() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_838(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_839()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_840(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_841()
{
	float fVar0;
	int iVar1;

	fVar0 = func_880(13);
	iVar1 = func_881(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_842()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_843()
{
	if (func_882())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_844()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_845()
{
	return Global_1955565->f_3;
}

void func_846(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_760(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_847(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_760(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_848(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_849()
{
	return func_880(12) <= -99f;
}

bool func_850()
{
	return func_880(12) >= 99f;
}

int func_851(int iParam0, bool bParam1)
{
	switch (func_526(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_852(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_853(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_883(iParam0);
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

int func_854(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_884(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_855(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_651(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_857(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

int func_858(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_859()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_885())
	{
		return 1;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_860()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1181125641) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_861(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_862(int iParam0)
{
	int iVar0;

	iVar0 = func_719(Global_35, 0, iParam0, 0);
	if (func_444(iVar0))
	{
		if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(Global_35, 1, iParam0, 1, 0);
		}
		else if (func_718(iVar0))
		{
			if (func_444(func_719(Global_35, 0, 7, 0)) || func_444(func_719(Global_35, 0, 9, 0)))
			{
				if (func_444(func_719(Global_35, 0, 8, 0)))
				{
					func_886(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) && iVar0 != joaat("weapon_fishingrod"))
		{
			if (func_444(func_719(Global_35, 0, 7, 0)) || func_444(func_719(Global_35, 0, 9, 0)))
			{
				if (func_444(func_719(Global_35, 0, 10, 0)))
				{
					func_886(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (iParam0 == 0)
			{
				if (!func_444(func_719(Global_35, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, iParam0, false, false);
	}
}

void func_863(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_864(var uParam0)
{
	if (func_63(uParam0, 8))
	{
		return (uParam0->f_1016[uParam0->f_1684 /*41*/])->f_7;
	}
	if (uParam0->f_1688 >= 0)
	{
		return (uParam0->f_1016[uParam0->f_1688 /*41*/])->f_7;
	}
	return 0f, 0f, 0f;
}

void func_865(var uParam0, float fParam1, vector3 vParam2, vector3 vParam5)
{
	*uParam0 = fParam1;
	uParam0->f_4 = { vParam2 };
	uParam0->f_1 = { vParam5 };
}

Vector3 func_866(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_887(vParam0, vParam3, fParam9) };
	vVar3 = { func_887(vParam3, vParam6, fParam9) };
	return func_887(vVar0, vVar3, fParam9);
}

Vector3 func_867(var uParam0, int iParam1)
{
	int iVar0;

	if ((uParam0->f_475[iParam1 /*18*/])->f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 35)
		{
			if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_475[iParam1 /*18*/])->f_3 == (uParam0->f_3[iVar0 /*13*/])->f_3)
			{
				if (!ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
				{
					return ENTITY::GET_ENTITY_COORDS((uParam0->f_3[iVar0 /*13*/])->f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return 0f, 0f, 0f;
}

bool func_868(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_426(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_616(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_888(iParam0, 1))
		{
			return false;
		}
	}
	return func_889(iParam0, 0, bParam2) >= iParam1;
}

int func_869(int iParam0)
{
	int iVar0;

	iVar0 = func_427(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

int func_870(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_606(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_871()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_890())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_872()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_890())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_873()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_890())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_874()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_890())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_875(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_876(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_478(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_478(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_877(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_478(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_814(iParam0, 1);
		iVar1 = _NAMESPACE48::_GET_PERSCHAR_MODEL_NAME(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

int func_878(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_879(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_880(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_881(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_882()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_883(int iParam0)
{
	int iVar0;
	int iVar1;

	func_891(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_884(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_885()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

void func_886(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		return;
	}
	if (Global_43890)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_35, iParam0);
}

Vector3 func_887(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

int func_888(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_892(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_825("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_826(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_444(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_827(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_827(iVar1);
	}
	return 0;
}

int func_889(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_616(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_892(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_893(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_469(bParam2), iParam0, 0);
	return iVar2;
}

int func_890()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_718(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_718(iVar0)) || iVar0 == joaat("weapon_lasso"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_891(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_894(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_892(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_426(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_616(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_625(iParam0, 1399091007))
	{
		func_895(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_893(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_896(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_897(&Var0, func_617(0));
	}
	if (!func_898(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_827(iVar14);
	return uVar15;
}

int func_894(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_895(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_896(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_897(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_898(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_469(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

