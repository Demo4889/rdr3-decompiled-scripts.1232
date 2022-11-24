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
	struct<282> Local_17 = { 0, 0, 21, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 5, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, -1, -1, 6, 0, 0, 0, 0, 0, 0, 1, 0, 7, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 255, 0 } ;
	struct<8> Local_299[32];
	struct<1017> Local_556 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 18, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
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
	while (!func_2(Local_556.f_2))
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 282, 40);
	func_8(NETWORK::_0xBA24095EA96DFE17(&Local_17), 282, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_299, 257, 41);
	func_9(NETWORK::_0x690806BC83BC8CA2(Local_299[0 /*8*/]), 257, "m_clientData");
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
	else if (&Local_299[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] == 3)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	Local_556.f_1008 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15();
	func_16();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17();
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_18(0);
	if (DATAFILE::_0x603AC35FD4602C76(Local_556.f_577))
	{
		func_19();
		func_20();
		iVar0 = 0;
		while (iVar0 < Local_556.f_20.f_548)
		{
			func_22(func_21(iVar0));
			func_24(func_23(iVar0));
			func_22(func_25(iVar0));
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < Local_556.f_20.f_555)
		{
			iVar1 = func_26(iVar3);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				func_22(func_27(iVar3, iVar2));
				func_24(func_28(iVar3, iVar2));
				func_22(func_29(iVar3, iVar2));
				iVar2++;
			}
			iVar3++;
		}
		DATAFILE::_DATAFILE_UNLOAD(Local_556.f_577);
	}
	if (func_30(Local_556.f_957))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Local_556.f_957);
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_960), iVar4))
		{
			func_31(iVar5);
		}
		iVar4++;
	}
	func_32(0);
	func_33(0);
	func_34();
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	if (func_43(1048576))
	{
		PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 1f);
		func_44(1048576);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (func_43(4) && func_45())
		{
			func_46(131072);
		}
		return;
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 8192) && !func_47(Local_299[Local_556.f_1008 /*8*/], 16384))
	{
		func_48();
		func_49(1);
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		if (func_50(iVar6, 256))
		{
		}
		else if (func_50(iVar6, 2))
		{
		}
		else
		{
			func_22(&(Local_556.f_20.f_422[iVar6 /*4*/]));
		}
		iVar6++;
	}
	iVar8 = PLAYER::PLAYER_PED_ID();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_51(iVar0, 131072) && func_52(iVar0, &iVar7, 0, 1))
		{
			PED::_0x3088634CF8C819CF(iVar7);
		}
		if (func_53(iVar0))
		{
			if (func_52(iVar0, &iVar7, 0, 1))
			{
				ENTITY::_0x5826EFD6D73C4DE5(iVar7);
			}
			if (func_51(iVar0, 65536) && func_54(iVar0, &iVar7, 0))
			{
				ENTITY::_0x5826EFD6D73C4DE5(iVar7);
			}
		}
		if (((func_55((Local_17.f_2[iVar0 /*9*/])->f_2) && func_51(iVar0, 32768)) && func_52(iVar0, &iVar7, 1, 0)) && PED::GET_RELATIONSHIP_BETWEEN_PEDS(iVar7, iVar8) == 6)
		{
			func_56(iVar0, iVar7);
		}
		iVar0++;
	}
	if (!func_43(func_57(758533472)) && !func_43(func_57(-1416703903)))
	{
		func_58(758533472, 1);
	}
	if (func_59(8192) && func_43(4))
	{
		if (PLAYER::_0xA62BBAAE67A05BB0(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
		}
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::PLAYER_ID());
	}
	func_60();
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return;
	}
	func_61();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_62(iVar0, 1);
		iVar0++;
	}
	iVar9 = 0;
	while (iVar9 < 2)
	{
		func_63(iVar9);
		iVar9++;
	}
	iVar10 = 0;
	while (iVar10 < 5)
	{
		if (!PED::DOES_GROUP_EXIST(&(Local_17.f_192[iVar10])))
		{
		}
		else
		{
			PED::REMOVE_GROUP(&(Local_17.f_192[iVar10]));
		}
		iVar10++;
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		func_64(iVar6);
		iVar6++;
	}
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
		if (func_65() == 0)
		{
			if (func_66())
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
	Local_556 = *uParam0;
	Local_556.f_1 = uParam0->f_5;
	Local_556.f_2 = { uParam0->f_7 };
	Local_556.f_20.f_556 = func_67(Local_556.f_2);
	Local_556.f_20 = func_70(func_69(func_68(349772825), Local_556.f_20.f_556));
	Local_556.f_20.f_1 = func_68(Local_556.f_20);
	Local_556.f_20.f_16 = func_71(Local_556.f_20);
}

void func_12(var uParam0)
{
	Local_17.f_280 = uParam0->f_9;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_17.f_280))
	{
		func_72(6);
		return;
	}
	Local_17.f_279 = _NAMESPACE26::NETWORK_GET_GANG_ID(Local_17.f_280);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279))
	{
		func_72(6);
		return;
	}
	Local_17.f_278 = _NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_279);
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

void func_15()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	Local_556.f_1008 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_78(iVar0);
				break;
			case -1065733433:
				func_79(iVar0);
				break;
			case -454144443:
				func_80(iVar0);
				break;
			case -507840394:
				func_81(iVar0);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1))
		{
			case -140551285:
				func_82(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_16()
{
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 2))
	{
		func_83(Local_299[Local_556.f_1008 /*8*/], 3);
	}
	switch (func_84(Local_299[Local_556.f_1008 /*8*/]))
	{
		case 0:
			func_85();
			if (func_86() != 4)
			{
				return;
			}
			func_83(Local_299[Local_556.f_1008 /*8*/], 1);
			func_87();
			break;
		case 1:
			func_88();
			if (!func_47(Local_299[Local_556.f_1008 /*8*/], 1))
			{
				return;
			}
			func_83(Local_299[Local_556.f_1008 /*8*/], 2);
			break;
		case 2:
			func_89();
			if (func_90() != 6)
			{
				return;
			}
			if (!func_47(Local_299[Local_556.f_1008 /*8*/], 16) && func_43(4))
			{
				func_91();
			}
			func_92();
			if (!func_93())
			{
				return;
			}
			func_83(Local_299[Local_556.f_1008 /*8*/], 3);
			break;
	}
}

void func_17()
{
	if (func_86() != 4)
	{
		return;
	}
	if (func_59(4))
	{
		func_72(6);
		return;
	}
	switch (func_90())
	{
		case 0:
			func_94();
			func_72(1);
			break;
		case 1:
			if (!func_95())
			{
				return;
			}
			func_72(2);
			break;
		case 2:
			func_96();
			if (!func_59(1))
			{
				return;
			}
			func_72(3);
			break;
		case 3:
			func_97();
			if (!func_59(2))
			{
				return;
			}
			if (func_45())
			{
				func_72(4);
				return;
			}
			func_72(5);
			break;
		case 4:
			func_98();
			if (!func_59(262144))
			{
				return;
			}
			func_72(5);
			break;
		case 5:
			func_99();
			if (Local_17.f_275 <= 0)
			{
				if (func_45() && !func_59(4194304))
				{
					func_100(32);
				}
				else
				{
					func_100(64);
				}
			}
			else if (func_59(16))
			{
				if ((Local_556.f_20.f_16 == 1320143426 && Local_556.f_20.f_549 > 0) && Local_17.f_275 < Local_556.f_20.f_549)
				{
					func_100(64);
				}
				else
				{
					func_100(32);
				}
				func_100(131072);
			}
			else if (func_59(1048576))
			{
				func_100(32);
			}
			else if (func_59(8388608))
			{
				func_100(32);
			}
			if (!func_59(32) && !func_59(64))
			{
				return;
			}
			func_72(6);
			break;
		case 6:
			func_101();
			break;
	}
}

void func_18(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_978[iVar0])))
		{
		}
		else if (bParam0)
		{
			func_102(&(Local_556.f_978[iVar0]), 1);
		}
		else
		{
			func_103(&(Local_556.f_978[iVar0]));
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<5> Var12;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_553)
	{
		sVar1 = func_105(func_104(iVar0));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
		}
		else
		{
			if (!(Local_556.f_20.f_495[iVar0 /*2*/])->f_1)
			{
				return;
			}
			TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 21)
	{
		func_106(iVar2);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if ((func_107(iVar3, 4) && func_108(iVar3, &Var12)) && func_109(Var12, -1111171646, &uVar4, 0))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(func_110(&uVar4));
			func_111(iVar3, 4);
			func_111(iVar3, 8);
		}
		iVar3++;
	}
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_43(4194304))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			func_114(iVar2);
			func_115(iVar2, 0, 0);
		}
		iVar1++;
	}
	func_44(4194304);
}

int func_21(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_117(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

void func_22(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0) || iParam0 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
}

int func_23(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (!func_116(iParam0, &Var0))
	{
		return 0;
	}
	func_117(Var0, 256341061, &uVar5, 0);
	return uVar5;
}

void func_24(bool bParam0)
{
	if (!func_118(bParam0))
	{
		return;
	}
	WEAPON::_0xC3896D03E2852236(bParam0);
}

int func_25(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && func_117(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return -1038436471;
}

int func_26(int iParam0)
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 1823038874, iParam0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	func_121(&Var0, iParam0, iParam1);
	func_117(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

bool func_28(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	func_121(&Var0, iParam0, iParam1);
	func_117(Var0, 256341061, &uVar5, 1);
	return uVar5;
}

int func_29(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_121(&Var0, iParam0, iParam1) && func_117(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return -1038436471;
}

int func_30(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26831), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070355->f_26831), iParam0);
		if (func_122(iParam0))
		{
			func_123(iParam0);
		}
	}
}

void func_32(bool bParam0)
{
	if (func_43(262144) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_124(1);
		func_125(262144);
	}
	else
	{
		func_124(0);
		func_44(262144);
	}
}

void func_33(bool bParam0)
{
	if (func_43(524288) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_0x009CF9A29972C298(454742288);
		func_125(524288);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		func_44(524288);
	}
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_556.f_20.f_422[iVar0 /*4*/])->f_3))
		{
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((Local_556.f_20.f_422[iVar0 /*4*/])->f_3, true);
			STREAMING::REMOVE_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_126()));
		}
		iVar0++;
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_547)
	{
		TASK::DELETE_PATROL_ROUTE(func_127(iVar0));
		iVar0++;
	}
}

void func_36()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_556.f_950[iVar0])))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_556.f_950[iVar0]));
		}
		iVar0++;
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if ((Local_556.f_20.f_422[iVar0 /*4*/])->f_2 == -1)
		{
		}
		else
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&((Local_556.f_20.f_422[iVar0 /*4*/])->f_2), 1);
			(Local_556.f_20.f_422[iVar0 /*4*/])->f_2 = -1;
		}
		iVar0++;
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_550)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_962[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(Local_556.f_962[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_552)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_971[iVar0])))
		{
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(&(Local_556.f_971[iVar0]));
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(&(Local_556.f_971[iVar0]));
			VOLUME::DELETE_VOLUME(&(Local_556.f_971[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_975[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(Local_556.f_975[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_978[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(Local_556.f_978[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_921[iVar0 /*4*/])))
		{
			VOLUME::DELETE_VOLUME(&(Local_556.f_921[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_128(&(Local_556.f_987[iVar0]));
		iVar0++;
	}
}

void func_39()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar0 /*9*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iVar0 /*9*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar0 /*9*/]));
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
	func_129(Local_556.f_578.f_1);
	func_129(Local_556.f_578);
	func_129(Local_556.f_578.f_4);
	func_129(Local_556.f_578.f_5);
	func_129(Local_556.f_578.f_3);
	func_129(Local_556.f_578.f_2);
}

void func_40()
{
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
}

void func_41()
{
	if (!func_43(2))
	{
		return;
	}
	func_136(0);
	func_44(2);
}

void func_42()
{
	if (HUD::_0xD0976CC34002DB57(func_137()))
	{
		HUD::_TEXT_BLOCK_DELETE(func_137());
	}
}

bool func_43(int iParam0)
{
	return func_138(Local_556.f_5, iParam0);
}

void func_44(int iParam0)
{
	func_139(&(Local_556.f_5), iParam0);
}

int func_45()
{
	switch (Local_556.f_20.f_16)
	{
		case 1047079933:
		case joaat("player"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_46(int iParam0)
{
	Global_1099293->f_3 = (Global_1099293->f_3 - (Global_1099293->f_3 && iParam0));
}

bool func_47(var uParam0, int iParam1)
{
	return func_138(uParam0->f_1, iParam1);
}

void func_48()
{
	func_140(2);
}

void func_49(bool bParam0)
{
	if (bParam0)
	{
		func_141(105);
		if (!Global_1273882->f_12)
		{
			func_142(16);
		}
	}
	else
	{
		func_143(105);
		if (!Global_1273882->f_12)
		{
			func_142(16);
		}
	}
}

bool func_50(int iParam0, int iParam1)
{
	return func_138((Local_556.f_20.f_422[iParam0 /*4*/])->f_1, iParam1);
}

bool func_51(int iParam0, int iParam1)
{
	return func_138((Local_556.f_20.f_22[iParam0 /*19*/])->f_1, iParam1);
}

int func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
	{
		return 0;
	}
	*iParam1 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
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
		if (!bParam3 || !PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return 0;
		}
	}
	return 1;
}

int func_53(int iParam0)
{
	int iVar0;

	if (!func_59(8192))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_553)
	{
		if (&Local_556.f_20.f_495[iVar0 /*2*/] != iParam0)
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

int func_54(int iParam0, int iParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		return 0;
	}
	*iParam1 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
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
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 516423162:
		case 1583594396:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_56(int iParam0, int iParam1)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iParam0])))
	{
		return;
	}
	if (!MAP::_0xE9F676788F8D5E1E(&(Local_556.f_584[iParam0])))
	{
		return;
	}
	func_144(iParam0);
	MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 2096805056);
	MAP::_0xDEEDE7C41742E011(&(Local_556.f_584[iParam0]));
	Local_556.f_584[iParam0] = 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1231609204:
			return 8;
		case 1138140145:
			return 16;
		case -1416703903:
			return 32;
		case 758533472:
			return 64;
		case -2111154143:
			return 128;
		default:
			break;
	}
	return 0;
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_43(iVar0))
	{
		return;
	}
	if (func_145(iParam0, 1, bParam1))
	{
		func_125(iVar0);
	}
}

bool func_59(int iParam0)
{
	return func_138(Local_17.f_1, iParam0);
}

void func_60()
{
	if (func_43(4))
	{
		func_146(0);
		func_147(0);
		if (!func_43(1))
		{
			func_149(func_148(), 1);
		}
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		if (func_45())
		{
			func_46(131072);
		}
		if (func_59(64))
		{
			func_150();
			return;
		}
		else if (func_59(32))
		{
			func_151();
			return;
		}
	}
	else if (func_47(Local_299[Local_556.f_1008 /*8*/], 64))
	{
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	else if (func_47(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		func_46(131072);
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	else if (func_47(Local_299[Local_556.f_1008 /*8*/], 131072))
	{
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	func_152();
}

void func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_17.f_263.f_6)
	{
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(&(Local_17.f_263[iVar0])))
		{
			VOLUME::RELEASE_LOCK_VOLUME(&(Local_17.f_263[iVar0]));
		}
		iVar0++;
	}
}

void func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_KEEP_TASK(iVar0, bParam1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
}

void func_63(int iParam0)
{
	if (func_153(iParam0, 1))
	{
		OBJECT::REMOVE_PICKUP(&(Local_17.f_217[iParam0 /*2*/]));
	}
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iParam0])))
	{
		if (func_50(iParam0, 2))
		{
			iVar0 = NETWORK::_0xD08066E00D26C448(&(Local_17.f_198[iParam0]));
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar0);
		}
		else if (func_50(iParam0, 4))
		{
			iVar1 = NETWORK::NET_TO_VEH(&(Local_17.f_198[iParam0]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0, 0))
			{
				VEHICLE::_0x8E5DA070BAD3279E(iVar1, 500f, 1, 0);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (func_50(iParam0, 128))
		{
			iVar2 = NETWORK::NET_TO_PED(&(Local_17.f_198[iParam0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
		}
		else
		{
			iVar3 = NETWORK::NET_TO_OBJ(&(Local_17.f_198[iParam0]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar3);
		}
	}
}

int func_65()
{
	return Global_1572887->f_13;
}

bool func_66()
{
	return Global_1051202->f_8;
}

int func_67(struct<2> Param0)
{
	return func_154(Param0);
}

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = func_156(0, (func_155() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_157(iVar0);
}

int func_69(int iParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	var uVar12;

	if (!func_158(iParam0, &Var0))
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

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1779800513:
			return -590482787;
		case 1994622214:
			return -1711308722;
		case 1806659562:
			return 349772825;
		case -174676621:
			return 1657045547;
		default:
			break;
	}
	return iParam0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case -590482787:
			return joaat("player");
		case -1711308722:
			return 1047079933;
		default:
			break;
	}
	return 1320143426;
}

void func_72(int iParam0)
{
	Local_17 = iParam0;
}

int func_73(struct<2> Param0)
{
	if (!func_159(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_160(Param0))
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

void func_78(int iParam0)
{
	struct<31> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	int iVar37;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (func_45())
	{
		if (!func_161(iVar32, &iVar34))
		{
			return;
		}
		if (!func_162(iVar34))
		{
			return;
		}
		if (func_163(iVar34))
		{
			return;
		}
		iVar33 = PLAYER::GET_PLAYER_PED(&(Local_17.f_234[iVar34 /*2*/]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar33))
		{
			return;
		}
		if (iVar33 != iVar32)
		{
			return;
		}
		if (!Var0.f_3)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar32))
			{
				return;
			}
			if (Var0 == Var0.f_1)
			{
				return;
			}
			if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
			{
				return;
			}
			iVar35 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!PED::IS_PED_A_PLAYER(iVar35))
			{
				return;
			}
			func_164(iVar34, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar35));
			return;
		}
		if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4))
		{
			return;
		}
		if (func_165(iVar34, Var0, iVar32))
		{
			func_166(iVar34);
		}
		return;
	}
	if (!func_167(iVar32, &iVar31, &bVar36))
	{
		return;
	}
	if (!bVar36)
	{
		if (Var0.f_3)
		{
			func_168(iVar31);
		}
		return;
	}
	if (ENTITY::GET_ENTITY_HEALTH(Var0) == 0)
	{
		if (!Var0.f_3 && !Var0.f_24)
		{
			Var0.f_3 = 1;
		}
	}
	if (!Var0.f_3 || Var0.f_24)
	{
		if (!bVar36 || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar32))
		{
			return;
		}
		if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			return;
		}
		iVar37 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
		if (!PED::IS_PED_A_PLAYER(iVar37))
		{
			return;
		}
		func_169(iVar31, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar37));
		return;
	}
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	if (func_170(Var0, iVar32, iVar31))
	{
		func_171(iVar31);
	}
}

void func_79(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::IS_ENTITY_A_PED(Var0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1) || !ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar3))
	{
		return;
	}
	if (func_45())
	{
		if (!PED::IS_PED_A_PLAYER(iVar2))
		{
			return;
		}
		if (!func_161(iVar2, &iVar4))
		{
			return;
		}
		if (!func_162(iVar4))
		{
			return;
		}
		if (func_163(iVar4))
		{
			return;
		}
		func_164(iVar4, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3));
	}
	else
	{
		if (!func_167(iVar2, &iVar5, &bVar6) || !bVar6)
		{
			return;
		}
		func_169(iVar5, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3));
	}
}

void func_80(int iParam0)
{
	int iVar0;
	int iVar8;
	bool bVar9;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 8))
	{
		return;
	}
	if (!OBJECT::DOES_PICKUP_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(iVar0))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 2)
	{
		if (!func_172(iVar8, 1))
		{
		}
		else if (&Local_17.f_217[iVar8 /*2*/] != iVar0)
		{
		}
		else
		{
			bVar9 = true;
		}
		else
		{
			iVar8++;
		}
	}
	if (!bVar9)
	{
		return;
	}
	OBJECT::REMOVE_PICKUP(&(Local_17.f_217[iVar8 /*2*/]));
	func_174(11, iVar8, func_173(0, 8), -1);
}

void func_81(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 53:
			func_175(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	struct<4> Var0;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 21)
	{
		if (((Local_17.f_2[iVar8 /*9*/])->f_2 == 0 || (Local_17.f_2[iVar8 /*9*/])->f_2 == 1824637041) || (Local_17.f_2[iVar8 /*9*/])->f_2 == 516423162)
		{
		}
		else if (func_176(iVar8, 1))
		{
		}
		else if (func_51(iVar8, 67108864))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar8 /*9*/])))
		{
		}
		else
		{
			iVar9 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar8 /*9*/]));
			if (PED::IS_PED_DEAD_OR_DYING(iVar9, true))
			{
			}
			else
			{
				vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
				if (BUILTIN::VDIST(vVar10, Var0.f_3) > PED::_0x2BA9D7BF629F920C(iVar9))
				{
				}
				else
				{
					func_177(iVar8, 67108864);
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iVar8 /*9*/])))
					{
					}
					else
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar9))
						{
							PED::_0x62FDAD5E01D2DD47(iVar9, Var0.f_3, 3, 0);
						}
						if (func_178(iVar9))
						{
							if (ENTITY::_0x0C9DBF48C6BA6E4C(iVar9, Var0.f_3, 17))
							{
								TASK::TASK_AIM_AT_COORD(iVar9, Var0.f_3, 2000, 0, 0);
							}
							else
							{
								bVar6 = WEAPON::GET_BEST_PED_WEAPON(iVar9, false, false);
								if (func_118(bVar6))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(iVar9, bVar6, false, 0, false, false);
								}
								TASK::OPEN_SEQUENCE_TASK(&iVar7);
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0f, 4);
								TASK::TASK_SWAP_WEAPON(iVar9, 1, 1, 0, 0);
								TASK::TASK_INVESTIGATE(iVar9, Var0.f_3, 4000, 0);
								func_179(iVar9, &iVar7, 0, 0, 1, 1);
							}
						}
						else
						{
							bVar6 = WEAPON::GET_BEST_PED_WEAPON(iVar9, false, false);
							if (func_118(bVar6))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar9, bVar6, false, 0, false, false);
								TASK::OPEN_SEQUENCE_TASK(&iVar7);
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0f, 4);
								TASK::TASK_SWAP_WEAPON(iVar9, 1, 1, 0, 0);
								func_179(iVar9, &iVar7, 0, 0, 1, 1);
							}
							else
							{
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 2f, 0f, 4);
							}
						}
						func_177(iVar8, 67108864);
					}
				}
			}
		}
		iVar8++;
	}
}

