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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<18> Local_21 = { 0, 0, 0, 0, 0, 1073741824, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<21> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<30> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_2 = 255;
	Var0.f_4 = 6;
	Var0.f_29 = -1;
	if (!func_1(&Var0, &ScriptParam_0))
	{
		func_2(&Var0, "failed to launch the script.");
	}
	if (ScriptParam_0.f_20)
	{
		func_3();
	}
	if (func_4(&(Global_1268935->f_513.f_72)))
	{
		func_5(&(Global_1268935->f_513.f_72));
	}
	while (true)
	{
		func_6(&Var0, &ScriptParam_0);
		if (func_7(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "script should terminate.");
		}
		if (!func_8(Var0, 2048))
		{
			if (func_9(&Var0, &ScriptParam_0))
			{
				func_10(&Var0, "script should terminate due to async update.");
			}
			if (!func_11(&Var0))
			{
			}
			else
			{
				if (!func_8(Var0, 8))
				{
					if (func_12(&Var0))
					{
						func_13(&Var0, 8);
					}
				}
				if (func_8(Var0, 8))
				{
					if (func_14(&Var0))
					{
						if (Var0.f_29 != -1)
						{
							if (!func_15(Var0.f_29))
							{
								if (func_16())
								{
									func_17(Var0.f_29, 1);
								}
							}
						}
					}
				}
				if (func_18(&Var0))
				{
					func_10(&Var0, "update requested thread termination.");
				}
			}
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(Var0.f_28, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000)
		{
			if (func_14(&Var0))
			{
				Var0.f_28 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_8(Var0, 2))
				{
					func_19();
				}
				else
				{
					func_20();
				}
			}
		}
		if (func_21(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "event requested thread termination.");
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, "end of thread.");
}

int func_1(var uParam0, int* iParam1)
{
	int iVar0;

	iVar0 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return 0;
	}
	uParam0->f_3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	MISC::_COPY_MEMORY(&(uParam0->f_11), iParam1, 7);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		return 0;
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		func_13(uParam0, 1);
	}
	if (!func_22(uParam0, iParam1))
	{
		return 0;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
	return 1;
}

void func_2(var uParam0, char* sParam1)
{
	bool bVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}
	VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	func_23(uParam0);
	func_24(uParam0);
	if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	if (func_4(&(uParam0->f_25)))
	{
		func_5(&(uParam0->f_25));
	}
	if (func_4(&(Global_1268935->f_513.f_72)))
	{
		func_5(&(Global_1268935->f_513.f_72));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!VEHICLE::_IS_VEHICLE_FADING_OUT(uParam0->f_3))
		{
			bVar0 = func_8(*uParam0, 2);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				if (!func_25(uParam0->f_3, 2, !bVar0))
				{
				}
			}
			else
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(uParam0->f_3, 17, 1);
				if (bVar0)
				{
					func_26(uParam0->f_3, 0);
				}
				else
				{
					func_26(uParam0->f_3, 1);
					TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(uParam0->f_3, 0);
				}
			}
			if (!bVar0)
			{
				if (func_8(*uParam0, 4096))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == uParam0->f_3)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
				}
				else
				{
					if (func_8(*uParam0, 4096))
					{
						TASK::_TASK_VEHICLE_FLEE_ON_CLEANUP(uParam0->f_3, 0f, 0f, 0f, 8f, 1148979587);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
				}
				else
				{
					VEHICLE::_FADE_AND_DESTROY_VEHICLE(&(uParam0->f_3));
				}
			}
		}
	}
	if (func_14(uParam0))
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), 0);
	}
	else if (func_27())
	{
		func_28(11, uParam0->f_2, &(Global_1273882->f_154[&Global_1273882]));
		func_29(1649473200, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		func_30();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (func_31(8, 255))
	{
		return;
	}
	func_32(3);
}

bool func_4(var uParam0)
{
	return func_33(*uParam0, 1);
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_6(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	if (!func_14(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	if (PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar1) != iVar0)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(iVar1, iVar0);
	}
	iVar2 = VEHICLE::_GET_VEHICLE_OWNER(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (iVar3 != iVar4)
	{
		VEHICLE::SET_PED_OWNS_VEHICLE(iVar4, iVar0);
	}
}

int func_7(var uParam0, int iParam1)
{
	if (func_34(1, 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 1;
	}
	if (!func_14(uParam0))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_11)) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_11)))
		{
			func_13(uParam0, 2);
			return 1;
		}
	}
	if (func_35(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_9(var uParam0, int iParam1)
{
	func_36(uParam0);
	func_37(uParam0);
	if (func_38(uParam0, iParam1))
	{
		return 1;
	}
	if (func_39(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}
	if (!func_14(uParam0))
	{
		return;
	}
	func_13(uParam0, 2048);
	uParam0->f_28 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (func_8(*uParam0, 2))
	{
		func_19();
	}
	else
	{
		func_20();
	}
}

int func_11(var uParam0)
{
	if (!func_8(*uParam0, 16))
	{
		if (func_14(uParam0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			}
			else
			{
				PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_3);
				VEHICLE::SET_PED_OWNS_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3);
				func_13(uParam0, 16);
			}
		}
		else
		{
			func_13(uParam0, 16);
		}
	}
	if (!func_8(*uParam0, 32))
	{
		if (func_40(uParam0))
		{
			func_13(uParam0, 32);
		}
	}
	if (func_8(*uParam0, 16))
	{
		if (func_8(*uParam0, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_41(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_42(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_14(var uParam0)
{
	return func_8(*uParam0, 1);
}

bool func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17173.f_2563[iVar1]), iVar2);
}

int func_16()
{
	if (!func_43() && func_44(1))
	{
		return 1;
	}
	return 0;
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_45(iParam0, &iVar0, &iVar1);
	if (!func_46(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_47(iVar0, iVar1);
}

int func_18(var uParam0)
{
	if (func_48(uParam0))
	{
		return 1;
	}
	func_49(uParam0);
	func_50(uParam0);
	func_51(uParam0);
	func_52(uParam0);
	if (func_14(uParam0))
	{
		func_53(uParam0);
	}
	return 0;
}

void func_19()
{
	if (func_31(8, 255))
	{
		return;
	}
	func_54(3);
}

void func_20()
{
	if (func_31(8, 255))
	{
		return;
	}
	func_55(3);
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	int iVar8;
	int iVar9;

	iVar0 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	bVar1 = false;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		iVar8 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar9);
		switch (iVar8)
		{
			case -507840394:
				if (!SCRIPTS::GET_EVENT_DATA(1, iVar9, &Var2, 6))
				{
				}
				else if (Var2 != 47)
				{
				}
				else
				{
					bVar1 = func_56(uParam0, iParam1, &Var2);
					if (bVar1)
					{
						return 1;
					}
					bVar1 = func_57(uParam0, iParam1, &Var2);
					if (bVar1)
					{
						return 1;
					}
				}
		}
		iVar9++;
	}
	return 0;
}

int func_22(var uParam0, int* iParam1)
{
	uParam0->f_29 = 850;
	return 1;
}

void func_23(var uParam0)
{
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar0])))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_4[iVar0])))
			{
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 467, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 277, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 209, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_4[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_25(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1268935->f_11.f_358, iVar1))
		{
			(Global_1268935->f_11.f_360[iVar1 /*3*/])->f_1 = iParam0;
			(Global_1268935->f_11.f_360[iVar1 /*3*/])->f_2 = iParam1;
			Global_1268935->f_11.f_360[iVar1 /*3*/] = bParam2;
			MISC::SET_BIT(&(Global_1268935->f_11.f_358), iVar1);
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_58(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::_WARP_PED_OUT_OF_VEHICLE(iVar0);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_27()
{
	return Global_1131373->f_6289.f_132;
}

void func_28(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;

	if (func_59(iParam1))
	{
		return;
	}
	if (Global_1901929->f_672.f_41 < 1)
	{
		if (func_60(&(Global_1273882->f_154[&Global_1273882]), iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_17(765, 0);
			}
			return;
		}
	}
	if (!func_61(iParam0) && Global_1131373->f_6289.f_2 == iParam0)
	{
		if (Global_17173.f_2619.f_1 >= (Global_1273882->f_21 - func_62(iParam0)))
		{
			return;
		}
	}
	if (((iParam0 == 1 && Global_1131373->f_6289.f_1 != 1) && Global_1131373->f_6289.f_1 != 0) && Global_1131373->f_6289.f_9 == Global_1273882->f_21)
	{
		return;
	}
	if (iParam0 == 1 || iParam0 == 9)
	{
		iVar0 = iParam1;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar1, iVar0);
		Var2.f_6 = 255;
		Var2.f_4 = 4;
		Var2.f_6 = iParam1;
		Var2.f_7 = 3;
		func_63(&Var2, uVar1);
	}
	if (iParam1 != 255)
	{
		Global_1131373->f_6289.f_3 = func_64(iParam1, 1);
		Global_1131373->f_6289.f_4 = func_65(iParam1, 0, 1);
		Global_1131373->f_6289.f_5 = iParam1;
	}
	else
	{
		Global_1131373->f_6289.f_3 = 0f;
		Global_1131373->f_6289.f_4 = 0;
		Global_1131373->f_6289.f_5 = 255;
	}
	Global_1131373->f_6289.f_1 = iParam0;
	Global_1131373->f_6289.f_9 = Global_1273882->f_21;
}

void func_29(bool bParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_66(bParam0, 1, 59806960);
	if (iVar0 <= 0)
	{
		return;
	}
	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, 0))
	{
		return;
	}
	if (!func_67(bParam0, 1, 59806960))
	{
		return;
	}
	iVar1 = func_68(bParam0, sParam2, 1, 1, 0, 59806960);
	if (iVar1 == -1)
	{
		return;
	}
	func_69(iParam1, iVar0, 0);
}

