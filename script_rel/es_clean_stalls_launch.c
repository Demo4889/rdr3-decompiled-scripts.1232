#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = -1;
	var uLocal_4 = -1;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = -1;
	var uLocal_10 = -1;
	var uLocal_11 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&uLocal_0);
	}
	func_2(&uLocal_0, &uScriptParam_0);
	while (true)
	{
		if (func_3(&uLocal_0))
		{
			func_1(&uLocal_0);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	if (!func_4(uParam0->f_2.f_8))
	{
		func_5();
		func_6();
		func_7();
	}
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = 5;
	uParam0->f_2 = { *uParam1 };
	func_8(uParam0, 0);
}

int func_3(var uParam0)
{
	int iVar0;

	if (func_9(uParam0))
	{
		return 1;
	}
	iVar0 = func_10(uParam0->f_2.f_2);
	switch (*uParam0)
	{
		case 0:
			func_11(uParam0->f_2.f_2);
			func_12();
			if (uParam0->f_2.f_7 == 37)
			{
				if (!func_13())
				{
					return 0;
				}
			}
			func_8(uParam0, 1);
			break;
		case 1:
			if (func_14(0, 0, 1))
			{
				func_11(uParam0->f_2.f_2);
				func_8(uParam0, 2);
			}
			func_15(iVar0, Global_1899848->f_15.f_10);
			break;
		case 2:
			if (func_4(uParam0->f_2.f_8))
			{
				func_8(uParam0, 3);
				return 0;
			}
			else
			{
				func_11(uParam0->f_2.f_2);
				func_15(iVar0, Global_1899848->f_15.f_10);
			}
			break;
		case 3:
			if (!func_4(uParam0->f_2.f_8))
			{
				func_8(uParam0, 1);
			}
			break;
	}
	return 0;
}

bool func_4(int iParam0)
{
	int iVar0;

	iVar0 = func_16(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_5()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_17(iVar0);
		func_18(&((Global_1899848->f_32[iVar0 /*21*/])->f_3), 0, 1);
		func_18(&((Global_1899848->f_32[iVar0 /*21*/])->f_4), 0, 0);
		iVar0++;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848->f_201.f_14))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1899848->f_201.f_14);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1899848->f_201.f_14);
		VOLUME::DELETE_VOLUME(Global_1899848->f_201.f_14);
	}
	func_19();
	func_18(&(Global_1899848->f_201.f_12), 0, 1);
	func_18(&(Global_1899848->f_15.f_10), 0, 1);
	func_20(0);
	if (Global_1899848->f_217 == 0)
	{
		func_21(1, 1);
	}
	return 1;
}

void func_6()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848->f_4);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848->f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848->f_6);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848->f_7);
}

void func_7()
{
	Global_1899848 = 0;
	Global_1899848->f_1 = 0;
	Global_1899848->f_2 = 0;
	Global_1899848->f_217 = 0;
	Global_1899848->f_218 = 0;
	Global_1899848->f_220 = 0;
	Global_1899848->f_221 = 0;
	Global_1899848->f_222 = 0;
	Global_1899848->f_223 = 0;
	Global_1899848->f_224 = 0;
	Global_1899848->f_14 = 0;
	func_22();
}