void func_83(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_84(var uParam0)
{
	return *uParam0;
}

void func_85()
{
	bool bVar0;
	int iVar1;

	switch (func_86())
	{
		case 0:
			if (Local_17.f_278 == -1 && func_90() != 6)
			{
				return;
			}
			if (func_180(Local_17.f_279))
			{
				func_125(2097152);
				if (_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) == Local_17.f_279)
				{
					func_181();
				}
			}
			func_182();
			iVar1 = 0;
			while (iVar1 < 7)
			{
				Local_556.f_584.f_31[iVar1] = 255;
				iVar1++;
			}
			func_183();
			if (func_184())
			{
				func_185(1);
			}
			func_186(1);
			break;
		case 1:
			if (!func_188(func_187(), &(Local_556.f_577), 600, Local_556, 0, 0))
			{
				func_189(Local_299[Local_556.f_1008 /*8*/], 2);
				return;
			}
			func_190();
			func_186(2);
			break;
		case 2:
			func_191();
			func_192();
			func_193();
			func_194();
			func_195();
			func_196();
			func_197();
			func_198();
			func_199();
			func_200();
			func_201();
			func_202();
			func_203();
			func_204();
			Local_556.f_20.f_555 = func_205();
			if (func_138(Local_556.f_20.f_15, 16384))
			{
				Local_556.f_20.f_549 = (Local_556.f_20.f_549 + Local_556.f_20.f_554);
			}
			if (!func_206())
			{
				func_125(4096);
			}
			func_186(3);
			break;
		case 3:
			bVar0 = true;
			if (!func_207())
			{
				bVar0 = false;
			}
			if (!func_208())
			{
				bVar0 = false;
			}
			if (!func_209())
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				return;
			}
			func_18(1);
			func_210();
			func_186(4);
			break;
	}
}

int func_86()
{
	return Local_556.f_4;
}

void func_87()
{
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 32))
	{
		Local_556.f_1005 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_189(Local_299[Local_556.f_1008 /*8*/], 32);
	}
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_50(iVar0, 256))
		{
		}
		else if (func_50(iVar0, 2))
		{
			if (!func_211(&(Local_556.f_20.f_422[iVar0 /*4*/])))
			{
				return;
			}
		}
		else if (!func_212(&(Local_556.f_20.f_422[iVar0 /*4*/])))
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_556.f_20.f_548)
	{
		if (!func_212(func_21(iVar1)))
		{
			return;
		}
		if (!func_213(func_23(iVar1)))
		{
			return;
		}
		if ((func_214(iVar1) || func_51(iVar1, 65536)) && !func_212(func_25(iVar1)))
		{
			return;
		}
		iVar1++;
	}
	iVar4 = 0;
	while (iVar4 < Local_556.f_20.f_555)
	{
		iVar2 = func_26(iVar4);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_212(func_27(iVar4, iVar3)))
			{
				return;
			}
			if (!func_212(func_29(iVar4, iVar3)))
			{
				return;
			}
			if (!func_213(func_28(iVar4, iVar3)))
			{
				return;
			}
			iVar3++;
		}
		iVar4++;
	}
	if (!func_215(func_137(), 30, Local_556, 0, 0))
	{
		func_189(Local_299[Local_556.f_1008 /*8*/], 2);
		return;
	}
	func_216();
	func_217();
	func_189(Local_299[Local_556.f_1008 /*8*/], 1);
}

void func_89()
{
	func_218();
	func_219();
	func_220();
	func_221();
	func_222();
	func_223();
	func_224();
	func_225();
	func_226();
	func_227();
	func_228(Local_299[Local_556.f_1008 /*8*/]);
	func_229();
	func_230();
	func_231();
	func_232();
	func_233();
	func_234();
	func_235();
}

int func_90()
{
	return Local_17;
}

void func_91()
{
	var uVar0;

	uVar0 = func_236(func_45());
	func_237(uVar0);
}

void func_92()
{
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 16))
	{
		return;
	}
	Local_556.f_1004 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_189(Local_299[Local_556.f_1008 /*8*/], 16);
}

int func_93()
{
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 16))
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1004, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 8000)
	{
		return 0;
	}
	return 1;
}

void func_94()
{
	vector3 vVar0;

	Local_17.f_1 = Local_556.f_20.f_15;
	vVar0 = { func_238(vVar0, Local_556.f_20.f_20, 0f) };
	Local_17.f_270 = vVar0.x;
	Local_17.f_270 = vVar0.y;
}

int func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;

	iVar0 = func_239();
	iVar1 = func_240(iVar0);
	iVar2 = func_241(iVar0, Local_556.f_20.f_556);
	if (func_242(iVar1) == -860962681)
	{
		return 1;
	}
	if (Local_17.f_263.f_6 >= iVar2 || Local_17.f_263.f_6 >= 4)
	{
		return 1;
	}
	iVar7 = Local_17.f_263.f_6;
	vVar3 = { func_243(iVar0, Local_556.f_20.f_556, iVar7) };
	if (!func_244(iVar7, vVar3, 20f, -541064893, &bVar6))
	{
		if (bVar6)
		{
			func_100(4);
			if (!func_43(2097152))
			{
				func_245(Local_17.f_279, Local_556.f_2, 0);
			}
			return 1;
		}
	}
	else
	{
		Local_17.f_263.f_6++;
		Local_17.f_263.f_5 = 0;
	}
	return 0;
}

void func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (func_59(1))
	{
		return;
	}
	func_246();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 18)
	{
		if (&Local_556.f_20.f_422[iVar3 /*4*/] == 0)
		{
		}
		else if (((((func_247(iVar3, &iVar4) && iVar4 >= 0) && iVar4 < 21) && &Local_556.f_20.f_22[iVar4 /*19*/] == 391477998) && !func_248(iVar4)) && func_51(iVar4, 8))
		{
		}
		else
		{
			if (func_50(iVar3, 4))
			{
				iVar1++;
				Jump @202; //curOff = 154
			}
			else if (func_50(iVar3, 2))
			{
				Jump @202; //curOff = 170
			}
			else if (func_50(iVar3, 128))
			{
				iVar2++;
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar0)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_17.f_279, Local_556.f_2, 0);
		}
		return;
	}
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar1);
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0) < iVar1)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_17.f_279, Local_556.f_2, 0);
		}
		return;
	}
	iVar5 = (func_249() + iVar2);
	iVar6 = 0;
	while (iVar6 < 21)
	{
		if (&Local_556.f_20.f_22[iVar6 /*19*/] == 0)
		{
		}
		else if (func_51(iVar6, 8) && !func_248(iVar6))
		{
		}
		else if (((((((func_51(iVar6, 64) && func_250(iVar6, &iVar4)) && &Local_556.f_20.f_22[iVar6 /*19*/] != joaat("target")) && iVar4 >= 0) && iVar4 < 21) && &Local_556.f_20.f_22[iVar4 /*19*/] == 391477998) && !func_248(iVar4)) && func_51(iVar4, 8))
		{
		}
		else
		{
			iVar5++;
		}
		iVar6++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar5);
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < iVar5)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_17.f_279, Local_556.f_2, 0);
		}
		return;
	}
	func_251();
	func_100(1);
}

void func_97()
{
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 1))
	{
		return;
	}
	if (!func_252())
	{
		return;
	}
	if (!func_253())
	{
		return;
	}
	if (!func_254())
	{
		return;
	}
	if (!func_255())
	{
		return;
	}
	func_100(2);
}

void func_98()
{
	int iVar0;

	if (func_59(262144))
	{
		return;
	}
	if (func_256())
	{
		func_100(4);
		return;
	}
	if (!func_59(524288))
	{
		func_257();
	}
	iVar0 = func_258();
	if (iVar0 == joaat("player"))
	{
		if (Local_556.f_946 < 32)
		{
			func_259();
			return;
		}
		if (!func_260())
		{
			Local_556.f_946 = 0;
			Local_556.f_946.f_1 = -1;
			Local_556.f_946.f_3 = 0;
			Local_556.f_946.f_2 = 0;
			return;
		}
		func_100(262144);
	}
	else if (iVar0 == 1047079933)
	{
		if (Local_556.f_946 < 32)
		{
			func_261();
			return;
		}
		if (!func_262())
		{
			Local_556.f_946 = 0;
			Local_556.f_946.f_1 = -1;
			Local_556.f_946.f_3 = 0;
			Local_556.f_946.f_2 = 0;
			return;
		}
		func_100(262144);
	}
}

void func_99()
{
	func_263();
	func_264();
	if (func_45())
	{
		func_265();
	}
	else
	{
		func_101();
	}
}

void func_100(int iParam0)
{
	func_266(&(Local_17.f_1), iParam0);
}

void func_101()
{
	int iVar0;

	iVar0 = Local_17.f_259;
	func_267(iVar0);
	func_268(&(Local_17.f_259), 21);
}

void func_102(int iParam0, int iParam1)
{
	if (func_269(iParam0))
	{
		return;
	}
	if (func_270(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17137 >= 10)
	{
		Global_17137 = 0;
	}
	(Global_17116[Global_17137 /*2*/])->f_1 = iParam1;
	Global_17116[Global_17137 /*2*/] = iParam0;
	Global_17137++;
}

void func_103(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17116[iVar0 /*2*/] == iParam0)
		{
			(Global_17116[iVar0 /*2*/])->f_1 = 4;
		}
		iVar0++;
	}
}

struct<8> func_104(int iParam0)
{
	struct<5> Var0;
	struct<8> Var5;

	if (func_271(iParam0, &Var0))
	{
		func_109(Var0, -1111171646, &Var5, 1);
	}
	return Var5;
}

char* func_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_106(int iParam0)
{
	struct<8> Var0;
	char* sVar8;

	if (!func_272(iParam0, &Var0))
	{
		return;
	}
	sVar8 = func_105(Var0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar8))
	{
		return;
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sVar8);
}

bool func_107(int iParam0, int iParam1)
{
	return func_138(&(Local_556.f_20.f_533[iParam0 /*4*/]), iParam1);
}

int func_108(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 644584216;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_109(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
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

var func_110(char[4] cParam0)
{
	return cParam0;
}

void func_111(int iParam0, int iParam1)
{
	func_139(Local_556.f_20.f_533[iParam0 /*4*/], iParam1);
}

int func_112()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1527836996, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_113(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if ((!func_119(&Var0) || !func_120(&Var0, -49926176, iParam0, 0)) || !func_117(Var0, -1296487272, &uVar5, 1))
	{
		return 0;
	}
	*iParam1 = uVar5;
	if (*iParam1 == -1)
	{
		return 0;
	}
	return 1;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1938569->f_65[iVar1], iVar2);
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_274(1497516462);
			func_275(2016141805);
			func_275(1010885152);
			func_275(-502324015);
			break;
		case 2016141805:
			func_275(1497516462);
			func_274(2016141805);
			func_275(1010885152);
			func_275(-502324015);
			break;
		case 1010885152:
			func_275(1497516462);
			func_275(2016141805);
			func_274(1010885152);
			func_275(-502324015);
			break;
		case -502324015:
			func_275(1497516462);
			func_275(2016141805);
			func_275(1010885152);
			func_274(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_275(-538889627);
			func_275(-538880323);
			func_275(-1056767524);
			func_274(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_276();
			func_274(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_277();
			func_274(iParam0);
			break;
		case 2019386373:
			func_275(-664252410);
			func_275(2109952320);
			func_274(2019386373);
			break;
		case -664252410:
			func_275(2019386373);
			func_275(2109952320);
			func_274(-664252410);
			break;
		case 2109952320:
			func_275(2019386373);
			func_275(-664252410);
			func_274(2109952320);
			break;
		case -1674179981:
			func_275(-1835851517);
			func_275(-1838352012);
			func_274(-1674179981);
			break;
		case -1835851517:
			func_275(-1674179981);
			func_275(-1838352012);
			func_274(-1835851517);
			break;
		case -1838352012:
			func_275(-1674179981);
			func_275(-1835851517);
			func_274(-1838352012);
			break;
		case -1717960576:
			func_275(210001842);
			func_274(-1717960576);
			break;
		case 210001842:
			func_275(-1717960576);
			func_274(210001842);
			break;
		case -150493654:
			func_275(-1271608261);
			func_275(1846061697);
			func_275(-1145519186);
			func_274(-150493654);
			break;
		case -1271608261:
			func_275(-150493654);
			func_275(1846061697);
			func_275(-1145519186);
			func_274(-1271608261);
			break;
		case 1846061697:
			func_275(-150493654);
			func_275(-1271608261);
			func_275(-1145519186);
			func_274(1846061697);
			break;
		case -1145519186:
			func_275(-150493654);
			func_275(-1271608261);
			func_275(1846061697);
			func_274(-1145519186);
			break;
		case 1766284049:
			func_275(280705402);
			func_275(1926308480);
			func_274(1766284049);
			break;
		case 280705402:
			func_275(1766284049);
			func_275(1926308480);
			func_274(280705402);
			break;
		case 1926308480:
			func_275(1766284049);
			func_275(280705402);
			func_274(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_275(439465264);
				func_274(1609506757);
			}
			else
			{
				func_275(1609506757);
				func_275(439465264);
			}
			break;
		case 439465264:
			if (func_278(1609506757))
			{
				if (bParam1)
				{
					func_274(439465264);
				}
				else
				{
					func_275(439465264);
				}
			}
			break;
		case 1822001510:
			func_275(-1612662716);
			func_274(1822001510);
			break;
		case -1612662716:
			func_275(1822001510);
			func_274(-1612662716);
			break;
		case 1306158345:
			func_275(1952610440);
			func_275(-223469678);
			func_275(-404698347);
			func_275(1517904467);
			func_274(1306158345);
			break;
		case 1952610440:
			func_275(1306158345);
			func_275(-223469678);
			func_275(-404698347);
			func_275(1517904467);
			func_274(1952610440);
			break;
		case -223469678:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-404698347);
			func_275(1517904467);
			func_274(-223469678);
			break;
		case -404698347:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-223469678);
			func_275(1517904467);
			func_274(-404698347);
			break;
		case 1517904467:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-223469678);
			func_275(-404698347);
			func_274(1517904467);
			break;
		case 1376646519:
			func_275(931649776);
			func_275(-434590080);
			func_275(1743048395);
			func_275(449774763);
			func_274(1376646519);
			break;
		case 931649776:
			func_275(1376646519);
			func_275(-434590080);
			func_275(1743048395);
			func_275(449774763);
			func_274(931649776);
			break;
		case -434590080:
			func_275(1376646519);
			func_275(931649776);
			func_275(1743048395);
			func_275(449774763);
			func_274(-434590080);
			break;
		case 1743048395:
			func_275(1376646519);
			func_275(931649776);
			func_275(-434590080);
			func_275(449774763);
			func_274(1743048395);
			break;
		case 449774763:
			func_275(1376646519);
			func_275(931649776);
			func_275(-434590080);
			func_275(1743048395);
			func_274(449774763);
			break;
		case -1414537028:
			func_275(38162571);
			func_275(1350391819);
			func_275(54073871);
			func_274(-1414537028);
			break;
		case 38162571:
			func_275(-1414537028);
			func_275(1350391819);
			func_275(54073871);
			func_274(38162571);
			break;
		case 1350391819:
			func_275(-1414537028);
			func_275(38162571);
			func_275(54073871);
			func_274(1350391819);
			break;
		case 54073871:
			func_275(-1414537028);
			func_275(38162571);
			func_275(1350391819);
			func_274(54073871);
			break;
		case 198200492:
			func_274(198200492);
			func_275(-1124061431);
			func_275(52706132);
			func_275(-259123672);
			break;
		case -1124061431:
			func_275(198200492);
			func_274(-1124061431);
			func_275(52706132);
			func_275(-259123672);
			break;
		case 52706132:
			func_275(198200492);
			func_275(-1124061431);
			func_274(52706132);
			func_275(-259123672);
			break;
		case -259123672:
			func_275(198200492);
			func_275(-1124061431);
			func_275(52706132);
			func_274(-259123672);
			break;
		case -919512195:
			func_274(-919512195);
			func_275(-1925798111);
			func_275(420709909);
			func_275(1703426636);
			break;
		case -1925798111:
			func_274(-1925798111);
			func_275(-919512195);
			func_275(420709909);
			func_275(1703426636);
			break;
		case 420709909:
			func_274(420709909);
			func_275(-919512195);
			func_275(-1925798111);
			func_275(1703426636);
			break;
		case 1703426636:
			func_274(1703426636);
			func_275(-919512195);
			func_275(-1925798111);
			func_275(420709909);
			break;
		case -1223121209:
			func_274(-1223121209);
			func_275(630808005);
			break;
		case 630808005:
			func_274(630808005);
			func_275(-1223121209);
			break;
		case 1453909576:
			func_274(1453909576);
			func_275(1643531967);
			break;
		case 1643531967:
			func_274(1643531967);
			func_275(1453909576);
			break;
		case 0:
			func_274(0);
			func_275(473295046);
			func_275(-1738165526);
			break;
		case 473295046:
			func_274(473295046);
			func_275(0);
			func_275(-1738165526);
			break;
		case -1738165526:
			func_274(-1738165526);
			func_275(0);
			func_275(473295046);
			break;
		case 932909855:
			func_274(932909855);
			func_275(2051822093);
			break;
		case 2051822093:
			func_274(2051822093);
			func_275(932909855);
			break;
		case 405586984:
			func_274(405586984);
			func_275(1509509592);
			func_275(-959357075);
			func_275(-1311865656);
			break;
		case 1509509592:
			func_274(1509509592);
			func_275(405586984);
			func_275(-959357075);
			func_275(-1311865656);
			break;
		case -959357075:
			func_274(-959357075);
			func_275(1509509592);
			func_275(405586984);
			func_275(-1311865656);
			break;
		case -1311865656:
			func_274(-1311865656);
			func_275(1509509592);
			func_275(-959357075);
			func_275(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_274(-524145696);
			}
			else
			{
				func_275(-524145696);
			}
			func_275(1626481264);
			func_275(282809459);
			break;
		case 282809459:
			func_274(282809459);
			func_275(1626481264);
			func_275(-524145696);
			break;
		case 1626481264:
			func_274(1626481264);
			func_275(-524145696);
			func_275(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_274(885203519);
			}
			else
			{
				func_275(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_274(-1080627546);
			}
			else
			{
				func_275(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_274(-510945576);
			}
			else
			{
				func_275(-510945576);
				func_279(385812466);
				func_279(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_274(iParam0);
			}
			else
			{
				func_275(iParam0);
			}
			break;
	}
}

int func_116(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 331094197;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_117(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

bool func_118(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

bool func_119(var uParam0)
{
	*uParam0 = Local_556.f_577;
	uParam0->f_2 = -872351721;
	uParam0->f_3 = Local_556.f_20.f_556;
	return (DATAFILE::_0x603AC35FD4602C76(Local_556.f_577) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_120(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_121(var uParam0, int iParam1, int iParam2)
{
	if ((func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0)) && func_120(uParam0, -176401167, iParam2, 0))
	{
		return 1;
	}
	return 0;
}

bool func_122(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_123(iParam0);
		return false;
	}
	if (func_280(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) != 2)
		{
			func_281(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1273882->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) == 2);
}

void func_123(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_282(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_125(int iParam0)
{
	func_266(&(Local_556.f_5), iParam0);
}

char* func_126()
{
	return "scr_distance_smoke";
}

char* func_127(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "miss_FMAS_ROUTE", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringConCat(&cVar0, func_283(Local_556), 32);
	return func_110(&cVar0);
}

void func_128(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_129(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_130()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_284(iVar0);
		iVar0++;
	}
}

void func_131()
{
	int iVar0;

	func_285(&(Local_556.f_584.f_22));
	func_285(&(Local_556.f_584.f_23));
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		func_285(Local_556.f_584.f_24[iVar0]);
		iVar0++;
	}
}

void func_132()
{
	if (func_286(Local_556.f_584.f_331))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_556.f_584.f_331, 0);
		Local_556.f_584.f_331 = 0;
	}
	func_287(&(Local_556.f_584.f_91), 0, 0);
	func_288(&(Local_556.f_584.f_76), 1);
}

void func_133()
{
	func_285(&(Local_556.f_584.f_332));
	if (!func_289(Local_556.f_584.f_333))
	{
		return;
	}
	_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_556.f_584.f_333, 0);
}

void func_134()
{
	if (!func_286(Local_556.f_584.f_334))
	{
		return;
	}
	Local_556.f_584.f_336 = 0;
	_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(Local_556.f_584.f_334, 0);
	Local_556.f_584.f_334 = 0;
}

void func_135()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_290(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_291(iVar0);
		iVar0++;
	}
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		func_141(48);
	}
	else
	{
		func_143(48);
	}
}

char* func_137()
{
	return "NAS";
}

bool func_138(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(int iParam0)
{
	func_139(&(Global_1070355->f_22101.f_4), iParam0);
}

int func_141(int iParam0)
{
	if (func_292(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1138889->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1138889->f_1997 >= 21)
	{
		return 0;
	}
	Global_1138889->f_1975[Global_1138889->f_1997] = iParam0;
	Global_1138889->f_1997++;
	return 1;
}

int func_143(int iParam0)
{
	if (func_293(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_294(iParam0);
	bVar1 = func_176(iParam0, 128);
	bVar2 = (!func_176(iParam0, 8) && !func_176(iParam0, 1024));
	if (MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iParam0])))
	{
		if (bVar0)
		{
			if (!func_51(iParam0, 256))
			{
				func_177(iParam0, 256);
				if (bVar1)
				{
					MAP::_0xB059D7BD3D78C16F(&(Local_556.f_584[iParam0]), 942020339);
				}
				else
				{
					MAP::_0xB059D7BD3D78C16F(&(Local_556.f_584[iParam0]), 2096805056);
				}
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), -662251075);
			}
		}
		else if (func_51(iParam0, 256))
		{
			func_295(iParam0, 256);
			MAP::_0xB059D7BD3D78C16F(&(Local_556.f_584[iParam0]), -662251075);
			if (bVar1)
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 2096805056);
			}
		}
		return;
	}
	if (bVar1)
	{
		Local_556.f_584[iParam0] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_COP"), NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/])));
		MAP::SET_BLIP_SPRITE(&(Local_556.f_584[iParam0]), -1596758107, false);
		if (bVar0)
		{
			if (bVar2)
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 1765354131);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), -662251075);
			}
			func_177(iParam0, 256);
		}
		else
		{
			func_295(iParam0, 256);
			MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
		}
	}
	else
	{
		Local_556.f_584[iParam0] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/])));
		if (bVar0)
		{
			if (bVar2)
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 1765354131);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), -662251075);
			}
			func_177(iParam0, 256);
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
			func_295(iParam0, 256);
		}
	}
}

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1070355->f_21185.f_1 || Global_1070355->f_21185.f_1 == 0) || iParam1 > Global_1070355->f_21185) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1070355->f_21185), &uVar1, 2);
		}
		else
		{
			Global_1070355->f_21185.f_1 = iVar0;
			Global_1070355->f_21185 = iParam1;
		}
		if (AUDIO::_0x05D6195FB4D428F4(iParam0))
		{
		}
		return 1;
	}
	return 0;
}

