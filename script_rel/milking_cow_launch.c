#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	float fLocal_7 = 0f;
	vector3 vLocal_8 = { 0f, 0f, 0f };
	vector3 vLocal_11 = { 0f, 0f, 0f };
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<18> Local_23 = { 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	vLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.7721f;
	vLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.2319f;
	vLocal_8 = { 0.7006f, 0.094f, 1.076f };
	vLocal_11 = { -49.5998f, 0f, -107.2854f };
	vLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	vLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };
	iLocal_20 = joaat("a_c_cow");
	iLocal_21 = joaat("p_stool02x");
	iLocal_22 = -861474402;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2(&Local_23, &uScriptParam_0);
	while (true)
	{
		if (func_3(&Local_23))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;

	iVar0 = func_4(Local_23.f_1.f_2);
	func_5(iVar0, 0);
	func_6(&(Local_23.f_15), 1, 0, 1);
	func_7(647863662);
	func_8(&Local_23);
	func_9(Local_23.f_17);
	func_10();
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, var uParam1)
{
	int iVar0;

	*uParam0 = 4;
	uParam0->f_1 = { *uParam1 };
	func_11(uParam0, 0);
	func_12(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, &(uParam0->f_21), &(uParam0->f_24));
	if (func_13(&(uParam0->f_15), uParam0->f_21))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, true, true);
		PED::SET_PED_CAN_LEG_IK(uParam0->f_15, false);
		PED::SET_PED_LEG_IK_MODE(uParam0->f_15, 0);
	}
	iVar0 = func_4(uParam1->f_2);
	func_5(iVar0, uParam0->f_15);
}

int func_3(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;

	iVar0 = func_4(uParam0->f_1.f_2);
	if (func_14(uParam0))
	{
		return 1;
	}
	switch (uParam0->f_11)
	{
		case 0:
			func_15();
			func_11(uParam0, 1);
			break;
		case 1:
			if (func_16())
			{
				func_11(uParam0, 2);
			}
			break;
		case 2:
			if (!func_17(&(uParam0->f_15), uParam0->f_1.f_2 == 21))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_15, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_15, true, true);
			}
			vVar2 = { func_18(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6, 0) };
			uParam0->f_14 = func_19(vVar2);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_14, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_14, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
			{
				TASK::STOP_ANIM_PLAYBACK(uParam0->f_14, 0, false);
			}
			vVar2 = { func_20(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			uParam0->f_13 = func_21(vVar2);
			func_22(647863662);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
			{
				func_11(uParam0, 3);
				func_23(uParam0->f_1.f_2);
				func_9(uParam0->f_16);
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_16))
				{
					uParam0->f_16 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(-1612834106, uParam0->f_1.f_3, 0f, 0f, 0f, 1.2f, 2.4f, 2f);
					PED::_0x7C00CFC48A782DC0(uParam0->f_16, uParam0->f_15, 0f, 0.2f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			vVar2 = { func_20(uParam0->f_1.f_3, 0f, 0f, uParam0->f_1.f_6) };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_17))
			{
				if (uParam0->f_1.f_2 == 21)
				{
					uParam0->f_17 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(-1612834106, vVar2 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_24.f_2, 7.5f, 3.5f, 4f);
				}
				else
				{
					uParam0->f_17 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(-1612834106, vVar2 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_24.f_2, 3.5f, 3.5f, 4f);
				}
				VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_17, 0);
				VOLUME::_0xBE551C2CC421185D(uParam0->f_17, 1);
			}
			uParam0->f_19 = VOLUME::_0x10157BC3247FF3BA(vVar2, 0f, 0f, 0f, 4f, 4f, 4f, "MilkAvoidVol");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_19, 266209, 0, 0, -1, -1, 12);
			func_24(&(uParam0->f_18), vVar2, 0f, 0f, 0f, 2f, 2f, 2f, "MilkVignetteBlockVol");
			uParam0->f_20 = func_25(uParam0->f_18, "RestrictVignette", 1, 0, 2048, 0, -1082130432);
			func_5(iVar0, uParam0->f_15);
			break;
		case 3:
			if (Global_1899528->f_215)
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) || PED::IS_PED_INJURED(uParam0->f_15))
			{
				func_26(uParam0->f_1.f_2);
				func_5(iVar0, 0);
				func_11(uParam0, 5);
			}
			else
			{
				func_5(iVar0, uParam0->f_15);
				fVar1 = func_27(uParam0->f_15, uParam0->f_21, 0);
				if (fVar1 > 1.25f)
				{
					func_26(uParam0->f_1.f_2);
				}
				else
				{
					func_23(uParam0->f_1.f_2);
				}
			}
			if (func_28(uParam0->f_1.f_8))
			{
				func_8(uParam0);
				func_11(uParam0, 4);
				return 0;
			}
			break;
		case 4:
			if (!func_28(uParam0->f_1.f_8))
			{
				func_11(uParam0, 2);
			}
			break;
	}
	return 0;
}

