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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	bool bLocal_36 = false;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iLocal_39 = 20000;
	iLocal_42 = vScriptParam_0.x;
	iLocal_40 = vScriptParam_0.z;
	bLocal_44 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_41 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_41)
		{
			iLocal_41 = 0;
			func_5(iLocal_42, &iLocal_40);
			switch (iLocal_40)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_43 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_40 = 1;
					}
					else
					{
						iLocal_40 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_43 < MISC::GET_GAME_TIMER())
					{
						bLocal_44 = false;
						iLocal_40 = 2;
					}
					break;
				case 2:
					func_6(iLocal_42);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_42)))
					{
						func_11(func_9(iLocal_42), 4);
					}
					LAW::SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_42));
					Global_1896608 = -1;
					iLocal_43 = (iLocal_39 + MISC::GET_GAME_TIMER());
					iLocal_40 = 3;
					break;
				case 3:
					if (func_13() || iLocal_43 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_42);
						iLocal_43 = (iLocal_39 + MISC::GET_GAME_TIMER());
						iLocal_40 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_42) || iLocal_43 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_42);
						iLocal_43 = (MISC::GET_GAME_TIMER() + iLocal_39);
						iLocal_40 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_42) || iLocal_43 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_42);
						iLocal_43 = (iLocal_39 + MISC::GET_GAME_TIMER());
						iLocal_40 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_42)))
					{
						if (func_19(func_9(iLocal_42), 4) && !iLocal_43 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_42) || iLocal_43 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_42, 4);
								iLocal_43 = (iLocal_39 + MISC::GET_GAME_TIMER());
								iLocal_40 = 8;
							}
							Jump @813; //curOff = 529
							func_22(iLocal_42);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_42);
							func_30(iLocal_42);
							func_31();
							func_32();
							iLocal_40 = 9;
							Jump @813; //curOff = 597
							func_33(iLocal_42);
							func_34();
							iLocal_40 = 10;
							Jump @813; //curOff = 614
							func_35(Global_1896662);
							func_36(iLocal_42, Global_1896662);
							iLocal_40 = 11;
							Jump @813; //curOff = 639
							func_37(iLocal_42);
							func_21(iLocal_42, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_40 = 12;
							Jump @813; //curOff = 689
							if (func_40(iLocal_42))
							{
								iLocal_41 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(Global_1896662, iLocal_42);
							func_42(iLocal_42);
							func_21(iLocal_42, 8);
							if (func_43())
							{
								PED::SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_42 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_42 /*36*/])->f_12 > 0f)
							{
								PED::SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_42 /*36*/])->f_12);
							}
							Jump @813; //curOff = 790
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_42 /*36*/])->f_13 != 0)
						{
							PED::SET_SCENARIO_PED_DENSITY_THIS_FRAME(((*Global_1887327)[iLocal_42 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (func_45() != -1)
						{
							func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
			}
		}
	}

int func_1()
{
	if (!bLocal_44)
	{
		if (&Global_1051089)
		{
			bLocal_44 = true;
			return 1;
		}
		if (func_47() && func_48())
		{
			bLocal_44 = true;
			return 1;
		}
		return 0;
	}
	if (&Global_1051089)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	bLocal_44 = false;
	return 0;
}

void func_2()
{
	int iVar0;

	if (func_45() != -1)
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
		while (!func_44(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
}

int func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return 1;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893575->f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893575->f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1099293->f_644)
	{
		Global_1099293->f_644 = 1;
	}
}

void func_8()
{
	if (!Global_1070355->f_22101)
	{
		Global_1070355->f_22101 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	(*Global_1896610)[iParam0 /*2*/] = (Global_1896610[iParam0 /*2*/] || iParam1);
}

int func_12(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 40:
			iVar0 = -34953917;
			break;
		case 87:
			iVar0 = -1182515549;
			break;
		case 74:
			iVar0 = -180439396;
			break;
		case 66:
			iVar0 = -380981263;
			break;
		case 116:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 37:
			iVar0 = 503372696;
			break;
		case 111:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 81:
			iVar0 = -379634634;
			break;
		case 98:
			iVar0 = 288297518;
			break;
		case 60:
			iVar0 = 1812404612;
			break;
		case 83:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_13()
{
	iLocal_21 = ((*Global_1887327)[98 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 23);
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3023.974f, 562.0062f, 46.82927f, 0f, 0f, 79.71242f, 12.599f, 9.960065f, 6.735788f, "Van Horn - m_volFence");
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3027.401f, 562.4042f, 44.687f, 0f, 0f, 80f, 1.736885f, 1f, 2f, "Van Horn - m_volFencePrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10087);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volPostOfficeOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_24, 2986.668f, 572.391f, 44.68746f, 0f, 0f, 80f, 6.513f, 5.709f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_24, 2985.922f, 568.154f, 44.68746f, 0f, 0f, 80f, 2.17f, 2.622f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_24, 2987.423f, 576.661f, 44.68746f, 0f, 0f, 80f, 2.509f, 2.264f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_24, 2982.536f, 570.44f, 44.68746f, 0f, 0f, 80f, 2.957f, 1.909f, 2.553f);
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 2985.951f, 568.536f, 44.902f, 0f, 0f, 80f, 1.441f, 1.703f, 2.553f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 2987.352f, 576.3314f, 44.90187f, 0f, 0f, -99.75122f, 1.441f, 1.921f, 2.55285f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2986.637f, 572.4257f, 44.90187f, 0f, 0f, 80f, 6.131599f, 5.291456f, 2.55285f, "Van Horn - m_volPostOfficeOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_24, 10090);
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2982.608f, 570.333f, 44.68746f, 0f, 0f, 80f, 3.388f, 2.263f, 2.553f, "Van Horn - m_volPostOfficeMute");
	func_53();
	iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2986.621f, 572.416f, 45.094f, 0f, 0f, 80f, 6.05f, 5.4f, 3f, "Van horn - m_volStationTheft");
	iLocal_31 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2947.408f, 545.9362f, 50.72883f, 0f, 0f, 0f, 17.35913f, 18.45897f, 4.232503f, "Van Horn- Resident Toughts Guard Volume");
	iLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volHorseShopPen Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_34, 2979.276f, 779.6296f, 52.62945f, 0f, 0f, 0f, 40.47127f, 19.50671f, 7.453903f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_34, 2985.944f, 797.0881f, 52.62945f, 0f, 0f, 0f, 23.67008f, 19.46324f, 7.453903f);
	func_54(259147332, 1);
	if (func_45() != -1)
	{
		iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2966.958f, 798.031f, 51.94672f, 0f, 0f, 0f, 13.5283f, 8.991134f, 3.747737f, "VanHorn Horse Shop - m_volHorseShop");
	}
	else
	{
		iLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Vanhorn Horse Shop - m_volHorseShop Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_32, 2967.159f, 798.5253f, 51.745f, 0f, 0f, 0f, 14.3611f, 10.48136f, 4.225f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_32, 2970.102f, 792.5105f, 51.65219f, 0f, 0f, 0f, 8.344481f, 5.59843f, 2.959558f);
		iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2959.127f, 795.8362f, 51.00545f, 0f, 0f, 0f, 4.348893f, 4.095809f, 6.315661f, "Vanhorn Horse Shop - m_volHorseShopOutsideDoor");
		func_55(9, iLocal_33);
	}
	return 1;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

int func_15(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_16(int iParam0)
{
	func_56(-306246697, 1, 0);
}

int func_17(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (func_45() == -1)
	{
		HUD::TEXT_BLOCK_REQUEST("SCVHAUD");
		HUD::TEXT_BLOCK_REQUEST("VANRGAU");
		HUD::TEXT_BLOCK_REQUEST("REDDVHT");
		HUD::TEXT_BLOCK_REQUEST("VHTRDAU");
		HUD::TEXT_BLOCK_REQUEST("RESFVHT");
		if (!HUD::TEXT_BLOCK_IS_LOADED("SCVHAUD"))
		{
			return 0;
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED("VANRGAU"))
		{
			return 0;
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED("REDDVHT"))
		{
			return 0;
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED("VHTRDAU"))
		{
			return 0;
		}
		if (!HUD::TEXT_BLOCK_IS_LOADED("RESFVHT"))
		{
			return 0;
		}
	}
	return iVar0;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896610[iParam0 /*2*/] && iParam1) != 0;
}