int func_146(bool bParam0)
{
	if (!func_296(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_147(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_65() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_297(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_298();
		Global_1900670->f_9 = func_299(Global_1893575->f_2);
		Global_1900670->f_11 = func_300(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_301(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_301(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_301(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

int func_148()
{
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return 2;
	}
	else if (func_47(Local_299[Local_556.f_1008 /*8*/], 64))
	{
		return 3;
	}
	else if (func_47(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		return 1;
	}
	else if (func_47(Local_299[Local_556.f_1008 /*8*/], 131072))
	{
		return 4;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam1)
	{
		func_302(Local_556.f_2, iParam0 != 2);
	}
	if (iParam0 == 2 && (func_303(iVar0, 1) || func_303(iVar0, 32)))
	{
		func_304(4);
		func_304(8);
	}
	if (!bParam1)
	{
		func_125(1);
	}
	if (Local_556.f_1008 >= 32 || Local_556.f_1008 < 0)
	{
		return;
	}
	func_189(Local_299[Local_556.f_1008 /*8*/], 2097152);
}

void func_150()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_43(4))
	{
		func_305(Local_556.f_1, 0, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	func_305(Local_556.f_1, bVar1 != bVar2, bVar0);
	if (func_43(1))
	{
		func_307(Local_556.f_2, bVar0, bVar1, bVar2);
	}
}

void func_151()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_43(4))
	{
		func_308(Local_556.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	func_308(Local_556.f_1, bVar0);
	if (func_43(1))
	{
		func_307(Local_556.f_2, bVar0, bVar1, bVar2);
	}
}

void func_152()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_43(4))
	{
		func_309(Local_556.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		bVar0 = true;
	}
	func_309(Local_556.f_1, bVar0);
	func_306(bVar0, &bVar1, &bVar2);
	if (func_43(1))
	{
		func_307(Local_556.f_2, bVar0, bVar1, bVar2);
	}
}

int func_153(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return 0;
	}
	if (!func_172(iParam0, 1))
	{
		return 0;
	}
	if (bParam1 && !OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])))
	{
		return 0;
	}
	return 1;
}

int func_154(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_155()
{
	return Global_1103536->f_5569.f_492;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1103536->f_5569.f_351[iVar0 /*2*/])
	{
		return func_156(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1103536->f_5569.f_351[iVar0 /*2*/])
	{
		return func_156(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_157(int iParam0)
{
	return (Global_1103536->f_5569.f_351[iParam0 /*2*/])->f_1;
}

int func_158(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_311(iParam0))
	{
		return 0;
	}
	iVar0 = func_312(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(iVar0))
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

int func_159(int iParam0)
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

int func_160(int iParam0)
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

int func_161(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (iVar0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	*iParam1 = 0;
	while (*iParam1 < 7)
	{
		if (&Local_17.f_234[*iParam1 /*2*/] != iVar0)
		{
		}
		else
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(&(Local_17.f_234[iParam0 /*2*/])))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iParam0 /*2*/])))
	{
		return 0;
	}
	return 1;
}

bool func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Local_17.f_249[iVar0]), iVar1);
}

void func_164(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_174(9, iParam0, func_173(0, 8), iParam1);
}

int func_165(int iParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32)
{
	if (func_314(Param1.f_1))
	{
		return 1;
	}
	if (func_315(Param1.f_1))
	{
		return 1;
	}
	if (Param1.f_5 == joaat("weapon_fall") && (PED::_0x9682F850056C9ADE(iParam32) && PED::_0x0C31C51168E80365(iParam32) == PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param1.f_1) && ENTITY::IS_ENTITY_A_PED(Param1.f_1))
	{
		return 0;
	}
	if (func_316(iParam0) == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0)
{
	AUDIO::PLAY_SOUND(func_317(), func_318(), false, 0, true, 0);
	func_174(1, iParam0, func_173(0, 8), PLAYER::PLAYER_ID());
}

int func_167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::PED_TO_NET(iParam0);
	iVar1 = 0;
	while (iVar1 < 21)
	{
		if ((Local_17.f_2[iVar1 /*9*/])->f_2 == 0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar1 /*9*/])))
		{
		}
		else if (&Local_17.f_2[iVar1 /*9*/] != iVar0)
		{
		}
		else
		{
			*iParam1 = iVar1;
			if ((Local_17.f_2[iVar1 /*9*/])->f_2 == joaat("target") || func_176(iVar1, 67108864))
			{
				*bParam2 = 1;
			}
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_168(int iParam0)
{
	if (func_176(iParam0, 4096) && func_319(iParam0) != 1824637041)
	{
		func_320(-514316475, 0, 0);
	}
}

void func_169(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_174(8, iParam0, func_173(0, 8), iParam1);
}

int func_170(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, int iParam31, int iParam32)
{
	if (func_314(Param0.f_1))
	{
		return 1;
	}
	if (func_315(Param0.f_1))
	{
		return 1;
	}
	if (Param0.f_5 == joaat("weapon_fall") && (PED::_0x9682F850056C9ADE(iParam31) && PED::_0x0C31C51168E80365(iParam31) == PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
	{
		return 0;
	}
	if (Local_17.f_2[iParam32 /*9*/])->f_5 == PLAYER::PLAYER_ID()
	{
		return 1;
	}
	return 0;
}

void func_171(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if (&Local_556.f_20.f_22[iParam0 /*19*/] != joaat("target") && &Local_556.f_20.f_22[iParam0 /*19*/] != 391477998)
	{
		return;
	}
	func_313(iParam0, &iVar0, &iVar1);
	if (MISC::IS_BIT_SET(&(Local_556.f_994[iVar0]), iVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND(func_317(), func_318(), false, 0, true, 0);
	func_174(7, iParam0, func_173(0, 8), -1);
	if ((!MISC::IS_BIT_SET(&(Local_556.f_996[iVar0]), iVar1) && Local_556.f_20 == 1657045547) && func_321(iParam0))
	{
		func_125(1024);
	}
	MISC::SET_BIT(Local_556.f_994[iVar0], iVar1);
	MISC::SET_BIT(Local_556.f_996[iVar0], iVar1);
}

bool func_172(int iParam0, int iParam1)
{
	return func_138((Local_17.f_217[iParam0 /*2*/])->f_1, iParam1);
}

var func_173(int iParam0, int iParam1)
{
	return func_322(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_174(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<8> Var0;

	Var0.f_4 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = iParam3;
	func_323(&Var0, uParam2);
}

void func_175(int iParam0)
{
	struct<8> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Var0.f_5 != Local_556)
	{
		return;
	}
	func_324(&Var0);
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if ((((Var0.f_4 == 4 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 5) || Var0.f_4 == 7)
	{
		if (Var0.f_6 < 0)
		{
			return;
		}
		if (Var0.f_6 >= 21)
		{
			return;
		}
	}
	switch (Var0.f_4)
	{
		case 7:
			if (func_176(Var0.f_6, 134217728))
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
			{
				return;
			}
			func_325(Var0.f_6, Var0.f_1);
			break;
		case 1:
			if (func_163(Var0.f_6))
			{
				return;
			}
			(Local_17.f_234[Var0.f_6 /*2*/])->f_1 = PLAYER::INT_TO_PLAYERINDEX(Var0.f_7);
			func_326(Var0.f_6);
			break;
		case 4:
			func_327(Var0.f_6, Var0.f_1);
			break;
		case 9:
			func_328(Var0.f_6, PLAYER::INT_TO_PLAYERINDEX(Var0.f_7));
			break;
		case 8:
			func_329(Var0.f_6, PLAYER::INT_TO_PLAYERINDEX(Var0.f_7));
			break;
		case 5:
			func_330(Var0.f_6, Var0.f_1);
			break;
		case 3:
			func_331(Var0.f_6, Var0.f_1);
			break;
		case 6:
			func_332(Var0.f_6, Var0.f_1);
			break;
		case 10:
			func_333(Var0.f_6, Var0.f_1);
			break;
		case 11:
			func_334(Var0.f_6);
			break;
	}
}

bool func_176(int iParam0, int iParam1)
{
	return func_138((Local_17.f_2[iParam0 /*9*/])->f_3, iParam1);
}

void func_177(int iParam0, int iParam1)
{
	func_266(&((Local_556.f_20.f_22[iParam0 /*19*/])->f_1), iParam1);
}

int func_178(int iParam0)
{
	bool bVar0;

	bVar0 = joaat("weapon_unarmed");
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, false, 0, false);
	if (func_118(bVar0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			return 1;
		}
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			return 1;
		}
		if (WEAPON::_0x959383DCD42040DA(bVar0))
		{
			return 1;
		}
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, false, 1, false);
	if (func_118(bVar0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			return 1;
		}
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			return 1;
		}
		if (WEAPON::_0x959383DCD42040DA(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_179(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_335(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_336(iVar0, 2);
}

void func_181()
{
	func_337(512);
}

void func_182()
{
	func_338("NAS_NEUTRAL_", &(Local_556.f_578));
	func_338("NAS_HOSTILE_", &(Local_556.f_578.f_1));
	func_338("NAS_LAW_NEUTRAL_", &(Local_556.f_578.f_2));
	func_338("NAS_LAW_HOSTILE_", &(Local_556.f_578.f_3));
	func_338("NAS_BRAWLER_A_", &(Local_556.f_578.f_4));
	func_338("NAS_BRAWLER_B_", &(Local_556.f_578.f_5));
	func_339(Local_556.f_578);
	func_339(Local_556.f_578.f_1);
	func_339(Local_556.f_578.f_2);
	func_339(Local_556.f_578.f_4);
	func_339(Local_556.f_578.f_5);
	func_339(Local_556.f_578.f_3);
	func_340(1, Local_556.f_578, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_4, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_5, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_2, Local_556.f_578.f_3, 1);
	func_340(1, Local_556.f_578.f_2, Local_556.f_578, 1);
	func_340(1, Local_556.f_578.f_2, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_3, Local_556.f_578, 1);
	func_340(1, Local_556.f_578.f_3, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_2, 707888648, 1);
	func_340(1, Local_556.f_578.f_3, 707888648, 1);
	func_340(6, Local_556.f_578.f_4, Local_556.f_578.f_5, 1);
}

void func_183()
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
		else if (_NAMESPACE26::NETWORK_GET_GANG_ID(iVar2) != Local_17.f_279)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		iVar1++;
	}
	Local_556.f_958 = uVar0;
}

int func_184()
{
	int iVar0;

	iVar0 = func_341(func_239(), 0);
	if (iVar0 <= 3)
	{
		return 1;
	}
	return 0;
}

void func_185(int iParam0)
{
	func_266(&(Local_556.f_6), iParam0);
}

void func_186(int iParam0)
{
	Local_556.f_4 = iParam0;
}

int func_187()
{
	return 1926687966;
}

int func_188(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
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

void func_189(var uParam0, int iParam1)
{
	func_266(&(uParam0->f_1), iParam1);
}

void func_190()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 206)
	{
		iVar1 = func_342(iVar0, 1);
		func_344(&(Local_556.f_577), iVar1, func_343(iVar1));
		iVar0++;
	}
}

void func_191()
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	var uVar19;
	var uVar20;

	iVar5 = 600000;
	Local_556.f_20.f_17 = 105f;
	Local_556.f_20.f_18 = 85f;
	Local_556.f_20.f_19 = 160f;
	Local_556.f_20.f_20 = 120f;
	Local_556.f_20.f_21 = 100f;
	Local_556.f_20.f_14 = 100f;
	Local_556.f_20.f_13 = 18f;
	Local_556.f_20.f_4 = 300000;
	Local_556.f_20.f_6 = 6;
	if (func_119(&Var0))
	{
		func_345(Var0, 92190263, &iVar5, 1);
		func_345(Var0, -2129803861, &(Local_556.f_20.f_4), 0);
		func_345(Var0, 1628979087, &(Local_556.f_20.f_6), 0);
		func_346(Var0, -185755803, &bVar6, 0);
		func_346(Var0, 458129012, &bVar9, 0);
		func_346(Var0, 1787479687, &bVar7, 0);
		func_346(Var0, 1137547076, &bVar11, 0);
		func_346(Var0, 2066595802, &bVar8, 0);
		func_346(Var0, -1770081554, &bVar10, 0);
		func_346(Var0, 2053368303, &bVar13, 0);
		func_347(Var0, 582819194, &vVar16, 0);
		func_347(Var0, -1882633578, &(Local_556.f_20.f_10), 0);
		func_348(Var0, -1103749002, &uVar19, 0);
		func_348(Var0, 79787630, &(Local_556.f_20.f_17), 0);
		func_348(Var0, 465120035, &(Local_556.f_20.f_18), 0);
		func_348(Var0, 219784559, &(Local_556.f_20.f_19), 0);
		func_348(Var0, -485657984, &(Local_556.f_20.f_20), 0);
		func_348(Var0, -1925214904, &(Local_556.f_20.f_21), 0);
		func_348(Var0, 265695803, &(Local_556.f_20.f_13), 0);
		func_346(Var0, 1852727176, &bVar12, 0);
		func_346(Var0, 2092186359, &bVar14, 0);
		if (!func_346(Var0, 413379496, &bVar15, 0))
		{
			bVar15 = true;
		}
	}
	Local_556.f_20.f_554 = func_349(Local_17.f_278);
	Local_556.f_20.f_2 = iVar5;
	Local_556.f_20.f_7 = { vVar16 };
	Local_556.f_20.f_14 = uVar19;
	if (func_117(Var0, 1855722710, &uVar20, 0))
	{
		Local_556.f_20.f_3 = uVar20;
	}
	if (bVar6)
	{
		func_266(&(Local_556.f_20.f_15), 256);
	}
	if (bVar15)
	{
		func_266(&(Local_556.f_20.f_15), 65536);
	}
	if (bVar12)
	{
		func_266(&(Local_556.f_20.f_15), 33554432);
	}
	if (bVar7)
	{
		func_125(32768);
	}
	else if (bVar14)
	{
		func_125(65536);
	}
	if (bVar9)
	{
		func_266(&(Local_556.f_20.f_15), 4096);
	}
	if (bVar8)
	{
		func_266(&(Local_556.f_20.f_15), 8192);
	}
	if (bVar11)
	{
		func_266(&(Local_556.f_20.f_15), 16384);
	}
	if (bVar10)
	{
		func_266(&(Local_556.f_20.f_15), 32768);
	}
	if (bVar13)
	{
		func_266(&(Local_556.f_20.f_15), 67108864);
	}
}

void func_192()
{
	Local_556.f_20.f_547 = func_350();
}

void func_193()
{
	int iVar0;

	Local_556.f_20.f_548 = func_351();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		func_352(iVar0);
		if (&Local_556.f_20.f_22[iVar0 /*19*/] != joaat("target"))
		{
		}
		else
		{
			Local_556.f_20.f_549++;
		}
		iVar0++;
	}
}

void func_194()
{
	int iVar0;

	Local_556.f_20.f_551 = func_353();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		func_354(iVar0);
		iVar0++;
	}
}

void func_195()
{
	int iVar0;
	int iVar1;

	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_356(iVar1);
		iVar1++;
	}
}

void func_196()
{
	int iVar0;
	int iVar1;

	iVar0 = func_357();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_358(iVar1);
		iVar1++;
	}
}

void func_197()
{
	int iVar0;

	Local_556.f_20.f_550 = func_359();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_550)
	{
		func_360(iVar0);
		iVar0++;
	}
}

void func_198()
{
	int iVar0;

	Local_556.f_20.f_552 = func_361();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_552)
	{
		func_362(iVar0);
		iVar0++;
	}
}

void func_199()
{
	int iVar0;
	int iVar1;

	iVar0 = func_363();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_364(iVar1);
		iVar1++;
	}
}

void func_200()
{
	int iVar0;

	Local_556.f_20.f_553 = func_365();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_553)
	{
		func_366(iVar0);
		iVar0++;
	}
}

void func_201()
{
	int iVar0;

	Local_556.f_20.f_546 = func_367();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_546)
	{
		func_368(iVar0);
		iVar0++;
	}
}

void func_202()
{
	int iVar0;
	int iVar1;

	iVar0 = func_369();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_370(iVar1);
		iVar1++;
	}
}

void func_203()
{
	int iVar0;
	int iVar1;

	iVar0 = func_371();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_372(iVar1);
		iVar1++;
	}
}

void func_204()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar7;
	int iVar8;

	iVar0 = func_374(1, func_373());
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_375(&Var2);
		if ((!func_119(&Var2) || !func_120(&Var2, 1525953930, iVar1, 0)) || !func_117(Var2, -1296487272, &iVar8, 1))
		{
		}
		else
		{
			iVar7 = func_376(iVar8);
			if (!func_377(iVar7))
			{
			}
			else
			{
				Local_556.f_952[iVar1] = iVar7;
				func_125(8192);
			}
		}
		iVar1++;
	}
}

int func_205()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, -930766145, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_206()
{
	struct<5> Var0;
	bool bVar5;

	if (func_119(&Var0) && func_346(Var0, 706368435, &bVar5, 0))
	{
		return !bVar5;
	}
	return 0;
}

int func_207()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_378(iVar1, &vVar2))
		{
		}
		else if (!func_379(iVar1, vVar2))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_208()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	struct<8> Var9;

	iVar0 = func_380();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_381(iVar1, &vVar2, &vVar5, &Var9, &uVar8))
		{
		}
		else if (!func_382(iVar1, vVar2, vVar5, Var9, uVar8))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_43(4194304))
	{
		return 1;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			func_115(iVar2, 1, 0);
		}
		iVar1++;
	}
	func_125(4194304);
	return 1;
}

void func_210()
{
	int iVar0;

	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if ((&Local_17.f_234[iVar0 /*2*/] != 255 && func_163(iVar0)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_1000), iVar0))
			{
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_1000), iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if ((((Local_17.f_2[iVar0 /*9*/])->f_2 == 1583594396 && func_176(iVar0, 67108864)) && func_176(iVar0, 134217728)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_998), iVar0))
			{
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_998), iVar0);
			}
			iVar0++;
		}
	}
}

bool func_211(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	PROPSET::_REQUEST_PROPSET_2(iParam0);
	PROPSET::_REQUEST_PROPSET(iParam0);
	return (PROPSET::_HAS_PROPSET_LOADED_2(iParam0) && PROPSET::_HAS_PROPSET_LOADED(iParam0));
}

bool func_212(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0) || iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_213(bool bParam0)
{
	if (!func_118(bParam0))
	{
		return true;
	}
	WEAPON::_0x72D4CB5DB927009C(bParam0, -1, 0);
	return WEAPON::_0xFF07CF465F48B830(bParam0);
}

bool func_214(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_346(Var0, 917283806, &uVar5, 0);
	return uVar5;
}

int func_215(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
	while ((!HUD::_0xD0976CC34002DB57(sParam0) && iVar0 < iParam1) && !bVar1)
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

void func_216()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_547)
	{
		func_383(iVar0);
		iVar0++;
	}
}

void func_217()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_552)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_971[iVar0])))
		{
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(&(Local_556.f_971[iVar0]), 12289, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(&(Local_556.f_971[iVar0]), 12289, 0, 0, -1, -1, 0);
		}
		iVar0++;
	}
}