int func_4(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_5(int iParam0, int iParam1)
{
	(Global_1392915->f_121[iParam0 /*20*/])->f_13 = iParam1;
}

void func_6(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_7(int iParam0)
{
	if (!func_29(iParam0))
	{
		func_30(iParam0, 0, 0);
	}
	func_31(iParam0, 0, 1f, 0, 1, 0, 0, 0);
}

void func_8(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_18))
	{
		func_32(uParam0->f_18);
		func_9(uParam0->f_18);
		uParam0->f_20 = 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_19))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_19);
	}
	func_9(uParam0->f_16);
	func_9(uParam0->f_19);
	func_9(uParam0->f_17);
	func_9(uParam0->f_18);
}

void func_9(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_10()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_20);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_22);
	STREAMING::REMOVE_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_0x57A197AD83F66BBF("script_mar5_milkcow_cow");
	STREAMING::REMOVE_ANIM_DICT("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	PED::_UNRESERVE_AMBIENT_PEDS(1);
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

void func_12(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7)
{
	vector3 vVar0;

	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_0) };
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	*uParam6 = { vVar0 };
	*uParam7 = { vParam3 };
	uParam7->f_2 = (uParam7->f_2 + fLocal_3);
}

int func_13(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_33(&iVar1, vParam1, 0f, 0f, 0f, 3f, 3f, 3f);
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	iVar2 = ENTITY::_0x886171A12F400B89(iVar1, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_INJURED(iVar4)) && ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("a_c_cow"))
		{
			*uParam0 = iVar4;
			func_9(iVar1);
			ITEMSET::_CLEAR_ITEMSET(iVar0);
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return 1;
		}
		iVar3++;
	}
	func_9(iVar1);
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return 0;
}

int func_14(var uParam0)
{
	float fVar0;

	fVar0 = func_34(*uParam0);
	if (func_35() != -1)
	{
		return 1;
	}
	if (!func_36(*uParam0))
	{
		return 1;
	}
	if (Global_1899528->f_215)
	{
		return 1;
	}
	if (func_37(uParam0->f_1.f_7, 4194304))
	{
		return 1;
	}
	if (func_38(&Global_1935630, 8388608))
	{
		func_39(&(Local_23.f_15));
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_1.f_3) > (fVar0 * fVar0))
		{
			func_39(&(Local_23.f_15));
			return 1;
		}
	}
	return 0;
}

void func_15()
{
	STREAMING::REQUEST_MODEL(iLocal_20, false);
	STREAMING::REQUEST_MODEL(iLocal_21, false);
	STREAMING::REQUEST_MODEL(iLocal_22, false);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_0x2B6529C54D29037A("script_mar5_milkcow_cow");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@COW@NORMAL@IDLE");
	PED::_RESERVE_AMBIENT_PEDS(1);
}

int func_16()
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_20))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_21))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_22))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@COW@NORMAL@IDLE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
	{
		return 0;
	}
	if (!STREAMING::_0x2C04D89A0FB4E244("script_mar5_milkcow_cow"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar6;
	int iVar7;
	struct<9> Var8;
	struct<31> Var18;

	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	if (bParam1)
	{
		func_40(21, &Var8, 1);
	}
	else
	{
		func_40(22, &Var8, 1);
	}
	func_12(Var8.f_5, 0f, 0f, Var8.f_8, &vVar0, &uVar3);
	if (!func_13(uParam0, vVar0))
	{
		*uParam0 = func_41(joaat("a_c_cow"), vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return 0;
		}
		PED::_SET_PED_SCALE(*uParam0, 1f);
	}
	PED::SET_PED_CAN_LEG_IK(*uParam0, false);
	PED::SET_PED_LEG_IK_MODE(*uParam0, 0);
	EVENT::SET_DECISION_MAKER(*uParam0, -1143637011);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
	{
		Var18.f_6 = -1082130432;
		Var18.f_9 = -1082130432;
		Var18.f_30 = "Milking";
		Var18.f_1 = -455129387; /* GXTEntry: "_" */
		Var18 = 325037696;
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(*uParam0, "script_mar5_milkcow_cow", &Var18, Var8.f_5, 0f, 0f, Var8.f_8, 2, 0.125f, 0, 0, 1154, 0);
	}
	vVar0 = { func_18(Var8.f_5, 0f, 0f, Var8.f_8, 0) };
	iVar7 = func_19(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (ENTITY::_0x0B7CB1300CBFE19C(iVar7, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(iVar7, 0, false);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	}
	vVar0 = { func_20(Var8.f_5, 0f, 0f, Var8.f_8) };
	iVar6 = func_21(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	}
	return 1;
}

Vector3 func_18(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	vector3 vVar0;

	if (bParam6)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_17 + Vector(0f, -0.2f, 0f)) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_17) };
	}
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	return vVar0;
}

