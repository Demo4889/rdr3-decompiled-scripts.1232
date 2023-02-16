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
	struct<338> Local_17 = { 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 4, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 7, 255, 255, 255, 255, 255, 255, 255, 4 } ;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	struct<52> Local_361[32];
	struct<640> Local_2026 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, -1, 1, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 255;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_2026.f_2))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(uScriptParam_0);
	func_5();
}

void func_1(var uParam0)
{
	func_6(32, *uParam0);
	func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 344, 43);
	func_8(NETWORK::_0xBA24095EA96DFE17(&Local_17), 344, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_361, 1665, 44);
	func_9(NETWORK::_0x690806BC83BC8CA2(Local_361[0 /*52*/]), 1665, "m_clientData");
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_11(uParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0);
	}
}

int func_2(struct<2> Param0)
{
	if (func_13(0, 0))
	{
		return 1;
	}
	else if (func_14(Param0, 1, 0))
	{
		return 1;
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 1;
	}
	else if (&Local_361[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	Local_2026.f_634 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15(&Local_17, &Local_361, &Local_2026);
	func_16(&Local_17, &Local_361, &Local_2026);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17(&Local_17, &Local_361, &Local_2026);
	}
}

void func_4(var uParam0)
{
	func_18();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
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
			func_5();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_21() == 0)
		{
			if (func_22())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_11(var uParam0)
{
	int iVar0;

	Local_2026 = *uParam0;
	Local_2026.f_1 = uParam0->f_5;
	Local_2026.f_2 = { uParam0->f_7 };
	Local_2026.f_4.f_1 = func_23(Local_2026.f_2);
	Local_2026.f_10 = func_26(func_25(func_24(-409129282), Local_2026.f_4.f_1));
	Local_2026.f_10.f_1 = func_24(Local_2026.f_10);
	Local_2026.f_550.f_1 = TASK::_0xE1C105E6BBA48270();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_2026.f_202.f_30[iVar0] = 255;
		iVar0++;
	}
}

void func_12(var uParam0)
{
	Local_17.f_316 = _NAMESPACE26::NETWORK_GET_GANG_ID(uParam0->f_9);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_316))
	{
		func_27(&Local_17, 7);
		return;
	}
	Local_17.f_315 = _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(Local_17.f_316);
}

int func_13(bool bParam0, bool bParam1)
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

int func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070355->f_26837 = 1;
		return 1;
	}
	if (func_28(*Global_1051163) && !func_29(*Global_1051163, Param0))
	{
		Global_1070355->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_30(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_31(iParam3, 255))
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
	if (func_32())
	{
		Global_1070355->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_28(*Global_1051163))
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

void func_15(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_33(1);
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -885048077:
				func_34(iVar0, uParam0, uParam1, uParam2);
				break;
			case -1315570756:
				func_35(iVar0, uParam0, uParam1, uParam2, bVar2);
				break;
			case -507840394:
				func_36(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case 402722103:
				func_37(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
}

void func_16(var uParam0, var uParam1, float fParam2)
{
	if (func_38(uParam0, uParam1, fParam2))
	{
		func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
	}
	if (func_40((*uParam1)[Local_2026.f_634 /*52*/]) != 4 && func_41((*uParam1)[Local_2026.f_634 /*52*/], 16))
	{
		func_42((*uParam1)[Local_2026.f_634 /*52*/], 4);
		if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 32) || func_41((*uParam1)[Local_2026.f_634 /*52*/], 64))
		{
			func_43(fParam2, uParam1);
		}
	}
	switch (func_40((*uParam1)[Local_2026.f_634 /*52*/]))
	{
		case 0:
			func_44(uParam0, uParam1, fParam2);
			if (func_45(fParam2) != 8)
			{
				return;
			}
			func_42((*uParam1)[Local_2026.f_634 /*52*/], 1);
			break;
		case 1:
			func_46(uParam0, uParam1, fParam2);
			if (!func_41((*uParam1)[Local_2026.f_634 /*52*/], 1) || func_47(uParam0) < 3)
			{
				return;
			}
			func_42((*uParam1)[Local_2026.f_634 /*52*/], 2);
			break;
		case 2:
			func_48(uParam0, uParam1, fParam2);
			if (func_47(uParam0) != 5)
			{
				return;
			}
			func_42((*uParam1)[Local_2026.f_634 /*52*/], 3);
			break;
		case 3:
			func_49(uParam0, uParam1, fParam2);
			break;
		case 4:
			func_50(uParam0, uParam1, fParam2);
			break;
	}
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	switch (func_47(uParam0))
	{
		case 0:
			func_51(uParam0, iParam1, bParam2);
			func_27(uParam0, 1);
			break;
		case 1:
			if (!func_52())
			{
				return;
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_53(uParam0, iParam1, bParam2);
			if (!func_54(iParam1, 1))
			{
				return;
			}
			if (!func_55(uParam0, 1))
			{
				return;
			}
			func_27(uParam0, 3);
			break;
		case 3:
			if (!func_55(uParam0, 8))
			{
				func_56(uParam0);
			}
			func_27(uParam0, 4);
			break;
		case 4:
			func_57(uParam0, iParam1, bParam2);
			if (!func_55(uParam0, 2))
			{
				return;
			}
			if (!func_55(uParam0, 4))
			{
				return;
			}
			uParam0->f_321 = bParam2->f_10.f_13;
			func_27(uParam0, 5);
			break;
		case 5:
			func_58(uParam0, iParam1, bParam2);
			if (!func_55(uParam0, 32768))
			{
				if (func_59(&Local_361, 67108864, 0))
				{
					func_60(uParam0);
				}
			}
			if (!func_61(uParam0, iParam1, bParam2))
			{
				if (!func_55(&Local_17, 536870912) && func_62())
				{
					func_63(&Local_17, 536870912);
				}
				return;
			}
			func_64(uParam0, iParam1, bParam2);
			if (Local_17.f_299 != 0 && Local_17.f_299.f_1 < 3)
			{
				return;
			}
			func_65(uParam0);
			if (!func_66(uParam0, bParam2))
			{
				return;
			}
			func_27(uParam0, 6);
			break;
		case 6:
			func_67(uParam0, iParam1, bParam2);
			break;
		case 7:
			func_68(uParam0, iParam1, bParam2);
			break;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_33(67108864))
	{
		func_69(0);
	}
	func_70();
	func_71();
	func_72(0);
	func_73();
	func_74();
	func_75();
	func_76(0);
	func_77(0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_78(Local_2026.f_189[iVar0], 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_79(iVar1);
		if (func_80(iVar1, 16) && func_81(iVar1, &iVar2))
		{
			NETWORK::_0xEE5AE9956743BA20(iVar2, false);
		}
		iVar1++;
	}
	func_82(0);
	func_83();
	func_84(0);
	func_85(0);
	func_86(1);
	func_87(0);
	func_88(0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		CAM::DESTROY_CAM(Local_2026.f_559, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		CAM::DESTROY_CAM(Local_2026.f_560, false);
	}
	func_89();
	func_90();
	func_91(Local_2026.f_619);
	func_91(Local_2026.f_620);
	func_91(Local_2026.f_625);
	func_91(Local_2026.f_626);
	func_91(Local_2026.f_627);
	func_91(Local_2026.f_627.f_2);
	func_91(Local_2026.f_627.f_1);
	func_91(Local_2026.f_627.f_3);
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_91(&(Local_2026.f_621[iVar3]));
		if (func_92(iVar3, 32))
		{
			EVENT::REMOVE_SHOCKING_EVENT((Local_2026.f_29[iVar3 /*5*/])->f_4);
		}
		iVar3++;
	}
	func_93(&(Local_2026.f_548));
	func_94(&(Local_2026.f_550), 1, 0);
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_95();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iVar0 /*12*/])->f_5))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iVar0 /*12*/])->f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iVar1 /*2*/])))
		{
		}
		else if (func_96(iVar1, 1))
		{
			iVar3 = NETWORK::_0xD08066E00D26C448(&(Local_17.f_278[iVar1 /*2*/]));
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar3);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_OBJ(&(Local_17.f_278[iVar1 /*2*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	func_97(&Local_17);
	func_98(&Local_17, &Local_2026);
	func_99(&Local_17, &Local_2026);
	func_100(&Local_2026);
}

void func_20()
{
	if (DATAFILE::_0x7907969497EA92F5(Local_2026.f_4) && DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_2026.f_4))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_2026.f_4);
	}
	if (HUD::TEXT_BLOCK_IS_LOADED(func_101()) || HUD::_0x3CF96E16265B7DC8(func_101()))
	{
		HUD::_TEXT_BLOCK_DELETE(func_101());
	}
	func_102(&Local_2026);
	func_103();
	if (func_55(&Local_17, 524288))
	{
		func_104(&Local_17);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	func_105(Local_17.f_299);
}

int func_21()
{
	return Global_1572887->f_13;
}

bool func_22()
{
	return Global_1051202->f_8;
}

int func_23(struct<2> Param0)
{
	return func_106(Param0);
}

int func_24(int iParam0)
{
	int iVar0;

	iVar0 = func_108(0, (func_107() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_109(iVar0);
}

int func_25(int iParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	var uVar12;

	if (!func_110(iParam0, &Var0))
	{
		return 0;
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var7 = { Var0 };
		Var7.f_2 = 1089670230;
		Var7.f_3 = iVar6;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 1649401908;
			DATAFILE::_DATAFILE_GET_HASH(&uVar12, &Var7);
			Var7.f_2 = 1196324698;
			Var7.f_3 = uParam1;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
			{
			}
			else
			{
				return uVar12;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 354462382:
			return -19759302;
		case -916626861:
			return -409129282;
		default:
			break;
	}
	return iParam0;
}

void func_27(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

int func_28(struct<2> Param0)
{
	if (!func_111(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_112(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_29(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_30(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1184367->f_1 && iParam0) != 0;
}

bool func_31(int iParam0, int iParam1)
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

int func_32()
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
	if (!func_28(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_33(int iParam0)
{
	return func_113(Local_2026.f_7, iParam0);
}

void func_34(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar3;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (!func_114(Var0.f_1, uParam1, &uVar3))
	{
		return;
	}
	if (Var0 == PLAYER::PLAYER_PED_ID())
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
	}
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<25> Var0;
	var uVar31;
	int iVar32;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!func_116(Var0.f_3, bParam4))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 2) && func_114(Var0, uParam1, &uVar31))
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		return;
	}
	if (func_118(Var0, uParam1, &iVar32))
	{
		if ((Var0.f_3 && !Var0.f_24) && (uParam1->f_16[iVar32 /*12*/])->f_2 == 1095997463)
		{
			func_119(iVar32);
		}
		if ((uParam1->f_16[iVar32 /*12*/])->f_2 != 1566032419 && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 2))
		{
			func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		}
		if ((uParam1->f_16[iVar32 /*12*/])->f_2 == 1095997463)
		{
			if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 262144) && Local_17.f_321 > 1)
			{
				func_39((*uParam2)[Local_2026.f_634 /*52*/], 262144);
			}
		}
		else if ((uParam1->f_16[iVar32 /*12*/])->f_2 != 1566032419)
		{
			func_39((*uParam2)[Local_2026.f_634 /*52*/], 524288);
		}
	}
}

void func_36(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 52:
			func_120(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_37(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar9;

	if (func_41((*uParam2)[Local_2026.f_634 /*52*/], 2))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (func_121(Var0, uParam1, &uVar9))
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		return;
	}
}

int func_38(var uParam0, var uParam1, var uParam2)
{
	if (func_47(uParam0) == 6 || func_47(uParam0) == 7)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, int iParam1)
{
	func_122(&(uParam0->f_1), iParam1);
}

int func_40(var uParam0)
{
	return *uParam0;
}

bool func_41(var uParam0, int iParam1)
{
	return func_113(uParam0->f_1, iParam1);
}

void func_42(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_43(float fParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_41((*uParam1)[iVar1 /*52*/], 32) && !func_41((*uParam1)[iVar1 /*52*/], 64))
		{
		}
		else if (!func_123(iVar1, 0, 1))
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		iVar1++;
	}
	SCRIPTS::_0xFFDDF802279BE128(&(fParam0->f_561), &uVar0, &uVar2);
	func_124(uVar0);
}

void func_44(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;

	switch (func_45(uParam2))
	{
		case 0:
			if ((Local_17.f_315 == -1 && func_47(&Local_17) != 6) && func_47(&Local_17) != 7)
			{
				return;
			}
			if (func_125(Local_17.f_316))
			{
				func_126(2097152);
				if (_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) == Local_17.f_316)
				{
					func_127();
				}
			}
			switch (Local_2026.f_10)
			{
				case -19759302:
					iVar0 = 20;
					break;
				case -409129282:
					iVar0 = 4;
					break;
				default:
					iVar0 = 0;
					break;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (func_128(iVar1))
				{
					func_129(iVar1, 0);
				}
				iVar1++;
			}
			((*uParam1)[Local_2026.f_634 /*52*/])->f_1 = 0;
			func_130(uParam2);
			if (func_131())
			{
				func_132(1);
			}
			func_133(uParam2, 1);
			break;
		case 1:
			if (!func_135(func_134(), &(uParam2->f_4), 600, Local_2026, 0, 0))
			{
				func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
				return;
			}
			if (!func_136(func_101(), 30, Local_2026, 0, 0))
			{
				func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
				return;
			}
			func_137(uParam2);
			func_133(uParam2, 2);
			break;
		case 2:
			func_138(uParam2);
			func_133(uParam2, 3);
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 < uParam2->f_10.f_7)
			{
				func_139(iVar2, uParam2);
				iVar2++;
			}
			func_133(uParam2, 4);
			break;
		case 4:
			iVar3 = 0;
			while (iVar3 < uParam2->f_10.f_8)
			{
				func_140(&Var4);
				if (!func_141(&Local_2026, &Var4, iVar3) || !func_142(Var4))
				{
				}
				else
				{
					func_143(iVar3, uParam2);
					if (&uParam2->f_45[iVar3 /*6*/] == 1095997463)
					{
						uParam2->f_10.f_13++;
					}
					if (func_113((uParam2->f_45[iVar3 /*6*/])->f_1, 4))
					{
						uParam2->f_10.f_14++;
					}
				}
				iVar3++;
			}
			func_133(uParam2, 5);
			break;
		case 5:
			func_144(uParam2);
			func_145();
			func_146();
			func_133(uParam2, 7);
			break;
		case 6:
			if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam2->f_4))
			{
				DATAFILE::_DATAFILE_UNLOAD(uParam2->f_4);
				return;
			}
			func_133(uParam2, 7);
			break;
		case 7:
			func_147(uParam2, uParam0);
			func_148();
			func_133(uParam2, 8);
			break;
		case 8:
			break;
	}
}

int func_45(var uParam0)
{
	return uParam0->f_6;
}

void func_46(var uParam0, var uParam1, var uParam2)
{
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 1))
	{
		return;
	}
	if (!func_149())
	{
		return;
	}
	if (!func_150())
	{
		return;
	}
	func_39((*uParam1)[Local_2026.f_634 /*52*/], 1);
}

int func_47(var uParam0)
{
	return *uParam0;
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	func_39((*uParam1)[Local_2026.f_634 /*52*/], 4);
}

void func_49(var uParam0, var uParam1, float fParam2)
{
	func_151();
	func_152(uParam0, uParam1, fParam2);
	func_153();
	func_154(uParam0, uParam1, fParam2);
	func_155(uParam0, uParam1, fParam2);
	func_156();
	func_157(fParam2, uParam1);
	func_158(fParam2, uParam1, uParam0);
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164();
	func_165(uParam0, uParam1, fParam2);
}

void func_50(var uParam0, var uParam1, float fParam2)
{
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_1 = 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;

	iVar0 = func_166();
	iVar1 = func_167(iVar0, Local_2026.f_4.f_1);
	if (Local_17.f_337.f_6 >= iVar1 || Local_17.f_337.f_6 >= 4)
	{
		return 1;
	}
	iVar6 = Local_17.f_337.f_6;
	vVar2 = { func_168(iVar0, Local_2026.f_4.f_1, iVar6) };
	if (!func_169(iVar6, vVar2, 20f, -1743346773, &bVar5))
	{
		if (bVar5)
		{
			func_63(&Local_17, 2097152);
			func_63(&Local_17, 524288);
			func_27(&Local_17, 7);
			if (!func_33(2097152))
			{
				func_170(Local_17.f_316, Local_2026.f_2, 0);
			}
			return 0;
		}
	}
	else
	{
		Local_17.f_337.f_6++;
		Local_17.f_337.f_5 = 0;
	}
	return 0;
}

void func_53(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<5> Var12;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (func_45(uParam2) != 8)
	{
		return;
	}
	if (func_55(uParam0, 1))
	{
		return;
	}
	if (STREAMING::IS_MODEL_VALID(func_171()) && !func_172(func_171()))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_140(&Var1);
		if (!func_173(&Local_2026, &Var1, iVar0) || !func_142(Var1))
		{
		}
		else
		{
			iVar6 = func_174(uParam2, iVar0);
			if (!STREAMING::IS_MODEL_VALID(iVar6))
			{
			}
			else if (func_172(iVar6))
			{
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar9 = func_175();
	iVar7 = 0;
	while (iVar7 < iVar9)
	{
		func_140(&Var12);
		if (!func_176(&Var12, iVar7) || !func_142(Var12))
		{
		}
		else if (!func_177(Var12, 1339124518, &iVar8, 0))
		{
		}
		else
		{
			if (!func_178(Var12, 873236619, &bVar11, 0) || !bVar11)
			{
				iVar6 = iVar8;
				if (!STREAMING::IS_MODEL_VALID(iVar6))
				{
				}
				else if (func_172(iVar6))
				{
				}
				else
				{
					Jump @314; //curOff = 288
					iVar10 = iVar8;
					PROPSET::_REQUEST_PROPSET_2(iVar10);
					if (PROPSET::_HAS_PROPSET_LOADED_2(iVar10))
					{
					}
					else
					{
						return;
					}
				}
				iVar7++;
				iVar17 = 0;
				while (iVar17 < uParam2->f_10.f_8)
				{
					func_140(&Var1);
					if (!func_141(&Local_2026, &Var1, iVar7) || !func_142(Var1))
					{
					}
					else
					{
						iVar6 = func_179(uParam2, iVar17);
						if (!STREAMING::IS_MODEL_VALID(iVar6))
						{
							iVar6 = func_180(&(uParam2->f_45[iVar17 /*6*/]));
						}
						if ((func_172(iVar6) && func_172(func_181(&(uParam2->f_45[iVar17 /*6*/])))) && func_183(func_182(&Local_2026, iVar17)))
						{
						}
						else
						{
							return;
						}
					}
					iVar17++;
				}
				if (uParam2->f_10.f_14 > 0)
				{
					if (!func_172(func_184()))
					{
						return;
					}
				}
				iVar18 = func_185();
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar18);
				if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0) < iVar18)
				{
					func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
					func_63(&Local_17, 2097152);
					func_63(&Local_17, 524288);
					func_27(&Local_17, 7);
					if (!func_33(2097152))
					{
						func_170(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				iVar19 = func_186();
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar19);
				if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < iVar19)
				{
					func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
					func_63(&Local_17, 2097152);
					func_63(&Local_17, 524288);
					func_27(&Local_17, 7);
					if (!func_33(2097152))
					{
						func_170(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				iVar20 = func_187();
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar20);
				if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar20)
				{
					func_39((*uParam1)[Local_2026.f_634 /*52*/], 16);
					func_63(&Local_17, 2097152);
					func_63(&Local_17, 524288);
					func_27(&Local_17, 7);
					if (!func_33(2097152))
					{
						func_170(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				func_188();
				func_63(uParam0, 1);
			}
		}
	}

int func_54(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (func_113(((*uParam0)[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_55(var uParam0, int iParam1)
{
	return func_113(uParam0->f_1, iParam1);
}

void func_56(var uParam0)
{
	uParam0->f_317 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 8);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
	if (!func_189())
	{
		return;
	}
	if (!func_55(uParam0, 2))
	{
		if (!func_190(uParam0, uParam2))
		{
			return;
		}
		func_63(uParam0, 2);
	}
	if (func_55(uParam0, 4))
	{
		return;
	}
	if (!func_191(uParam0, uParam2))
	{
		return;
	}
	if (!func_192(uParam0))
	{
		return;
	}
	func_63(uParam0, 4);
}

void func_58(var uParam0, int iParam1, bool bParam2)
{
	func_193(uParam0, iParam1, bParam2);
	func_194(uParam0, iParam1, bParam2);
	func_195(uParam0, iParam1, bParam2);
	func_196(uParam0, iParam1, bParam2);
	func_197();
	func_198(uParam0, iParam1, bParam2);
	func_199();
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_113(((*iParam0)[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (bParam2 && !_NAMESPACE26::_NETWORK_IS_IN_MY_GANG(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_60(var uParam0)
{
	if (func_55(uParam0, 32768))
	{
		return;
	}
	uParam0->f_319 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 32768);
}

int func_61(var uParam0, int iParam1, bool bParam2)
{
	if (func_55(&Local_17, 67108864))
	{
		return 1;
	}
	if (func_55(&Local_17, 524288))
	{
		return 1;
	}
	switch (func_200(bParam2))
	{
		case -19759302:
			if (func_55(uParam0, 4096))
			{
				return 1;
			}
			if (func_55(uParam0, 1024))
			{
				return 1;
			}
			break;
		case -409129282:
			if (func_55(uParam0, 16384))
			{
				return 1;
			}
			break;
	}
	return func_201(uParam0, bParam2);
}

int func_62()
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_17, 67108864))
	{
		return 0;
	}
	if (func_55(&Local_17, 524288))
	{
		return 0;
	}
	if (Local_2026.f_10 == -19759302)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (func_202(iVar0, &Local_17, 32) || func_202(iVar0, &Local_17, 67108864))
			{
			}
			else
			{
				return 0;
			}
			iVar0++;
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!func_203(iVar1, &Local_17, 128))
			{
			}
			else if ((func_203(iVar1, &Local_17, 2) || func_203(iVar1, &Local_17, 16)) || func_203(iVar1, &Local_17, 4096))
			{
			}
			else
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_63(var uParam0, int iParam1)
{
	func_122(&(uParam0->f_1), iParam1);
}

void func_64(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_55(uParam0, 524288))
	{
		return;
	}
	func_63(uParam0, 524288);
	if (func_201(uParam0, bParam2))
	{
		func_63(&Local_17, 64);
	}
	iVar0 = func_204(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 1048576);
			break;
		case 2:
			func_63(uParam0, 2097152);
			break;
	}
	iVar0 = func_205(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 4194304);
			break;
		case 2:
			func_63(uParam0, 8388608);
			break;
	}
}

void func_65(var uParam0)
{
	if (func_55(uParam0, 32))
	{
		return;
	}
	uParam0->f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 32);
}

bool func_66(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32))
	{
		return false;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_318, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 8000;
}

void func_67(var uParam0, int iParam1, bool bParam2)
{
}

void func_68(var uParam0, int iParam1, bool bParam2)
{
}

void func_69(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar15;
	struct<2> Var19;
	struct<2> Var32;

	iVar0 = func_206();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_207(iVar1, bParam0);
		iVar1++;
	}
	if (bParam0)
	{
		func_126(67108864);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Local_2026.f_635)
		{
			func_208();
			iVar2++;
		}
		Local_2026.f_635 = 0;
		bVar3 = (func_33(1) && !func_33(8192));
		func_209(&iVar4, &iVar5);
		if (func_33(8192) && func_33(1))
		{
			iVar7 = PLAYER::PLAYER_ID();
			iVar8 = _NAMESPACE26::NETWORK_GET_GANG_ID(iVar7);
			iVar9 = (Local_361[Local_2026.f_634 /*52*/])->f_48;
			if (((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar8) && _NAMESPACE26::_0x0F99F6436528A089(iVar8)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar8))) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar8)))
			{
				iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar8));
				if ((Local_361[iVar10 /*52*/])->f_48 != -1)
				{
					iVar9 = (Local_361[iVar10 /*52*/])->f_48;
				}
			}
			if (iVar9 != -1)
			{
				iVar6 = func_210(iVar9);
			}
		}
		else
		{
			iVar6 = func_211(&Local_17);
		}
		Var19.f_1 = 11;
		Var32.f_1 = 11;
		func_213(&uVar11, &uVar15, &Var19, &Var32, -1516819610, joaat("pvp"), func_212(255), bVar3, 1, iVar4, iVar5, iVar6, Local_2026.f_2);
		func_214(67108864);
	}
}