void func_218()
{
	int iVar0;
	int iVar1;

	func_268(&(Local_556.f_7.f_11), 100);
	if (Local_556.f_7.f_11 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_43(4))
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
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_961), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_219()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar11;
	struct<2> Var15;
	struct<2> Var28;
	struct<2> Var41;

	func_384();
	if (func_90() != 6)
	{
		return;
	}
	if (!func_43(4))
	{
		return;
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 8))
	{
		return;
	}
	if (func_385())
	{
		return;
	}
	iVar0 = func_148();
	switch (iVar0)
	{
		case 2:
			bVar1 = false;
			break;
		case 1:
		case 3:
		case 4:
			bVar1 = true;
			break;
	}
	func_306(bVar1, &iVar2, &iVar3);
	bVar4 = false;
	if (func_386())
	{
		iVar5 = 1891766540;
		if (func_387() == 1)
		{
			bVar4 = true;
		}
		else
		{
			bVar4 = false;
		}
	}
	else
	{
		iVar5 = -1516819610;
	}
	if (func_45())
	{
		iVar6 = joaat("pvp");
	}
	else
	{
		iVar6 = 1038512660;
	}
	Var15.f_1 = 11;
	Var28.f_1 = 11;
	Var41.f_1 = 11;
	if ((bVar4 && iVar0 == 1) || iVar0 == 4)
	{
		func_389(&Var15, joaat("defend"), func_388(255), 0);
	}
	func_391(&uVar7, &uVar11, &Var28, &Var41, iVar5, iVar6, func_388(255), bVar4, !bVar1, iVar2, iVar3, func_390(), Local_556.f_2);
	func_189(Local_299[Local_556.f_1008 /*8*/], 8);
}

void func_220()
{
	int iVar0;

	iVar0 = Local_556.f_7;
	func_392(iVar0);
	func_268(&(Local_556.f_7), 21);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_393(iVar0);
		iVar0++;
	}
}

void func_221()
{
	func_394(Local_556.f_7.f_1);
	func_268(&(Local_556.f_7.f_1), 18);
}

void func_222()
{
	func_395(Local_556.f_7.f_2);
	func_268(&(Local_556.f_7.f_2), 3);
}

void func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_556.f_7.f_4;
	if (func_396(iVar0, 0, 1))
	{
		if (func_47(Local_299[iVar0 /*8*/], 4))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = func_397(iVar1);
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_1, iVar2) != 6)
			{
				func_340(6, iVar2, Local_556.f_578.f_1, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_3, iVar2) != 6)
			{
				func_340(6, iVar2, Local_556.f_578.f_3, 1);
			}
		}
		else if (func_59(256) && func_47(Local_299[iVar0 /*8*/], 64))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = func_397(iVar1);
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_1, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578.f_1, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_3, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578.f_3, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_2, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578.f_2, 1);
			}
		}
	}
	func_268(&(Local_556.f_7.f_4), 32);
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	int iVar8;

	iVar0 = func_148();
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if ((!PED::IS_PED_DEAD_OR_DYING(iVar2, true) && WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &bVar3, true, 0, false)) && func_118(bVar3))
	{
		func_125(2048);
	}
	else
	{
		func_44(2048);
	}
	iVar4 = Local_556.f_7.f_9;
	func_268(&(Local_556.f_7.f_9), 32);
	iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
	if (func_398(iVar5))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_556.f_961), iVar4);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_556.f_961), iVar4);
	}
	func_399();
	if (iVar0 != 0 && !func_43(1))
	{
		if (func_400())
		{
			func_189(Local_299[Local_556.f_1008 /*8*/], 1048576);
		}
		if (func_47(Local_299[Local_556.f_1008 /*8*/], 1048576) && func_401())
		{
			func_149(iVar0, 0);
		}
	}
	if (iVar0 != 0 && func_403(func_402(), Local_556.f_20.f_2))
	{
		func_404(Local_556.f_2);
	}
	if (iVar0 != 0 && !func_45())
	{
		func_405();
	}
	if (iVar0 != 0 && func_45())
	{
		if (func_406(iVar5))
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_960), iVar4))
			{
				func_407(iVar5);
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_556.f_960), iVar4);
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_960), iVar4))
		{
			func_31(iVar5);
			SCRIPTS::_0xD426E2E3288469D6(&(Local_556.f_960), iVar4);
		}
	}
	if (func_43(65536) || func_43(32768))
	{
		if (iVar0 != 0)
		{
			fVar6 = func_408(Global_36, Local_556.f_20.f_7);
			if (func_47(Local_299[Local_556.f_1008 /*8*/], 256))
			{
				fVar7 = 65f;
			}
			else
			{
				fVar7 = 50f;
			}
			if (fVar6 < Local_556.f_20.f_19 || func_409(fVar7))
			{
				func_189(Local_299[Local_556.f_1008 /*8*/], 256);
				func_189(Local_299[Local_556.f_1008 /*8*/], 1024);
				func_189(Local_299[Local_556.f_1008 /*8*/], 512);
			}
			else if (fVar6 > (Local_556.f_20.f_19 + 15f))
			{
				func_410(Local_299[Local_556.f_1008 /*8*/], 256);
			}
		}
	}
	if (!func_43(1048576))
	{
		PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 0.2f);
		func_125(1048576);
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 128) && NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1003, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 22000)
	{
		func_410(Local_299[Local_556.f_1008 /*8*/], 128);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_411(Global_35))
	{
		Local_556.f_1016 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (iVar0 == 1)
	{
		if (!func_47(Local_299[Local_556.f_1008 /*8*/], 16384) && func_163(Local_556.f_1006))
		{
			func_189(Local_299[Local_556.f_1008 /*8*/], 16384);
			func_49(1);
			func_48();
		}
		if (!func_47(Local_299[Local_556.f_1008 /*8*/], 16384))
		{
			func_412();
			func_413();
			if (func_414(105, 255))
			{
				func_49(0);
			}
		}
		if (_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) == Local_17.f_279)
		{
			func_189(Local_299[Local_556.f_1008 /*8*/], 32768);
		}
		else
		{
			func_410(Local_299[Local_556.f_1008 /*8*/], 32768);
		}
	}
	else if (iVar0 == 2)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) || !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_17.f_279, PLAYER::PLAYER_ID()))
		{
			if (func_47(Local_299[Local_556.f_1008 /*8*/], 1048576))
			{
				func_410(Local_299[Local_556.f_1008 /*8*/], 4);
				func_44(4);
				func_189(Local_299[Local_556.f_1008 /*8*/], 65536);
				func_125(16777216);
				if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) || !_NAMESPACE26::_0x0F99F6436528A089(Local_17.f_279)) || (_NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_279) <= 1 && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_17.f_279, PLAYER::PLAYER_ID())))
				{
					func_125(8388608);
				}
			}
		}
	}
	if (func_415(0))
	{
		func_125(16384);
	}
	else
	{
		func_44(16384);
	}
	if (iVar0 == 0)
	{
		if (func_45())
		{
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (&Local_17.f_234[iVar8 /*2*/] == 255)
				{
				}
				else if (&Local_17.f_234[iVar8 /*2*/] != iVar1)
				{
				}
				else
				{
					func_416(1, iVar8);
					return;
				}
				iVar8++;
			}
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (&Local_17.f_234[iVar8 /*2*/] == 255)
				{
				}
				else if (func_163(iVar8))
				{
				}
				else if (!_NAMESPACE26::_0x3F59FE6F37869576(iVar1, &(Local_17.f_234[iVar8 /*2*/])))
				{
				}
				else
				{
					func_416(4, -1);
					return;
				}
				iVar8++;
			}
		}
		if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_17.f_279, PLAYER::PLAYER_ID()))
		{
			func_416(2, -1);
			return;
		}
		if (func_59(256) && func_417(Local_556.f_7, 30f))
		{
			func_416(3, -1);
		}
	}
}

void func_225()
{
	if (func_45() && !func_59(16777216))
	{
		return;
	}
	func_418();
	func_419();
	func_420();
	func_421();
	func_422();
	func_423();
	func_424();
}

void func_226()
{
	if (Local_556.f_20.f_551 == 0)
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	func_425(Local_556.f_7.f_8);
	func_268(&(Local_556.f_7.f_8), Local_556.f_20.f_551);
}

void func_227()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_43(4))
	{
		return;
	}
	if (func_59(33554432))
	{
		if (!func_43(131072))
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_426(iVar0))
				{
				}
				else
				{
					func_427(iVar0, Local_299[Local_556.f_1008 /*8*/]);
				}
				iVar0++;
			}
			func_125(131072);
		}
		return;
	}
	iVar1 = Local_556.f_7.f_5;
	if (func_47(Local_299[iVar1 /*8*/], 4) && func_396(iVar1, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (!func_426(iVar0))
			{
			}
			else if (func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
			{
			}
			else if (!func_428(iVar0, Local_299[iVar1 /*8*/]))
			{
			}
			else
			{
				func_427(iVar0, Local_299[Local_556.f_1008 /*8*/]);
			}
			iVar0++;
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar0 = Local_556.f_7.f_6;
	if (((!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_428(iVar0, Local_299[Local_556.f_1008 /*8*/])) && func_426(iVar0)) && func_52(iVar0, &iVar3, 1, 1))
	{
		if (!func_51(iVar0, 131072))
		{
			func_177(iVar0, 131072);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar3);
		}
		if (PED::IS_PED_IN_COMBAT(iVar3, iVar2) || func_429(iVar3, 45f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			func_427(iVar0, Local_299[Local_556.f_1008 /*8*/]);
		}
	}
	if ((func_51(iVar0, 131072) && func_428(iVar0, Local_299[Local_556.f_1008 /*8*/])) && func_52(iVar0, &iVar3, 0, 1))
	{
		PED::_0x3088634CF8C819CF(iVar3);
		func_295(iVar0, 131072);
	}
	func_268(&(Local_556.f_7.f_5), 32);
	func_268(&(Local_556.f_7.f_6), 21);
}

void func_228(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<30> Var2;
	struct<9> Var32;

	iVar0 = PLAYER::PLAYER_ID();
	if (func_430(uParam0))
	{
		if (PLAYER::IS_PLAYER_DEAD(iVar0) && !func_431())
		{
			if (Local_556.f_1009 == 0)
			{
				Local_556.f_1009 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1009, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 15000)
			{
				func_432(1, 1);
				Local_556.f_1009 = 0;
			}
		}
		else
		{
			Local_556.f_1009 = 0;
		}
	}
	if (func_433(uParam0, &uVar1))
	{
		func_434(1);
	}
	else
	{
		func_434(0);
	}
	if ((func_43(2) && func_435(255)) && func_436(255))
	{
		func_437(&Var2, &Var32);
		func_438(Var2, Var32, 1, 1, 1);
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (!func_59(8192))
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	if (func_43(4))
	{
		if (!func_43(67108864))
		{
			PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 1);
			func_125(67108864);
		}
	}
	else if (func_43(67108864))
	{
		PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
		func_44(67108864);
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 2048))
	{
		return;
	}
	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4096))
	{
		iVar0 = 0;
		while (iVar0 < Local_556.f_20.f_548)
		{
			if (func_53(iVar0))
			{
				if (func_52(iVar0, &iVar1, 0, 0))
				{
					ENTITY::_0x1AD922AB5038DEF3(iVar1);
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar1, 0);
				}
				if (func_51(iVar0, 65536) && func_54(iVar0, &iVar1, 1))
				{
					ENTITY::_0x1AD922AB5038DEF3(iVar1);
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar1, 0);
				}
			}
			iVar0++;
		}
		func_189(Local_299[Local_556.f_1008 /*8*/], 4096);
	}
	if (Local_556.f_7.f_7 >= Local_556.f_20.f_553)
	{
		func_189(Local_299[Local_556.f_1008 /*8*/], 2048);
		return;
	}
	iVar2 = Local_556.f_7.f_7;
	iVar0 = &Local_556.f_20.f_495[iVar2 /*2*/];
	if (iVar0 > Local_556.f_20.f_548)
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (iVar0 < 0)
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (func_51(iVar0, 65536))
	{
		if (!func_54(iVar0, &iVar1, 1))
		{
			Local_556.f_7.f_7++;
			return;
		}
	}
	else if (!func_52(iVar0, &iVar1, 1, 0))
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (Local_556.f_20.f_5 >= Local_556.f_20.f_6)
	{
		return;
	}
	sVar3 = func_105(func_104(iVar2));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (!(Local_556.f_20.f_495[iVar2 /*2*/])->f_1)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sVar3);
		(Local_556.f_20.f_495[iVar2 /*2*/])->f_1 = 1;
		return;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar3))
	{
		return;
	}
	if (func_439(iVar1, sVar3, 1, 1058642330 /* Float: 0.6f */, 1053609165 /* Float: 0.4f */, 0))
	{
	}
	func_177(iVar0, 524288);
	Local_556.f_20.f_5++;
	Local_556.f_7.f_7++;
}

void func_230()
{
	bool bVar0;

	if (Local_556.f_20.f_555 == 0)
	{
		return;
	}
	if ((Local_17.f_222 == -1 || Local_17.f_222.f_1 == -1) || !func_59(268435456))
	{
		func_410(Local_299[Local_556.f_1008 /*8*/], 262144);
		func_410(Local_299[Local_556.f_1008 /*8*/], 524288);
		if (func_30(Local_556.f_957))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_556.f_957);
			Local_556.f_957 = 0;
		}
		return;
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 262144))
	{
		return;
	}
	if (!func_440(Local_17.f_222, Local_17.f_222.f_1, &bVar0))
	{
		return;
	}
	if (bVar0)
	{
		func_189(Local_299[Local_556.f_1008 /*8*/], 524288);
	}
	func_189(Local_299[Local_556.f_1008 /*8*/], 262144);
	if (func_30(Local_556.f_957))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Local_556.f_957);
		Local_556.f_957 = 0;
	}
}

void func_231()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_43(4);
	if ((bVar0 && func_43(4096)) && Local_556.f_20.f_16 == 1320143426)
	{
		if (func_441(0, 0, 0))
		{
			if (Local_556.f_1015 == 0)
			{
				Local_556.f_1015 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			if (Local_556.f_1015 != 0 && func_442(Local_556.f_1015) < 45000)
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_556.f_1015 = 0;
		}
	}
	if (bVar0 && Local_556.f_20.f_16 == 1320143426)
	{
		func_32(1);
		func_33(1);
	}
	else
	{
		func_32(0);
		func_33(0);
	}
	if ((bVar0 && Local_556.f_20.f_3 != 0) && !func_45())
	{
		iVar1 = PLAYER::PLAYER_ID();
		switch (Local_556.f_20.f_3)
		{
			case 1503734359:
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar1, -683250308, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar1, 481893872, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar1, 2006449383, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar1, 2140177766, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar1, 2140177766, 0, 0, -1);
				break;
		}
	}
}

void func_232()
{
	bool bVar0;
	int iVar1;

	if (!func_43(8192))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_443(iVar1);
		if (&Local_556.f_952[iVar1] == Global_1893575->f_2 && func_377(Global_1893575->f_2))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		Local_556.f_952.f_4 = 0;
	}
}

void func_233()
{
	if (!func_43(4))
	{
		return;
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		if (func_444())
		{
			if (func_43(33554432))
			{
				return;
			}
			func_125(33554432);
			if (func_43(func_57(1138140145)))
			{
				func_44(func_57(1138140145));
			}
			else if (func_43(func_57(1231609204)))
			{
				func_44(func_57(1231609204));
			}
			return;
		}
		else
		{
			func_44(33554432);
		}
		func_58(1231609204, 0);
		if (func_59(64))
		{
			func_58(-1416703903, 1);
			return;
		}
		else if (func_59(32))
		{
			func_58(758533472, 1);
			return;
		}
		if (func_43(func_57(1138140145)))
		{
			return;
		}
		if (func_43(65536) || func_43(32768))
		{
			if (func_408(Global_36, Local_556.f_20.f_7) < Local_556.f_20.f_19)
			{
				func_58(1138140145, 0);
			}
		}
	}
	else
	{
		func_58(-2111154143, 0);
		if (func_59(64))
		{
			func_58(758533472, 1);
			return;
		}
	}
}

void func_234()
{
	func_445(Local_556.f_7.f_10);
	func_268(&(Local_556.f_7.f_10), 6);
}

void func_235()
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_47(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	func_446(&uVar0, &bVar1, &bVar2, &bVar3);
	if (Local_556.f_1010 != -1)
	{
		iVar4 = NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1010, NETWORK::GET_NETWORK_TIME_ACCURATE());
		if (bVar1)
		{
			Local_556.f_1011 = (Local_556.f_1011 + iVar4);
		}
		else
		{
			Local_556.f_1011 = 0;
		}
		if (bVar2)
		{
			Local_556.f_1012 = (Local_556.f_1012 + iVar4);
		}
		else
		{
			Local_556.f_1012 = 0;
		}
		if (bVar3)
		{
			Local_556.f_1013 = (Local_556.f_1013 + iVar4);
		}
		else
		{
			Local_556.f_1013 = 0;
		}
	}
	if ((!bVar1 && !bVar2) && !bVar3)
	{
		Local_556.f_1010 = -1;
		Local_556.f_1013 = 0;
		Local_556.f_1012 = 0;
		Local_556.f_1011 = 0;
	}
	else
	{
		Local_556.f_1010 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

var func_236(bool bParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;

	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!func_396(iVar1, 0, 1))
			{
			}
			else if ((!func_47(Local_299[iVar1 /*8*/], 4) && !func_47(Local_299[iVar1 /*8*/], 8192)) && !func_47(Local_299[iVar1 /*8*/], 131072))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!func_396(iVar1, 0, 1))
			{
			}
			else if (!func_47(Local_299[iVar1 /*8*/], 4) && !func_47(Local_299[iVar1 /*8*/], 64))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	if (bParam0)
	{
		SCRIPTS::_0xFFDDF802279BE128(&(Local_556.f_958), &uVar0, &uVar2);
		uVar0 = uVar2;
	}
	return uVar0;
}

void func_237(var uParam0)
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

Vector3 func_238(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_447(vParam0, fParam3, fParam4);
}

int func_239()
{
	return Local_556.f_20.f_1;
}

int func_240(int iParam0)
{
	return &(Global_1103536->f_5569[iParam0 /*5*/]);
}

int func_241(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_449(func_448(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_450(iParam0, &vVar0, uParam1))
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

int func_242(int iParam0)
{
	return func_451(iParam0);
}

Vector3 func_243(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_448(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_450(iParam0, &Var3, uParam1))
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

int func_244(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(&(Local_17.f_263[iParam0])))
	{
		return 1;
	}
	if (func_449(vParam1))
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_17.f_263.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, 575122756))
		{
			*bParam6 = 1;
			return 0;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_556.f_20.f_556;
		Local_17.f_263.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_17.f_263.f_5);
	switch (iVar0)
	{
		case 3:
			Local_17.f_263[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_17.f_263.f_5);
			return 1;
		case 4:
			Local_17.f_263.f_5 = 0;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_245(int iParam0, struct<2> Param1, bool bParam3)
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
	if (!func_73(Param1))
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
	uVar31 = func_452(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_453(&Var0, uVar31);
	Var0.f_4 = 13;
	func_454(&Var0);
	return 1;
}

void func_246()
{
	int iVar0;
	float fVar1[21];
	float fVar23;
	int iVar24;
	int iVar25;

	if (Local_556.f_20.f_548 <= 0)
	{
		return;
	}
	if (Local_556.f_20.f_554 <= 0)
	{
		return;
	}
	if (!func_59(16384))
	{
		return;
	}
	if (func_59(2097152))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		fVar1[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < Local_556.f_20.f_554)
	{
		fVar23 = 0f;
		iVar24 = -1;
		iVar0 = 0;
		while (iVar0 < Local_556.f_20.f_548)
		{
			if (&Local_556.f_20.f_22[iVar0 /*19*/] != 391477998)
			{
			}
			else if (func_248(iVar0))
			{
			}
			else if (&fVar1[iVar0] > fVar23)
			{
				fVar23 = &fVar1[iVar0];
				iVar24 = iVar0;
			}
			iVar0++;
		}
		if (iVar24 == -1)
		{
		}
		else
		{
			func_455(iVar24);
			iVar25++;
		}
	}
	func_100(2097152);
}

int func_247(int iParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (((func_456(iParam0, &Var0) && func_346(Var0, -223083781, &bVar5, 0)) && bVar5) && func_345(Var0, 1033186381, iParam1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_248(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Local_17.f_251[iVar0]), iVar1);
}

int func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		if (!func_214(iVar0))
		{
		}
		else if (func_51(iVar0, 8) && !func_248(iVar0))
		{
		}
		else if (((((((func_51(iVar0, 64) && func_250(iVar0, &iVar1)) && &Local_556.f_20.f_22[iVar0 /*19*/] != joaat("target")) && iVar1 >= 0) && iVar1 < 21) && &Local_556.f_20.f_22[iVar1 /*19*/] == 391477998) && !func_248(iVar1)) && func_51(iVar1, 8))
		{
		}
		else
		{
			iVar2++;
		}
		iVar0++;
	}
	return iVar2;
}

int func_250(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_345(Var0, 1033186381, iParam1, 0))
	{
		return 1;
	}
	return 0;
}

void func_251()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_556.f_20.f_548 <= 0)
	{
		return;
	}
	if (!func_457(2, Local_556.f_20.f_556))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_351();
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (&Local_556.f_20.f_22[iVar2 /*19*/] == 0)
		{
		}
		else
		{
			func_375(&Var5);
			if (!func_116(iVar2, &Var5))
			{
			}
			else if (!func_346(Var5, -155963228, &bVar10, 0) || !bVar10)
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
	func_458(iVar1, 33554432);
}

int func_252()
{
	int iVar0;
	int iVar1;

	if (Local_17.f_255.f_2 >= 2)
	{
		return 1;
	}
	iVar0 = func_459();
	if (Local_17.f_255.f_2 >= iVar0)
	{
		return 1;
	}
	iVar1 = Local_17.f_255.f_2;
	if (!func_460(iVar1))
	{
		return 0;
	}
	Local_17.f_255.f_2++;
	return 0;
}