bool func_20(int iParam0)
{
	return func_57(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (Global_7888[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1070355->f_17941[iParam0 /*11*/] = (Global_1070355->f_17941[iParam0 /*11*/] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

int func_24(int iParam0, bool bParam1)
{
	if (func_58(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_59(5000))
		{
			return 1;
		}
	}
	switch (func_61(func_60(0)))
	{
		case -1:
			return 0;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_25()
{
}

void func_26()
{
}

void func_27()
{
	func_62(0, 2946.662f, 523.323f, 46.02f, iLocal_28, 98);
}

void func_28()
{
}

void func_29(int iParam0)
{
	func_63(4, iLocal_22, iParam0, iLocal_23, 0, 44, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_64(4, -919742804, 0, 0);
	func_64(4, -1653762302, 0, 0);
	func_64(4, 877945562, 0, 0);
	func_65(4, 8192);
	func_66(4, 0);
	func_63(9, iLocal_32, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	if (!func_67() && func_68())
	{
		func_64(9, 1471789970, 0, 0);
		func_64(9, -2124017858, 0, 0);
	}
	else
	{
		func_64(9, 1471789970, -1f, 1);
		func_64(9, -2124017858, 1f, 1);
	}
	func_65(9, 536870912);
	func_65(9, 16384);
	func_65(9, 32768);
	func_65(9, 1);
	func_65(9, 8388608);
	func_65(9, 8192);
	func_65(9, 4);
	func_65(9, 16777216);
	func_65(9, 67108864);
	func_63(2, iLocal_24, iParam0, iLocal_25, iLocal_26, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_66(2, 0);
	func_69();
	func_70(94);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	func_71(453, iLocal_34, 1);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_72(0.8f, 0.2f, 0f, 0f);
}

void func_34()
{
	if (!Global_1893575->f_186)
	{
		VEHICLE::SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893575->f_182, Global_1893575->f_183, Global_1893575->f_184, Global_1893575->f_185);
	}
}

void func_35(var uParam0)
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

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_73(uParam1, iLocal_21, 1);
	func_73(uParam1, iLocal_22, 2);
}

void func_37(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_75();
	func_76(0, -771890971);
	func_76(3, -1440548693);
	func_76(4, -1440548693);
}

bool func_38(int iParam0)
{
	return (Global_1893575 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893575 = (&Global_1893575 - (Global_1893575 && iParam0));
}

int func_40(int iParam0)
{
	func_77();
	func_78(&uLocal_37, &iLocal_38, 3018.27f, 558.1332f, 44.5092f, 2136683606);
	if (func_79(&bLocal_36))
	{
		if (bLocal_36)
		{
			func_80(1477864640, 1, 0, 0, 0, 0, 0, 0);
			func_54(1673476194, 1);
			func_54(17298161, 1);
		}
	}
	return 0;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_81(&Global_1939168, 32768)) || func_81(&Global_1939168, 16777216))
	{
		return;
	}
	if (func_82(uParam0, 1))
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
	bVar2 = func_83();
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
							if ((!func_84((*uParam0)[iVar3 /*3*/], 1) && func_85(iParam1)) && !func_86(iParam1, 16))
							{
								func_88(iParam1, func_87(), -1, 0, -1, 0);
								func_89((*uParam0)[iVar3 /*3*/], 1);
							}
							func_90(iParam1, 0);
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
	func_91(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_43()
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
	if (func_92(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_93();
		LAW::SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_42, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-663946200, 1055032020))
		{
			switch (iLocal_42)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 135:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_94(iLocal_42, 0), 1);
					break;
			}
		}
		if (func_10(func_87()))
		{
			func_11(func_87(), 8);
		}
		func_95(iLocal_42, 4);
		func_95(iLocal_42, 8);
		func_91(0);
		if (func_45() == -1)
		{
			func_96(0);
		}
		func_97(iLocal_42);
		func_34();
		return 0;
	}
	else if (func_45() == -1)
	{
		func_98(iLocal_42);
		func_99(iLocal_42);
		if (!func_100(iLocal_42, 0))
		{
			return 0;
		}
	}
	else if (!func_101(iLocal_42))
	{
		return 0;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_45()
{
	return Global_1572887->f_13;
}

void func_46()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_47()
{
	if (Global_1572887->f_342.f_3 > 0)
	{
		return 1;
	}
	if (Global_1572887->f_342.f_4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, 0, 0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-701235215, -1, 0, 0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-814065802, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_49(bool bParam0, bool bParam1)
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

int func_50(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	return func_102(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893575->f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893575->f_7 = (Global_1893575->f_7 - (Global_1893575->f_7 && iParam0));
}

void func_53()
{
	iLocal_28 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_28, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_28, 2939.048f, 523.346f, 45.61858f, 0f, 0f, -180f, 6.016271f, 9.883f, 3.143f);
	iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van horn - m_volSaloonTheft");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 2946.748f, 523.316f, 45.072f, 0f, 0f, 80f, 10.1f, 14f, 3.347f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 2939.048f, 523.346f, 45.61858f, 0f, 0f, -180f, 6.016271f, 9.883f, 3.143f);
}

void func_54(int iParam0, int iParam1)
{
	func_80(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_55(int iParam0, int iParam1)
{
	(Global_1915170->f_3[iParam0 /*447*/])->f_32 = iParam1;
}

void func_56(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_103(1497516462);
			func_104(2016141805);
			func_104(1010885152);
			func_104(-502324015);
			break;
		case 2016141805:
			func_104(1497516462);
			func_103(2016141805);
			func_104(1010885152);
			func_104(-502324015);
			break;
		case 1010885152:
			func_104(1497516462);
			func_104(2016141805);
			func_103(1010885152);
			func_104(-502324015);
			break;
		case -502324015:
			func_104(1497516462);
			func_104(2016141805);
			func_104(1010885152);
			func_103(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_104(-538889627);
			func_104(-538880323);
			func_104(-1056767524);
			func_103(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_105();
			func_103(iParam0);
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
			func_106();
			func_103(iParam0);
			break;
		case 2019386373:
			func_104(-664252410);
			func_104(2109952320);
			func_103(2019386373);
			break;
		case -664252410:
			func_104(2019386373);
			func_104(2109952320);
			func_103(-664252410);
			break;
		case 2109952320:
			func_104(2019386373);
			func_104(-664252410);
			func_103(2109952320);
			break;
		case -1674179981:
			func_104(-1835851517);
			func_104(-1838352012);
			func_103(-1674179981);
			break;
		case -1835851517:
			func_104(-1674179981);
			func_104(-1838352012);
			func_103(-1835851517);
			break;
		case -1838352012:
			func_104(-1674179981);
			func_104(-1835851517);
			func_103(-1838352012);
			break;
		case -1717960576:
			func_104(210001842);
			func_103(-1717960576);
			break;
		case 210001842:
			func_104(-1717960576);
			func_103(210001842);
			break;
		case -150493654:
			func_104(-1271608261);
			func_104(1846061697);
			func_104(-1145519186);
			func_103(-150493654);
			break;
		case -1271608261:
			func_104(-150493654);
			func_104(1846061697);
			func_104(-1145519186);
			func_103(-1271608261);
			break;
		case 1846061697:
			func_104(-150493654);
			func_104(-1271608261);
			func_104(-1145519186);
			func_103(1846061697);
			break;
		case -1145519186:
			func_104(-150493654);
			func_104(-1271608261);
			func_104(1846061697);
			func_103(-1145519186);
			break;
		case 1766284049:
			func_104(280705402);
			func_104(1926308480);
			func_103(1766284049);
			break;
		case 280705402:
			func_104(1766284049);
			func_104(1926308480);
			func_103(280705402);
			break;
		case 1926308480:
			func_104(1766284049);
			func_104(280705402);
			func_103(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_104(439465264);
				func_103(1609506757);
			}
			else
			{
				func_104(1609506757);
				func_104(439465264);
			}
			break;
		case 439465264:
			if (func_107(1609506757))
			{
				if (bParam1)
				{
					func_103(439465264);
				}
				else
				{
					func_104(439465264);
				}
			}
			break;
		case 1822001510:
			func_104(-1612662716);
			func_103(1822001510);
			break;
		case -1612662716:
			func_104(1822001510);
			func_103(-1612662716);
			break;
		case 1306158345:
			func_104(1952610440);
			func_104(-223469678);
			func_104(-404698347);
			func_104(1517904467);
			func_103(1306158345);
			break;
		case 1952610440:
			func_104(1306158345);
			func_104(-223469678);
			func_104(-404698347);
			func_104(1517904467);
			func_103(1952610440);
			break;
		case -223469678:
			func_104(1306158345);
			func_104(1952610440);
			func_104(-404698347);
			func_104(1517904467);
			func_103(-223469678);
			break;
		case -404698347:
			func_104(1306158345);
			func_104(1952610440);
			func_104(-223469678);
			func_104(1517904467);
			func_103(-404698347);
			break;
		case 1517904467:
			func_104(1306158345);
			func_104(1952610440);
			func_104(-223469678);
			func_104(-404698347);
			func_103(1517904467);
			break;
		case 1376646519:
			func_104(931649776);
			func_104(-434590080);
			func_104(1743048395);
			func_104(449774763);
			func_103(1376646519);
			break;
		case 931649776:
			func_104(1376646519);
			func_104(-434590080);
			func_104(1743048395);
			func_104(449774763);
			func_103(931649776);
			break;
		case -434590080:
			func_104(1376646519);
			func_104(931649776);
			func_104(1743048395);
			func_104(449774763);
			func_103(-434590080);
			break;
		case 1743048395:
			func_104(1376646519);
			func_104(931649776);
			func_104(-434590080);
			func_104(449774763);
			func_103(1743048395);
			break;
		case 449774763:
			func_104(1376646519);
			func_104(931649776);
			func_104(-434590080);
			func_104(1743048395);
			func_103(449774763);
			break;
		case -1414537028:
			func_104(38162571);
			func_104(1350391819);
			func_104(54073871);
			func_103(-1414537028);
			break;
		case 38162571:
			func_104(-1414537028);
			func_104(1350391819);
			func_104(54073871);
			func_103(38162571);
			break;
		case 1350391819:
			func_104(-1414537028);
			func_104(38162571);
			func_104(54073871);
			func_103(1350391819);
			break;
		case 54073871:
			func_104(-1414537028);
			func_104(38162571);
			func_104(1350391819);
			func_103(54073871);
			break;
		case 198200492:
			func_103(198200492);
			func_104(-1124061431);
			func_104(52706132);
			func_104(-259123672);
			break;
		case -1124061431:
			func_104(198200492);
			func_103(-1124061431);
			func_104(52706132);
			func_104(-259123672);
			break;
		case 52706132:
			func_104(198200492);
			func_104(-1124061431);
			func_103(52706132);
			func_104(-259123672);
			break;
		case -259123672:
			func_104(198200492);
			func_104(-1124061431);
			func_104(52706132);
			func_103(-259123672);
			break;
		case -919512195:
			func_103(-919512195);
			func_104(-1925798111);
			func_104(420709909);
			func_104(1703426636);
			break;
		case -1925798111:
			func_103(-1925798111);
			func_104(-919512195);
			func_104(420709909);
			func_104(1703426636);
			break;
		case 420709909:
			func_103(420709909);
			func_104(-919512195);
			func_104(-1925798111);
			func_104(1703426636);
			break;
		case 1703426636:
			func_103(1703426636);
			func_104(-919512195);
			func_104(-1925798111);
			func_104(420709909);
			break;
		case -1223121209:
			func_103(-1223121209);
			func_104(630808005);
			break;
		case 630808005:
			func_103(630808005);
			func_104(-1223121209);
			break;
		case 1453909576:
			func_103(1453909576);
			func_104(1643531967);
			break;
		case 1643531967:
			func_103(1643531967);
			func_104(1453909576);
			break;
		case 0:
			func_103(0);
			func_104(473295046);
			func_104(-1738165526);
			break;
		case 473295046:
			func_103(473295046);
			func_104(0);
			func_104(-1738165526);
			break;
		case -1738165526:
			func_103(-1738165526);
			func_104(0);
			func_104(473295046);
			break;
		case 932909855:
			func_103(932909855);
			func_104(2051822093);
			break;
		case 2051822093:
			func_103(2051822093);
			func_104(932909855);
			break;
		case 405586984:
			func_103(405586984);
			func_104(1509509592);
			func_104(-959357075);
			func_104(-1311865656);
			break;
		case 1509509592:
			func_103(1509509592);
			func_104(405586984);
			func_104(-959357075);
			func_104(-1311865656);
			break;
		case -959357075:
			func_103(-959357075);
			func_104(1509509592);
			func_104(405586984);
			func_104(-1311865656);
			break;
		case -1311865656:
			func_103(-1311865656);
			func_104(1509509592);
			func_104(-959357075);
			func_104(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_103(-524145696);
			}
			else
			{
				func_104(-524145696);
			}
			func_104(1626481264);
			func_104(282809459);
			break;
		case 282809459:
			func_103(282809459);
			func_104(1626481264);
			func_104(-524145696);
			break;
		case 1626481264:
			func_103(1626481264);
			func_104(-524145696);
			func_104(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_103(885203519);
			}
			else
			{
				func_104(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_103(-1080627546);
			}
			else
			{
				func_104(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_103(-510945576);
			}
			else
			{
				func_104(-510945576);
				func_108(385812466);
				func_108(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_103(iParam0);
			}
			else
			{
				func_104(iParam0);
			}
			break;
	}
}

int func_57(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_74(iParam0))
	{
		return 1;
	}
	if (func_102(iParam0, 16))
	{
		return 1;
	}
	if (func_109(iParam0) && !func_110(iParam0))
	{
	}
	if (func_111(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_112(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_112(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896608 < iVar0 || &Global_1896608 > iVar1)
		{
			Global_1896608 = iVar0;
		}
		while (true)
		{
			if ((!func_109(iParam0) || func_110(iParam0)) || func_113(&Global_1896608))
			{
				func_114(&Global_1896608, 0);
			}
			Global_1896608 = &Global_1896608 + 1;
			iVar2++;
			if (&Global_1896608 > iVar1)
			{
				Global_1896608 = -1;
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

bool func_58(var uParam0)
{
	return (Global_1939168 && uParam0) != 0;
}

bool func_59(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1900853;
}

struct<2> func_60(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_61(var uParam0, var uParam1)
{
	return uParam0;
}

void func_62(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_115(vParam1))
	{
		return;
	}
	func_116(iParam0);
	(Global_1938932->f_5[iParam0 /*11*/])->f_1 = { vParam1 };
	(Global_1938932->f_5[iParam0 /*11*/])->f_4 = iParam4;
	(Global_1938932->f_5[iParam0 /*11*/])->f_5 = iParam5;
	(Global_1938932->f_5[iParam0 /*11*/])->f_6 = func_117(iParam5, iParam0);
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_67() && func_118()))
	{
		if (func_119(255))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(iParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
			{
				func_120(1, 1);
			}
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_121(iParam0);
	Global_1051387->f_69[iParam0 /*76*/] = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_18 = func_122(iParam2, iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_25 = iParam1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { VOLUME::GET_VOLUME_COORDS(iParam1) };
	(Global_1051387->f_69[iParam0 /*76*/])->f_26 = iParam3;
	(Global_1051387->f_69[iParam0 /*76*/])->f_28 = iParam4;
	(Global_1051387->f_69[iParam0 /*76*/])->f_2 = iParam2;
	(Global_1051387->f_69[iParam0 /*76*/])->f_64 = func_123((Global_1051387->f_69[iParam0 /*76*/])->f_18);
	(Global_1051387->f_69[iParam0 /*76*/])->f_73 = iParam9;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_124(iParam0);
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_10 = fParam8;
	(Global_1051387->f_69[iParam0 /*76*/])->f_14 = iParam5;
	if (bParam6)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_25, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_26, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_26, 0, 0, 0, -1, -1, 0);
	}
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_25);
	func_125(iParam0, 4);
	func_126(iParam0);
}

void func_64(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_127(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0] = func_128(iParam1, 0, 0);
	if (func_129(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
	{
		if (!func_130(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
		{
			func_80(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 0, fParam2, bParam3, 1, 0, 0, 0);
		}
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_48++;
}

void func_65(int iParam0, int iParam1)
{
	func_131(&((Global_1051387->f_69[iParam0 /*76*/])->f_50), iParam1);
}

int func_66(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;

	if ((func_132(iParam0, 16384) || func_132(iParam0, 32768)) || func_115((Global_1051387->f_69[iParam0 /*76*/])->f_3))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
		(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = 0;
		return 0;
	}
	iVar0 = func_122(func_133(), iParam0);
	if ((!bParam1 && func_134(iVar0, &iVar1, &uVar2, &vVar3)) || (bParam1 && func_135(iVar0, &iVar1, &uVar2, &vVar3)))
	{
		func_136(iParam0, iVar1, vVar3, uVar2, 0);
		(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { vVar3 };
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = iVar1;
	}
	return (Global_1051387->f_69[iParam0 /*76*/])->f_6;
}

int func_67()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return func_137(func_60(0));
}

void func_69()
{
	int iVar0;
	var uVar1;

	func_138(30);
	func_139(30);
	func_140(30);
	func_141(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_6))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1051387->f_3582[iVar0 /*19*/])->f_6);
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_6 = uVar1;
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_13))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1051387->f_3582[iVar0 /*19*/])->f_13);
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_13 = uVar1;
		if (MAP::DOES_BLIP_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_17))
		{
			MAP::REMOVE_BLIP(&((Global_1051387->f_3582[iVar0 /*19*/])->f_17));
		}
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_8))
		{
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_8, true, true);
			}
			PED::DELETE_PED(&((Global_1051387->f_3582[iVar0 /*19*/])->f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_15))
		{
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_15))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_15, true, true);
			}
			PED::DELETE_PED(&((Global_1051387->f_3582[iVar0 /*19*/])->f_15));
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_1 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_5 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_8 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_15 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_7 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_14 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_9 = -1;
		Global_1051387->f_3582[iVar0 /*19*/] = -1;
		iVar0++;
	}
	if (func_142(30, 262144))
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[30 /*76*/])->f_22);
		func_143(30, 262144);
	}
}

void func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	int iVar6;
	bool bVar7;

	iVar0 = 0;
	while (iVar0 < 4 && &Global_1051387->f_3582[iVar0 /*19*/] != -1)
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return;
	}
	(Global_1051387->f_3582[iVar0 /*19*/])->f_1 = 0;
	Global_1051387->f_3582[iVar0 /*19*/] = iParam0;
	if (func_134(&(Global_1051387->f_3582[iVar0 /*19*/]), &iVar1, &uVar2, &vVar3))
	{
		(Global_1051387->f_3582[iVar0 /*19*/])->f_6 = func_144(iVar1, vVar3, uVar2, 0, 0, 0);
		(Global_1051387->f_3582[iVar0 /*19*/])->f_2 = { vVar3 };
		TASK::_0xA7479FB665361EDB((Global_1051387->f_3582[iVar0 /*19*/])->f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0((Global_1051387->f_3582[iVar0 /*19*/])->f_6, 0);
	}
	iVar6 = func_145(&(Global_1051387->f_3582[iVar0 /*19*/]));
	bVar7 = iVar6 != -1;
	if (bVar7)
	{
		(Global_1051387->f_3582[iVar0 /*19*/])->f_9 = iVar6;
		if (func_134(iVar6, &iVar1, &uVar2, &vVar3))
		{
			(Global_1051387->f_3582[iVar0 /*19*/])->f_13 = func_144(iVar1, vVar3, uVar2, 0, 0, 0);
			(Global_1051387->f_3582[iVar0 /*19*/])->f_10 = { vVar3 };
			TASK::_0xA7479FB665361EDB((Global_1051387->f_3582[iVar0 /*19*/])->f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0((Global_1051387->f_3582[iVar0 /*19*/])->f_13, 0);
		}
	}
	(Global_1051387->f_3582[iVar0 /*19*/])->f_5 = func_123(&(Global_1051387->f_3582[iVar0 /*19*/]));
	if (!func_142(30, 4))
	{
		func_125(30, 4);
		func_126(30);
	}
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_146(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(iParam1, iVar0, iParam2);
	return 1;
}

void func_72(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893575->f_182 = fParam0;
	Global_1893575->f_183 = fParam1;
	Global_1893575->f_184 = fParam2;
	Global_1893575->f_185 = fParam3;
}

void func_73(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_148(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_74(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_75()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_149(iVar0))
		{
			(*Global_1900684)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_76(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return;
	}
	if (!func_150(iParam1))
	{
		return;
	}
	(*Global_1900684)[iParam0] = iParam1;
}

void func_77()
{
	if (func_45() != -1)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_31))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(VOLUME::_0x7FD78DFD0C5D7B9B(iLocal_31)))
	{
		func_151();
	}
}

void func_78(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!*uParam0)
	{
		if (BUILTIN::VDIST(Global_36, vParam2) > 100f)
		{
			return;
		}
		if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
		{
			*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		}
		ITEMSET::_CLEAR_ITEMSET(*iParam1);
		iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam2, 1f, *iParam1, 3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar2) == iParam5)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
					*uParam0 = 1;
				}
			}
			iVar1++;
		}
	}
}

