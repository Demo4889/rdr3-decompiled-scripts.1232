#region Local Var
	struct<36> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 255, 255, 0, 255, 0, -1, 0, 0, 0, 0, 0, 1, 0, 1, 2, 0, 0, 0, 1, 0, 1, 0, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	struct<27> Local_38[32];
	struct<196> Local_903 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = -1;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 255;
	var uLocal_1106 = -1;
	var uLocal_1107 = -1;
	var uLocal_1108 = 1;
	var uLocal_1109 = 1101004800;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 3;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 1;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 1;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = -1;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 1;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1;
	var uLocal_1138 = 7;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = -1;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	float fLocal_1153 = 0f;
	float fLocal_1154 = 0f;
	var uLocal_1155 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1153 = 1f;
	fLocal_1154 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(ScriptParam_0);
	while (!func_3())
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
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 38, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_0), 38, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_38, 865, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_38[0 /*27*/]), 865, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_0 == 6)
	{
		return;
	}
	func_13(Param0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

int func_3()
{
	if (func_16(0, 0))
	{
		return 1;
	}
	else if (func_17(Local_903.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_903.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_903.f_12), Local_903.f_9))
	{
		return 1;
	}
	else if (Local_903.f_8 == 6)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
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
		if (func_28() == 0)
		{
			if (func_29())
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

void func_9()
{
	func_30();
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
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

void func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<12> Var0;
	int iVar17;
	bool bVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar17 = 255;
	MISC::_COPY_MEMORY(&Local_903, &uParam0, 5);
	iVar19 = func_31(&bVar18, Local_903.f_1, Local_903.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_903.f_12 = iVar19;
	iVar17 = (Global_1184672->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_32(&Var0, Local_903.f_1, Local_903.f_2, Local_903.f_3, iVar17);
	Local_903.f_9 = { func_33(Var0.f_5, 8) };
	Local_903.f_14 = Var0.f_5;
	Local_903.f_15 = { Var0.f_11 };
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
	func_38();
}

int func_16(bool bParam0, bool bParam1)
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

int func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070355->f_26837 = 1;
		return 1;
	}
	if (func_39(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070355->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_40(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_41(iParam3, 255))
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
	if (func_42())
	{
		Global_1070355->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_39(*Global_1051163))
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

int func_18()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return (Global_1196787->f_1[iParam0 /*10*/])->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_0 <= 5)
	{
		func_43();
	}
	switch (Local_0)
	{
		case 0:
			func_44();
			break;
		case 1:
			func_45();
			break;
		case 2:
			func_46();
			break;
		case 3:
			func_47();
			break;
		case 4:
			func_48();
			break;
		case 5:
			func_49();
			break;
	}
}

void func_23()
{
	func_50();
	if (Local_903.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_903.f_8)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
		case 4:
			func_56();
			break;
		case 5:
			func_57();
			break;
	}
}

void func_24()
{
	func_58();
}

void func_25()
{
	if (func_59())
	{
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(Local_0.f_3.f_1))
		{
			VOLUME::RELEASE_LOCK_VOLUME(Local_0.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
	func_62();
	func_63();
	func_64();
}

void func_27()
{
	if (Local_903.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_65(Local_903.f_12, 4);
		}
	}
	func_66();
	if (func_67(32))
	{
		func_68(Local_0.f_6);
	}
	func_69();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Local_0.f_30.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<17> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_70(&Var0, Var26);
	iVar25 = func_71(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_72(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(iParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*iParam0 = 0;
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			break;
		case 1:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 7;
			func_73(iParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					iParam0->f_5 = -1808627090;
					iParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					iParam0->f_5 = -1563711584;
					iParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					iParam0->f_5 = -717510681;
					iParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					iParam0->f_5 = -2044065371;
					iParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					iParam0->f_5 = -1209537248;
					iParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					iParam0->f_5 = 1714342319;
					iParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					iParam0->f_5 = 1269971654;
					iParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					iParam0->f_5 = 720927063;
					iParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					iParam0->f_5 = 1499128142;
					iParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					iParam0->f_5 = -1539691586;
					iParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_74(iParam0);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = 277430601;
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = 1659133778;
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = 1296650927;
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = 2115437634;
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = 1098622970;
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = 393263596;
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = 189453630;
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = -98921343;
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = 6025033;
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = -1060299979;
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_75(iParam0);
					iParam0->f_5 = 682088681;
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_75(iParam0);
					iParam0->f_5 = 1705841922;
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_75(iParam0);
					iParam0->f_5 = -301205165;
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_75(iParam0);
					iParam0->f_5 = 1906160715;
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_75(iParam0);
					iParam0->f_5 = -1129906020;
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_75(iParam0);
					iParam0->f_5 = 1592980994;
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_75(iParam0);
					iParam0->f_5 = 686459378;
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_75(iParam0);
					iParam0->f_5 = -259262381;
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_75(iParam0);
					iParam0->f_5 = 1289806844;
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_75(iParam0);
					iParam0->f_5 = 347656238;
					iParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 8;
			iParam0->f_2 = 1;
			func_74(iParam0);
			switch (iParam2)
			{
				case 0:
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					iParam0->f_5 = 1454566440;
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					iParam0->f_5 = 1141360338;
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					iParam0->f_5 = 844768119;
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = -1601993562;
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = -901588956;
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = 2129019244;
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					iParam0->f_5 = 1227099802;
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					iParam0->f_5 = -940471213;
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					iParam0->f_5 = -700569364;
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					iParam0->f_5 = 412376369;
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = -364052317;
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					iParam0->f_5 = -989186530;
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_76(iParam0, 0);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					iParam0->f_5 = 333858683;
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					iParam0->f_5 = -39511303;
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_76(iParam0, 3);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					iParam0->f_5 = 813662381;
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = -1114006686;
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = 1049238845;
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					func_76(iParam0, 7);
					iParam0->f_5 = 1363886783;
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					iParam0->f_5 = -1215674354;
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					iParam0->f_5 = 1902132155;
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 5);
					iParam0->f_5 = 1661312774;
					iParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			iParam0->f_6 = 1;
			*iParam0 = 11;
			iParam0->f_1 = 1;
			iParam0->f_2 = 2;
			func_74(iParam0);
			iParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = 1382777618;
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = -2000681184;
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = 886884092;
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = -1277120723;
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = 1577436816;
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = -234749781;
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = -1607623039;
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = -1943295936;
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = -397730168;
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = -392659534;
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_75(iParam0);
					iParam0->f_5 = 146267878;
					iParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			iParam0->f_6 = 1;
			*iParam0 = 15;
			iParam0->f_1 = 3;
			iParam0->f_2 = 1;
			func_74(iParam0);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = 1247886914;
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = 1926100410;
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = 603340011;
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = -1253915394;
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = 1281783573;
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = -1384936716;
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = 636669604;
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = 1410575087;
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = -736919321;
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = 1755496218;
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_75(iParam0);
					iParam0->f_5 = -1810033095;
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_75(iParam0);
					iParam0->f_5 = 99707271;
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_75(iParam0);
					iParam0->f_5 = 2145033839;
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_75(iParam0);
					iParam0->f_5 = -994111457;
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_75(iParam0);
					iParam0->f_5 = 702836385;
					iParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			iParam0->f_6 = 1;
			*iParam0 = 16;
			iParam0->f_1 = 2;
			iParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					func_77(iParam0, 0);
					func_77(iParam0, 1);
					func_77(iParam0, 4);
					func_77(iParam0, 5);
					break;
				case 1:
					func_77(iParam0, 2);
					func_77(iParam0, 3);
					func_77(iParam0, 6);
					func_77(iParam0, 7);
					func_78(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_76(iParam0, 0);
					iParam0->f_5 = -88606612;
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_76(iParam0, 1);
					iParam0->f_5 = -1507537085;
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_76(iParam0, 0);
					iParam0->f_5 = 150331424;
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_76(iParam0, 1);
					iParam0->f_5 = -74168995;
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_76(iParam0, 0);
					iParam0->f_5 = -1303456769;
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_76(iParam0, 1);
					iParam0->f_5 = 2080696176;
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_76(iParam0, 0);
					iParam0->f_5 = -801880493;
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_76(iParam0, 1);
					iParam0->f_5 = -2098877513;
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_76(iParam0, 0);
					iParam0->f_5 = -985131289;
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_76(iParam0, 1);
					iParam0->f_5 = 171385032;
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_76(iParam0, 0);
					iParam0->f_5 = -690365399;
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_76(iParam0, 1);
					iParam0->f_5 = -393773180;
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_76(iParam0, 0);
					iParam0->f_5 = 1783045643;
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_76(iParam0, 1);
					iParam0->f_5 = -1841828372;
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_76(iParam0, 0);
					iParam0->f_5 = -1926357119;
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_76(iParam0, 1);
					iParam0->f_5 = -1904926193;
					iParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 12;
			iParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = 666420762;
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 8);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = 1145423923;
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -1176575305;
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -888961792;
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -1145898130;
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 4);
					func_76(iParam0, 7);
					func_76(iParam0, 8);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -264936334;
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 3);
					func_76(iParam0, 6);
					func_76(iParam0, 7);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -562839313;
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 4);
					func_76(iParam0, 5);
					func_76(iParam0, 6);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -819926700;
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_76(iParam0, 0);
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = -100890882;
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_76(iParam0, 1);
					func_76(iParam0, 2);
					func_76(iParam0, 5);
					func_76(iParam0, 9);
					func_76(iParam0, 10);
					func_76(iParam0, 11);
					func_79(iParam0, iParam3);
					iParam0->f_5 = 373607510;
					iParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_74(iParam0);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = -1562903685;
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = 442262250;
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = 2113001754;
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = 222101843;
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = 862535295;
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = 267494763;
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = 492498900;
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = -735417347;
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = 2000289900;
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = 1820563970;
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_75(iParam0);
					iParam0->f_5 = 1501808210;
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_75(iParam0);
					iParam0->f_5 = -1103422576;
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_75(iParam0);
					iParam0->f_5 = -375108461;
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_75(iParam0);
					iParam0->f_5 = 1074344160;
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_75(iParam0);
					iParam0->f_5 = 1375567406;
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_75(iParam0);
					iParam0->f_5 = 1695022182;
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_75(iParam0);
					iParam0->f_5 = 1773241795;
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_75(iParam0);
					iParam0->f_5 = 1650499101;
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_75(iParam0);
					iParam0->f_5 = 149116609;
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_75(iParam0);
					iParam0->f_5 = 1486166046;
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_75(iParam0);
					iParam0->f_5 = 58739626;
					iParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 1;
			func_74(iParam0);
			func_78(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = -1657923088;
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = -1268232386;
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = 1926851120;
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = -66052340;
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = 1738334804;
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = 1009780912;
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = -1560771476;
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = 453813335;
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = 786924542;
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = 1656593925;
					iParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			iParam0->f_6 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 4;
			iParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 1323108111;
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -1505479200;
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -1283075997;
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -2100531475;
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 269617530;
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 1592829750;
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 1817985549;
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 1945424739;
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 1787314318;
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 542354442;
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 1510776727;
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -2017297662;
					iParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					break;
			}
			break;
		case 10:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_74(iParam0);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = -377638420;
					iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = 1308799438;
					iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = -1030922940;
					iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = 1750043358;
					iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = -1330609910;
					iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = 223942444;
					iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = 1067547121;
					iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = -450732096;
					iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = -1701940764;
					iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = 1584258975;
					iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_75(iParam0);
					iParam0->f_5 = -98183174;
					iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_75(iParam0);
					iParam0->f_5 = -90261849;
					iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_75(iParam0);
					iParam0->f_5 = 754522971;
					iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_75(iParam0);
					iParam0->f_5 = 974542513;
					iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_75(iParam0);
					iParam0->f_5 = -790885273;
					iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_75(iParam0);
					iParam0->f_5 = -1447045452;
					iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_75(iParam0);
					iParam0->f_5 = -586115209;
					iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_75(iParam0);
					iParam0->f_5 = 224941020;
					iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_75(iParam0);
					iParam0->f_5 = -1179654578;
					iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_75(iParam0);
					iParam0->f_5 = 1247197458;
					iParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
					break;
			}
			break;
		case 8:
			iParam0->f_6 = 1;
			*iParam0 = 9;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_74(iParam0);
			iParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = 974582605;
					iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = -964359125;
					iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = -700339292;
					iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = -470300912;
					iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = -241343909;
					iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = 1944053474;
					iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = -2120646059;
					iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = -1656440405;
					iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = -1422404207;
					iParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
					break;
			}
			break;
		case 13:
			iParam0->f_6 = 1;
			*iParam0 = 1;
			iParam0->f_1 = 6;
			iParam0->f_2 = 1;
			func_74(iParam0);
			func_78(iParam0, 1);
			func_78(iParam0, 4);
			func_78(iParam0, 8);
			func_78(iParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = -1623035253;
					iParam0->f_11 = { func_82(func_81(iParam4)) };
					break;
			}
			break;
		case 14:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 5;
			iParam0->f_2 = 6;
			switch (iParam2)
			{
				case 0:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -1957221189;
					iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_83(iParam0, iParam3);
					iParam0->f_5 = 871956008;
					iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -718829908;
					iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -478076065;
					iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_83(iParam0, iParam3);
					iParam0->f_5 = 158131441;
					iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_83(iParam0, iParam3);
					iParam0->f_5 = 575051428;
					iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -861587350;
					iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -616671844;
					iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -828875274;
					iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_83(iParam0, iParam3);
					iParam0->f_5 = -598017669;
					iParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
					break;
			}
			break;
		case 15:
			iParam0->f_6 = 1;
			iParam0->f_7 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_74(iParam0);
			switch (iParam2)
			{
				case 0:
					func_75(iParam0);
					iParam0->f_5 = 2136361638;
					iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_75(iParam0);
					iParam0->f_5 = 1948005426;
					iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_75(iParam0);
					iParam0->f_5 = 462368629;
					iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_75(iParam0);
					iParam0->f_5 = -172629291;
					iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_75(iParam0);
					iParam0->f_5 = 1063777848;
					iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_75(iParam0);
					iParam0->f_5 = -267241827;
					iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_75(iParam0);
					iParam0->f_5 = -1183266453;
					iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_75(iParam0);
					iParam0->f_5 = -877826604;
					iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_75(iParam0);
					iParam0->f_5 = 1527533302;
					iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_75(iParam0);
					iParam0->f_5 = -865586768;
					iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_75(iParam0);
					iParam0->f_5 = 294379466;
					iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_75(iParam0);
					iParam0->f_5 = 452588198;
					iParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
					break;
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			switch (iParam1)
			{
				case 16:
					iParam0->f_8 = -468635158;
					break;
				case 17:
					iParam0->f_8 = 1112069699;
					break;
				case 18:
					iParam0->f_8 = 661147828;
					break;
				case 19:
					iParam0->f_8 = 899082205;
					break;
				case 20:
					iParam0->f_8 = 987333815;
					break;
				case 21:
					iParam0->f_8 = -315961129;
					break;
				case 22:
					iParam0->f_8 = -139081918;
					break;
				case 23:
					iParam0->f_8 = 1604238189;
					break;
			}
			iVar17 = func_84(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				iParam0->f_7 = 1;
			}
			*iParam0 = func_85(iVar17);
			iParam0->f_1 = 0;
			iParam0->f_6 = 2;
			func_78(iParam0, 32);
			if (iParam2 != -1)
			{
				iParam0->f_9 = func_87(func_86(iVar17), iParam2);
				iParam0->f_15 = func_88(func_86(iVar17), iParam2);
				iParam0->f_5 = func_89(iVar17, iParam2);
				iParam0->f_11 = { func_90(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634), func_91(iParam1));
			break;
		case 3:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634.f_602), func_91(iParam1));
			break;
		case 4:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634.f_2104), func_91(iParam1));
			break;
		case 5:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634.f_12606), func_91(iParam1));
			break;
		case 6:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634.f_12908), func_91(iParam1));
			break;
		case 7:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634.f_15910), func_91(iParam1));
			break;
		case 8:
			Var0.f_1 = func_92(iParam0, &(Global_1070355->f_634.f_15981), func_91(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_93();
	}
	return Var0;
}