int func_253()
{
	int iVar0;

	if (Local_17.f_255.f_1 >= 18)
	{
		return 1;
	}
	iVar0 = Local_17.f_255.f_1;
	if (!func_461(iVar0))
	{
		return 0;
	}
	Local_17.f_255.f_1++;
	return 0;
}

int func_254()
{
	int iVar0;

	if (Local_17.f_255 >= Local_556.f_20.f_548)
	{
		return 1;
	}
	iVar0 = Local_17.f_255;
	if (!func_462(iVar0))
	{
		return 0;
	}
	func_463();
	Local_17.f_255++;
	return 0;
}

int func_255()
{
	int iVar0;
	int iVar1;

	iVar0 = Local_17.f_255.f_3;
	iVar1 = func_464();
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (!func_465(iVar0))
	{
		return 0;
	}
	func_268(&(Local_17.f_255.f_3), 5);
	return 0;
}

int func_256()
{
	if (!func_59(524288))
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_17.f_277, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 10000)
	{
		return 0;
	}
	return 1;
}

void func_257()
{
	if (func_59(524288))
	{
		return;
	}
	Local_17.f_277 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_100(524288);
}

int func_258()
{
	return Local_556.f_20.f_16;
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_556.f_946;
	func_466(iVar0, &iVar1, &iVar2);
	Local_556.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (Local_556.f_946.f_1 > -1)
	{
		if (Local_556.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_556.f_946.f_2 && Local_556.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_556.f_946.f_1 = iVar0;
	Local_556.f_946.f_3 = iVar2;
	Local_556.f_946.f_2 = iVar3;
}

int func_260()
{
	int iVar0;

	if (Local_556.f_946.f_1 == -1)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_556.f_946.f_1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_17.f_280))
	{
		return 0;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) && _NAMESPACE26::NETWORK_GET_GANG_ID(iVar0) == Local_17.f_279)
	{
		return 0;
	}
	if (iVar0 == Local_17.f_280)
	{
		return 0;
	}
	Local_17.f_234[0 /*2*/] = iVar0;
	Local_17.f_275++;
	Local_17.f_276 = Local_17.f_275;
	return 1;
}

void func_261()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_556.f_946;
	func_467(iVar0, &iVar1, &iVar2);
	Local_556.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (Local_556.f_946.f_1 > -1)
	{
		if (Local_556.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_556.f_946.f_2 && Local_556.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_556.f_946.f_1 = iVar0;
	Local_556.f_946.f_3 = iVar2;
	Local_556.f_946.f_2 = iVar3;
}

int func_262()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Local_556.f_946.f_1 == -1)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_556.f_946.f_1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_17.f_280))
	{
		return 0;
	}
	iVar1 = _NAMESPACE26::NETWORK_GET_GANG_ID(iVar0);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		return 0;
	}
	if (iVar1 == Local_17.f_279)
	{
		return 0;
	}
	if (iVar0 == Local_17.f_280)
	{
		return 0;
	}
	Local_17.f_281 = iVar1;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (_NAMESPACE26::NETWORK_GET_GANG_ID(iVar4) != iVar1)
		{
		}
		else
		{
			Local_17.f_234[iVar2 /*2*/] = iVar4;
			iVar2++;
			Local_17.f_275++;
		}
		iVar3++;
	}
	Local_17.f_276 = Local_17.f_275;
	return 1;
}

void func_263()
{
	func_468();
	if (!func_59(16777216))
	{
		if (func_469(4))
		{
			if (func_59(8))
			{
				func_470(1);
			}
			func_100(16777216);
		}
	}
	else if (((!func_59(64) && !func_59(32)) && !func_59(8388608)) && !func_469(4))
	{
		func_100(8388608);
	}
	if (!func_59(2048) && (func_43(32768) || func_43(65536)))
	{
		if (func_469(1024))
		{
			func_100(2048);
		}
	}
}

void func_264()
{
	bool bVar0;

	if (Local_556.f_20.f_555 == 0)
	{
		return;
	}
	func_471(Local_17.f_259.f_2, &bVar0);
	if (bVar0)
	{
		return;
	}
	func_268(&(Local_17.f_259.f_2), Local_556.f_20.f_555);
}