void func_70()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			func_215(iVar0);
		}
		iVar0++;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar0 /*12*/]));
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1) == 0)
			{
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1));
			}
		}
		iVar0++;
	}
	func_216(Local_2026.f_10.f_16);
	func_216(Local_2026.f_10.f_17);
	func_216(Local_2026.f_10.f_18);
	func_216(Local_2026.f_10.f_15);
}

void func_72(bool bParam0)
{
	if (func_33(16777216) && !bParam0)
	{
		func_217(1);
		func_214(16777216);
	}
	else if (!func_33(16777216) && bParam0)
	{
		func_217(0);
		func_126(16777216);
	}
}

void func_73()
{
	if (!func_33(262144))
	{
		return;
	}
	func_218(Local_2026.f_2, 0);
	if (!func_219(PLAYER::PLAYER_ID()))
	{
		func_214(262144);
	}
}

void func_74()
{
	if (!func_33(524288))
	{
		return;
	}
	func_220(Local_2026.f_2, 0);
	if (!func_221(PLAYER::PLAYER_ID()))
	{
		func_214(524288);
	}
}

void func_75()
{
	if (!func_33(268435456))
	{
		return;
	}
	func_222(4);
	func_214(268435456);
}

void func_76(bool bParam0)
{
	if (func_33(32768) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_223(1);
		func_126(32768);
	}
	else
	{
		func_223(0);
		func_214(32768);
	}
}

void func_77(bool bParam0)
{
	if (func_33(131072) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_0x009CF9A29972C298(454742288);
		func_126(131072);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		func_214(131072);
	}
}

void func_78(var uParam0, int iParam1)
{
	if (func_224(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_79(int iParam0)
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(&(Local_2026.f_202.f_319[iParam0])))
	{
		return;
	}
	HUD::REMOVE_MP_GAMER_TAG(Local_2026.f_202.f_319[iParam0]);
}

bool func_80(int iParam0, int iParam1)
{
	return func_113(&(Local_2026.f_166[iParam0]), iParam1);
}

int func_81(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		return 0;
	}
	*uParam1 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		if (!func_33(4194304))
		{
			func_225(1, 1);
			func_126(4194304);
		}
	}
	else if (func_33(4194304))
	{
		func_226(1, 1, 0);
		func_214(4194304);
	}
}

void func_83()
{
	char* sVar0;

	if (!func_33(8388608))
	{
		return;
	}
	sVar0 = func_227();
	CAM::_0x2412216FCC7B4E3E(sVar0);
	func_214(8388608);
}

void func_84(bool bParam0)
{
	if (func_228(1048576) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_132(1048576);
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		func_229(1048576);
		HUD::_DISABLE_HUD_CONTEXT(-1679307491);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, false);
		}
		if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_560, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_214(8);
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		CAM::SET_CAM_ACTIVE(Local_2026.f_560, true);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_126(8);
}

void func_86(bool bParam0)
{
	if (func_33(32) == !bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, 0);
	func_230(bParam0);
	if (bParam0)
	{
		func_214(32);
	}
	else
	{
		func_126(32);
	}
}

void func_87(bool bParam0)
{
	if (func_33(64) == bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
	if (bParam0)
	{
		func_126(64);
	}
	else
	{
		func_214(64);
	}
}

void func_88(bool bParam0, int iParam1)
{
	if (func_33(16) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_126(16);
		if (CAM::IS_SCREEN_FADING_OUT())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	else
	{
		func_214(16);
		if (CAM::IS_SCREEN_FADING_IN())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
}

void func_89()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_231(iVar0, 1);
		STREAMING::REMOVE_ANIM_DICT(func_232(iVar1));
		iVar0++;
	}
}

void func_90()
{
	if (!func_33(4))
	{
		return;
	}
	func_233(0);
	func_214(4);
}

void func_91(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_92(int iParam0, int iParam1)
{
	return func_113(&(Local_2026.f_29[iParam0 /*5*/]), iParam1);
}

void func_93(var uParam0)
{
	if (!func_234(*uParam0))
	{
		return;
	}
	GRAPHICS::DESTROY_TRACKED_POINT(*uParam0);
	*uParam0 = -1;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_95()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_17.f_337.f_6)
	{
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(&(Local_17.f_337[iVar0])))
		{
			VOLUME::RELEASE_LOCK_VOLUME(&(Local_17.f_337[iVar0]));
		}
		iVar0++;
	}
}

bool func_96(int iParam0, int iParam1)
{
	return func_113((Local_17.f_278[iParam0 /*2*/])->f_1, iParam1);
}

void func_97(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(uParam0->f_257[iVar0 /*5*/]));
			GRAPHICS::_0x7DFB49BCDB73089A(iVar1, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
}

void func_98(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam1->f_10.f_7)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar0 /*4*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar0 /*4*/]));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar1, 2, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
}

void func_99(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 == 0)
		{
		}
		else
		{
			func_235(iVar0);
		}
		iVar0++;
	}
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<5> Var3;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;

	if (!DATAFILE::_0x7907969497EA92F5(Local_2026.f_4) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_2026.f_4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10.f_7)
	{
		func_236(func_174(uParam0, iVar0));
		iVar0++;
	}
	func_236(func_171());
	iVar1 = 0;
	while (iVar1 < uParam0->f_10.f_8)
	{
		func_140(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar1))
		{
		}
		else if (!func_177(Var3, 1339124518, &bVar2, 0))
		{
		}
		else
		{
			bVar9 = bVar2;
			if (!STREAMING::IS_MODEL_VALID(bVar9))
			{
				bVar9 = func_180(&(uParam0->f_45[iVar1 /*6*/]));
			}
			func_236(bVar9);
			func_236(func_181(&(uParam0->f_45[iVar1 /*6*/])));
			if (!func_177(Var3, 1325183772, &bVar2, 0))
			{
			}
			else if (!func_237(bVar8))
			{
			}
			else
			{
				bVar8 = bVar2;
				func_236(WEAPON::_GET_WEAPONTYPE_MODEL(bVar8));
			}
		}
		iVar1++;
	}
	iVar11 = func_175();
	iVar10 = 0;
	while (iVar10 < iVar11)
	{
		func_140(&Var12);
		if (!func_176(&Var12, iVar10))
		{
		}
		else if (!func_177(Var12, 1339124518, &bVar2, 0))
		{
		}
		else
		{
			bVar9 = bVar2;
			if (!STREAMING::IS_MODEL_VALID(bVar9))
			{
			}
			else
			{
				func_236(bVar9);
			}
		}
		iVar10++;
	}
	func_236(func_238());
	func_236(func_239());
	if (uParam0->f_10.f_14 > 0)
	{
		func_236(func_184());
	}
}

char* func_101()
{
	return "NCHU";
}

void func_102(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_240(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_241(iVar1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_242(iVar2);
		iVar2++;
	}
	func_243();
	func_244(&(fParam0->f_202.f_51));
	func_245();
	func_246(fParam0);
	if (func_247(Local_2026.f_202.f_55))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_2026.f_202.f_55, 0);
		Local_2026.f_202.f_55 = 0;
	}
	func_248(&(fParam0->f_202.f_77), 0, 0);
	func_249(&(Local_2026.f_202.f_62), 1);
}

void func_103()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_33(1))
	{
		func_250(0);
		func_251(0);
		if (!func_33(2))
		{
			func_253(func_252(), 1);
		}
		func_209(&bVar0, &bVar1);
		bVar2 = func_33(8192);
		if (!func_33(134217728) && !func_55(&Local_17, 524288))
		{
			func_254(bVar2);
		}
		else if (bVar0 > 0)
		{
			func_255(bVar2, bVar0 != bVar1);
		}
		else
		{
			func_256(bVar2);
		}
		if (func_33(2))
		{
			func_257(Local_2026.f_2, func_33(8192), bVar0, bVar1);
		}
		return;
	}
	(Local_361[Local_2026.f_634 /*52*/])->f_48 = -1;
	func_254(0);
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(uParam0->f_257[iVar0 /*5*/]));
			TASK::_0xA21AA2F0C2180125(iVar1, 0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_257[iVar0 /*5*/])))
			{
			}
			else
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, false);
			}
		}
		iVar0++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!func_258(2, 255) || func_258(512, 255))
	{
		return;
	}
	func_83();
	func_259();
	if (func_258(1, 255))
	{
		func_85(0);
		func_86(1);
		func_87(0);
		func_84(0);
		func_88(0, 1000);
		func_260(iParam0);
		AUDIO::_0x9428447DED71FC7E("RDRO_Scripted_Cutscene_Scenes");
		func_261();
		NETWORK::_0x4B05B97BA46F419D(1);
	}
	func_262(512);
}

int func_106(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_263(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_107()
{
	return Global_1103536->f_5569.f_492;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1103536->f_5569.f_351[iVar0 /*2*/])
	{
		return func_108(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1103536->f_5569.f_351[iVar0 /*2*/])
	{
		return func_108(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_109(int iParam0)
{
	return (Global_1103536->f_5569.f_351[iParam0 /*2*/])->f_1;
}

int func_110(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_264(iParam0))
	{
		return 0;
	}
	iVar0 = func_265(iParam0);
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return 0;
	}
	*uParam1 = iVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
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

int func_112(int iParam0)
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

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (&uParam1->f_3[*uParam2 /*4*/] != iVar0)
		{
		}
		else
		{
			return 1;
		}
		*uParam2++;
	}
	return 0;
}

void func_115(var uParam0, var uParam1)
{
	if (func_41(uParam0, 2))
	{
		return;
	}
	func_267(6, uParam1->f_10.f_15, func_266(), 1);
	func_39(uParam0, 2);
}

int func_116(bool bParam0, bool bParam1)
{
	if ((!bParam1 && !func_41(Local_361[Local_2026.f_634 /*52*/], 262144)) && !func_41(Local_361[Local_2026.f_634 /*52*/], 524288))
	{
		return 1;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 2) && !bParam0)
	{
		return 0;
	}
	return 1;
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (iParam0 == func_268(iVar0))
	{
		return 1;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iParam0 == func_268(iVar1))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return 0;
	}
	iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iParam0 == func_268(iVar2))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return 0;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return 0;
	}
	*iParam2 = 0;
	while (*iParam2 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[*iParam2 /*12*/])))
		{
		}
		else if (&uParam1->f_16[*iParam2 /*12*/] != iVar1)
		{
			iVar2 = NETWORK::NET_TO_PED(&(uParam1->f_16[*iParam2 /*12*/]));
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_ON_MOUNT(iVar2)) && PED::GET_MOUNT(iVar2) == iVar0)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		*iParam2++;
	}
	return 0;
}

void func_119(int iParam0)
{
	var uVar0;

	if (!func_33(1))
	{
		return;
	}
	BOUNTY::_0x188B748861B5BA17(&uVar0, -493957506, 0);
	func_269(477974086, 1, 0);
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	bool bVar8;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Local_2026 != Var0.f_5)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 2:
		case 3:
			if (func_200(uParam3) == -409129282)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 32) && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 64))
			{
				return;
			}
			if (Var0.f_4 == 3)
			{
				func_132(1024);
			}
			else
			{
				func_132(512);
			}
			break;
		case 4:
		case 5:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID())
			{
				func_39(Local_361[Local_2026.f_634 /*52*/], 4194304);
				AUDIO::PLAY_SOUND(func_270(), func_271(), false, 0, true, 0);
			}
			if (uParam3->f_10 == -19759302)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (uParam3->f_10 == -409129282)
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if (Var0.f_6 == 255)
			{
				return;
			}
			if (Local_2026.f_10 == -19759302)
			{
				if (func_272(Var0.f_7, 8388608) && !func_272(Var0.f_7, 16777216))
				{
					return;
				}
			}
			else if (Local_2026.f_10 == -409129282)
			{
				if (func_80(Var0.f_7, 16) && !func_80(Var0.f_7, 32))
				{
					return;
				}
			}
			if ((func_228(16384) || func_228(4096)) || func_228(8192))
			{
				return;
			}
			if (!func_33(1))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || _NAMESPACE26::_0x3F59FE6F37869576(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				func_132(8192);
			}
			else
			{
				func_132(4096);
			}
			Local_2026.f_202.f_52 = Var0.f_6;
			break;
		case 8:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (uParam3->f_10 == -19759302)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (uParam3->f_10 == -409129282)
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if ((Var0.f_6 == 255 || !NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_6)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || _NAMESPACE26::_0x3F59FE6F37869576(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				bVar8 = true;
				if (Local_2026.f_10 == -19759302)
				{
					func_273(Var0.f_7, 16777216);
				}
				else if (Local_2026.f_10 == -409129282)
				{
					func_274(Var0.f_7, 32);
				}
			}
			if (Local_2026.f_10 == -19759302)
			{
				func_273(Var0.f_7, 8388608);
			}
			else if (Local_2026.f_10 == -409129282)
			{
				func_274(Var0.f_7, 16);
			}
			if (bVar8)
			{
				return;
			}
			func_129(Var0.f_7, 0);
			if ((func_228(16384) || func_228(4096)) || func_228(8192))
			{
				return;
			}
			func_132(4096);
			Local_2026.f_202.f_52 = Var0.f_6;
			break;
		case 1:
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41((*uParam2)[Local_2026.f_634 /*52*/], 32) && !func_41((*uParam2)[Local_2026.f_634 /*52*/], 64))
			{
				return;
			}
			func_132(2048);
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return;
			}
			if (func_200(uParam3) != -409129282)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (!func_202(Var0.f_7, uParam1, 1))
			{
				return;
			}
			if (func_202(Var0.f_7, uParam1, 2))
			{
				return;
			}
			func_275(Var0.f_7, uParam1, 2);
			break;
		case 7:
			if (Var0.f_6 == 255 || Var0.f_6 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if ((func_228(16384) || func_228(4096)) || func_228(8192))
			{
				return;
			}
			Local_2026.f_202.f_52 = Var0.f_6;
			func_132(16384);
			break;
	}
}

int func_121(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[*uParam2 /*4*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(&(uParam1->f_3[*uParam2 /*4*/]));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar1) != iVar0)
					{
					}
					else
					{
						return 1;
					}
					iVar1++;
				}
			}
		}
		*uParam2++;
	}
	return 0;
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	return 1;
}

void func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar2 == iVar1)
			{
			}
			else
			{
				NETWORK::_0x157D8F3DE12B307F(iVar1, 0);
			}
		}
		iVar0++;
	}
}

int func_125(int iParam0)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_277(iVar0, 2);
}

void func_126(int iParam0)
{
	func_122(&(Local_2026.f_7), iParam0);
}

void func_127()
{
	func_278(512);
}

int func_128(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return func_202(iParam0, &Local_17, 32);
		case -409129282:
			return func_203(iParam0, &Local_17, 2);
		default:
			break;
	}
	return 0;
}

void func_129(int iParam0, bool bParam1)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			func_279(iParam0, bParam1);
			break;
		case -19759302:
			func_280(iParam0, bParam1);
			break;
		default:
			return;
	}
}

void func_130(var uParam0)
{
	func_281("REL_CHU_ALLY_", &(uParam0->f_10.f_17));
	func_281("REL_CHU_ENEMY_", &(uParam0->f_10.f_16));
	func_281("REL_CHU_PRIMARY_", &(uParam0->f_10.f_15));
	func_281("REL_CHU_KIDNAP_", &(uParam0->f_10.f_18));
	func_267(4, uParam0->f_10.f_15, func_266(), 1);
	func_267(2, uParam0->f_10.f_18, func_266(), 1);
	func_267(2, uParam0->f_10.f_15, -767591988, 1);
	func_267(2, uParam0->f_10.f_15, 1986610512, 1);
	func_267(2, uParam0->f_10.f_15, -989642646, 1);
	func_267(2, uParam0->f_10.f_15, 889541022, 1);
	func_267(2, uParam0->f_10.f_15, -319516747, 1);
	func_267(1, uParam0->f_10.f_15, -1976316465, 1);
	func_267(1, uParam0->f_10.f_15, 841021282, 1);
	func_267(2, uParam0->f_10.f_15, 707888648, 1);
	func_267(2, uParam0->f_10.f_17, 707888648, 1);
	func_267(2, uParam0->f_10.f_16, 707888648, 1);
	func_267(2, uParam0->f_10.f_17, func_266(), 1);
	func_267(2, uParam0->f_10.f_16, func_266(), 1);
}

int func_131()
{
	int iVar0;

	iVar0 = func_282(Local_2026.f_10.f_1, 0);
	if (iVar0 <= 3)
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0)
{
	func_122(&(Local_2026.f_8), iParam0);
}

void func_133(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	uParam0->f_6 = iParam1;
}

int func_134()
{
	return 1008537084;
}

int func_135(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_13(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

int func_136(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!HUD::_DOES_TEXT_BLOCK_EXIST(sParam0))
	{
		iVar0 = 0;
		return 0;
	}
	bVar1 = false;
	while ((HUD::TEXT_BLOCK_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!HUD::TEXT_BLOCK_IS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_283(iVar0, 1);
		func_285(&(uParam0->f_4), iVar1, func_284(iVar1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_286(iVar0, 1);
		func_285(&(uParam0->f_4), iVar2, func_287(iVar2));
		iVar0++;
	}
}

void func_138(var uParam0)
{
	struct<5> Var0;
	bool bVar5;

	uParam0->f_10.f_6 = func_288(uParam0);
	uParam0->f_10.f_2 = { func_289(uParam0) };
	uParam0->f_10.f_7 = func_290(uParam0);
	uParam0->f_10.f_8 = func_291(uParam0);
	uParam0->f_10.f_9 = 0;
	uParam0->f_10.f_5 = func_292(1503734359);
	if ((func_293(uParam0, &Var0) && func_178(Var0, 1594022734, &bVar5, 0)) && bVar5)
	{
		func_126(256);
	}
	if (func_294())
	{
		func_126(16384);
	}
	if (func_295())
	{
		func_126(65536);
	}
	if (func_296())
	{
		func_126(1048576);
	}
}

void func_139(int iParam0, var uParam1)
{
	(uParam1->f_29[iParam0 /*5*/])->f_1 = { func_297(uParam1, iParam0) };
	if (func_298(uParam1, iParam0))
	{
		func_122(uParam1->f_29[iParam0 /*5*/], 2);
	}
	if (func_299(uParam1, iParam0))
	{
		func_122(uParam1->f_29[iParam0 /*5*/], 4);
	}
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
}

int func_141(var uParam0, var uParam1, int iParam2)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -788131562;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_142(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (func_300(Param0, -507939340, &iVar0, 0) && Local_17.f_315 < iVar0)
	{
		return 0;
	}
	if (func_300(Param0, 1146320435, &iVar1, 0) && Local_17.f_315 > iVar1)
	{
		return 0;
	}
	return 1;
}

void func_143(int iParam0, var uParam1)
{
	struct<5> Var0;

	(uParam1->f_45[iParam0 /*6*/])->f_1 = 0;
	uParam1->f_45[iParam0 /*6*/] = func_301(uParam1, iParam0);
	(uParam1->f_45[iParam0 /*6*/])->f_2 = { func_302(uParam1, iParam0) };
	(uParam1->f_45[iParam0 /*6*/])->f_5 = func_303(uParam1, iParam0);
	if (func_304(uParam1, iParam0))
	{
		func_273(iParam0, 1);
	}
	if (&uParam1->f_45[iParam0 /*6*/] == 280775267)
	{
		func_273(iParam0, 8);
		uParam1->f_45[iParam0 /*6*/] = 1566032419;
	}
	if (&uParam1->f_45[iParam0 /*6*/] != 1566032419 && func_33(256))
	{
		func_273(iParam0, 8192);
	}
	else if (&uParam1->f_45[iParam0 /*6*/] == 824585797 || &uParam1->f_45[iParam0 /*6*/] == joaat("driver"))
	{
		func_273(iParam0, 8192);
	}
	if (func_305(iParam0, 1323038251, 0))
	{
		func_273(iParam0, 2);
		uParam1->f_10.f_9++;
	}
	if (((func_306(uParam1, iParam0) && uParam1->f_10.f_14 < 4) && func_141(&Local_2026, &Var0, iParam0)) && func_142(Var0))
	{
		func_273(iParam0, 4);
	}
	func_307(iParam0, -760151658, 16, 0);
	func_307(iParam0, 587406518, 65536, 0);
	func_307(iParam0, 45657025, 32768, 0);
	func_307(iParam0, -697657725, 33554432, 0);
}

void func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_308(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = func_309(uParam0, iVar1, &bVar2);
		if (!VOLUME::DOES_VOLUME_EXIST(iVar3))
		{
		}
		else if (bVar2)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_620))
			{
				uParam0->f_620 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_620))
				{
				}
				else
				{
					VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(uParam0->f_620, iVar3);
					Jump @166; //curOff = 114
					if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_619))
					{
						uParam0->f_619 = VOLUME::_CREATE_VOLUME_AGGREGATE();
						if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_619))
						{
						}
						else
						{
							VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(uParam0->f_619, iVar3);
						}
						iVar1++;
					}
				}
			}
		}
	}

void func_145()
{
	vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2026.f_619) };
		Local_2026.f_625 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_PRIMARY");
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2026.f_620))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2026.f_620) };
		Local_2026.f_626 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_SECONDARY");
	}
}