int func_79(bool bParam0)
{
	if (func_152())
	{
		if (!*bParam0)
		{
			*bParam0 = 1;
			return 1;
		}
	}
	else if (*bParam0)
	{
		*bParam0 = 0;
		return 1;
	}
	return 0;
}

void func_80(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_128(iParam0, 0, 0);
	if (func_129(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_153(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_154(iParam0, 1);
			}
			else
			{
				func_155(iParam0, 1);
			}
		}
		else
		{
			func_156(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_157())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_83()
{
	return func_81(&Global_1939168, 8192);
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_85(int iParam0)
{
	if (!func_74(iParam0))
	{
		return false;
	}
	return ((((*Global_1887327)[iParam0 /*36*/])->f_21 == 1 || ((*Global_1887327)[iParam0 /*36*/])->f_21 == 2) && !func_158(iParam0));
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1887327)[iParam0 /*36*/])->f_22 && iParam1) != 0;
}

int func_87()
{
	return Global_1896610->f_41;
}

void func_88(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_159())
	{
		return;
	}
	sVar1 = func_160(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_161(iParam4))
	{
		if (func_74(iParam0))
		{
			iParam4 = func_162(func_9(iParam0));
		}
		else
		{
			iParam4 = func_162(iParam1);
		}
	}
	if (func_161(iParam4))
	{
		iVar3 = func_163(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_165(func_164(iParam2));
	}
	else if ((func_166(iParam1, 2) || func_167(iParam4, 2)) && !Global_1893575->f_9)
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
		Global_1893575->f_9 = 1;
	}
	else if ((func_74(iParam0) && func_102(iParam0, 16777216)) && !Global_1893575->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893575->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893575->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893575->f_9 = 1;
	}
	else
	{
		iVar4 = func_169(func_168());
		iVar5 = func_170(func_168());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
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
				fVar7 = func_171(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_172(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_172(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_171(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_172(&cVar6, joaat("COLOR_PURE_WHITE")), func_172(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893575->f_9 = 0;
	}
	Global_1938075->f_145 = func_173(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_90(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_174(iParam0))
	{
		return;
	}
	if (func_102(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_175(Global_1939168, 16384);
	func_177(func_176(-1532769513, joaat("areas")), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_177(func_176(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_177(func_176(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_177(func_176(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_177(func_176(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_177(func_176(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_177(func_176(-1532769513, -910218296), 1);
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
		case 30:
			MAP::MAP_DISCOVER_REGION(-1813267128);
			break;
		case 31:
			MAP::MAP_DISCOVER_REGION(-1941572412);
			break;
		case 32:
			MAP::MAP_DISCOVER_REGION(1006072805);
			break;
		case 128:
			MAP::MAP_DISCOVER_REGION(929640770);
			break;
		case 129:
			MAP::MAP_DISCOVER_REGION(1603579970);
			break;
		case 131:
			MAP::MAP_DISCOVER_REGION(-1332669948);
			break;
		case 130:
			MAP::MAP_DISCOVER_REGION(-1807212021);
			break;
		case 36:
			MAP::MAP_DISCOVER_REGION(-1347759053);
			break;
		case 38:
			MAP::MAP_DISCOVER_REGION(-918096609);
			break;
		case 120:
			MAP::MAP_DISCOVER_REGION(1728445882);
			break;
		case 39:
			MAP::MAP_DISCOVER_REGION(-507075109);
			break;
		case 42:
			MAP::MAP_DISCOVER_REGION(462373845);
			break;
		case 44:
			MAP::MAP_DISCOVER_REGION(-1727895786);
			break;
		case 45:
			MAP::MAP_DISCOVER_REGION(1826504111);
			break;
		case 46:
			MAP::MAP_DISCOVER_REGION(1714554710);
			break;
		case 47:
			MAP::MAP_DISCOVER_REGION(-91026072);
			break;
		case 58:
			MAP::MAP_DISCOVER_REGION(893855320);
			break;
		case 59:
			MAP::MAP_DISCOVER_REGION(326709244);
			break;
		case 52:
			MAP::MAP_DISCOVER_REGION(653799702);
			break;
		case 67:
			MAP::MAP_DISCOVER_REGION(415864829);
			break;
		case 69:
			MAP::MAP_DISCOVER_REGION(-1836330842);
			break;
		case 70:
			MAP::MAP_DISCOVER_REGION(648073069);
			break;
		case 71:
			MAP::MAP_DISCOVER_REGION(770074951);
			break;
		case 73:
			MAP::MAP_DISCOVER_REGION(-1276637644);
			break;
		case 76:
			MAP::MAP_DISCOVER_REGION(-431488293);
			break;
		case 77:
			MAP::MAP_DISCOVER_REGION(-1101810198);
			break;
		case 79:
			MAP::MAP_DISCOVER_REGION(-1344767066);
			break;
		case 82:
			MAP::MAP_DISCOVER_REGION(1472232821);
			break;
		case 84:
			MAP::MAP_DISCOVER_REGION(-1368676121);
			break;
		case 68:
			MAP::MAP_DISCOVER_REGION(-33677540);
			break;
		case 85:
			MAP::MAP_DISCOVER_REGION(1602161184);
			MAP::MAP_DISCOVER_REGION(-443207523);
			MAP::MAP_DISCOVER_REGION(-683043834);
			break;
		case 87:
			MAP::MAP_DISCOVER_REGION(147256338);
			MAP::MAP_DISCOVER_REGION(-134804027);
			MAP::MAP_DISCOVER_REGION(2027689141);
			break;
		case 88:
			MAP::MAP_DISCOVER_REGION(-161135375);
			break;
		case 90:
			MAP::MAP_DISCOVER_REGION(1625008147);
			break;
		case 91:
			MAP::MAP_DISCOVER_REGION(121074776);
			break;
		case 92:
			MAP::MAP_DISCOVER_REGION(1876184276);
			break;
		case 94:
			MAP::MAP_DISCOVER_REGION(458479023);
			break;
		case 97:
			MAP::MAP_DISCOVER_REGION(85299473);
			break;
		case 102:
			MAP::MAP_DISCOVER_REGION(-1150244084);
			break;
		case 104:
			MAP::MAP_DISCOVER_REGION(759314201);
			break;
		case 105:
			MAP::MAP_DISCOVER_REGION(2063457042);
			break;
		case 106:
			MAP::MAP_DISCOVER_REGION(1877776161);
			break;
		case 108:
			MAP::MAP_DISCOVER_REGION(2143316225);
			break;
		case 110:
			MAP::MAP_DISCOVER_REGION(-1623232489);
			MAP::MAP_DISCOVER_REGION(-1393093729);
			break;
		case 112:
			MAP::MAP_DISCOVER_REGION(1354284392);
			break;
		case 113:
			MAP::MAP_DISCOVER_REGION(-1430883057);
			break;
		case 115:
			MAP::MAP_DISCOVER_REGION(820139809);
			break;
		case 118:
			MAP::MAP_DISCOVER_REGION(1561007383);
			MAP::MAP_DISCOVER_REGION(-960425936);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_91(bool bParam0)
{
	if (bParam0)
	{
		Global_1893575 |= 1;
	}
	else
	{
		Global_1893575 = (&Global_1893575 - Global_1893575 & 1);
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_93()
{
}

int func_94(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 134:
			return 672925454;
		case 135:
			return 846062774;
		case 136:
			return 1713550306;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 137:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778 /* GXTEntry: "Wilderness" */;
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (&Global_7888[iParam0 /*11*/] - (Global_7888[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1070355->f_17941[iParam0 /*11*/] = (&Global_1070355->f_17941[iParam0 /*11*/] - (Global_1070355->f_17941[iParam0 /*11*/] && iParam1));
}

void func_96(bool bParam0)
{
	if (bParam0)
	{
		Global_1893575 |= 2;
	}
	else
	{
		Global_1893575 = (&Global_1893575 - Global_1893575 & 2);
	}
}

void func_97(int iParam0)
{
	func_72(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_31))
	{
		VOLUME::_0x998202B206872672(iLocal_31);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_31);
		VOLUME::DELETE_VOLUME(iLocal_31);
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("SCVHAUD"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("SCVHAUD"))
		{
			HUD::_TEXT_BLOCK_DELETE("SCVHAUD");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("VANRGAU"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("VANRGAU"))
		{
			HUD::_TEXT_BLOCK_DELETE("VANRGAU");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("REDDVHT"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("REDDVHT"))
		{
			HUD::_TEXT_BLOCK_DELETE("REDDVHT");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("VHTRDAU"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("VHTRDAU"))
		{
			HUD::_TEXT_BLOCK_DELETE("VHTRDAU");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("RESFVHT"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("RESFVHT"))
		{
			HUD::_TEXT_BLOCK_DELETE("RESFVHT");
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_38))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_38);
	}
	iParam0 = iParam0;
}

void func_98(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1938932->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
}

void func_99(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1915170->f_3[iVar0 /*447*/])->f_8 == iParam0)
		{
			func_178(iVar0);
		}
		iVar0++;
	}
}

int func_100(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_74(iParam0))
	{
		return 1;
	}
	if (func_111(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896608->f_1 < iVar0 || Global_1896608->f_1 > iVar1)
		{
			Global_1896608->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_179(Global_1896608->f_1, 16))
			{
				func_180(Global_1896608->f_1, 0);
			}
			Global_1896608->f_1++;
			iVar2++;
			if (Global_1896608->f_1 > iVar1)
			{
				Global_1896608->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_101(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_181(iVar0) || func_182(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_69();
					break;
				case 32:
					func_183();
					break;
				default:
					if ((Global_1051387->f_69[iVar0 /*76*/])->f_2 == iParam0)
					{
						func_121(iVar0);
						(Global_1051387->f_69[iVar0 /*76*/])->f_2 = -1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_102(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7888[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070355->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

void func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_184(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_40.f_106[iVar1], iVar2);
	Global_1938569 = 0;
}

void func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_184(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_40.f_106[iVar1], iVar2);
	Global_1938569 = 0;
}

void func_105()
{
	func_104(-939420910);
	func_104(-1187950766);
	func_104(356365161);
	func_104(753127042);
	func_104(-2038424081);
	func_104(1884271742);
	func_104(459290420);
}

void func_106()
{
	func_104(704802028);
	func_104(588987611);
	func_104(2008888900);
	func_104(1649996811);
	func_104(227918160);
	func_104(168171957);
	func_104(1193080109);
	func_104(-491981251);
	func_104(-639037538);
	func_104(-618620429);
}

bool func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_184(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_185(iVar1))
	{
		if (Global_1070355->f_17915.f_24 && !func_186(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070355->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2);
}

void func_108(int iParam0)
{
	if (func_129(iParam0) && func_187())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

int func_109(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	return func_102(iParam0, 33554432);
}

int func_110(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 33:
			return 1;
		case 37:
			return 1;
		case 70:
			return 1;
		case 101:
			return 1;
	}
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 134:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 137:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_112(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_113(int iParam0)
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

int func_114(int iParam0, bool bParam1)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0, 2))
	{
		return 0;
	}
	if (func_179(iParam0, 32) && !bParam1)
	{
		func_189(iParam0, _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(func_188(iParam0)));
		if (func_45() == -1)
		{
			if (func_179(iParam0, 2048))
			{
				_NAMESPACE48::REVIVE_PERSCHAR(func_147(iParam0));
				func_190(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_147(iParam0));
		}
		return 0;
	}
	if (!func_191(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_147(iParam0)))
	{
		func_190(iParam0, 128);
		return 1;
	}
	func_189(iParam0, _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(func_188(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_147(iParam0));
	if (func_179(iParam0, 2048))
	{
		_NAMESPACE48::REVIVE_PERSCHAR(func_147(iParam0));
		func_190(iParam0, 2048);
	}
	return 1;
}

int func_115(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0)
{
	func_192((Global_1938932->f_5[iParam0 /*11*/])->f_6, 1);
	func_193((Global_1938932->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2((Global_1938932->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::RELEASE_LOCK_VOLUME((Global_1938932->f_5[iParam0 /*11*/])->f_8);
	}
	func_194(iParam0, 8192);
	func_194(iParam0, 32768);
	func_194(iParam0, 524288);
	func_194(iParam0, 1048576);
	(Global_1938932->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1938932->f_5[&Global_1938932 /*11*/])->f_9 = 0;
	Global_1938932->f_5[iParam0 /*11*/] = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1938932->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_7 = 0;
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_118()
{
	return func_195(func_60(0));
}

bool func_119(int iParam0)
{
	return !func_196(iParam0);
}

void func_120(bool bParam0, bool bParam1)
{
	if (func_197(255) == 4)
	{
		return;
	}
	if (func_115(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_198(0);
	}
	else
	{
		if (bParam1)
		{
			func_199(0, 0, 0, 1);
		}
		func_200(0);
		func_201(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_202(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_203(Global_1099293->f_516, 36);
	func_204(Global_1099293->f_555, 36);
}

void func_121(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_205(iParam0);
	if (!bVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21) && !ENTITY::DOES_ENTITY_EXIST(&(Global_1051387->f_3222[(Global_1051387->f_69[iParam0 /*76*/])->f_18 /*2*/])))
		{
			if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY((Global_1051387->f_69[iParam0 /*76*/])->f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&((Global_1051387->f_69[iParam0 /*76*/])->f_21));
		}
		if (STREAMING::IS_MODEL_VALID((Global_1051387->f_69[iParam0 /*76*/])->f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Global_1051387->f_69[iParam0 /*76*/])->f_19);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_25))
	{
		NETWORK::NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		if (func_132(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_26))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		if (func_132(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_28))
	{
		if (func_132(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_28);
		}
	}
	if (func_142(iParam0, 16384) && !bVar0)
	{
		iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT((Global_1051387->f_69[iParam0 /*76*/])->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
		}
		func_143(iParam0, 16384);
	}
	Global_1051387->f_69[iParam0 /*76*/] = -1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { 0f, 0f, 0f };
	(Global_1051387->f_69[iParam0 /*76*/])->f_21 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_19 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 1;
	if (func_142(iParam0, 262144) && !bVar0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[iParam0 /*76*/])->f_22);
		func_143(iParam0, 262144);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	iVar3 = func_127(iParam0);
	if (iVar3 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_108(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2]));
			(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2] = 0;
			iVar2++;
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_48 = 0;
	}
	func_206(iParam0);
	if (func_132(iParam0, 262144))
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 262144;
	}
	else
	{
		func_138(iParam0);
	}
	if (VOLUME::DOES_VOLUME_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_25) && func_207(iParam0, 2))
	{
		VOLUME::SET_VOLUME_RELATIONSHIP((Global_1051387->f_69[iParam0 /*76*/])->f_25, 623901053);
		PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_25);
	}
	func_139(iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 &= 2375680;
	func_141(iParam0);
}

int func_122(int iParam0, int iParam1)
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

int func_123(int iParam0)
{
	if (!func_208(iParam0))
	{
		return 0;
	}
	if (&Global_1051387->f_4360[iParam0] == 0)
	{
		Global_1051387->f_4360[iParam0] = func_209(iParam0);
	}
	return &(Global_1051387->f_4360[iParam0]);
}

float func_124(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
	}
	return 12.5f;
}

void func_125(int iParam0, int iParam1)
{
	if (!func_142(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 || iParam1);
}

void func_126(int iParam0)
{
	(*Global_1051387)[Global_1051387->f_40] = iParam0;
	Global_1051387->f_40++;
	if (Global_1051387->f_40 >= 39)
	{
		Global_1051387->f_40 = (39 - 1);
	}
}

int func_127(int iParam0)
{
	return (Global_1051387->f_69[iParam0 /*76*/])->f_48;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
		{
			OBJECT::ADD_DOOR_TO_SYSTEM_NEW(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
		else
		{
			OBJECT::ADD_DOOR_TO_SYSTEM_NEW(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM_NEW(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, 1);
	}
	return iParam0;
}

int func_129(int iParam0)
{
	if (func_210(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_130(int iParam0)
{
	func_128(iParam0, 0, 0);
	if (func_129(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return 0;
}

void func_131(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_132(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_50 && iParam1) != 0;
}

int func_133()
{
	return Global_1893575->f_2;
}

bool func_134(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	return func_211(iParam0, "sHash", iParam1, "fHeading", bParam2, "vPos", uParam3);
}

bool func_135(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	return func_211(iParam0, "sClosedHash", iParam1, "fClosedHeading", bParam2, "vClosedPos", uParam3);
}

void func_136(int iParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), 0);
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = func_144(iParam1, vParam2, uParam5, 0, 0, 0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = (Global_1051387->f_69[iParam0 /*76*/])->f_6;
	TASK::_SET_SCENARIO_POINT_FLAG((Global_1051387->f_69[iParam0 /*76*/])->f_6, 23, 1);
	TASK::_0xA7479FB665361EDB((Global_1051387->f_69[iParam0 /*76*/])->f_6, 0);
	func_125(iParam0, 16384);
}

bool func_137(struct<2> Param0)
{
	return func_212(Param0, 9, 12);
}

void func_138(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 0;
}

void func_139(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_51 = 0;
}

void func_140(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = 0;
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051387->f_40 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051387->f_40)
	{
		if (iParam0 == Global_1051387[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051387->f_40 = (Global_1051387->f_40 - 1);
	if (Global_1051387->f_40 < 0)
	{
		Global_1051387->f_40 = 0;
	}
	(*Global_1051387)[iVar1] = Global_1051387[Global_1051387->f_40];
}

bool func_142(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
}

void func_143(int iParam0, int iParam1)
{
	if (func_142(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
}

int func_144(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 11;
		case 56:
			return 57;
		case 54:
			return 55;
		case 36:
			return 37;
		case 105:
			return 106;
		case 79:
			return 80;
		case 94:
			return 95;
		default:
			break;
	}
	return -1;
}

bool func_146(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_112(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_147(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_213(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(func_147(iParam0));
}

int func_147(int iParam0)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_1;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_149(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_150(int iParam0)
{
	return iParam0 != 0;
}

void func_151()
{
	func_71(442, iLocal_31, 1);
	func_71(440, iLocal_31, 0);
	func_71(441, iLocal_31, 0);
	func_71(443, iLocal_31, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_31, 0, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_31, 0, 1, func_147(440));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_31, 0, 1, func_147(441));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_31, 0, 1, func_147(443));
}

int func_152()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070355->f_4;
}

void func_153(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_129(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (func_129(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_155(int iParam0, bool bParam1)
{
	if (func_129(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_156(int iParam0, bool bParam1)
{
	if (func_129(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_157()
{
	return 1;
}

int func_158(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_214())
	{
		return 1;
	}
	if (iParam0 == 66)
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	if (Global_13)
	{
		return 0;
	}
	if (!func_215())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_55))
	{
		return 0;
	}
	if (func_216(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_160(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893575->f_162)))
	{
		sVar0 = func_217(Global_1893575->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_219(func_218(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_220(iParam0) || func_221(44))
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
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 134:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 135:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 137:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805: /* GXTEntry: "Aurora Basin" */
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694: /* GXTEntry: "Barrow Lagoon" */
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573: /* GXTEntry: "Bayou Nwa" */
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073: /* GXTEntry: "Cairn Lake" */
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007: /* GXTEntry: "Dakota River" */
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421: /* GXTEntry: "Deadboot Creek" */
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602: /* GXTEntry: "Elysian Pool" */
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577: /* GXTEntry: "Heartlands Overflow" */
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009: /* GXTEntry: "Hot Springs" */
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450: /* GXTEntry: "Lake Don Julio" */
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541: /* GXTEntry: "Lake Isabella" */
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421: /* GXTEntry: "Little Creek River" */
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316: /* GXTEntry: "Lower Montana River" */
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150: /* GXTEntry: "Mattlock Pond" */
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579: /* GXTEntry: "Moonstone Pond" */
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193: /* GXTEntry: "Owanjila" */
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838: /* GXTEntry: "Ringneck Creek" */
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387: /* GXTEntry: "Sea of Coronado" */
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292: /* GXTEntry: "Southfield Flats" */
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770: /* GXTEntry: "Spider Gorge" */
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521: /* GXTEntry: "Stillwater Creek" */
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443: /* GXTEntry: "Upper Montana River" */
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730: /* GXTEntry: "Whinyard Strait" */
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481: /* GXTEntry: "Kamassa River" */
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
			case -1504425495: /* GXTEntry: "San Luis River" */
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

bool func_161(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_162(int iParam0)
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

int func_163(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_161(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_40.f_186[iParam0 /*12*/]);
	}
	iVar0 = 0;
	Var1 = { func_222(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1070355->f_19592[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return &(Global_1070355->f_19592[iParam0 /*12*/]);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return 0;
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return 0;
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return 2;
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return 1;
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007: /* GXTEntry: "Dakota River" */
			return 1;
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return 1;
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return 1;
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return 0;
		case -1356490953:
			return 0;
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return 1;
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return 0;
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return 0;
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return 1;
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return 0;
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return 0;
		case -2040708515:
			return 1;
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return 1;
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return 1;
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return 0;
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return 0;
		case -1817904483:
			return 0;
		case -1300497193: /* GXTEntry: "Owanjila" */
			return 0;
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return 1;
		case -1504425495: /* GXTEntry: "San Luis River" */
			return 1;
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return 1;
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return 0;
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return 1;
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return 1;
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return 1;
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_165(int iParam0)
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

bool func_166(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_40.f_259[iParam0] && iParam1) != 0;
	}
	return (Global_1070355->f_19665[iParam0] && iParam1) != 0;
}

bool func_167(int iParam0, int iParam1)
{
	if (!func_161(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_40.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070355->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_168()
{
	return &Global_1902688;
}

int func_169(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_170(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_171(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_172(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_223(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_173(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_174(int iParam0)
{
	if (func_220(iParam0))
	{
		if (!func_221(44))
		{
			return 0;
		}
	}
	return 1;
}

void func_175(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_176(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_177(var uParam0, int iParam1, bool bParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::STAT_ID_INCREMENT_INT(&uParam0, bParam2);
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_112((Global_1915170->f_3[iParam0 /*447*/])->f_21) && func_224((Global_1915170->f_3[iParam0 /*447*/])->f_21))
	{
		func_225((Global_1915170->f_3[iParam0 /*447*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { 0f, 0f, 0f };
	(Global_1915170->f_3[iParam0 /*447*/])->f_21 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_22 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	(Global_1915170->f_3[iParam0 /*447*/])->f_1 = 0;
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID((Global_1915170->f_3[iParam0 /*447*/])->f_35))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1915170->f_3[iParam0 /*447*/])->f_35, false);
	}
	func_226((Global_1915170->f_3[iParam0 /*447*/])->f_9, 0);
	func_227(iParam0, 536870912);
	iVar1 = func_228(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_108(&((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/]));
			(Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/] = 0;
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_4 = 0f;
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	if ((Global_1915170->f_3[iParam0 /*447*/])->f_441 != 0)
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED((Global_1915170->f_3[iParam0 /*447*/])->f_441, 0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_23 = 0;
	func_229(iParam0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_9 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_8 = -1;
}

bool func_179(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_112(iParam0))
	{
		return false;
	}
	return (Global_9657[iParam0 /*2*/] && iParam1) != 0;
}

int func_180(int iParam0, bool bParam1)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0, 2))
	{
		return 0;
	}
	if (func_188(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_147(iParam0)))
	{
		return 1;
	}
	if (func_179(iParam0, 1) && !bParam1)
	{
		func_230(iParam0, 128);
		return 1;
	}
	func_190(iParam0, 129);
	func_231(iParam0);
	_NAMESPACE48::DELETE_PERSCHAR(func_147(iParam0));
	func_189(iParam0, 0);
	return 1;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_183()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051387->f_4319[iVar0 /*7*/] = -1;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_3 = 0;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_4 = 0;
		if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_4319[iVar0 /*7*/])->f_6))
		{
			TASK::DELETE_SCENARIO_POINT((Global_1051387->f_4319[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	func_141(32);
}

int func_184(int iParam0, int iParam1)
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

int func_185(int iParam0)
{
	int iVar0;

	iVar0 = func_232(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	return 1;
}

int func_188(int iParam0)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	return Global_1893763[iParam0 /*3*/];
}

void func_189(int iParam0, int iParam1)
{
	if (!func_112(iParam0))
	{
		return;
	}
	((*Global_1893763)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_190(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_112(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (&Global_9657[iParam0 /*2*/] - (Global_9657[iParam0 /*2*/] && iParam1));
}

int func_191(int iParam0)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

void func_192(int iParam0, bool bParam1)
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

void func_193(int iParam0, bool bParam1)
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

void func_194(int iParam0, int iParam1)
{
	func_233(&((Global_1938932->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_195(struct<2> Param0)
{
	return func_212(Param0, 5, 8);
}

bool func_196(int iParam0)
{
	return func_234(1, iParam0);
}

int func_197(int iParam0)
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

int func_198(int iParam0)
{
	if (func_235(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_236(iParam0);
	if (!func_237(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_238(128) && !func_239(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_240() == 4)
	{
		func_198(17);
	}
	func_241(1024);
}

int func_200(int iParam0)
{
	if (func_242(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_201(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_202(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_203(struct<29> Param0, var uParam29, int iParam30)
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

void func_204(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_205(int iParam0)
{
	if (((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27)
	{
		return 1;
	}
	if (func_132(iParam0, 65536))
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0)
{
}

bool func_207(int iParam0, int iParam1)
{
	return func_243((Global_1051387->f_69[iParam0 /*76*/])->f_51, iParam1);
}

bool func_208(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

int func_209(int iParam0)
{
	vector3 vVar0;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1131373->f_7) && !func_245(12, func_244(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_210(int iParam0)
{
	return iParam0 != 0;
}

int func_211(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, char* sParam5, var uParam6)
{
	struct<4> Var0;

	Var0 = func_246();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_244(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::_DATAFILE_GET_HASH(iParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_DATAFILE_GET_FLOAT(bParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &Var0);
	return 1;
}

bool func_212(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_247(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_248(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_213(int iParam0)
{
	int iVar0;

	iVar0 = func_147(iParam0);
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

int func_214()
{
	return 0;
}

int func_215()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return 1;
	}
	if (func_249())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_250() };
	if (func_247(Var0))
	{
		return 0;
	}
	Var2 = { func_251() };
	if (func_247(Var2))
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_249())
		{
			return 1;
		}
		if (Global_1070355->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_247(func_60(0)))
	{
		return 1;
	}
	if ((Global_1939168 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_61(func_60(0)))
	{
		case -1:
			return 0;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return 0;
}

char* func_217(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_218(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_252(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_219(int iParam0)
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

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return 1;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return func_254(iParam0);
}

struct<7> func_222(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_223(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_224(int iParam0)
{
	if (!func_112(iParam0))
	{
		return false;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_225(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_112(iParam0))
	{
		return;
	}
	if (!func_179(iParam0, 1))
	{
		return;
	}
	if (!func_179(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_224(iParam0)) && func_255(iParam0))
	{
		return;
	}
	func_190(iParam0, 1);
	func_231(iParam0);
	if (func_256(func_188(iParam0)))
	{
		iVar0 = func_147(iParam0);
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !_NAMESPACE48::IS_PERSISTENT_CHARACTER_DEAD(iVar0))
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
		func_190(iParam0, 16);
	}
	if (func_179(iParam0, 128) && !bParam3)
	{
		func_180(iParam0, 0);
	}
}

void func_226(int iParam0, bool bParam1)
{
	if (!func_208(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_257(iParam0, 1024))
		{
			func_258(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_257(iParam0, 1024))
	{
		func_259(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_260(iParam0);
}

void func_227(int iParam0, int iParam1)
{
	if (!func_261(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_6 = ((Global_1915170->f_3[iParam0 /*447*/])->f_6 - ((Global_1915170->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

int func_228(int iParam0)
{
	return (Global_1915170->f_3[iParam0 /*447*/])->f_409;
}

void func_229(int iParam0)
{
	(Global_1915170->f_3[iParam0 /*447*/])->f_6 = 0;
}

void func_230(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_112(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (Global_9657[iParam0 /*2*/] || iParam1);
}

void func_231(int iParam0)
{
	int iVar0;

	if (!func_112(iParam0))
	{
		return;
	}
	iVar0 = func_213(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1893763)[iParam0 /*3*/])->f_2 = 0;
}

int func_232(int iParam0)
{
	return func_262(iParam0) + 30;
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_263(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_264())
	{
		return func_263(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_263(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_235(var uParam0, int iParam1, int iParam2)
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

void func_236(int iParam0)
{
	Global_1099293->f_26.f_12 = iParam0;
}

bool func_237(int iParam0)
{
	return (Global_1099293->f_26.f_7 && iParam0) != 0;
}

bool func_238(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) != 0;
}

bool func_239(int iParam0)
{
	return (Global_1099293->f_4[Global_1100046[iParam0 /*2*/]] && ((*Global_1100046)[iParam0 /*2*/])->f_1) == ((*Global_1100046)[iParam0 /*2*/])->f_1;
}

int func_240()
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

void func_241(int iParam0)
{
	if (func_265(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

bool func_242(var uParam0, int iParam1, int iParam2)
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

bool func_243(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return joaat("rage_p2_3");
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330 /* GXTEntry: "Trade" */;
		case 133:
			return -1079912632 /* GXTEntry: "Wilderness Outfitters" */;
		case 148:
			return -1624899219;
		case 172:
			return 1712034773;
		case 173:
			return 1084233913 /* GXTEntry: "Shop at Clothing Store" */;
		case 174:
			return -1628307596;
		case 149:
			return 1109728466;
		case 150:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 175:
			return 1244193358;
		case 151:
			return -268420964;
		case 152:
			return -283845926;
		case 153:
			return 76731659;
		case 154:
			return 2141489518;
		case 67:
			return 1529797091;
		case 155:
			return 1120323763;
		case 156:
			return -1951530479;
		case 157:
			return 2034257465;
		case 158:
			return 278587369;
		case 65:
			return 1388932648;
		case 160:
			return 1467401843;
		case 161:
			return -1049737591;
		case 162:
			return 1175719437;
		case 163:
			return 2115547696;
		case 64:
			return 878376253;
		case 164:
			return -508879537;
		case 165:
			return -654369397;
		case 166:
			return 1573058547;
		case 167:
			return 1753151614;
		case 168:
			return -2113647360;
		case 169:
			return 1337275619;
		case 170:
			return -237650722;
		case 171:
			return 283754781;
		case 66:
			return -2076086367;
		case 159:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_245(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_266(iParam0, uParam1, &uVar0))
	{
		func_267(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_246()
{
	return (Global_1070355->f_26934[47 /*4*/])->f_3;
}

int func_247(struct<2> Param0)
{
	if (!func_268(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_269(Param0))
	{
		return 0;
	}
	return 1;
}

int func_248(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_270(Param0);
	}
	return -1;
}

int func_249()
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
	if (!func_247(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_250()
{
	return *Global_1051163;
}

struct<2> func_251()
{
	if (Global_1182844->f_129 <= 0)
	{
		return func_60(0);
	}
	if (Global_1182844->f_130 < 0 || Global_1182844->f_131 == 0)
	{
		return func_60(0);
	}
	return ((*Global_1182844)[Global_1182844->f_130 /*4*/])->f_1;
}

int func_252(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_271(iParam3, &vVar0, &Var3, &uVar6);
	if (func_272(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_3434[iVar1]), iVar2);
}

bool func_255(int iParam0)
{
	if (!func_112(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1893763)[iParam0 /*3*/])->f_2);
}

bool func_256(int iParam0)
{
	return iParam0 != 0;
}

bool func_257(int iParam0, int iParam1)
{
	if (!func_208(iParam0))
	{
		return false;
	}
	return (Global_1915170->f_17437[iParam0] && iParam1) != 0;
}

void func_258(int iParam0, int iParam1)
{
	if (!func_208(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (Global_1915170->f_17437[iParam0] || iParam1);
}

void func_259(int iParam0, int iParam1)
{
	if (!func_208(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (&Global_1915170->f_17437[iParam0] - (Global_1915170->f_17437[iParam0] && iParam1));
}

void func_260(int iParam0)
{
	func_274(func_273(iParam0));
}

bool func_261(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_262(int iParam0)
{
	return iParam0 * 31;
}

bool func_263(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_264()
{
	return Global_1099293->f_339;
}

bool func_265(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) == iParam0;
}

bool func_266(int iParam0, var uParam1, int iParam2)
{
	*iParam2 = Global_1131373->f_7;
	iParam2->f_2 = 1351168281;
	iParam2->f_3 = func_275(iParam0);
	iParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(iParam2->f_1), iParam2);
}

void func_267(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	iParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), iParam0);
	iParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, iParam0))
	{
		uParam2->f_2 = uVar0;
	}
	iParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), iParam0);
	iParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), iParam0);
	iParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), iParam0);
}

int func_268(int iParam0)
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

int func_269(int iParam0)
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

int func_270(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_276(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_271(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_272(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_273(int iParam0)
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

void func_274(var uParam0)
{
	Global_1915170->f_17792 = uParam0;
}

int func_275(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_276(struct<2> Param0, int iParam2)
{
	if (!func_247(Param0))
	{
		return 0;
	}
	func_277(iParam2);
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

void func_277(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