void func_265()
{
	int iVar0;

	iVar0 = Local_17.f_259;
	func_472(iVar0);
	func_268(&(Local_17.f_259), 7);
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_267(int iParam0)
{
	int iVar0;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 0)
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396)
	{
		func_473(iParam0);
	}
	func_474(iParam0);
	if (!func_476(iParam0, 1, func_475((Local_17.f_2[iParam0 /*9*/])->f_2)) && (Local_17.f_2[iParam0 /*9*/])->f_2 != 1583594396)
	{
		func_477(iParam0);
		return;
	}
	func_478(iParam0);
	if (func_43(65536) || func_43(32768))
	{
		if (((!func_59(536870912) && (Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target")) && func_52(iParam0, &iVar0, 1, 1)) && func_408(ENTITY::GET_ENTITY_COORDS(iVar0, false, true), Local_556.f_20.f_7) > Local_556.f_20.f_19)
		{
			func_100(536870912);
		}
	}
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
			func_479(iParam0);
			break;
		case joaat("extra"):
			func_480(iParam0);
			break;
		case 1824637041:
			func_481(iParam0);
			break;
		case 516423162:
			func_482(iParam0);
			break;
		case 1583594396:
			if (func_483(iParam0))
			{
				func_62(iParam0, 0);
				func_484(iParam0);
			}
			break;
	}
}

void func_268(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

int func_269(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17116[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17116[iVar0 /*2*/] == iParam0)
		{
			return (Global_17116[Global_17137 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 4;
}

int func_271(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 878483537;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

int func_272(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_109(Var0, -1111171646, uParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 406;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 510;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 485;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 545;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 342;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 543;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
		case 1302228510:
			return 349;
		case 1306158345:
			return 199;
		case 1321892118:
			return 357;
		case 1325325699:
			return 421;
		case 1341699707:
			return 526;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 497;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 414;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 450;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 426;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 436;
		case 1521272922:
			return 458;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 386;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 521;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 527;
		case 1691618738:
			return 66;
		case 1698972798:
			return 352;
		case 1703398561:
			return 365;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 377;
		case 1766284049:
			return 92;
		case 1774060092:
			return 544;
		case 1776302352:
			return 299;
		case 1788424349:
			return 445;
		case 1812677765:
			return 398;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 413;
		case 1867912207:
			return 68;
		case 1881028477:
			return 364;
		case 1884271742:
			return 51;
		case 1891256113:
			return 437;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 360;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 489;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 498;
		case 2051822093:
			return 284;
		case 2068208444:
			return 428;
		case 2068253437:
			return 478;
		case 2077022393:
			return 291;
		case 2079292950:
			return 457;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 397;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 496;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_40.f_106[iVar1], iVar2);
	Global_1938569 = 0;
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_40.f_106[iVar1], iVar2);
	Global_1938569 = 0;
}

void func_276()
{
	func_275(-939420910);
	func_275(-1187950766);
	func_275(356365161);
	func_275(753127042);
	func_275(-2038424081);
	func_275(1884271742);
	func_275(459290420);
}

void func_277()
{
	func_275(704802028);
	func_275(588987611);
	func_275(2008888900);
	func_275(1649996811);
	func_275(227918160);
	func_275(168171957);
	func_275(1193080109);
	func_275(-491981251);
	func_275(-639037538);
	func_275(-618620429);
}

bool func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_485(iVar1))
	{
		if (Global_1070355->f_17915.f_24 && !func_486(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070355->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2);
}

void func_279(int iParam0)
{
	if (func_487(iParam0) && func_488())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

int func_280(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_281(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_489(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1273882->f_22[iVar0])
		{
			func_123(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070355->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1273882 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_281(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_490(&Var6, uVar4);
		}
	}
}

void func_282(int iParam0)
{
	if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

char* func_283(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_284(int iParam0)
{
	func_285(Local_556.f_584[iParam0]);
}

void func_285(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_286(int iParam0)
{
	return iParam0 != 0;
}

void func_287(var uParam0, bool bParam1, bool bParam2)
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

void func_288(int iParam0, bool bParam1)
{
	struct<14> Var0;

	if (iParam0->f_2 > 0)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_491(iParam0);
			func_492();
		}
		func_493(iParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(iParam0->f_4));
		iParam0->f_9 = 0;
		func_494(0);
		func_495(0);
		_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(iParam0, &Var0, 15);
	}
}

bool func_289(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_286(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_290(int iParam0)
{
	int iVar0;

	if (&Local_556.f_584.f_31[iParam0] == 255)
	{
		return;
	}
	iVar0 = &Local_556.f_584.f_31[iParam0];
	func_496(iVar0);
	func_497(iVar0);
	func_498(iVar0);
	func_499(&(Local_17.f_234[iParam0 /*2*/]));
	func_500(iVar0);
	Local_556.f_584.f_31[iParam0] = 255;
}

void func_291(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_959), iParam0))
	{
		return;
	}
	func_497(iParam0);
	func_500(iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Local_556.f_959), iParam0);
}

bool func_292(var uParam0, int iParam1, int iParam2)
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

bool func_293(var uParam0, int iParam1, int iParam2)
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

int func_294(int iParam0)
{
	if (func_176(iParam0, 1))
	{
		return 0;
	}
	if (func_176(iParam0, 4096))
	{
		return 0;
	}
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
		case 516423162:
		case 1824637041:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_295(int iParam0, int iParam1)
{
	func_139(&((Local_556.f_20.f_22[iParam0 /*19*/])->f_1), iParam1);
}

int func_296(int iParam0, bool bParam1)
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
		iVar2 = func_501(iVar4, 1);
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
				func_502(iVar2, bVar3, bParam1);
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
					(Global_1131373->f_4641.f_2[func_503(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

void func_297(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_298()
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

int func_299(int iParam0)
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

int func_300(int iParam0)
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

void func_301(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_302(struct<2> Param0, bool bParam2)
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
	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_504(Param0);
	if (!func_505(iVar1))
	{
		return;
	}
	iVar0 = func_506(iVar1);
	if (!func_507(iVar0))
	{
		return;
	}
	iVar2 = func_508(iVar1);
	if (!func_509(iVar2))
	{
		return;
	}
	iVar10 = func_510(iVar1);
	if (iVar10 == -1)
	{
		return;
	}
	iVar3 = func_511(iVar0);
	iVar4 = func_512(iVar0);
	iVar9 = func_240(iVar10);
	if (func_513())
	{
		if (bParam2 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_514(iVar0, iVar2, Param0, iVar10);
		}
		if (func_242(iVar9) != joaat("setup"))
		{
			switch (iVar4)
			{
				case 2132950130:
					break;
				case -408236271:
					func_516(iVar4, func_515());
					func_517(iVar4, 1);
					func_518(iVar0);
					func_519(iVar0);
					func_520(8388608);
					break;
				case 1766283257:
					func_516(iVar4, func_515());
					func_517(iVar4, 1);
					func_518(iVar0);
					func_519(iVar0);
					func_520(4194304);
					break;
				default:
					func_516(iVar4, func_515());
					func_517(iVar4, 1);
					func_518(iVar0);
					func_519(iVar0);
					break;
			}
		}
		func_521(iVar4, func_515());
		func_522(iVar4, bParam2);
		switch (func_523(iVar9))
		{
			case 7:
				func_524(iVar1, &Var5);
				func_525(&Var5);
				break;
		}
		func_526(iVar10, Param0, bParam2);
		func_528(func_527(iVar0), 1);
		func_529(1);
	}
	func_530(iVar3, bParam2);
	func_531();
}

int func_303(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	return func_532(iParam0, iParam1);
}

void func_304(int iParam0)
{
	func_533(iParam0);
}

void func_305(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_534(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_535(Var0))
	{
		return;
	}
	if (!func_536(Var0))
	{
		return;
	}
	if (func_537(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_538(Var0, 0, bVar2, bParam2);
	func_539(iParam0, 4);
}

void func_306(bool bParam0, bool bParam1, int iParam2)
{
	if (func_45())
	{
		*iParam2 = Local_17.f_276;
		if (bParam0)
		{
			*bParam1 = Local_17.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_17.f_275);
		}
	}
	else
	{
		*iParam2 = Local_556.f_20.f_549;
		if (bParam0)
		{
			*bParam1 = Local_17.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_17.f_275);
		}
	}
}

void func_307(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_504(Param0);
	if (!func_505(iVar1))
	{
		return;
	}
	iVar0 = func_506(iVar1);
	if (!func_507(iVar0))
	{
		return;
	}
	iVar2 = func_508(iVar1);
	if (!func_509(iVar2))
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
	iVar10 = func_512(iVar0);
	iVar11 = func_154(Param0);
	iVar8 = func_510(iVar1);
	iVar9 = func_511(iVar0);
	if (func_513())
	{
		func_540(iVar10, iVar11);
		func_541(iVar10, iVar8);
		func_542(iVar10, iVar7);
		func_543(iVar10, bParam2, bVar4);
		func_544(iVar10, bParam2, bVar6);
		func_545(iVar8, bParam2, bVar4, Param0, iVar1);
		if (!bParam2)
		{
			if (bVar4)
			{
				func_546(iVar2, iVar0, 1545958071, Param0);
			}
			else
			{
				func_546(iVar2, iVar0, -448995989, Param0);
			}
		}
		func_547(bVar4);
	}
	func_548(iVar9, bParam2, bVar4);
	func_549(Param0, bVar4);
	func_550(1);
	func_550(0);
	func_551(0);
	func_552(0);
	func_553(4);
}

void func_308(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_534(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_535(Var0))
	{
		return;
	}
	if (!func_536(Var0))
	{
		return;
	}
	if (func_537(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_538(Var0, 0, 1, bParam1);
	func_539(iParam0, 5);
}

void func_309(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_534(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (!func_535(Var0) && !func_536(Var0))
	{
		return;
	}
	func_554(iParam0, 2);
	func_554(iParam0, 3);
	func_539(iParam0, 6);
	func_538(Var0, 0, 2, bParam1);
}

int func_310(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return 0;
	}
	func_555(iParam2);
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

int func_311(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_556(iVar0);
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

int func_312(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_311(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_240(iParam0);
	iVar2 = func_556(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_557(2);
		case 1:
			return func_557(3);
		default:
			break;
	}
	return uVar0;
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (iParam0 / 32);
	*iParam2 = (iParam0 % 32);
}

int func_314(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return 0;
	}
	return 1;
}

int func_315(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::_0x4C8B59171957BCF7(PLAYER::PLAYER_PED_ID()) != iVar0)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)
{
	return (Local_17.f_234[iParam0 /*2*/])->f_1;
}

char* func_317()
{
	return "supply_delivered";
}

char* func_318()
{
	return "HUD_MP_FREE_MODE";
}

int func_319(int iParam0)
{
	return (Local_17.f_2[iParam0 /*9*/])->f_2;
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_65() != 0)
	{
		return;
	}
	if (func_558())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1131373->f_4641.f_2[func_503(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1131373->f_4641.f_2[func_503(iParam0, 1) /*4*/])->f_2++;
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
	func_559(&Var0, uVar7);
}

int func_321(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (iVar0 == iParam0)
		{
		}
		else
		{
			if (func_176(iVar0, 1) || func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
			{
				bVar2 = true;
			}
			else
			{
				bVar1 = true;
				iVar0++;
			}
			if (bVar1 && !bVar2)
			{
				return 1;
			}
			return 0;
		}
	}

var func_322(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_560() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1273882->f_10;
	iVar6 = Global_1273882->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_561());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_561());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_561());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_562(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar2])))
		{
			iVar10 = &Global_1273882->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_563(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1273882->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_564(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_565(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

void func_323(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 53;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_5 = Local_556;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 37, &uParam1);
}

void func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (uParam0->f_4)
	{
		case 1:
			iVar0 = &Local_17.f_234[uParam0->f_6 /*2*/];
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				return;
			}
			if (!func_43(4))
			{
				return;
			}
			func_567(func_566(iVar0));
			break;
		case 2:
			if ((!func_47(Local_299[Local_556.f_1008 /*8*/], 4) && !func_47(Local_299[Local_556.f_1008 /*8*/], 8192)) && !func_47(Local_299[Local_556.f_1008 /*8*/], 131072))
			{
				return;
			}
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_7);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				return;
			}
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (((func_47(Local_299[Local_556.f_1008 /*8*/], 4) && !func_59(64)) && !func_59(32)) && !func_163(uParam0->f_6))
			{
				func_567(func_568(uParam0->f_6));
			}
			func_496(uParam0->f_6);
			func_498(uParam0->f_6);
			break;
		case 7:
			if (!func_43(4))
			{
				return;
			}
			if (uParam0->f_6 < 0 || uParam0->f_6 >= 21)
			{
				return;
			}
			func_313(iVar1, &iVar3, &iVar4);
			if (MISC::IS_BIT_SET(&(Local_556.f_996[iVar3]), iVar4))
			{
				return;
			}
			if (Local_556.f_20 == 1657045547)
			{
				if (uParam0->f_1 == PLAYER::PLAYER_ID() || (func_52(uParam0->f_6, &iVar2, 0, 1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), Global_36) < 30f))
				{
					if (func_321(uParam0->f_6))
					{
						func_125(1024);
					}
				}
			}
			MISC::SET_BIT(Local_556.f_996[iVar3], iVar4);
			break;
		case 11:
			func_569(uParam0->f_6);
			break;
	}
}

void func_325(int iParam0, int iParam1)
{
	if (func_176(iParam0, 134217728))
	{
		return;
	}
	if (&Local_556.f_20.f_22[iParam0 /*19*/] != joaat("target") && &Local_556.f_20.f_22[iParam0 /*19*/] != 391477998)
	{
		return;
	}
	if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam1))
	{
		(Local_17.f_2[iParam0 /*9*/])->f_5 = iParam1;
	}
	if (!func_59(16))
	{
		Local_17.f_275 = (Local_17.f_275 - 1);
	}
	func_458(iParam0, 134217728);
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(Local_17.f_249[iVar0], iVar1);
	Local_17.f_275 = (Local_17.f_275 - 1);
	func_100(4194304);
}

void func_327(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_570(iParam0, 3);
}

void func_328(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_571(iParam0, iParam1);
}

void func_329(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target") || func_176(iParam0, 134217728))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	(Local_17.f_2[iParam0 /*9*/])->f_5 = iParam1;
}

void func_330(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_570(iParam0, 3);
}

void func_331(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_570(iParam0, 3);
}

void func_332(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_570(iParam0, 3);
}

void func_333(int iParam0, var uParam1)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return;
	}
	if (func_572(iParam0))
	{
		return;
	}
	func_573(iParam0);
}

void func_334(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return;
	}
	if (func_172(iParam0, 2))
	{
		return;
	}
	func_574(iParam0, 2);
}

int func_335(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_575(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_336(int iParam0, int iParam1)
{
	return ((Global_1100949->f_33[iParam0 /*16*/])->f_3.f_8 && iParam1) != 0;
}

void func_337(int iParam0)
{
	((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_52.f_1 = (((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_52.f_1 || iParam0);
}

void func_338(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringIntConCat(&cVar0, Local_556, 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

void func_339(int iParam0)
{
	func_340(1, iParam0, -767591988, 1);
	func_340(1, iParam0, -989642646, 1);
	func_340(1, iParam0, -1683752762, 1);
	func_340(1, iParam0, 889541022, 1);
	func_340(1, iParam0, -319516747, 1);
	func_340(1, iParam0, 1986610512, 1);
	func_340(1, iParam0, -1329647920, 1);
}

void func_340(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_341(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar3 = func_240(iParam0);
	if (bParam1)
	{
		iVar2 = 1822827642;
	}
	else
	{
		iVar2 = joaat("attempts");
	}
	if (!func_576(iVar3, iVar2, &Var0))
	{
		return -1;
	}
	return func_577(Var0, -1);
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -872351721;
		case 1:
			return -1192837347;
		case 2:
			return 1457454771;
		case 3:
			return -486752250;
		case 4:
			return -81907729;
		case 5:
			return 724299998;
		case 6:
			return 256341061;
		case 7:
			return 95942702;
		case 8:
			return 331094197;
		case 9:
			return -1251795501;
		case 10:
			return -67473273;
		case 11:
			return -422348800;
		case 12:
			return -235687863;
		case 13:
			return 917283806;
		case 14:
			return -1284309372;
		case 15:
			return 110383052;
		case 16:
			return 229174115;
		case 17:
			return 251189665;
		case 18:
			return 1468810894;
		case 19:
			return -1906113237;
		case 20:
			return 92190263;
		case 21:
			return 1352900226;
		case 22:
			return -1834576753;
		case 23:
			return -185755803;
		case 24:
			return 1852727176;
		case 25:
			return -1968510322;
		case 26:
			return 1970643719;
		case 27:
			return -30329033;
		case 28:
			return 644584216;
		case 29:
			return 1077944842;
		case 30:
			return -435940167;
		case 31:
			return 1200880489;
		case 32:
			return 1385823714;
		case 33:
			return -180479720;
		case 34:
			return 582819194;
		case 35:
			return -234450476;
		case 36:
			return -1261869617;
		case 37:
			return -1103749002;
		case 38:
			return -1807236653;
		case 39:
			return 1837403330;
		case 40:
			return -764544644;
		case 41:
			return 79787630;
		case 42:
			return 465120035;
		case 43:
			return 1787479687;
		case 44:
			return 2092186359;
		case 45:
			return 219784559;
		case 46:
			return -1893679960;
		case 47:
			return -485657984;
		case 48:
			return -827172890;
		case 49:
			return 458129012;
		case 50:
			return 1533007347;
		case 51:
			return 485523583;
		case 52:
			return -537276532;
		case 53:
			return 861602793;
		case 54:
			return 275738575;
		case 55:
			return 1520538369;
		case 56:
			return -480788145;
		case 57:
			return -1045199329;
		case 58:
			return -1746234201;
		case 59:
			return 878483537;
		case 60:
			return -1111171646;
		case 61:
			return 227384668;
		case 62:
			return 2066595802;
		case 63:
			return 1137547076;
		case 64:
			return -1786937793;
		case 65:
			return -492382713;
		case 66:
			return -223083781;
		case 67:
			return -1770081554;
		case 68:
			return -1925214904;
		case 69:
			return -1318044545;
		case 70:
			return 509508008;
		case 71:
			return -1584591647;
		case 72:
			return -865441380;
		case 73:
			return 566779387;
		case 74:
			return -209788964;
		case 75:
			return -807337682;
		case 76:
			return -874477517;
		case 77:
			return 2090933413;
		case 78:
			return -852511194;
		case 79:
			return 1159597515;
		case 80:
			return 460674190;
		case 81:
			return 2053368303;
		case 82:
			return -1882633578;
		case 83:
			return 265695803;
		case 84:
			return -2129803861;
		case 85:
			return 1628979087;
		case 86:
			return 413379496;
		case 87:
			return 1967834759;
		case 88:
			return -1878208438;
		case 89:
			return -385659440;
		case 90:
			return 2017657609;
		case 91:
			return 1719410419;
		case 92:
			return -1839625215;
		case 93:
			return 1160908162;
		case 94:
			return 1247393678;
		case 95:
			return 1446570234;
		case 96:
			return -261480992;
		case 97:
			return 1031590257;
		case 98:
			return 1322693839;
		case 99:
			return -1919876099;
		case 100:
			return 2069982589;
		case 101:
			return 625548052;
		case 102:
			return -2036553865;
		case 103:
			return -1249970703;
		case 104:
			return -454599147;
		case 105:
			return 1955180846;
		case 106:
			return -401087351;
		case 107:
			return 732905427;
		case 108:
			return -962528168;
		case 109:
			return -930766145;
		case 110:
			return 1823038874;
		case 111:
			return -176401167;
		case 112:
			return 635104585;
		case 113:
			return -1031804957;
		case 114:
			return -1272790307;
		case 115:
			return 735506410;
		case 116:
			return -1732010034;
		case 117:
			return -1711751769;
		case 118:
			return 2092691923;
		case 119:
			return 484707754;
		case 120:
			return -787028349;
		case 121:
			return -937849669;
		case 122:
			return -424701201;
		case 123:
			return -407841845;
		case 124:
			return 2071017826;
		case 125:
			return 1606032220;
		case 126:
			return 456924499;
		case 127:
			return 307635954;
		case 128:
			return -311657344;
		case 129:
			return -401112943;
		case 130:
			return 1059929194;
		case 131:
			return 871643656;
		case 132:
			return -412523681;
		case 133:
			return -155963228;
		case 134:
			return 597233769;
		case 135:
			return 706368435;
		case 136:
			return -1334467051;
		case 137:
			return -867387895;
		case 138:
			return -1652447499;
		case 139:
			return 1082010721;
		case 140:
			return -655039491;
		case 141:
			return -1296487272;
		case 142:
			return -429389572;
		case 143:
			return -1026827677;
		case 144:
			return 686916651;
		case 145:
			return -1765395338;
		case 146:
			return 1237093265;
		case 147:
			return 209905749;
		case 148:
			return 1078011673;
		case 149:
			return 561062234;
		case 150:
			return 1033186381;
		case 151:
			return 386308088;
		case 152:
			return -375509478;
		case 153:
			return -436871069;
		case 154:
			return 1464077990;
		case 155:
			return 723480330;
		case 156:
			return -1859092546;
		case 157:
			return -2109843125;
		case 158:
			return 749370907;
		case 159:
			return 1525953930;
		case 160:
			return -1839855939;
		case 161:
			return 1158526802;
		case 162:
			return 350192982;
		case 163:
			return 1475346163;
		case 164:
			return 1590382703;
		case 165:
			return 1741894372;
		case 166:
			return 1309785647;
		case 167:
			return -894890997;
		case 168:
			return -2067326263;
		case 169:
			return -1133284398;
		case 170:
			return 101317385;
		case 171:
			return -1463370342;
		case 172:
			return -513112783;
		case 173:
			return 2102445471;
		case 174:
			return 892963390;
		case 175:
			return 89352665;
		case 176:
			return -2076494195;
		case 177:
			return -1976409839;
		case 178:
			return 217995581;
		case 179:
			return -1269124321;
		case 180:
			return -1438322653;
		case 181:
			return 673047879;
		case 182:
			return -1918016700;
		case 183:
			return 258114362;
		case 184:
			return -619208322;
		case 185:
			return 796390761;
		case 186:
			return 912480409;
		case 187:
			return -728132736;
		case 188:
			return 1890996209;
		case 189:
			return -407275447;
		case 190:
			return -1443980387;
		case 191:
			return 2132698637;
		case 192:
			return -597454543;
		case 193:
			return -608357025;
		case 194:
			return 1793981541;
		case 195:
			return -966540255;
		case 196:
			return -1143761632;
		case 197:
			return 1326664274;
		case 198:
			return 691956863;
		case 199:
			return -566322512;
		case 200:
			return 1903857900;
		case 201:
			return 1518210740;
		case 202:
			return -1527836996;
		case 203:
			return -49926176;
		case 204:
			return 1855722710;
		case 205:
			return 764754194;
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

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case -872351721:
			return "activity/locations/location(id=%x)";
		case -1192837347:
			return "activity/locations/location(%i)";
		case 1457454771:
			return "activity/locations";
		case 331094197:
			return "peds/ped(%i)";
		case -1251795501:
			return "peds";
		case -67473273:
			return "props";
		case -422348800:
			return "props/prop(%i)";
		case -1746234201:
			return "tracking_paths";
		case 878483537:
			return "tracking_paths/path(%i)";
		case -1968510322:
			return "patrol_routes/patrol_route(%i)";
		case 1970643719:
			return "patrol_routes";
		case -30329033:
			return "patrol_node(%i)";
		case 485523583:
			return "defensive_areas";
		case -537276532:
			return "defensive_areas/defensive_volume(%i)";
		case 1520538369:
			return "ambient_restriction_areas";
		case -480788145:
			return "ambient_restriction_areas/ambient_restriction_volume(%i)";
		case -937849669:
			return "respawn_exclusion_areas";
		case -424701201:
			return "respawn_exclusion_areas/respawn_exclusion_volume(%i)";
		case -1318044545:
			return "los_blockers";
		case 509508008:
			return "los_blockers/blocker(%i)";
		case 625548052:
			return "ambient_chests";
		case -2036553865:
			return "ambient_chests/chest(%i)";
		case 732905427:
			return "aggregate_volumes";
		case -962528168:
			return "aggregate_volumes/aggregate_volume(%i)";
		case 1823038874:
			return "waves/wave(%i)";
		case -930766145:
			return "waves";
		case -176401167:
			return "wave_ped(%i)";
		case 484707754:
			return "respawn_points";
		case -787028349:
			return "respawn_points/respawn_point(%i)";
		case 2071017826:
			return "triggers";
		case 1606032220:
			return "triggers/trigger(%i)";
		case 386308088:
			return "herb_restriction_volumes";
		case -375509478:
			return "herb_restriction_volumes/herb_restriction_volume(%i)";
		case -1334467051:
			return "ped_groups";
		case -867387895:
			return "ped_groups/ped_group(%i)";
		case -429389572:
			return "ped_groups/ped_group(%i)/ped(%i)";
		case 723480330:
			return "lighting_rigs";
		case -1859092546:
			return "lighting_rigs/lighting_rig(%i)";
		case 749370907:
			return "region_trespass_volume_handlers";
		case 1525953930:
			return "region_trespass_volume_handlers/region(%i)";
		case -1839855939:
			return "trespass_volume_search(%i)";
		case -1976409839:
			return "pickups";
		case 217995581:
			return "pickups/pickup(%i)";
		case -407275447:
			return "target_zones";
		case -1443980387:
			return "target_zones/target_zone(%i)";
		case 644584216:
			return "decals/decal(%i)";
		case -1527836996:
			return "world_states";
		case -49926176:
			return "world_states/world_state(%i)";
		case 1077944842:
			return "decals";
		case 2132698637:
			return "ped(%i)";
		case -486752250:
			return ":model";
		case -81907729:
			return ":position";
		case 724299998:
			return ":heading";
		case 256341061:
			return ":weapon";
		case 95942702:
			return ":role";
		case 917283806:
			return ":mounted";
		case -1284309372:
			return ":weapon_out";
		case 110383052:
			return ":aggro_group_id";
		case 229174115:
			return ":scenario";
		case 251189665:
			return ":behavior";
		case 1468810894:
			return ":follow_offset";
		case -1906113237:
			return ":follow_target";
		case 92190263:
			return ":mission_time";
		case 1352900226:
			return ":is_sentry";
		case -1834576753:
			return ":use_proximity_alert";
		case -185755803:
			return ":pvp_mission";
		case 1852727176:
			return ":targets_start_visible";
		case -435940167:
			return ":look_at_position";
		case 1200880489:
			return ":duration";
		case 1385823714:
			return ":next_node";
		case -180479720:
			return ":patrol_route_id";
		case 582819194:
			return ":central_location";
		case -1103749002:
			return ":escape_dist";
		case -234450476:
			return ":is_potential_target";
		case -1261869617:
			return ":adds_extra_bounty";
		case -1807236653:
			return ":sentry_aim_dist";
		case 1837403330:
			return ":sentry_alert_dist";
		case -764544644:
			return ":proximity_alert_dist";
		case 79787630:
			return ":blip_search_radius";
		case 465120035:
			return ":blip_offset_radius";
		case -827172890:
			return ":is_law";
		case 219784559:
			return ":central_location_radius";
		case -1893679960:
			return ":central_location_name";
		case -485657984:
			return ":max_search_radius_offset";
		case 1787479687:
			return ":use_search_area";
		case 2092186359:
			return ":use_go_to_area";
		case 458129012:
			return ":locate_all_targets_together";
		case 1533007347:
			return ":defensive_area_id";
		case 861602793:
			return ":rotation";
		case 275738575:
			return ":scale";
		case -1045199329:
			return ":loop_back";
		case -1111171646:
			return ":waypoint_recording";
		case 227384668:
			return ":source_ped_id";
		case 2066595802:
			return ":enable_tracking_paths";
		case 1137547076:
			return ":randomly_select_targets";
		case -1786937793:
			return ":num_targets_to_pick";
		case -492382713:
			return ":dont_spawn_unless_target";
		case -223083781:
			return ":is_dependent";
		case -1770081554:
			return ":clear_hideouts_in_area";
		case -1925214904:
			return ":target_escape_dist";
		case -1584591647:
			return ":start";
		case -865441380:
			return ":end";
		case 566779387:
			return ":is_guard";
		case -235687863:
			return ":place_on_ground";
		case -209788964:
			return ":is_propset";
		case -807337682:
			return ":is_vehicle";
		case -874477517:
			return ":aggro_on_trespass";
		case 2090933413:
			return ":dont_aim_gun_on_disrupt";
		case -852511194:
			return ":has_saddle";
		case 1159597515:
			return ":use_veg_mod";
		case 460674190:
			return ":use_lantern_behavior";
		case 2053368303:
			return ":use_last_known_location";
		case -1882633578:
			return ":last_known_location";
		case 265695803:
			return ":lkl_radius";
		case -2129803861:
			return ":visible_mission_time";
		case 1628979087:
			return ":max_active_tracking_paths";
		case 413379496:
			return ":use_delayed_targeting";
		case 1967834759:
			return ":always_neutral";
		case -1878208438:
			return ":use_long_distance_smoke";
		case -385659440:
			return ":smoke_offset";
		case 2017657609:
			return ":veg_mod_type";
		case 1719410419:
			return ":veg_mod_offset";
		case -1839625215:
			return ":veg_mod_size";
		case -261480992:
			return ":scenario_pos";
		case 1031590257:
			return ":start_off_horse";
		case 1322693839:
			return ":horse_position";
		case -1919876099:
			return ":horse_heading";
		case 2069982589:
			return ":scenario_propset";
		case -1249970703:
			return ":chest_type";
		case -454599147:
			return ":weight";
		case 1955180846:
			return ":num_chests_to_create";
		case -401087351:
			return ":type";
		case 635104585:
			return ":on_peds_remaining";
		case -1031804957:
			return ":delay";
		case -1272790307:
			return ":min_required_players";
		case 735506410:
			return ":max_required_players";
		case -1732010034:
			return ":alerted_behavior";
		case -1711751769:
			return ":move_to_pos";
		case 2092691923:
			return ":alt_move_to_pos";
		case -407841845:
			return ":weapon_to_add_on_move_to_reached";
		case 456924499:
			return ":activator";
		case 307635954:
			return ":ambush_wait_pos";
		case -311657344:
			return ":ambush_wait_heading";
		case -401112943:
			return ":crouch_before_ambush";
		case 1059929194:
			return ":ambush_trigger";
		case 871643656:
			return ":cancel_ambush_trigger";
		case -412523681:
			return ":accuracy";
		case -155963228:
			return ":can_have_treasure_map_loot";
		case 597233769:
			return ":placement_type";
		case 706368435:
			return ":enable_law";
		case -1652447499:
			return ":default_task_allocator";
		case -1296487272:
			return ":id";
		case 1082010721:
			return ":formation";
		case -655039491:
			return ":formation_offset";
		case -1026827677:
			return ":targets_to_add_on_2_starting_players";
		case 686916651:
			return ":targets_to_add_on_3_starting_players";
		case -1765395338:
			return ":targets_to_add_on_4_starting_players";
		case 1237093265:
			return ":targets_to_add_on_5_starting_players";
		case 209905749:
			return ":targets_to_add_on_6_starting_players";
		case 1078011673:
			return ":targets_to_add_on_7_starting_players";
		case 561062234:
			return ":force_flee_on_remaining_targets";
		case 1033186381:
			return ":dependent_target_ped";
		case -436871069:
			return ":health";
		case 1464077990:
			return ":mount_model";
		case -2109843125:
			return ":scene_name";
		case 1158526802:
			return ":radius";
		case 350192982:
			return ":outfit";
		case 1475346163:
			return ":outfit_index";
		case 1590382703:
			return ":loco_motion_type";
		case 1741894372:
			return ":seeing_range";
		case 1309785647:
			return ":hearing_range";
		case -894890997:
			return ":no_draft_horses";
		case -2067326263:
			return ":not_usable_by_player";
		case -1133284398:
			return ":spawn_in_vehicle";
		case 101317385:
			return ":vehicle_to_use";
		case -1463370342:
			return ":vehicle_seat";
		case -513112783:
			return ":starts_anchored";
		case 2102445471:
			return ":use_mount_as_tracking_source_standin";
		case 892963390:
			return ":dont_flee_on_mission_end";
		case 89352665:
			return ":is_dead_ped";
		case -2076494195:
			return ":remove_default_weapons";
		case -1269124321:
			return ":can_be_picked_up_by_player";
		case -1438322653:
			return ":orient_to_ground";
		case 673047879:
			return ":on_object";
		case -1918016700:
			return ":fixed";
		case 258114362:
			return ":pickup_weapon_after_move_to";
		case -619208322:
			return ":pickup_index";
		case 796390761:
			return ":alt_pickup_index";
		case 912480409:
			return ":move_to_heading";
		case -728132736:
			return ":alt_move_to_heading";
		case 1890996209:
			return ":weapon_to_give_ped";
		case -597454543:
			return ":attach_ped";
		case -608357025:
			return ":path_foliage_cost";
		case 1793981541:
			return ":path_deep_snow_cost";
		case -966540255:
			return ":path_climb_cost";
		case -1143761632:
			return ":dismount_on_arrival";
		case 1326664274:
			return ":dismount_delay";
		case 691956863:
			return ":melee_target";
		case -566322512:
			return ":brawler_group";
		case 1903857900:
			return ":width";
		case 1518210740:
			return ":has_discoverable_name";
		case 1160908162:
			return ":use_veg_mod_volume";
		case 1247393678:
			return ":veg_mod_scale";
		case 1446570234:
			return ":veg_mod_rotation";
		case 1855722710:
			return ":crime_config";
		case 764754194:
			return ":set_mission_road_context";
		default:
			break;
	}
	return "";
}

int func_344(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

int func_345(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_346(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
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

int func_347(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_348(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
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

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (func_119(&Var2))
	{
		func_345(Var2, -1786937793, &iVar0, 0);
		if (iParam0 >= 2 && func_345(Var2, -1026827677, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 3 && func_345(Var2, 686916651, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 4 && func_345(Var2, -1765395338, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 5 && func_345(Var2, 1237093265, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 6 && func_345(Var2, 209905749, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 7 && func_345(Var2, 1078011673, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
	}
	return func_578(iVar0, 0, 21);
}

int func_350()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_579(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

int func_351()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_580(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 21)
	{
		return 21;
	}
	return iVar5;
}

void func_352(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	vector3 vVar16;
	int iVar19;
	bool bVar20;
	bool bVar21;

	iVar19 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return;
	}
	if (!func_581(Var0))
	{
		return;
	}
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_16 = 30f;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_17 = 12f;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_18 = 30f;
	if (func_348(Var0, -1807236653, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_16), 0))
	{
		func_177(iParam0, 1024);
	}
	if (func_348(Var0, 1837403330, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_17), 0))
	{
		func_177(iParam0, 2048);
	}
	func_348(Var0, -764544644, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_18), 0);
	func_345(Var0, -180479720, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_13), 0);
	func_345(Var0, 1533007347, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_14), 0);
	func_117(Var0, 95942702, &uVar5, 1);
	func_117(Var0, -486752250, &uVar6, 1);
	func_347(Var0, -81907729, &vVar8, 1);
	func_348(Var0, 724299998, &uVar11, 0);
	func_117(Var0, 256341061, &uVar12, 0);
	func_117(Var0, 251189665, &uVar13, 0);
	func_117(Var0, -1732010034, &uVar14, 0);
	func_117(Var0, 229174115, &uVar15, 0);
	func_347(Var0, 1468810894, &vVar16, 0);
	func_345(Var0, -1906113237, &iVar19, 0);
	if (!func_345(Var0, 110383052, &iVar7, 0))
	{
		iVar7 = -1;
	}
	if (iVar19 < -1 || iVar19 >= Local_556.f_20.f_548)
	{
		iVar19 = -1;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_13 < 0 || (Local_556.f_20.f_22[iParam0 /*19*/])->f_13 >= 5)
	{
		(Local_556.f_20.f_22[iParam0 /*19*/])->f_13 = 0;
	}
	Local_556.f_20.f_22[iParam0 /*19*/] = uVar5;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_3 = { vVar8 };
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_9 = uVar11;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_12 = iVar7;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_10 = uVar13;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_11 = uVar14;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_6 = { vVar16 };
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 = iVar19;
	if (((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891 && (Local_556.f_20.f_22[iParam0 /*19*/])->f_11 != 2116329739) && func_345(Var0, 691956863, &iVar19, 0))
	{
		(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 = iVar19;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891)
	{
		if (!func_346(Var0, -566322512, &bVar20, 0) || bVar20)
		{
			func_177(iParam0, 2097152);
		}
		else
		{
			func_177(iParam0, 4194304);
		}
	}
	bVar21 = func_23(iParam0);
	func_582(iParam0, Var0, bVar21, uVar6, uVar5);
}

int func_353()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -407275447, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_354(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	float fVar8;
	struct<5> Var9;
	int iVar14;
	int iVar15;
	int iVar16;

	if (func_583(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 1);
		func_348(Var0, 1158526802, &fVar8, 1);
		if (!func_584(Local_556.f_921[iParam0 /*4*/], vVar5, 0f, 0f, 0f, fVar8, fVar8, 50f, joaat("cylinder")))
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar14 = func_585(iParam0);
	iVar15 = 0;
	while (iVar15 < iVar14)
	{
		Var9 = { Var0 };
		if (!func_120(&Var9, 2132698637, iVar15, 0))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar16, 1))
		{
		}
		else if (iVar16 < 0 || iVar16 >= 21)
		{
		}
		else if (func_51(iVar16, 262144))
		{
		}
		else if (&Local_556.f_20.f_22[iVar16 /*19*/] != joaat("target") && &Local_556.f_20.f_22[iVar16 /*19*/] != 391477998)
		{
		}
		else
		{
			func_177(iVar16, 262144);
			MISC::_0xE84AAC1B22A73E99(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar16);
		}
		iVar15++;
	}
}

int func_355()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_586(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 18)
	{
		return 18;
	}
	return iVar5;
}

void func_356(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	bool bVar22;
	char cVar23[64];

	if (!func_456(iParam0, &Var0))
	{
		return;
	}
	if (!func_581(Var0))
	{
		return;
	}
	func_117(Var0, -486752250, Local_556.f_20.f_422[iParam0 /*4*/], 0);
	func_347(Var0, -81907729, &vVar5, 1);
	bVar8 = false;
	if (func_346(Var0, -235687863, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 1);
	}
	if (func_346(Var0, -209788964, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 2);
	}
	if (func_346(Var0, -807337682, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 4);
	}
	if (func_346(Var0, -894890997, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 8);
	}
	if (func_346(Var0, -2067326263, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 16);
	}
	if (func_346(Var0, -513112783, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 64);
	}
	if (func_346(Var0, 89352665, &bVar8, 0) && bVar8)
	{
		func_587(iParam0, 128);
	}
	if (func_346(Var0, 1159597515, &bVar8, 0) && bVar8)
	{
		func_117(Var0, 2017657609, &iVar14, 0);
		func_347(Var0, 1719410419, &vVar11, 0);
		if (&Local_556.f_20.f_422[iParam0 /*4*/] == 0)
		{
			func_587(iParam0, 256);
		}
		if (!func_348(Var0, -1839625215, &fVar10, 0))
		{
			fVar10 = 10f;
		}
		if (iVar14 == 0)
		{
			iVar9 = 2;
		}
		else
		{
			iVar9 = func_588(iVar14);
		}
		if (func_346(Var0, 1160908162, &bVar8, 0) && bVar8)
		{
			func_347(Var0, 1446570234, &vVar15, 0);
			func_347(Var0, 1247393678, &vVar18, 0);
			iVar21 = 0;
			while (iVar21 < 4)
			{
				if (VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_987[iVar21])))
				{
				}
				else
				{
					bVar22 = true;
				}
				else
				{
					iVar21++;
				}
			}
			if (!bVar22)
			{
				return;
			}
			StringCopy(&cVar23, "VOL_VEG_MOD_PROP_", 64);
			StringIntConCat(&cVar23, iParam0, 64);
			Local_556.f_987[iVar21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar5 + vVar11, vVar15, vVar18, func_110(&cVar23));
			(Local_556.f_20.f_422[iParam0 /*4*/])->f_2 = GRAPHICS::_0xBD3324281E8B9933(&(Local_556.f_987[iVar21]), iVar9, -1, 0);
		}
		else
		{
			(Local_556.f_20.f_422[iParam0 /*4*/])->f_2 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar5 + vVar11, fVar10, iVar9, -1, 0);
		}
	}
}

int func_357()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_589(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_358(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	var uVar7;

	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!func_117(Var0, -401087351, &iVar5, 1))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == 0)
	{
		return;
	}
	if (iVar6 == 1974833915 && func_109(Var0, -1111171646, &uVar7, 0))
	{
		func_590(iParam0, 4);
		TASK::REQUEST_WAYPOINT_RECORDING(func_110(&uVar7));
	}
	func_347(Var0, -81907729, &((Local_556.f_20.f_533[iParam0 /*4*/])->f_1), 0);
	func_590(iParam0, 1);
}

int func_359()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_591(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 8)
	{
		return 8;
	}
	return iVar5;
}

void func_360(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar20 = func_592(iParam0);
	if (func_593(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar10, 1);
		func_347(Var0, 275738575, &vVar16, 1);
		func_347(Var0, 861602793, &vVar13, 0);
		func_117(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_556.f_962[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			func_594(Local_556.f_962[iParam0], vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					func_347(Var5, -81907729, &vVar10, 1);
					func_347(Var5, 275738575, &vVar16, 1);
					func_347(Var5, 861602793, &vVar13, 0);
					func_117(Var5, -401087351, &iVar19, 0);
					func_594(Local_556.f_962[iParam0], vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_584(Local_556.f_962[iParam0], vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_361()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_595(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_362(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;

	if (func_596(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 1);
		func_347(Var0, 275738575, &vVar11, 1);
		func_347(Var0, 861602793, &vVar8, 0);
		func_346(Var0, 764754194, &bVar14, 0);
	}
	Local_556.f_971[iParam0] = VOLUME::_CREATE_VOLUME_BOX(vVar5, vVar8, vVar11);
	if (bVar14)
	{
		PATHFIND::_0xB03944057FD735BA(&(Local_556.f_971[iParam0]), 4, 0);
	}
}

int func_363()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -937849669, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

void func_364(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar20 = func_597(iParam0);
	if (func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0))
	{
		func_347(Var0, -81907729, &vVar10, 1);
		func_347(Var0, 275738575, &vVar16, 1);
		func_347(Var0, 861602793, &vVar13, 0);
		func_117(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_556.f_975[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			func_594(Local_556.f_975[iParam0], vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					func_347(Var5, -81907729, &vVar10, 1);
					func_347(Var5, 275738575, &vVar16, 1);
					func_347(Var5, 861602793, &vVar13, 0);
					func_117(Var5, -401087351, &iVar19, 0);
					func_594(Local_556.f_975[iParam0], vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_584(Local_556.f_975[iParam0], vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_365()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_598(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_366(int iParam0)
{
	struct<5> Var0;

	if (func_271(iParam0, &Var0))
	{
		func_345(Var0, 227384668, Local_556.f_20.f_495[iParam0 /*2*/], 1);
	}
}

int func_367()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_599(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

void func_368(int iParam0)
{
	*(Local_556.f_20.f_508[iParam0 /*6*/]) = { func_600(iParam0) };
	(Local_556.f_20.f_508[iParam0 /*6*/])->f_3 = { func_601(iParam0) };
}

int func_369()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 2071017826, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_370(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_119(&Var0) || !func_120(&Var0, 1606032220, iParam0, 0))
	{
		return;
	}
	func_347(Var0, -81907729, &vVar10, 1);
	func_347(Var0, 275738575, &vVar16, 1);
	func_347(Var0, 861602793, &vVar13, 0);
	func_117(Var0, -401087351, &iVar19, 0);
	iVar20 = func_602(iParam0);
	if (iVar20 > 0)
	{
		Local_556.f_980[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		func_594(Local_556.f_980[iParam0], vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				func_347(Var5, -81907729, &vVar10, 1);
				func_347(Var5, 275738575, &vVar16, 1);
				func_347(Var5, 861602793, &vVar13, 0);
				func_117(Var5, -401087351, &iVar19, 0);
				func_594(Local_556.f_980[iParam0], vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_584(Local_556.f_980[iParam0], vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_371()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 386308088, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

void func_372(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_119(&Var0) || !func_120(&Var0, -375509478, iParam0, 0))
	{
		return;
	}
	func_347(Var0, -81907729, &vVar10, 1);
	func_347(Var0, 275738575, &vVar16, 1);
	func_347(Var0, 861602793, &vVar13, 0);
	func_117(Var0, -401087351, &iVar19, 0);
	iVar20 = func_603(iParam0);
	if (iVar20 > 0)
	{
		Local_556.f_978[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		func_594(Local_556.f_978[iParam0], vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				func_347(Var5, -81907729, &vVar10, 1);
				func_347(Var5, 275738575, &vVar16, 1);
				func_347(Var5, 861602793, &vVar13, 0);
				func_117(Var5, -401087351, &iVar19, 0);
				func_594(Local_556.f_978[iParam0], vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_584(Local_556.f_978[iParam0], vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_373()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 749370907, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_375(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 30;
		case 2023240596:
			return 29;
		case 1285083821:
			return 31;
		case -1840907462:
			return 32;
		case 756710130:
			return 33;
		case 1634157321:
			return 34;
		case 388370024:
			return 35;
		case 1092296123:
			return 36;
		case 467491346:
			return 37;
		case -1391584612:
			return 38;
		case -152111346:
			return 39;
		case 1447551317:
			return 40;
		case 153136092:
			return 41;
		case 1304405732:
			return 42;
		case 1074984055:
			return 43;
		case 1087476368:
			return 53;
		case -1768057340:
			return 54;
		case 1218874593:
			return 44;
		case -1438443836:
			return 55;
		case -2036340415:
			return 45;
		case -597278150:
			return 56;
		case 803939643:
			return 46;
		case -632496195:
			return 57;
		case -965943619:
			return 47;
		case 283532073:
			return 48;
		case -462827524:
			return 49;
		case -69067491:
			return 50;
		case -1864895118:
			return 51;
		case -1929806571:
			return 58;
		case 1162337247:
			return 28;
		case -698525417:
			return 59;
		case -1149739894:
			return 60;
		case 380507325:
			return 52;
		case -875142075:
			return 61;
		case 407796241:
			return 62;
		case -152267914:
			return 63;
		case -1675443320:
			return 64;
		case 1940341639:
			return 65;
		case 1846596114:
			return 66;
		case 907708501:
			return 67;
		case 1825644981:
			return 69;
		case 2065937607:
			return 70;
		case -211317417:
			return 71;
		case 1801307910:
			return 72;
		case -4118897:
			return 73;
		case 1853610692:
			return 74;
		case -1574644415:
			return 75;
		case 2133055515:
			return 76;
		case -1413401932:
			return 77;
		case 801090761:
			return 78;
		case 2131218644:
			return 79;
		case 1708823660:
			return 80;
		case 7976942:
			return 81;
		case 2111120505:
			return 82;
		case 176893118:
			return 83;
		case 602306665:
			return 68;
		case 1179148161:
			return 84;
		case 547412068:
			return 85;
		case -1539748801:
			return 86;
		case -1605119912:
			return 87;
		case -884464063:
			return 88;
		case -1420970720:
			return 89;
		case 1017024547:
			return 90;
		case -1204497306:
			return 91;
		case -1621069480:
			return 92;
		case -458604261:
			return 93;
		case -923391614:
			return 94;
		case -689247089:
			return 95;
		case 44049568:
			return 97;
		case 1350259552:
			return 98;
		case 620414938:
			return 96;
		case -61661574:
			return 99;
		case -725338054:
			return 100;
		case -770123507:
			return 101;
		case 1322486734:
			return 102;
		case -460939553:
			return 103;
		case -1451863552:
			return 104;
		case 713715980:
			return 107;
		case -31204969:
			return 108;
		case -1720064790:
			return 109;
		case 173833068:
			return 105;
		case -1681004136:
			return 106;
		case -532172775:
			return 110;
		case -739067737:
			return 111;
		case -1203133835:
			return 112;
		case -1947411598:
			return 113;
		case -1049753365:
			return 114;
		case -1298718762:
			return 115;
		case -595083064:
			return 116;
		case 884833917:
			return 117;
		case 2141950651:
			return 118;
		case -1437650729:
			return 119;
		case 672925454:
			return 134;
		case 846062774:
			return 135;
		case 1713550306:
			return 136;
		case 1369756178:
			return 127;
		case -736172423:
			return 128;
		case 1597070291:
			return 129;
		case -159501564:
			return 131;
		case -1438809608:
			return 130;
		case -102682392:
			return 132;
		case 676673543:
			return 133;
		case -81068979:
			return 120;
		case 227618407:
			return 121;
		case 2106043438:
			return 122;
		case -1380256064:
			return 123;
		case -2118469183:
			return 124;
		case -558997834:
			return 125;
		case 1563120499:
			return 126;
		case 658339366:
			return 137;
		default:
			break;
	}
	return -1;
}

bool func_377(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_378(int iParam0, var uParam1)
{
	struct<5> Var0;
	bool bVar5;
	vector3 vVar6;

	if (!func_456(iParam0, &Var0))
	{
		return 0;
	}
	if (!func_347(Var0, -81907729, uParam1, 1))
	{
		return 0;
	}
	func_346(Var0, -1878208438, &bVar5, 0);
	if (!bVar5)
	{
		return 0;
	}
	func_347(Var0, -385659440, &vVar6, 0);
	*uParam1 = { *uParam1 + vVar6 };
	return 1;
}

int func_379(int iParam0, vector3 vParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_556.f_20.f_422[iParam0 /*4*/])->f_3))
	{
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_126()));
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(MISC::GET_HASH_KEY(func_126())))
	{
		return 0;
	}
	GRAPHICS::USE_PARTICLE_FX_ASSET(func_126());
	(Local_556.f_20.f_422[iParam0 /*4*/])->f_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_604(), vParam1, 0f, 0f, 0f, 1f, false, true, false, false);
	return 1;
}

int func_380()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 723480330, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 1)
	{
		return 1;
	}
	return iVar5;
}

int func_381(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_119(&Var0) || !func_120(&Var0, -1859092546, iParam0, 0))
	{
		return 0;
	}
	if (!func_109(Var0, -2109843125, uParam3, 1))
	{
		return 0;
	}
	if (func_347(Var0, -81907729, uParam1, 0))
	{
		*uParam4 = 1;
		func_347(Var0, 861602793, uParam2, 0);
	}
	return 1;
}

int func_382(int iParam0, vector3 vParam1, vector3 vParam4, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15)
{
	char* sVar0;

	sVar0 = func_110(&uParam7);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 1;
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_556.f_950[iParam0])) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(Local_556.f_950[iParam0]), 0, 0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_556.f_950[iParam0]), 0))
	{
		return 1;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(Local_556.f_950[iParam0])))
	{
		Local_556.f_950[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 1, 0, false, false);
		if (bParam15)
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_556.f_950[iParam0]), vParam1, vParam4, 2);
		}
		return 0;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(Local_556.f_950[iParam0]), 0, 0))
	{
		ANIMSCENE::START_ANIM_SCENE(&(Local_556.f_950[iParam0]));
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(&(Local_556.f_950[iParam0]), 1))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(&(Local_556.f_950[iParam0]));
	}
	return 0;
}

void func_383(int iParam0)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	struct<9> Var7;

	StringCopy(&cVar1, func_127(iParam0), 32);
	iVar5 = func_605(iParam0);
	bVar6 = func_606(iParam0);
	TASK::OPEN_PATROL_ROUTE(&cVar1);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		func_607(iParam0, iVar0, &Var7);
		TASK::ADD_PATROL_ROUTE_NODE(iVar0, func_608(Var7.f_3), Var7, Var7.f_4, Var7.f_7, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		if (bVar6 && iVar0 >= (iVar5 - 1))
		{
		}
		else
		{
			func_607(iParam0, iVar0, &Var7);
			TASK::ADD_PATROL_ROUTE_LINK(iVar0, Var7.f_8);
		}
		iVar0++;
	}
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_384()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2.f_1 = 11;
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_556.f_7.f_12;
			if ((&Local_17.f_234[iVar1 /*2*/] != 255 && func_163(iVar1)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_1000), iVar1))
			{
				if (((func_43(4) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_234[iVar1 /*2*/])->f_1)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED((Local_17.f_234[iVar1 /*2*/])->f_1)) && _NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_234[iVar1 /*2*/])->f_1, PLAYER::PLAYER_ID()))
				{
					func_389(&Var2, joaat("attack"), func_388(255), 1);
				}
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_1000), iVar1);
			}
			func_268(&(Local_556.f_7.f_12), 7);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_556.f_7.f_12;
			if ((((Local_17.f_2[iVar1 /*9*/])->f_2 == 1583594396 && func_176(iVar1, 67108864)) && func_176(iVar1, 134217728)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_998), iVar1))
			{
				if (((func_43(4) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID((Local_17.f_2[iVar1 /*9*/])->f_5)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED((Local_17.f_2[iVar1 /*9*/])->f_5)) && _NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_2[iVar1 /*9*/])->f_5, PLAYER::PLAYER_ID()))
				{
					func_389(&Var2, joaat("attack"), func_388(255), 1);
				}
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_998), iVar1);
			}
			func_268(&(Local_556.f_7.f_12), 21);
			iVar0++;
		}
	}
}

int func_385()
{
	if (func_59(131072))
	{
		return 0;
	}
	if (func_59(8388608))
	{
		return 0;
	}
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 16))
	{
		if (func_93())
		{
			return 0;
		}
		if (func_442(Local_556.f_1004) > 2000)
		{
			return 0;
		}
	}
	return 1;
}

bool func_386()
{
	return func_45();
}

int func_387()
{
	if (func_47(Local_299[Local_556.f_1008 /*8*/], 65536))
	{
		return 2;
	}
	switch (func_148())
	{
		case 2:
			if (!func_45())
			{
				if (Local_17.f_275 == 0)
				{
					return 1;
				}
				if (Local_17.f_275 == Local_556.f_20.f_549)
				{
					return 2;
				}
			}
			else
			{
				if (!func_59(4194304))
				{
					return 2;
				}
				if (Local_17.f_275 == Local_17.f_276)
				{
					return 2;
				}
				if (Local_17.f_275 == 0)
				{
					return 1;
				}
			}
			break;
		case 3:
			if (Local_17.f_275 == 0)
			{
				return 2;
			}
			if (Local_17.f_275 == Local_556.f_20.f_549)
			{
				return 1;
			}
			break;
		case 1:
		case 4:
			if (Local_17.f_275 > 0)
			{
				return 1;
			}
			return 2;
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_609(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_240(iVar0);
}

void func_389(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	func_610(iParam0, 0, iParam1);
	func_611(iParam0, &uVar0, 0, bParam3);
	func_612(iParam0, 0, iParam2);
	func_613(532584148, iParam0, 0, 255, 0, 1);
}

int func_390()
{
	if (!func_59(8))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(Local_17.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, struct<2> Param12)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam9 == 0)
	{
		return;
	}
	fVar0 = func_614(((BUILTIN::TO_FLOAT(iParam11) / 1000f) / 60f), 0.5f, 30f);
	func_615(iParam2, &iVar1, &bVar2, 0, fVar0);
	func_616(iParam2, &bVar2, 0, iParam4, iParam9, iParam10, bParam7);
	func_617(iParam2, 0, iParam5);
	func_611(iParam2, &bVar2, 0, bParam8);
	func_618(iParam2, 0, Param12);
	func_612(iParam2, 0, iParam6);
	func_619(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_615(iParam3, &iVar1, &bVar2, 1, fVar0);
	func_611(iParam3, &bVar2, 1, bParam8);
	func_616(iParam3, &bVar2, 1, iParam4, iParam9, iParam10, bParam7);
	func_612(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		func_619(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_392(int iParam0)
{
	int iVar0;

	func_620(iParam0);
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		func_621(iParam0, 0);
		return;
	}
	func_622(iParam0, iVar0);
	func_623(iParam0, iVar0);
	func_624(iParam0, iVar0);
	func_625(iParam0);
	func_626(iParam0, iVar0);
	func_627(iParam0, iVar0);
	func_628(iParam0, iVar0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	func_629(iParam0, iVar0);
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
			func_630(iParam0);
			break;
		case joaat("extra"):
			func_631(iParam0);
			break;
		case 1824637041:
			func_632(iParam0);
			break;
		case 516423162:
			func_633(iParam0);
			break;
		default:
			return;
	}
	func_634(iParam0, iVar0);
}

void func_393(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 0 || (Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396)
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_4 != 16 && (Local_17.f_2[iParam0 /*9*/])->f_4 != 17)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iParam0 /*9*/])))
	{
		return;
	}
	if (!func_52(iParam0, &iVar2, 1, 0))
	{
		return;
	}
	bVar4 = func_635(iParam0, 60000);
	if (func_176(iParam0, 1048576))
	{
		fVar0 = 1.5f;
		if (bVar4)
		{
			fVar1 = 1.25f;
		}
		else
		{
			fVar1 = 1.5f;
		}
	}
	else if (func_176(iParam0, 2097152))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.501f;
		}
		else
		{
			fVar1 = 1.75f;
		}
	}
	else if (func_176(iParam0, 4194304))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.75f;
		}
		else
		{
			fVar1 = 2f;
		}
	}
	else
	{
		fVar0 = 3f;
		if (bVar4)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	if (func_176(iParam0, 8388608))
	{
		fVar1 = 1f;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, fVar1);
		}
	}
}

