#region Local Var
	struct<6> Local_0 = { 0, 0, 1, 0, 0, 0 } ;
	int iLocal_6 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&vVar0);
	}
	while (func_2(&vVar0))
	{
		switch (iLocal_6)
		{
			case 0:
				if (func_3(&vVar0))
				{
					iLocal_6 = 1;
				}
				vVar0.x = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
			case 1:
				func_4(&vVar0);
				if (func_6(func_5()))
				{
					iLocal_6 = 2;
				}
				if (vVar0.z)
				{
					iLocal_6 = 2;
				}
				break;
			case 2:
				func_1(&vVar0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&vVar0);
}

void func_1(var uParam0)
{
	if (uParam0->f_1)
	{
		return;
	}
	func_7(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0)
{
	if (uParam0->f_1)
	{
		return 1;
	}
	if (func_8() != func_9())
	{
		return 0;
	}
	if (func_10(&Global_1935630, 2097152))
	{
		return 0;
	}
	return 1;
}

int func_3(var uParam0)
{
	return 1;
}

void func_4(int iParam0)
{
	if (Local_0 == 4)
	{
		if ((func_11(4) || PED::_0x5203038FF8BAE577(Local_0.f_1, 25, 5000)) || PED::_0x5203038FF8BAE577(Local_0.f_1, 55, 5000))
		{
			if (func_13(func_12(), 262.3945f, 2f))
			{
				func_14(5);
			}
			func_15(4);
			return;
		}
	}
	if (Local_0 >= 3 && Local_0.f_5 <= 200)
	{
		Local_0.f_5++;
		return;
	}
	Local_0.f_5 = 0;
	switch (Local_0)
	{
		case 0:
			func_16();
			func_14(1);
			break;
		case 1:
			if (func_17())
			{
				func_14(2);
			}
			break;
		case 2:
			if (func_18() && func_19())
			{
				if (func_20(func_12(), 0f, 0, 1))
				{
					func_14(3);
				}
			}
			break;
		case 3:
			if (!func_21())
			{
				return;
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_0.f_2[0]), true, 0))
			{
				return;
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_0.f_1, true);
			func_14(4);
			break;
		case 4:
			if (!func_11(1) && func_13(1457.186f, 314.9523f, 92.7676f, 85.4782f, 1065353216))
			{
				func_22();
				func_15(1);
			}
			if (func_23())
			{
				func_24();
				func_14(5);
			}
			break;
		case 5:
			if (func_20(func_12(), 262.3945f, 1, 0))
			{
				func_14(6);
			}
			break;
		case 6:
			if (!func_11(2) && func_25())
			{
				func_15(2);
			}
			if (func_21())
			{
				func_14(0);
			}
			break;
	}
}

int func_5()
{
	return 2;
}

bool func_6(int iParam0)
{
	return func_26(iParam0, 2);
}

void func_7(var uParam0)
{
}

int func_8()
{
	return Global_1894899->f_2;
}

int func_9()
{
	return 69;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_11(int iParam0)
{
	return func_27(Local_0.f_4, iParam0);
}

Vector3 func_12()
{
	return 1460.54f, 315.1411f, 92.7676f;
}

int func_13(vector3 vParam0, float fParam3, float fParam4)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_0.f_1, 1))
	{
		PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Local_0.f_1);
	}
	if (!func_28(Local_0.f_1, vParam0, fParam3, 2f, 20f, 1))
	{
		if (!func_29(Local_0.f_1, 2106541073))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_0.f_1, vParam0, fParam4, -1, fParam3, 1056964608, 0);
		}
		return 0;
	}
	return 1;
}

void func_14(int iParam0)
{
	Local_0 = iParam0;
}

void func_15(int iParam0)
{
	if (!func_27(Local_0.f_4, iParam0))
	{
		func_30(&(Local_0.f_4), iParam0);
	}
}

void func_16()
{
	func_31(1);
	func_31(2);
}

int func_17()
{
	STREAMING::REQUEST_MODEL(func_32(), false);
	PED::_RESERVE_AMBIENT_PEDS(1);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1 && STREAMING::HAS_MODEL_LOADED(func_32()))
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(&(Local_0.f_2[iVar0])))
		{
			iVar1 = iVar0;
			Var2 = { func_33(iVar1) };
			Local_0.f_2[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var2.f_10, Var2, Var2.f_3, Var2.f_6, Var2.f_9);
		}
		iVar0++;
	}
	return 1;
}

int func_19()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_0.f_1))
	{
		Local_0.f_1 = func_35(func_32(), func_12(), func_34(), 1, 1, 1, 0);
		return 0;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_0.f_1, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_0.f_1, false);
	return 1;
}

int func_20(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (!func_29(Local_0.f_1, -1098463898))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(Local_0.f_1, 1774730608, vParam0, fParam3, 0, iParam4, iParam5, 0, -1082130432, 0);
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_0.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;

	iVar0 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	if ((iVar0 != 0 && iVar0 != 3) && iVar0 != 5)
	{
		return 0;
	}
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if (!func_36(iVar1, 9, 12) && !func_36(iVar1, 21, 0))
	{
		return 0;
	}
	return 1;
}

void func_22()
{
	if (!func_29(Local_0.f_1, 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_0.f_1, Global_35, 0, 0, 51, 1);
	}
}

int func_23()
{
	if (func_11(1) && !func_21())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (func_29(Local_0.f_1, 150319005))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_0.f_1);
	}
}

int func_25()
{
	int iVar0;

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_32());
	if (ENTITY::DOES_ENTITY_EXIST(Local_0.f_1))
	{
		PED::DELETE_PED(&(Local_0.f_1));
	}
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_0.f_2[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(Local_0.f_2[iVar0]));
		}
		iVar0++;
	}
	PED::_UNRESERVE_AMBIENT_PEDS(1);
	return 1;
}

bool func_26(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	return (Global_40.f_9020[iParam0] && iParam1) != 0;
}

bool func_27(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_28(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_38(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_38(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
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

void func_30(var uParam0, var uParam1)
{
	func_39(uParam0, uParam1);
}

void func_31(int iParam0)
{
	if (func_27(Local_0.f_4, iParam0))
	{
		func_40(&(Local_0.f_4), iParam0);
	}
}

int func_32()
{
	return joaat("u_f_m_emrdaughter_01");
}

struct<11> func_33(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1443.915f, 319.475f, 88.464f };
			Var0.f_3 = { 0f, 0f, -0.207f };
			Var0.f_6 = { 20.418f, 27f, 4.659f };
			Var0.f_9 = "TS_ERD_SPAWN_TRIGGER";
			Var0.f_10 = -1612834106;
			break;
	}
	return Var0;
}

float func_34()
{
	return 90.68f;
}

int func_35(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

int func_36(int iParam0, int iParam1, int iParam2)
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

bool func_37(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

float func_38(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_39(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_40(var uParam0, var uParam1)
{
	func_41(uParam0, uParam1);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