void func_30()
{
	Global_1131373->f_6289.f_132 = 0;
}

bool func_31(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1268274)[iParam1 /*20*/])->f_2 && iParam0) != 0;
}

void func_32(int iParam0)
{
	func_70(6, iParam0);
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_34(bool bParam0, bool bParam1)
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

int func_35(var uParam0, int iParam1)
{
	return 0;
}

void func_36(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_71(255) == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_72(uParam0->f_2))
		{
			if (!func_8(*uParam0, 256))
			{
				NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 1, 256);
				func_13(uParam0, 256);
			}
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_8(*uParam0, 256))
		{
			NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 0, 256);
			func_73(uParam0, 256);
		}
	}
	else if (func_8(*uParam0, 256))
	{
		func_73(uParam0, 256);
	}
}

void func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		func_73(uParam0, 512);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_73(uParam0, 512);
		return;
	}
	if (func_14(uParam0))
	{
		func_73(uParam0, 512);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_73(uParam0, 512);
		return;
	}
	iVar1 = _NAMESPACE26::NETWORK_GET_GANG_ID(uParam0->f_2);
	iVar2 = _NAMESPACE26::NETWORK_GET_GANG_ID(iVar0);
	if (iVar1 == iVar2)
	{
		if (!func_8(*uParam0, 512))
		{
			func_13(uParam0, 512);
			func_73(uParam0, 1024);
		}
	}
	else
	{
		if (func_8(*uParam0, 512))
		{
			func_73(uParam0, 512);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
				func_13(uParam0, 1024);
			}
		}
		if (func_8(*uParam0, 1024))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, false))
			{
				if (!func_74(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 64, 0);
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
			}
			else
			{
				func_73(uParam0, 1024);
			}
		}
	}
}

int func_38(var uParam0, int iParam1)
{
	return 0;
}

int func_39(var uParam0, int iParam1)
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_75(uParam0))
		{
			return 0;
		}
		if (func_76(uParam0->f_3))
		{
			return 0;
		}
		func_77(&(uParam0->f_25), 0);
		func_13(uParam0, 128);
		func_78(uParam0, iParam1);
		func_50(uParam0);
		func_79(uParam0);
	}
	if (!func_14(uParam0))
	{
		return 0;
	}
	if (!func_80(&(uParam0->f_25), 5f))
	{
		return 0;
	}
	return 1;
}

int func_40(var uParam0)
{
	return 1;
}

int func_41(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (!func_75(uParam0))
	{
		if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_3, &iVar0, &uVar1))
		{
			iVar3 = 0;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar2])))
				{
					uParam0->f_4[iVar2] = func_81(uParam0->f_3, iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar2])))
					{
						iVar3++;
						PED::SET_PED_OWNS_ANIMAL(PLAYER::GET_PLAYER_PED(uParam0->f_2), &(uParam0->f_4[iVar2]), 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_4[iVar2])))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_4[iVar2]), true, false);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 467, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 277, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 209, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 208, true);
						}
					}
				}
				iVar2++;
			}
			if (iVar3 < iVar0)
			{
			}
			else if (iVar3 == iVar0)
			{
				func_13(uParam0, 64);
				return 1;
			}
			else if (iVar3 > iVar0)
			{
				func_13(uParam0, 64);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0)
{
	if (func_14(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return 0;
		}
	}
	if (!func_82())
	{
		return 0;
	}
	return 1;
}