void func_394(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iParam0])))
	{
		return;
	}
	if (func_50(iParam0, 4))
	{
		iVar0 = NETWORK::NET_TO_VEH(&(Local_17.f_198[iParam0]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		if (func_50(iParam0, 16) && !func_50(iParam0, 32))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
			func_587(iParam0, 32);
		}
	}
}

void func_395(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	var uVar11;

	if (!func_107(iParam0, 1) || func_107(iParam0, 2))
	{
		return;
	}
	if (!func_449((Local_556.f_20.f_533[iParam0 /*4*/])->f_1) && BUILTIN::VDIST(Global_36, (Local_556.f_20.f_533[iParam0 /*4*/])->f_1) > 150f)
	{
		return;
	}
	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!func_117(Var0, -401087351, &iVar5, 0))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == -1993313767)
	{
		if (!func_348(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		vVar8 = { (Local_556.f_20.f_533[iParam0 /*4*/])->f_1 };
		vVar8.f_2 = (vVar8.z + 1f);
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar8, &(vVar8.f_2), 0);
		GRAPHICS::_0xF708298675ABDC6A(vVar8, 0.5f, fVar7, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.6f), 1, -1, 0);
	}
	else if (iVar6 == 1974833915)
	{
		if (!func_107(iParam0, 4))
		{
			return;
		}
		if (!func_109(Var0, -1111171646, &uVar11, 0))
		{
			return;
		}
		if (!func_107(iParam0, 8))
		{
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_110(&uVar11)))
			{
				return;
			}
			func_590(iParam0, 8);
		}
		if (!func_348(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		GRAPHICS::_0xB9C92616929CC25D(func_110(&uVar11), fVar7);
	}
	func_590(iParam0, 2);
}

int func_396(int iParam0, bool bParam1, bool bParam2)
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

int func_397(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = func_636();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	iParam0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(&(Global_1273882->f_154[iParam0]));
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	iVar0 = 623901053;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1158905413;
			break;
		case 1:
			iVar0 = 358397622;
			break;
		case 2:
			iVar0 = 65999835;
			break;
		case 3:
			iVar0 = 814443795;
			break;
		case 4:
			iVar0 = 519621102;
			break;
		case 5:
			iVar0 = -1628223003;
			break;
		case 6:
			iVar0 = 1278256225;
			break;
		case 7:
			iVar0 = 2038628101;
			break;
		case 8:
			iVar0 = 1742494648;
			break;
		case 9:
			iVar0 = -1010166918;
			break;
		case 10:
			iVar0 = 660170868;
			break;
		case 11:
			iVar0 = -1278312096;
			break;
		case 12:
			iVar0 = -509158128;
			break;
		case 13:
			iVar0 = -226656579;
			break;
		case 14:
			iVar0 = 2115868159;
			break;
		case 15:
			iVar0 = 1495813101;
			break;
		case 16:
			iVar0 = 1197385818;
			break;
		case 17:
			iVar0 = 1015780020;
			break;
		case 18:
			iVar0 = -1286733825;
			break;
		case 19:
			iVar0 = -1670393277;
			break;
		case 20:
			iVar0 = -415733461;
			break;
		case 21:
			iVar0 = -1207924036;
			break;
		case 22:
			iVar0 = 497702414;
			break;
		case 23:
			iVar0 = 719188085;
			break;
		case 24:
			iVar0 = 43753457;
			break;
		case 25:
			iVar0 = 771290791;
			break;
		case 26:
			iVar0 = 20356387;
			break;
		case 27:
			iVar0 = 309149584;
			break;
		case 28:
			iVar0 = 1613781781;
			break;
		case 29:
			iVar0 = 1693607065;
			break;
		case 30:
			iVar0 = 1132176120;
			break;
		case 31:
			iVar0 = 869270437;
			break;
	}
	return iVar0;
}