void func_146()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	bool bVar11;
	vector3 vVar12;

	fVar0 = 50f;
	fVar1 = 50f;
	fVar2 = 100f;
	fVar3 = 100f;
	iVar4 = func_308(&Local_2026);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		if (!func_310(&Local_2026, &Var6, iVar5))
		{
		}
		else
		{
			bVar11 = false;
			if (func_178(Var6, 1419063592, &bVar11, 0) && bVar11)
			{
				func_311(Var6, -880340422, &fVar1, 0);
				func_311(Var6, 902857663, &fVar3, 0);
			}
			else
			{
				func_311(Var6, -880340422, &fVar0, 0);
				func_311(Var6, 902857663, &fVar2, 0);
			}
		}
		iVar5++;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		vVar12 = { VOLUME::GET_VOLUME_COORDS(Local_2026.f_619) };
		Local_2026.f_627 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar0, fVar0, fVar0, "AVOID_VOL_PRIMARY");
		Local_2026.f_627.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar2, fVar2, fVar2, "AVOID_LAW_VOL_PRIMARY");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2026.f_627, 12288, 0, 0, -1, -1, 16);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2026.f_627.f_2, 16384, 0, 0, -1, -1, 16);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2026.f_620))
	{
		vVar12 = { VOLUME::GET_VOLUME_COORDS(Local_2026.f_620) };
		Local_2026.f_627.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar1, fVar1, fVar1, "AVOID_VOL_SECONDARY");
		Local_2026.f_627.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar3, fVar3, fVar3, "AVOID_LAW_VOL_SECONDARY");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2026.f_627.f_1, 12288, 0, 0, -1, -1, 16);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2026.f_627.f_3, 16384, 0, 0, -1, -1, 16);
	}
}

void func_147(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (_NAMESPACE26::NETWORK_GET_GANG_ID(iVar2) != uParam1->f_316)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		iVar1++;
	}
	uParam0->f_561 = uVar0;
	uParam0->f_561.f_52 = { Local_2026.f_2 };
	uParam0->f_561.f_54 = func_312(uParam0);
}

void func_148()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	float fVar11;
	struct<5> Var12;

	if (!func_293(&Local_2026, &Var1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Var12 = { Var1 };
		if (!func_313(&Var12, 565295571, iVar0, 0))
		{
		}
		else if (!func_177(Var12, -537439784, &iVar7, 0))
		{
		}
		else
		{
			switch (iVar7)
			{
				case joaat("cull"):
					iVar6 = 1;
					break;
				case joaat("flatten"):
					iVar6 = 2;
					break;
				case 331632914:
					iVar6 = 4;
					break;
				case 1152024837:
					iVar6 = 8;
					break;
				case joaat("push"):
					iVar6 = 16;
					break;
				case joaat("decal"):
					iVar6 = 32;
					break;
				default:
					Jump @241; //curOff = 166
					if (!func_314(Var12, 644136394, &vVar8, 0))
					{
					}
					else if (!func_311(Var12, 1357107565, &fVar11, 0))
					{
					}
					else
					{
						Local_2026.f_189[iVar0] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar8, fVar11, iVar6, -1, 0);
					}
				}
				iVar0++;
			}
		}

int func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_231(iVar0, 1);
		STREAMING::REQUEST_ANIM_DICT(func_232(iVar1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_232(iVar1)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_150()
{
	SCRIPTS::REQUEST_SCRIPT("net_entity_brain");
	return SCRIPTS::HAS_SCRIPT_LOADED("net_entity_brain");
}

void func_151()
{
	int iVar0;
	int iVar1;

	func_315(&(Local_2026.f_174.f_6), 100);
	if ((func_33(1) && !func_33(8192)) && func_33(2))
	{
		func_316(Local_2026.f_2);
	}
	if (Local_2026.f_174.f_6 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_33(1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 == iVar0)
		{
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2026.f_618), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_152(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = Local_2026.f_174.f_1;
	func_315(&(Local_2026.f_174.f_1), 32);
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (func_317(iVar1))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_2026.f_618), iVar0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_2026.f_618), iVar0);
	}
	if (func_318(16384))
	{
		if (Local_2026.f_638 == 0)
		{
			Local_2026.f_638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else
		{
			(Local_361[Local_2026.f_634 /*52*/])->f_47 = func_210(Local_2026.f_638);
			if ((Local_361[Local_2026.f_634 /*52*/])->f_47 > 45000 && !func_41(Local_361[Local_2026.f_634 /*52*/], 2))
			{
				func_39(Local_361[Local_2026.f_634 /*52*/], 2);
			}
		}
	}
	else
	{
		(Local_361[Local_2026.f_634 /*52*/])->f_47 = 0;
		Local_2026.f_638 = 0;
	}
	if (func_319(uParam0, uParam2))
	{
		func_39((*uParam1)[Local_2026.f_634 /*52*/], 8);
	}
	else
	{
		func_320((*uParam1)[Local_2026.f_634 /*52*/], 8);
	}
	bVar2 = func_41((*uParam1)[Local_2026.f_634 /*52*/], 32);
	func_321(Local_2026.f_174.f_3);
	func_322();
	func_323();
	func_324();
	func_325();
	if (func_33(1) && !func_33(2))
	{
		if (func_326())
		{
			func_39(Local_361[Local_2026.f_634 /*52*/], 16777216);
		}
		if (func_41(Local_361[Local_2026.f_634 /*52*/], 16777216) && func_327())
		{
			func_253(func_252(), 0);
		}
	}
	if (!func_55(&Local_17, 16))
	{
		if (func_328(uParam0, uParam2, &iVar3))
		{
			(Local_361[Local_2026.f_634 /*52*/])->f_45 = iVar3;
			if (func_329((Local_17.f_16[iVar3 /*12*/])->f_2))
			{
				if (Local_2026.f_171 != 0)
				{
					Local_2026.f_171.f_1 = (Local_2026.f_171.f_1 + NETWORK::GET_TIME_DIFFERENCE(Local_2026.f_171, NETWORK::GET_NETWORK_TIME_ACCURATE()));
				}
				Local_2026.f_171 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else
			{
				Local_2026.f_171 = 0;
			}
		}
		else
		{
			((*uParam1)[Local_2026.f_634 /*52*/])->f_45 = -1;
			Local_2026.f_171 = 0;
		}
	}
	else
	{
		((*uParam1)[Local_2026.f_634 /*52*/])->f_45 = -1;
		Local_2026.f_171 = 0;
	}
	if (bVar2)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_316) || !_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 16777216))
			{
				func_103();
				func_320((*uParam1)[Local_2026.f_634 /*52*/], 32);
				func_214(1);
				func_43(uParam2, uParam1);
				func_39((*uParam1)[Local_2026.f_634 /*52*/], 8388608);
				if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_316) || !_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_316)) || (_NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(uParam0->f_316) <= 1 && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID())))
				{
					func_126(2048);
				}
				else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
				{
					func_126(4096);
				}
				else
				{
					func_126(512);
				}
			}
		}
	}
	else if (((!func_41((*uParam1)[Local_2026.f_634 /*52*/], 8388608) && !func_55(&Local_17, 536870912)) && !func_33(1)) && !func_55(&Local_17, 524288))
	{
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_316) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			func_330(1);
		}
	}
	func_331();
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 32) && func_332(Local_2026.f_619, Global_36))
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 65536);
		bVar4 = true;
	}
	else
	{
		func_320(Local_361[Local_2026.f_634 /*52*/], 65536);
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 64) && func_332(Local_2026.f_620, Global_36))
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 131072);
		bVar4 = true;
	}
	else
	{
		func_320(Local_361[Local_2026.f_634 /*52*/], 131072);
	}
	if ((bVar4 && func_33(1)) && func_333(255))
	{
		func_72(1);
	}
	else
	{
		func_72(0);
	}
	if (func_33(1) && func_333(255))
	{
		func_334();
	}
	if (func_335(&iVar5))
	{
		func_336(iVar5);
	}
}

void func_153()
{
	if (Local_2026.f_174.f_7 == 0)
	{
		if (func_337())
		{
			func_82(1);
		}
		else
		{
			func_82(0);
		}
	}
	func_315(&(Local_2026.f_174.f_7), 5);
}

void func_154(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	char cVar7[64];
	vector3 vVar15;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;

	bVar0 = !func_41((*uParam1)[Local_2026.f_634 /*52*/], 2);
	iVar1 = uParam2->f_174.f_2;
	func_315(&(uParam2->f_174.f_2), 3);
	iVar3 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar1 /*4*/])))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar1 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!func_92(iVar1, 8))
	{
		VEHICLE::_0xCBF88256E44D5D39(iVar2, 1);
		func_338(iVar1, 8);
	}
	if (!func_92(iVar1, 32) && func_339(iVar1, &Local_17, 1))
	{
		(Local_2026.f_29[iVar1 /*5*/])->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1215290486, iVar2, -1082130432, 90f, 40f, -1082130432, -1082130432, 1127481344, 0, 1, -1, -1);
		func_338(iVar1, 32);
	}
	if ((!func_92(iVar1, 64) && func_339(iVar1, &Local_17, 1)) && func_210((Local_17.f_3[iVar1 /*4*/])->f_2) > 60000)
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
		if (!func_33(1))
		{
		}
		else if (BUILTIN::VDIST(vVar4, Global_36) > 100f)
		{
		}
		func_338(iVar1, 64);
	}
	if (!func_92(iVar1, 16))
	{
		StringCopy(&cVar7, "VEH_DEFENSIVE_VOL_", 64);
		StringIntConCat(&cVar7, iVar1, 64);
		vVar15 = { Vector(1f, 1f, 1f) * Vector(20f, 20f, 20f) };
		Local_2026.f_621[iVar1] = VOLUME::_0x10157BC3247FF3BA(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 0f, 0f, 0f, vVar15, func_340(cVar7));
		PED::_0x7C00CFC48A782DC0(&(Local_2026.f_621[iVar1]), iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_2026.f_621[iVar1])))
		{
			func_338(iVar1, 16);
		}
	}
	if (bVar0 && PED::IS_PED_IN_VEHICLE(iVar3, iVar2, true))
	{
		func_115((*uParam1)[Local_2026.f_634 /*52*/], uParam2);
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
	{
		return;
	}
	if (!VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar2, &uVar19, &iVar18))
	{
		return;
	}
	iVar20 = 0;
	while (iVar20 < iVar18)
	{
		iVar21 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar20);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
		}
		else if (PED::IS_PED_DEAD_OR_DYING(iVar21, true))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
		{
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar21, 294, true);
		}
		iVar20++;
	}
}

void func_155(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	func_341(fParam2->f_174, uParam0, uParam1, fParam2);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_342(iVar0);
		func_343(iVar0);
		func_344(iVar0);
		iVar0++;
	}
	func_315(&(fParam2->f_174), fParam2->f_10.f_8);
}

void func_156()
{
	func_345(Local_2026.f_174.f_4);
	func_315(&(Local_2026.f_174.f_4), 4);
}

void func_157(float fParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = fParam0->f_174.f_3;
	if (!func_123(iVar0, 1, 1))
	{
		func_315(&(fParam0->f_174.f_3), 32);
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_315(&(fParam0->f_174.f_3), 32);
		return;
	}
	func_267(2, fParam0->f_10.f_18, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	if (func_41((*uParam1)[iVar0 /*52*/], 2))
	{
		func_267(6, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	else
	{
		func_267(4, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	func_315(&(fParam0->f_174.f_3), 32);
}

void func_158(float fParam0, var uParam1, var uParam2)
{
	bool bVar0;
	var uVar1;

	if (fParam0->f_561.f_54 == joaat("none"))
	{
		return;
	}
	if (!func_346())
	{
		return;
	}
	if (!func_33(128))
	{
		func_126(128);
	}
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 32))
	{
		return;
	}
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 8388608))
	{
		return;
	}
	Local_2026.f_561.f_1 = Local_2026.f_618;
	func_347(fParam0, uParam1, uParam2, fParam0->f_561.f_55);
	if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 64))
	{
		if (Local_2026.f_631 == 255)
		{
			return;
		}
		if (!func_348(&(fParam0->f_561), Local_2026.f_632))
		{
			return;
		}
		func_103();
		func_320((*uParam1)[Local_2026.f_634 /*52*/], 64);
		func_214(1);
		func_214(8192);
		func_39((*uParam1)[Local_2026.f_634 /*52*/], 8388608);
		func_43(fParam0, uParam1);
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
		{
			func_126(1024);
		}
		else
		{
			func_126(512);
		}
		return;
	}
	if (func_349(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_350(&(fParam0->f_561), &bVar0, &uVar1, 0))
	{
		func_330(2);
		if (!bVar0)
		{
			func_39(Local_361[Local_2026.f_634 /*52*/], 32768);
		}
	}
	else if (func_351(fParam0, uParam1, uParam2))
	{
		func_330(2);
		func_39(Local_361[Local_2026.f_634 /*52*/], 32768);
	}
}

void func_159()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;

	if (Local_17.f_305 != 5)
	{
		func_93(&(Local_2026.f_548));
	}
	if (Local_17.f_305 != 4)
	{
		Local_2026.f_549 = 0;
	}
	switch (Local_17.f_305)
	{
		case 0:
		case 1:
			return;
		case 3:
			func_39(Local_361[Local_2026.f_634 /*52*/], 1024);
			break;
		case 4:
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 2048))
			{
				return;
			}
			if (func_352(Local_17.f_305.f_1, &iVar0))
			{
				iVar1 = PED::_0x79443D56C8DF45EE(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_2026.f_550.f_6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
				}
			}
			if (!func_353(Local_17.f_305.f_2, &(Local_2026.f_550), &bVar2, 42, 1, 90f, 1101004800 /* Float: 20f */, 80f, 120f, 3f))
			{
				if (!bVar2)
				{
					return;
				}
			}
			else
			{
				Local_2026.f_550.f_3.f_2 = (Local_2026.f_550.f_3.f_2 + 10f);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_2026.f_550.f_3, &fVar3, 0) && fVar3 != 0f)
				{
					if (!VOLUME::DOES_VOLUME_EXIST(Local_2026.f_619))
					{
						Local_2026.f_550.f_3.f_2 = fVar3;
						(Local_361[Local_2026.f_634 /*52*/])->f_49 = { Local_2026.f_550.f_3 };
						func_39(Local_361[Local_2026.f_634 /*52*/], 4096);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(Local_2026.f_619), Local_2026.f_550.f_3, true) > 130f || MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(Local_2026.f_620), Local_2026.f_550.f_3, true) > 130f)
					{
						Local_2026.f_550.f_3.f_2 = fVar3;
						(Local_361[Local_2026.f_634 /*52*/])->f_49 = { Local_2026.f_550.f_3 };
						func_39(Local_361[Local_2026.f_634 /*52*/], 4096);
					}
				}
			}
			if (!func_41(Local_361[Local_2026.f_634 /*52*/], 4096) && Local_2026.f_549 < 2)
			{
				func_94(&(Local_2026.f_550), 1, 0);
				Local_2026.f_549++;
				return;
			}
			func_39(Local_361[Local_2026.f_634 /*52*/], 2048);
			break;
		case 5:
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 8192))
			{
				return;
			}
			if (!func_354(Local_17.f_305.f_2, &bVar4))
			{
				return;
			}
			if (bVar4)
			{
				func_39(Local_361[Local_2026.f_634 /*52*/], 16384);
			}
			func_39(Local_361[Local_2026.f_634 /*52*/], 8192);
			break;
		case 6:
			break;
		case 2:
			if (!func_41(Local_361[Local_2026.f_634 /*52*/], 1024))
			{
				return;
			}
			func_94(&(Local_2026.f_550), 1, 0);
			func_320(Local_361[Local_2026.f_634 /*52*/], 1024);
			func_320(Local_361[Local_2026.f_634 /*52*/], 2048);
			func_320(Local_361[Local_2026.f_634 /*52*/], 4096);
			func_320(Local_361[Local_2026.f_634 /*52*/], 8192);
			func_320(Local_361[Local_2026.f_634 /*52*/], 16384);
			break;
	}
}

void func_160()
{
	int iVar0;
	bool bVar1;
	struct<30> Var2;
	struct<9> Var32;

	if (func_355(&iVar0, &bVar1))
	{
		func_356(1);
	}
	else
	{
		func_356(0);
	}
	if ((func_33(4) && func_357(255)) && func_358(255))
	{
		func_359(&Var2, &Var32, iVar0, bVar1);
		func_360(Var2, Var32, 1, 1, 1);
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;

	if (func_41(Local_361[Local_2026.f_634 /*52*/], 2097152))
	{
		if (func_33(67108864) && func_258(512, 255))
		{
			func_69(0);
		}
		return;
	}
	iVar0 = func_361();
	func_207(iVar0, func_55(&Local_17, 524288));
	if (!func_33(1))
	{
		return;
	}
	if (!func_55(&Local_17, 524288) && !func_33(134217728))
	{
		return;
	}
	if (func_362())
	{
		return;
	}
	iVar1 = func_363(255);
	if (Local_17.f_299 != 0 && iVar1 != 3)
	{
		if (iVar1 == 0)
		{
			return;
		}
		if (func_258(1, 255) && iVar1 == 1)
		{
			return;
		}
	}
	bVar2 = func_258(1, 255);
	func_69(bVar2);
	func_209(&iVar3, &uVar4);
	if (iVar3 > 0)
	{
		func_364(func_258(1, 255));
	}
	func_39(Local_361[Local_2026.f_634 /*52*/], 2097152);
}

void func_162()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_33(1);
	if ((((bVar0 && !func_33(8192)) && func_33(16384)) && !func_55(&Local_17, 512)) && !func_33(33554432))
	{
		if (func_365(0, 0, 0))
		{
			if (Local_2026.f_639 == 0)
			{
				Local_2026.f_639 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_33(32768))
				{
					func_223(1);
				}
			}
			bVar1 = func_33(8192);
			if (((Local_2026.f_639 != 0 && func_210(Local_2026.f_639) < 45000) && !(!bVar1 && func_332(Local_2026.f_627.f_2, Global_36))) && !(bVar1 && func_332(Local_2026.f_627.f_3, Global_36)))
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_2026.f_639 = 0;
		}
	}
	if (bVar0 && !func_33(33554432))
	{
		func_76(1);
	}
	else
	{
		func_76(0);
	}
	if (bVar0 && !func_33(33554432))
	{
		func_77(1);
	}
	else
	{
		func_77(0);
	}
	if ((bVar0 && !func_33(8192)) && Local_2026.f_10.f_5 != 0)
	{
		iVar2 = PLAYER::PLAYER_ID();
		switch (Local_2026.f_10.f_5)
		{
			case 1503734359:
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, -683250308, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, 481893872, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, 2006449383, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, 2140177766, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, 2140177766, 0, 0, -1);
				break;
		}
	}
}

void func_163()
{
	int iVar0;

	if (func_33(1))
	{
		iVar0 = func_252();
		func_366(1, 0);
		switch (Local_17.f_2)
		{
			case 1:
				if (iVar0 == 1 && func_41(Local_361[Local_2026.f_634 /*52*/], 8))
				{
					func_366(2, 0);
				}
				break;
			case 2:
				if (iVar0 == 1)
				{
					if (func_41(Local_361[Local_2026.f_634 /*52*/], 2) || func_41(Local_361[Local_2026.f_634 /*52*/], 8))
					{
						func_366(2, 0);
					}
				}
				break;
			case 3:
			case 4:
			case 5:
				func_366(4, 0);
				break;
		}
		if (func_55(&Local_17, 524288) && func_41(Local_361[Local_2026.f_634 /*52*/], 2097152))
		{
			if (func_367(1) > 0)
			{
				func_366(8, 1);
			}
			else
			{
				func_366(16, 1);
			}
		}
	}
	else
	{
		if ((!func_368(1) || func_368(16)) || func_368(8))
		{
			return;
		}
		func_366(16, 1);
	}
}

void func_164()
{
	func_369();
}

void func_165(var uParam0, var uParam1, float fParam2)
{
	if (func_370())
	{
		func_102(fParam2);
		return;
	}
	func_371(uParam0, uParam1, fParam2);
	func_372(uParam0, uParam1, fParam2);
	func_373(uParam0, uParam1, fParam2);
	func_374(uParam0, uParam1, fParam2);
	func_375();
	func_376();
	func_377(uParam0, uParam1, fParam2);
	func_378();
	func_379(fParam2);
	func_380(uParam0, uParam1, fParam2);
}

var func_166()
{
	return Local_2026.f_10.f_1;
}

int func_167(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_382(func_381(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_383(iParam0, &vVar0, uParam1))
	{
		return 1;
	}
	vVar0.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y) + 1;
}

Vector3 func_168(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_381(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_383(iParam0, &Var3, uParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -733684727;
	Var3.f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &Var3);
	return vVar0;
}

int func_169(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(&(Local_17.f_337[iParam0])))
	{
		return 1;
	}
	if (func_382(vParam1))
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_17.f_337.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, 575122756))
		{
			*uParam6 = 1;
			return 0;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_2026.f_4.f_1;
		Local_17.f_337.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_17.f_337.f_5);
	switch (iVar0)
	{
		case 3:
			Local_17.f_337[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_17.f_337.f_5);
			return 1;
		case 4:
			Local_17.f_337.f_5 = 0;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_170(int iParam0, struct<2> Param1, bool bParam3)
{
	struct<28> Var0;
	var uVar31;

	if (!Global_1901929->f_295.f_23)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iParam0))
	{
		return 0;
	}
	if (!func_28(Param1))
	{
		return 0;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = iParam0;
	Var0.f_4 = 12;
	Var0.f_7 = { Param1 };
	if (bParam3)
	{
		Var0.f_14 |= 2;
	}
	uVar31 = func_384(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_385(&Var0, uVar31);
	Var0.f_4 = 13;
	func_386(&Var0);
	return 1;
}

int func_171()
{
	return -770982987;
}

bool func_172(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_173(var uParam0, var uParam1, int iParam2)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -911220092;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_174(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_173(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1339124518, &iVar5, 0);
	}
	return iVar5;
}

int func_175()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_293(&Local_2026, &Var0) && func_313(&Var0, 2067657977, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 10)
	{
		return 10;
	}
	return iVar5;
}

int func_176(var uParam0, int iParam1)
{
	if (func_293(&Local_2026, uParam0))
	{
		uParam0->f_2 = 2101858238;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

int func_177(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *bParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*bParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_178(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
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

int func_179(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1339124518, &uVar5, 0);
	}
	return uVar5;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return joaat("a_m_m_unicoachguards_01");
		default:
			break;
	}
	return joaat("a_m_m_unicoachguards_01");
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return -1038436471;
		default:
			break;
	}
	return -1038436471;
}

int func_182(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1325183772, &iVar5, 0);
	}
	return iVar5;
}

int func_183(bool bParam0)
{
	if (bParam0 == 0 || bParam0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	if (!func_237(bParam0))
	{
		return 1;
	}
	WEAPON::_0x72D4CB5DB927009C(bParam0, -1, 0);
	if (!WEAPON::_0xFF07CF465F48B830(bParam0))
	{
		return 0;
	}
	return 1;
}

int func_184()
{
	return -2040421904;
}

int func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_290(&Local_2026);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_173(&Local_2026, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_291(&Local_2026);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
			if (!func_387(&Local_2026, iVar0))
			{
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar10;

	iVar2 = func_175();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_176(&Var3, iVar0) || !func_142(Var3))
		{
		}
		else if (func_178(Var3, 873236619, &bVar8, 0) && bVar8)
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar10 = func_291(&Local_2026);
	iVar9 = 0;
	while (iVar9 < iVar10)
	{
		func_140(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar9) || !func_142(Var3))
		{
		}
		else if (!func_306(&Local_2026, iVar9))
		{
		}
		else
		{
			iVar1++;
		}
		iVar9++;
	}
	return iVar1;
}