int func_43()
{
	int iVar0;

	if (func_83())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (Global_1904612[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(bool bParam0)
{
	if (func_84())
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (func_85(&(Global_1099293->f_4), 1, 5))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_43())
		{
			return 0;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_86())
	{
		return 0;
	}
	if (!func_87())
	{
		return 0;
	}
	if (func_88())
	{
		return 0;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_89())
	{
		return 0;
	}
	return 1;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_46(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_90(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_91(iParam0))
	{
		return 0;
	}
	if (func_92(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_93(iParam0, 1)) || func_94(32768))
	{
		if (!func_93(iParam0, 262144) || !Global_1904612->f_8189)
		{
			return 0;
		}
	}
	if (!func_87())
	{
		return 0;
	}
	return 1;
}

void func_47(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904612[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904612)[iParam0] = uVar0;
}

int func_48(var uParam0)
{
	if (func_14(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3) != -1772561076)
			{
				return 0;
			}
		}
		if (func_95(&(uParam0->f_3)))
		{
			func_96(&(uParam0->f_3));
			func_97(&(uParam0->f_3));
		}
	}
	else if (func_98(uParam0))
	{
		func_97(&(uParam0->f_3));
	}
	func_99(uParam0);
	return 0;
}

void func_49(var uParam0)
{
	if (!func_100(uParam0->f_2))
	{
		return;
	}
	switch (func_101(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_14(uParam0))
			{
				func_102(uParam0);
				func_103(4);
			}
			break;
		case 2:
			if (func_14(uParam0))
			{
				func_102(uParam0);
				func_17(79, 1);
				func_103(4);
			}
			break;
	}
}

void func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_104(uParam0, 1);
	if (!func_14(uParam0))
	{
		iVar1 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if ((iVar0 == 0 || !_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1)) || _NAMESPACE26::NETWORK_GET_GANG_ID(uParam0->f_2) != iVar1)
		{
			func_105(uParam0);
			return;
		}
	}
	iVar2 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (iVar2 == PLAYER::PLAYER_PED_ID())
		{
			func_105(uParam0);
			return;
		}
	}
	iVar3 = -1636811933;
	iVar4 = -2145527776;
	iVar5 = -1445216292;
	if (iVar0 == 0)
	{
		iVar3 = 1603565092;
		iVar4 = 0;
		iVar5 = -1313992318;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (iVar0 != Local_21.f_17)
		{
			Local_21.f_17 = iVar0;
			if (iVar0 == 0)
			{
				func_106(uParam0, 768962966);
			}
			else
			{
				func_106(uParam0, -1403891967);
			}
		}
		if (func_100(uParam0->f_2))
		{
			func_107(uParam0, -272772079);
		}
		else
		{
			func_108(uParam0, -272772079);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar0 > 0)
			{
				func_107(uParam0, iVar3);
			}
			func_108(uParam0, iVar4);
			func_108(uParam0, iVar5);
		}
		else if (!PED::IS_PED_A_PLAYER(iVar2))
		{
			func_108(uParam0, iVar4);
			func_108(uParam0, iVar5);
			func_108(uParam0, iVar3);
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar6))
			{
				func_108(uParam0, iVar4);
				func_108(uParam0, iVar5);
				func_108(uParam0, iVar3);
			}
			else if (func_109(iVar6, 0))
			{
				func_108(uParam0, iVar4);
				func_108(uParam0, iVar3);
				func_107(uParam0, iVar5);
			}
			else if (iVar0 > 0)
			{
				func_108(uParam0, iVar5);
				func_108(uParam0, iVar3);
				func_107(uParam0, iVar4);
			}
		}
		if (iVar0 > 0)
		{
			switch (iVar0)
			{
				case 1:
					func_107(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 2:
					func_107(uParam0, -41513897);
					func_108(uParam0, -404791027);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 3:
					func_107(uParam0, 198191338);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 4:
					func_107(uParam0, -1559275666);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 5:
					func_107(uParam0, -1320029197);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -967238143);
					break;
				case 6:
					func_107(uParam0, -967238143);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					break;
			}
		}
		else
		{
			func_108(uParam0, -404791027);
			func_108(uParam0, -41513897);
			func_108(uParam0, 198191338);
			func_108(uParam0, -1559275666);
			func_108(uParam0, -1320029197);
			func_108(uParam0, -967238143);
		}
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
	{
		return;
	}
	if (iVar0 == 0)
	{
		func_106(uParam0, 768962966);
	}
	else
	{
		func_106(uParam0, -1403891967);
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_2;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
	{
		return;
	}
	iVar3 = 0;
	AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(iVar0, &iVar2);
	if (Global_1268274[iVar1 /*20*/] & 1 != 0)
	{
		if (!func_110(iVar2, 1))
		{
			iVar3 = 1;
		}
		if (Global_1268274[iVar1 /*20*/] & 32 != 0)
		{
			if (!func_110(iVar2, 32))
			{
				iVar3 |= 32;
			}
		}
	}
	else
	{
		if (Global_1268274[iVar1 /*20*/] & 2 != 0)
		{
			if (!func_110(iVar2, 2))
			{
				iVar3 |= 2;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 4 != 0)
		{
			if (!func_110(iVar2, 4))
			{
				iVar3 |= 4;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 8 != 0)
		{
			if (!func_110(iVar2, 8))
			{
				iVar3 |= 8;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 64 != 0)
		{
			if (!func_110(iVar2, 64))
			{
				iVar3 |= 64;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 128 != 0)
		{
			if (!func_110(iVar2, 128))
			{
				iVar3 |= 128;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 256 != 0)
		{
			if (!func_110(iVar2, 256))
			{
				iVar3 |= 256;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 16 != 0)
		{
			if (!func_110(iVar2, 16))
			{
				iVar3 = 16;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 512 != 0)
		{
			if (!func_110(iVar2, 512))
			{
				iVar3 |= 512;
			}
		}
		if (func_110(iVar2, 1024))
		{
			if (!func_110(iVar2, 1024))
			{
				iVar3 |= 1024;
			}
		}
	}
	if (iVar3 != 0)
	{
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(iVar0, iVar3);
	}
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_111(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!func_112(iVar0, iVar1, &uVar2))
	{
		return;
	}
	func_113(iVar0);
	iVar3 = uParam0->f_2;
	if (Global_1268274[iVar3 /*20*/] & 16 != 0 || Global_1268273 & 32 != 0)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
	else if (func_16())
	{
		func_17(81, 1);
	}
}

void func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = &uParam0->f_4[iVar4];
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			func_114(iVar3, iVar5);
		}
		iVar4++;
	}
	iVar6 = VEHICLE::_GET_VEHICLE_OWNER(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (iVar7 == iVar3)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		return;
	}
	VEHICLE::SET_PED_OWNS_VEHICLE(iVar3, iVar0);
}

void func_54(int iParam0)
{
	func_70(2, iParam0);
}

void func_55(int iParam0)
{
	func_70(3, iParam0);
}

int func_56(var uParam0, int iParam1, int iParam2)
{
	return 0;
}

int func_57(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam2->f_4;
	switch (iVar0)
	{
		case 0:
		case 3:
			if (func_115(uParam0, iParam2))
			{
				func_116(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_115(uParam0, iParam2))
			{
				func_13(uParam0, 4096);
				func_116(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_115(uParam0, iParam2))
			{
				func_117(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_115(uParam0, iParam2))
			{
				func_118(uParam0, iParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_119(uParam0, iParam2, 0);
			break;
		case 13:
			func_119(uParam0, iParam2, 1);
			break;
		case 14:
			func_120(uParam0, iParam2);
			break;
		case 15:
			if (func_115(uParam0, iParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					TASK::_0x141BC64C8D7C5529(uParam0->f_3);
				}
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (Global_1572887->f_106.f_75 > 9)
	{
		return 1;
	}
	if (!func_121(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	if (func_121(func_122()))
	{
		if (!func_65(&(Global_1273882->f_154[&Global_1273882]), 0, 1) && func_123(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iVar0))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26836), iVar0))
	{
		return 0;
	}
	if (NETWORK::_0xFE53B1F8D43F19BF(iParam0, iParam1) == 2 || (Global_1102098->f_34[iVar0 /*11*/])->f_10)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0;
		case 12:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 9:
			return 0;
		default:
			break;
	}
	return 1;
	return 1;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 5;
		case 12:
			return 5;
		case 10:
			return 5;
		case 11:
			return 10;
		case 9:
			return 10;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_63(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_124(*uParam0);
}

float func_64(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1131373->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1273882->f_154[&Global_1273882])
	{
		return Global_17173.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(_NAMESPACE26::NETWORK_GET_GANG_ID(iParam0)) > 1 && bParam1) && ((*Global_1097609)[iVar0 /*51*/])->f_18 >= ((*Global_1097609)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097609)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097609)[iVar0 /*51*/])->f_45;
}

bool func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1131373->f_6289)
	{
		return false;
	}
	if (iParam0 == &Global_1273882->f_154[&Global_1273882])
	{
		return ((Global_17173.f_2619.f_2 == 2 || (bParam1 && Global_17173.f_2619.f_2 == 1)) || (bParam2 && Global_17173.f_2619.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((((*Global_1097609)[iVar0 /*51*/])->f_48 == 2 || (bParam1 && ((*Global_1097609)[iVar0 /*51*/])->f_48 == 1)) || (bParam2 && ((*Global_1097609)[iVar0 /*51*/])->f_48 == 3));
}

int func_66(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	return func_126(bParam0, bParam2, 1, bParam1, 1, 0);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = (func_66(bParam0, 0, bParam2) * iParam1);
	iVar1 = 0;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		iVar1 = func_127(iVar0);
	}
	return iVar1;
}

int func_68(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2[15];
	int iVar33;
	bool bVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_125(bParam0, 0))
	{
		return -1;
	}
	if (func_128(bParam0) != 26423971)
	{
		return -1;
	}
	if (func_129())
	{
		bParam3 = true;
	}
	if (bParam5 == -570078785 || bParam5 == -915411861)
	{
		bVar0 = (func_126(bParam0, bParam5, 1, 0, 1, 2084597891 /* GXTEntry: "Money" */) * iParam2);
		bVar1 = false;
		if (bVar0 <= 0)
		{
			bVar1 = (func_126(bParam0, bParam5, 1, 0, 1, 773203532 /* GXTEntry: "Gold Bar" */) * iParam2);
			if (bVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(bVar0, bVar1))
		{
			return -1;
		}
	}
	else if (func_130(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			bVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_131(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= bVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_132(0))
	{
		if (bVar0 > 0)
		{
			func_133(2084597891 /* GXTEntry: "Money" */, bVar0, -142743235, 0, 0);
		}
		else if (bVar1 > 0)
		{
			func_133(773203532 /* GXTEntry: "Gold Bar" */, bVar1, -142743235, 0, 0);
		}
		else if (func_134(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				bVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_133(&(Var2[iVar35 /*2*/]), bVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_135(joaat("spend"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_136(iVar52, Var53);
	}
	return iVar52;
}

void func_69(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_137(iParam0);
	if (func_138(iParam0) && !bParam2)
	{
		return;
	}
	Global_1268935->f_11.f_465[iParam0] = func_139(MISC::_CREATE_VAR_STRING(2, sVar0, sParam1), 10000, 0, 0, 0, 1);
}

void func_70(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

int func_71(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1099293;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1273882->f_22[iParam0])
	{
		return Global_1097609[iParam0 /*51*/];
	}
	return 26;
}

int func_72(int iParam0)
{
	if (func_31(32, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_74(int iParam0, int iParam1)
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

bool func_75(var uParam0)
{
	return func_8(*uParam0, 64);
}

int func_76(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return 0;
	}
	if (func_140(iParam0, 0) && func_140(iParam0, 1))
	{
		return 0;
	}
	return 1;
}

void func_77(var uParam0, bool bParam1)
{
	if (bParam1 || !func_4(uParam0))
	{
		func_141(uParam0);
	}
}

void func_78(var uParam0, int iParam1)
{
	func_26(uParam0->f_3, 1);
	func_96(&(uParam0->f_3));
	func_97(&(uParam0->f_3));
}

void func_79(var uParam0)
{
	if (!func_14(uParam0))
	{
		return;
	}
	if (Local_21.f_17 == 0)
	{
		func_17(70, 1);
	}
	else
	{
		func_142("FETCH_HELP_BOUNTY_SET_UP_WAGON_DESTROYED", 0, 10000, 0, 0, 0, 1);
	}
}

int func_80(var uParam0, float fParam1)
{
	if (!func_4(uParam0))
	{
		return 0;
	}
	if (func_143(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

int func_82()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_144(iVar0))
	{
		return 0;
	}
	if (Local_21.f_16 != PLAYER::PLAYER_ID())
	{
		Local_21.f_16 = PLAYER::PLAYER_ID();
		return 0;
	}
	return 1;
}

bool func_83()
{
	return Global_1904612->f_8186 != -1;
}

bool func_84()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_85(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

bool func_86()
{
	return Global_1070355->f_27136.f_19.f_3 != 0;
}

int func_87()
{
	if (!func_145())
	{
		return 0;
	}
	return Global_1904612->f_8187;
}

bool func_88()
{
	return Global_1896726->f_382;
}

int func_89()
{
	var uVar0;

	if (!func_145())
	{
		return 0;
	}
	uVar0 = Global_1904612->f_8188;
	Global_1904612->f_8188 = 0;
	return uVar0;
}

bool func_90(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17173.f_2563[iParam0]), iParam1);
}

int func_91(int iParam0)
{
	if (func_93(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_40.f_3327)
	{
		if ((Global_40.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_40.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904612->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_93(int iParam0, int iParam1)
{
	return ((Global_1904612->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_94(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_95(var uParam0)
{
	int iVar0;

	if (PED::IS_PED_SITTING_IN_VEHICLE(Global_35, *uParam0))
	{
		iVar0 = PED::_0x4E76CB57222A00E5(Global_35);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_96(var uParam0)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*uParam0);
	}
	else if (!func_146(Global_35, -1519783610))
	{
		AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(*uParam0, 17, 1);
		TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(*uParam0, 0);
	}
}

void func_97(var uParam0)
{
	Local_21.f_10 = 0;
	Local_21.f_11 = 0;
	Local_21.f_12 = 0;
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(*uParam0, 17, 0);
}

int func_98(var uParam0)
{
	switch (Local_21.f_10)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (func_95(&(uParam0->f_3)))
				{
					func_147(&(Local_21.f_10), 1);
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (func_95(&(uParam0->f_3)))
				{
					if (func_148(uParam0))
					{
						func_147(&(Local_21.f_10), 2);
					}
					if (func_149(uParam0, 0))
					{
						if (func_150(4, 255))
						{
							if (!func_150(128, 255))
							{
								func_151(128);
							}
						}
						else
						{
							func_152(1, 1);
						}
						func_147(&(Local_21.f_10), 3);
					}
				}
				else
				{
					func_147(&(Local_21.f_10), 3);
				}
			}
			else
			{
				func_147(&(Local_21.f_10), 3);
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				func_96(&(uParam0->f_3));
				if (func_153(&(uParam0->f_3)))
				{
					func_147(&(Local_21.f_10), 3);
				}
			}
			break;
		case 3:
			func_154();
			return 1;
	}
	return 0;
}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 853;
	if (func_155(0, &(Local_21.f_13), &(Local_21.f_14)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_13))
		{
			if (Local_21.f_13 != Local_21.f_15 && PED::GET_PED_CONFIG_FLAG(Local_21.f_13, 565, true))
			{
				iVar1 = func_156(Local_21.f_13);
				if (func_157(iVar1, uParam0->f_3, 1, 1) < 20f && _NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_2))
				{
					func_17(iVar0, 0);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_14))
		{
			if (Local_21.f_14 != Local_21.f_15 && PED::GET_PED_CONFIG_FLAG(Local_21.f_14, 565, true))
			{
				iVar2 = func_156(Local_21.f_13);
				if (func_157(iVar2, uParam0->f_3, 1, 1) < 20f && _NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_2))
				{
					func_17(iVar0, 0);
				}
			}
		}
	}
}

int func_100(int iParam0)
{
	if (func_31(4, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_101(var uParam0)
{
	return func_158(uParam0, 1086324736 /* Float: 6f */, 1094713344 /* Float: 12f */, 1077936128 /* Float: 3f */, 1090519040 /* Float: 8f */);
}

void func_102(var uParam0)
{
	if (func_14(uParam0))
	{
		func_70(15, 3);
	}
}

void func_103(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1268274)[iVar0 /*20*/])->f_2 = (((*Global_1268274)[iVar0 /*20*/])->f_2 - (((*Global_1268274)[iVar0 /*20*/])->f_2 && iParam0));
}

int func_104(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar3 = (-1 + iVar0);
		if (iVar3 == -1 || iVar3 == 0)
		{
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_3, iVar3))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_3, iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (bParam1 || !ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_105(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
}

void func_106(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	func_105(uParam0);
	uParam0->f_1 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, uParam0->f_3);
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar0))
	{
		bVar1 = func_159(iVar0);
		if (func_125(bVar1, 0))
		{
			MAP::_SET_BLIP_NAME(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, func_160(bVar1)));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_161(2));
		}
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_161(2));
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_1, 580546400);
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(uParam0->f_1, iParam1);
	}
}

void func_108(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, iParam1);
	}
}

int func_109(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1273882->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1273882->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1273882->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_NETWORK_IS_IN_MY_GANG(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_110(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_111(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<7> Var15;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (!func_112(iVar0, iVar1, &uVar2))
	{
		return 0;
	}
	Var3 = { uParam0->f_11 };
	iVar10 = uParam0->f_2;
	iVar11 = PLAYER::PLAYER_ID();
	if (iVar10 == iVar11)
	{
		return 0;
	}
	iVar12 = iVar10;
	iVar13 = func_162(iVar12);
	iVar14 = func_163(iVar13, 10);
	if (iVar14 != -1)
	{
		if (func_164(iVar12, iVar14, 2) && func_165(iVar14, iVar0))
		{
			return 1;
		}
	}
	if (Global_1268274[iVar12 /*20*/] & 16 != 0 || Global_1268273 & 32 != 0)
	{
		return 0;
	}
	if (Global_1268274[iVar12 /*20*/] & 2 != 0 || Global_1268273 & 4 != 0)
	{
		if (_NAMESPACE26::NETWORK_GET_GANG_ID(iVar11) == _NAMESPACE26::NETWORK_GET_GANG_ID(iVar10))
		{
			return 0;
		}
	}
	Var15 = { func_166(iVar10) };
	if (Global_1268274[iVar12 /*20*/] & 4 != 0 || Global_1268273 & 8 != 0)
	{
		if (func_167(Var15, Var3))
		{
			return 0;
		}
	}
	if (Global_1268274[iVar12 /*20*/] & 8 != 0 || Global_1268273 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var3))
		{
			return 0;
		}
	}
	return 1;
}

int func_112(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar3 = -1;
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == -1772561076)
	{
		iVar4 = 0;
	}
	else
	{
		iVar4 = (9 - 1);
	}
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		iVar1 = iVar2;
		iVar0 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iParam0, iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		else if (iVar0 == iParam1)
		{
			*uParam2 = iVar1;
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_113(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_112(iParam0, iVar0, &uVar1))
	{
		return;
	}
	if (AITRANSPORT::IS_PED_EXITING_TRANSPORT(iVar0, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

void func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_GET_ACTIVE_ANIMAL_OWNER(iParam1);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == iParam0)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
		return;
	}
	PED::SET_PED_OWNS_ANIMAL(iParam0, iParam1, 0);
}

int func_115(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return 0;
	}
	return 1;
}

void func_116(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 4);
	}
}

void func_117(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 2);
	}
}

void func_118(var uParam0, int iParam1)
{
	if (func_31(4, 255))
	{
		return;
	}
	if (func_14(uParam0))
	{
		TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(joaat("call"), &(iParam1->f_7), 0);
		func_168(4);
	}
	if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
}

void func_119(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar3 = uParam0->f_2;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		return;
	}
	iVar4 = iParam1->f_1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
		return;
	}
	if (iVar3 != iVar4)
	{
		return;
	}
	bVar5 = false;
	if (iVar1 == iVar3)
	{
		bVar5 = true;
	}
	if (bVar5 && !bParam2)
	{
		return;
	}
	if (!func_112(iVar0, iVar2, &uVar6))
	{
		return;
	}
	func_169(iVar0);
	if (!bVar5)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
}

void func_120(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = iParam1->f_1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		return;
	}
	if (iVar0 == iVar3)
	{
		return;
	}
	if (iVar2 != PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar3))
	{
		return;
	}
	if (!func_112(iVar2, iVar1, &uVar4))
	{
		return;
	}
	func_169(iVar2);
}

int func_121(struct<2> Param0)
{
	if (!func_170(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_171(Param0))
	{
		return 0;
	}
	return 1;
}

struct<2> func_122()
{
	if (Global_1182844->f_129 <= 0)
	{
		return func_172(0);
	}
	if (Global_1182844->f_130 < 0 || Global_1182844->f_131 == 0)
	{
		return func_172(0);
	}
	return ((*Global_1182844)[Global_1182844->f_130 /*4*/])->f_1;
}

int func_123(int iParam0)
{
	int iVar0;

	if (!Global_1131373->f_6289)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (func_110(((*Global_1097609)[iVar0 /*51*/])->f_50, 2))
	{
		return 0;
	}
	if (func_173(((*Global_1055965)[iVar0 /*436*/])->f_2))
	{
		return 1;
	}
	return 0;
}

void func_124(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_125(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_126(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_174(bParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_175(bParam0))
	{
		return func_177(func_176(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_130(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

bool func_127(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_178() == 0)
	{
		return func_179(iParam0);
	}
	return iParam0 <= func_180();
}

int func_128(bool bParam0)
{
	vector3 vVar0;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_129()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_130(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
	if (*uParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_181(bParam0, bParam1, uParam2, *uParam3);
	}
	return 1;
}

int func_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_128(bParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		bVar2 = func_182(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_183(bParam0, 0);
	}
	if (func_184(bParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_185(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_186(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_185(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_132(bool bParam0)
{
	if (func_178() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_185(bParam0));
}

int func_133(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_184(bParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_187(bParam0, bParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_188(bParam0, bParam4, 0) };
	Var6 = { func_189(bParam0, Var1, Var1.f_4, bParam4) };
	return func_190(bParam0, &Var6, &Var1, bParam1, iParam2, iParam3, bParam4);
}

int func_134(bool bParam0)
{
	switch (bParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_135(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_191(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_192(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_193(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_136(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_20)
	{
		if (&Global_1270479->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	return "";
}

bool func_138(int iParam0)
{
	return func_194(&(Global_1268935->f_11.f_465[iParam0]));
}

var func_139(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	uVar15 = _NAMESPACE71::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, bParam5);
	return uVar15;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_141(var uParam0)
{
	func_195(uParam0, 0f);
}

void func_142(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (iParam1 != 0)
	{
		iVar1 = MAP::_0x3E593DF9C2962EC6(iParam1);
		iVar0 = MISC::_CREATE_VAR_STRING(2, sParam0, iVar1);
	}
	else
	{
		iVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(iVar0))
	{
		MAP::REMOVE_BLIP(&iVar1);
		return;
	}
	if (Global_1268935->f_513.f_326 != 0)
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1268935->f_513.f_326, 0);
		Global_1268935->f_513.f_326 = 0;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1268935->f_513.f_325))
	{
		MAP::REMOVE_BLIP(&(Global_1268935->f_513.f_325));
	}
	Global_1268935->f_513.f_325 = iVar1;
	Global_1268935->f_513.f_326 = func_139(iVar0, iParam2, iParam3, iParam4, iParam5, bParam6);
}

float func_143(var uParam0)
{
	if (!func_4(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_196(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_197() - uParam0->f_1);
}

int func_144(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1772561076:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_145()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 1;
	}
	return 0;
}

bool func_146(int iParam0, int iParam1)
{
	return (TASK::_0xA710DC5D25F8B942(iParam0, iParam1) != -1f || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0);
}

void func_147(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

int func_148(var uParam0)
{
	switch (Local_21.f_11)
	{
		case 0:
			if (!func_198(Local_21.f_8))
			{
				Local_21.f_8 = func_199("PLAYER_SURRENDER_BREAK_OUT", joaat("INPUT_CONTEXT_X"), uParam0->f_3, 1, 0, 0, 0, 10, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			func_200(Local_21.f_8, 0, 1);
			func_201(Local_21.f_8, 0, 1, 1);
			if (func_198(Local_21.f_8))
			{
				func_202(&(Local_21.f_11), 1);
			}
			break;
		case 1:
			if (func_203(Local_21.f_8, 0))
			{
				func_200(Local_21.f_8, 0, 1);
				func_201(Local_21.f_8, 0, 1, 1);
			}
			if ((!func_204(uParam0) && !func_205(uParam0)) && VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_3))
			{
				func_202(&(Local_21.f_11), 2);
			}
			break;
		case 2:
			if (!func_203(Local_21.f_8, 0))
			{
				func_200(Local_21.f_8, 1, 1);
				func_201(Local_21.f_8, 1, 1, 1);
			}
			if (func_204(uParam0))
			{
				func_202(&(Local_21.f_11), 1);
			}
			if (func_205(uParam0))
			{
				func_202(&(Local_21.f_11), 1);
			}
			if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_3))
			{
				func_202(&(Local_21.f_11), 1);
			}
			if (func_206(Local_21.f_8, 1))
			{
				func_202(&(Local_21.f_11), 3);
			}
			break;
		case 3:
			if (func_198(Local_21.f_8))
			{
				func_207(&(Local_21.f_8), 1, 1);
			}
			return 1;
	}
	return 0;
}

int func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_202(&(Local_21.f_12), 3);
	}
	switch (Local_21.f_12)
	{
		case 0:
			if (!func_198(Local_21.f_9))
			{
				Local_21.f_9 = func_199("PLAYER_SURRENDER", joaat("INPUT_SURRENDER"), uParam0->f_3, 1, 0, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			func_200(Local_21.f_9, 0, 1);
			func_201(Local_21.f_9, 0, 1, 1);
			if (func_198(Local_21.f_9))
			{
				func_202(&(Local_21.f_12), 2);
			}
			break;
		case 2:
			if (!func_203(Local_21.f_9, 0))
			{
				func_200(Local_21.f_9, 1, 1);
				func_201(Local_21.f_9, 1, 1, 1);
			}
			if (func_206(Local_21.f_9, 1))
			{
				func_202(&(Local_21.f_12), 3);
			}
			break;
		case 3:
			if (func_198(Local_21.f_9))
			{
				func_207(&(Local_21.f_9), 1, 1);
			}
			return 1;
	}
	return 0;
}

bool func_150(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && (((*Global_1213462)[iParam1 /*303*/])->f_300 && iParam0) != 0);
}

void func_151(int iParam0)
{
	((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 = (((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 || iParam0);
}

void func_152(bool bParam0, bool bParam1)
{
	if (func_208(255) == 4)
	{
		return;
	}
	if (func_209(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_210(0);
	}
	else
	{
		if (bParam1)
		{
			func_211(0, 0, 0, 1);
		}
		func_212(0);
		func_213(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_214(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_215(Global_1099293->f_516, 36);
	func_216(Global_1099293->f_555, 36);
}

int func_153(var uParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar11 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar12 = (-1 + iVar0);
		iVar13 = iVar12;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, iVar13))
		{
			iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar13);
			if (!ENTITY::IS_ENTITY_DEAD(&(iVar1[iVar0])))
			{
				iVar11 = 0;
			}
		}
		iVar0++;
	}
	return iVar11;
}

void func_154()
{
	if (func_198(Local_21.f_9))
	{
		func_207(&(Local_21.f_9), 1, 1);
	}
	if (func_198(Local_21.f_8))
	{
		func_207(&(Local_21.f_8), 1, 1);
	}
}

int func_155(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939168->f_26))
		{
			*uParam1 = Global_1939168->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939168->f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1939168->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939168->f_27))
			{
				*uParam2 = Global_1939168->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939168->f_24 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

var func_156(var uParam0)
{
	return uParam0;
}

float func_157(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_158(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar6;
	vector3 vVar10;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		return 2;
	}
	iVar24 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (func_217(uParam0, &uVar1, fParam2))
	{
		return 1;
	}
	vVar17 = { ENTITY::GET_ENTITY_COORDS(iVar24, true, false) };
	vVar20 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	if (BUILTIN::VDIST(vVar17, vVar20) >= 200f)
	{
		return 2;
	}
	if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar17, vVar20, 1, &vVar2, &(vVar2.f_3), 1, 1077936128, 0) || !PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar17, vVar20, 0, &vVar2, &(vVar2.f_3), 1, 1077936128, 0))
	{
		if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar17, &vVar2, &(vVar2.f_3), 1, 3f, 0))
		{
			if (!func_218(vVar17, vVar20, &vVar2))
			{
				return 2;
			}
		}
	}
	if (!func_219(uParam0->f_3, &iVar23))
	{
		vVar14 = { vVar20 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_3) };
	}
	else
	{
		vVar14 = { vVar20 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar23) };
	}
	if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar20, vVar14, 1, &vVar6, &(vVar6.f_3), 1, 1077936128, 0) || !PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar20, vVar14, 0, &vVar6, &(vVar6.f_3), 1, 1077936128, 0))
	{
		if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar20, &vVar6, &(vVar6.f_3), 1, 3f, 0))
		{
			return 2;
		}
	}
	iVar25 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vVar6, 0, 1, 3f, 0f);
	if (!PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar25))
	{
		return 2;
	}
	uVar26 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(uVar26))
	{
	}
	else
	{
		TASK::_0x19BC99C678FBA139(uVar26, 74, 0);
		TASK::_0x19BC99C678FBA139(uVar26, 81, 1);
		TASK::_0x5D9B0BAAF04CF65B(uVar26, 47, 2, 0);
		TASK::_0x5D9B0BAAF04CF65B(uVar26, 50, 2, 0);
		if (!TASK::_0xFE5D28B9B7837CC1(uVar26, vVar6))
		{
			TASK::_0xBEEFBB608D2AA68A(uVar26);
			return 2;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar14, vVar17, iVar0, &vVar10, &(vVar10.f_3), 1, 1077936128, 0) && iVar0 < 1)
			{
				TASK::_0xBEEFBB608D2AA68A(uVar26);
				return 2;
			}
			else if (!TASK::_0xFE5D28B9B7837CC1(uVar26, vVar10))
			{
				TASK::_0xBEEFBB608D2AA68A(uVar26);
				return 2;
			}
			iVar0++;
		}
		TASK::_0xBEEFBB608D2AA68A(uVar26);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (TASK::_0x583AE9AF9CEE0958(uParam0->f_3, uParam0->f_21))
		{
			if (BUILTIN::VDIST(uParam0->f_21, vVar2) > 10f)
			{
			}
			else
			{
				return func_220(uParam0, 1092616192 /* Float: 10f */);
			}
		}
		uParam0->f_21 = { vVar2 };
		uParam0->f_24 = vVar2.f_3;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vVar2, iParam1, 1147928963, 2, iParam4, iParam3);
	}
	return func_220(uParam0, 1092616192 /* Float: 10f */);
}

int func_159(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1698498246:
			return -553831738 /* GXTEntry: "Hunting Wagon" */;
		case -1772561076:
			return 1437065740 /* GXTEntry: "Bounty Wagon" */;
		default:
			break;
	}
	return 0;
}

bool func_160(bool bParam0)
{
	int iVar0;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_221(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_161(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		return "";
	}
	func_222();
	Global_1903928->f_124.f_2 = 1292413058;
	Global_1903928->f_124.f_3 = func_223(iParam0);
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, &(Global_1903928->f_124)))
	{
		return "";
	}
	return func_224(Var0);
}

var func_162(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_10;
	}
	return ((*Global_1097609)[iParam0 /*51*/])->f_10;
}

int func_163(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 148;
	}
	else if (iParam1 == 28)
	{
		return 149;
	}
	else if (iParam1 == 29)
	{
		return 150;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 151;
				case 6:
					return 153;
				case 23:
					return 154;
				case 22:
					return 152;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 160;
				case 6:
					return 162;
				case 23:
					return 163;
				case 22:
					return 161;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 22:
					return 169;
				case 6:
					return 170;
				case 23:
					return 171;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 137:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

bool func_164(int iParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET((*Global_1255563)[iParam0 /*177*/][iParam1], iParam2);
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_225(iParam0);
	vVar1 = { (Global_1051387->f_69[iVar0 /*76*/])->f_3 };
	if (iParam0 == 150)
	{
		vVar1 = { func_226(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_209(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_227(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_227(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_227(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

struct<7> func_166(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_167(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar22;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 22, &uParam0);
	}
	else
	{
		return 0;
	}
	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam7))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar22, 22, &uParam7);
	}
	else
	{
		return 0;
	}
	if (iVar0 != iVar22)
	{
		return 0;
	}
	return 1;
}

void func_168(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1268274)[iVar0 /*20*/])->f_2 = (((*Global_1268274)[iVar0 /*20*/])->f_2 || iParam0);
}

void func_169(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_112(iParam0, iVar0, &uVar1))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

int func_170(int iParam0)
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

int func_171(int iParam0)
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

struct<2> func_172(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_173(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if ((Global_1183537->f_66[iVar0 /*20*/])->f_2 && (Global_1183537->f_66[iVar0 /*20*/])->f_1 == 2)
				{
					return 1;
				}
				iVar0++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887->f_6)
			{
				if (func_228(Global_1102098->f_935.f_27))
				{
					if (!Global_1102098->f_935.f_18)
					{
						return 0;
					}
				}
				if (!func_229())
				{
					return 1;
				}
			}
			else if (Global_1048579 && !Global_1572887->f_9)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(&(Global_1273882->f_154[&Global_1273882])))
				{
					return 1;
				}
				if (func_85(&(Global_1099293->f_4), 1, 5))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_174(bool bParam0, bool bParam1)
{
	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (func_175(bParam0))
	{
		return func_230(func_176(bParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1) > 0;
}

int func_175(bool bParam0)
{
	if (func_231(bParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_125(bParam0, 0))
	{
		return func_233(func_232(bParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_177(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_234(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_178()
{
	return Global_1572887->f_13;
}

bool func_179(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_180()
{
	if (func_178() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_181(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_182(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_128(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_231(bParam0, 1399091007))
	{
		func_235(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_183(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_236(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_238(&Var0, func_237(0));
	}
	if (!func_239(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_240(iVar14);
	return uVar15;
}

int func_184(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_185(bool bParam0)
{
	if (func_178() == -1)
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

struct<4> func_186(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_188(bParam0, bParam1, 0) };
	return func_189(bParam0, Var0, Var0.f_4, bParam1);
}

int func_187(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_241(bParam0))
	{
		return 0;
	}
	if (bParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_184(bParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_132(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_242(&Var1, &iVar32, bParam0, iVar0, bParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_243(bParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_135(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_136(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_185(bParam4), bParam0, bParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_188(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_244(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_128(bParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_189(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_237(bParam1) };
			if (iParam2 && func_245(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_246(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_246(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_247(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_248(bParam1) };
			switch (func_249(bParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case joaat("dog"):
			if (func_250(bParam0, -1823706425))
			{
				Var0 = { func_189(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -1838434463);
			}
			else if (func_250(bParam0, -1483207246))
			{
				Var0 = { func_189(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1911121386))
			{
				Var0 = { func_189(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_250(bParam0, -1653629781))
			{
				Var0 = { func_189(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_251(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_250(bParam0, -1653629781))
			{
				Var0 = { func_189(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_189(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_125(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_185(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_190(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_241(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_251(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (bParam3 < 0)
	{
		bParam3 = Var0.f_11;
	}
	else if (bParam3 > Var0.f_11)
	{
		bParam3 = Var0.f_11;
	}
	if (!func_132(bParam6))
	{
		iVar14 = -1;
		if (func_178() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = bParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_135(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_136(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_185(bParam6), uParam1, bParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_191(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_110(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_110(iVar0, 8))
	{
		return 0;
	}
	else if (func_110(iVar0, 16))
	{
		return 0;
	}
	else if (func_110(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_192(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_252(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_252(iParam1, 2, 0, 0);
	return -1;
}

int func_193(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_252(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_194(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_197() - fParam1);
	func_253(uParam0, 1);
	func_254(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_196(var uParam0)
{
	return func_33(*uParam0, 2);
}

float func_197()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_198(int iParam0)
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

int func_199(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_255(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949749)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949749)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949749[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_256(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_200(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_198(iParam0))
	{
		return;
	}
	iVar0 = func_257(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iVar0 /*23*/])->f_3, bParam1);
}

void func_201(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_198(iParam0))
	{
		return;
	}
	iVar0 = func_257(iParam0);
	if (bParam1)
	{
		func_258(iParam0, 4);
		if (bParam3)
		{
			func_259(iVar0, 1);
		}
		func_260(iVar0, 1);
	}
	else
	{
		func_261(iParam0, 4);
		func_260(iVar0, 0);
	}
}

void func_202(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_203(int iParam0, bool bParam1)
{
	if (bParam1 && !func_198(iParam0))
	{
		return false;
	}
	return !func_255(iParam0, 4);
}

int func_204(var uParam0)
{
	float fVar0;
	float fVar1;

	Local_21.f_15 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	fVar0 = func_157(uParam0->f_3, Local_21.f_15, 1, 1);
	fVar1 = 20f;
	if (ENTITY::IS_ENTITY_DEAD(Local_21.f_15))
	{
		return 0;
	}
	if (fVar0 >= fVar1)
	{
		return 0;
	}
	return 1;
}

int func_205(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	vVar3 = { 20f, 20f, 20f };
	iVar6 = 1;
	iVar7 = VOLUME::_0xB3FB80A32BAE3065(vVar0, 0f, 0f, 0f, vVar3);
	iVar8 = ITEMSET::CREATE_ITEMSET(false);
	iVar10 = ENTITY::GET_MATCHING_ENTITIES(iVar7, iVar8, iVar6, 1, 0, 0);
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 <= (iVar10 - 1))
	{
		iVar9 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar11, iVar8));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar9) && !ENTITY::IS_ENTITY_DEAD(iVar9)) && ENTITY::IS_ENTITY_A_PED(iVar9))
		{
			iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9);
			if (PED::IS_PED_A_PLAYER(iVar12))
			{
				iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
				if (_NAMESPACE26::_0x3F59FE6F37869576(iVar13, uParam0->f_2))
				{
					VOLUME::DELETE_VOLUME(iVar7);
					ITEMSET::DESTROY_ITEMSET(iVar8);
					return 1;
				}
			}
		}
		iVar11++;
	}
	VOLUME::DELETE_VOLUME(iVar7);
	ITEMSET::DESTROY_ITEMSET(iVar8);
	return 0;
}

bool func_206(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_198(iParam0))
	{
		return false;
	}
	iVar0 = func_257(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949749)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949749)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949749)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949749)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949749)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949749)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949749)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949749)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

void func_207(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_198(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_257(*uParam0);
	if (((*Global_1949749)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_262(iVar0);
	*uParam0 = 0;
}

int func_208(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1273882->f_22[iParam0])
	{
		return ((*Global_1097609)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

int func_209(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)
{
	if (func_263(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_264(iParam0);
	if (!func_265(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_266(128) && !func_267(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_268() == 4)
	{
		func_210(17);
	}
	func_269(1024);
}

int func_212(int iParam0)
{
	if (func_270(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_213(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_214(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_215(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_216(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_217(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	*uParam1 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_2))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (PED::IS_PED_ON_VEHICLE(iVar0, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar0, true) == uParam0->f_3)
		{
			*uParam1 = 1;
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_218(vector3 vParam0, vector3 vParam3, var uParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	var uVar8;

	if (func_209(vParam0))
	{
		return 0;
	}
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 2f, 1, &vVar0, &vVar3, &uVar6, &uVar7, &uVar8, true))
	{
		*uParam6 = { Vector(0.5f, 0.5f, 0.5f) * vVar0 + vVar3 };
		if (BUILTIN::VDIST(vParam3, vVar0) < BUILTIN::VDIST(vParam3, vVar3))
		{
			uParam6->f_3 = func_271(vVar3, vVar0, 1);
		}
		else
		{
			uParam6->f_3 = func_271(vVar0, vVar3, 1);
		}
		return 1;
	}
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iVar1 = iVar0;
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else
		{
			*iParam1 = iVar2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_220(var uParam0, float fParam1)
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
	{
		if (!func_4(&(uParam0->f_18)))
		{
			func_141(&(uParam0->f_18));
		}
		else if (func_272(&(uParam0->f_18), fParam1))
		{
			return 2;
		}
	}
	else if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	return 0;
}

int func_221(bool bParam0)
{
	switch (bParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_222()
{
	Global_1903928->f_124 = (Global_1070355->f_26934[48 /*4*/])->f_3;
	Global_1903928->f_124.f_1 = 0;
	Global_1903928->f_124.f_2 = 0;
	Global_1903928->f_124.f_3 = 0;
	Global_1903928->f_124.f_4 = 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

char* func_224(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_225(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 159:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

Vector3 func_226(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_227(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_228(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return 1;
	}
	return 0;
}

int func_229()
{
	if (Global_1572887->f_106.f_75 >= 9 && Global_1572887->f_106.f_75 <= 13)
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_274(iParam0, bParam1);
	}
	return 1;
}

int func_231(bool bParam0, int iParam1)
{
	if (!func_125(bParam0, 0))
	{
		return func_275(func_232(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_232(bool bParam0)
{
	return bParam0;
}

int func_233(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_276(bParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_234(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_273(iParam0))
	{
		return 0;
	}
	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1);
	if (*uParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, bParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_277(iParam0, bParam1, uParam2, *uParam3);
	}
	return 1;
}

void func_235(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_236(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_237(bool bParam0)
{
	int iVar0;

	iVar0 = func_185(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1270479->f_4)))
		{
			Global_1270479->f_4 = { func_189(923904168, func_244(bParam0), -740156546, bParam0) };
		}
		return Global_1270479->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1270479->f_16)))
		{
			Global_1270479->f_16 = { func_189(923904168, func_244(bParam0), -740156546, 0) };
		}
		return Global_1270479->f_16;
	}
	return func_189(923904168, func_244(bParam0), -740156546, 0);
}

void func_238(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_239(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_185(bParam3), uParam0, bParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)
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

int func_241(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_242(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (bParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_184(bParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, bParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_278(uParam0, iParam1, &uVar0, bParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_243(bool bParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_189(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_244(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_185(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1270479))
			{
				*Global_1270479 = { func_189(joaat("character"), func_279(), -1591664384, bParam0) };
			}
			return *Global_1270479;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1270479->f_12)))
			{
				Global_1270479->f_12 = { func_189(joaat("character"), func_279(), -1591664384, 0) };
			}
			return Global_1270479->f_12;
		}
	}
	return func_189(joaat("character"), func_279(), -1591664384, bParam0);
}

int func_245(bool bParam0, bool bParam1)
{
	if (func_249(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_280();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_246(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_281(bParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_247(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_282(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_248(bool bParam0)
{
	int iVar0;

	iVar0 = func_185(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1270479->f_8)))
		{
			Global_1270479->f_8 = { func_189(271701509, func_244(bParam0), 12999093, 0) };
		}
		return Global_1270479->f_8;
	}
	return func_189(271701509, func_244(bParam0), 12999093, 0);
}

int func_249(bool bParam0)
{
	struct<2> Var0;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_250(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_249(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &bVar0))
		{
			if (func_283(bParam0, iParam1, bVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_251(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_284(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_252(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_20)
	{
		if (&Global_1270479->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_285(iParam0, iParam1, iParam2, iParam3);
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_254(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_255(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_256(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949749)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949749)[iParam0 /*23*/] = iParam4;
	((*Global_1949749)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949749)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949749)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949749)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949749)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949749)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949749)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949749)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949749)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949749)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949749)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949749)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949749)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949749)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949749)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949749)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
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
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, true);
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
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949749)[iParam0 /*23*/])->f_3 = iVar0;
	func_259(iParam0, 1);
	func_260(iParam0, 1);
	func_261(iParam0, 128);
}

int func_257(int iParam0)
{
	return iParam0;
}

void func_258(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 - (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_259(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iParam0 /*23*/])->f_5 == 5 && !func_255(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_260(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949749)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_261(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_262(int iParam0)
{
	if (!func_286(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949749)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949749)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949749)[iParam0 /*23*/] = 1;
	((*Global_1949749)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949749)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949749)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949749)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949749)[iParam0 /*23*/])->f_15 = -1f;
}

bool func_263(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_264(int iParam0)
{
	Global_1099293->f_26.f_12 = iParam0;
}

bool func_265(int iParam0)
{
	return (Global_1099293->f_26.f_7 && iParam0) != 0;
}

bool func_266(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) != 0;
}

bool func_267(int iParam0)
{
	return (Global_1099293->f_4[Global_1100046[iParam0 /*2*/]] && ((*Global_1100046)[iParam0 /*2*/])->f_1) == ((*Global_1100046)[iParam0 /*2*/])->f_1;
}

int func_268()
{
	if (&Global_1099293 <= 5)
	{
		return &Global_1099293;
	}
	if (&Global_1099293 <= 22)
	{
		return 4;
	}
	if (&Global_1099293 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_269(int iParam0)
{
	if (func_287(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

bool func_270(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

float func_271(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_272(var uParam0, float fParam1)
{
	if (func_80(uParam0, fParam1))
	{
		func_5(uParam0);
		return 1;
	}
	return 0;
}

bool func_273(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_274(int iParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_275(bool bParam0, int iParam1)
{
	if (!func_276(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_276(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_277(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_278(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > bParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = bParam3;
				bParam3 = false;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				bParam3 = (bParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && bParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

struct<4> func_279()
{
	struct<4> Var0;

	return Var0;
}

bool func_280()
{
	return (func_288(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_289(func_189(889965687 /* GXTEntry: "Wardrobe" */, func_244(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_281(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_184(bParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_189(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_185(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_185(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_282(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_185(0);
	*uParam1 = { func_189(bParam0, func_237(0), iParam3, 0) };
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

int func_283(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, bParam2);
}

int func_284(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_185(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1270479->f_20 < 20)
	{
		Global_1270479->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1270479->f_20.f_1[iVar0 /*20*/]) = { *(Global_1270479->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1270479->f_20.f_1[(Global_1270479->f_20 - 1) /*20*/]) = { Var1 };
}

bool func_286(int iParam0)
{
	return func_255(iParam0, 2);
}

bool func_287(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) == iParam0;
}

int func_288(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_290(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_185(bParam1), bParam0, bParam3);
}

int func_289(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_291(&uParam0, bParam4, bParam5, iParam6);
}

bool func_290(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_291(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_292(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_292(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_185(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, uParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_284(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