void func_34()
{
	func_94();
	func_95();
	func_96();
	func_97();
}

void func_35()
{
}

void func_36()
{
}

void func_37()
{
	int iVar0;

	iVar0 = 1;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_38()
{
	int iVar0;

	iVar0 = 2;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

int func_39(struct<2> Param0)
{
	if (!func_98(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_91(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_40(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1184367->f_1 && iParam0) != 0;
}

bool func_41(int iParam0, int iParam1)
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

int func_42()
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
	if (!func_39(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_43()
{
}

void func_44()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1184672->f_231.f_1066[Local_903.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_32(&Var1, Local_903.f_1, Local_903.f_2, Local_903.f_3, iVar0);
	if (!func_99(&Var1, 1))
	{
		func_100(1);
		return;
	}
	Local_0.f_6 = func_81(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::NETWORK_GET_GANG_ID(iVar0)));
	func_101(256);
	if (func_102(Local_0.f_6))
	{
		func_103(5);
		func_100(6);
	}
	else
	{
		func_100(1);
	}
}

void func_45()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_32(&Var0, Local_903.f_1, Local_903.f_2, -1, 255);
	if (func_99(&Var0, 1))
	{
		func_100(2);
		return;
	}
	if (func_104(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_903.f_15, Var0.f_10, 2442122);
		func_100(2);
	}
	else if (bVar17)
	{
		func_103(3);
		func_100(6);
	}
	if (!func_105(Local_0.f_3.f_2))
	{
		func_106(&(Local_0.f_3.f_2));
	}
	else if (func_107(Local_0.f_3.f_2) > 45000)
	{
		func_103(4);
		func_100(6);
	}
}

void func_46()
{
	if (func_108(1, 255))
	{
		if (!func_109(1))
		{
			if (func_110())
			{
				func_101(1);
			}
		}
		else
		{
			func_111();
			func_100(3);
		}
	}
}

void func_47()
{
	bool bVar0;

	if (func_108(2, 255))
	{
		if (!func_109(2))
		{
			bVar0 = true;
			if (!func_112())
			{
				bVar0 = false;
			}
			if (!func_113())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_101(2);
			}
		}
		else
		{
			func_114();
			func_100(4);
		}
	}
}

void func_48()
{
	func_115();
	func_116();
	func_117();
	if (func_118() || Local_0.f_2 != 0)
	{
		func_119();
		func_100(5);
	}
}

void func_49()
{
	if (func_108(4, 255))
	{
		if (func_120())
		{
			func_101(4);
			func_100(6);
		}
	}
}

void func_50()
{
	if (!func_109(256))
	{
		return;
	}
	if (func_109(512))
	{
		if (func_67(32) && func_81(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_68(Local_0.f_6);
			func_121(32);
		}
	}
	else if (!func_67(32))
	{
		if (func_81(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_122(Local_0.f_6, 1, 1);
			func_123(32);
		}
	}
	else if (func_81(PLAYER::PLAYER_ID()) != Local_0.f_6)
	{
		func_68(Local_0.f_6);
		func_121(32);
	}
}

void func_51()
{
	func_124();
}

void func_52()
{
	if (Local_0 == 6)
	{
		func_125(6);
	}
	else if (Local_0 > 0)
	{
		func_50();
		func_125(1);
	}
}

void func_53()
{
	if (Local_0 == 6)
	{
		func_125(6);
	}
	else if (Local_0 > 1)
	{
		func_125(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_108(1, 255))
	{
		bVar0 = true;
		if (!func_126())
		{
			bVar0 = false;
		}
		if (!func_127())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_128(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_105(Local_903.f_11))
			{
				func_106(&(Local_903.f_11));
			}
			if (func_107(Local_903.f_11) >= iVar1)
			{
				func_125(6);
			}
		}
	}
	else if (Local_0 > 2)
	{
		func_129(&(Local_903.f_11));
		func_130();
		func_125(3);
	}
}

void func_55()
{
	int iVar0;

	if (!func_108(2, 255))
	{
		if (func_131())
		{
			func_128(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_105(Local_903.f_11))
			{
				func_106(&(Local_903.f_11));
			}
			if (func_132(Local_903.f_11) >= iVar0)
			{
				func_125(6);
			}
		}
	}
	else if (Local_0 > 3)
	{
		func_129(&(Local_903.f_11));
		func_133();
		func_134();
		func_135();
		func_136();
		func_125(4);
	}
}

void func_56()
{
	if (Local_0 >= 5)
	{
		func_137();
		func_125(5);
		return;
	}
	func_138();
	func_139();
	func_140();
	func_141();
	func_142();
	func_143();
}

void func_57()
{
	if (!func_108(4, 255))
	{
		if (func_144())
		{
			func_145();
			func_65(Local_903.f_12, 4);
			func_128(4);
		}
	}
	else if (Local_0 > 5)
	{
		func_125(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_109(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_60()
{
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_24[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_24[iVar1]));
				func_146(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_147(iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_63()
{
	func_148(&(Local_903.f_172.f_13));
	if (VOLUME::DOES_VOLUME_EXIST(Local_903.f_172.f_11))
	{
		VOLUME::DELETE_VOLUME(Local_903.f_172.f_11);
	}
}

void func_64()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_150(func_149(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		func_151(func_149(iVar0));
		iVar0++;
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_152(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1194410)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_66()
{
	int iVar0;
	bool bVar1;

	if (!func_67(1))
	{
		return;
	}
	if (func_67(4))
	{
		return;
	}
	if (!func_67(2))
	{
		iVar0 = -1;
	}
	else if (!func_67(8))
	{
		iVar0 = 2;
	}
	else if (func_67(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_153(Local_903.f_9, iVar0, 0);
	func_123(4);
	if (bVar1)
	{
		func_154(Local_903.f_1, Local_903.f_2);
	}
}

bool func_67(int iParam0)
{
	return func_155(Local_903.f_7, iParam0);
}

void func_68(int iParam0)
{
	int iVar0;

	if (!func_156(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1126840)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_69()
{
}

void func_70(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_157(uParam0))
	{
		return -1;
	}
	iVar0 = func_158(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_158(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_72(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *(Global_1184672->f_231[iParam0 /*15*/]);
}

void func_73(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_159(iParam0);
			break;
		case 1:
			func_159(iParam0);
			break;
		case 2:
			func_159(iParam0);
			break;
		case 3:
			func_160(iParam0);
			break;
		case 4:
			func_159(iParam0);
			break;
		case 5:
			func_159(iParam0);
			break;
		case 6:
			func_160(iParam0);
			break;
		case 7:
			func_160(iParam0);
			break;
		case 8:
			func_160(iParam0);
			break;
		case 9:
			func_159(iParam0);
			break;
		default:
			func_75(iParam0);
			func_74(iParam0);
			break;
	}
}

void func_74(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_2 - 1))
	{
		func_77(iParam0, iVar0);
		iVar0++;
	}
}

void func_75(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1 - 1))
	{
		func_76(iParam0, iVar0);
		iVar0++;
	}
}

void func_76(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_3), iParam1);
}

void func_77(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_4), iParam1);
}

void func_78(int iParam0, int iParam1)
{
	func_161(&(iParam0->f_16), iParam1);
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_77(iParam0, 0);
			break;
		case 1:
		case 2:
			func_77(iParam0, 1);
			func_77(iParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_77(iParam0, 0);
			func_77(iParam0, 2);
			break;
		case 8:
			func_77(iParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_77(iParam0, 1);
			break;
		default:
			func_74(iParam0);
			break;
	}
}

void func_80(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_162(iParam0);
			break;
		case 1:
			func_163(iParam0);
			break;
		case 2:
			func_164(iParam0);
			break;
		case 3:
			func_165(iParam0);
			break;
		default:
			func_75(iParam0);
			func_74(iParam0);
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1126840)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_82(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_20;
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_166(iParam0);
			break;
		case 1:
		case 2:
			func_167(iParam0);
			break;
		case 3:
		case 4:
			func_168(iParam0);
			break;
		default:
			func_74(iParam0);
			break;
	}
	func_75(iParam0);
}

var func_84(int iParam0)
{
	return &(Global_1244208->f_2073[iParam0]);
}

int func_85(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_3;
}

int func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1232796[iParam0 /*5*/];
}

var func_87(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_169(&Var1, uParam0) && func_170(&Var1, iParam1))
	{
		func_171(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_169(&Var1, uParam0) && func_170(&Var1, iParam1))
	{
		func_171(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_172(iParam0, iParam1);
	return &(Global_1232796->f_401[iVar0 /*7*/]);
}

Vector3 func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_172(iParam0, iParam1);
	return (Global_1232796->f_401[iVar0 /*7*/])->f_3;
}

int func_91(int iParam0)
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

int func_92(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

struct<2> func_93()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_94()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			(Local_38[iVar1 /*27*/])->f_6.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_95()
{
	func_174(20567);
}

void func_96()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_175(&(Local_903.f_84), &(Local_903.f_84.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_0.f_30.f_3[iVar0] = 0;
			Local_0.f_30.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_38[iVar1 /*27*/])->f_10.f_11[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_97()
{
}

int func_98(int iParam0)
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

bool func_99(var uParam0, int iParam1)
{
	return func_176(uParam0->f_16, iParam1);
}

void func_100(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

void func_101(int iParam0)
{
	if (!func_109(iParam0))
	{
		func_177(&(Local_0.f_1), iParam0);
	}
}

bool func_102(int iParam0)
{
	if (!func_156(iParam0))
	{
		return false;
	}
	return (func_178(iParam0) && ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_103(int iParam0)
{
	if (Local_0.f_2 != iParam0)
	{
		Local_0.f_2 = iParam0;
	}
}

int func_104(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(Local_0.f_3.f_1))
	{
		return 1;
	}
	if (func_179(Local_903.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_0.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_903.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_180(&uVar1, Param0);
		Local_0.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_128(128);
	}
	else if (!func_108(128, 255))
	{
		Local_0.f_3.f_1 = func_181(Param0);
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(Local_0.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_0.f_3);
	switch (iVar0)
	{
		case 3:
			Local_0.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_0.f_3);
			return 1;
		case 4:
			Local_0.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_105(int iParam0)
{
	return iParam0 != 0;
}

void func_106(var uParam0)
{
	*uParam0 = Global_1273882->f_21;
}

int func_107(int iParam0)
{
	return (Global_1273882->f_21 - iParam0) * 1000;
}

bool func_108(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_155(&(Local_38[iParam1 /*27*/]), iParam0);
}

bool func_109(int iParam0)
{
	return func_155(Local_0.f_1, iParam0);
}

int func_110()
{
	return 1;
}

void func_111()
{
}

int func_112()
{
	return 1;
}

int func_113()
{
	bool bVar0;

	if (!func_182(&bVar0))
	{
		if (bVar0)
		{
			func_183();
		}
		return 0;
	}
	if (!func_184(&bVar0))
	{
		if (bVar0)
		{
			func_183();
		}
		return 0;
	}
	return 1;
}

void func_114()
{
}

void func_115()
{
	if (!func_109(32) && func_185(32))
	{
		func_101(32);
	}
	if (!func_109(64) && func_185(64))
	{
		func_101(64);
	}
	if (!func_109(16) && func_186(16))
	{
		func_101(16);
	}
	if ((!func_109(2048) && func_185(2048)) && !func_185(4096))
	{
		func_101(2048);
	}
}

void func_116()
{
	bool bVar0;

	if (!bVar0 && func_109(16))
	{
		func_103(1);
		return;
	}
	if (func_109(2048) && !func_185(4096))
	{
		func_103(6);
		return;
	}
}

void func_117()
{
	func_187();
}

int func_118()
{
	return 1;
}

void func_119()
{
}

int func_120()
{
	return 1;
}

void func_121(int iParam0)
{
	if (func_67(iParam0))
	{
		func_188(&(Local_903.f_7), iParam0);
	}
}

int func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_156(iParam0))
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1126840)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_161(&(((*Global_1126840)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_190(&(((*Global_1126840)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_123(int iParam0)
{
	if (!func_67(iParam0))
	{
		func_177(&(Local_903.f_7), iParam0);
	}
}

void func_124()
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
				func_191(iVar0);
				break;
			case -1315570756:
				func_192(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_193(iVar0);
		iVar0++;
	}
}

void func_125(int iParam0)
{
	if (Local_903.f_8 != iParam0)
	{
		Local_903.f_8 = iParam0;
	}
}

int func_126()
{
	return 1;
}

bool func_127()
{
	bool bVar0;

	bVar0 = false;
	if (!func_194())
	{
		bVar0 = true;
	}
	if (!func_195())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_128(int iParam0)
{
	if (!func_108(iParam0, 255))
	{
		func_177(Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/], iParam0);
	}
}

void func_129(var uParam0)
{
	*uParam0 = 0;
}

void func_130()
{
}

int func_131()
{
	return 1;
}

int func_132(int iParam0)
{
	return (iParam0 - Global_1273882->f_21) * 1000;
}

void func_133()
{
	if (!func_67(1))
	{
		func_196(Local_903.f_9);
		func_123(1);
	}
}

void func_134()
{
	func_197();
	func_198();
}

void func_135()
{
}

void func_136()
{
	func_199();
}

void func_137()
{
}

void func_138()
{
	float fVar0;

	if (func_179(Local_903.f_15))
	{
		return;
	}
	if (func_200())
	{
		return;
	}
	if (func_201(Local_903.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_903.f_15);
		if (fVar0 < 200f)
		{
			func_128(4096);
		}
		else if (fVar0 < 400f)
		{
			func_202(4096);
			func_128(2048);
		}
		else
		{
			func_202(4096);
			func_202(2048);
		}
	}
}

void func_139()
{
	func_203();
	func_204();
	func_205();
	func_206();
	func_207();
	func_208();
}

void func_140()
{
	if (func_209())
	{
		func_128(8);
	}
	else
	{
		func_202(8);
	}
}

void func_141()
{
}

void func_142()
{
	if (!func_108(8, 255))
	{
		func_128(16);
	}
	else
	{
		func_202(16);
	}
}

void func_143()
{
	int iVar0;

	Local_903.f_6 = -1;
	Local_903.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_903.f_5 = (Local_903.f_5 || Local_38[iVar0 /*27*/]) // PointerArith;
			Local_903.f_6 = (Local_903.f_6 && Local_38[iVar0 /*27*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_144()
{
	return 1;
}

void func_145()
{
	func_210();
}

void func_146(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_903.f_33.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_903.f_33.f_7[iParam0 /*11*/])->f_1));
	}
}

bool func_147(int iParam0)
{
	return MISC::IS_BIT_SET(Local_903.f_59, iParam0);
}

void func_148(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_149(int iParam0)
{
	return iParam0;
}

int func_150(int iParam0)
{
	if (func_155(Local_903.f_195.f_1, 4))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_903.f_195.f_2);
		return StackVal;
	}
	return 0;
}

void func_151(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_211(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iVar0 /*8*/])))
		{
			func_212((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iVar0 /*8*/], 1, 1);
		}
		iVar0++;
	}
	func_213(iParam0, 2);
}

bool func_152(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1194410)[iParam1 /*72*/][iParam0], iParam2);
}

void func_153(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_215(func_214(Param0));
	iVar1 = func_216(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_217(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_154(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_218(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_219(iVar0);
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_157(var uParam0)
{
	if (func_39(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_158(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_220(iParam1);
	iVar1 = ((&Global_1184672->f_3[iParam1] + iVar0) - 1);
	if (&Global_1184672->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_221(iParam1)) - 1);
	}
	bVar2 = func_39(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21((Global_1184672->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1184672->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1184672->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1184672->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1184672->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1184672->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1184672->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_159(int iParam0)
{
	func_76(iParam0, 0);
	func_76(iParam0, 1);
	func_76(iParam0, 3);
	func_74(iParam0);
}

void func_160(int iParam0)
{
	func_75(iParam0);
	func_222(iParam0, 0, 3);
}

void func_161(var uParam0, int iParam1)
{
	func_223(uParam0, iParam1);
}

void func_162(int iParam0)
{
	func_76(iParam0, 0);
	func_77(iParam0, 0);
	func_77(iParam0, 1);
	func_77(iParam0, 2);
}

void func_163(int iParam0)
{
	func_76(iParam0, 1);
	func_74(iParam0);
}

void func_164(int iParam0)
{
	func_76(iParam0, 2);
	func_77(iParam0, 3);
}

void func_165(int iParam0)
{
	func_76(iParam0, 3);
	func_77(iParam0, 4);
}

void func_166(int iParam0)
{
	func_77(iParam0, 0);
	func_77(iParam0, 1);
}

void func_167(int iParam0)
{
	func_77(iParam0, 2);
	func_77(iParam0, 3);
}

void func_168(int iParam0)
{
	func_77(iParam0, 4);
	func_77(iParam0, 5);
}

bool func_169(var uParam0, var uParam1)
{
	*uParam0 = Global_1232796->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_170(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_171(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_172(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1232796)[iParam0 /*5*/])->f_4 + iParam1);
}

int func_173(var uParam0)
{
	return 0;
}

void func_174(int iParam0)
{
	Local_903.f_195.f_2 = iParam0;
	func_177(&(Local_903.f_195.f_1), 4);
}

void func_175(var uParam0, var uParam1)
{
	func_224(uParam0);
	func_225(uParam0);
	func_226(uParam0, 1);
	func_227(uParam0, 1);
	func_228(uParam1);
	func_225(uParam1);
	func_229(uParam1);
	func_230(uParam1, 1);
	func_231(uParam1, 1);
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_178(int iParam0)
{
	int iVar0;

	if (!func_156(iParam0))
	{
		return false;
	}
	iVar0 = func_232(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_179(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_181(struct<17> Param0)
{
	var uVar0;

	func_180(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_182(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (func_233(iVar2, 4))
		{
		}
		else if (!func_234(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return 0;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return 0;
			}
			return 1;
		}
	}

void func_183()
{
	func_103(2);
}

int func_184(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 2;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return 0;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_903.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar3 = func_235(iVar1, iVar2);
			if (iVar3 != 0 || func_236(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_903.f_59.f_1[iVar1 /*23*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, func_237(iVar1, iVar2)) };
					if (func_236(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_903.f_59.f_1[iVar1 /*23*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_0.f_26[iVar1 /*3*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
							{
								*bParam0 = 1;
								return 0;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!func_238((*Local_0.f_26[iVar1 /*3*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (func_239(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return 0;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return 0;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, func_240(iVar1, iVar2));
					MISC::SET_BIT(&((Local_903.f_59.f_1[iVar1 /*23*/])->f_2), iVar2);
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	if (bVar4)
	{
		return 0;
	}
	return 1;
}

bool func_185(int iParam0)
{
	return func_155(Local_903.f_5, iParam0);
}

bool func_186(int iParam0)
{
	return func_155(Local_903.f_6, iParam0);
}

void func_187()
{
	if (func_241())
	{
		if (!func_242(2))
		{
			if (!func_242(1))
			{
				func_243(1);
				Local_0.f_35 = Local_0.f_35.f_1;
				func_244(4);
			}
		}
	}
	else if (func_245(2))
	{
		if (func_246(2))
		{
			func_244(1);
			Local_0.f_35.f_1 = func_247(Local_903.f_195.f_8, Local_903.f_195.f_9, Local_903.f_195);
		}
	}
}

void func_188(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_189(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	if (!func_178(iParam0))
	{
		return 0;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1;
}

void func_190(var uParam0, int iParam1)
{
	func_248(uParam0, iParam1);
}

void func_191(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_249(&Var0, iParam0))
			{
				func_250(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_192(int iParam0)
{
}

void func_193(int iParam0)
{
}

int func_194()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (MISC::IS_BIT_SET(Local_903.f_33.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_251(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_903.f_33.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_903.f_33.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_903.f_33.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0;
	}
	return 1;
}

int func_195()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (MISC::IS_BIT_SET((Local_903.f_59.f_1[iVar0 /*23*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_235(iVar0, iVar1);
				if (func_236(iVar1))
				{
					if (((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_903.f_59.f_1[iVar0 /*23*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @326; //curOff = 237
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_903.f_59.f_1[iVar0 /*23*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_903.f_59.f_1[iVar0 /*23*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @326; //curOff = 301
					}
					else
					{
						MISC::SET_BIT(&((Local_903.f_59.f_1[iVar0 /*23*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return 0;
	}
	return 1;
}

void func_196(struct<2> Param0)
{
	if (func_216(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_216(Param0)))
	{
		STATS::_0x99230691875FC218(func_214(Param0), func_216(Param0), Global_36);
	}
}

void func_197()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_252(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_198()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
				(Local_903.f_59.f_1[iVar1 /*23*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != func_235(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_199()
{
}

bool func_200()
{
	return (func_109(32) || func_108(32, 255));
}

int func_201(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_253(iParam0, 2087069356) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1273882->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

void func_202(int iParam0)
{
	if (func_155(&(Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/]), iParam0))
	{
		func_188(Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/], iParam0);
	}
}

void func_203()
{
	func_254();
	func_255();
	func_256();
}

void func_204()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_257(iVar0, bVar1, iVar2);
		func_258(iVar0, bVar1, iVar2);
		func_259(iVar0, bVar1, iVar2);
		func_260(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_205()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_903.f_33.f_19 >= 1)
		{
			Local_903.f_33.f_19 = 0;
		}
		iVar0 = Local_903.f_33.f_19;
		Local_903.f_33.f_19++;
		iVar7 = func_261(iVar0);
		iVar1 = &Local_903.f_33.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_233(iVar7, 4))
		{
			func_252(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_38[iVar3 /*27*/])->f_6.f_2[iVar0] > -1f)
			{
				(Local_38[iVar3 /*27*/])->f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_903.f_33.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_903.f_33.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_903.f_33.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_903.f_33.f_20), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_903.f_33.f_20, iVar0))
		{
			if (bVar4 || !func_262(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_903.f_33.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_262(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_903.f_33.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_38[iVar3 /*27*/])->f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_38[iVar3 /*27*/])->f_6.f_1), iVar0);
				}
				func_263(Local_903.f_33.f_21[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_38[iVar3 /*27*/])->f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_264(Local_903.f_33.f_21[iVar0 /*3*/]) || func_265(Local_903.f_33.f_21[iVar0 /*3*/], 0.5f))))
			{
				func_266(Local_903.f_33.f_21[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_38[iVar3 /*27*/])->f_6.f_1), iVar0);
			}
		}
		if (func_233(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_267(iVar7))
						{
							if (!func_234(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_268(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_233(iVar7, 8))
			{
				if (!func_267(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_903.f_33.f_20 != 0)
	{
		if (!func_269(1, -1))
		{
			func_270(1);
		}
	}
	else if (func_269(1, -1))
	{
		func_271(1);
	}
}

void func_206()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_272();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_38[iVar15 /*27*/])->f_10.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_903.f_84.f_84 >= 1)
		{
			Local_903.f_84.f_84 = 0;
		}
		iVar1 = Local_903.f_84.f_84;
		Local_903.f_84.f_84++;
		iVar12++;
		iVar8 = func_273(iVar1);
		if (!func_274(iVar8))
		{
		}
		else if (func_275(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				func_276(iVar8);
				if (func_277(iVar8))
				{
					if (func_278(iVar8))
					{
						if (!func_279(iVar8))
						{
							func_280(iVar8);
						}
					}
					if (func_281(iVar8))
					{
						func_282(iVar8);
					}
				}
				else
				{
					if (func_283(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!func_284(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_285(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_286(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_287(vVar5.x, vVar5.y, &(Local_903.f_84), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_EVENT_GET_RECENT_EVENT(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_903.f_84.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(func_288(&(Local_903.f_84))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_903.f_84.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_903.f_84.f_1 & 256 != 0)
							{
								if ((Local_38[iVar15 /*27*/])->f_10.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_38[iVar15 /*27*/])->f_10.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(func_288(&(Local_903.f_84))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_289(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_38[iVar15 /*27*/])->f_10.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_38[iVar15 /*27*/])->f_10.f_7), iVar8);
								}
								func_290(iVar8, 1);
								Jump @756; //curOff = 668
								if (func_291(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_38[iVar15 /*27*/])->f_10.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_38[iVar15 /*27*/])->f_10.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_38[iVar15 /*27*/])->f_10.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_38[iVar15 /*27*/])->f_10.f_7), iVar8);
								}
								if (func_292(iVar8))
								{
									if (!func_293(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!func_294(iVar8))
											{
											}
											else
											{
												func_295(iVar8);
												func_296(iVar8);
												Jump @1001; //curOff = 810
												if (func_297(iVar8))
												{
												}
												else if (iVar13 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 8)
														{
															if (&Local_903.f_84.f_86[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_903.f_84.f_86[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_903.f_84.f_86[iVar8];
																Local_903.f_84.f_86[iVar8] = &Local_903.f_84.f_86[iVar8] + 1;
															}
															iVar14++;
															if (func_298(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!func_299(iVar8, iVar10))
																{
																	if (func_284(iVar8, iVar0))
																	{
																		if (!func_300(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			func_301(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_207()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_302();
	if (Local_903.f_172.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_155((Local_38[iVar1 /*27*/])->f_23, 1))
	{
		Local_903.f_172.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_903.f_15);
	fVar4 = Local_903.f_172.f_9;
	fVar5 = Local_903.f_172.f_10;
	if (func_155(Local_903.f_172.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_903.f_172.f_7));
		if (fVar7 > 0f)
		{
			if (func_303(Local_903.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_903.f_172.f_6 < 1f)
			{
				Local_903.f_172.f_6 = (Local_903.f_172.f_6 + fVar8);
				if (Local_903.f_172.f_6 > 1f)
				{
					Local_903.f_172.f_6 = 1f;
				}
			}
		}
		else if (Local_903.f_172.f_6 > 0f)
		{
			Local_903.f_172.f_6 = (Local_903.f_172.f_6 - fVar8);
			if (Local_903.f_172.f_6 < 0f)
			{
				Local_903.f_172.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_903.f_172.f_5) * Local_903.f_172.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_177(&((Local_38[iVar1 /*27*/])->f_23), 1);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_903.f_172.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_903.f_172.f_11, false, 0))
	{
		func_177(&((Local_38[iVar1 /*27*/])->f_23), 1);
	}
	else if (Local_903.f_172 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_304(Local_903.f_172.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_305(&(Local_903.f_172.f_13), Local_903.f_172, Local_903.f_172.f_8))
		{
			func_177(&((Local_38[iVar1 /*27*/])->f_23), 1);
		}
	}
	if (func_155((Local_38[iVar1 /*27*/])->f_23, 1))
	{
		Local_903.f_172.f_4 = 1;
	}
}

void func_208()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = false;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_306(iVar1))
	{
		return;
	}
	func_307();
	if (func_241())
	{
		if (func_308(2, -1) || func_308(1, -1))
		{
			func_309(1);
			func_309(2);
			func_310(2);
			func_310(1);
		}
	}
	else
	{
		bVar2 = false;
		if (func_311() || func_312())
		{
			bVar2 = true;
			if (func_312() || (!func_313(8) && !func_308(4, iVar1)))
			{
				func_314(Local_903.f_195, Local_0.f_35);
				Local_903.f_195 = Local_0.f_35;
				iVar3 = 0;
				while (iVar3 < 1)
				{
					func_315(func_149(iVar3), Local_0.f_35);
					iVar3++;
				}
				if (func_316())
				{
					func_317(Local_903.f_195.f_3.f_1);
				}
				bVar0 = true;
				if (func_311())
				{
					func_318(4);
				}
				else
				{
					func_309(4);
				}
			}
			else if (!func_313(8))
			{
				if (!func_245(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_244(8);
				}
			}
			else if (func_242(4))
			{
				if (func_308(4, iVar1))
				{
					func_309(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_243(4);
				func_243(8);
			}
		}
		else if (func_308(4, iVar1))
		{
			func_309(4);
		}
		if (!func_242(1))
		{
			if (func_246(1))
			{
				func_310(1);
			}
			if (func_316())
			{
				iVar4 = Local_903.f_195.f_3.f_1;
				if (func_319(iVar4))
				{
					if (bVar0)
					{
						func_317(iVar4);
					}
					if (func_155((Local_903.f_195.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!func_211(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || func_155(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (func_320(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									func_321(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								func_188(&(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!func_155(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (func_155(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (func_322() < ((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (func_320(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											func_321(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!func_320(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										func_321(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!func_320(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									func_321(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (func_323(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!func_324(iVar4, iVar5, Local_903.f_195))
								{
								}
								else
								{
									Local_903.f_195.f_7 = PLAYER::PLAYER_ID();
									Local_903.f_195.f_8 = iVar4;
									Local_903.f_195.f_9 = iVar5;
									(Local_38[iVar6 /*27*/])->f_24.f_1 = iVar4;
									(Local_38[iVar6 /*27*/])->f_24.f_2 = iVar5;
									func_325(iVar4, iVar5);
									func_318(1);
									func_318(2);
									func_326(2);
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		else
		{
			if (!func_246(2))
			{
				if (!func_246(1))
				{
					func_326(1);
					func_310(2);
				}
			}
			if (!func_308(2, -1))
			{
				if (func_246(2))
				{
					func_325(Local_903.f_195.f_8, Local_903.f_195.f_9);
					func_318(2);
				}
			}
		}
	}
}

int func_209()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_903.f_14))
	{
		return 0;
	}
	return 1;
}

void func_210()
{
}

bool func_211(int iParam0)
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

void func_212(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_211(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_327(*uParam0);
	if (((*Global_1949749)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_328(iVar0);
	*uParam0 = 0;
}

void func_213(int iParam0, int iParam1)
{
	func_188(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_3), iParam1);
}

int func_214(var uParam0, var uParam1)
{
	return uParam0;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

int func_216(struct<2> Param0)
{
	return func_329(Param0);
}

void func_217(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_214(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_331(func_330(Param0));
			iVar5 = func_332(iVar4);
			if (!func_333(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100949->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100949->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1109623[iVar0 /*42*/];
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;

	Var1.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar18 = iVar19;
		if (iVar18 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_32(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_219(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_334(&Var0);
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1184672->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1184672->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1184672->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1184672->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1184672->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1184672->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (iParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_77(iParam0, iVar0);
		iVar0++;
	}
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_224(var uParam0)
{
	func_335(uParam0, 0);
	func_336(uParam0, 0);
	func_226(uParam0, 1);
	func_337(uParam0, 1);
	func_338(uParam0, 0);
	func_339(uParam0, 1);
	func_340(uParam0, 1, 1, 1);
}

void func_225(var uParam0)
{
	func_335(uParam0, 0);
	func_336(uParam0, 0);
	func_226(uParam0, 0);
	func_338(uParam0, 0);
	func_340(uParam0, 1, 1, 1);
}

void func_226(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188(&(uParam0->f_1), 256);
	}
	else
	{
		func_177(&(uParam0->f_1), 256);
	}
}

void func_227(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188(&(uParam0->f_1), 4);
	}
	else
	{
		func_177(&(uParam0->f_1), 4);
	}
}

void func_228(var uParam0)
{
	func_342(uParam0, (func_341(uParam0) - 6f));
	func_343(uParam0, 1);
}

void func_229(var uParam0)
{
	func_344(uParam0, 1);
	func_345(uParam0, 1);
	func_346(uParam0, 1);
}

void func_230(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188(&(uParam0->f_1), 131072);
	}
	else
	{
		func_177(&(uParam0->f_1), 131072);
	}
}

void func_231(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 4);
	}
	else
	{
		func_188(uParam0, 4);
	}
}

int func_232(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	return &(Global_1124870->f_1[iParam0 /*59*/]);
}

bool func_233(int iParam0, int iParam1)
{
	return func_155((Local_903.f_33.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_903.f_15 };
	iVar7 = 0;
	iVar8 = func_251(iParam0);
	iVar9 = func_347(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_24[iParam0])))
		{
			iVar9 = func_347(iParam0);
			fVar0 = func_348(iParam0);
			if (!func_155((Local_903.f_33.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_349(iParam0)) };
			}
			else
			{
				vVar1 = { func_349(iParam0) };
			}
			if (!func_350(Local_0.f_24[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_0.f_24[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_0x1902C4CFCC5BE57C(iVar7, iVar9);
						PED::_0xCC8CA3E88256E58F(iVar7, func_233(iParam0, 1), 1, 1, 1, false);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_351(iVar7, 1);
					}
					*bParam2 = 1;
					return 0;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(&(Local_0.f_24[iParam0]))))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
{
	return ((Local_903.f_59.f_1[iParam0 /*23*/])->f_4[iParam1 /*9*/])->f_1;
}

bool func_236(int iParam0)
{
	return MISC::IS_BIT_SET((Local_903.f_59.f_1[0 /*23*/])->f_3, iParam0);
}

Vector3 func_237(int iParam0, int iParam1)
{
	return ((Local_903.f_59.f_1[iParam0 /*23*/])->f_4[iParam1 /*9*/])->f_5;
}

int func_238(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_352(iParam1))
	{
		return 0;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

bool func_239(int iParam0, int iParam1)
{
	return ((Local_903.f_59.f_1[iParam0 /*23*/])->f_4[iParam1 /*9*/])->f_8;
}

var func_240(int iParam0, int iParam1)
{
	return ((Local_903.f_59.f_1[iParam0 /*23*/])->f_4[iParam1 /*9*/])->f_4;
}

bool func_241()
{
	return func_155(Local_0.f_35.f_2, 1);
}

bool func_242(int iParam0)
{
	return func_155(Local_903.f_195.f_5, iParam0);
}

void func_243(int iParam0)
{
	func_188(&(Local_0.f_35.f_2), iParam0);
}

void func_244(int iParam0)
{
	func_177(&(Local_0.f_35.f_2), iParam0);
}

bool func_245(int iParam0)
{
	return func_155(Local_903.f_195.f_6, iParam0);
}

bool func_246(int iParam0)
{
	return func_155(Local_903.f_195.f_1, iParam0);
}

var func_247(var uParam0, var uParam1, var uParam2)
{
	return uParam2;
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_249(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_903.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_903)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_903.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_903.f_3)
	{
		return 0;
	}
	return 1;
}

void func_250(int iParam0)
{
}

int func_251(int iParam0)
{
	return (Local_903.f_33.f_7[iParam0 /*11*/])->f_3;
}

void func_252(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_903.f_33.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_24[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_24[iParam0]));
			Local_903.f_33.f_7[iParam0 /*11*/] = iVar1;
			(Local_38[iParam1 /*27*/])->f_6.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_353(iVar1, 1f, 0);
				}
				sVar0 = func_354(iParam0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
				{
					func_355(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_903.f_33.f_5), iParam0);
				if (bParam2)
				{
					func_356(iParam0);
				}
			}
		}
	}
}

struct<2> func_253(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_357(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_358(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_254()
{
	Local_903.f_33.f_6 = 0;
	Local_903.f_33.f_2 = 0;
	Local_903.f_33.f_1 = -1;
}

void func_255()
{
	int iVar0;

	Local_903.f_84.f_64 = 0;
	Local_903.f_84.f_63 = 0;
	Local_903.f_84.f_66 = 0;
	Local_903.f_84.f_67 = 0;
	Local_903.f_84.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_903.f_84.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_903.f_84.f_75[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_903.f_84.f_73[iVar0]);
		func_359(iVar0);
		iVar0++;
	}
}

void func_256()
{
	int iVar0;

	Local_903.f_195.f_5 = 0;
	Local_903.f_195.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_360(func_149(iVar0));
		iVar0++;
	}
}

void func_257(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_903.f_33.f_2 = (Local_903.f_33.f_2 || (Local_38[iParam0 /*27*/])->f_6);
		Local_903.f_33.f_1 = (Local_903.f_33.f_1 && (Local_38[iParam0 /*27*/])->f_6);
		Local_903.f_33.f_6 = (Local_903.f_33.f_6 || (Local_38[iParam0 /*27*/])->f_6.f_1);
	}
}

void func_258(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_903.f_84.f_64 = (Local_903.f_84.f_64 || (Local_38[iParam0 /*27*/])->f_10.f_1);
		Local_903.f_84.f_63 = (Local_903.f_84.f_63 || (Local_38[iParam0 /*27*/])->f_10);
		Local_903.f_84.f_66 = (Local_903.f_84.f_66 || (Local_38[iParam0 /*27*/])->f_10.f_3);
		Local_903.f_84.f_67 = (Local_903.f_84.f_67 || (Local_38[iParam0 /*27*/])->f_10.f_4);
		Local_903.f_84.f_68 = (Local_903.f_84.f_68 || (Local_38[iParam0 /*27*/])->f_10.f_5);
		Local_903.f_84.f_69 = (Local_903.f_84.f_69 || (Local_38[iParam0 /*27*/])->f_10.f_6);
		Local_903.f_84.f_82 = (Local_903.f_84.f_82 || (Local_38[iParam0 /*27*/])->f_10.f_2);
		Local_903.f_84.f_70 = (Local_903.f_84.f_70 && (Local_38[iParam0 /*27*/])->f_10.f_7);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_38[iParam0 /*27*/])->f_10.f_9[iVar0], Local_903.f_84.f_71[iVar0], Local_903.f_84.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_38[iParam0 /*27*/])->f_10.f_9[iVar0], Local_903.f_84.f_71[iVar0], Local_903.f_84.f_73[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_38[iParam0 /*27*/])->f_10.f_9[iVar0], Local_903.f_84.f_71[iVar0], Local_903.f_84.f_75[iVar0]);
			func_361(func_273(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_259(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(Local_38[iParam2 /*27*/])->f_23 = ((Local_38[iParam2 /*27*/])->f_23 || (Local_38[iParam0 /*27*/])->f_23);
	}
}

void func_260(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_903.f_195.f_5 = (Local_903.f_195.f_5 || (Local_38[iParam0 /*27*/])->f_24);
		Local_903.f_195.f_6 = (Local_903.f_195.f_6 && (Local_38[iParam0 /*27*/])->f_24);
		if (!func_246(2))
		{
			if (func_246(1))
			{
				if (func_155((Local_38[iParam0 /*27*/])->f_24, 1))
				{
					Local_903.f_195.f_7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
					Local_903.f_195.f_8 = (Local_38[iParam0 /*27*/])->f_24.f_1;
					Local_903.f_195.f_9 = (Local_38[iParam0 /*27*/])->f_24.f_2;
					func_326(2);
					if (iParam0 != iParam2)
					{
						if (func_155((Local_38[iParam2 /*27*/])->f_24, 1))
						{
							func_188(&((Local_38[iParam2 /*27*/])->f_24), 1);
						}
					}
				}
			}
		}
	}
	if (iParam0 == 31)
	{
		if (!func_155(Local_903.f_195.f_5, 1))
		{
			Local_903.f_195.f_7 = 255;
			Local_903.f_195.f_8 = -1;
			Local_903.f_195.f_9 = -1;
			func_310(2);
		}
	}
}

int func_261(int iParam0)
{
	return iParam0;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_6.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_903.f_33.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_263(var uParam0)
{
	func_362(uParam0, 0f);
}

bool func_264(var uParam0)
{
	return func_363(*uParam0, 1);
}

int func_265(var uParam0, float fParam1)
{
	if (!func_264(uParam0))
	{
		return 0;
	}
	if (func_364(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_267(int iParam0)
{
	return 1;
}

void func_268(int iParam0, int iParam1)
{
	func_188(&((Local_903.f_33.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_269(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_155((Local_38[iParam1 /*27*/])->f_6, iParam0);
}

void func_270(int iParam0)
{
	func_177(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_6), iParam0);
}

void func_271(int iParam0)
{
	func_188(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_6), iParam0);
}

void func_272()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar4 = func_273(iVar0);
		if (!func_274(iVar4))
		{
		}
		else if (!func_286(iVar4, iVar5))
		{
			if (func_275(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					func_365(iVar4);
					func_366(iVar4);
				}
			}
		}
		iVar0++;
	}
}

int func_273(int iParam0)
{
	return iParam0;
}

bool func_274(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_903.f_84.f_67, iParam0);
}

int func_275(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_903.f_84.f_81, iParam0))
	{
		return 0;
	}
	*uParam1 = &Local_903.f_84.f_77[iParam0 /*3*/];
	uParam1->f_1 = (Local_903.f_84.f_77[iParam0 /*3*/])->f_1;
	uParam1->f_2 = (Local_903.f_84.f_77[iParam0 /*3*/])->f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

void func_276(int iParam0)
{
}

bool func_277(int iParam0)
{
	return MISC::IS_BIT_SET(Local_903.f_84.f_66, iParam0);
}

bool func_278(int iParam0)
{
	return MISC::IS_BIT_SET((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_3, iParam0);
}

bool func_279(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(Local_903.f_84.f_73[iParam0]);
}

void func_280(int iParam0)
{
	MISC::CLEAR_BIT(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_3), iParam0);
}

bool func_281(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_9[iParam0]);
}

void func_282(int iParam0)
{
	SCRIPTS::_0xDE544B7EC0C187CC((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_9[iParam0]);
}

bool func_283(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_903.f_84.f_68, iParam0);
}

bool func_284(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_38[iParam1 /*27*/])->f_10, iParam0);
}

int func_285(int iParam0)
{
	return 0;
}

bool func_286(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_38[iParam1 /*27*/])->f_10.f_2, iParam0);
}

int func_287(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_367(uParam2, 1, iVar0);
	}
	if (!Global_1939168->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_368(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_369(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_370(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_371(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_372(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_20 && func_373(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_369(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_19)
		{
			if (func_374(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_375(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_376(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939168->f_23) < 300)
			{
				if (func_377(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_377(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_369(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_378(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939168->f_19 || uParam2->f_12 < 20f)
			{
				if (func_379(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_24 || Global_1939168->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_380(uParam2, 4000))
				{
					if ((func_381(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_382(uParam2, iParam0)) && func_383(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_381(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_382(uParam2, iParam0)) && func_383(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (Global_1939168->f_34 == 0)
			{
				if (Global_1939168->f_35 != 0)
				{
					if (func_384(iParam0, Global_1939168->f_35))
					{
						func_385();
						*iParam3 = 2;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_386(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_387() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_385();
						*iParam3 = 2;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1939168->f_36 != 0)
			{
				if (func_388())
				{
					if (func_384(iParam0, Global_1939168->f_36))
					{
						func_385();
						*iParam3 = 2;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_389(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_369(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_391(func_390(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_392(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*iParam3 = 1048576;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_393(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_394(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_395(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_396(uParam2, 4000))
				{
					if (func_397(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_369(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_398(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_369(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_399(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_369(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_288(var uParam0)
{
	return uParam0->f_22;
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	return 1;
}

void func_290(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	MISC::SET_BIT(&((Local_38[iVar0 /*27*/])->f_10), iParam0);
	if (bParam1)
	{
		(Local_38[iVar0 /*27*/])->f_10.f_11[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_291(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_400(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, 0, 0) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return 1;
			}
		}
	}
	if (func_401(*uParam0, &(Local_903.f_84.f_31), &uVar1, uParam0->f_2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_292(int iParam0)
{
	return MISC::IS_BIT_SET(Local_903.f_84.f_63, iParam0);
}

bool func_293(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_38[iParam1 /*27*/])->f_10.f_1, iParam0);
}

int func_294(int iParam0)
{
	return 1;
}

void func_295(int iParam0)
{
}

void func_296(int iParam0)
{
	MISC::SET_BIT(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_1), iParam0);
}

bool func_297(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, Local_903.f_84.f_75[iParam0], &uVar0);
	return !SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar0);
}

int func_298(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return 0;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(*iParam2))
	{
		return 0;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return 0;
	}
	return 1;
}

bool func_299(int iParam0, int iParam1)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(Local_903.f_84.f_71[iParam0], iParam1);
}

int func_300(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

void func_301(int iParam0, int iParam1)
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_9[iParam0], iParam1);
}

float func_302()
{
	int iVar0;
	float fVar1;

	if (Local_903.f_172.f_3 == 0)
	{
		Local_903.f_172.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_903.f_172.f_3)) * 0.001f);
	Local_903.f_172.f_3 = iVar0;
	return fVar1;
}

bool func_303(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_402(vVar0, vParam0) > func_402(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_304(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_403(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_404(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_405() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_305(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_148(uParam0);
	return 1;
}

int func_306(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

void func_307()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_406(0, 0);
	if (iVar0 != Local_903.f_195.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (func_316())
			{
				func_407(Local_903.f_195.f_3.f_1);
				func_151(Local_903.f_195.f_3.f_1);
			}
			Local_903.f_195.f_3 = iVar0;
			Local_903.f_195.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < func_149(1))
				{
					if (iVar1 == func_150(iVar2))
					{
						Local_903.f_195.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (func_316())
			{
				func_408(Local_903.f_195.f_3.f_1);
				func_317(Local_903.f_195.f_3.f_1);
			}
		}
		else
		{
			if (func_316())
			{
				func_407(Local_903.f_195.f_3.f_1);
				func_151(Local_903.f_195.f_3.f_1);
			}
			Local_903.f_195.f_3 = iVar0;
			Local_903.f_195.f_3.f_1 = -1;
		}
	}
}

bool func_308(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_155((Local_38[iParam1 /*27*/])->f_24, iParam0);
}

void func_309(int iParam0)
{
	func_188(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_24), iParam0);
}

void func_310(int iParam0)
{
	func_188(&(Local_903.f_195.f_1), iParam0);
}

bool func_311()
{
	return func_155(Local_0.f_35.f_2, 4);
}

int func_312()
{
	if (Local_903.f_195 != Local_0.f_35)
	{
		return !func_311();
	}
	return 0;
}

bool func_313(int iParam0)
{
	return func_155(Local_0.f_35.f_2, iParam0);
}

void func_314(var uParam0, var uParam1)
{
}

void func_315(int iParam0, var uParam1)
{
}

int func_316()
{
	if (Local_903.f_195.f_3.f_1 != -1)
	{
		return 1;
	}
	return 0;
}

void func_317(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_409(iParam0, iVar0, 1);
		iVar0++;
	}
	func_410(iParam0, 2);
}

void func_318(int iParam0)
{
	func_177(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_24), iParam0);
}

bool func_319(int iParam0)
{
	return func_155((Local_903.f_195.f_10[iParam0 /*29*/])->f_3, 1);
}

bool func_320(int iParam0, bool bParam1)
{
	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	return !func_411(iParam0, 4);
}

void func_321(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_327(iParam0);
	if (bParam1)
	{
		func_412(iParam0, 4);
		if (bParam3)
		{
			func_413(iVar0, 1);
		}
		func_414(iVar0, 1);
	}
	else
	{
		func_415(iParam0, 4);
		func_414(iVar0, 0);
	}
}

int func_322()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_323(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_327(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

int func_324(int iParam0, int iParam1, var uParam2)
{
	return 0;
}

void func_325(int iParam0, int iParam1)
{
}

void func_326(int iParam0)
{
	func_177(&(Local_903.f_195.f_1), iParam0);
}

int func_327(int iParam0)
{
	return iParam0;
}

void func_328(int iParam0)
{
	if (!func_416(iParam0))
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

int func_329(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_417(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_330(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_417(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_331(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_169(&Var1, uParam0))
	{
		iVar0 = ((func_418() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_332(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_2;
}

int func_333(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return 1;
		case joaat("dynamic"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

void func_334(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 11, &(Global_1051202->f_16[15]));
	func_419(uParam0, uParam0->f_1);
}

void func_335(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188(&(uParam0->f_1), 16384);
	}
	else
	{
		func_177(&(uParam0->f_1), 16384);
	}
}

void func_336(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188(&(uParam0->f_1), 2048);
	}
	else
	{
		func_177(&(uParam0->f_1), 2048);
	}
}

void func_337(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 16);
	}
	else
	{
		func_188(uParam0, 67108864);
		func_188(uParam0, 16);
	}
}

void func_338(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188(&(uParam0->f_1), 128);
	}
	else
	{
		func_177(&(uParam0->f_1), 128);
	}
}

void func_339(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 256);
	}
	else
	{
		func_188(uParam0, 256);
	}
}

void func_340(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_177(uParam0, 268435456);
	}
	else
	{
		func_188(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_177(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_188(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_177(uParam0, 536870912);
	}
	else
	{
		func_188(uParam0, 536870912);
	}
}

float func_341(var uParam0)
{
	return uParam0->f_25;
}

void func_342(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_343(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 1);
	}
	else
	{
		func_188(uParam0, 1);
	}
}

void func_344(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 512);
	}
	else
	{
		func_188(uParam0, 512);
	}
}

void func_345(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 2);
	}
	else
	{
		func_188(uParam0, 2);
	}
}

void func_346(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 8);
	}
	else
	{
		func_188(uParam0, 8);
	}
}

int func_347(int iParam0)
{
	return (Local_903.f_33.f_7[iParam0 /*11*/])->f_4;
}

float func_348(int iParam0)
{
	return (Local_903.f_33.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_349(int iParam0)
{
	return (Local_903.f_33.f_7[iParam0 /*11*/])->f_6;
}

int func_350(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_352(iParam1))
	{
		return 0;
	}
	iVar0 = func_420(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_351(int iParam0, bool bParam1)
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
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
	}
}

bool func_352(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_353(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_421(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_354(int iParam0)
{
	return (Local_903.f_33.f_7[iParam0 /*11*/])->f_10;
}

void func_355(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_356(int iParam0)
{
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		default:
			break;
	}
	return 0;
}

struct<2> func_358(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_359(int iParam0)
{
	if (!func_422(func_273(iParam0), Local_903.f_84.f_77[iParam0 /*3*/]))
	{
		MISC::CLEAR_BIT(&(Local_903.f_84.f_81), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_903.f_84.f_81), iParam0);
}

void func_360(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_150(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (func_423(iParam0, 8))
	{
		if (func_423(iParam0, 1))
		{
			MISC::_0xE98D55C5983F2509(iVar0);
			func_213(iParam0, 1);
		}
		func_151(iParam0);
		func_213(iParam0, 8);
	}
	if (func_423(iParam0, 1))
	{
		bVar1 = false;
		if (!func_424(iParam0))
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_390(PLAYER::PLAYER_ID())) > &Local_903.f_195.f_10[iParam0 /*29*/])
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			MISC::_0xE98D55C5983F2509(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
			}
			func_151(iParam0);
			func_213(iParam0, 1);
		}
		else
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 297, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
				}
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 315, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
				}
			}
			if (func_425(iParam0))
			{
				if (!func_423(iParam0, 2))
				{
					func_317(iParam0);
				}
			}
			else if (func_423(iParam0, 2))
			{
				func_151(iParam0);
			}
		}
	}
	else if (func_424(iParam0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_390(PLAYER::PLAYER_ID())) <= &Local_903.f_195.f_10[iParam0 /*29*/])
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (MISC::_0x870708A6E147A9AD(iVar0, (Local_903.f_195.f_10[iParam0 /*29*/])->f_1, &(Local_903.f_195.f_10[iParam0 /*29*/]), 0, (Local_903.f_195.f_10[iParam0 /*29*/])->f_2, 0, 0, 0, 0, 3))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES((Local_903.f_195.f_10[iParam0 /*29*/])->f_1))
					{
						PED::_0xFCA8FB9E15FA80D3(iVar0, MISC::GET_HASH_KEY((Local_903.f_195.f_10[iParam0 /*29*/])->f_1));
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
						PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
					}
					func_410(iParam0, 1);
				}
			}
		}
	}
}

void func_361(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (MISC::IS_BIT_SET((Local_38[iParam1 /*27*/])->f_10, iParam0))
	{
		if (&(Local_38[iParam1 /*27*/])->f_10.f_11[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(&(Local_0.f_30.f_1[iParam0])))
		{
			if (&Local_0.f_30.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_0.f_30.f_3[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(&((Local_38[iParam1 /*27*/])->f_10.f_11[iParam0]), &(Local_0.f_30.f_3[iParam0])))
		{
			Local_0.f_30.f_1[iParam0] = iVar0;
			Local_0.f_30.f_3[iParam0] = &(Local_38[iParam1 /*27*/])->f_10.f_11[iParam0];
		}
	}
}

void func_362(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_405() - fParam1);
	func_426(uParam0, 1);
	func_427(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_363(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_364(var uParam0)
{
	if (!func_264(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_428(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_405() - uParam0->f_1);
}

void func_365(int iParam0)
{
	MISC::SET_BIT(&((Local_38[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_10.f_2), iParam0);
}

void func_366(int iParam0)
{
}

void func_367(var uParam0, bool bParam1, int iParam2)
{
	func_429(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1939168->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1273882->f_11)
		{
			return;
		}
		if (Global_1273882->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_13 = Global_1939168->f_38;
	}
	else
	{
		uParam0->f_13 = func_430(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_177(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_431(1, 1))
						{
							func_177(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_431(1, 1) || *uParam0 & 8192 != 0))
				{
					func_188(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_432(uParam0))
			{
				uParam0->f_15 = func_387();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_387() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_433(uParam0);
}

int func_368(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case joaat("event_shocking_dead_body"):
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1939168->f_27)
			{
				return 0;
			}
			if (iVar2 == Global_1939168->f_26)
			{
				return 0;
			}
			if (!func_434(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_435(iParam0, iVar2) <= func_436(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_369(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_437(iParam2, 1, 1, 1, 0))
	{
		func_177(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_438(uParam1, 1);
	func_439();
}

int func_370(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_440(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_441(uParam1);
			if (func_442(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_443(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_438(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_444(uParam1))
						{
							func_438(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_371(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_445(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_441(uParam2);
		if (func_442(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_443(uParam2)
				{
					func_438(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_372(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1939168->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939168->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_434(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_443(uParam1)
		{
			fVar3 = func_441(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_373(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_446(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1273882->f_10)
		{
			if (!Global_1273882->f_11)
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
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
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
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_374(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_387();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_447(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) || Global_1939168->f_40 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && WEAPON::_0xEA522F991E120D45(Global_1939168->f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) || Global_1939168->f_40 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(iParam0) <= fVar2)
		{
			if (func_383(uParam2, iParam1))
			{
				func_438(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_376(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_288(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_383(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(iParam0) <= 1f)
				{
					func_438(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_377(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_448(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_438(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_438(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_449(iParam1, vVar0, vVar4))
					{
						func_438(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_438(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_449(iParam1, vVar0, vVar7))
					{
						func_438(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_378(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1939168->f_33)
	{
		if (!func_434(iParam0, uParam1, &(Global_1939168->f_28[iVar0])) || iParam0 == &Global_1939168->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_450(&(Global_1939168->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false), vVar9);
			if (func_451(&(Global_1939168->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1939168->f_28[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1939168->f_28[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_452(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_453(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_454(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_379(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("event_shocking_property_damage"):
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_380(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_387();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_455(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_456(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_382(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_383(var uParam0, int iParam1)
{
	if (func_457(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_35, iParam1))
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_458(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_385()
{
}

int func_386(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_459(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_387();
			return 1;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_460(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_387();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_387()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_388()
{
	if (Global_1939168->f_36 == 0)
	{
		return 0;
	}
	if (Global_1939168->f_36 == Global_1939168->f_34)
	{
		return 0;
	}
	if (Global_1939168->f_37 <= 0)
	{
		return 0;
	}
	if ((func_387() - Global_1939168->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_389(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_436(uParam0);
	if (uParam0->f_12 > func_341(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_461(iParam1);
	iVar1 = func_462(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_35, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_390(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_391(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_463(iParam0, vVar0, iParam2);
}

int func_393(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_464(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_394(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1939168->f_18)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_465(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			if (func_466(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_467(uParam1, iParam0))
					{
						if (func_460(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_395(int iParam0, var uParam1)
{
	if (!func_468(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_387();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_397(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_398(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_387();
	}
	else if (func_387() - uParam1->f_4) > func_469(uParam1)
	{
		return func_470(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_399(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1939168->f_34 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_400(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_903.f_84.f_69, iParam0);
}

int func_401(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_367(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1939168->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1939168->f_24 || Global_1939168->f_25)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_380(uParam1, 4000))
				{
					if ((func_381(iParam0, Global_1939168->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_382(uParam1, iParam0)) && func_383(uParam1, iParam0))
					{
						func_385();
						*uParam2 = 2;
						func_369(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_380(uParam1, 4000))
				{
					if ((func_381(iParam0, Global_1939168->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_382(uParam1, iParam0)) && func_383(uParam1, iParam0))
					{
						func_385();
						*uParam2 = 2;
						func_369(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			else if (Global_1939168->f_35 != 0)
			{
				if (Global_1939168->f_34 == 0)
				{
					if (func_384(iParam0, Global_1939168->f_35))
					{
						func_385();
						*uParam2 = 2;
						func_369(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			if (Global_1939168->f_36 != 0)
			{
				if (func_388())
				{
					if (func_384(iParam0, Global_1939168->f_36))
					{
						func_385();
						*uParam2 = 2;
						func_369(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (Global_1939168->f_19)
		{
			if (func_374(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_375(Global_35, iParam0, uParam1))
					{
						func_385();
						*uParam2 = 4;
						func_369(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_376(Global_35, iParam0, uParam1))
					{
						func_385();
						*uParam2 = 256;
						func_369(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_471(iParam0, uParam1))
			{
				func_385();
				*uParam2 = 131072;
				func_369(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_472(iParam0, uParam1))
			{
				func_385();
				*uParam2 = 262144;
				func_369(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_402(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_403(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_404(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_403(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_405() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_405()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_406(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_407(var uParam0)
{
}

void func_408(var uParam0)
{
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2))
	{
		return;
	}
	if (bParam2)
	{
		func_212((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
	if (((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 == 0)
	{
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_473(((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2, ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3, iVar0, ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4, ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5, 0, 0, ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_327(iVar1);
	func_474(iVar1, 18, 0, 1);
	func_474(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949749)[iVar2 /*23*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_155(((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 2))
	{
		func_475(iVar1, ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2, ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7, 1);
	}
	if (!func_155(((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 1))
	{
		if (func_155(((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 4))
		{
			if (func_322() < ((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7)
			{
				if (func_320(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0))
				{
					func_321(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0, 1, 1);
				}
			}
			else if (!func_320(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0))
			{
				func_321(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 1, 1, 1);
			}
		}
	}
	else
	{
		func_321(iVar1, 0, 1, 1);
	}
	(Local_903.f_195.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/] = iVar1;
}

void func_410(int iParam0, int iParam1)
{
	func_177(&((Local_903.f_195.f_10[iParam0 /*29*/])->f_3), iParam1);
}

bool func_411(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_412(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 - (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_413(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iParam0 /*23*/])->f_5 == 5 && !func_411(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_414(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949749)[iParam0 /*23*/])->f_3, bParam1);
	}
}

void func_415(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_416(int iParam0)
{
	return func_411(iParam0, 2);
}

int func_417(struct<2> Param0, int iParam2)
{
	if (!func_39(Param0))
	{
		return 0;
	}
	func_476(iParam2);
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

int func_418()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1232796->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_419(var uParam0, var uParam1)
{
}

int func_420(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

float func_421(float fParam0, float fParam1, float fParam2)
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

int func_422(var uParam0, var uParam1)
{
	return 0;
}

bool func_423(int iParam0, int iParam1)
{
	return func_155((Local_903.f_195.f_10[iParam0 /*29*/])->f_3, iParam1);
}

bool func_424(int iParam0)
{
	return !func_155((Local_903.f_195.f_10[iParam0 /*29*/])->f_3, 4);
}

int func_425(int iParam0)
{
	if (Local_903.f_195.f_3.f_1 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_427(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_428(var uParam0)
{
	return func_363(*uParam0, 2);
}

void func_429(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1939168->f_32);
	Global_1939168->f_21 = func_477();
	if (Global_1939168->f_21)
	{
		Global_1939168->f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1939168->f_38;
			}
			Global_1939168->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_478(&(Global_1939168->f_28), &(Global_1939168->f_33));
			Global_1939168->f_32 = iParam0;
			break;
		case 1:
			Global_1939168->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939168->f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1939168->f_38))
				{
					Global_1939168->f_24 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
				if (Global_1939168->f_40 == 1151374672)
				{
					Global_1939168->f_24 = WEAPON::_0x46D42883E873C1D7(Global_35) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1939168->f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1939168->f_40))
			{
				Global_1939168->f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40))
				{
					Global_1939168->f_19 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
				}
				else
				{
					Global_1939168->f_19 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
				}
				if (Global_1939168->f_19)
				{
					Global_1939168->f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1939168->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_430(int iParam0)
{
	return &(Global_1099293->f_372[iParam0 /*3*/]);
}

int func_431(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_479(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_432(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939168->f_34;
	if (func_28() == -1)
	{
		if (Global_1939168->f_34 == 0)
		{
			iVar0 = func_480(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_34) || !&Global_1954462->f_1616[4])
	{
		iVar0 = func_480(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_462(iVar0) == -1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_433(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_481(uParam0);
	}
}

int func_434(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_462(iParam2);
	}
	else
	{
		iVar1 = func_461(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_462(iParam0);
	}
	else
	{
		iVar0 = func_461(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_155(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_435(int iParam0, int iParam1)
{
	return func_458(iParam0, iParam1, 1, 1);
}

float func_436(var uParam0)
{
	return uParam0->f_28;
}

int func_437(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_438(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(uParam0, 134217728);
	}
	else
	{
		func_188(uParam0, 134217728);
	}
}

void func_439()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1939168->f_38) || 1151374672 == Global_1939168->f_38) && Global_1939168->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939168->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939168->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_458(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_482(iVar0, 0)))
		{
			if (func_483(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_441(var uParam0)
{
	return uParam0->f_17;
}

int func_442(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_155(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_443(var uParam0)
{
	return uParam0->f_18;
}

int func_444(var uParam0)
{
	return uParam0->f_19;
}

int func_445(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_482(iVar0, 0)))
		{
			if (func_484(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_446(bool bParam0, bool bParam1, bool bParam2)
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

float func_447(var uParam0)
{
	return uParam0->f_24;
}

int func_448(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_449(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_485(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_450(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939168->f_38 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_40))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1939168->f_40) || WEAPON::IS_WEAPON_BOW(Global_1939168->f_40))
			{
				return 1;
			}
		}
	}
	if (func_486(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_452(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_487(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_453(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_487(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_454(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_488(uParam0);
	if (func_487(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1939168->f_28[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1939168->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_455(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_456(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_489(iParam0, 1, 0, 0)) && !func_489(iParam0, 1, 0, 0) == 1151374672)
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_457(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_458(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_459(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_460(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_460(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_461(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_462(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_463(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_490(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_491(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_464(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1939168->f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1939168->f_34, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_455(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_458(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_458(iParam0, Global_1939168->f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1939168->f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_465(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_479(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_467(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_467(uParam1, iVar1))
				{
					if (func_460(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_466(var uParam0)
{
	return func_155(*uParam0, 131072);
}

int func_467(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_468(int iParam0)
{
	return 0;
}

int func_469(var uParam0)
{
	return uParam0->f_21;
}

int func_470(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_471(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_492(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_493(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1939168->f_38) || WEAPON::_0x506F1DE1BFC75304(Global_1939168->f_38))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_494())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_472(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_487(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_473(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_411(iVar0, 2))
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
				Jump @141; //curOff = 128
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_495(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_474(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_327(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949749)[iVar0 /*23*/])->f_3, iParam1, bParam2);
}

void func_475(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_327(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_476(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_477()
{
	if (func_496())
	{
		return 0;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1939168->f_38 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1954462->f_1616[3]);
	}
	return 0;
}

void func_478(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_479(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939168->f_26))
		{
			*iParam1 = Global_1939168->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939168->f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1939168->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939168->f_27))
			{
				*iParam2 = Global_1939168->f_27;
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
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_480(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1939168->f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_481(var uParam0)
{
	int iVar0;

	if (Global_1939168->f_32 == 0)
	{
		func_188(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939168->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939168->f_28[iVar0])))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Global_1939168->f_28[iVar0])))
				{
					func_177(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_482(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_483(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_484(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_484(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_485(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_486(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1939168->f_38) || Global_1939168->f_38 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1939168->f_38, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_487(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

float func_488(var uParam0)
{
	return uParam0->f_27;
}

int func_489(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_490(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_491(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_492(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_341(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_497(uParam0);
	}
	return func_341(uParam0);
}

float func_493(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_494()
{
	int iVar0;
	int iVar1;

	iVar0 = func_499(func_498());
	iVar1 = func_500(func_498());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

void func_495(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_413(iParam0, 1);
	func_414(iParam0, 1);
	func_415(iParam0, 128);
}

int func_496()
{
	switch (Global_1939168->f_38)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
		case 1652431022: /* GXTEntry: "Refined Binoculars" */
			return 1;
		default:
			break;
	}
	return 0;
}

var func_497(var uParam0)
{
	return uParam0->f_26;
}

int func_498()
{
	return &Global_1902688;
}

int func_499(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_500(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