void func_188()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_2026.f_10.f_8 <= 0)
	{
		return;
	}
	if (!func_388(2, Local_2026.f_4.f_1))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_291(&Local_2026);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (&Local_2026.f_45[iVar2 /*6*/] == 0)
		{
		}
		else
		{
			func_140(&Var5);
			if (!func_141(&Local_2026, &Var5, iVar2))
			{
			}
			else if (!func_178(Var5, -359968085, &bVar10, 0) || !bVar10)
			{
			}
			else
			{
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	func_275(iVar1, &Local_17, 33554432);
}

int func_189()
{
	int iVar0;
	struct<5> Var1;

	if (Local_2026.f_10.f_12 >= func_175())
	{
		return 1;
	}
	iVar0 = Local_2026.f_10.f_12;
	if (func_176(&Var1, iVar0) && !func_142(Var1))
	{
		Local_2026.f_10.f_12++;
		return 0;
	}
	if (!func_389(iVar0))
	{
		return 0;
	}
	Local_2026.f_10.f_12++;
	return 0;
}

int func_190(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	vector3 vVar7;
	var uVar10;
	int iVar11;
	int iVar12;

	if (uParam1->f_10.f_10 >= uParam1->f_10.f_7)
	{
		return 1;
	}
	iVar0 = uParam1->f_10.f_10;
	if (func_173(&Local_2026, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_10++;
		return 0;
	}
	iVar6 = func_174(&Local_2026, iVar0);
	vVar7 = { (uParam1->f_29[iVar0 /*5*/])->f_1 };
	uVar10 = func_390(&Local_2026, iVar0);
	if (iVar6 == 0 || !STREAMING::IS_MODEL_VALID(iVar6))
	{
		uParam1->f_10.f_10++;
		return 0;
	}
	if (func_382(vVar7))
	{
		uParam1->f_10.f_10++;
		return 0;
	}
	if (!func_113(&(uParam1->f_29[iVar0 /*5*/]), 4))
	{
		func_391(&vVar7, 1088421888 /* Float: 7f */);
	}
	if (!func_392(uParam0->f_3[iVar0 /*4*/], iVar6, vVar7, uVar10, 1, 0, 0, 0))
	{
		return 0;
	}
	iVar11 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar0 /*4*/]));
	VEHICLE::SET_VEHICLE_CAN_BREAK(iVar11, true);
	VEHICLE::_0x850CE59DEC2028F3(iVar11, 1);
	VEHICLE::_SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(iVar11, true);
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar11, 3, 1);
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar11, 9, 1);
	if (func_300(Var1, -1668085295, &iVar12, 0))
	{
		VEHICLE::_0xD4F5EFB55769D272(iVar11, iVar12);
	}
	if (func_33(256))
	{
		VEHICLE::_0x87B974E54C71BA7B(iVar11, 1);
		VEHICLE::_0xC4A2C11FC0D41916(iVar11, 1);
		ENTITY::_0x9587913B9E772D29(iVar11, 1);
	}
	if (func_113(&(uParam1->f_29[iVar0 /*5*/]), 2))
	{
		func_393(iVar0, uParam0, 2);
	}
	uParam1->f_10.f_10++;
	return 0;
}

int func_191(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	if (uParam1->f_10.f_11 >= uParam1->f_10.f_8)
	{
		return 1;
	}
	iVar0 = uParam1->f_10.f_11;
	if (func_141(&Local_2026, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_11++;
		return 0;
	}
	if (!func_394(iVar0, uParam0, uParam1))
	{
		return 0;
	}
	func_395();
	(uParam0->f_16[iVar0 /*12*/])->f_2 = &uParam1->f_45[iVar0 /*6*/];
	(uParam0->f_16[iVar0 /*12*/])->f_8 = { (uParam1->f_45[iVar0 /*6*/])->f_2 };
	(uParam0->f_16[iVar0 /*12*/])->f_11 = (uParam1->f_45[iVar0 /*6*/])->f_5;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(&(uParam0->f_16[iVar0 /*12*/]))))
	{
		if (!func_396(iVar0, uParam0, uParam1, 1))
		{
			return 0;
		}
	}
	uParam1->f_10.f_11++;
	return 0;
}

int func_192(var uParam0)
{
	if (uParam0->f_327 >= 20)
	{
		return 1;
	}
	func_397(uParam0->f_327, uParam0);
	uParam0->f_327++;
	return 0;
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	switch (func_200(bParam2))
	{
		case -19759302:
			if ((uParam0->f_16[bParam2->f_174 /*12*/])->f_2 == 1095997463 && !func_398(bParam2->f_174, 1))
			{
				func_399(bParam2->f_174, NETWORK::NET_TO_PED(&(uParam0->f_16[bParam2->f_174 /*12*/])), uParam0);
			}
			break;
	}
	func_400(bParam2->f_174, uParam0, iParam1, bParam2);
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	func_401(bParam2->f_174.f_2, uParam0, iParam1, bParam2);
}

void func_195(var uParam0, int iParam1, bool bParam2)
{
	if (!func_55(&Local_17, 1073741824 /* Float: 2f */) && func_59(iParam1, 32, 0))
	{
		func_63(&Local_17, 1073741824 /* Float: 2f */);
	}
	if (!func_55(&Local_17, 67108864) && func_402(!func_55(&Local_17, 1073741824 /* Float: 2f */)))
	{
		func_63(uParam0, 67108864);
	}
	if (!func_55(uParam0, 16) && func_59(iParam1, 2, 0))
	{
		func_63(uParam0, 16);
	}
	if ((!func_55(&Local_17, 512) && func_403(&Local_17) > 2) && func_59(&Local_361, 64, 0))
	{
		func_63(&Local_17, 512);
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 4096)) || func_55(uParam0, 16384))
	{
		return;
	}
	if (func_55(&Local_17, 134217728) && !func_55(&Local_17, 268435456))
	{
		if (Local_17.f_320 == 0)
		{
			Local_17.f_320 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (func_210(Local_17.f_320) > 60000)
		{
			func_63(&Local_17, 268435456);
		}
	}
	if (func_200(bParam2) == -409129282 && uParam0->f_322 <= 0)
	{
		func_63(uParam0, 16384);
	}
	if ((func_200(bParam2) == -19759302 && !func_404(uParam0, 1095997463)) && !func_55(uParam0, 2048))
	{
		func_63(uParam0, 1024);
	}
	if ((func_200(bParam2) == -19759302 && !func_405(uParam0)) && func_55(uParam0, 2048))
	{
		func_63(uParam0, 4096);
	}
}

void func_196(var uParam0, int iParam1, bool bParam2)
{
	func_406(Local_2026.f_174.f_4, uParam0, bParam2);
}

void func_197()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	switch (Local_17.f_305)
	{
		case 0:
			if (!func_407())
			{
				return;
			}
			func_408();
			func_409(1);
			break;
		case 1:
			if (!func_407())
			{
				func_409(0);
				return;
			}
			if (!func_410())
			{
				return;
			}
			func_63(&Local_17, 128);
			func_409(3);
			break;
		case 3:
			if (!func_54(&Local_361, 1024))
			{
				return;
			}
			if (!func_411(&uVar1, &vVar2))
			{
				switch (Local_2026.f_10)
				{
					case -19759302:
						if (func_412(&Local_17, 1095997463, 262144) && func_413(&Local_17, 1095997463, 262144))
						{
							iVar5 = 0;
							while (iVar5 < 20)
							{
								func_414(iVar5, &Local_17, 262144);
								iVar5++;
							}
							return;
						}
						break;
					case -409129282:
						if (func_415(&Local_17, 1024, 0) && func_416(&Local_17, 1024, 0))
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								func_417(iVar6, &Local_17, 1024);
								iVar6++;
							}
							return;
						}
						break;
				}
				func_409(2);
				return;
			}
			Local_17.f_305.f_1 = uVar1;
			Local_17.f_305.f_2 = { vVar2 };
			func_409(4);
			break;
		case 4:
			if (!func_54(&Local_361, 2048))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(Local_361[iVar0 /*52*/], 4096))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					Local_17.f_305.f_2 = { (Local_361[iVar0 /*52*/])->f_49 };
					func_409(5);
					return;
				}
				iVar0++;
			}
			func_63(&Local_17, 256);
			func_409(2);
			break;
		case 5:
			if (!func_54(&Local_361, 8192))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(Local_361[iVar0 /*52*/], 16384))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					func_63(&Local_17, 256);
					func_409(2);
					return;
				}
				iVar0++;
			}
			func_409(6);
			break;
		case 6:
			if (Local_17.f_305.f_5 >= Local_17.f_305.f_6)
			{
				if (Local_17.f_305.f_1 == -1)
				{
				}
				else
				{
					switch (Local_2026.f_10)
					{
						case -19759302:
							func_275(Local_17.f_305.f_1, &Local_17, 262144);
							if (func_413(&Local_17, 1095997463, 262144))
							{
								iVar7 = 0;
								while (iVar7 < 20)
								{
									func_414(iVar7, &Local_17, 262144);
									iVar7++;
								}
							}
							break;
						case -409129282:
							func_418(Local_17.f_305.f_1, &Local_17, 1024);
							if (func_416(&Local_17, 1024, 0))
							{
								iVar8 = 0;
								while (iVar8 < 4)
								{
									func_417(iVar8, &Local_17, 1024);
									iVar8++;
								}
							}
							break;
					}
				}
				func_419(&Local_17, 256);
				func_409(2);
				return;
			}
			if (!func_420(Local_17.f_305.f_5, Local_17.f_305.f_6, Local_17.f_305.f_2))
			{
				return;
			}
			Local_17.f_305.f_8 = -1;
			Local_17.f_305.f_5++;
			break;
		case 2:
			if (func_59(&Local_361, 1024, 0))
			{
				return;
			}
			Local_17.f_305.f_1 = -1;
			Local_17.f_305.f_2 = { 0f, 0f, 0f };
			Local_17.f_305.f_5 = 0;
			Local_17.f_305.f_6 = 0;
			Local_17.f_305.f_7 = 0;
			Local_17.f_305.f_9 = 0;
			Local_17.f_305.f_8 = -1;
			func_409(0);
			break;
	}
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	switch (func_200(bParam2))
	{
		case -409129282:
			func_421(uParam0, iParam1, bParam2);
			return;
		case -19759302:
			func_422(uParam0, iParam1, bParam2);
			return;
		default:
			break;
	}
}

void func_199()
{
	func_423();
}

int func_200(bool bParam0)
{
	return bParam0->f_10;
}

bool func_201(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32768))
	{
		return false;
	}
	return func_211(uParam0) > bParam1->f_10.f_6;
}

bool func_202(int iParam0, var uParam1, int iParam2)
{
	return func_113((uParam1->f_16[iParam0 /*12*/])->f_4, iParam2);
}

bool func_203(int iParam0, var uParam1, int iParam2)
{
	return func_113((uParam1->f_257[iParam0 /*5*/])->f_1, iParam2);
}

