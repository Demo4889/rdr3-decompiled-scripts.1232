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
	int iLocal_14 = 0;
	char* sLocal_15 = NULL;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 24;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_118 = 20000;
	iLocal_121 = vScriptParam_0.x;
	iLocal_119 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_120 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_120)
		{
			iLocal_120 = 0;
			func_4(iLocal_121, &iLocal_119);
			switch (iLocal_119)
			{
				case 0:
					iLocal_119 = 1;
					break;
				case 1:
					func_5(iLocal_121);
					if (func_7(func_6(iLocal_121)))
					{
						func_8(func_6(iLocal_121), 4);
					}
					LAW::SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_9(iLocal_121));
					iVar1 = func_10(iLocal_121);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
					iLocal_119 = 2;
					break;
				case 2:
					if (func_11() || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_12(iLocal_121);
						iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
						iLocal_119 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_121);
						iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
						iLocal_119 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_121);
						iLocal_122 = (iLocal_118 + MISC::GET_GAME_TIMER());
						iLocal_119 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_121)))
					{
						if (func_17(func_6(iLocal_121), 4) && !iLocal_122 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_18(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
							{
								func_19(iLocal_121, 4);
								iLocal_122 = (iLocal_118 + MISC::GET_GAME_TIMER());
								iLocal_119 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_122 < MISC::GET_GAME_TIMER() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iLocal_121);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_121);
								func_28(iLocal_121);
								func_29();
								func_30();
								iLocal_119 = 8;
							}
							Jump @788; //curOff = 555
							func_31(iLocal_121);
							func_32();
							iLocal_119 = 9;
							Jump @788; //curOff = 572
							func_33(Global_1898004);
							func_34(iLocal_121, Global_1898004);
							iLocal_119 = 10;
							Jump @788; //curOff = 597
							func_35(iLocal_121);
							if (func_20() != -1)
							{
							}
							else
							{
								HUD::_0x8BC7C1F929D07BF3(1833957607);
							}
							func_19(iLocal_121, 8);
							if (func_36(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_37(32);
							}
							iLocal_119 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_121))
							{
								iLocal_120 = (1000 + MISC::GET_GAME_TIMER());
							}
							func_39(Global_1898004, iLocal_121);
							func_40(iLocal_121);
							func_19(iLocal_121, 8);
							if (func_41())
							{
								PED::SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1888801)[iLocal_121 /*35*/])->f_10);
							if (((*Global_1888801)[iLocal_121 /*35*/])->f_11 > 0f)
							{
								PED::SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1888801)[iLocal_121 /*35*/])->f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (((*Global_1888801)[iLocal_121 /*35*/])->f_12 == 0)
						{
						}
						else
						{
							PED::SET_SCENARIO_PED_DENSITY_THIS_FRAME(((*Global_1888801)[iLocal_121 /*35*/])->f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
			}
		}
	}

void func_1()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
}

int func_3()
{
	return 1;
}

void func_4(int iParam0, var uParam1)
{
	if (!func_36(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_37(16);
		return;
	}
	if (!func_43(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_37(16);
		return;
	}
	if (func_44(8))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_45(8);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(2))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_45(2);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(16))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_45(16);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(4))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 6;
			return;
		}
		else if (*uParam1 != 6)
		{
			func_45(4);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(1))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 2;
			return;
		}
		else if (*uParam1 != 2)
		{
			func_45(1);
			*uParam1 = 11;
			return;
		}
	}
}

void func_5(int iParam0)
{
}