void func_8(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

int func_9(var uParam0)
{
	float fVar0;

	if (func_23() != -1)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 1;
	}
	if (func_4(uParam0->f_2.f_8))
	{
		return 1;
	}
	if (!func_24(uParam0->f_1))
	{
		return 1;
	}
	if (!func_25(uParam0->f_2.f_2))
	{
		return 1;
	}
	if (Global_1899528->f_215 == 1)
	{
		return 1;
	}
	if (func_26(uParam0->f_2.f_7, 4194304))
	{
		return 1;
	}
	if (Global_1935630->f_12 == 0)
	{
		fVar0 = func_27(uParam0->f_1);
		if (BUILTIN::VDIST2(Global_36, uParam0->f_2.f_3) > (fVar0 * fVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_11(int iParam0)
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	if (!func_28(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
}

void func_12()
{
	if (&Global_1899848 == 1)
	{
		return;
	}
	func_29();
	Global_1899848->f_2 = 4;
	if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
	{
		Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	}
	if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
	{
		Global_1899848->f_201 = { -1604.72f, -1422.11f, 80.76f };
		Global_1899848->f_201.f_3 = { 0f, 0f, 210f };
		Global_1899848->f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848->f_15.f_5 = 330f;
		Global_1899848->f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848->f_15.f_9 = 0f;
		Global_1899848->f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848->f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
	{
		Global_1899848->f_201 = { -1586.484f, -1411.629f, 80.2817f };
		Global_1899848->f_201.f_3 = { 0f, 0f, 180f };
		Global_1899848->f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848->f_15.f_5 = 330f;
		Global_1899848->f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848->f_15.f_9 = 0f;
		Global_1899848->f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848->f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else
	{
		Global_1899848->f_201 = { -1603.35f, -1411.84f, 80.95f };
		Global_1899848->f_201.f_3 = { 0f, 0f, 230f };
		Global_1899848->f_15.f_2 = { -1603.35f, -1409f, 80.92f };
		Global_1899848->f_15.f_5 = 60f;
		Global_1899848->f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848->f_15.f_9 = 0f;
		Global_1899848->f_15.f_11 = { -1604.202f, -1408.503f, 82.495f };
		Global_1899848->f_15.f_14 = { 166.1f, 2.5f, 60f };
	}
	if (Global_1899848->f_3 == 0)
	{
		Global_1899848->f_9 = 3;
		*(Global_1899848->f_32[0 /*21*/]) = { -1605.069f, -1418.533f, 80.871f };
		*(Global_1899848->f_32[1 /*21*/]) = { -1603.826f, -1421.34f, 80.7765f };
		*(Global_1899848->f_32[2 /*21*/]) = { -1608.24f, -1418.22f, 80.96f };
	}
	else if (Global_1899848->f_3 == 1)
	{
		Global_1899848->f_9 = 3;
		*(Global_1899848->f_32[0 /*21*/]) = { -1603.01f, -1420.13f, 80.84f };
		*(Global_1899848->f_32[1 /*21*/]) = { -1606.332f, -1421.34f, 80.8483f };
		*(Global_1899848->f_32[2 /*21*/]) = { -1608.302f, -1417.608f, 80.9513f };
	}
	else if (Global_1899848->f_3 == 2)
	{
		Global_1899848->f_9 = 6;
		*(Global_1899848->f_32[0 /*21*/]) = { -1581.343f, -1408.958f, 80.2649f };
		*(Global_1899848->f_32[1 /*21*/]) = { -1585.939f, -1416.165f, 80.3239f };
		*(Global_1899848->f_32[2 /*21*/]) = { -1576.188f, -1418.922f, 80.6635f };
		*(Global_1899848->f_32[3 /*21*/]) = { -1565.435f, -1422.183f, 81.0723f };
		*(Global_1899848->f_32[4 /*21*/]) = { -1588.059f, -1429.491f, 80.3306f };
		*(Global_1899848->f_32[5 /*21*/]) = { -1596.71f, -1426.369f, 80.4849f };
	}
	else if (Global_1899848->f_3 == 3)
	{
		Global_1899848->f_9 = 5;
		*(Global_1899848->f_32[0 /*21*/]) = { -1588.511f, -1411.575f, 80.3268f };
		*(Global_1899848->f_32[1 /*21*/]) = { -1581.747f, -1409.224f, 80.2775f };
		*(Global_1899848->f_32[2 /*21*/]) = { -1572.328f, -1417.021f, 80.8312f };
		*(Global_1899848->f_32[3 /*21*/]) = { -1567.363f, -1423.642f, 81.0785f };
		*(Global_1899848->f_32[4 /*21*/]) = { -1574.739f, -1428.451f, 80.7116f };
	}
	else if (Global_1899848->f_3 == 4)
	{
		Global_1899848->f_9 = 4;
		*(Global_1899848->f_32[0 /*21*/]) = { -1597.65f, -1412.11f, 80.95f };
		*(Global_1899848->f_32[1 /*21*/]) = { -1602.31f, -1407.28f, 80.94f };
		*(Global_1899848->f_32[2 /*21*/]) = { -1599.93f, -1411.69f, 80.95f };
		*(Global_1899848->f_32[3 /*21*/]) = { -1602.31f, -1414.33f, 80.95f };
	}
	else
	{
		Global_1899848->f_9 = 4;
		*(Global_1899848->f_32[0 /*21*/]) = { -1600.13f, -1411.14f, 80.95f };
		*(Global_1899848->f_32[1 /*21*/]) = { -1598.63f, -1414.08f, 80.95f };
		*(Global_1899848->f_32[2 /*21*/]) = { -1602.22f, -1414.03f, 80.95f };
		*(Global_1899848->f_32[3 /*21*/]) = { -1600.07f, -1417.74f, 80.93f };
	}
	Global_1899848 = 1;
	Global_1899848->f_1 = 0;
}

int func_13()
{
	int iVar0;

	iVar0 = 1703557170;
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) > 0)
	{
		return 1;
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar0);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar0))
	{
		BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH(iVar0, 256);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar0);
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (&Global_1899848 == 0)
	{
		return 0;
	}
	if (!func_30())
	{
		return 0;
	}
	vVar0 = { Global_1899848->f_201 };
	vVar3 = { Global_1899848->f_201.f_3 };
	if (iParam1 == 1)
	{
		vVar0 = { Global_1899848->f_201.f_6 };
		vVar3 = { Global_1899848->f_201.f_9 };
	}
	if (!func_31(&(Global_1899848->f_201.f_12), Global_1899848->f_6, vVar0, vVar3, 1, 1, 1))
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (((!func_32() || (iParam2 == 0 && !func_33())) || (iParam2 == 0 && !func_34())) || (iParam2 == 1 && !func_31(&(Global_1899848->f_15.f_10), Global_1899848->f_7, Global_1899848->f_15.f_11, Global_1899848->f_15.f_14, 0, 0, 1)))
		{
			return 0;
		}
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < Global_1899848->f_9)
	{
		func_35(&((Global_1899848->f_32[iVar6 /*21*/])->f_3));
		iVar6++;
	}
	func_35(&(Global_1899848->f_201.f_12));
	func_36(&(Global_1899848->f_15));
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1899848->f_201.f_14))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1899848->f_201.f_12))
		{
			Global_1899848->f_201.f_14 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_1899848->f_201, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			PED::_0x7C00CFC48A782DC0(Global_1899848->f_201.f_14, Global_1899848->f_201.f_12, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1899848->f_201.f_14, 2016, 0, 0, -1, -1, 2);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1899848->f_201.f_14, 10208, 0, 0, -1, -1, 0);
		}
	}
	return 1;
}