int func_204(var uParam0, bool bParam1)
{
	switch (func_200(bParam1))
	{
		case -19759302:
			if (!func_55(uParam0, 2048))
			{
				return 2;
			}
			if (uParam0->f_325 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case -409129282:
			if (!func_55(uParam0, 8192))
			{
				return 2;
			}
			if (uParam0->f_323 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_205(var uParam0, bool bParam1)
{
	switch (func_200(bParam1))
	{
		case -19759302:
			if (!func_55(uParam0, 131072))
			{
				return 2;
			}
			if (uParam0->f_326 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case -409129282:
			if (!func_55(uParam0, 262144))
			{
				return 2;
			}
			if (uParam0->f_324 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_206()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return 20;
		case -409129282:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_207(int iParam0, bool bParam1)
{
	if (!func_424(iParam0, 0) && func_128(iParam0))
	{
		if (func_425(iParam0))
		{
			func_129(iParam0, 1);
			if (bParam1)
			{
				Local_2026.f_635++;
			}
			else
			{
				func_208();
			}
		}
		else
		{
			func_129(iParam0, 0);
		}
	}
}

void func_208()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	func_426(&Var0, 404851220, func_212(255), func_41(Local_361[Local_2026.f_634 /*52*/], 32));
}

void func_209(bool bParam0, int iParam1)
{
	*bParam0 = 0;
	switch (Local_2026.f_10)
	{
		case -19759302:
			*iParam1 = Local_2026.f_10.f_13;
			break;
		case -409129282:
			*iParam1 = Local_2026.f_10.f_14;
			break;
	}
	*bParam0 = func_367(1);
}

int func_210(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_211(var uParam0)
{
	if (!func_55(&Local_17, 32768))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_319, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_212(int iParam0)
{
	int iVar0;

	iVar0 = func_427(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_428(iVar0);
}

void func_213(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, struct<2> Param12)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam9 == 0)
	{
		return;
	}
	fVar0 = func_429(((BUILTIN::TO_FLOAT(iParam11) / 1000f) / 60f), 0.5f, 30f);
	func_430(iParam2, &iVar1, &bVar2, 0, fVar0);
	func_431(iParam2, &bVar2, 0, iParam4, iParam9, iParam10, bParam7);
	func_432(iParam2, 0, iParam5);
	func_433(iParam2, &bVar2, 0, bParam8);
	func_434(iParam2, 0, Param12);
	func_435(iParam2, 0, iParam6);
	func_436(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_430(iParam3, &iVar1, &bVar2, 1, fVar0);
	func_433(iParam3, &bVar2, 1, bParam8);
	func_431(iParam3, &bVar2, 1, iParam4, iParam9, iParam10, bParam7);
	func_435(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		func_436(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_214(int iParam0)
{
	func_437(&(Local_2026.f_7), iParam0);
}

void func_215(int iParam0)
{
	int iVar0;

	if (!func_272(iParam0, 64))
	{
		return;
	}
	if (func_272(iParam0, 8388608) && func_438(iParam0, &iVar0, 0, 1))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
	}
	func_439(iParam0, 8192);
	func_439(iParam0, 16384);
	func_440(iParam0);
	func_439(iParam0, 64);
	func_439(iParam0, 67108864);
}

void func_216(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_217(bool bParam0)
{
	Global_1903928->f_485[59] = !bParam0;
}

void func_218(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_441(iVar0, 1))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	func_222(1);
}

bool func_219(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1121338)[iParam0 /*54*/])->f_47 & 1 != 0;
}

void func_220(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_441(iVar0, 2))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	func_222(2);
}

bool func_221(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1121338)[iParam0 /*54*/])->f_47 & 2 != 0;
}

void func_222(int iParam0)
{
	((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_47 = (((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_47 - (((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_47 && iParam0));
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_224(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_225(int iParam0, int iParam1)
{
	if (!func_443(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070355->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070355->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_444();
	}
}

void func_226(int iParam0, int iParam1, bool bParam2)
{
	if (func_443(iParam0, iParam1) && (!bParam2 || &(Global_1070355->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070355->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070355->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_444();
	}
}

char* func_227()
{
	return "mp@freemode_cams@gfh_outro_cams";
}

bool func_228(int iParam0)
{
	return func_113(Local_2026.f_8, iParam0);
}

void func_229(int iParam0)
{
	func_437(&(Local_2026.f_8), iParam0);
}

void func_230(bool bParam0)
{
	if (!bParam0)
	{
		func_445(0);
	}
	Global_1939221->f_2 = bParam0;
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1711865203;
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

char* func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "script_common@wave@male@unapproved";
		default:
			break;
	}
	return "";
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		func_446(48);
	}
	else
	{
		func_447(48);
	}
}

int func_234(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		iVar2 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iParam0 /*12*/])->f_5);
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_PED_CAN_RAGDOLL(iVar0, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_RESET_FLAG(iVar0, 36, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
}

void func_236(bool bParam0)
{
	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bParam0);
}

bool func_237(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_238()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = joaat("s_m_m_ambientlawrural_01");
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_449(Var1, 1339124518, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

int func_239()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 2030804811;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_449(Var1, -118004582, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

void func_240(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iParam0])))
	{
		return;
	}
	func_244(Local_2026.f_202[iParam0]);
	func_439(iParam0, 256);
	func_439(iParam0, 512);
	func_439(iParam0, 128);
	func_439(iParam0, 1024);
	func_439(iParam0, 2048);
	func_439(iParam0, 4096);
	if (Local_2026.f_10 == -19759302)
	{
		Local_2026.f_202.f_30[iParam0] = 255;
	}
}

void func_241(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iParam0])))
	{
		return;
	}
	func_244(Local_2026.f_202.f_21[iParam0]);
}

void func_242(int iParam0)
{
	func_244(Local_2026.f_202.f_25[iParam0]);
	func_450(iParam0, 2);
	func_450(iParam0, 4);
	func_450(iParam0, 1);
	func_450(iParam0, 8);
	if (Local_2026.f_10 == -409129282)
	{
		Local_2026.f_202.f_30[iParam0] = 255;
	}
}

void func_243()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_451(iVar0, 0);
		func_452(iVar0, 0);
		iVar0++;
	}
}

void func_244(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_245()
{
	func_244(&(Local_2026.f_202.f_58));
	if (!func_453(Local_2026.f_202.f_59))
	{
		return;
	}
	_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_2026.f_202.f_59, 0);
}

void func_246(float fParam0)
{
	func_229(2097152);
	func_229(4194304);
	Local_2026.f_202.f_53 = 255;
	Local_2026.f_202.f_54 = 0;
	if (!func_454(fParam0))
	{
		return;
	}
	_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(fParam0->f_202.f_56, 0);
	fParam0->f_202.f_56 = 0;
	fParam0->f_202.f_60 = 0;
}

bool func_247(int iParam0)
{
	return iParam0 != 0;
}

void func_248(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if ((uParam0[0 /*34*/] != 0 || bParam2) || (((*uParam0)[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = ((*uParam0)[iVar40 /*34*/])->f_23;
				uVar35 = ((*uParam0)[iVar40 /*34*/])->f_25;
				uVar36 = ((*uParam0)[iVar40 /*34*/])->f_26;
				uVar37 = ((*uParam0)[iVar40 /*34*/])->f_27;
				uVar38 = ((*uParam0)[iVar40 /*34*/])->f_28;
				uVar39 = ((*uParam0)[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY((*uParam0)[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				((*uParam0)[iVar40 /*34*/])->f_23 = uVar34;
				((*uParam0)[iVar40 /*34*/])->f_25 = uVar35;
				((*uParam0)[iVar40 /*34*/])->f_26 = uVar36;
				((*uParam0)[iVar40 /*34*/])->f_27 = uVar37;
				((*uParam0)[iVar40 /*34*/])->f_28 = uVar38;
				((*uParam0)[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_249(int iParam0, bool bParam1)
{
	struct<14> Var0;

	if (iParam0->f_2 > 0)
	{
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(12, 1, 0);
		if (bParam1)
		{
			func_455(iParam0);
			func_456();
		}
		func_457(iParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(iParam0->f_4));
		iParam0->f_9 = 0;
		func_458(0);
		func_459(0);
		_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(iParam0, &Var0, 15);
	}
}

int func_250(bool bParam0)
{
	if (!func_460(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_251(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_461(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_462();
		Global_1900670->f_9 = func_463(Global_1893575->f_2);
		Global_1900670->f_11 = func_464(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_465(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

int func_252()
{
	if (func_33(1))
	{
		if (func_33(8192))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_253(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam1)
	{
		func_466(Local_2026.f_2, iParam0 != 1);
	}
	if (iParam0 == 1 && (func_467(iVar0, 1) || func_467(iVar0, 32)))
	{
		func_468(4);
		func_468(8);
	}
	if (!bParam1)
	{
		func_126(2);
	}
	if (Local_2026.f_634 >= 32 || Local_2026.f_634 < 0)
	{
		return;
	}
	func_39(Local_361[Local_2026.f_634 /*52*/], 67108864);
}

void func_254(bool bParam0)
{
	func_469(Local_2026.f_1, bParam0);
}

void func_255(bool bParam0, bool bParam1)
{
	func_470(Local_2026.f_1, bParam1, bParam0);
}

void func_256(bool bParam0)
{
	func_471(Local_2026.f_1, bParam0);
}

void func_257(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	if (!func_477(iVar2))
	{
		return;
	}
	if (bParam4 <= 0)
	{
	}
	else if (bParam3 >= bParam4)
	{
		bVar6 = true;
		bVar4 = true;
		bVar5 = true;
	}
	else
	{
		bVar6 = false;
		bVar4 = bParam3 >= true;
		fVar3 = (BUILTIN::TO_FLOAT(bParam3) / BUILTIN::TO_FLOAT(bParam4));
		bVar5 = fVar3 >= 0.5f;
	}
	if (bVar5)
	{
		iVar7 = 0;
	}
	else if (bVar4)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 2;
	}
	iVar10 = func_478(iVar0);
	iVar11 = func_106(Param0);
	iVar8 = func_479(iVar1);
	iVar9 = func_480(iVar0);
	if (func_481())
	{
		func_482(iVar10, iVar11);
		func_483(iVar10, iVar8);
		func_484(iVar10, iVar7);
		func_485(iVar10, bParam2, bVar4);
		func_486(iVar10, bParam2, bVar6);
		func_487(iVar8, bParam2, bVar4, Param0, iVar1);
		if (!bParam2)
		{
			if (bVar4)
			{
				func_488(iVar2, iVar0, 1545958071, Param0);
			}
			else
			{
				func_488(iVar2, iVar0, -448995989, Param0);
			}
		}
		func_489(bVar4);
	}
	func_490(iVar9, bParam2, bVar4);
	func_491(Param0, bVar4);
	func_492(1);
	func_492(0);
	func_493(0);
	func_494(0);
	func_222(4);
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return func_113((Local_361[iParam1 /*52*/])->f_41.f_1, iParam0);
}

void func_259()
{
	int iVar0;

	if (!func_258(4096, 255))
	{
		return;
	}
	iVar0 = -1429099402;
	PED::_0xDE7B2B4144906CDF(iVar0, Global_35);
	func_495(4096);
}

void func_260(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_496(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_497(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_313(&Var5, 938546485, iVar16, 0) || !func_300(Var5, 957840570, &iVar18, 0)) || !func_177(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_498(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar22, 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_261()
{
	if (!func_258(8, 255))
	{
		return;
	}
	NETWORK::_0x4B05B97BA46F419D(0);
	NETWORK::_0x89D803CD48622150(0);
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, func_499(), true);
	}
	func_495(8);
}

void func_262(int iParam0)
{
	func_122(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_1), iParam0);
}

int func_263(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		return 0;
	}
	func_500(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_428(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_501(iVar0);
	switch (iVar1)
	{
		case 2:
			return 1;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_265(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_264(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_428(iParam0);
	iVar2 = func_501(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_502(2);
		case 1:
			return func_502(3);
		default:
			break;
	}
	return uVar0;
}

int func_266()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

void func_267(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

int func_268(int iParam0)
{
	return iParam0;
}

void func_269(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_21() != 0)
	{
		return;
	}
	if (func_503())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1131373->f_4641.f_2[func_504(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1131373->f_4641.f_2[func_504(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1273882->f_16 != &Global_1273882)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar8])))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, &(Global_1273882->f_154[iVar8])))
		{
		}
		else if (&Global_1273882->f_154[iVar8] == Global_1273882->f_10)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar7, &(Global_1273882->f_154[iVar8]));
		}
		iVar8++;
	}
	func_505(&Var0, uVar7);
}

char* func_270()
{
	return "supply_delivered";
}

char* func_271()
{
	return "HUD_MP_FREE_MODE";
}

bool func_272(int iParam0, int iParam1)
{
	return func_113((Local_2026.f_45[iParam0 /*6*/])->f_1, iParam1);
}

void func_273(int iParam0, int iParam1)
{
	func_122(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam1);
}

void func_274(int iParam0, int iParam1)
{
	func_122(Local_2026.f_166[iParam0], iParam1);
}

void func_275(int iParam0, var uParam1, int iParam2)
{
	func_122(&((uParam1->f_16[iParam0 /*12*/])->f_4), iParam2);
}

int func_276(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_506(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_277(int iParam0, int iParam1)
{
	return ((Global_1100949->f_33[iParam0 /*16*/])->f_3.f_8 && iParam1) != 0;
}

void func_278(int iParam0)
{
	((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_52.f_1 = (((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_52.f_1 || iParam0);
}

void func_279(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_4), iParam0);
	}
}

void func_280(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_2), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_6), iParam0);
	}
}

void func_281(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, func_507(Local_2026), 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

int func_282(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar3 = func_428(iParam0);
	if (bParam1)
	{
		iVar2 = 1822827642;
	}
	else
	{
		iVar2 = joaat("attempts");
	}
	if (!func_508(iVar3, iVar2, &Var0))
	{
		return -1;
	}
	return func_509(Var0, -1);
}

int func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -537439784;
		case 1:
			return 1679284980;
		case 2:
			return 1339124518;
		case 3:
			return 1329039358;
		case 4:
			return 1922377121;
		case 5:
			return -1762951883;
		case 6:
			return 1891838186;
		case 7:
			return -1662733059;
		case 8:
			return 1532715368;
		case 9:
			return 1325183772;
		case 10:
			return 1323038251;
		case 11:
			return -1561379682;
		case 12:
			return 1860996644;
		case 13:
			return 2039042927;
		case 14:
			return -1843028879;
		case 15:
			return -2122207177;
		case 16:
			return 644136394;
		case 17:
			return 1794832507;
		case 18:
			return -2119193689;
		case 19:
			return 1419063592;
		case 20:
			return 1111932099;
		case 21:
			return -864073234;
		case 22:
			return -760151658;
		case 23:
			return -1530266946;
		case 24:
			return 1471513692;
		case 25:
			return 873236619;
		case 26:
			return -1852046395;
		case 27:
			return -600916972;
		case 28:
			return -1318702711;
		case 29:
			return -1476590111;
		case 30:
			return -1355034;
		case 31:
			return 1013307464;
		case 32:
			return 957840570;
		case 33:
			return 725091599;
		case 34:
			return -542873544;
		case 35:
			return 1234220482;
		case 36:
			return -19593823;
		case 37:
			return 751620374;
		case 38:
			return -507939340;
		case 39:
			return 1146320435;
		case 40:
			return -333727878;
		case 41:
			return 408107890;
		case 42:
			return 1357107565;
		case 43:
			return -321268365;
		case 44:
			return 1252114078;
		case 45:
			return 592666605;
		case 46:
			return -1321720745;
		case 47:
			return 2064763470;
		case 48:
			return -118004582;
		case 49:
			return 705932105;
		case 50:
			return -1865369028;
		case 51:
			return -900489166;
		case 52:
			return -359968085;
		case 53:
			return 188462142;
		case 54:
			return 733551533;
		case 55:
			return -2107902278;
		case 56:
			return 1645569887;
		case 57:
			return -2117302676;
		case 58:
			return 1594022734;
		case 59:
			return 45657025;
		case 60:
			return 587406518;
		case 61:
			return -1339596857;
		case 62:
			return -779153855;
		case 63:
			return 100469918;
		case 64:
			return -1668085295;
		case 65:
			return 1245766010;
		case 66:
			return -727548384;
		case 67:
			return -36224614;
		case 68:
			return -252450326;
		case 69:
			return -1456038853;
		case 70:
			return 82347414;
		case 71:
			return -1580911258;
		case 72:
			return 999526519;
		case 73:
			return -880340422;
		case 74:
			return 902857663;
		case 75:
			return -697657725;
		case 76:
			return -1404661375;
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

char* func_284(int iParam0)
{
	switch (iParam0)
	{
		case -537439784:
			return ":type";
		case 1679284980:
			return ":drive_to_coords";
		case 1339124518:
			return ":model";
		case 1323038251:
			return ":mounted";
		case 1329039358:
			return ":spawn_pos";
		case 1922377121:
			return ":spawn_heading";
		case 1891838186:
			return ":spawn_offset";
		case -1662733059:
			return ":spawn_seat";
		case 1325183772:
			return ":weapon";
		case 1532715368:
			return ":vehicle_id";
		case -1762951883:
			return ":role";
		case -1561379682:
			return ":mission_time";
		case 1860996644:
			return ":health";
		case 2039042927:
			return ":flee_chance";
		case -1843028879:
			return ":allow_use_no_wagon_nodes";
		case -2122207177:
			return ":has_money_bag";
		case 644136394:
			return ":position";
		case 1794832507:
			return ":scale";
		case -2119193689:
			return ":rotation";
		case 1419063592:
			return ":secondary_dropoff";
		case 1111932099:
			return ":no_z_probe";
		case -864073234:
			return ":box_volume";
		case -760151658:
			return ":dont_acknowledge_players";
		case -1530266946:
			return ":scenario";
		case 1471513692:
			return ":heading";
		case 873236619:
			return ":is_propset";
		case -1852046395:
			return ":end_position";
		case -600916972:
			return ":end_rotation";
		case -1318702711:
			return ":shot_duration_ms";
		case -1476590111:
			return ":fade_time_ms";
		case -1355034:
			return ":effect";
		case 1013307464:
			return ":relative_to_player";
		case 957840570:
			return ":target_index";
		case 725091599:
			return ":delete_after_shot";
		case -542873544:
			return ":fov";
		case 1234220482:
			return ":transition_to_gameplay_cam";
		case -19593823:
			return ":transition_from_gameplay_cam";
		case 751620374:
			return ":id";
		case -507939340:
			return ":min_required_players";
		case 1146320435:
			return ":max_required_players";
		case -333727878:
			return ":delete_turned_in_objectives_after_shot";
		case 408107890:
			return ":exit_instance_at_start_of_shot";
		case 1357107565:
			return ":radius";
		case -321268365:
			return ":enabled";
		case 1252114078:
			return ":min_wave_time";
		case 592666605:
			return ":max_wave_time";
		case -1321720745:
			return ":initial_delay";
		case 2064763470:
			return ":is_law";
		case -118004582:
			return ":mount_model";
		case 705932105:
			return ":weight";
		case -1865369028:
			return ":enable_law";
		case -900489166:
			return ":remove_default_weapons";
		case -359968085:
			return ":can_have_treasure_map_loot";
		case 188462142:
			return ":accuracy";
		case 733551533:
			return ":primary_dropoff_name";
		case -2107902278:
			return ":secondary_dropoff_name";
		case 1645569887:
			return ":placement_type";
		case -2117302676:
			return ":hitch_pos";
		case 1594022734:
			return ":mission_is_stationary";
		case 45657025:
			return ":weapon_out";
		case 587406518:
			return ":dont_spawn_relative";
		case -1339596857:
			return ":outfit";
		case 100469918:
			return ":outfit_index";
		case -779153855:
			return ":loco_motion_type";
		case -1668085295:
			return ":break_wheel_index";
		case 1245766010:
			return ":primary_dropoff_is_near_mission_giver";
		case -727548384:
			return ":cinematic_location_position_offset";
		case -36224614:
			return ":cinematic_location_rotation_offset";
		case -252450326:
			return ":cinematic_location_focus_override";
		case -1456038853:
			return ":cinematic_location_camera_name";
		case 82347414:
			return ":scenario_pos";
		case -1580911258:
			return ":scenario_heading";
		case 999526519:
			return ":override_transition_cam";
		case -880340422:
			return ":avoidance_radius";
		case 902857663:
			return ":law_avoidance_radius";
		case -697657725:
			return ":has_discoverable_name";
		case -1404661375:
			return ":crime_config";
		default:
			break;
	}
	return "";
}

int func_285(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

int func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1094140359;
		case 1:
			return 1929036093;
		case 2:
			return 167061367;
		case 3:
			return 615415475;
		case 4:
			return -1813459955;
		case 5:
			return -788131562;
		case 6:
			return 1849119077;
		case 7:
			return -911220092;
		case 8:
			return -1874578615;
		case 9:
			return -244186873;
		case 10:
			return -1283139781;
		case 11:
			return 2067657977;
		case 12:
			return 2101858238;
		case 13:
			return 1300919788;
		case 14:
			return 556233122;
		case 15:
			return -1925794261;
		case 16:
			return -110495140;
		case 17:
			return -556151360;
		case 18:
			return -1441758265;
		case 19:
			return 938546485;
		case 20:
			return 565295571;
		case 21:
			return 1281647104;
		case 22:
			return 419371455;
		case 23:
			return -2072295915;
		case 24:
			return -640241378;
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

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 1094140359:
			return "data";
		case 1929036093:
			return "activity/locations/location(id=%x)";
		case 167061367:
			return "activity/locations/location(%i)";
		case 615415475:
			return "activity/locations";
		case -1813459955:
			return "variations/variation(id=%x)";
		case -788131562:
			return "peds/ped(%i)";
		case 1849119077:
			return "peds";
		case -911220092:
			return "vehicles/vehicle(%i)";
		case -1874578615:
			return "vehicles";
		case -244186873:
			return "dropoff_volumes";
		case -1283139781:
			return "dropoff_volumes/volume(%i)";
		case 2067657977:
			return "props";
		case 2101858238:
			return "props/prop(%i)";
		case 1300919788:
			return "cutscenes";
		case 556233122:
			return "cutscenes/cutscene(id=%x)";
		case -110495140:
			return "shot(%i)";
		case -556151360:
			return "camera";
		case -1441758265:
			return "actors";
		case 938546485:
			return "actors/actor(%i)";
		case 565295571:
			return "veg_modifiers/veg_modifier(%i)";
		case 1281647104:
			return "veg_modifiers";
		case -1925794261:
			return "cutscenes/cutscene(%i)";
		case 419371455:
			return "chaser_waves";
		case -2072295915:
			return "weapons";
		case -640241378:
			return "weapons/weapon(%i)";
		default:
			break;
	}
	return "";
}

int func_288(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 600000;
	if (func_293(uParam0, &Var0))
	{
		func_300(Var0, -1561379682, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_289(var uParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_293(uParam0, &Var0))
	{
		func_314(Var0, 1679284980, &vVar5, 0);
	}
	return vVar5;
}

int func_290(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_510(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

int func_291(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_511(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 20)
	{
		return 20;
	}
	return iVar5;
}

int func_292(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_177(Var0, -1404661375, &uVar5, 0))
	{
		return uVar5;
	}
	return iParam0;
}

bool func_293(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_4;
	uParam1->f_2 = 1929036093;
	uParam1->f_3 = uParam0->f_4.f_1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
}

int func_294()
{
	struct<5> Var0;
	var uVar5;

	if (func_293(&Local_2026, &Var0) && func_178(Var0, -1865369028, &uVar5, 0))
	{
		return uVar5;
	}
	return 1;
}

int func_295()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_178(Var1, -321268365, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_296()
{
	struct<5> Var0;
	var uVar5;

	if (!func_293(&Local_2026, &Var0))
	{
		return 0;
	}
	if (!func_178(Var0, 1245766010, &uVar5, 0))
	{
		return 0;
	}
	return uVar5;
}

Vector3 func_297(var uParam0, var uParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_173(uParam0, &Var0, uParam1))
	{
		func_314(Var0, 1329039358, &vVar5, 0);
	}
	return vVar5;
}

bool func_298(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_173(uParam0, &Var0, iParam1))
	{
		func_178(Var0, -1843028879, &uVar5, 0);
	}
	return uVar5;
}

bool func_299(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_173(uParam0, &Var0, iParam1))
	{
		func_178(Var0, 1111932099, &uVar5, 0);
	}
	return uVar5;
}

int func_300(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_301(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, -1762951883, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_302(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_314(Var0, 1891838186, &vVar5, 0);
	}
	return vVar5;
}

int func_303(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_300(Var0, 1532715368, &iVar5, 0);
	}
	if (iVar5 >= 3)
	{
		iVar5 = 2;
	}
	else if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	return iVar5;
}

int func_304(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1) && func_177(Var0, -1662733059, &uVar5, 0))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = iParam2;
	if (!func_141(&Local_2026, &Var0, iParam0) || !func_178(Var0, iParam1, &iVar5, 0))
	{
		return iParam2;
	}
	return iVar5;
}

int func_306(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_178(Var0, -2122207177, &iVar5, 0);
	}
	return iVar5;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = iParam3;
	if (func_141(&Local_2026, &Var0, iParam0))
	{
		func_178(Var0, iParam1, &bVar5, 0);
	}
	if (bVar5)
	{
		func_122(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam2);
	}
}

int func_308(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_512(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

int func_309(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	int iVar15;

	if (func_310(uParam0, &Var0, iParam1) && func_314(Var0, 644136394, &vVar5, 1))
	{
		if (!func_314(Var0, 1794832507, &vVar8, 0))
		{
			vVar8.x = 9f;
			vVar8.f_1 = 9f;
			vVar8.f_2 = 10f;
		}
		func_314(Var0, -2119193689, &vVar11, 0);
		func_178(Var0, 1419063592, iParam2, 0);
		func_178(Var0, -864073234, &bVar14, 0);
		if (bVar14)
		{
			iVar15 = VOLUME::_CREATE_VOLUME_BOX(vVar5, vVar11, vVar8);
		}
		else
		{
			iVar15 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar5, vVar11, vVar8);
		}
	}
	return iVar15;
}

int func_310(var uParam0, var uParam1, int iParam2)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -1283139781;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_311(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
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

int func_312(var uParam0)
{
	switch (uParam0->f_10)
	{
		case -409129282:
		case -19759302:
			return 404851220;
		default:
			break;
	}
	return joaat("none");
}

bool func_313(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_314(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

void func_315(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

void func_316(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_29(Param0, func_513()))
	{
		return;
	}
	iVar0 = func_514(iVar1);
	if (!func_515(iVar0))
	{
		return;
	}
	func_516(iVar0);
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_517(1) && func_277(iVar0, 1))
		{
			func_518();
		}
		if (func_517(0) && NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
		{
			func_519();
		}
	}
}

int func_317(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_123(iVar0, 0, 1))
	{
		return 0;
	}
	if (!func_41(Local_361[iVar0 /*52*/], 32) && !func_41(Local_361[iVar0 /*52*/], 64))
	{
		return 0;
	}
	return 1;
}

bool func_318(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		uVar0 = (uVar0 || (Local_2026.f_45[iVar1 /*6*/])->f_1);
		iVar1++;
	}
	return func_113(uVar0, iParam0);
}

int func_319(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar1 /*4*/])))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar1 /*4*/]));
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			else if (func_520(iVar0, PLAYER::PLAYER_PED_ID(), 1, 1) > 80f)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_320(var uParam0, int iParam1)
{
	func_437(&(uParam0->f_1), iParam1);
}

void func_321(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iVar0 == Local_2026.f_631)
	{
		if (!func_521(iVar0, &fVar1, 1))
		{
			Local_2026.f_631 = 255;
		}
		Local_2026.f_632 = fVar1;
		return;
	}
	if (!func_521(iVar0, &fVar1, 1))
	{
		return;
	}
	if (Local_2026.f_631 != 255 && Local_2026.f_632 < fVar1)
	{
		return;
	}
	Local_2026.f_631 = iVar0;
	Local_2026.f_632 = fVar1;
}

void func_322()
{
	if (func_33(1) && func_523(func_522(&Local_17, &Local_2026), Local_2026.f_10.f_6))
	{
		func_524(Local_2026.f_2);
	}
	if (!func_33(1048576))
	{
		return;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		func_73();
		func_74();
		func_75();
		return;
	}
	func_525();
	if (func_526(255))
	{
		func_527();
	}
	else
	{
		func_73();
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2026.f_619) && func_528(VOLUME::GET_VOLUME_COORDS(Local_2026.f_619), 30f, 1))
	{
		func_529();
	}
	else
	{
		func_74();
	}
}

void func_323()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!func_55(&Local_17, 536870912) || func_55(&Local_17, 524288))
	{
		return;
	}
	if (func_33(134217728))
	{
		if (((func_33(1) && func_228(2)) && func_41(Local_361[Local_2026.f_634 /*52*/], 2097152)) && func_210(Local_2026.f_633) > 8000)
		{
			func_103();
			func_320(Local_361[Local_2026.f_634 /*52*/], 64);
			func_320(Local_361[Local_2026.f_634 /*52*/], 32);
			func_214(1);
			func_214(8192);
			func_43(&Local_2026, &Local_361);
		}
		return;
	}
	bVar0 = func_33(1);
	bVar1 = true;
	iVar4 = PLAYER::PLAYER_ID();
	if (Local_2026.f_10 == -409129282)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (((!func_203(iVar2, &Local_17, 4096) || !func_203(iVar2, &Local_17, 128)) || func_203(iVar2, &Local_17, 16)) || func_203(iVar2, &Local_17, 2))
			{
			}
			else if (func_80(iVar2, 16))
			{
				if (func_80(iVar2, 32))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = (Local_17.f_257[iVar2 /*5*/])->f_3;
				if (bVar0)
				{
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || _NAMESPACE26::_0x3F59FE6F37869576(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					func_274(iVar2, 32);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_274(iVar2, 16);
			}
			iVar2++;
		}
	}
	else if (Local_2026.f_10 == -19759302)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (!func_202(iVar2, &Local_17, 67108864) || func_202(iVar2, &Local_17, 32))
			{
			}
			else if (func_272(iVar2, 8388608))
			{
				if (func_272(iVar2, 16777216))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = (Local_17.f_16[iVar2 /*12*/])->f_7;
				if (bVar0)
				{
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || _NAMESPACE26::_0x3F59FE6F37869576(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					func_273(iVar2, 16777216);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_273(iVar2, 8388608);
			}
			iVar2++;
		}
	}
	if (bVar1)
	{
		func_126(134217728);
		Local_2026.f_633 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_324()
{
	float fVar0;

	if (func_530(&fVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), fVar0);
	}
}

void func_325()
{
	int iVar0;
	int iVar1;

	if ((func_33(1) && func_531()) && func_55(&Local_17, 268435456))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (_NAMESPACE26::_NETWORK_IS_IN_MY_GANG(iVar1))
			{
			}
			else
			{
				func_532(iVar1);
			}
			iVar0++;
		}
	}
	else if ((!func_33(1) && func_55(&Local_17, 268435456)) && func_533(1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2026.f_618), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (_NAMESPACE26::_NETWORK_IS_IN_MY_GANG(iVar1))
				{
				}
				else
				{
					func_532(iVar1);
				}
			}
			iVar0++;
		}
	}
}

int func_326()
{
	if (func_534(255) && !func_535(255))
	{
		return 0;
	}
	return 1;
}

int func_327()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !_NAMESPACE26::_0x3F59FE6F37869576(iVar0, iVar3))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
			{
				return 0;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!func_41(Local_361[iVar2 /*52*/], 16777216))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_328(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!func_536())
	{
		return 0;
	}
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1) && !PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1))
	{
		return 0;
	}
	if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, false, 0, false) || !func_237(iVar2))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (func_520(iVar1, PLAYER::PLAYER_PED_ID(), 1, 0) > 30f)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
	{
		iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
		iVar5 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar1));
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
		else
		{
			}
			else
			{
				iVar6++;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	else
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iVar3))
	{
		return 0;
	}
	iVar7 = NETWORK::PED_TO_NET(iVar3);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&uParam0->f_16[iVar0 /*12*/] != iVar7)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			*uParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 401658241:
		case 1566032419:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_39(Local_361[Local_2026.f_634 /*52*/], 32);
			break;
		case 2:
			func_39(Local_361[Local_2026.f_634 /*52*/], 64);
			func_126(8192);
			func_115(Local_361[Local_2026.f_634 /*52*/], &Local_2026);
			if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_538(7, PLAYER::PLAYER_ID(), 0, func_537(0, 8));
			}
			break;
	}
	(Local_361[Local_2026.f_634 /*52*/])->f_48 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_539(Local_2026.f_1);
	func_540(Local_2026.f_1, 1, func_294(), 0);
	func_541(6);
	func_126(1);
	func_43(&Local_2026, &Local_361);
	func_460(-1256206172, 0);
}

void func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	vector3 vVar8;

	if (func_41(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		func_542();
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 128))
	{
		return;
	}
	if ((Local_361[Local_2026.f_634 /*52*/])->f_46 == -1)
	{
		func_543(0);
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || PED::IS_PED_RAGDOLL(iVar0)) || TASK::IS_PED_GETTING_UP(iVar0)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_0x0E99E3BF11BB6367(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		func_543(0);
		return;
	}
	if ((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_3 != 22)
	{
		func_543(0);
		return;
	}
	if (((((!func_438((Local_361[Local_2026.f_634 /*52*/])->f_46, &iVar1, 1, 0) || PED::IS_PED_BEING_STUNNED(iVar1, 0)) || PED::_0x3BDFCF25B58B0415(iVar1)) || TASK::IS_PED_GETTING_UP(iVar1)) || PED::_0x0E99E3BF11BB6367(iVar1)) || PED::IS_PED_RAGDOLL(iVar1))
	{
		func_543(0);
		return;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 256))
	{
		return;
	}
	if (!func_41(Local_361[Local_2026.f_634 /*52*/], 256) && !func_41(Local_361[Local_2026.f_634 /*52*/], 512))
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 256);
		return;
	}
	if (func_202((Local_361[Local_2026.f_634 /*52*/])->f_46, &Local_17, 2))
	{
		func_543(0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_5))
	{
		return;
	}
	iVar2 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_5);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar2))
	{
		return;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iVar2, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_544(), false)))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_545(), false)) && ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_545(), false) != iVar0)
	{
		func_543(0);
		return;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(iVar2, func_545()) || ANIMSCENE::_0xD8254CB2C586412B(iVar2, 0)) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar2, 0))
	{
		func_543(1);
		return;
	}
	if (Local_2026.f_636 == -1)
	{
		Local_2026.f_636 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	Var3 = { func_547(iVar2, func_545(), func_546(0)) };
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) && !func_548(iVar0, -828834893))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
		func_543(0);
		return;
	}
	if (func_41(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 0, false) && func_237(iVar7))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(iVar0, 0, 0, 0, 0);
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 1, false) && func_237(iVar7))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(iVar0, 1, 1, 1, 0);
		return;
	}
	if (Local_2026.f_636 != -1 && NETWORK::GET_TIME_DIFFERENCE(Local_2026.f_636, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6000)
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 1048576);
		return;
	}
	vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_544(), false), 0f, 0.8f, 0f) };
	if (!func_548(iVar0, 713668775))
	{
		if (func_549(iVar0, vVar8, 0) > 0.2f)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar8, 1f, 20000, 0.25f, 512, Var3.f_3);
		}
		else
		{
			func_39(Local_361[Local_2026.f_634 /*52*/], 1048576);
		}
	}
	else if (func_549(iVar0, vVar8, 0) < 0.2f)
	{
		func_39(Local_361[Local_2026.f_634 /*52*/], 1048576);
	}
}