int func_398(int iParam0)
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
	if (!func_396(iVar0, 0, 1))
	{
		return 0;
	}
	if (func_45())
	{
		if ((!func_47(Local_299[iVar0 /*8*/], 4) && !func_47(Local_299[iVar0 /*8*/], 8192)) && !func_47(Local_299[iVar0 /*8*/], 131072))
		{
			return 0;
		}
	}
	else if (!func_47(Local_299[iVar0 /*8*/], 4) && !func_47(Local_299[iVar0 /*8*/], 64))
	{
		return 0;
	}
	return 1;
}

void func_399()
{
	int iVar0;
	int iVar1;

	if (!func_43(4) || !func_415(1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_961), iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar1))
			{
			}
			else
			{
				func_637(iVar1);
			}
		}
		iVar0++;
	}
}

int func_400()
{
	if (func_638(255) && !func_639(255))
	{
		return 0;
	}
	return 1;
}

int func_401()
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
			if (!func_47(Local_299[iVar2 /*8*/], 1048576))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_402()
{
	int iVar0;
	int iVar1;

	if (!func_59(8))
	{
		return Local_556.f_20.f_2;
	}
	if (func_59(134217728))
	{
		iVar0 = Local_17.f_273;
	}
	else
	{
		iVar0 = Local_17.f_272;
	}
	if (func_59(134217728))
	{
		iVar1 = Local_556.f_20.f_4;
	}
	else
	{
		iVar1 = Local_556.f_20.f_2;
	}
	iVar1 = (iVar1 - NETWORK::GET_TIME_DIFFERENCE(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	iVar1 = func_578(iVar1, 0, Local_556.f_20.f_2);
	return iVar1;
}

bool func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_404(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_640())
	{
		if ((MISC::GET_GAME_TIMER() - func_641()) < 75000)
		{
			return;
		}
	}
	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_504(Param0);
	if (!func_505(iVar1))
	{
		return;
	}
	iVar0 = func_506(iVar1);
	if (!func_507(iVar0))
	{
		return;
	}
	iVar2 = func_508(iVar1);
	func_642(iVar2, iVar0, Param0);
	func_551(MISC::GET_GAME_TIMER());
	func_552(1);
}

void func_405()
{
	Global_1131373->f_6289.f_22 = MISC::GET_FRAME_COUNT();
}

int func_406(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	switch (func_148())
	{
		case 1:
		case 4:
			if (!func_47(Local_299[iVar0 /*8*/], 4))
			{
				return 0;
			}
			return 1;
		case 2:
			if (!func_47(Local_299[iVar0 /*8*/], 8192) && !func_47(Local_299[iVar0 /*8*/], 131072))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

void func_407(int iParam0)
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1070355->f_26831), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070355->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070355->f_26833), iParam0);
	if (!func_122(iParam0))
	{
		func_281(iParam0, 5, 1, 1, 0, 0);
	}
}

float func_408(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_409(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (!func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]) && !func_176(iVar0, 1))
		{
		}
		else if (!func_52(iVar0, &iVar1, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > fParam0)
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

void func_410(var uParam0, int iParam1)
{
	func_139(&(uParam0->f_1), iParam1);
}

bool func_411(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

void func_412()
{
	func_643(2);
}

void func_413()
{
	Global_1939221->f_1433.f_7962 = 0;
	Global_1939221->f_1433.f_7963 = MISC::GET_GAME_TIMER() + 1000;
}

int func_414(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_644(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_636())
	{
		return func_644(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_644(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_415(bool bParam0)
{
	struct<2> Var0;

	if (bParam0)
	{
		return func_43(16384);
	}
	if (func_77())
	{
		return 0;
	}
	Var0 = { func_645() };
	if (!func_73(Var0))
	{
		return 0;
	}
	if (!func_74(Local_556.f_2, Var0))
	{
		return 0;
	}
	return 1;
}

void func_416(int iParam0, int iParam1)
{
	bool bVar0;

	switch (iParam0)
	{
		case 1:
			func_189(Local_299[Local_556.f_1008 /*8*/], 8192);
			func_646(131072);
			Local_556.f_1006 = iParam1;
			break;
		case 2:
			func_189(Local_299[Local_556.f_1008 /*8*/], 4);
			if (func_45())
			{
				func_646(131072);
			}
			else
			{
				func_405();
			}
			func_410(Local_299[Local_556.f_1008 /*8*/], 65536);
			func_647(16);
			break;
		case 3:
			func_189(Local_299[Local_556.f_1008 /*8*/], 64);
			break;
		case 4:
			func_189(Local_299[Local_556.f_1008 /*8*/], 131072);
			break;
	}
	bVar0 = func_206();
	func_648(Local_556.f_1);
	func_649(Local_556.f_1, 1, !bVar0, 0);
	func_650(6);
	func_125(4);
	func_296(-1256206172, 0);
	func_91();
}

int func_417(int iParam0, float fParam1)
{
	int iVar0;

	if (Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target")
	{
		return 0;
	}
	if (!func_52(iParam0, &iVar0, 1, 1))
	{
		return 0;
	}
	if (func_444())
	{
		return 0;
	}
	if (func_652(iVar0, func_651(PLAYER::PLAYER_ID()), 1) > fParam1)
	{
		return 0;
	}
	return 1;
}

void func_418()
{
	int iVar0;
	int iVar1;

	if (!func_45())
	{
		return;
	}
	if (func_43(256))
	{
		return;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_281) && _NAMESPACE26::_0x0F99F6436528A089(Local_17.f_281))
	{
		Local_556.f_584.f_68 = { func_654(func_653(Local_17.f_281, 0, 0)) };
	}
	iVar0 = Local_17.f_276;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(&(Local_17.f_234[iVar1 /*2*/])) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iVar1 /*2*/])))
		{
			*(Local_556.f_584.f_39[iVar1 /*4*/]) = { func_655(PLAYER::GET_PLAYER_NAME(&(Local_17.f_234[iVar1 /*2*/]))) };
		}
		iVar1++;
	}
	func_125(256);
}

void func_419()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_43(4) || !func_415(1))
	{
		return;
	}
	iVar2 = func_656(&iVar0, &iVar1);
	func_657(iVar2, iVar0, iVar1);
}

void func_420()
{
	bool bVar0;

	if (func_658(&bVar0))
	{
		if (bVar0)
		{
			func_659();
			func_660();
		}
		func_663(&(Local_556.f_584.f_76), &(Local_556.f_584.f_91), func_661(), 0, 30000, 0, func_662(), 0, 0, 0, 0);
	}
	else
	{
		func_132();
	}
}

void func_421()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_664(iVar0);
		iVar0++;
	}
	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			func_665(iVar1);
			iVar1++;
		}
		if (func_47(Local_299[Local_556.f_1008 /*8*/], 8192))
		{
			func_666();
		}
	}
}

void func_422()
{
	int iVar0;

	if (func_667())
	{
		func_668();
	}
	else
	{
		func_285(&(Local_556.f_584.f_23));
	}
	if (func_669())
	{
		func_670();
	}
	else if (func_671())
	{
		func_672();
	}
	else
	{
		func_285(&(Local_556.f_584.f_22));
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		if (func_673(iVar0))
		{
			func_674(iVar0);
		}
		else
		{
			func_285(Local_556.f_584.f_24[iVar0]);
		}
		iVar0++;
	}
	func_675();
}

void func_423()
{
	bool bVar0;

	if (!func_415(1) && !func_47(Local_299[Local_556.f_1008 /*8*/], 65536))
	{
		return;
	}
	bVar0 = Local_556.f_20.f_549 <= true;
	if (func_45())
	{
		bVar0 = Local_17.f_276 <= true;
	}
	if (func_676())
	{
		func_678(func_677(bVar0));
		func_185(32);
	}
	else if (func_679())
	{
		func_680(func_387());
		func_185(16);
	}
}

void func_424()
{
	if (((!func_415(1) || !func_681(32)) || func_681(16)) || !func_43(1))
	{
		func_134();
		return;
	}
	if (func_682())
	{
		func_683(14, -1);
	}
	else if (func_684())
	{
		if (func_45())
		{
			func_683(7, -1);
		}
		else if (Local_556.f_20 == 1657045547)
		{
			if (func_685())
			{
				func_683(7, -1);
			}
			else
			{
				func_683(8, -1);
			}
		}
		else if (Local_17.f_275 > 1)
		{
			func_683(7, -1);
		}
		else
		{
			func_683(8, -1);
		}
	}
	else if (func_686())
	{
		if (Local_17.f_275 > 1)
		{
			func_683(1, -1);
		}
		else
		{
			func_683(2, -1);
		}
	}
	else if (func_687())
	{
		func_683(5, -1);
	}
	else if (func_688())
	{
		func_683(11, -1);
	}
	else if (func_689())
	{
		if (func_258() == joaat("player") || Local_17.f_275 == 1)
		{
			func_683(13, -1);
		}
		else
		{
			func_683(12, -1);
		}
	}
	else
	{
		func_134();
	}
}

void func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	int iVar17;
	int iVar18;

	if (!MISC::_0x80E9C316EF84DD81(&((Local_556.f_921[iParam0 /*4*/])->f_1)))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_921[iParam0 /*4*/])))
	{
		func_690(iParam0);
		return;
	}
	if ((((((func_691((Local_556.f_921[iParam0 /*4*/])->f_3, 1) && !func_691((Local_556.f_921[iParam0 /*4*/])->f_3, 2)) && func_583(iParam0, &Var2)) && func_345(Var2, -597454543, &iVar1, 0)) && iVar1 >= 0) && iVar1 < 21) && func_52(iVar1, &iVar0, 1, 0))
	{
		PED::_0x7C00CFC48A782DC0(&(Local_556.f_921[iParam0 /*4*/]), iVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 0);
		func_692(&((Local_556.f_921[iParam0 /*4*/])->f_3), 2);
		func_375(&Var2);
	}
	vVar7 = { VOLUME::_0xF70F00013A62F866(&(Local_556.f_921[iParam0 /*4*/])) };
	vVar13 = { VOLUME::_0x3E2A25B2416DD67E(&(Local_556.f_921[iParam0 /*4*/])) };
	fVar16 = vVar13.x;
	if (func_408(Global_36, vVar7) < fVar16)
	{
		func_690(iParam0);
		return;
	}
	iVar18 = 0;
	while (iVar18 < 21)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar18))
		{
		}
		else if (func_52(iVar18, &iVar17, 1, 0))
		{
			vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar17, false, false) };
			if ((((func_408(vVar10, vVar7) < fVar16 && !func_176(iVar18, 1)) && (Local_17.f_2[iVar18 /*9*/])->f_2 != 1583594396) && (Local_17.f_2[iVar18 /*9*/])->f_2 != 0) && !func_428(iVar18, Local_299[Local_556.f_1008 /*8*/]))
			{
			}
			else
			{
				if ((((func_691((Local_556.f_921[iParam0 /*4*/])->f_3, 2) && func_583(iParam0, &Var2)) && func_345(Var2, -597454543, &iVar1, 0)) && iVar1 == iVar18) && func_52(iVar1, &iVar0, 0, 1))
				{
					PED::_0x19C975B81BE53C28(&(Local_556.f_921[iParam0 /*4*/]), iVar0);
					func_693(&((Local_556.f_921[iParam0 /*4*/])->f_3), 2);
				}
				func_295(iVar18, 262144);
				MISC::_0xB909149F2BB5F6DA(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar18);
			}
			iVar18++;
			if (!MISC::_0x80E9C316EF84DD81(&((Local_556.f_921[iParam0 /*4*/])->f_1)))
			{
				func_690(iParam0);
			}
		}
	}

int func_426(int iParam0)
{
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target") && func_176(iParam0, 4096))
	{
		return 0;
	}
	return 1;
}

void func_427(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	if (MISC::IS_BIT_SET(&(uParam1->f_2[iVar0]), iVar1))
	{
		return;
	}
	MISC::SET_BIT(uParam1->f_2[iVar0], iVar1);
	func_285(Local_556.f_584[iParam0]);
}

bool func_428(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(uParam1->f_2[iVar0]), iVar1);
}

int func_429(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_652(iParam0, Global_36, 1);
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
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
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

int func_430(var uParam0)
{
	if (!func_47(uParam0, 8192))
	{
		return 0;
	}
	if (func_47(uParam0, 16384))
	{
		return 0;
	}
	return 1;
}

bool func_431()
{
	return func_694(&Global_1939168, 8192);
}

void func_432(bool bParam0, bool bParam1)
{
	if (func_564(255) == 4)
	{
		return;
	}
	if (func_449(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_143(0);
	}
	else
	{
		if (bParam1)
		{
			func_695(0, 0, 0, 1);
		}
		func_141(0);
		func_696(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_697(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_698(Global_1099293->f_516, 36);
	func_699(Global_1099293->f_555, 36);
}

int func_433(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (!func_47(uParam0, 4))
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	fVar1 = 150f;
	iVar2 = 0;
	while (iVar2 < 21)
	{
		if (Local_17.f_2[iVar2 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (Local_556.f_20 == 1657045547 && !func_428(iVar2, Local_299[Local_556.f_1008 /*8*/]))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar2 /*9*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar2 /*9*/]));
			fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar3, false, false));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				*uParam1 = iVar3;
			}
		}
		iVar2++;
	}
	if (fVar1 == 150f)
	{
		return 0;
	}
	return 1;
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		if (func_43(2))
		{
			return;
		}
		if (func_435(255))
		{
			return;
		}
		func_136(1);
		func_125(2);
	}
	else
	{
		if (!func_43(2))
		{
			return;
		}
		func_136(0);
		func_44(2);
	}
}

bool func_435(int iParam0)
{
	return func_414(48, iParam0);
}

bool func_436(int iParam0)
{
	return func_414(47, iParam0);
}

void func_437(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	int iVar15;
	int iVar16;

	if (!func_43(2))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	fVar2 = 150f;
	iVar3 = 0;
	while (iVar3 < 21)
	{
		if (Local_17.f_2[iVar3 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (Local_556.f_20 == 1657045547 && !func_428(iVar3, Local_299[Local_556.f_1008 /*8*/]))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar3 /*9*/])))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar3 /*9*/]));
			fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar4, false, false));
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar0 = iVar4;
			}
		}
		iVar3++;
	}
	if (fVar2 == 150f)
	{
		return;
	}
	fVar5 = 95f;
	fVar6 = 150f;
	vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	if (INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vVar7))
	{
		func_700(&vVar7, 200f);
	}
	else
	{
		func_700(&vVar7, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar7 };
	uParam0->f_17 = { fVar6, fVar6, 25f };
	uParam0->f_17.f_9 = -432403087;
	uParam0->f_6.f_6 = { vVar7 };
	uParam0->f_6 = { fVar5, fVar5, 25f };
	uParam0->f_6.f_9 = -432403087;
	uParam0->f_4 = func_701(iVar0);
	uParam0->f_5 = 3;
	uParam1->f_6 = { vVar7 };
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	iVar10 = func_702();
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 < iVar10)
		{
			if (!func_703(iVar11, &vVar12))
			{
			}
			else if (func_449(vVar12))
			{
			}
			else
			{
				NETWORK::_0xFD1AC0B3858F224C(vVar12, func_704(vVar12, vVar7));
			}
			iVar11++;
		}
	}
	iVar15 = func_363();
	if (iVar15 > 0)
	{
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_975[iVar16])))
			{
			}
			else
			{
				NETWORK::_0x405DDEFB1F531B18(&(Local_556.f_975[iVar16]), false, 0, 0);
			}
			iVar16++;
		}
	}
}

int func_438(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_436(255))
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
		func_696(&(Global_1099293->f_516));
		Global_1099293->f_516 = { Param0 };
		func_697(&(Global_1099293->f_555));
		Global_1099293->f_555 = { Param30 };
		Global_1099293->f_586 = iParam39;
		Global_1099293->f_587 = iParam40;
		Global_1099293->f_588 = iParam41;
		func_698(Global_1099293->f_516, 36);
		func_699(Global_1099293->f_555, 36);
		func_143(47);
		return 1;
	}
	return 0;
}

int func_439(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 1;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 1;
	}
	if (iVar0 > 256)
	{
		return 1;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, 0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	int iVar8;

	if (!func_121(&Var0, iParam0, iParam1))
	{
		return 1;
	}
	if (!func_347(Var0, -81907729, &vVar5, 1))
	{
		return 1;
	}
	if (BUILTIN::VDIST(Global_36, vVar5) > 200f)
	{
		return 1;
	}
	if (!NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vVar5, 1f, 100f))
	{
		return 1;
	}
	if (!func_30(Local_556.f_957))
	{
		Local_556.f_957 = GRAPHICS::CREATE_TRACKED_POINT();
		if (func_30(Local_556.f_957))
		{
			GRAPHICS::SET_TRACKED_POINT_INFO(Local_556.f_957, vVar5 + Vector(0.5f, 0f, 0f), 0.5f);
		}
		return 0;
	}
	iVar8 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_556.f_957);
	if (iVar8 == -1)
	{
		return 0;
	}
	*bParam2 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_556.f_957);
	return 1;
}

int func_441(bool bParam0, bool bParam1, bool bParam2)
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

int func_442(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_443(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1893575->f_2;
	iVar1 = &Local_556.f_952[iParam0];
	if (!func_377(iVar1))
	{
		return;
	}
	if (func_377(iVar0) && iVar1 == iVar0)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_556.f_952.f_2), iParam0))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1887327)[iVar1 /*36*/])->f_10, false))
			{
				return;
			}
			if (!func_705(iParam0, iVar1))
			{
				return;
			}
			MISC::_0xE84AAC1B22A73E99(&(Local_556.f_952.f_2), iParam0);
			Local_556.f_952.f_4 = 0;
		}
	}
	else if (MISC::_0x8F4F050054005C27(&(Local_556.f_952.f_2), iParam0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1887327)[iVar1 /*36*/])->f_10, false))
		{
			return;
		}
		MISC::_0xB909149F2BB5F6DA(&(Local_556.f_952.f_2), iParam0);
	}
}

bool func_444()
{
	return func_414(1, 255);
}

void func_445(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(&(Local_556.f_980[iParam0])))
	{
		return;
	}
	if (func_706(iParam0))
	{
		return;
	}
	if (func_572(iParam0))
	{
		return;
	}
	if (!func_707(iParam0))
	{
		return;
	}
	func_708(iParam0);
	func_174(10, iParam0, func_173(0, 8), -1);
}

void func_446(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	*bParam1 = 0;
	*bParam2 = 0;
	*bParam3 = 0;
	*uParam0 = 0;
	while (*uParam0 < 21)
	{
		if ((Local_17.f_2[*uParam0 /*9*/])->f_2 == 1583594396)
		{
		}
		else if (!func_709(*uParam0, 255))
		{
		}
		else if (func_176(*uParam0, 8))
		{
			*bParam2 = 1;
		}
		else if (func_176(*uParam0, 1024))
		{
			*bParam3 = 1;
		}
		else
		{
			*bParam1 = 1;
		}
		*uParam0++;
	}
}

Vector3 func_447(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_710(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_448(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_450(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

int func_449(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_450(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_158(iParam0, uParam1))
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

var func_451(int iParam0)
{
	return ((*Global_1274668)[iParam0 /*4*/])->f_1;
}

var func_452(int iParam0)
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

void func_453(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 26, &uParam1);
}

void func_454(var uParam0)
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

void func_455(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(Local_17.f_251[iVar0], iVar1);
}

int func_456(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -422348800;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return 0;
}

bool func_457(int iParam0, var uParam1)
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

void func_458(int iParam0, int iParam1)
{
	func_266(&((Local_17.f_2[iParam0 /*9*/])->f_3), iParam1);
}

int func_459()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1976409839, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

int func_460(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	int iVar8;

	if (OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])))
	{
		return 1;
	}
	if (!func_711(iParam0, &iVar0, &vVar1, &bVar7, &vVar4))
	{
		return 0;
	}
	func_712(iParam0, &iVar8);
	if (bVar7)
	{
		Local_17.f_217[iParam0 /*2*/] = OBJECT::CREATE_PICKUP_ROTATE(iVar0, vVar1, vVar4, iVar8, -1, 2, true, 0, 0, 0f, 0);
	}
	else
	{
		Local_17.f_217[iParam0 /*2*/] = OBJECT::CREATE_PICKUP(iVar0, vVar1, iVar8, -1, true, 0, 0, 0f, 0);
	}
	if (!OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])))
	{
		return 0;
	}
	func_574(iParam0, 1);
	return 1;
}

int func_461(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (&Local_556.f_20.f_422[iParam0 /*4*/] == 0)
	{
		return 1;
	}
	if (!func_456(iParam0, &Var0))
	{
		return 1;
	}
	if (!func_581(Var0))
	{
		return 1;
	}
	if (((func_247(iParam0, &iVar5) && iVar5 >= 0) && iVar5 < 21) && !func_248(iVar5))
	{
		return 1;
	}
	vVar6 = { func_713(iParam0) };
	fVar9 = func_714(iParam0);
	vVar10 = { func_715(iParam0) };
	if (func_449(vVar6))
	{
		return 1;
	}
	if (func_50(iParam0, 2))
	{
		iVar13 = &Local_556.f_20.f_422[iParam0 /*4*/];
		if (PROPSET::_0x72068021F498E6E3(&(Local_556.f_20.f_422[iParam0 /*4*/]), vVar6))
		{
			MISC::CLEAR_AREA(vVar6, 0.25f, 2097152);
			return 0;
		}
		iVar14 = func_716(iPar