void func_15(int iParam0, var uParam1)
{
	(Global_1392915->f_121[iParam0 /*20*/])->f_13 = uParam1;
}

int func_16(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_38(iParam0);
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1899848->f_32[iParam0 /*21*/])->f_9))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION((Global_1899848->f_32[iParam0 /*21*/])->f_9);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION((Global_1899848->f_32[iParam0 /*21*/])->f_9);
		VOLUME::DELETE_VOLUME((Global_1899848->f_32[iParam0 /*21*/])->f_9);
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1899848->f_32[iParam0 /*21*/])->f_10))
	{
		VOLUME::DELETE_VOLUME((Global_1899848->f_32[iParam0 /*21*/])->f_10);
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1899848->f_32[iParam0 /*21*/])->f_11))
	{
		VOLUME::DELETE_VOLUME((Global_1899848->f_32[iParam0 /*21*/])->f_11);
	}
}

void func_18(int* iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		func_35(iParam0);
		if (iParam2 == 1 && ENTITY::_0x083D497D57B7400F(*iParam0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
		}
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
			PHYSICS::ACTIVATE_PHYSICS(*iParam0);
		}
		if (iParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_19()
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848->f_201.f_15))
	{
		VOLUME::DELETE_VOLUME(Global_1899848->f_201.f_15);
	}
}

void func_20(int iParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848->f_15.f_1))
	{
		if (iParam0 == 1)
		{
			if (TASK::_0x8569C38D2FB80650(Global_1899848->f_15.f_1, 8))
			{
				TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848->f_15.f_1, 8, 0);
			}
		}
		else if (!TASK::_0x8569C38D2FB80650(Global_1899848->f_15.f_1, 8))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848->f_15.f_1, 8, 1);
		}
	}
}

void func_21(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_39();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1899848->f_15))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Global_1899848->f_15))
		{
			ENTITY::DETACH_ENTITY(Global_1899848->f_15, true, true);
			PHYSICS::ACTIVATE_PHYSICS(Global_1899848->f_15);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(Global_1899848->f_15));
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (iParam0 == 1)
		{
			if (!func_40(4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			}
		}
		PED::_0x58F7DB5BD8FA2288(Global_35);
	}
	Global_1899848->f_15 = 0;
}

void func_22()
{
	int iVar0;

	Global_1899848->f_10 = 0;
	Global_1899848->f_11 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(Global_1899848->f_32[iVar0 /*21*/])->f_5 = 0;
		iVar0++;
	}
}

int func_23()
{
	return Global_1572887->f_12;
}