int func_6(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_7(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_8(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

int func_9(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 38:
			iVar0 = -34953917;
			break;
		case 82:
			iVar0 = -1182515549;
			break;
		case 69:
			iVar0 = -180439396;
			break;
		case 61:
			iVar0 = -380981263;
			break;
		case 110:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 35:
			iVar0 = 503372696;
			break;
		case 105:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 76:
			iVar0 = -379634634;
			break;
		case 92:
			iVar0 = 288297518;
			break;
		case 56:
			iVar0 = 1812404612;
			break;
		case 78:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_11()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(787.8243f, 882.1937f, 119.7894f, 0f, 0f, 55f, 125.2023f, 100.3452f, 40f, "Carmody Dell - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Carmody Dell - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 806.7073f, 912.1846f, 117.3476f, 0f, 0f, -35.32174f, 53.76932f, 60.14007f, 23.00237f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 780.8397f, 929.7451f, 119.7875f, 0f, 0f, 55.18388f, 26.30651f, 11.24122f, 11.33113f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 771.6188f, 914.839f, 119.356f, 0f, 0f, -16.63371f, 8.920543f, 13.65767f, 15.37034f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 795.0371f, 944.3275f, 119.356f, 0f, 0f, -64.24297f, 8.920543f, 19.18642f, 15.37034f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 816.5428f, 873.1447f, 119.356f, 0f, 0f, -21.77554f, 8.920543f, 2.767935f, 15.37034f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 829.7242f, 889.6086f, 119.7875f, 0f, 0f, 55.18388f, 41.18428f, 11.24122f, 11.33113f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 769.6929f, 907.6835f, 120.974f, 0f, 0f, 0f, 4.125297f, 4.231483f, 6.104111f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 839.9313f, 911.4315f, 119.4895f, 0f, 0f, 0f, 8.364783f, 12.69234f, 6.104111f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 832.4132f, 889.8692f, 119.4895f, 0f, 0f, 143.33f, 8.994324f, 22.29211f, 6.104111f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 822.2815f, 932.1641f, 119.4895f, 0f, 0f, -126.8662f, 8.994324f, 31.08295f, 6.104111f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 819.2129f, 855.7402f, 118.2282f, 0f, 0f, -13.96608f, 5.387506f, 5.559112f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 820.7993f, 861.1673f, 118.2282f, 0f, 0f, -10.02887f, 5.561343f, 7.297987f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 769.4434f, 876.2131f, 120.0194f, 0f, 0f, -25.51114f, 10.21165f, 6.687877f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 766.2256f, 872.457f, 120.0194f, 0f, 0f, -25.51114f, 5.492983f, 4.760298f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 777.969f, 848.5886f, 120.9221f, 0f, 0f, -73.17738f, 11.36973f, 8.455206f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 772.6626f, 844.5665f, 118.6478f, 0f, 0f, -73.17738f, 6.30228f, 3.996295f, 8.634696f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Carmody Dell - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 797.8185f, 892.8757f, 117.3476f, 0f, 0f, -35.32174f, 90.11897f, 71.78452f, 23.00237f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 775.4374f, 864.7417f, 119.4895f, 0f, 0f, -125.795f, 37.58796f, 46.28559f, 7.161122f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 817.8414f, 923.5469f, 119.4895f, 0f, 0f, -125.795f, 37.58796f, 46.28559f, 7.161122f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Carmody Dell - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 797.2189f, 892.9724f, 119.4895f, 0f, 0f, -125.795f, 87.08194f, 67.53848f, 13.34678f);
		sLocal_15 = "CARMODY_DELL";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_18);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, 775.9428f, 849.0016f, 121.7797f);
		LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_14);
	}
	return 1;
}

void func_12(int iParam0)
{
	iParam0 = iParam0;
}