bool func_332(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

int func_333(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_550(iParam0);
		case -19759302:
			return func_551(iParam0);
		default:
			break;
	}
	return 0;
}

void func_334()
{
	Global_1051387->f_3215 = MISC::GET_FRAME_COUNT();
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_41(Local_361[Local_2026.f_634 /*52*/], 32);
	bVar3 = func_41(Local_361[Local_2026.f_634 /*52*/], 64);
	if (!bVar2 && !bVar3)
	{
		return 0;
	}
	switch (Local_2026.f_10)
	{
		case -409129282:
			if (!func_552())
			{
				return 0;
			}
			*uParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				return 0;
			}
			if (func_55(&Local_17, 524288))
			{
				return 1;
			}
			if (func_41(Local_361[Local_2026.f_634 /*52*/], 8388608))
			{
				return 1;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*uParam0))
			{
				return 0;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*uParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (&Local_17.f_257[iVar0 /*5*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
				{
				}
				else
				{
					if (!func_203(iVar0, &Local_17, 256) && !func_203(iVar0, &Local_17, 512))
					{
						return 0;
					}
					return 1;
				}
				iVar0++;
			}
			break;
		case -19759302:
			if (!func_553(1))
			{
				return 0;
			}
			*uParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				return 0;
			}
			if (func_55(&Local_17, 524288))
			{
				return 1;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*uParam0))
			{
				return 0;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*uParam0);
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (&Local_17.f_16[iVar0 /*12*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
				{
				}
				else
				{
					if (!func_202(iVar0, &Local_17, 65536) && !func_202(iVar0, &Local_17, 131072))
					{
						return 0;
					}
					return 1;
				}
				iVar0++;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

void func_336(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_554(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
		return;
	}
	if (func_555(iVar0, -208384378))
	{
		return;
	}
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1073741824, 1);
}

int func_337()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1))
	{
		return 0;
	}
	if (func_55(&Local_17, 524288))
	{
		return 0;
	}
	if ((func_258(1, 255) && func_258(2, 255)) && !func_258(512, 255))
	{
		return 0;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2026.f_626;
	}
	else
	{
		iVar0 = Local_2026.f_625;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || !func_556(Global_35, iVar0, 1, 0))
	{
		return 0;
	}
	if (Local_2026.f_10 == -19759302)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
			{
			}
			else if (func_556(NETWORK::NET_TO_PED(&(Local_17.f_16[iVar2 /*12*/])), iVar0, 1, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar2++;
			}
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (!func_203(iVar3, &Local_17, 128))
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
			{
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar3 /*5*/])), iVar0, false, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar3++;
			}
		}
	}
	return iVar1;
}

void func_338(int iParam0, int iParam1)
{
	func_122(Local_2026.f_29[iParam0 /*5*/], iParam1);
}

bool func_339(int iParam0, var uParam1, int iParam2)
{
	return func_113((uParam1->f_3[iParam0 /*4*/])->f_1, iParam2);
}

char* func_340(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_341(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_557(iParam0, uParam1);
	func_558(iParam0);
	if ((iVar0 == -1088690539 || iVar0 == 0) || func_398(iParam0, 0))
	{
		func_215(iParam0);
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	func_559(iParam0, iVar1);
	func_560(iParam0, iVar1);
	func_561(iParam0, iVar1);
	func_562(iParam0, iVar1);
	func_563(iParam0, iVar1, uParam1, uParam2, fParam3);
	func_564(iParam0, iVar1);
	func_565(iParam0, iVar1);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_566(iParam0, uParam1)))
	{
		return;
	}
	func_567(iParam0, uParam1, uParam2, fParam3);
	func_568(iParam0, iVar1);
	switch (iVar0)
	{
		case joaat("driver"):
			func_569(iParam0, uParam1, uParam2, fParam3);
			break;
		case -193064196:
			func_570(iParam0, uParam1, uParam2, fParam3);
			break;
		case -522830230:
			func_571(iParam0, uParam1, uParam2, fParam3);
			break;
		case 1095997463:
			func_572(iParam0, uParam1, uParam2, fParam3);
			break;
		case -306837416:
			func_573(iParam0, uParam1, uParam2, fParam3);
			break;
		case 824585797:
			func_574(iParam0, uParam1, uParam2, fParam3);
			break;
		case 1566032419:
			func_575(iParam0, uParam1, uParam2, fParam3);
			break;
		case 401658241:
			func_576(iParam0, uParam1, uParam2, fParam3);
			break;
		case -2133983324:
			func_577(iParam0, uParam1, uParam2, fParam3);
			break;
	}
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case -306837416:
		case -193064196:
			break;
		default:
			return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar0 = PED::GET_MOUNT(iVar0);
	}
	if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (!func_578(iParam0, &iVar1))
	{
		return;
	}
	if (func_579(iVar1))
	{
		return;
	}
	vVar2 = { func_580(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_HEADING(iVar1), (Local_17.f_16[iParam0 /*12*/])->f_8) };
	if (func_549(iVar0, vVar2, 1) < 15f)
	{
		ENTITY::_0x0918E3565C20F03C(iVar0, vVar2, ENTITY::GET_ENTITY_HEADING(iVar1), false, 1);
	}
}

void func_343(int iParam0)
{
	int iVar0;

	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 1095997463:
			if (((Local_17.f_16[iParam0 /*12*/])->f_3 == 17 || (Local_17.f_16[iParam0 /*12*/])->f_3 == 25) || (Local_17.f_16[iParam0 /*12*/])->f_3 == 26)
			{
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iParam0 /*12*/])))
			{
				if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 19)
				{
					func_273(iParam0, 524288);
				}
				return;
			}
			if (!func_438(iParam0, &iVar0, 1, 0))
			{
				return;
			}
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 19)
			{
				if (!func_272(iParam0, 262144) || func_272(iParam0, 524288))
				{
					PED::_0x89F5E7ADECCCB49C(iVar0, func_581());
					func_273(iParam0, 262144);
				}
			}
			else if (func_272(iParam0, 262144) || func_272(iParam0, 524288))
			{
				PED::_0x58F7DB5BD8FA2288(iVar0);
				func_439(iParam0, 262144);
			}
			func_439(iParam0, 524288);
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 21 && func_202(iParam0, &Local_17, 4194304))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.5f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2f);
			}
			break;
	}
}

void func_344(int iParam0)
{
	int iVar0;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		return;
	}
	if ((func_202(iParam0, &Local_17, 32) || func_202(iParam0, &Local_17, 65536)) || func_202(iParam0, &Local_17, 131072))
	{
		if (!func_438(iParam0, &iVar0, 1, 0))
		{
			return;
		}
		func_582(iVar0);
		return;
	}
	if (!func_272(iParam0, 8388608))
	{
		return;
	}
	if (!func_438(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (func_272(iParam0, 16777216))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
		return;
	}
	NETWORK::_0xEE5AE9956743BA20(iVar0, true);
	func_582(iVar0);
}

void func_345(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!func_203(iParam0, &Local_17, 128))
	{
		return;
	}
	func_583(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	if (func_80(iParam0, 16))
	{
		bVar1 = !func_80(iParam0, 32);
		NETWORK::_0xEE5AE9956743BA20(iVar0, bVar1);
	}
	if ((func_203(iParam0, &Local_17, 256) || func_203(iParam0, &Local_17, 512)) || func_203(iParam0, &Local_17, 2))
	{
		bVar2 = true;
	}
	if (func_584(iParam0, bVar2))
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 1);
	}
	else
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 0);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_203(iParam0, &Local_17, 64))
	{
		GRAPHICS::_0x7DFB49BCDB73089A(iVar0, false);
	}
	else
	{
		GRAPHICS::_0x7DFB49BCDB73089A(iVar0, true);
	}
	if (func_203(iParam0, &Local_17, 16))
	{
		OBJECT::DELETE_OBJECT(&iVar0);
		return;
	}
	iVar3 = ENTITY::_0x61914209C36EFDDB(iVar0);
	switch (iVar3)
	{
		case 3:
			break;
		default:
			return;
	}
	if (bVar2)
	{
		if ((func_55(&Local_17, 524288) && iParam0 == Local_17.f_328) && (func_55(&Local_17, 16777216) || func_55(&Local_17, 33554432)))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 2, true);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 22, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 21, false);
		}
		else
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 2, false);
		}
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 3, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 11, false);
	}
}

int func_346()
{
	if (func_55(&Local_17, 524288) || func_55(&Local_17, 536870912))
	{
		return 0;
	}
	if (func_403(&Local_17) <= 2)
	{
		return 0;
	}
	if (!func_55(&Local_17, 268435456))
	{
		return 0;
	}
	return 1;
}

void func_347(float fParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (fParam0->f_10)
	{
		case -409129282:
			if (((iParam3 >= 4 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_257[iParam3 /*5*/]))) || func_203(iParam3, uParam2, 2)) || func_203(iParam3, uParam2, 16))
			{
				return;
			}
			fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(&(uParam2->f_257[iParam3 /*5*/]));
			break;
		case -19759302:
			if (iParam3 >= fParam0->f_10.f_8)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (!func_202(iVar0, uParam2, 1024))
				{
				}
				else
				{
					if (iVar1 == iParam3)
					{
					}
					else
					{
						iVar1++;
						iVar0++;
					}
					if (((iVar0 >= 20 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_16[iVar0 /*12*/]))) || func_202(iVar0, uParam2, 32)) || (uParam2->f_16[iVar0 /*12*/])->f_2 == -1088690539)
					{
						fParam0->f_561.f_2[iParam3] = 0;
						return;
					}
					fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(&(uParam2->f_16[iVar0 /*12*/]));
				}
			}
		}

int func_348(var uParam0, float fParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), &Global_1273882))
	{
		return 0;
	}
	if (fParam1 > 800f)
	{
		return 1;
	}
	return 0;
}

bool func_349(int iParam0, bool bParam1, bool bParam2)
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

int func_350(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	bool bVar5;

	if (uParam0->f_54 == joaat("none"))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), &Global_1273882))
	{
		return 0;
	}
	bVar0 = false;
	Var1 = -1;
	Var1.f_1 = -1;
	fVar3 = 100f;
	if ((func_28(Var1) && !func_29(Var1, uParam0->f_52)) && func_585(Var1))
	{
		return 0;
	}
	switch (uParam0->f_54)
	{
		case joaat("attack"):
		case 404851220:
			if (!bParam3)
			{
				bVar0 = true;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[uParam0->f_55])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_2[uParam0->f_55]))) && PED::_0x3D9F958834AB9C30(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_2[uParam0->f_55]))) == Global_35)
			{
				return 1;
			}
			if (func_586(uParam0, bVar0, 1, 0, fVar3, uParam2) && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return 1;
			}
			break;
		case joaat("defend"):
			bVar0 = true;
			if (func_586(uParam0, bVar0, 0, 1, fVar3, uParam2) && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return 1;
			}
			break;
	}
	if (uParam0->f_55 == 11)
	{
		uParam0->f_55 = 0;
	}
	else
	{
		uParam0->f_55++;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), uParam0->f_56))
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_56);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			if (_NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar4))
			{
				*bParam1 = 1;
				return 1;
			}
			else if (bVar0)
			{
				if (PED::GET_JACK_TARGET(Global_35) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				else if (PED::_0xD0B7AEB56229D317(Global_35) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				if (bVar5 && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
				{
					return 1;
				}
			}
		}
	}
	if (uParam0->f_56 == 31)
	{
		uParam0->f_56 = 0;
	}
	else
	{
		uParam0->f_56++;
	}
	return 0;
}

int func_351(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	switch (fParam0->f_10)
	{
		case -409129282:
			if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
			{
				return 0;
			}
			iVar2 = 0;
			while (iVar2 < fParam0->f_10.f_14)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_257[iVar2 /*5*/])))
				{
				}
				else if (func_203(iVar2, uParam2, 1))
				{
				}
				else if (func_203(iVar2, uParam2, 2))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(&(uParam2->f_257[iVar2 /*5*/])), iVar0))
				{
				}
				else
				{
					return 1;
				}
				iVar2++;
			}
			break;
		case -19759302:
			if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 262144) && Local_17.f_321 > 1)
			{
				return 1;
			}
			else if (func_41((*uParam1)[Local_2026.f_634 /*52*/], 524288))
			{
				return 1;
			}
			if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
			{
				return 0;
			}
			iVar1 = 0;
			while (iVar1 < fParam0->f_10.f_8)
			{
				if ((uParam2->f_16[iVar1 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (func_202(iVar1, uParam2, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_16[iVar1 /*12*/])))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(&(uParam2->f_16[iVar1 /*12*/])), iVar0))
				{
				}
				else
				{
					return 1;
				}
				iVar1++;
			}
			break;
	}
	return 0;
}

int func_352(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (Local_2026.f_10)
	{
		case -19759302:
			if (!func_438(iParam0, &iVar0, 0, 1))
			{
				return 0;
			}
			*uParam1 = func_268(iVar0);
			return 1;
		case -409129282:
			if (!func_81(iParam0, &iVar1))
			{
				return 0;
			}
			*uParam1 = func_268(iVar1);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_353(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return 0;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_588(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_589(&(iParam3->f_1), iParam5, vParam0);
				if (!func_382(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_590(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return 1;
					}
					break;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_354(vector3 vParam0, var uParam3)
{
	float fVar0;
	int iVar1;

	fVar0 = BUILTIN::VDIST(Global_36, vParam0);
	if (fVar0 > 200f)
	{
		return 1;
	}
	if (fVar0 < 40f)
	{
		*uParam3 = 1;
		return 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(vParam0, 4f))
	{
		return 1;
	}
	if (!func_234(Local_2026.f_548))
	{
		Local_2026.f_548 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(Local_2026.f_548, vParam0 + Vector(0.5f, 0f, 0f), 3f);
		return 0;
	}
	iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_2026.f_548);
	if (iVar1 == -1)
	{
		return 0;
	}
	*uParam3 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_2026.f_548);
	return 1;
}

int func_355(var uParam0, var uParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	if (!func_33(1))
	{
		return 0;
	}
	bVar0 = func_41(Local_361[Local_2026.f_634 /*52*/], 64);
	fVar2 = 250f;
	fVar4 = 250f;
	fVar6 = 250f;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if ((Local_17.f_16[iVar8 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar8 /*12*/])))
				{
				}
				else
				{
					iVar13 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar8 /*12*/]));
					fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar13, false, false));
					iVar10 = func_268(iVar13);
					bVar11 = func_202(iVar8, &Local_17, 8);
					bVar12 = func_202(iVar8, &Local_17, 16);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar8++;
			}
			break;
		case -409129282:
			iVar9 = 0;
			while (iVar9 < 4)
			{
				if (func_203(iVar9, &Local_17, 2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar9 /*5*/])))
				{
				}
				else
				{
					iVar14 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar9 /*5*/]));
					fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar14, false, false));
					iVar10 = func_268(iVar14);
					bVar11 = func_203(iVar9, &Local_17, 1);
					bVar12 = func_203(iVar9, &Local_17, 32);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar9++;
			}
			break;
		default:
			return 0;
	}
	if (fVar2 < 250f)
	{
		*uParam0 = iVar3;
		return 1;
	}
	if (fVar4 < 250f)
	{
		*uParam0 = iVar5;
		*uParam1 = 1;
		return 1;
	}
	if (fVar6 < 250f)
	{
		*uParam0 = iVar7;
		return 1;
	}
	return 0;
}

void func_356(bool bParam0)
{
	if (bParam0)
	{
		if (func_33(4))
		{
			return;
		}
		if (func_357(255))
		{
			return;
		}
		func_233(1);
		func_126(4);
	}
	else
	{
		if (!func_33(4))
		{
			return;
		}
		func_233(0);
		func_214(4);
	}
}

bool func_357(int iParam0)
{
	return func_591(48, iParam0);
}

bool func_358(int iParam0)
{
	return func_591(47, iParam0);
}

void func_359(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;

	if (!func_33(4))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam3)
	{
		fVar0 = 150f;
		fVar1 = 200f;
		fVar2 = 30f;
	}
	else if (func_41(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		fVar0 = 70f;
		fVar1 = 130f;
		fVar2 = 25f;
	}
	else
	{
		fVar0 = 115f;
		fVar1 = 180f;
		fVar2 = 25f;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) };
	if (INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vVar3))
	{
		func_391(&vVar3, 200f);
	}
	else
	{
		func_391(&vVar3, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar3 };
	uParam0->f_17 = { fVar1, fVar1, fVar2 };
	uParam0->f_17.f_9 = -432403087;
	uParam0->f_6.f_6 = { vVar3 };
	uParam0->f_6 = { fVar0, fVar0, fVar2 };
	uParam0->f_6.f_9 = -432403087;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = 3;
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	uParam1->f_6 = { vVar3 + func_592(*uParam1) * Vector(10f, 10f, 10f) };
	func_360(*uParam0, *uParam1, 1, 1, 1);
}

int func_360(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_358(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_593(&(Global_1099293->f_516));
		Global_1099293->f_516 = { Param0 };
		func_594(&(Global_1099293->f_555));
		Global_1099293->f_555 = { Param30 };
		Global_1099293->f_586 = iParam39;
		Global_1099293->f_587 = iParam40;
		Global_1099293->f_588 = iParam41;
		func_595(Global_1099293->f_516, 36);
		func_596(Global_1099293->f_555, 36);
		func_447(47);
		return 1;
	}
	return 0;
}

int func_361()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return Local_2026.f_174;
		case -409129282:
			return Local_2026.f_174.f_4;
		default:
			break;
	}
	return 0;
}

int func_362()
{
	if (func_258(1, 255))
	{
		return 0;
	}
	if (func_55(&Local_17, 64))
	{
		return 0;
	}
	if (func_33(134217728))
	{
		if (func_210(Local_2026.f_633) > 2000)
		{
			return 0;
		}
		return 1;
	}
	if (func_66(&Local_17, &Local_2026))
	{
		return 0;
	}
	if (func_210(Local_17.f_318) > 2000)
	{
		return 0;
	}
	return 1;
}

int func_363(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	return (Local_361[iParam0 /*52*/])->f_41;
}

void func_364(bool bParam0)
{
	LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
	if (bParam0)
	{
		LAW::_0xC76F252371150D9A(PLAYER::PLAYER_ID());
	}
	func_126(33554432);
}

int func_365(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939168->f_12)
	{
		if ((bParam2 || Global_1939168->f_13 > 0) || Global_1939168->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939168->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939168->f_14 > 0 || (bParam2 && Global_1939168->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939168->f_7)
		{
			if (bParam2 || Global_1939168->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_366(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (func_368(iParam0))
	{
		return;
	}
	if (func_598(func_597(iParam0), 1, bParam1))
	{
		func_599(iParam0);
	}
}

int func_367(bool bParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_600(bParam0);
		case -19759302:
			return func_601(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_368(int iParam0)
{
	return func_113(Local_2026.f_9, iParam0);
}

void func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_363(255) == 3)
	{
		return;
	}
	if (Local_17.f_299 == 0)
	{
		if (func_602() == 3)
		{
			func_603(3);
		}
		return;
	}
	iVar0 = Local_17.f_299;
	iVar1 = func_363(255);
	if (func_258(256, 255) && func_258(1, 255))
	{
		func_604(1, 0, 1);
		func_86(0);
		func_87(1);
		func_84(1);
	}
	if ((func_258(1, 255) && !func_258(512, 255)) && iVar1 != 3)
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
	}
	if (func_605(8))
	{
		func_105(iVar0);
		func_603(3);
		return;
	}
	switch (iVar1)
	{
		case 0:
			func_606(iVar0);
			func_607(iVar0);
			if (func_602() == iVar1)
			{
				return;
			}
			if (Local_2026.f_537 == 0)
			{
				func_603(3);
				return;
			}
			func_603(1);
			break;
		case 1:
			if (func_258(256, 255) && func_258(1, 255))
			{
				func_608();
			}
			if (!func_258(32, 255))
			{
				if (func_609(iVar0, Local_17.f_299.f_2))
				{
					func_261();
				}
				func_262(32);
			}
			func_610(iVar0, Local_17.f_299.f_2);
			if (func_602() == iVar1)
			{
				return;
			}
			if (func_258(1, 255))
			{
				func_611();
				func_612(iVar0, Local_17.f_299.f_2);
				func_613(iVar0, Local_17.f_299.f_2);
				if (!func_258(256, 255))
				{
					AUDIO::_0x6339C1EA3979B5F7("default", "RDRO_Scripted_Cutscene_Scenes");
					func_614();
				}
			}
			func_262(256);
			func_615();
			func_603(2);
			break;
		case 2:
			if (!func_258(64, 255))
			{
				iVar2 = func_210(Local_17.f_299.f_3);
				iVar3 = func_616(iVar0, Local_17.f_299.f_2);
				if (func_258(1, 255))
				{
					func_617(iVar0, Local_17.f_299.f_2, iVar3, iVar2);
				}
				if (iVar2 < iVar3)
				{
					return;
				}
			}
			else if (func_258(1, 255))
			{
				func_608();
			}
			func_262(64);
			func_618(iVar0, Local_17.f_299.f_2);
			if (func_602() == iVar1 && !func_605(4))
			{
				return;
			}
			if (Local_17.f_299.f_2 < Local_2026.f_537 && func_602() != 3)
			{
				func_495(32);
				func_495(64);
				func_615();
				func_603(1);
				return;
			}
			func_105(iVar0);
			func_603(3);
			break;
	}
}

int func_370()
{
	struct<2> Var0;

	if (func_32())
	{
		return 1;
	}
	Var0 = { func_619() };
	if (!func_28(Var0))
	{
		return 0;
	}
	if (!func_29(Local_2026.f_2, Var0))
	{
		return 1;
	}
	return 0;
}

void func_371(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_620(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_372(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_621(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_373(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_622(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_374(var uParam0, var uParam1, float fParam2)
{
	if (func_623(uParam0, uParam1, fParam2))
	{
		func_624(uParam1, fParam2);
		func_132(131072);
	}
	else
	{
		func_244(&(fParam2->f_202.f_51));
		func_229(131072);
	}
	if (func_228(131072))
	{
		if (func_228(262144))
		{
			func_625(0);
			func_229(262144);
		}
	}
	else if (!func_228(262144))
	{
		func_625(1);
		func_132(262144);
	}
}

void func_375()
{
	int iVar0;

	iVar0 = Local_2026.f_174.f_1;
	if (func_626(iVar0))
	{
		func_451(iVar0, 1);
	}
	else
	{
		func_451(iVar0, 0);
	}
	if (func_627(iVar0))
	{
		func_452(iVar0, 1);
	}
	else
	{
		func_452(iVar0, 0);
	}
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_628(&iVar0, &iVar1);
	func_629(iVar2, iVar0, iVar1);
}

void func_377(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_531())
	{
		func_246(fParam2);
		return;
	}
	iVar0 = func_630(uParam0, uParam1, fParam2);
	switch (iVar0)
	{
		case 0:
			func_246(fParam2);
			return;
		case 8:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 9;
			}
			break;
		case 1:
			if (func_632())
			{
				iVar0 = 2;
			}
			break;
		case 3:
			if (func_632())
			{
				iVar0 = 4;
			}
			break;
		case 10:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 11;
			}
			break;
		case 12:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 13;
			}
			break;
		case 18:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 19;
			}
			break;
		case 17:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 16;
			}
			break;
		case 21:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 20;
			}
			break;
		case 24:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 25;
			}
			break;
		case 27:
			switch (func_200(&Local_2026))
			{
				case -19759302:
					func_633(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
				case -409129282:
					func_634(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
			}
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 26;
			}
			else if (bVar2)
			{
				iVar0 = 28;
			}
			if (iVar0 != 28)
			{
				bVar3 = func_635(iVar0, bVar1, iVar4, iVar5);
			}
			break;
		case 22:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 23;
			}
			break;
		case 14:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 15;
			}
			break;
		case 31:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 30;
			}
			break;
	}
	func_636(iVar0, fParam2, bVar3);
}