int func_24(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_41(Global_1898330[iVar0]) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;

	iVar0 = func_10(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_42(((*Global_1392915)[iVar0 /*12*/])->f_2))
	{
		return 0;
	}
	if (func_43(&(((*Global_1392915)[iVar0 /*12*/])->f_3), 60))
	{
		switch (func_44())
		{
			case 1:
				if (!func_43(&(((*Global_1392915)[iVar0 /*12*/])->f_3), 4))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_43(&(((*Global_1392915)[iVar0 /*12*/])->f_3), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_43(&(((*Global_1392915)[iVar0 /*12*/])->f_3), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_43(&(((*Global_1392915)[iVar0 /*12*/])->f_3), 32))
				{
					return 0;
				}
				break;
		}
	}
	return 1;
}

bool func_26(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_28(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(Global_1899848->f_32[iVar0 /*21*/])->f_12 = { 0f, 0f, 0f };
		(Global_1899848->f_32[iVar0 /*21*/])->f_15 = { 0f, 0f, 0f };
		(Global_1899848->f_32[iVar0 /*21*/])->f_18 = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_30()
{
	STREAMING::REQUEST_MODEL(Global_1899848->f_4, false);
	STREAMING::REQUEST_MODEL(Global_1899848->f_5, false);
	STREAMING::REQUEST_MODEL(Global_1899848->f_6, false);
	STREAMING::REQUEST_MODEL(Global_1899848->f_7, false);
	if (((!STREAMING::HAS_MODEL_LOADED(Global_1899848->f_4) || !STREAMING::HAS_MODEL_LOADED(Global_1899848->f_5)) || !STREAMING::HAS_MODEL_LOADED(Global_1899848->f_6)) || !STREAMING::HAS_MODEL_LOADED(Global_1899848->f_7))
	{
		return 0;
	}
	return 1;
}

bool func_31(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10)
{
	if (func_45(vParam2))
	{
		return false;
	}
	if (iParam9 == 1 && !ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = func_46(vParam2, iParam1, 0.25f, 1);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::SET_ENTITY_ROTATION(*uParam0, vParam5, 2, true);
			if (iParam8 == 1)
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(*uParam0, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (iParam10 == 1)
			{
				func_47(vParam2, 0.25f, 2);
			}
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, vParam5, 2, true);
			if (iParam8 == 1)
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(*uParam0, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 31, false);
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}

int func_32()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899848->f_9)
	{
		if (!func_48(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_33()
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848->f_15.f_1))
	{
		Global_1899848->f_15.f_1 = TASK::CREATE_SCENARIO_POINT(-1478204157, Global_1899848->f_15.f_2, Global_1899848->f_15.f_5, 0f, 0f, 1);
		if (Global_1899848->f_2 == 1)
		{
			func_20(0);
		}
		else
		{
			func_20(1);
		}
	}
	return TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848->f_15.f_1);
}

bool func_34()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1899848->f_15))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848->f_15.f_1))
		{
			Global_1899848->f_15 = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1899848->f_15.f_1, "p_pitchfork01x_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(Global_1899848->f_15))
			{
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(Global_1899848->f_15);
}

void func_35(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, true);
	}
}

void func_36(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, true);
	}
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_49(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_39()
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848->f_15.f_1) && ENTITY::DOES_ENTITY_EXIST(Global_1899848->f_15))
	{
		if (TASK::_0x6EF4E31B4D5D2DA0(Global_1899848->f_15.f_1, "p_pitchfork01x_PH_R_HAND"))
		{
		}
	}
}

int func_40(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (func_50(iParam0) != 4)
	{
		return -1;
	}
	return func_51(iParam0);
}

int func_42(int iParam0)
{
	if (!func_52(iParam0))
	{
		return 0;
	}
	return func_26(iParam0, 33554432);
}

int func_43(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	return &Global_1899516;
}

int func_45(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_46(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = (fParam4 * 2f);
	func_53(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return 0;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar1 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar5));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == iParam3)
			{
				ITEMSET::DESTROY_ITEMSET(iVar5);
				func_54(iVar0);
				if (bParam5)
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					}
				}
				return iVar1;
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar5);
	func_54(iVar0);
	return 0;
}

void func_47(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_48(int iParam0)
{
	if (!func_31(&((Global_1899848->f_32[iParam0 /*21*/])->f_3), Global_1899848->f_4, *(Global_1899848->f_32[iParam0 /*21*/]), 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 1, 1))
	{
		return 0;
	}
	if (!func_31(&((Global_1899848->f_32[iParam0 /*21*/])->f_4), Global_1899848->f_5, *(Global_1899848->f_32[iParam0 /*21*/]), 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 1, 0))
	{
		return 0;
	}
	if ((Global_1899848->f_32[iParam0 /*21*/])->f_5 == 0)
	{
		(Global_1899848->f_32[iParam0 /*21*/])->f_5 = 1;
		if (!VOLUME::DOES_VOLUME_EXIST((Global_1899848->f_32[iParam0 /*21*/])->f_9))
		{
			(Global_1899848->f_32[iParam0 /*21*/])->f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(*(Global_1899848->f_32[iParam0 /*21*/]), 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION((Global_1899848->f_32[iParam0 /*21*/])->f_9, 2016, 0, 0, -1, -1, 2);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION((Global_1899848->f_32[iParam0 /*21*/])->f_9, 10208, 0, 0, -1, -1, 0);
		}
	}
	return 1;
}

int func_49(int iParam0)
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

int func_50(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_56(func_55(iParam0));
}

int func_51(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_57(func_55(iParam0));
}

bool func_52(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_53(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, func_58());
	}
}

void func_54(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_55(int iParam0)
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

int func_56(var uParam0)
{
	return uParam0 & 31;
}

int func_57(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

char* func_58()
{
	return "unnamed";
}