int func_13(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_14(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = iParam0;
	func_46(883522755, 0, 0);
	func_46(1038094132, 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(883522755, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1038094132, 0);
	iVar0 = 869;
	iVar1 = func_47(iVar0);
	if (func_48(iVar1, 0))
	{
		return;
	}
	if (func_49())
	{
		func_50(&uLocal_19, iVar1, "CRAWFORD_SR", 0);
		func_50(&uLocal_19, Global_35, "ARTHUR", 0);
	}
}

int func_15(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
}

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

int func_18(int iParam0)
{
	return func_51(iParam0, -1, -1, 0);
}

void func_19(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	iParam0 = iParam0;
}

void func_22()
{
}

int func_23(int iParam0, bool bParam1)
{
	if (func_52(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_53(5000))
		{
			return 1;
		}
	}
	switch (func_54(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_24()
{
}

void func_25()
{
	func_55(1, 1);
}

void func_26()
{
}

void func_27(int iParam0)
{
	iParam0 = iParam0;
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_20() != -1)
	{
		return;
	}
	iVar0 = 869;
	iVar1 = func_47(iVar0);
	if (!func_48(iVar1, 0))
	{
		func_56(iVar0, iLocal_16, 1);
		func_56(740, iLocal_16, 0);
		func_56(737, iLocal_16, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
		VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, func_57(740));
		VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, func_57(737));
		PED::SET_PED_OWNS_ANIMAL(func_47(iVar0), func_47(737), 0);
	}
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	iParam0 = iParam0;
}

void func_32()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_58(uParam1, iLocal_14, 1);
}

void func_35(int iParam0)
{
	if (!func_59(iParam0))
	{
		return;
	}
	func_60();
}

bool func_36(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

int func_38(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	func_61();
	func_62();
	if (func_49())
	{
		func_63();
	}
	return 0;
}

void func_39(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_64(&Global_1935630, 16384)) || func_64(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_65(uParam0, 1))
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
	bVar2 = func_66();
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
							if ((!func_67((*uParam0)[iVar3 /*3*/], 1) && func_68(iParam1)) && !func_69(iParam1, 16))
							{
								func_71(iParam1, func_70(), -1, 0, -1, 0);
								func_72((*uParam0)[iVar3 /*3*/], 1);
							}
							func_73(iParam1, 0);
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
	if (func_20() == -1)
	{
		if (func_74() != bVar0)
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
			func_75();
			func_76(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_77(bVar0);
	if (func_20() == -1)
	{
		func_79((iParam1 == func_78() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_41()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_80(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_81();
		LAW::SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_19(iLocal_121, 2048);
		if (func_7(func_70()))
		{
			func_8(func_70(), 8);
		}
		func_82(iLocal_121, 4);
		func_82(iLocal_121, 8);
		func_77(0);
		if (func_20() == -1)
		{
			func_79(0);
		}
		func_83(iLocal_121);
		func_32();
		return 0;
	}
	else
	{
		func_84(iLocal_121);
		func_85(iLocal_121);
		func_86(iLocal_121);
		if (!func_87(iLocal_121, 0))
		{
			return 0;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_43(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	return func_88(iParam0, 8);
}

bool func_44(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_45(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

int func_46(int iParam0, int iParam1, bool bParam2)
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

int func_47(int iParam0)
{
	int iVar0;

	iVar0 = func_57(iParam0);
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

int func_48(int iParam0, bool bParam1)
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

int func_49()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_89(uParam0, iParam1, sParam2))
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

int func_51(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_59(iParam0))
	{
		return 1;
	}
	if (func_88(iParam0, 16))
	{
		return 1;
	}
	if (func_90(iParam0) && !func_91(iParam0))
	{
	}
	if (func_92(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_93(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_93(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_90(iParam0) || func_91(iParam0)) || func_94(&Global_1897950))
			{
				func_95(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_52(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_53(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_54(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_55(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		func_96(iParam0);
	}
	func_97(iParam0);
	Global_1392240->f_146 = 0;
	func_98(iParam0, 512);
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_99(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

int func_57(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_58(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_100(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_59(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_101(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_61()
{
	bool bVar0;

	if (func_102(1))
	{
		return;
	}
	if (func_103(1, 2))
	{
		bVar0 = true;
	}
	if (func_104(94, 0) && !func_105(94))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((func_106(869) && func_106(740)) && func_106(737))
		{
			func_107(1);
		}
		else
		{
			func_108(1);
		}
	}
}

void func_62()
{
	int iVar0;
	bool bVar1;

	if (func_109(1, 4))
	{
		return;
	}
	if (func_109(1, 32))
	{
		return;
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(func_110(1));
	bVar1 = false;
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return;
	}
	if (func_111(94) || func_105(94))
	{
		LAW::_REMOVE_GUARD_ZONE(sLocal_15);
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_16))
		{
			VOLUME::_0x998202B206872672(iLocal_16);
			VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
			VOLUME::DELETE_VOLUME(iLocal_16);
		}
	}
	if (func_103(1, 8))
	{
		func_112(269047710, 1, 0);
		func_113(&iVar0, "_car_house_int_after_ransack", &bVar1);
		func_114(&iVar0, "_car_house_int_before_ransack", &bVar1);
		func_114(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
		func_114(&iVar0, "_car_house_int_night", &bVar1);
		func_114(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_day", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
		func_115("hmrb_crd_interior_night");
		func_115("hmrb_crd_interior_day");
		func_116("hmrb_crd_interior_ransacked");
	}
	else if (((func_111(94) || func_105(94)) || func_109(1, 8)) || func_109(1, 16))
	{
		if (func_109(1, 8) || ((!func_117(1, -2147483648) && CLOCK::GET_CLOCK_HOURS() >= 6) && CLOCK::GET_CLOCK_HOURS() < 21))
		{
			func_112(269047710, 0, 0);
			func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
			func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
			func_114(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
			func_114(&iVar0, "_car_house_int_night", &bVar1);
			func_114(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
			func_113(&iVar0, "_car_house_int_day", &bVar1);
			func_113(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
			func_113(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
			func_113(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
			func_113(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
			func_115("hmrb_crd_interior_ransacked");
			func_115("hmrb_crd_interior_night");
			func_116("hmrb_crd_interior_day");
		}
		else
		{
			func_112(269047710, 0, 0);
			func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
			func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
			func_114(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
			func_113(&iVar0, "_car_house_int_night", &bVar1);
			func_113(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
			func_113(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
			func_114(&iVar0, "_car_house_int_day", &bVar1);
			func_114(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
			func_114(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
			func_114(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
			func_115("hmrb_crd_interior_ransacked");
			func_115("hmrb_crd_interior_day");
			func_116("hmrb_crd_interior_night");
		}
	}
	else if (CLOCK::GET_CLOCK_HOURS() >= 6 && CLOCK::GET_CLOCK_HOURS() < 21)
	{
		func_112(269047710, 0, 0);
		func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
		func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
		func_114(&iVar0, "_car_house_int_night", &bVar1);
		func_114(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
		func_113(&iVar0, "_car_house_int_day", &bVar1);
		func_113(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
		func_113(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
		func_113(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
		func_113(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
		func_115("hmrb_crd_interior_ransacked");
		func_115("hmrb_crd_interior_night");
		func_116("hmrb_crd_interior_day");
	}
	else
	{
		func_112(269047710, 0, 0);
		func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
		func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
		func_113(&iVar0, "_car_house_int_night", &bVar1);
		func_113(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
		func_113(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
		func_114(&iVar0, "_car_house_int_day", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
		func_115("hmrb_crd_interior_ransacked");
		func_115("hmrb_crd_interior_day");
		func_116("hmrb_crd_interior_night");
	}
	if (bVar1)
	{
		func_118(1, 8);
		func_118(1, 16);
		func_119(1, 4);
	}
	else
	{
		func_118(1, 8);
		func_118(1, 16);
		func_119(1, 32);
	}
}

void func_63()
{
	int iVar0;
	int iVar1;

	if (!func_120(94))
	{
		return;
	}
	iVar0 = 869;
	iVar1 = func_47(iVar0);
	if (func_48(iVar1, 0))
	{
		return;
	}
	if (func_121(iVar1, Global_35, 1, 15f, 0))
	{
		if (func_122() || func_123())
		{
			if ((!func_124() && func_125(Global_35, iLocal_17, 1, 0)) && func_126())
			{
				func_127(0, 0, 0);
				func_129(&uLocal_19, func_128("RH0_AMB_SDEAD"), 0, -1, 0, 0);
				func_130();
			}
		}
		else if ((!func_131() && !func_122()) && !func_123())
		{
			if ((!func_132() && func_125(Global_35, iLocal_18, 1, 0)) && !func_125(Global_35, iLocal_17, 1, 0))
			{
				func_127(0, 0, 0);
				func_129(&uLocal_19, func_128("RHMR0_CD_RETURN"), 0, -1, 0, 0);
				func_133();
			}
		}
	}
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_66()
{
	return func_64(&Global_1935630, 4096);
}

bool func_67(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_68(int iParam0)
{
	if (!func_59(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_134(iParam0));
}

bool func_69(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_70()
{
	return Global_1897952->f_41;
}

void func_71(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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

	if (!func_135())
	{
		return;
	}
	sVar1 = func_136(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_137(iParam4))
	{
		if (func_59(iParam0))
		{
			iParam4 = func_138(func_6(iParam0));
		}
		else
		{
			iParam4 = func_138(iParam1);
		}
	}
	if (func_137(iParam4))
	{
		iVar3 = func_139(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_141(func_140(iParam2));
	}
	else if ((func_142(iParam1, 2) || func_143(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_59(iParam0) && func_88(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_145(func_144());
		iVar5 = func_146(func_144());
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
				fVar7 = func_147(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_148(&sVar6, 109029619), sVar9, func_148(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_147(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_148(&sVar6, 109029619), func_148(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_149(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_73(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_150(128))
	{
		return;
	}
	if (!func_151(iParam0))
	{
		return;
	}
	if (func_88(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_152(Global_1935630, 8192);
	func_154(func_153(-1532769513, -36357794), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_154(func_153(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_154(func_153(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_154(func_153(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_154(func_153(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_154(func_153(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_154(func_153(-1532769513, -910218296), 1);
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
		func_19(iParam0, 64);
	}
}

bool func_74()
{
	return (Global_1894899 & 1 != 0 && func_155() != -1);
}

void func_75()
{
	if (!func_156(&Global_1327479))
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
	func_157(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_76(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_158() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_156(iVar1) && !func_159(iVar1, iParam2)) && (!bParam3 || !func_160(iVar1))) && (!bParam4 || !func_161(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_162(iVar0);
			}
		}
		iVar0++;
	}
}

void func_77(bool bParam0)
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

int func_78()
{
	return Global_40.f_4283.f_1;
}

void func_79(bool bParam0)
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

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_81()
{
}

void func_82(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_83(int iParam0)
{
	func_163(iLocal_18);
	func_163(iLocal_17);
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_16))
	{
		VOLUME::_0x998202B206872672(iLocal_16);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
		VOLUME::DELETE_VOLUME(iLocal_16);
	}
	func_118(1, 32);
	func_118(1, 4);
}

void func_84(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1935369->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_164(iVar0);
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_165(iVar0);
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_166(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_167(&((Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1]));
		(Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1] = 0;
		iVar1++;
	}
}

int func_87(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_59(iParam0))
	{
		return 1;
	}
	if (func_92(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_168(Global_1897950->f_1, 16))
			{
				func_169(Global_1897950->f_1, 0);
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

bool func_88(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_89(var uParam0, int iParam1, char* sParam2)
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

int func_90(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	return func_88(iParam0, 33554432);
}

int func_91(int iParam0)
{
	if (!func_59(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_92(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_20() != -1;
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
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_93(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, 2))
	{
		return 0;
	}
	if (func_168(iParam0, 32) && !bParam1)
	{
		func_171(iParam0, _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(func_170(iParam0)));
		if (func_20() == -1)
		{
			if (func_168(iParam0, 2048))
			{
				_NAMESPACE48::REVIVE_PERSCHAR(func_57(iParam0));
				func_172(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_57(iParam0));
		}
		return 0;
	}
	if (!func_173(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_57(iParam0)))
	{
		func_172(iParam0, 128);
		return 1;
	}
	func_171(iParam0, _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(func_170(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_57(iParam0));
	if (func_168(iParam0, 2048))
	{
		_NAMESPACE48::REVIVE_PERSCHAR(func_57(iParam0));
		func_172(iParam0, 2048);
	}
	return 1;
}

void func_96(int iParam0)
{
	func_174(iParam0, 4);
	func_176((Global_1392240->f_1[iParam0 /*18*/])->f_4, 58, *(Global_1392240->f_1[iParam0 /*18*/]), func_175(iParam0));
	if (MAP::DOES_BLIP_EXIST((Global_1392240->f_1[iParam0 /*18*/])->f_5))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE((Global_1392240->f_1[iParam0 /*18*/])->f_5, func_175(iParam0));
	}
}

int func_97(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	if (func_178(iParam0))
	{
		return 0;
	}
	if (((!func_105(94) && !func_111(94)) && !func_105(95)) && !func_111(95))
	{
	}
	func_174(iParam0, 1);
	return 1;
}

void func_98(int iParam0, int iParam1)
{
	if (func_117(iParam0, iParam1))
	{
		return;
	}
	(Global_1392240->f_1[iParam0 /*18*/])->f_14 = ((Global_1392240->f_1[iParam0 /*18*/])->f_14 || iParam1);
}

bool func_99(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_93(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_57(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_47(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(func_57(iParam0));
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_101(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_102(int iParam0)
{
	return (iLocal_117 && iParam0) != 0;
}

bool func_103(int iParam0, int iParam1)
{
	return ((Global_40.f_9422[iParam0 /*7*/])->f_5 && iParam1) != 0;
}

int func_104(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_20() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_179(iParam0))
	{
		return 0;
	}
	return func_180(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_106(int iParam0)
{
	int iVar0;

	if (func_168(iParam0, 32))
	{
		return 1;
	}
	if (!func_93(iParam0))
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(iVar0);
	func_181(iParam0, 32);
	return 1;
}

void func_107(int iParam0)
{
	if (func_102(iParam0))
	{
		return;
	}
	iLocal_117 = (iLocal_117 || iParam0);
}

void func_108(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	iLocal_117 = (iLocal_117 - (iLocal_117 && iParam0));
}

bool func_109(int iParam0, int iParam1)
{
	return ((Global_1392240->f_1[iParam0 /*18*/])->f_15 && iParam1) != 0;
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1789f, -81.2f, 56.8f;
		case 1:
			return 777.0469f, 848.3318f, 117.9097f;
		case 2:
			return 1319.072f, -2281.907f, 51.31572f;
		case 3:
			return -415.0638f, 1752.658f, 217.6675f;
		case 4:
			return 1623.045f, -364.0234f, 75.39715f;
		case 5:
			return 2820.866f, 275.3142f, 51.84647f;
		case 6:
			return 2990.484f, 2188.289f, 165.7838f;
		case 7:
			return -1817.371f, 657.6644f, 130.8627f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_111(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_179(iParam0))
	{
		return 0;
	}
	return func_182(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_112(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_183(1497516462);
			func_184(2016141805);
			func_184(1010885152);
			func_184(-502324015);
			break;
		case 2016141805:
			func_184(1497516462);
			func_183(2016141805);
			func_184(1010885152);
			func_184(-502324015);
			break;
		case 1010885152:
			func_184(1497516462);
			func_184(2016141805);
			func_183(1010885152);
			func_184(-502324015);
			break;
		case -502324015:
			func_184(1497516462);
			func_184(2016141805);
			func_184(1010885152);
			func_183(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_184(-538889627);
			func_184(-538880323);
			func_184(-1056767524);
			func_183(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_185();
			func_183(iParam0);
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
			func_186();
			func_183(iParam0);
			break;
		case 2019386373:
			func_184(-664252410);
			func_184(2109952320);
			func_183(2019386373);
			break;
		case -664252410:
			func_184(2019386373);
			func_184(2109952320);
			func_183(-664252410);
			break;
		case 2109952320:
			func_184(2019386373);
			func_184(-664252410);
			func_183(2109952320);
			break;
		case -1674179981:
			func_184(-1835851517);
			func_184(-1838352012);
			func_183(-1674179981);
			break;
		case -1835851517:
			func_184(-1674179981);
			func_184(-1838352012);
			func_183(-1835851517);
			break;
		case -1838352012:
			func_184(-1674179981);
			func_184(-1835851517);
			func_183(-1838352012);
			break;
		case -1717960576:
			func_184(210001842);
			func_183(-1717960576);
			break;
		case 210001842:
			func_184(-1717960576);
			func_183(210001842);
			break;
		case -150493654:
			func_184(-1271608261);
			func_184(1846061697);
			func_184(-1145519186);
			func_183(-150493654);
			break;
		case -1271608261:
			func_184(-150493654);
			func_184(1846061697);
			func_184(-1145519186);
			func_183(-1271608261);
			break;
		case 1846061697:
			func_184(-150493654);
			func_184(-1271608261);
			func_184(-1145519186);
			func_183(1846061697);
			break;
		case -1145519186:
			func_184(-150493654);
			func_184(-1271608261);
			func_184(1846061697);
			func_183(-1145519186);
			break;
		case 1766284049:
			func_184(280705402);
			func_184(1926308480);
			func_183(1766284049);
			break;
		case 280705402:
			func_184(1766284049);
			func_184(1926308480);
			func_183(280705402);
			break;
		case 1926308480:
			func_184(1766284049);
			func_184(280705402);
			func_183(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_184(439465264);
				func_183(1609506757);
			}
			else
			{
				func_184(1609506757);
				func_184(439465264);
			}
			break;
		case 439465264:
			if (func_187(1609506757))
			{
				if (bParam1)
				{
					func_183(439465264);
				}
				else
				{
					func_184(439465264);
				}
			}
			break;
		case 1822001510:
			func_184(-1612662716);
			func_183(1822001510);
			break;
		case -1612662716:
			func_184(1822001510);
			func_183(-1612662716);
			break;
		case 1306158345:
			func_184(1952610440);
			func_184(-223469678);
			func_184(-404698347);
			func_184(1517904467);
			func_183(1306158345);
			break;
		case 1952610440:
			func_184(1306158345);
			func_184(-223469678);
			func_184(-404698347);
			func_184(1517904467);
			func_183(1952610440);
			break;
		case -223469678:
			func_184(1306158345);
			func_184(1952610440);
			func_184(-404698347);
			func_184(1517904467);
			func_183(-223469678);
			break;
		case -404698347:
			func_184(1306158345);
			func_184(1952610440);
			func_184(-223469678);
			func_184(1517904467);
			func_183(-404698347);
			break;
		case 1517904467:
			func_184(1306158345);
			func_184(1952610440);
			func_184(-223469678);
			func_184(-404698347);
			func_183(1517904467);
			break;
		case 1376646519:
			func_184(931649776);
			func_184(-434590080);
			func_184(1743048395);
			func_184(449774763);
			func_183(1376646519);
			break;
		case 931649776:
			func_184(1376646519);
			func_184(-434590080);
			func_184(1743048395);
			func_184(449774763);
			func_183(931649776);
			break;
		case -434590080:
			func_184(1376646519);
			func_184(931649776);
			func_184(1743048395);
			func_184(449774763);
			func_183(-434590080);
			break;
		case 1743048395:
			func_184(1376646519);
			func_184(931649776);
			func_184(-434590080);
			func_184(449774763);
			func_183(1743048395);
			break;
		case 449774763:
			func_184(1376646519);
			func_184(931649776);
			func_184(-434590080);
			func_184(1743048395);
			func_183(449774763);
			break;
		case -1414537028:
			func_184(38162571);
			func_184(1350391819);
			func_184(54073871);
			func_183(-1414537028);
			break;
		case 38162571:
			func_184(-1414537028);
			func_184(1350391819);
			func_184(54073871);
			func_183(38162571);
			break;
		case 1350391819:
			func_184(-1414537028);
			func_184(38162571);
			func_184(54073871);
			func_183(1350391819);
			break;
		case 54073871:
			func_184(-1414537028);
			func_184(38162571);
			func_184(1350391819);
			func_183(54073871);
			break;
		case 198200492:
			func_183(198200492);
			func_184(-1124061431);
			func_184(52706132);
			func_184(-259123672);
			break;
		case -1124061431:
			func_184(198200492);
			func_183(-1124061431);
			func_184(52706132);
			func_184(-259123672);
			break;
		case 52706132:
			func_184(198200492);
			func_184(-1124061431);
			func_183(52706132);
			func_184(-259123672);
			break;
		case -259123672:
			func_184(198200492);
			func_184(-1124061431);
			func_184(52706132);
			func_183(-259123672);
			break;
		case -919512195:
			func_183(-919512195);
			func_184(-1925798111);
			func_184(420709909);
			func_184(1703426636);
			break;
		case -1925798111:
			func_183(-1925798111);
			func_184(-919512195);
			func_184(420709909);
			func_184(1703426636);
			break;
		case 420709909:
			func_183(420709909);
			func_184(-919512195);
			func_184(-1925798111);
			func_184(1703426636);
			break;
		case 1703426636:
			func_183(1703426636);
			func_184(-919512195);
			func_184(-1925798111);
			func_184(420709909);
			break;
		case -1223121209:
			func_183(-1223121209);
			func_184(630808005);
			break;
		case 630808005:
			func_183(630808005);
			func_184(-1223121209);
			break;
		case 1453909576:
			func_183(1453909576);
			func_184(1643531967);
			break;
		case 1643531967:
			func_183(1643531967);
			func_184(1453909576);
			break;
		case 0:
			func_183(0);
			func_184(473295046);
			func_184(-1738165526);
			break;
		case 473295046:
			func_183(473295046);
			func_184(0);
			func_184(-1738165526);
			break;
		case -1738165526:
			func_183(-1738165526);
			func_184(0);
			func_184(473295046);
			Jump @2851; //curOff = 2443
			func_183(932909855);
			func_184(2051822093);
			Jump @2851; //curOff = 2464
			func_183(2051822093);
			func_184(932909855);
			Jump @2851; //curOff = 2485
			func_183(405586984);
			func_184(1509509592);
			func_184(-959357075);
			func_184(-1311865656);
			Jump @2851; //curOff = 2524
			func_183(1509509592);
			func_184(405586984);
			func_184(-959357075);
			func_184(-1311865656);
			Jump @2851; //curOff = 2563
			func_183(-959357075);
			func_184(1509509592);
			func_184(405586984);
			func_184(-1311865656);
			Jump @2851; //curOff = 2602
			func_183(-1311865656);
			func_184(1509509592);
			func_184(-959357075);
			func_184(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				func_183(-524145696);
			}
			else
			{
				func_184(-524145696);
			}
			func_184(1626481264);
			func_184(282809459);
			Jump @2851; //curOff = 2688
			func_183(282809459);
			func_184(1626481264);
			func_184(-524145696);
			Jump @2851; //curOff = 2718
			func_183(1626481264);
			func_184(-524145696);
			func_184(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				func_183(885203519);
			}
			else
			{
				func_184(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				func_183(-1080627546);
			}
			else
			{
				func_184(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!func_187(iParam0))
				{
					func_183(iParam0);
				}
			}
			else if (func_187(iParam0))
			{
				func_184(iParam0);
			}
		}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		return;
	}
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, 0);
	*iParam2 = 1;
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		return;
	}
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, 1);
	*iParam2 = 1;
}

void func_115(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_116(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

bool func_117(int iParam0, int iParam1)
{
	return ((Global_1392240->f_1[iParam0 /*18*/])->f_14 && iParam1) != 0;
}

void func_118(int iParam0, int iParam1)
{
	if (!func_109(iParam0, iParam1))
	{
		return;
	}
	(Global_1392240->f_1[iParam0 /*18*/])->f_15 = ((Global_1392240->f_1[iParam0 /*18*/])->f_15 - ((Global_1392240->f_1[iParam0 /*18*/])->f_15 && iParam1));
}

void func_119(int iParam0, int iParam1)
{
	if (func_109(iParam0, iParam1))
	{
		return;
	}
	(Global_1392240->f_1[iParam0 /*18*/])->f_15 = ((Global_1392240->f_1[iParam0 /*18*/])->f_15 || iParam1);
}

int func_120(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_179(iParam0))
	{
		return 0;
	}
	return func_188(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_121(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_189(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_190(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_122()
{
	return func_117(1, 4194304);
}

bool func_123()
{
	return func_117(1, 2097152);
}

bool func_124()
{
	return func_191(1, 16);
}

bool func_125(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_126()
{
	return func_192(1, 4096);
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

Vector3 func_128(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_129(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_193(vParam1, uParam0);
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

void func_130()
{
	func_194(1, 16);
}

bool func_131()
{
	return func_103(1, 131072);
}

bool func_132()
{
	return func_191(1, 8);
}

void func_133()
{
	func_194(1, 8);
}

int func_134(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_195())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_135()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_196())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_197(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_136(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_198(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_200(func_199(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_201(iParam0) || func_202(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || uParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_137(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_139(int iParam0)
{
	if (!func_137(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_142(int iParam0, int iParam1)
{
	if (!func_7(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_143(int iParam0, int iParam1)
{
	if (!func_137(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_144()
{
	return &Global_1899515;
}

int func_145(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_146(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_147(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_148(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_203(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_149(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::UI_FEED_POST_LOCATION_SHARD(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_150(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_151(int iParam0)
{
	int iVar0;

	if (func_201(iParam0))
	{
		if (!func_202(45))
		{
			return 0;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_204())
	{
		if (!func_188(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_153(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_154(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_155()
{
	return Global_1894899->f_2;
}

bool func_156(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_157(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_158()
{
	return Global_1310750->f_16037;
}

bool func_159(int iParam0, int iParam1)
{
	if (!func_156(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_160(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	if (func_205(64) && func_206(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_161(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_162(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_156(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_207(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_163(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_164(int iParam0)
{
	func_208((Global_1935369->f_5[iParam0 /*11*/])->f_6, 1);
	func_209((Global_1935369->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2((Global_1935369->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::RELEASE_LOCK_VOLUME((Global_1935369->f_5[iParam0 /*11*/])->f_8);
		(Global_1935369->f_5[iParam0 /*11*/])->f_8 = 0;
	}
	func_210(iParam0, 8192);
	func_210(iParam0, 16384);
	func_210(iParam0, 32768);
	func_210(iParam0, 131072);
	func_210(iParam0, 16777216);
	func_210(iParam0, 524288);
	func_210(iParam0, 1048576);
	(Global_1935369->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1935369->f_5[&Global_1935369 /*11*/])->f_9 = 0;
	Global_1935369->f_5[iParam0 /*11*/] = 0;
	(Global_1935369->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1935369->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1935369->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1935369->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1935369->f_5[iParam0 /*11*/])->f_7 = 0;
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_93((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_211((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_212((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
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
	func_213((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_214(iParam0, 536870912);
	iVar1 = func_215(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_167(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
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
	func_216(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_217(iParam0, 0);
}

int func_166(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((Global_1392240->f_1[iVar0 /*18*/])->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(int iParam0)
{
	if (func_218(iParam0) && func_219())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_168(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_93(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_169(int iParam0, bool bParam1)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, 2))
	{
		return 0;
	}
	if (func_170(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_57(iParam0)))
	{
		return 1;
	}
	if (func_168(iParam0, 1) && !bParam1)
	{
		func_181(iParam0, 128);
		return 1;
	}
	func_172(iParam0, 129);
	func_220(iParam0);
	_NAMESPACE48::DELETE_PERSCHAR(func_57(iParam0));
	func_171(iParam0, 0);
	return 1;
}

int func_170(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_171(int iParam0, int iParam1)
{
	if (!func_93(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_172(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_173(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

void func_174(int iParam0, int iParam1)
{
	if (func_192(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9422[iParam0 /*7*/])->f_4 = ((Global_40.f_9422[iParam0 /*7*/])->f_4 || iParam1);
}

char* func_175(int iParam0)
{
	if (func_192(iParam0, 4))
	{
		return "PROC_BLIP_HROB2";
	}
	switch (iParam0)
	{
		case 0:
			return "PROC_BLIP_HROB_AB";
		case 1:
			return "PROC_BLIP_HROB_CD";
		case 2:
			return "PROC_BLIP_HROB_CJ";
		case 3:
			return "PROC_BLIP_HROB_CP";
		case 4:
			return "PROC_BLIP_HROB_LN";
		case 5:
			return "PROC_BLIP_HROB_VH";
		case 6:
			return "PROC_BLIP_HROB_RS";
		case 7:
			return "PROC_BLIP_HROB_WC";
		default:
			break;
	}
	return "PROC_BLIP_HROB";
}

void func_176(int iParam0, int iParam1, vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_221(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36307)
	{
		if ((func_222(iVar1) == iParam0 && func_223(iVar1) == iParam1) && func_224(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar1])))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Global_36307[iVar1]), sParam5);
			}
			return;
		}
		iVar1++;
	}
}

bool func_177(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 8);
}

bool func_178(int iParam0)
{
	return func_192(iParam0, 1);
}

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_225(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_181(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_182(int iParam0)
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
		iVar0 = func_226(iParam0);
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

void func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_227(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_227(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_185()
{
	func_184(-939420910);
	func_184(-1187950766);
	func_184(356365161);
	func_184(753127042);
	func_184(-2038424081);
	func_184(1884271742);
	func_184(459290420);
}

void func_186()
{
	func_184(704802028);
	func_184(588987611);
	func_184(2008888900);
	func_184(1649996811);
	func_184(227918160);
	func_184(168171957);
	func_184(1193080109);
	func_184(-491981251);
	func_184(-639037538);
	func_184(-618620429);
}

bool func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_227(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_188(int iParam0, bool bParam1)
{
	switch (func_225(iParam0))
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

bool func_189(int iParam0, int iParam1, float fParam2)
{
	return func_228(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_190(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)
{
	return ((Global_40.f_9422[iParam0 /*7*/])->f_6 && iParam1) != 0;
}

bool func_192(int iParam0, int iParam1)
{
	return ((Global_40.f_9422[iParam0 /*7*/])->f_4 && iParam1) != 0;
}

void func_193(var uParam0, var uParam1, var uParam2, var uParam3)
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

void func_194(int iParam0, int iParam1)
{
	if (func_191(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9422[iParam0 /*7*/])->f_6 = ((Global_40.f_9422[iParam0 /*7*/])->f_6 || iParam1);
}

int func_195()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if (func_20() != 0)
	{
		return 1;
	}
	return 1;
}

int func_197(int iParam0, bool bParam1, int iParam2)
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
		if (func_229())
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
		iVar0 = func_230(&(Global_1898164->f_1[0 /*5*/]));
		if (func_179(iVar0) && func_231(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_232(&(Global_1898164->f_1[0 /*5*/])))
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

var func_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_199(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_233(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	if (!func_234(iParam0))
	{
		return 0;
	}
	return func_235(iParam0);
}

char* func_203(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_204()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_205(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_206(int iParam0)
{
	return func_159(iParam0, Global_1310750->f_16072 | 64);
}

void func_207(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_208(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_209(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_210(int iParam0, int iParam1)
{
	func_236(&((Global_1935369->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_211(int iParam0)
{
	if (!func_93(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_212(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_93(iParam0))
	{
		return;
	}
	if (!func_168(iParam0, 1))
	{
		return;
	}
	if (!func_168(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_211(iParam0)) && func_237(iParam0))
	{
		return;
	}
	func_172(iParam0, 1);
	func_220(iParam0);
	if (func_238(func_170(iParam0)))
	{
		iVar0 = func_57(iParam0);
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
		func_172(iParam0, 16);
	}
	if (func_168(iParam0, 128) && !bParam3)
	{
		func_169(iParam0, 0);
	}
}

void func_213(int iParam0, bool bParam1)
{
	if (!func_239(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_240(iParam0, 1024))
		{
			func_241(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_240(iParam0, 1024))
	{
		func_242(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_243(iParam0);
}

void func_214(int iParam0, int iParam1)
{
	if (!func_244(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

var func_215(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_216(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_217(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_244(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

int func_218(int iParam0)
{
	if (func_245(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_219()
{
	return 1;
}

void func_220(int iParam0)
{
	int iVar0;

	if (!func_93(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_221(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_222(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_223(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

int func_224(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_2;
	}
	return (Global_42605[iParam0 /*4*/])->f_2;
}

int func_225(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_226(iParam0);
}

int func_226(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_246(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_227(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

bool func_228(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_229()
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

int func_230(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_248(func_247(iParam0));
}

bool func_231(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_232(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_233(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_249(iParam3, &vVar0, &Var3, &fVar6);
	if (func_250(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_236(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_237(int iParam0)
{
	if (!func_93(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

bool func_238(int iParam0)
{
	return iParam0 != 0;
}

bool func_239(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_240(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_241(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_242(int iParam0, int iParam1)
{
	if (!func_239(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_243(int iParam0)
{
	func_252(func_251(iParam0));
}

bool func_244(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_245(int iParam0)
{
	return iParam0 != 0;
}

int func_246(int iParam0)
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

int func_247(int iParam0)
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

int func_248(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_249(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_250(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_251(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_252(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