void func_378()
{
	if (func_637())
	{
		func_638();
		func_132(4);
		return;
	}
	if (func_639())
	{
		func_640();
		func_132(2);
	}
}

void func_379(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_228(65536))
	{
		iVar1 = func_641(fParam0);
		iVar2 = func_642(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_643(&(Local_2026.f_202.f_77), iVar2, iVar0);
			func_644(&(Local_2026.f_202.f_77), iVar1, iVar0);
			iVar0++;
		}
		func_132(65536);
	}
}

void func_380(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if ((func_645(fParam2->f_202.f_61) && func_646(fParam2->f_202.f_61, 1)) && func_647(fParam2->f_202.f_61, 1))
	{
		iVar0 = func_648(uParam0, fParam2);
		if (iVar0 != -1)
		{
			((*uParam1)[Local_2026.f_634 /*52*/])->f_46 = iVar0;
			func_39((*uParam1)[Local_2026.f_634 /*52*/], 128);
		}
	}
	iVar1 = func_522(uParam0, fParam2);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	if (func_649(&bVar2))
	{
		if (bVar2)
		{
			func_650(uParam0, uParam1, fParam2);
		}
		func_651(&(Local_2026.f_202.f_62), &(fParam2->f_202.f_77), iVar1, 0, 30000, 0, 404851220, 0, 0, 0, 0);
	}
	else
	{
		func_248(&(fParam2->f_202.f_77), 0, 0);
		func_249(&(Local_2026.f_202.f_62), 1);
	}
	if (func_652(&iVar3))
	{
		if (func_645(fParam2->f_202.f_61))
		{
			func_653(fParam2->f_202.f_61, 1, 1, 1);
			func_654(fParam2->f_202.f_61, 1, 1);
			func_655(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
		else
		{
			fParam2->f_202.f_61 = func_657(func_656(), joaat("INPUT_INTERACT_LOCKON_ROB"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_655(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
	}
	else if (func_645(fParam2->f_202.f_61))
	{
		func_653(fParam2->f_202.f_61, 0, 1, 1);
		func_654(fParam2->f_202.f_61, 0, 1);
	}
	if (!func_33(1))
	{
		return;
	}
	if (func_658())
	{
		return;
	}
	if (func_228(512))
	{
		func_660(func_659(), 0, 0);
		func_229(512);
	}
	if (func_228(1024))
	{
		func_660(func_661(), 0, 0);
		func_229(1024);
	}
	if (func_228(2048))
	{
		func_660(func_662(), 0, 0);
		func_229(2048);
	}
	if (func_228(8192))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52))
		{
			func_660(func_663(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		func_229(8192);
	}
	if (func_228(4096))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52) && Local_2026.f_202.f_52 != PLAYER::PLAYER_ID())
		{
			func_660(func_664(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		func_229(4096);
	}
	if (!func_228(32768) && func_346())
	{
		func_660(func_665(), func_666(), func_667());
		func_132(32768);
	}
	if (func_228(16384))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52))
		{
			func_660(func_668(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		func_229(16384);
	}
}

Vector3 func_381(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_383(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

int func_382(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_110(iParam0, uParam1))
	{
		return 0;
	}
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam1, uParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *uParam1 };
		Var2.f_2 = 1089670230;
		Var2.f_3 = iVar1;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 1196324698;
			Var2.f_3 = uParam2;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

var func_384(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_385(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 26, &uParam1);
}

void func_386(var uParam0)
{
	if (&Global_1051202->f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 31, 26, &(Global_1051202->f_16[0]));
}

int func_387(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_178(Var0, 1323038251, &iVar5, 0);
	}
	return iVar5;
}

bool func_388(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.05f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	bVar2 = fVar1 < fVar0;
	return bVar2;
}

int func_389(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	bool bVar15;
	int iVar16;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iParam0 /*2*/])))
	{
		return 1;
	}
	if (!func_176(&Var0, iParam0))
	{
		return 1;
	}
	func_178(Var0, 873236619, &bVar15, 0);
	func_314(Var0, 644136394, &vVar8, 0);
	func_314(Var0, -2119193689, &vVar11, 0);
	func_311(Var0, 1471513692, &fVar14, 0);
	func_177(Var0, 1339124518, &uVar5, 0);
	if (bVar15)
	{
		iVar7 = uVar5;
	}
	else
	{
		iVar6 = uVar5;
	}
	if (!bVar15)
	{
		if (!STREAMING::IS_MODEL_VALID(iVar6) || iVar6 == 0)
		{
			return 1;
		}
	}
	if (bVar15)
	{
		iVar16 = PROPSET::_CREATE_PROPSET_2(iVar7, vVar8, func_669(iParam0), fVar14, 1200f, true, true);
		if (!PROPSET::_DOES_PROPSET_EXIST(iVar16))
		{
			return 1;
		}
		Local_17.f_278[iParam0 /*2*/] = NETWORK::_0x74F99EF7EF503398(iVar16);
		func_670(iParam0, 1);
	}
	else
	{
		if (!func_671(Local_17.f_278[iParam0 /*2*/], iVar6, vVar8, 1, 0))
		{
			return 0;
		}
		if (fVar14 == 0f && !func_382(vVar11))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(&(Local_17.f_278[iParam0 /*2*/])), vVar11, 2, false);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(&(Local_17.f_278[iParam0 /*2*/])), fVar14);
		}
	}
	return 1;
}

float func_390(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_173(uParam0, &Var0, iParam1))
	{
		func_311(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

int func_391(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_392(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!func_172(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (func_672(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_0xC239DBD9A57D2A71(1054492269, vParam2, true, false, 1, true));
	}
	else if (func_673(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_0xC239DBD9A57D2A71(-950361972, vParam2, true, false, 1, true));
	}
	else if (bParam8 != 0 && VEHICLE::_0xB9D5BDDA88E1BB66(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_VEHICLE_2(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_393(int iParam0, var uParam1, int iParam2)
{
	func_122(&((uParam1->f_3[iParam0 /*4*/])->f_1), iParam2);
}

int func_394(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = &uParam2->f_45[iParam0 /*6*/];
	iVar1 = func_179(uParam2, iParam0);
	vVar2 = { (uParam2->f_45[iParam0 /*6*/])->f_2 };
	fVar5 = func_674(&Local_2026, iParam0);
	iVar6 = func_675(&Local_2026, iParam0);
	iVar7 = (uParam2->f_45[iParam0 /*6*/])->f_5;
	if (func_676())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
		{
			iVar8 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
			PED::DELETE_PED(&iVar8);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
		{
			iVar8 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
			PED::DELETE_PED(&iVar8);
		}
		return 1;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar1 = func_180(iVar0);
	}
	if (func_202(iParam0, &Local_17, 16777216))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar7 /*4*/])))
	{
		return 1;
	}
	iVar9 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar7 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar9))
	{
		return 1;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return 1;
	}
	if ((!func_272(iParam0, 1) && !func_272(iParam0, 65536)) && func_677(&(uParam2->f_45[iParam0 /*6*/])))
	{
		if (func_382(vVar2))
		{
			return 1;
		}
		fVar5 = (fVar5 + ENTITY::GET_ENTITY_HEADING(iVar9));
		vVar2 = { func_580(ENTITY::GET_ENTITY_COORDS(iVar9, false, false), fVar5, vVar2) };
		func_391(&vVar2, 1088421888 /* Float: 7f */);
	}
	if (func_272(iParam0, 2) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		if (!func_678(iParam0, &iVar10))
		{
			iVar10 = func_181(iVar0);
		}
		if (iVar10 == 0)
		{
			return 1;
		}
		func_679(&((uParam1->f_16[iParam0 /*12*/])->f_1), iVar10, vVar2, fVar5, 1, 0, 1, 1, 1);
		return 0;
	}
	func_680(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		if (func_272(iParam0, 2))
		{
			if (!func_681(uParam1->f_16[iParam0 /*12*/], (uParam1->f_16[iParam0 /*12*/])->f_1, iVar1, -1, 1, 1, 1, 0))
			{
				return 0;
			}
		}
		else if (func_272(iParam0, 1))
		{
			if (!func_682(uParam1->f_16[iParam0 /*12*/], &(uParam1->f_3[iVar7 /*4*/]), iVar1, iVar6, 1, 1, 1))
			{
				return 0;
			}
		}
		else if (!func_679(uParam1->f_16[iParam0 /*12*/], iVar1, vVar2, fVar5, 1, 0, 1, 1, 1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		NETWORK::PREVENT_NETWORK_ID_MIGRATION((uParam1->f_16[iParam0 /*12*/])->f_1);
	}
	NETWORK::PREVENT_NETWORK_ID_MIGRATION(&(uParam1->f_16[iParam0 /*12*/]));
	if (!func_683(iParam0))
	{
		return 0;
	}
	if (func_272(iParam0, 2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED((uParam1->f_16[iParam0 /*12*/])->f_1), 1);
	}
	else if (!func_272(iParam0, 1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), 1);
	}
	if ((func_272(iParam0, 4) && uParam1->f_322 < 4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[uParam1->f_322 /*5*/])))
	{
		iVar11 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar11) && !NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar11))
		{
			return 0;
		}
		if (!func_671(uParam1->f_257[uParam1->f_322 /*5*/], func_184(), ENTITY::GET_ENTITY_COORDS(iVar11, true, false), 1, 0))
		{
			return 0;
		}
		iVar12 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[uParam1->f_322 /*5*/]));
		TASK::_0xF0B4F759F35CC7F5(iVar12, -2141086268, iVar11, 0, 0);
		MISC::_0x7FA58CED69405F9A(iVar12, 3);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar12, 12, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar12, 22, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar12, 21, true);
		func_418(uParam1->f_322, uParam1, 8);
		(Local_17.f_257[uParam1->f_322 /*5*/])->f_2 = iVar7;
		func_418(uParam1->f_322, uParam1, 128);
		func_418(uParam1->f_322, uParam1, 64);
		uParam1->f_322++;
	}
	if (iVar0 == 1095997463)
	{
		func_275(iParam0, uParam1, 1024);
	}
	if (func_272(iParam0, 8))
	{
		func_275(iParam0, uParam1, 2048);
	}
	func_275(iParam0, &Local_17, 16777216);
	return 1;
}

void func_395()
{
	Local_2026.f_637 = 0;
}

int func_396(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	bool bVar14;

	if (bParam3 && !func_684(iParam0, uParam1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar1 = (Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241;
	if (bVar1)
	{
		if (func_685(iParam0, &uVar2))
		{
			PED::_0x89F5E7ADECCCB49C(iVar0, func_686(&uVar2));
		}
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 1095997463)
	{
		fVar10 = func_687(&Local_2026, iParam0);
		fVar11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar10 != 0f && fVar11 <= func_429(fVar10, 0f, 1f))
		{
			func_275(iParam0, uParam1, 256);
		}
	}
	fVar12 = func_688(&Local_2026, iParam0);
	if (fVar12 > 0f)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, BUILTIN::ROUND(fVar12));
		func_689(iVar0, 1f, 0);
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241 && func_690(&iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else if (bVar1 && func_691(&Local_2026, iParam0, &iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	}
	PED::SET_PED_COMBAT_RANGE(iVar0, 3);
	PED::SET_PED_ID_RANGE(iVar0, 160f);
	PED::SET_PED_SEEING_RANGE(iVar0, 200f);
	PED::_0xD77AE48611B7B10A(iVar0, 0.48f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	if (func_202(iParam0, &Local_17, 32768))
	{
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_AS_COP(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iVar0, 1);
		if (Global_1901929->f_160.f_31)
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (func_33(256))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
	}
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 824585797:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 65, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("driver"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case -522830230:
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 89, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			bVar14 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
			if (!func_237(bVar14) || WEAPON::_0x959383DCD42040DA(bVar14))
			{
				PED::_0x815C0074A1BC0D93(iVar0, 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 96, true);
			}
			break;
		case -306837416:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			break;
		case 401658241:
			func_692(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, false, 1f);
			PED::_0x712B2C2B2471B493(iVar0, 554382346);
			TASK::_0x3AD8EFF9703BE657(iVar0, 0f);
			break;
		case -193064196:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case -2133983324:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case 1095997463:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 337, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
			if (Local_2026.f_10 == -409129282)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			}
			else if (Local_2026.f_10 == -19759302)
			{
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, -1728509733, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2048, true);
			DECORATOR::DECOR_SET_BOOL(iVar0, func_693(), true);
			if (func_200(&Local_2026) == -19759302)
			{
				MISC::_0x7FA58CED69405F9A(iVar0, 3);
				PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
			}
			break;
		case 1566032419:
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
			PED::SET_PED_RESET_FLAG(iVar0, 36, true);
			PED::SET_PED_CAN_RAGDOLL(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	return 1;
}

void func_397(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if ((uParam1->f_16[iParam0 /*12*/])->f_11 < 0)
	{
		return;
	}
	if (func_675(&Local_2026, iParam0) != -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return;
	}
	iVar0 = (uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3;
	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!func_272(iParam0, 1))
	{
		return;
	}
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		return;
	}
	(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3 = PED::CREATE_GROUP(0);
	iVar0 = (uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3;
	PED::SET_GROUP_FORMATION(iVar0, 5);
	PED::_0x478F6B9920446CE2(iVar0, 0);
	PED::SET_PED_AS_GROUP_LEADER(iVar1, iVar0, 0);
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if ((uParam1->f_16[iVar3 /*12*/])->f_2 != -306837416)
		{
		}
		else if ((uParam1->f_16[iParam0 /*12*/])->f_11 != (uParam1->f_16[iVar3 /*12*/])->f_11)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iVar3 /*12*/])))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(&(uParam1->f_16[iVar3 /*12*/]));
			PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, (uParam1->f_16[iVar3 /*12*/])->f_8, iVar2);
			PED::SET_PED_AS_GROUP_MEMBER(iVar4, iVar0);
			PED::_0x0E9E95FDEDCC9D35(iVar4, iVar2, 0);
			iVar2++;
		}
		iVar3++;
	}
}

int func_398(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam1 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_399(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (func_202(iParam0, uParam2, 32))
	{
		return;
	}
	if (!func_202(iParam0, uParam2, 4) && !func_202(iParam0, uParam2, 524288))
	{
		if (func_202(iParam0, uParam2, 65536) || func_202(iParam0, uParam2, 131072))
		{
			if ((((Local_17.f_16[iParam0 /*12*/])->f_3 != 28 && (Local_17.f_16[iParam0 /*12*/])->f_3 != 24) && !PED::IS_PED_HOGTIED(iParam1)) && ENTITY::_0x61914209C36EFDDB(iParam1) == 0)
			{
				func_414(iParam0, uParam2, 65536);
				func_414(iParam0, uParam2, 131072);
			}
		}
		return;
	}
	iVar0 = 255;
	if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_16[iParam0 /*12*/])->f_7))
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((Local_17.f_16[iParam0 /*12*/])->f_7);
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	bVar4 = func_202(iParam0, uParam2, 65536);
	bVar5 = func_202(iParam0, uParam2, 131072);
	if (((!bVar4 && !bVar5) && !func_202(iParam0, &Local_17, 67108864)) && iVar0 != 255)
	{
		if ((func_41(Local_361[iVar0 /*52*/], 32) && func_332(Local_2026.f_625, vVar1)) || (func_41(Local_361[iVar0 /*52*/], 64) && func_332(Local_2026.f_626, vVar1)))
		{
			func_694(iParam0, (Local_17.f_16[iParam0 /*12*/])->f_7);
		}
	}
	iVar6 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (((Local_17.f_16[iParam0 /*12*/])->f_7 == 255 || iVar0 == 255) || !func_695(iParam0, iVar0))
	{
		if (iVar6 != 3 && 1)
		{
			return;
		}
	}
	if (func_202(iParam0, uParam2, 65536))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_696(iParam0, uParam2, 0);
		return;
	}
	else if (func_202(iParam0, uParam2, 131072))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_696(iParam0, uParam2, 1);
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_7 == 255 || iVar0 == 255)
	{
		return;
	}
	if (!bVar4 && !bVar5)
	{
		if (func_41(Local_361[iVar0 /*52*/], 64) && func_695(iParam0, iVar0))
		{
			func_275(iParam0, uParam2, 131072);
		}
		else if (func_41(Local_361[iVar0 /*52*/], 32) && func_695(iParam0, iVar0))
		{
			func_275(iParam0, uParam2, 65536);
		}
	}
}

void func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_557(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 != -1088690539 && func_398(iParam0, func_697(iVar0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
		{
			iVar1 = func_698(iParam0, uParam1);
		}
		if (iVar0 == 1095997463)
		{
			func_699(iParam0, uParam1, bParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && DECORATOR::DECOR_EXIST_ON(iVar1, func_693()))
			{
				DECORATOR::DECOR_REMOVE(iVar1, func_693());
			}
		}
		func_700(iParam0, uParam1, 0, 1, 0);
		return;
	}
	if (iVar0 == -1088690539)
	{
		if (func_701(iParam0))
		{
			func_235(iParam0);
			func_702(iParam0);
		}
		return;
	}
	iVar1 = func_698(iParam0, uParam1);
	func_703(iParam0, uParam1, iParam2, bParam3);
	func_704(iParam0, uParam1, iParam2, bParam3);
	func_705(iParam0, iVar1);
	switch (func_557(iParam0, uParam1))
	{
		case joaat("driver"):
			func_706(iParam0, uParam1, iParam2, bParam3);
			break;
		case -193064196:
			func_707(iParam0, uParam1, iParam2, bParam3);
			break;
		case -522830230:
			func_708(iParam0, uParam1, iParam2, bParam3);
			break;
		case 1095997463:
			func_709(iParam0, uParam1, iParam2, bParam3);
			break;
		case -306837416:
			func_710(iParam0, uParam1, iParam2, bParam3);
			break;
		case 824585797:
			func_711(iParam0, uParam1, iParam2, bParam3);
			break;
		case 1566032419:
			func_712(iParam0, uParam1, iParam2, bParam3);
			break;
		case 401658241:
			func_713(iParam0, uParam1, iParam2, bParam3);
			break;
		case -2133983324:
			func_714(iParam0, uParam1, iParam2, bParam3);
			break;
	}
}

void func_401(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_339(iParam0, uParam1, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if ((func_33(256) && !func_55(uParam1, 16)) && func_549(iVar0, (Local_2026.f_29[iParam0 /*5*/])->f_1, 0) > 3f)
	{
		func_63(uParam1, 16);
	}
	if (func_715(iVar0) && func_55(uParam1, 16))
	{
		if (!func_33(256))
		{
			if (func_716(uParam1, joaat("driver"), iParam0))
			{
				return;
			}
			if (func_716(uParam1, 824585797, iParam0))
			{
				return;
			}
		}
		func_393(iParam0, uParam1, 1);
		(Local_17.f_3[iParam0 /*4*/])->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_402(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!func_41(Local_361[iVar2 /*52*/], 32) && !func_41(Local_361[iVar2 /*52*/], 64))
			{
				if (!bParam0 || _NAMESPACE26::NETWORK_GET_GANG_ID(iVar1) != Local_17.f_316)
				{
				}
				else if (func_41(Local_361[iVar2 /*52*/], 8388608))
				{
				}
				else
				{
					return 0;
					Jump @170; //curOff = 141
					if (bParam0)
					{
						if (_NAMESPACE26::NETWORK_GET_GANG_ID(iVar1) != Local_17.f_316)
						{
						}
						else
						{
							return 0;
						}
					}
				}
				iVar0++;
				return 1;
			}
		}
	}

int func_403(var uParam0)
{
	return uParam0->f_2;
}

int func_404(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_405(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (func_202(iVar0, uParam0, 32))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_406(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;

	if (!func_203(iParam0, uParam1, 128))
	{
		return;
	}
	if (func_203(iParam0, uParam1, 16))
	{
		return;
	}
	if (func_203(iParam0, uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[iParam0 /*5*/])))
	{
		func_717(iParam0, uParam1);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_717(iParam0, uParam1);
		return;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	func_718(iParam0, iVar0, vVar5, &iVar1, &iVar2, &iVar3, &bVar4);
	if (iVar1 != 0)
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	}
	bVar8 = func_203(iParam0, &Local_17, 256);
	bVar9 = func_203(iParam0, &Local_17, 512);
	if (iVar1 == 0 || !bVar4)
	{
		if (bVar8)
		{
			func_719(iParam0, uParam1, 0);
			return;
		}
		else if (bVar9)
		{
			func_719(iParam0, uParam1, 1);
			return;
		}
	}
	if (((Local_17.f_257[iParam0 /*5*/])->f_3 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iParam0 /*5*/])->f_3)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_257[iParam0 /*5*/])->f_3))
	{
		return;
	}
	if ((!bVar8 && !bVar9) && !func_203(iParam0, &Local_17, 4096))
	{
		if ((iVar1 == 2 && func_332(Local_2026.f_625, vVar5)) || (iVar1 == 3 && func_332(Local_2026.f_626, vVar5)))
		{
			func_720(iParam0, (Local_17.f_257[iParam0 /*5*/])->f_3);
		}
	}
	if (!bVar8 && !bVar9)
	{
		if (func_721(vVar5, iVar1, iVar2, bVar4, iVar3, 0))
		{
			func_418(iParam0, &Local_17, 256);
		}
		else if (func_721(vVar5, iVar1, iVar2, bVar4, iVar3, 1))
		{
			func_418(iParam0, &Local_17, 512);
		}
	}
}

int func_407()
{
	if (!func_33(65536))
	{
		return 0;
	}
	if (func_403(&Local_17) <= 2)
	{
		return 0;
	}
	if (!func_55(&Local_17, 134217728))
	{
		return 0;
	}
	if (func_55(&Local_17, 524288))
	{
		return 0;
	}
	if (func_55(&Local_17, 512))
	{
		return 0;
	}
	if (func_404(&Local_17, 401658241))
	{
		return 0;
	}
	return 1;
}