int func_19(vector3 vParam0)
{
	int iVar0;

	if (func_42(61))
	{
		iVar0 = func_43(vParam0, -861474402, 0.2f, 1);
	}
	else
	{
		iVar0 = func_43(vParam0, -861474402, 4f, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = OBJECT::CREATE_OBJECT(-861474402, vParam0, true, true, false, false, false);
	}
	ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	return iVar0;
}

Vector3 func_20(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, vParam3.z, vLocal_14) };
	vVar0 = { vVar0 + Vector(0.01f, 0f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	return vVar0;
}

int func_21(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_43(vParam0, joaat("p_stool02x"), 4f, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = OBJECT::CREATE_OBJECT(joaat("p_stool02x"), vParam0, true, true, false, false, false);
	}
	ENTITY::SET_ENTITY_COORDS(iVar0, vParam0, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	return iVar0;
}

void func_22(int iParam0)
{
	if (!func_29(iParam0))
	{
		func_30(iParam0, 0, 0);
	}
	func_31(iParam0, 0, 1f, 0, 0, 0, 0, 0);
}

void func_23(int iParam0)
{
	int iVar0;

	if (func_35() != -1)
	{
		return;
	}
	if (!func_44(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
}

void func_24(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, sParam10);
}

int func_25(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_45(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

void func_26(int iParam0)
{
	int iVar0;

	if (func_35() != -1)
	{
		return;
	}
	if (!func_44(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 1)
	{
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 0;
}

float func_27(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_28(int iParam0)
{
	int iVar0;

	iVar0 = func_46(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_29(int iParam0)
{
	if (func_47(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)
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

void func_31(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_30(iParam0, 0, 0);
	if (func_29(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_48(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_49(iParam0, 1);
			}
			else
			{
				func_50(iParam0, 1);
			}
		}
		else
		{
			func_51(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_52())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_32(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	func_53(vVar0, 0);
}

void func_33(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_54());
	}
}

float func_34(int iParam0)
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

int func_35()
{
	return Global_1572887->f_12;
}

int func_36(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_55(Global_1898330[iVar0]) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_37(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_39(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

int func_40(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_41(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_56(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_42(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_28(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_43(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = (fParam4 * 2f);
	func_57(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
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
				func_9(iVar0);
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
	func_9(iVar0);
	return 0;
}

bool func_44(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

int func_45(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_58(vParam0))
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
		if (func_59(vParam0))
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
	func_60(iVar0, bParam8);
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_62(iParam0);
}

bool func_47(int iParam0)
{
	return iParam0 != 0;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_29(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_49(int iParam0, int iParam1)
{
	if (func_29(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_50(int iParam0, int iParam1)
{
	if (func_29(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_51(int iParam0, int iParam1)
{
	if (func_29(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_52()
{
	return 1;
}

void func_53(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_58(vParam0))
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
			if (func_63(vVar2, vParam0, 2f, 1))
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

char* func_54()
{
	return "unnamed";
}

int func_55(int iParam0)
{
	if (func_64(iParam0) != 4)
	{
		return -1;
	}
	return func_65(iParam0);
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_66(iParam1))
		{
			func_67(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_68(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_69(iParam0, 0);
			bVar0 = true;
		}
		func_70(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_57(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, func_54());
	}
}

int func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_59(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_60(int iParam0, bool bParam1)
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

bool func_61(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_62(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_71(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_63(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_64(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return func_73(func_72(iParam0));
}

int func_65(int iParam0)
{
	if (!func_61(iParam0))
	{
		return -1;
	}
	return func_74(func_72(iParam0));
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_67(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_75(iParam0, iParam1))
		{
			if (func_76(iParam0, iParam1))
			{
				if (func_77(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_78(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_68(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_69(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_70(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_71(int iParam0)
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

int func_72(int iParam0)
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

int func_73(var uParam0)
{
	return uParam0 & 31;
}

int func_74(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_75(int iParam0, int iParam1)
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

int func_76(int iParam0, int iParam1)
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

bool func_77(int iParam0, int iParam1)
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
	if (!func_75(iParam0, iVar0))
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

void func_78(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