void func_408()
{
	Local_17.f_305.f_5 = 0;
	Local_17.f_305.f_6 = func_722();
	Local_17.f_305.f_7 = func_723();
	Local_17.f_305.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_17.f_305.f_2 = { 0f, 0f, 0f };
}

void func_409(int iParam0)
{
	Local_17.f_305 = iParam0;
}

int func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_55(&Local_17, 256))
	{
		if (func_210(Local_17.f_305.f_9) < 8000)
		{
			return 0;
		}
	}
	else if (func_210(Local_17.f_305.f_9) < Local_17.f_305.f_7)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if ((Local_17.f_16[iVar1 /*12*/])->f_2 != 0)
		{
			if ((Local_17.f_16[iVar1 /*12*/])->f_2 == 401658241)
			{
				iVar2++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 < Local_17.f_305.f_6)
	{
		return 0;
	}
	if (iVar2 + Local_17.f_305.f_6) > func_724()
	{
		return 0;
	}
	return 1;
}

int func_411(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!VOLUME::DOES_VOLUME_EXIST(Local_2026.f_619))
	{
		return 0;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2026.f_619) };
	fVar7 = -1f;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if ((Local_17.f_16[iVar8 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (func_202(iVar8, &Local_17, 32) || func_202(iVar8, &Local_17, 262144))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar8 /*12*/])))
				{
				}
				else
				{
					iVar9 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar8 /*12*/]));
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 130f || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		case -409129282:
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (((!func_203(iVar8, &Local_17, 128) || func_203(iVar8, &Local_17, 2)) || func_203(iVar8, &Local_17, 16)) || func_203(iVar8, &Local_17, 1024))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar8 /*5*/])))
				{
				}
				else
				{
					iVar10 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar8 /*5*/]));
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar10, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 130f || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		default:
			return 0;
	}
	if (fVar7 < 0f)
	{
		return 0;
	}
	return 1;
}

int func_412(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (func_113((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_413(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (func_113((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_414(int iParam0, var uParam1, int iParam2)
{
	func_437(&((uParam1->f_16[iParam0 /*12*/])->f_4), iParam2);
}

int func_415(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_416(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && func_113((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (!func_113((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_417(int iParam0, var uParam1, int iParam2)
{
	func_437(&((uParam1->f_257[iParam0 /*5*/])->f_1), iParam2);
}

void func_418(int iParam0, var uParam1, int iParam2)
{
	func_122(&((uParam1->f_257[iParam0 /*5*/])->f_1), iParam2);
}

void func_419(var uParam0, int iParam1)
{
	func_437(&(uParam0->f_1), iParam1);
}

int func_420(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	vector3 vVar9;
	bool bVar12;
	float fVar13;

	iVar0 = 401658241;
	iVar1 = func_238();
	iVar2 = func_239();
	bVar3 = func_725();
	vParam2 = { vParam2 + func_726(iParam0, iParam1) };
	if (!func_172(iVar1))
	{
		return 0;
	}
	if (!func_172(iVar2))
	{
		return 0;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam2);
	if (!ENTITY::_0x6BFBDC46139C45AB(vParam2))
	{
		return 0;
	}
	if (Local_17.f_305.f_8 == -1)
	{
		if (!func_727(&iVar4))
		{
			return 1;
		}
		Local_17.f_305.f_8 = iVar4;
	}
	else
	{
		iVar4 = Local_17.f_305.f_8;
	}
	iVar5 = 2;
	iVar6 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0);
	iVar7 = (iVar6 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar7 < iVar5)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar6 + (iVar5 - iVar7)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < (iVar6 + (iVar5 - iVar7)))
		{
			return 1;
		}
	}
	if (Local_17.f_305.f_1 != -1)
	{
		switch (Local_2026.f_10)
		{
			case -409129282:
				if (((func_203(Local_17.f_305.f_1, &Local_17, 128) && !func_203(Local_17.f_305.f_1, &Local_17, 16)) && !func_203(Local_17.f_305.f_1, &Local_17, 2)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[Local_17.f_305.f_1 /*5*/])))
				{
					bVar12 = true;
					uVar8 = Local_17.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_257[Local_17.f_305.f_1 /*5*/])), false, false) };
				}
				break;
			case -19759302:
				if ((func_202(Local_17.f_305.f_1, &Local_17, 1024) && !func_202(Local_17.f_305.f_1, &Local_17, 32)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[Local_17.f_305.f_1 /*12*/])))
				{
					bVar12 = true;
					uVar8 = Local_17.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_16[Local_17.f_305.f_1 /*12*/])), false, false) };
				}
				break;
		}
	}
	if (!bVar12 && !func_728(vParam2, &uVar8, &vVar9, 1128792064 /* Float: 200f */))
	{
		return 1;
	}
	fVar13 = func_729(vParam2, vVar9);
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return 1;
	}
	if (iVar2 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar2 = func_181(iVar0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iVar4 /*12*/])->f_1))
	{
		if (iVar2 == 0)
		{
			return 1;
		}
		if (!func_679(&((Local_17.f_16[iVar4 /*12*/])->f_1), iVar2, vParam2, fVar13, 1, 0, 1, 1, 1))
		{
			return 0;
		}
		NETWORK::PREVENT_NETWORK_ID_MIGRATION((Local_17.f_16[iVar4 /*12*/])->f_1);
		return 0;
	}
	NETWORK::PREVENT_NETWORK_ID_MIGRATION((Local_17.f_16[iVar4 /*12*/])->f_1);
	func_680(iVar4);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar4 /*12*/])) && !func_681(Local_17.f_16[iVar4 /*12*/], (Local_17.f_16[iVar4 /*12*/])->f_1, iVar1, -1, 1, 1, 1, 0))
	{
		return 0;
	}
	NETWORK::PREVENT_NETWORK_ID_MIGRATION(&(Local_17.f_16[iVar4 /*12*/]));
	(Local_17.f_16[iVar4 /*12*/])->f_2 = iVar0;
	(Local_17.f_16[iVar4 /*12*/])->f_8 = { func_730(iParam0, iParam1) };
	(Local_17.f_16[iVar4 /*12*/])->f_11 = uVar8;
	if (bVar3)
	{
		func_275(iVar4, &Local_17, 32768);
	}
	if (!func_396(iVar4, &Local_17, &Local_2026, 1))
	{
		return 0;
	}
	return 1;
}

void func_421(var uParam0, int iParam1, bool bParam2)
{
	switch (func_403(uParam0))
	{
		case 0:
			func_731(1, uParam0);
			break;
		case 1:
			if (func_732(uParam0, 8, 1))
			{
				if (func_732(uParam0, 64, 1) || func_415(uParam0, 32, 1))
				{
					func_731(5, uParam0);
					return;
				}
				if (!func_733(-1, 1))
				{
					return;
				}
				func_731(3, uParam0);
				return;
			}
			if (!func_734(uParam0, 1))
			{
				return;
			}
			if (func_735(uParam0, -1))
			{
				func_731(2, uParam0);
				return;
			}
			func_731(3, uParam0);
			break;
		case 2:
			if (func_732(uParam0, 8, 1))
			{
				func_731(5, uParam0);
				return;
			}
			if (func_735(uParam0, -1))
			{
				return;
			}
			func_731(3, uParam0);
			break;
		case 3:
			if ((func_415(uParam0, 1, 1) || func_415(uParam0, 32, 1)) || func_732(uParam0, 64, 1))
			{
				func_731(5, uParam0);
				return;
			}
			break;
		case 5:
			if (func_732(uParam0, 8, 1))
			{
				if (func_732(uParam0, 2, 1))
				{
					return;
				}
				func_731(6, uParam0);
				return;
			}
			if (func_416(uParam0, 2, 1))
			{
				return;
			}
			if (!func_736(uParam0, 1, -1))
			{
				func_731(1, uParam0);
				return;
			}
			break;
	}
}

void func_422(var uParam0, int iParam1, bool bParam2)
{
	switch (func_403(uParam0))
	{
		case 0:
			func_731(1, uParam0);
			break;
		case 1:
			if (func_733(-1, 1))
			{
				func_731(4, uParam0);
				return;
			}
			if (!func_734(uParam0, 1))
			{
				return;
			}
			if (func_735(uParam0, -1))
			{
				func_731(2, uParam0);
				return;
			}
			func_731(4, uParam0);
			break;
		case 2:
			if (func_733(-1, 0))
			{
				func_731(4, uParam0);
				return;
			}
			if (func_735(uParam0, -1))
			{
				return;
			}
			func_731(4, uParam0);
			break;
		case 4:
			if (func_733(-1, 1))
			{
				return;
			}
			if (!func_736(uParam0, 1, -1))
			{
				func_731(1, uParam0);
				return;
			}
			if (func_405(uParam0))
			{
				return;
			}
			func_731(6, uParam0);
			break;
	}
}

void func_423()
{
	int iVar0;

	if (func_602() == 3)
	{
		return;
	}
	if (!func_605(1) && !func_737())
	{
		return;
	}
	if (Local_17.f_299 == 0)
	{
		iVar0 = func_738();
		if (iVar0 == 0)
		{
			func_739(3);
			return;
		}
		else if (func_496(iVar0) == 0)
		{
			func_739(3);
			return;
		}
	}
	else
	{
		iVar0 = Local_17.f_299;
	}
	switch (func_602())
	{
		case 0:
			if (!func_605(1))
			{
				Local_17.f_299 = iVar0;
				Local_17.f_299.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_740(1);
			}
			if (func_210(Local_17.f_299.f_4) > 20000)
			{
				func_740(8);
				func_739(3);
			}
			if (!func_741(2, 0))
			{
				return;
			}
			func_742(iVar0);
			if (!func_741(4, 0))
			{
				return;
			}
			func_739(1);
			break;
		case 1:
			if (!func_743(1, 0))
			{
				return;
			}
			if (!func_741(32, 0))
			{
				return;
			}
			if (!func_744(func_497(iVar0, Local_17.f_299.f_2)))
			{
				return;
			}
			Local_17.f_299.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_745(4);
			func_739(2);
			break;
		case 2:
			if (!func_741(64, 0))
			{
				return;
			}
			if (!func_605(4) && !func_744(func_497(iVar0, Local_17.f_299.f_2)))
			{
				return;
			}
			func_740(4);
			if (Local_17.f_299.f_2 < (Local_2026.f_537 - 1))
			{
				func_746();
				func_739(1);
				return;
			}
			Local_17.f_299.f_5 = 0;
			Local_17.f_299.f_2 = 0;
			func_739(3);
			break;
	}
}

int func_424(int iParam0, bool bParam1)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_4), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2026.f_540), iParam0);
		case -19759302:
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_6), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_2), iParam0);
		default:
			break;
	}
	return 0;
}

int func_425(int iParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_7;
			break;
		case -409129282:
			iVar0 = (Local_17.f_257[iParam0 /*5*/])->f_3;
			break;
		default:
			return 0;
	}
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar0))
	{
		return 0;
	}
	return 1;
}

void func_426(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	func_747(iParam0, 0, iParam1);
	func_433(iParam0, &uVar0, 0, bParam3);
	func_435(iParam0, 0, iParam2);
	func_748(532584148, iParam0, 0, 255, 0, 1);
}

int func_427(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = func_749(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_479(iVar0);
}

int func_428(int iParam0)
{
	return &(Global_1103536->f_5569[iParam0 /*5*/]);
}

float func_429(float fParam0, float fParam1, float fParam2)
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

void func_430(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_750(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_751(iParam0, 1628925866);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1295140836);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1526522745);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1901367336);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -2012562028);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1811294830);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1580699377);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -529994165);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1356198962);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 592638986);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -71665830);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -369634347);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 523648593);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 224041626);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1119225168);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 820076967);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1790072136);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1490530707);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1908007825);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 2085779592);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -169152669);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -544685409);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -649710054);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1023735420);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1126990539);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1501736823);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1614824464);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -1845287019);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1073415046);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, 1906960099);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_751(iParam0, -2023453588);
					break;
				case 1:
					*uParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_431(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	int iVar1;

	fVar0 = ((BUILTIN::TO_FLOAT(iParam4) / BUILTIN::TO_FLOAT(iParam5)) * 100f);
	iVar1 = BUILTIN::CEIL((fVar0 / 5f)) * 5;
	switch (iParam3)
	{
		case -1516819610:
			switch (iParam2)
			{
				case 0:
					if (iVar1 <= 0)
					{
						func_751(iParam0, 102861655);
					}
					switch (iVar1)
					{
						case 5:
							func_751(iParam0, 1606837351);
							break;
						case 10:
							func_751(iParam0, 1993982606);
							break;
						case 15:
							func_751(iParam0, -1120317616);
							break;
						case 20:
							func_751(iParam0, 1497203110);
							break;
						case 25:
							func_751(iParam0, 1461747036);
							break;
						case 30:
							func_751(iParam0, 1705384279);
							break;
						case 35:
							func_751(iParam0, 587764757);
							break;
						case 40:
							func_751(iParam0, 496010113);
							break;
						case 45:
							func_751(iParam0, -8927412);
							break;
						case 50:
							func_751(iParam0, -1913265366);
							break;
						case 55:
							func_751(iParam0, -1185662490);
							break;
						case 60:
							func_751(iParam0, 1041027017);
							break;
						case 65:
							func_751(iParam0, -1593666129);
							break;
						case 70:
							func_751(iParam0, 1825778741);
							break;
						case 75:
							func_751(iParam0, -1544873376);
							break;
						case 80:
							func_751(iParam0, 1557926776);
							break;
						case 85:
							func_751(iParam0, 1088477734);
							break;
						case 90:
							func_751(iParam0, 1557926776);
							break;
						case 95:
							func_751(iParam0, 956550028);
							break;
						default:
							func_751(iParam0, -781986478);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*uParam1 = 1;
					}
					break;
			}
			break;
		case 1891766540:
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_751(iParam0, 413085053);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_751(iParam0, 102861655);
						break;
					case 1:
						*uParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_432(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("pvp"):
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -73489229);
					break;
			}
			break;
		case 1038512660:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1981105632);
					break;
			}
			break;
	}
}

void func_433(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = _NAMESPACE26::NETWORK_GET_NUM_GANG_MEMBERS(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, -57805484);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, 512977886);
					break;
			}
		}
	}
	else
	{
		*uParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, -1570113901);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_751(iParam0, -1876025097);
					break;
			}
		}
	}
}

void func_434(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_472(Param2);
	if (!func_473(iVar0))
	{
		return;
	}
	iVar1 = func_474(iVar0);
	if (func_475(iVar1))
	{
		iVar2 = func_752(func_478(iVar1));
	}
	else
	{
		return;
	}
	if (iVar2 <= 0)
	{
		switch (iParam1)
		{
			case 0:
				func_751(iParam0, 1900669220);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 402273926);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1111096805);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -738447737);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 704666254);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 963311971);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1751075375);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1527623564);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -465252584);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -225219659);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 2108535411);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -1845896441);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1961468135);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, 1723008122);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -648222260);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_751(iParam0, -921745103);
					break;
			}
			break;
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_751(iParam0, func_753(iParam2));
			break;
	}
}

int func_436(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_754(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_437(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_438(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return 0;
	}
	*iParam1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		if (bParam3 && PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_439(int iParam0, int iParam1)
{
	func_437(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam1);
}

void func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_755(iParam0, &iVar1, &iVar0);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		MISC::CLEAR_BIT((*(Local_361[Local_2026.f_634 /*52*/])->f_16[iVar2 /*2*/])[iVar1], iVar0);
		iVar2++;
	}
}

bool func_441(int iParam0, int iParam1)
{
	return (((*Global_1121338)[iParam0 /*54*/])->f_47 && iParam1) != 0;
}

int func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_514(iParam0);
	if (!func_515(iVar0))
	{
		return 0;
	}
	iVar1 = func_476(iVar0);
	if (!func_477(iVar1))
	{
		return 0;
	}
	if (!func_756(iVar1, &iVar2))
	{
		return 1;
	}
	if (func_757(iVar2, 2))
	{
		return 0;
	}
	return 1;
}

bool func_443(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070355->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_444()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070355->f_19683.f_260));
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		Global_1939221 = 1;
	}
	else
	{
		Global_1939221 = 2;
	}
}

int func_446(int iParam0)
{
	if (func_758(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0)
{
	if (func_759(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_448(var uParam0)
{
	if (!func_293(&Local_2026, uParam0))
	{
		return 0;
	}
	if (!func_313(uParam0, 419371455, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_449(struct<5> Param0, int iParam5, var uParam6)
{
	var uVar0;

	if (func_177(Param0, iParam5, &uVar0, 0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	return 0;
}

void func_450(int iParam0, int iParam1)
{
	func_437(Local_2026.f_166[iParam0], iParam1);
}

void func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_332), iParam0))
		{
			return;
		}
		func_760(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_202.f_332), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_332), iParam0))
		{
			return;
		}
		func_760(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2026.f_202.f_332), iParam0);
	}
}

void func_452(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_329), iParam0))
		{
			return;
		}
		func_761(iVar0);
		func_762(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_202.f_329), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_329), iParam0))
		{
			return;
		}
		func_763(iVar0);
		func_762(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2026.f_202.f_329), iParam0);
	}
}

bool func_453(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_247(iParam0))
	{
		iVar0 = _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

int func_454(float fParam0)
{
	if (func_247(fParam0->f_202.f_56))
	{
		return 1;
	}
	return 0;
}

void func_455(int iParam0)
{
	if (iParam0->f_11 >= 0)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_11))
		{
			AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(iParam0->f_11);
		iParam0->f_11 = -1;
	}
}

void func_456()
{
	AUDIO::_0x9D746964E0CF2C5F(func_764(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_766(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_767(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_768(), func_765());
	AUDIO::_0x9D746964E0CF2C5F(func_769(), func_770());
	AUDIO::_0x9D746964E0CF2C5F(func_771(), func_772());
}

void func_457(int iParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(iParam0->f_3));
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1546991729);
	}
}

void func_458(int iParam0)
{
	if (Global_1903003->f_1 != iParam0)
	{
		Global_1903003->f_1 = iParam0;
	}
}

void func_459(int iParam0)
{
	Global_1903003 = iParam0;
}

int func_460(int iParam0, bool bParam1)
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
		iVar2 = func_773(iVar4, 1);
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
				func_774(iVar2, bVar3, bParam1);
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
					(Global_1131373->f_4641.f_2[func_504(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

void func_461(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_462()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 134:
			return 69;
		case 135:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 137:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_465(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_466(struct<2> Param0, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar9;
	int iVar10;

	Var5.f_1 = -1;
	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	if (!func_477(iVar2))
	{
		return;
	}
	iVar10 = func_479(iVar1);
	if (iVar10 == -1)
	{
		return;
	}
	iVar3 = func_480(iVar0);
	iVar4 = func_478(iVar0);
	iVar9 = func_428(iVar10);
	if (func_481())
	{
		if (bParam2 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_775(iVar0, iVar2, Param0, iVar10);
		}
		if (func_776(iVar9) != joaat("setup"))
		{
			switch (iVar4)
			{
				case 2132950130:
					break;
				case -408236271:
					func_778(iVar4, func_777());
					func_779(iVar4, 1);
					func_780(iVar0);
					func_781(iVar0);
					func_782(8388608);
					break;
				case 1766283257:
					func_778(iVar4, func_777());
					func_779(iVar4, 1);
					func_780(iVar0);
					func_781(iVar0);
					func_782(4194304);
					break;
				default:
					func_778(iVar4, func_777());
					func_779(iVar4, 1);
					func_780(iVar0);
					func_781(iVar0);
					break;
			}
		}
		func_783(iVar4, func_777());
		func_784(iVar4, bParam2);
		switch (func_785(iVar9))
		{
			case 7:
				func_786(iVar1, &Var5);
				func_787(&Var5);
				break;
		}
		func_788(iVar10, Param0, bParam2);
		func_790(func_789(iVar0), 1);
		func_791(1);
	}
	func_792(iVar3, bParam2);
	func_793();
}

int func_467(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	return func_794(iParam0, iParam1);
}

void func_468(int iParam0)
{
	func_795(iParam0);
}

void func_469(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_797(Var0) && !func_585(Var0))
	{
		return;
	}
	func_798(iParam0, 2);
	func_798(iParam0, 3);
	func_799(iParam0, 6);
	func_800(Var0, 0, 2, bParam1);
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_797(Var0))
	{
		return;
	}
	if (!func_585(Var0))
	{
		return;
	}
	if (func_801(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_800(Var0, 0, bVar2, bParam2);
	func_799(iParam0, 4);
}

void func_471(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_796(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_797(Var0))
	{
		return;
	}
	if (!func_585(Var0))
	{
		return;
	}
	if (func_801(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_800(Var0, 0, 1, bParam1);
	func_799(iParam0, 5);
}

int func_472(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_29(Param0, func_802(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_473(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_474(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_3;
}

bool func_475(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

int func_476(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_3.f_1;
}

bool func_477(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 59);
}

int func_478(int iParam0)
{
	return Global_1112103[iParam0 /*35*/];
}

int func_479(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_3.f_3;
}

int func_480(int iParam0)
{
	return ((*Global_1112103)[iParam0 /*35*/])->f_1;
}

int func_481()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 1;
	}
	return 0;
}

void func_482(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(-1808811965, func_803(iParam0)) };
	func_805(Var0, iParam1);
}

void func_483(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(-746839750, func_803(iParam0)) };
	func_806(Var0, iParam1);
}

void func_484(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_804(829565093, func_803(iParam0)) };
	func_807(Var0, iParam1);
}

void func_485(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = 622623048;
		}
		else
		{
			iVar0 = 123615871;
		}
	}
	else if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	Var1 = { func_804(iVar0, func_803(iParam0)) };
	func_808(Var1);
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { func_804(741274143, func_803(iParam0)) };
	if (bParam2)
	{
		func_808(Var0);
	}
	else
	{
		func_809(Var0, 0);
	}
}

void func_487(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar9;

	iVar0 = func_428(iParam0);
	iVar3 = func_776(iVar0);
	iVar4 = func_785(iVar0);
	vVar5.f_1 = -1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar4)
	{
		case 0:
			if (bParam2)
			{
				iVar2 = -1365731393;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar3)
				{
					case -1562099170:
						func_810(256);
						break;
					case -1318406457:
						if (func_811(iParam0, 2))
						{
							iVar2 = -406386912;
						}
						else
						{
							iVar2 = -356110550;
						}
						break;
					default:
						iVar2 = -1365731393;
						break;
				}
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 7:
			if (bParam2)
			{
				func_786(iParam5, &vVar5);
				iVar9 = vVar5.z;
				switch (iVar9)
				{
					case 0:
						iVar2 = -508253498;
						break;
					case 1:
						iVar2 = 566295171;
						break;
					case 2:
						iVar2 = -1881397389;
						break;
					default:
						iVar2 = -1365731393;
						break;
				}
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (func_811(iParam0, 4))
				{
					iVar2 = -1553095031;
				}
				else
				{
					iVar2 = -1365731393;
				}
			}
			else if (func_811(iParam0, 4))
			{
				iVar2 = 475709606;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		default:
			if (bParam2)
			{
				iVar2 = -1365731393;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
	}
	func_812(iVar0, iVar1, iVar2, func_106(Param3));
}

void func_488(int iParam0