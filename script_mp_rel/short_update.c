#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	struct<138> Local_26 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036831949, 1036831949, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	struct<7> Local_169[15];
	struct<7> Local_275[4];
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	BUILTIN::_SET_THREAD_PRIORITY(0);
	func_1(16);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_2();
	while (!func_3(512))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
	func_5();
	while (!func_3(512))
	{
		BUILTIN::WAIT(0);
	}
	func_6();
	func_7(16);
	while (Global_1572887->f_9)
	{
		BUILTIN::WAIT(0);
	}
	while (!func_3(256))
	{
		BUILTIN::WAIT(0);
	}
	NETWORK::_0x7AC752103856FB20(true);
	func_7(2);
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_8();
		Global_1954458->f_1 = (1 + Global_1954458->f_1);
		Global_1954458->f_2 = (MISC::GET_FRAME_TIME() + Global_1954458->f_2);
		if ((&Global_1954458 - MISC::GET_GAME_TIMER()) > 500)
		{
			Global_1954458->f_3 = (1f / (Global_1954458->f_2 / BUILTIN::TO_FLOAT(Global_1954458->f_1)));
			Global_1954458->f_1 = 0;
			Global_1954458->f_2 = 0f;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Call_Loc((Local_169[iVar0 /*7*/])->f_1);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Call_Loc((Local_275[iVar1 /*7*/])->f_1);
			iVar1++;
		}
		BUILTIN::WAIT(0);
	}
	func_9();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	Global_18 = (Global_18 - (Global_18 && iParam0));
}

void func_2()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_169[iVar0 /*7*/] = 982;
		(Local_169[iVar0 /*7*/])->f_1 = 990;
		(Local_169[iVar0 /*7*/])->f_2 = 982;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_275[iVar0 /*7*/] = 982;
		(Local_275[iVar0 /*7*/])->f_1 = 990;
		(Local_275[iVar0 /*7*/])->f_2 = 982;
		iVar0++;
	}
}

bool func_3(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_4()
{
	func_14(1001, 1009, 982, 0, "PLAYER(S)");
	func_14(1082, 1218, 1457, 1, "DISTRICT");
	func_14(982, 1542, 982, 2, "UID LAUNCHER");
	func_14(1648, 1660, 982, 3, "EVENT MONITOR");
	func_14(1988, 2004, 982, 4, "LAW(S)");
	func_14(982, 2165, 982, 5, "SATCHEL");
	func_14(2756, 2768, 2964, 6, "PLAYER_MENU_");
	func_14(2972, 3059, 4532, 7, "HUD");
	func_14(4555, 4569, 4838, 8, "SKINNING");
	func_14(982, 4853, 982, 10, "FOCUS_VOLUME");
	func_14(982, 5119, 5203, 11, "MISSION HANDLER(S)");
	func_14(982, 990, 5241, 12, "UI CLEANUP");
	func_14(982, 5261, 982, 13, "WORLD STATE SHORT");
	func_14(982, 5320, 982, 14, "FLOW CONTROLLER");
}

void func_5()
{
	func_42(5440, 5508, 5913, 0, "NET_SHOPS");
	func_42(982, 5977, 982, 1, "UGCGLOBALLOADER");
	func_42(5989, 6244, 6252, 2, "AUTHORED SPAWNS");
	func_42(6273, 6290, 6690, 3, "ONSCREEN_KEYBOARD");
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Call_Loc(&Local_169[iVar0 /*7*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Call_Loc(&Local_275[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_7(int iParam0)
{
	Global_18 = (Global_18 || iParam0);
}

void func_8()
{
	Global_19 = 0;
}

void func_9()
{
	func_50();
	NETWORK::_0x7AC752103856FB20(false);
	if (Global_1939168->f_2 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939168->f_2);
	}
}

void func_10()
{
}

void func_11()
{
	return;
}

void func_12()
{
}

void func_13()
{
	func_51();
	func_52();
	Global_1915117 = 0;
	func_53();
}

void func_14(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_169[iParam3 /*7*/] = iParam0;
	(Local_169[iParam3 /*7*/])->f_1 = iParam1;
	(Local_169[iParam3 /*7*/])->f_2 = iParam2;
	StringCopy(&((Local_169[iParam3 /*7*/])->f_3), sParam4, 24);
}

void func_15()
{
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1896610->f_38))
	{
		Global_1896610->f_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3267.312f, -619.652f, 80.27f, 0f, 0f, 24f, 279f, 400f, 91f, "siska Inner");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1896610->f_39))
	{
		Global_1896610->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3267.312f, -619.652f, 80.27f, 0f, 0f, 24f, 300f, 421f, 91f, "siska Outer");
	}
}

void func_16()
{
	bool bVar0;
	int iVar1;

	if (func_54())
	{
		return;
	}
	func_55(8);
	func_56(Global_1896610->f_35);
	func_57(Global_1896610->f_35);
	func_58();
	Global_1896610->f_35++;
	if (Global_1896610->f_35 >= 17)
	{
		Global_1896610->f_35 = 0;
		bVar0 = true;
	}
	if (Global_1896610->f_36 != -1)
	{
		if (Global_1896610->f_36 != func_59())
		{
			func_60(Global_1896610->f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_61(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_59() != iVar1)
		{
			Global_1896610->f_37 = 1;
			if (func_60(iVar1))
			{
				return;
			}
		}
		if ((!Global_1896610->f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1896610->f_42, false)) && func_59() != -1)
		{
			func_60(func_59());
		}
		Global_1896610->f_37 = 0;
	}
}

void func_17()
{
	int iVar0;
	char cVar1[64];

	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, func_62(iVar0), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) > 0)
		{
			SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&cVar1));
		}
		iVar0++;
	}
	func_63();
	Global_1896610->f_41 = -1;
}

void func_18()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = func_64();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	func_65();
	Var1 = { func_66(0) };
	if (func_67(Var1))
	{
		switch (func_68(func_66(0)))
		{
			case 2:
			case 7:
				if (func_69(12288))
				{
					func_70(0, 0, 0, 0);
				}
				return;
			default:
				break;
		}
	}
}

void func_19()
{
	func_71();
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_72();
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		Global_1949739->f_8 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_73(iVar0);
			func_74(iVar0);
			func_75(iVar0);
			func_76(iVar0);
			func_77(iVar0);
			func_78(iVar0);
			func_79(iVar0);
			func_80(iVar0);
			func_81(iVar0);
			func_82(iVar0);
			iVar2 = SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0);
			switch (iVar2)
			{
				case -140551285:
					func_83(iVar0);
					break;
				case -2091944374:
				case -1511724297:
				case -1312424871:
				case -369170747:
					func_84(iVar0);
					break;
				case 1376140891:
					func_85(iVar0);
					break;
				case 1387172233:
					func_86(iVar0);
					func_87(iVar0);
					break;
				case 735942751:
					func_88(iVar0);
					break;
				case -1816722641:
					func_89(iVar0);
					break;
				case -1241852893:
					func_90(iVar0);
					break;
				case 867155253:
					func_91(iVar0);
					break;
				case -582361627:
					func_92(iVar0);
					break;
			}
			iVar0++;
		}
	}
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(3);
	if (iVar1 > 0)
	{
		iVar3 = 0;
		while (iVar3 < SCRIPTS::GET_NUMBER_OF_EVENTS(3))
		{
			func_93(iVar3);
			iVar3++;
		}
	}
}

void func_21()
{
	func_94();
	func_95();
}

void func_22()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<7> Var3;
	var uVar10;
	int iVar12;
	int iVar13;

	bVar0 = func_96();
	bVar1 = func_97(PLAYER::PLAYER_ID(), 1, 0, 1);
	bVar2 = func_97(PLAYER::PLAYER_ID(), 0, 0, 1);
	if (!bVar0)
	{
		func_98(bVar1);
		func_99();
		Var3 = { func_100(PLAYER::PLAYER_ID()) };
		BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var3, &uVar10);
		iVar12 = uVar10;
		iVar13 = func_64();
		if (iVar13 == -1)
		{
			iVar12 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
		}
		else if (iVar13 == 0)
		{
			func_101();
		}
		if (func_103(func_102()))
		{
			if (!CAM::IS_SCREEN_FADED_OUT() && iVar12 > Global_1939168->f_11)
			{
				LAW::_0xC310239ACCCF5579();
			}
		}
	}
	func_104(bVar2, bVar0);
}

void func_23()
{
	bool bVar0;
	bool bVar1;

	func_105();
	func_106();
	func_107();
	if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38) && WEAPON::_0xC853230E76A152DF(Global_1939168->f_38))
	{
		if (Global_1939168->f_38 == 1652431022)
		{
			if (Global_1939221->f_13)
			{
				Global_1939221->f_13 = 0;
			}
			else if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 57, 1);
			}
		}
		if (!func_108())
		{
			if (!func_109("binoculars"))
			{
				func_110();
			}
		}
	}
	func_111();
	func_112();
	if (Global_1939168->f_38 == joaat("weapon_kit_camera"))
	{
		if (!func_113())
		{
			if (!func_109("camera_item"))
			{
				func_114();
			}
		}
	}
	if (Global_1939168->f_38 == joaat("weapon_melee_lantern_electric"))
	{
		if (func_64() == -1)
		{
			if (!func_115())
			{
				if (!func_109("electric_lantern"))
				{
					func_116();
				}
			}
		}
	}
	if (func_117())
	{
		if (!func_118())
		{
			if (!func_109("metal_detector"))
			{
				func_119();
			}
		}
	}
	bVar0 = false;
	if (func_64() == 0 && func_120(2048, 255))
	{
		bVar0 = true;
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (Global_1939168->f_38 == joaat("weapon_fishingrod"))
		{
			if (!func_121(Global_35, 716706914))
			{
				if (func_122(bVar0))
				{
					func_123();
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE() && func_124())
			{
				PAD::_0x2804658EB7D8A50B(1, -517219045);
			}
		}
		else if (func_125(1))
		{
			if (func_122(bVar0))
			{
				func_123();
			}
		}
	}
	if (!func_126())
	{
		Global_1939221->f_36 = 0;
		return;
	}
	bVar1 = &Global_1939221 == true;
	if (!bVar1)
	{
		if (func_127(&(Global_1939057->f_83[2]), 1))
		{
			bVar1 = true;
		}
	}
	if (bVar1 && !Global_1939221->f_1)
	{
		if (func_68(func_66(0)) != 5)
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1939221->f_32, false))
			{
				SCRIPTS::REQUEST_SCRIPT("satchel");
				Global_1939221->f_1 = 1;
				Global_1939221 = 0;
			}
		}
		else if (&Global_1939221 == 1)
		{
			Global_1939221 = 0;
		}
	}
	else if (Global_1939221->f_1 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1939221->f_32, false))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED("satchel"))
		{
			if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) > 0)
			{
				Global_1939221->f_32 = SCRIPTS::START_NEW_SCRIPT("satchel", 1024);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("satchel");
			}
		}
	}
}

void func_24()
{
	func_128();
}

void func_25()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	MISC::_0x0A487CC74A517FB5(1);
	func_129();
	func_130();
	if (!func_131())
	{
		func_132(0);
		Global_1896726->f_386 = 0;
		return;
	}
	bVar0 = func_133();
	bVar1 = func_134();
	bVar2 = (((Global_1896726->f_386 || bVar0) && Global_1896726->f_384) || Global_1896726->f_387);
	bVar3 = ((Global_1915170->f_20136 || Global_1915170->f_21989.f_1) || func_135());
	if (func_136(!bVar3, 1, 1, 0, 1, 1, 1, 1, 0))
	{
		_NAMESPACE79::_0x1C38C3577901AF1F();
	}
	if ((UIAPPS::_IS_APP_ACTIVE(1433015236) || bVar2) || bVar1)
	{
		if (bVar0)
		{
			func_137();
		}
		func_138();
	}
}

void func_26()
{
}

void func_27()
{
	Global_1939057->f_91 = func_139(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0) >= 1;
	Global_1939057->f_92 = func_139(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0) >= 1;
	func_140();
	func_141();
	func_142();
	func_143();
	func_144();
	func_145();
	if (func_64() != -1)
	{
		return;
	}
	func_146();
}

void func_28()
{
	var uVar0;
	var uVar4;
	int iVar8;
	vector3 vVar9;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;

	func_147();
	if (Global_26387)
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(1023137905);
	}
	Global_1939057->f_25 = 0;
	if (Global_1939168->f_6)
	{
		if (func_148(Global_1939057->f_82))
		{
			func_149(&(Global_1939057->f_82), 1, 1);
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_64() == -1)
		{
			Global_1939057->f_91 = func_139(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0) >= 1;
			Global_1939057->f_92 = func_139(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0) >= 1;
		}
		else
		{
			WEAPON::_0xB7E52A058B07C7E2(Global_35, &uVar0, &uVar4);
			if ((func_150(&uVar0) && !Global_1939057->f_36) && Global_1939057->f_37)
			{
				func_151(870, 0);
				Global_1939057->f_36 = 1;
			}
			Global_1939057->f_91 = 0;
			Global_1939057->f_92 = 1;
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 3) == 0)
	{
		func_152(0);
		func_153();
	}
	func_154();
	if (Global_1939057->f_19)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 103, true);
	}
	iVar8 = Global_1939057->f_40;
	Global_1939057->f_40 = HUD::_0x9C409BBC492CB5B1();
	if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(746131100) && UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(746131100, &vVar9))
	{
		if (vVar9.x == -1740156697)
		{
			func_155(&(Global_1939057->f_50.f_10));
			bVar13 = true;
		}
	}
	bVar14 = false;
	if ((Global_1939057->f_10 || Global_1939057->f_11) || Global_1939057->f_12)
	{
		bVar14 = true;
	}
	if (bVar14)
	{
		if (func_148(Global_1939057->f_82))
		{
			func_149(&(Global_1939057->f_82), 1, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		if (!Global_1939057->f_18)
		{
			Global_1939057->f_18 = 1;
			func_156();
		}
		if (!Global_1951131->f_926)
		{
			func_157(37, 0, 0, 0, 0);
			Global_1951131->f_926 = 1;
		}
	}
	else
	{
		if (Global_1951131->f_926)
		{
			func_157(38, 0, 0, 0, 0);
			Global_1951131->f_926 = 0;
		}
		if (Global_1939057->f_18)
		{
			Global_1939057->f_18 = 0;
		}
	}
	if (bVar14 || bVar13)
	{
		if (((((!Global_1939057->f_15 && TASK::_0x2D19BC4DF626CBE7(Global_35, false, 1615635273, 0)) && func_158(0, 32761984)) && !func_159(Global_35)) && !TASK::_0xEC7E480FF8BD0BED(Global_35)) && !func_160())
		{
			if (!Global_1939057->f_16 || bVar13)
			{
				func_161(1);
			}
		}
		else if (Global_1939057->f_16 || bVar13)
		{
			func_161(0);
		}
	}
	if (func_162())
	{
		return;
	}
	if (!Global_1939057->f_10 && (Global_1939057->f_11 || Global_1939057->f_12))
	{
		if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
		{
			Global_1939057->f_8 = 0;
		}
	}
	if (iVar8 != Global_1939057->f_40)
	{
		if (func_163(Global_1939057->f_40, 0))
		{
			if (func_164(Global_1939057->f_40) == 2085633299 && func_165(Global_1939057->f_40))
			{
				if (Global_1939057->f_12)
				{
				}
				else
				{
					func_166(Global_1939057->f_40, 1, 0, 0, 1, 1, 0);
				}
			}
		}
	}
	func_167();
	func_168();
	func_169();
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(746131100))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(746131100, &vVar9))
		{
			switch (vVar9.x)
			{
				case -1740156697:
					switch (vVar9.z)
					{
						case 813560150:
							if (!Global_1939057->f_10)
							{
								func_170();
							}
							if (Global_1939057->f_15 || !func_171())
							{
								func_161(0);
							}
							Global_1939057->f_10 = 1;
							if (!Global_1939057->f_37)
							{
								func_151(869, 0);
								Global_1939057->f_37 = 1;
							}
							break;
						case -414255251:
							func_172();
							func_173(0);
							Global_1939057->f_11 = 1;
							break;
						case -1472057397:
							Global_1939057->f_12 = 1;
							break;
						case -1992626253:
							Global_1939057->f_13 = 1;
							break;
						default:
							break;
					}
					break;
				case -632467210:
					switch (vVar9.z)
					{
						case 813560150:
							Global_1939057->f_10 = 0;
							break;
						case -414255251:
							Global_1939057->f_11 = 0;
							break;
						case -1472057397:
							Global_1939057->f_12 = 0;
							break;
						case -1992626253:
							Global_1939057->f_13 = 0;
							break;
						default:
							break;
					}
					break;
				case -1203660660:
					switch (vVar9.z)
					{
						case -445375936:
							func_172();
							func_152(1);
							func_174();
							break;
						case -1472057397:
							func_175(vVar9.z, 0);
							break;
						case 545934563:
							Global_1939057->f_25 = 1;
							break;
						default:
							func_176(vVar9.z, 0);
							break;
					}
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(746131100);
		}
	else
	{
		}
	else
	{
		}
	}
	bVar15 = PLAYER::_0x51BEA356B1C60225(PLAYER::GET_PLAYER_INDEX(), 35);
	if (bVar15)
	{
		iVar16 = func_177();
		if (iVar16 != 0 && iVar16 != Global_1939057->f_65)
		{
			Global_1939057->f_65 = iVar16;
			if (ENTITY::DOES_ENTITY_EXIST(iVar16) && ENTITY::IS_ENTITY_A_PED(iVar16))
			{
				iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar16);
				func_178(iVar17, ENTITY::_0x964000D355219FC0(iVar17), 1, 0);
			}
		}
	}
	else if (Global_1939057->f_65 == 0)
	{
	}
	if (Global_1939057->f_23 && bVar15)
	{
		if (!func_179(&(Global_1939057->f_50)))
		{
			func_180(&(Global_1939057->f_50));
		}
		if (func_181(&(Global_1939057->f_50)))
		{
			if (func_182(&(Global_1939057->f_50)))
			{
				func_183(&(Global_1939057->f_50));
			}
		}
	}
	else if ((!bVar15 || !Global_1939057->f_23) && Global_1939057->f_6 != MISC::GET_GAME_TIMER())
	{
		if (func_179(&(Global_1939057->f_50)))
		{
			func_184(&(Global_1939057->f_50));
		}
		Global_1939057->f_23 = 0;
		PLAYER::_0xDC68829BB3F37023(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (Global_1939057->f_23)
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(474191950);
	}
}

void func_29()
{
	if (HUD::BUSYSPINNER_IS_ON())
	{
		HUD::BUSYSPINNER_OFF();
	}
	func_185();
}

void func_30()
{
	func_186(&Local_26);
}

void func_31()
{
	switch (func_187(&Local_26))
	{
		case 0:
			if (Local_26.f_135)
			{
				func_188(&Local_26);
			}
			else if (Local_26.f_136 != -1 && func_189(&(Global_1915170->f_17805[Local_26.f_136 /*11*/])))
			{
				if ((MISC::GET_GAME_TIMER() - Local_26.f_137) > 40000)
				{
					func_193(func_190(Local_26.f_136), func_192(func_191(Local_26.f_136)), 580546400);
					func_193(func_190(Local_26.f_136), func_192(func_191(Local_26.f_136)), 847579139);
					Local_26.f_136 = -1;
				}
			}
			func_194(&Local_26);
			break;
		case 1:
			func_195(&Local_26);
			break;
		case 2:
			func_196(&Local_26);
			break;
		case 3:
			func_197(&Local_26);
			break;
		case 4:
			func_198(&Local_26);
			break;
		case 5:
			func_199(&Local_26);
			break;
		case 6:
			func_200(&Local_26, 0);
			break;
		case 7:
		default:
			break;
	}
	func_201(&Local_26);
}

void func_32()
{
	func_200(&Local_26, 1);
}

void func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_202();
	iVar1 = 0;
	iVar2 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar2 = func_203(0, 0);
		if (func_204(iVar2, 1, 1))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
			if (!func_205(iVar2, 2, 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1.25f);
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 188, true);
			if (!func_205(iVar2, 4, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			}
			if (func_205(iVar2, 256, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			}
			if (func_205(iVar2, 2048, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
			}
			if (func_205(iVar2, 1024, 1) || func_205(iVar2, 512, 1))
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			}
		}
	}
}

void func_34()
{
	int iVar0;

	iVar0 = &Global_1878313 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1878313 = iVar0;
	if (((*Global_1835011)[&Global_1878313 /*72*/])->f_8 != 0 && !SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[&Global_1878313 /*72*/])->f_8))
	{
		((*Global_1835011)[&Global_1878313 /*72*/])->f_8 = 0;
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 80)
	{
		((*Global_1835011)[iVar0 /*72*/])->f_8 = 0;
		iVar0++;
	}
}

void func_36()
{
	if (!REPLAY::_0x9EEB007317FA3B9C())
	{
		UIAPPS::_CLOSE_ALL_APPS();
	}
}

void func_37()
{
	if (func_54())
	{
		return;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(&Global_1915118))
	{
		TASK::_0x5A40040BB5AE3EA2(&Global_1915118);
	}
	Global_1915118 = 0;
	if (Global_1938569->f_290)
	{
		return;
	}
	func_206();
}

void func_38()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_20[4]), false))
	{
		return;
	}
	if ((func_207(0, 0) || Global_1572887->f_9) || func_208())
	{
		return;
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("flow_controller") && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) > 0)
	{
		Global_20[4] = SCRIPTS::START_NEW_SCRIPT("flow_controller", 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	}
	else
	{
		SCRIPTS::REQUEST_SCRIPT("flow_controller");
	}
}

void func_39()
{
	func_209(0);
	func_210();
	func_211();
	(*Global_1051387)[Global_1051387->f_40] = 34;
	Global_1051387->f_40++;
	func_212(34, 32768);
	func_212(34, 16384);
}

void func_40()
{
	int iVar0;
	int iVar1;

	if ((Global_1572887->f_9 || func_213(4)) || func_214() != func_215())
	{
		return;
	}
	if (func_216())
	{
		func_217();
	}
	func_218();
	func_219();
	func_220();
	func_221();
	if (Global_1915170->f_17791 != -1)
	{
		if (Global_1915170->f_17791 != Global_1051387->f_3691)
		{
			func_222(Global_1915170->f_17791, func_190(Global_1915170->f_17791));
		}
		Global_1915170->f_17791 = -1;
	}
	func_222(Global_1051387->f_3691, func_190(Global_1051387->f_3691));
	func_223();
	func_224();
	func_225(&(Global_1915170->f_19844));
	if (!func_226(&iVar0))
	{
		return;
	}
	if (iVar0 <= -1 || iVar0 >= 39)
	{
		return;
	}
	if (iVar0 != 34)
	{
		func_228(func_227());
	}
	switch (iVar0)
	{
		case 34:
			func_229();
			break;
		case 30:
			func_230();
			break;
		case 36:
			func_231();
			break;
		case 32:
			func_232();
			break;
		default:
			if (&Global_1051387->f_69[iVar0 /*76*/] == -1)
			{
				return;
			}
			iVar1 = (Global_1051387->f_69[iVar0 /*76*/])->f_18;
			if (iVar1 <= -1 || iVar1 >= 176)
			{
				return;
			}
			if (!func_233(iVar0))
			{
				func_234(iVar0);
			}
			switch (&Global_1051387->f_69[iVar0 /*76*/])
			{
				case 0:
					func_235(iVar0, iVar1);
					break;
				case 2:
					func_236(iVar0, iVar1);
					break;
			}
			break;
	}
}

void func_41()
{
	func_211();
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_275[iParam3 /*7*/] = iParam0;
	(Local_275[iParam3 /*7*/])->f_1 = iParam1;
	(Local_275[iParam3 /*7*/])->f_2 = iParam2;
	StringCopy(&((Local_275[iParam3 /*7*/])->f_3), sParam4, 24);
}

void func_43()
{
	func_237();
}

void func_44()
{
	if (!func_238(1668953026, Global_1915119, 600, -1, 1, 1))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -780621134, "SPAWN_DATA/REGION(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 2126283924, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1661768221, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1500437351, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i):heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1364851805, "SPAWN_DATA/REGION(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -1881300037, "SPAWN_DATA/REGION(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1711937246, "POINT_COLLECTION(%i):type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1538476019, "SPAWN_DATA/REGION(%i)/POINT_COLLECTION(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1608076257, "POINT_COLLECTION(%i)/SPAWN_POINT(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -2021516177, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -1469979977, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -514416884, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):heading");
	func_239(1);
}

void func_45()
{
}

void func_46()
{
	DATAFILE::_DATAFILE_UNLOAD(&Global_1915119);
	func_240(1);
}

void func_47()
{
	func_241();
	func_242(0);
}

void func_48()
{
	switch (func_243())
	{
		case 0:
			if (!func_244())
			{
				return;
			}
			func_242(1);
		case 1:
			Global_1958224->f_53 = 0;
			StringCopy(&(Global_1958224->f_56), "", 128);
			func_242(2);
		case 2:
			MISC::_0x5CB71EAA1429A358(Global_1958224->f_50);
			MISC::DISPLAY_ONSCREEN_KEYBOARD(&Global_1958224, &(Global_1958224->f_1), &(Global_1958224->f_17), &(Global_1958224->f_33), "", "", "", Global_1958224->f_49);
			func_242(3);
		case 3:
			switch (MISC::UPDATE_ONSCREEN_KEYBOARD())
			{
				case 1:
					if (MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
					{
						func_242(8);
						return;
					}
					else
					{
						func_242(4);
						return;
					}
					break;
				case 0:
					return;
				default:
					func_242(8);
					return;
			}
			break;
		case 4:
			switch (SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(Global_1958224->f_53))
			{
				case 3:
					if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), &(Global_1958224->f_53)))
					{
					}
					break;
				case 2:
					func_245(0);
					break;
				case 0:
					func_242(6);
					break;
				case 1:
				case 4:
					func_246(1);
					break;
				default:
					func_246(0);
					break;
			}
			break;
		case 5:
			func_247();
			break;
		case 6:
			func_248(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
			func_249(1);
			func_242(7);
		case 7:
			func_251(func_250());
			func_242(8);
			return;
		case 8:
			func_241();
			func_242(0);
			break;
	}
}

void func_49()
{
	func_241();
}

void func_50()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Call_Loc((Local_169[iVar0 /*7*/])->f_2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Call_Loc((Local_275[iVar0 /*7*/])->f_2);
		iVar0++;
	}
}

void func_51()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar19;
	struct<11> Var20;
	int iVar37;

	iVar0 = func_252();
	bVar1 = (!func_253(&Global_1939168, 8388608) || Global_1939168->f_11 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1939168->f_7 = (LAW::_0x69E181772886F48B(iVar0) || LAW::_0xF0FBFB9AB15F7734(iVar0, 0, 0));
			Global_1939168->f_9 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1939168->f_8 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1939168->f_10 = LAW::_0xF46108C50A22B029();
			Global_1939168->f_11 = LAW::_0xDD5FD601481F648B(iVar0);
			Global_1939168->f_20 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1939168->f_15 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1939168->f_12 = LAW::_0xAD401C63158ACBAA(iVar0);
			if (Global_1939168->f_12)
			{
				LAW::_0x9C5BD8C562565CE6(&Var2);
				Global_1939168->f_13 = Var2.f_10;
				Global_1939168->f_17 = Var2.f_11 == 6;
			}
			Global_1939168->f_14 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::_0x532C5FDDB986EE5C(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(Var20, 0);
						if (iVar37 > Global_1939168->f_14)
						{
							Global_1939168->f_14 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_254();
		}
	}
	if (Global_1939168->f_34 != 0)
	{
		Global_1939168->f_35 = Global_1939168->f_34;
	}
	Global_1939168->f_16 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1939168->f_6 = ENTITY::IS_ENTITY_DEAD(Global_35);
	Global_1939168->f_52 = FIRE::_0xAB7993BA61A4674F(Global_35, 1);
	if (!Global_1939168->f_6)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1939168->f_38), false, 0, false);
		Global_1939168->f_34 = PED::GET_MOUNT(Global_35);
		if (Global_1572887->f_13 == -1 && Global_1939168 & 524288 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (Global_1572887->f_13 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		else if (Global_1939168 & 131072 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
	}
	else
	{
		if (func_64() == -1 && CAM::_0x139EFB0A71DD9011())
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1939168->f_38 = 0;
		Global_1939168->f_34 = 0;
	}
}

void func_52()
{
	if (!func_255(8))
	{
		return;
	}
	if (Global_1951131->f_918 > 0)
	{
		func_256(&(Global_1951131->f_835));
	}
	if (Global_1951131->f_916 > 0 && !func_255(16384))
	{
		func_257(&(Global_1951131->f_734));
	}
	else if (Global_1951131->f_917 > 0)
	{
		func_258(&(Global_1951131->f_633));
	}
	if (func_255(16384))
	{
		func_259(16384);
	}
	if ((((Global_1951131->f_917 <= 0 && Global_1951131->f_916 <= 0) && Global_1951131->f_918 <= 0) && !func_260(0)) && !Global_1954385->f_1)
	{
		if (func_255(512))
		{
			if (func_64() == -1)
			{
				func_261(0, 4);
			}
			else
			{
				func_262(0, 1280353230);
			}
			func_259(512);
			func_259(16);
		}
		if (func_255(16))
		{
			if (func_64() == -1)
			{
				func_261(0, 4);
			}
			else
			{
				func_262(0, -1343026476);
			}
			func_259(16);
		}
		func_259(8);
	}
}

void func_53()
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* sVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;

	if (Global_1938998->f_9 > 0f)
	{
		bVar0 = false;
		fVar1 = 0.01f;
		iVar2 = 30000;
		if (Global_1938998->f_14)
		{
			fVar1 = 0.004f;
			iVar2 = 30000;
		}
		if (Global_1938998->f_1 != -1 && Global_1938998->f_1 < &Global_1938998)
		{
			bVar0 = true;
			fVar1 = 0.25f;
		}
		if ((MISC::GET_GAME_TIMER() >= (Global_1938998->f_3 + iVar2) && !Global_1938998->f_10) || bVar0)
		{
			if ((((MISC::GET_GAME_TIMER() >= Global_1938998->f_4 || bVar0) && (Global_1938998->f_9 < 1f || bVar0)) && (Global_1938998->f_9 >= func_263() || Global_1938998->f_15.f_1 == 0f)) && !func_264())
			{
				Global_1938998->f_9 = (Global_1938998->f_9 - (fVar1 * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_9 < 0f)
				{
					Global_1938998->f_9 = 0f;
				}
			}
		}
		PED::_0x06D26A96CA1BCA75(Global_35, 10, Global_1938998->f_9, 0);
	}
	if (func_265())
	{
		if (&Global_1938998 >= 2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
		PED::_0x406CCF555B04FAD3(Global_35, 1, Global_1938998->f_9);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false);
		if (iVar3 != joaat("weapon_unarmed") && iVar3 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 1, true);
		}
		if (Global_1938998->f_9 >= 1f)
		{
			Global_1938998->f_8 = (Global_1938998->f_8 + (1f * BUILTIN::TIMESTEP()));
		}
		else
		{
			Global_1938998->f_8 = 0f;
		}
		if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::_0x190F7DA1AC09A8EF())
		{
			if (Global_1938998->f_15.f_1 > 0f)
			{
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					bVar4 = false;
					switch (Global_1938998->f_15.f_12)
					{
						case 2:
							if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (!CAM::_0xA24C1D341C6E0D53(1, 0, 1) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (CAM::_0xA24C1D341C6E0D53(1, 0, 1))
							{
								bVar4 = true;
							}
							break;
					}
					if (bVar4)
					{
						CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
					}
				}
				if (Global_1938998->f_15.f_9 != Global_1938998->f_15.f_1 || !CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					sVar5 = "";
					if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						sVar5 = "POV_AIM_DRUNK_SHAKE";
						Global_1938998->f_15.f_12 = 2;
					}
					else if (CAM::_0xA24C1D341C6E0D53(1, 0, 1))
					{
						sVar5 = "POV_DRUNK_SHAKE";
						Global_1938998->f_15.f_12 = 1;
					}
					else
					{
						sVar5 = "DRUNK_SHAKE";
						Global_1938998->f_15.f_12 = 0;
					}
					if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
					{
						CAM::SHAKE_GAMEPLAY_CAM(sVar5, func_266());
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(func_266());
					}
					Global_1938998->f_15.f_9 = Global_1938998->f_15.f_1;
				}
			}
			else if (CAM::IS_GAMEPLAY_CAM_SHAKING())
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
			}
		}
		if (Global_1938998->f_9 >= func_263())
		{
			fVar6 = ((0.2f * BUILTIN::POW(260f, ((Global_1938998->f_9 - func_263()) - 0.25f))) + 0.1f);
			if (&Global_1938998 >= 2)
			{
				fVar6 = (fVar6 + 0.15f);
			}
			if (fVar6 > 1f)
			{
				fVar6 = 1f;
			}
			else if (fVar6 < 0f)
			{
				fVar6 = 0f;
			}
		}
		else
		{
			fVar6 = 0f;
		}
		if (fVar6 > Global_1938998->f_15.f_1)
		{
			if (MISC::GET_GAME_TIMER() >= Global_1938998->f_3 + 1500)
			{
				Global_1938998->f_15.f_1 = (Global_1938998->f_15.f_1 + (0.18f * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_15.f_1 > fVar6)
				{
					Global_1938998->f_15.f_1 = fVar6;
				}
			}
		}
		else if (fVar6 < Global_1938998->f_15.f_1)
		{
			Global_1938998->f_15.f_1 = (Global_1938998->f_15.f_1 - (0.18f * BUILTIN::TIMESTEP()));
			if (Global_1938998->f_15.f_1 < fVar6)
			{
				Global_1938998->f_15.f_1 = fVar6;
			}
		}
		bVar7 = GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01");
		if (((Global_1938998->f_15.f_1 > 0f && !bVar7) || (Global_1938998->f_15.f_1 <= 0f && bVar7)) || Global_1938998->f_15 != Global_1938998->f_15.f_1)
		{
			if (!bVar7)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01");
			}
			GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", func_267());
			Global_1938998->f_15 = Global_1938998->f_15.f_1;
		}
		if (bVar7)
		{
			fVar8 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR"));
			if (fVar8 < 0f)
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar9 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD"));
			if (fVar9 < 0f)
			{
				fVar9 = (fVar9 * -1f);
			}
			if (fVar8 > fVar9)
			{
				fVar10 = fVar8;
			}
			else
			{
				fVar10 = fVar9;
			}
			fVar11 = fVar10;
			if (fVar11 > Global_1938998->f_15.f_8)
			{
				Global_1938998->f_15.f_8 = (Global_1938998->f_15.f_8 + (0.8f * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_15.f_8 > fVar11)
				{
					Global_1938998->f_15.f_8 = fVar11;
				}
			}
			else if (fVar11 < Global_1938998->f_15.f_8)
			{
				Global_1938998->f_15.f_8 = (Global_1938998->f_15.f_8 - (0.8f * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_15.f_8 < fVar11)
				{
					Global_1938998->f_15.f_8 = fVar11;
				}
			}
			GRAPHICS::_ANIMPOSTFX_SET_POTENCY("PlayerDrunk01", 1, Global_1938998->f_15.f_8);
		}
	}
	if (func_268())
	{
		func_269();
	}
}

int func_54()
{
	return 0;
}

void func_55(int iParam0)
{
	Global_19 = (Global_19 || iParam0);
}

void func_56(int iParam0)
{
	int iVar0;

	if (func_270(iParam0, 1) || func_270(iParam0, 2))
	{
		iVar0 = func_271(iParam0);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			if (func_270(iParam0, 1))
			{
				func_272(iVar0, 0);
				func_273(iVar0);
				func_274(iParam0, 1);
			}
			if (func_270(iParam0, 2))
			{
				POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(iVar0);
				POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iVar0);
				VOLUME::DELETE_VOLUME(iVar0);
				func_274(iParam0, 2);
			}
		}
	}
}

void func_57(int iParam0)
{
	if (func_270(iParam0, 4))
	{
		func_275(iParam0);
		func_274(iParam0, 4);
	}
	if (func_270(iParam0, 8))
	{
		func_276(iParam0);
		func_274(iParam0, 8);
	}
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_277() && func_278(68))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_279(iVar0, Global_1896610->f_39, 1, 0) && !func_279(iVar0, Global_1896610->f_38, 1, 0))
		{
			if (!Global_1896610->f_40)
			{
				if (PED::IS_PED_IN_ANY_BOAT(iVar0))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
					iVar2 = func_280(iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, false, false);
						VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(iVar1, true);
						VEHICLE::EXPLODE_VEHICLE(iVar1, false, false, 0);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
					}
				}
				if (PED::IS_PED_ON_MOUNT(iVar0))
				{
					iVar3 = PED::GET_MOUNT(iVar0);
					func_281(iVar3, 0, 0);
				}
				if (func_277() && func_278(82))
				{
					func_282(PLAYER::PLAYER_PED_ID(), joaat("weapon_drowning"), 0, 0);
				}
				else
				{
					func_283(5, 0);
				}
				Global_1896610->f_40 = 1;
			}
		}
	}
	else if (Global_1896610->f_40)
	{
		PED::_0x8D9DB115FBA8E23D(iVar0);
		PED::_0xE4EF4382E22C780C(iVar0);
		Global_1896610->f_40 = 0;
	}
}

int func_59()
{
	return Global_1896610->f_41;
}

int func_60(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = func_62(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) > 0)
	{
		if (func_64() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1896610->f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1896610->f_42, 523);
				return 1;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				func_284(sVar0);
				return 1;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1896610->f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1896610->f_43), Global_1896610->f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1896610->f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return 0;
		}
		Global_1896610->f_42 = SCRIPTS::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1896610->f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		if (func_285(iParam0) != func_285(func_59()) || func_286(iParam0))
		{
			func_287(func_59(), 0);
			iVar1 = func_288(Global_36, 1);
			if (!func_289(iVar1))
			{
				if (!func_253(&Global_1939168, 32768) && !func_290())
				{
					if (func_291(func_285(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						func_292(-1, -1, -1, 0, func_285(iParam0), 0);
					}
					else if (func_286(iParam0))
					{
						func_292(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_97(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_293(iParam0);
			}
			else
			{
				func_287(iParam0, 1);
			}
		}
		if (func_59() != -1)
		{
			func_294(func_59());
			func_275(func_59());
		}
		func_295(iParam0);
		PLAYER::_0x14E57F88BA0A07FC(func_296(iParam0));
		func_297(iParam0);
		func_298(iParam0);
		iVar2 = -1000;
		if (func_299(func_102()))
		{
			iVar2 = ((*Global_1887327)[func_102() /*36*/])->f_2;
		}
		if (iVar2 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar3 = func_288(Global_36, 1);
			if (func_300(iVar3, 1, 0) == 0)
			{
				func_302(func_301(iParam0, 1), func_285(iParam0));
			}
			func_303(0.775f, 0.2f, 0.025f, 0f);
			func_276(iParam0);
		}
		if (8 == iParam0 != func_304(373691918))
		{
			func_305(373691918, 8 == iParam0, 0);
		}
		return 1;
	}
	return 0;
}

int func_61(vector3 vParam0)
{
	return func_306(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_64() != -1)
	{
		return;
	}
	iVar1 = 926;
	iVar2 = 946;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		func_307((iVar1 + iVar0), 0);
		iVar0++;
	}
}

int func_64()
{
	return Global_1572887->f_13;
}

void func_65()
{
	Global_1900718->f_67 = func_308(0, 0, 0);
}

struct<2> func_66(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_67(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_309(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_68(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_69(int iParam0)
{
	return (Global_1939168 && (-1 - iParam0) & 81919) != 0;
}

int func_70(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = false;
	if (bVar3)
	{
		bVar2 = bParam1;
	}
	else
	{
		bVar2 = func_97(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!func_310(&Global_1900854, 1024))
	{
		func_311(Global_1900854, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar1 = (&Global_1900788 - 1);
	while (iVar1 >= 0)
	{
		if (func_312(*((*Global_1900789)[iVar1 /*2*/])) && func_313(*((*Global_1900789)[iVar1 /*2*/])))
		{
			if (!func_314(iVar1, 1024))
			{
				switch (Global_1900789[iVar1 /*2*/])
				{
					case 2:
						if (!((*Global_1835011)[iVar0 /*72*/])->f_67)
						{
							iVar0 = func_315(*((*Global_1900789)[iVar1 /*2*/]));
							if (func_316(iVar0))
							{
								if (!bParam1)
								{
									func_317(iVar0, 0);
								}
								func_318(iVar0, -1, bVar2, 1, 1, 0, 0);
								func_319(iVar0);
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 3:
						if (MAP::DOES_BLIP_EXIST(Global_1900820[iVar1 /*2*/]))
						{
							MAP::REMOVE_BLIP((*Global_1900820)[iVar1 /*2*/]);
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1900820[iVar1 /*2*/]))
						{
							MAP::REMOVE_BLIP((*Global_1900820)[iVar1 /*2*/]);
						}
						break;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	if (bParam2)
	{
		func_320();
	}
	func_65();
	return 1;
}

void func_71()
{
	EVENT::_0x608AD36A644A97FE(joaat("p_register05x"), 1, 0);
	EVENT::_0x608AD36A644A97FE(joaat("p_register06x"), 1, 0);
	EVENT::_0x608AD36A644A97FE(joaat("p_register03x"), 1, 0);
	EVENT::_0x608AD36A644A97FE(joaat("player_zero"), 1, 0);
	EVENT::_0x608AD36A644A97FE(11966224, 1, 0);
	EVENT::_0x608AD36A644A97FE(-1038436471, 1, 0);
}

void func_72()
{
	bool bVar0;
	float fVar1;

	if (!func_321())
	{
		Global_1949739->f_7 = 0;
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1949739->f_7))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_1949739->f_7, &bVar0, false, 3, false);
		if (func_322(bVar0))
		{
			if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
			{
				if (!func_299(Global_1893575->f_2) || Global_1893575->f_2 != 5)
				{
					fVar1 = WEAPON::_0xD56E5F336C675EFA(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_1949739->f_7, 3)));
					WEAPON::REMOVE_WEAPON_FROM_PED(Global_1949739->f_7, bVar0, true, -142743235);
					bVar0 = WEAPON::_0xF8204EF17410BF43(-1101297303, 1056964608, 1065353216, 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_1949739->f_7, bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0), true, false, 3, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		WEAPON::GET_CURRENT_PED_WEAPON(Global_1949739->f_7, &bVar0, false, 2, false);
		if (func_322(bVar0))
		{
			if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
			{
				if (!func_299(Global_1893575->f_2) || Global_1893575->f_2 != 5)
				{
					fVar1 = WEAPON::_0xD56E5F336C675EFA(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_1949739->f_7, 2)));
					WEAPON::REMOVE_WEAPON_FROM_PED(Global_1949739->f_7, bVar0, true, -142743235);
					bVar0 = WEAPON::_0xF8204EF17410BF43(-1101297303, 1056964608, 1065353216, 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_1949739->f_7, bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0), true, false, 2, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		Global_1949739->f_7 = 0;
	}
}

void func_73(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case joaat("event_damage"):
		case 402722103:
			func_323(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			if (func_64() == -1)
			{
				func_324(iParam0);
			}
			break;
		case -1682387274:
			break;
	}
}

void func_74(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 1924269094:
			func_325(iParam0);
			break;
	}
}

void func_75(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case joaat("event_damage"):
		case 402722103:
			func_326(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			func_327(iParam0);
			break;
	}
}

void func_76(int iParam0)
{
	if (func_64() != 0)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 1327216456:
			func_328(iParam0);
			break;
		case -1651585854:
			func_329(iParam0);
			break;
		case -1985279805:
			func_330(iParam0);
			break;
		case 218595333:
			func_331(iParam0);
			break;
		case 1553659161:
			func_332(iParam0);
			break;
		case 1784289253:
			func_333(iParam0);
			break;
		case 1387172233:
			func_334(iParam0);
			break;
		case 1082572570:
			func_335(iParam0);
			func_336(iParam0);
			break;
		case -687266558:
			func_337(iParam0);
			func_338(iParam0);
			func_339(iParam0);
			break;
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	struct<4> Var5;
	struct<10> Var10;
	var uVar20;
	int iVar22;
	int iVar23;

	iVar22 = SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0);
	iVar23 = 10;
	switch (iVar22)
	{
		case 1165534493:
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &uVar20, 2))
			{
				return;
			}
			func_340(&uVar20);
			break;
		case -1286831256:
			if (func_255(128))
			{
				func_259(128);
				return;
			}
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var5, 5))
			{
				return;
			}
			if (func_255(262144) && !Var5.f_3)
			{
				return;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var5);
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2) != PLAYER::PLAYER_ID())
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Var5.f_2))
			{
				ENTITY::_0x18FF3110CF47115D(Var5.f_2, 10, false);
				bVar0 = PED::_0x7E02E4218D916B94(Var5.f_2, PED::_GET_METAPED_TYPE(iVar2), 1);
				if (bVar0 == 0)
				{
					ENTITY::_0xA48E4801DEBDF7E4(Var5.f_2, 0);
				}
				else if (!func_341(bVar0, 1))
				{
					ENTITY::_0xA48E4801DEBDF7E4(Var5.f_2, 0);
				}
			}
			if (func_342())
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				return;
			}
			Global_1951131->f_3250 = PED::_0x1F714E7A9DADFC42(iVar2);
			if (&Global_1951131->f_1657.f_1[iVar23 /*3*/] != &Global_1951131->f_81[iVar23 /*12*/])
			{
				func_343(&(Global_1951131->f_1657.f_1[iVar23 /*3*/]), 0);
			}
			if (func_255(32768))
			{
				func_344();
			}
			else
			{
				func_345(iVar2, &(Global_1951131->f_81[10 /*12*/]), 0, 1108822547, 1, 1, 0, 1, 0, 1, 1);
			}
			break;
		case -369170747:
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var10, 10))
			{
				return;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var10));
			if (iVar1 != PLAYER::PLAYER_ID())
			{
			}
			else
			{
				func_347(func_346(1829295266), 1);
				if (&Global_1951131->f_1657.f_1[iVar23 /*3*/] != &Global_1951131->f_81[iVar23 /*12*/])
				{
					func_343(&(Global_1951131->f_1657.f_1[iVar23 /*3*/]), 0);
				}
				bVar0 = PED::_0x7E02E4218D916B94(Var10.f_1, PED::_GET_METAPED_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var10)), 1);
				bVar3 = bVar0;
				if (func_341(bVar3, 1))
				{
					if (func_255(32768))
					{
						func_344();
					}
					iVar4 = func_348(bVar3);
					if (iVar4 != -2061583405 && iVar4 != -525676072)
					{
						return;
					}
					if (iVar4 == -525676072)
					{
						PED::_0xC494C76A34266E82(Global_35, 0);
						if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, Global_35, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
						{
						}
					}
					func_349(bVar3);
					func_345(PLAYER::PLAYER_PED_ID(), bVar0, 0, func_350(bVar3), 1, 1, 0, 1, 0, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Global_1951131->f_3250))
					{
						ENTITY::_0x18FF3110CF47115D(Global_1951131->f_3250, 10, false);
					}
				}
				else
				{
					func_151(87, 0);
					func_345(PLAYER::PLAYER_PED_ID(), &(Global_1951131->f_81[10 /*12*/]), 0, 1108822547, 0, 1, 0, 0, 1, 0, 1);
					func_351(Var10.f_2, Var10.f_3, Var10.f_4, Var10.f_5, Var10.f_6, Var10.f_7, Var10.f_8, Var10.f_9);
				}
			}
	}
}

void func_78(int iParam0)
{
	struct<2> Var0;

	if (func_64() != -1)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 2030961287:
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
			{
				return;
			}
			if (Var0 == func_280(Global_35))
			{
				return;
			}
			if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("cs_bronte"))
			{
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 10, false);
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 2, false);
				return;
			}
			if (ENTITY::IS_ENTITY_A_PED(Var0) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)) == 1030835986)
			{
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 10, false);
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 2, false);
				return;
			}
			if (PED::_0x7E02E4218D916B94(Var0.f_1, 0, 0) != 0)
			{
				ENTITY::_0xA48E4801DEBDF7E4(Var0.f_1, 1);
			}
			break;
	}
}

void func_79(int iParam0)
{
	if (func_64() == 0)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case -1863021589:
			func_352(iParam0);
			break;
		case -1231347001:
			func_353(iParam0);
			break;
	}
}

void func_80(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 1794914733:
			func_354(iParam0);
			break;
		case 353377915:
			func_355(iParam0);
			break;
		case 1208357138:
			func_356(iParam0, 0, 0);
			break;
		case 1081092949:
			func_357(iParam0);
			break;
		case 1505348054:
			func_358(iParam0);
			break;
	}
}

void func_81(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case -178091376:
			func_359(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	struct<2> Var0;
	struct<7> Var2;
	char* sVar14;
	int iVar15;
	var uVar16;

	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != 2099179610)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (func_360(Var0.f_1))
	{
		return;
	}
	Var2.f_6 = 3;
	Var2 = Var0;
	Var2.f_1 = Var0.f_1;
	Var2.f_2 = Var0.f_1;
	sVar14 = func_361(Var0.f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
	{
		Var2.f_3 = sVar14;
	}
	if (func_163(Var0.f_1, 0))
	{
		iVar15 = func_362(Var0.f_1, 1);
		if (iVar15 != 0)
		{
			Var2.f_2 = iVar15;
		}
		else
		{
			uVar16 = Var0.f_1;
			if (func_363(&uVar16))
			{
				Var2.f_2 = uVar16;
			}
		}
		INVENTORY::_0xFD41D1D4350F6413(&Var2);
	}
	else
	{
		INVENTORY::_0xFD41D1D4350F6413(&Var2);
	}
}

void func_83(int iParam0)
{
	var uVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &uVar0, 6))
	{
		MISC::_COPY_MEMORY(Global_1949739, &uVar0, 6);
		Global_1949739->f_6 = MISC::GET_GAME_TIMER();
	}
}

void func_84(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (Global_1572887->f_9)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case -2091944374:
			func_364(iParam0);
			break;
		case -1511724297:
			func_365(iParam0);
			break;
		case -369170747:
			func_366(iParam0);
			break;
	}
}

void func_85(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 3);
	if (func_64() == 0)
	{
	}
	if (iVar0 == Global_35)
	{
		Global_1184669 = 1;
	}
}

void func_86(int iParam0)
{
	struct<8> Var0;
	int iVar10;
	int iVar11;
	int iVar12;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 10);
	iVar10 = Var0;
	iVar11 = Var0.f_7;
	switch (iVar10)
	{
		case 30:
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_2))
			{
				if (!PLAYER::_0x354F689C4FFAAB37(Var0.f_3))
				{
					PLAYER::_0x7C32191D9FB2BDEA(Var0.f_3);
				}
				switch (iVar11)
				{
					case 0:
						break;
					case 1:
						if (func_64() == 0)
						{
						}
						else
						{
							iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(Var0.f_2));
							func_178(iVar12, ENTITY::_0x964000D355219FC0(iVar12), 1, 0);
							Jump @203; //curOff = 191
							Jump @203; //curOff = 194
						}
					}
					break;
				case 35:
					Global_1939057->f_23 = !Global_1939057->f_23;
					Global_1939057->f_6 = MISC::GET_GAME_TIMER();
					PLAYER::_0xDC68829BB3F37023(PLAYER::GET_PLAYER_INDEX(), Global_1939057->f_23);
					break;
				case 26:
					break;
				case 55:
					Global_1070355->f_26843.f_89 = 1;
					break;
				case 37:
				case 38:
				case 39:
				case 40:
					break;
				default:
					break;
			}
		}

void func_87(int iParam0)
{
	struct<10> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_9 == -2106738342)
	{
		Global_1939168->f_49 = MISC::GET_GAME_TIMER();
		Global_1939168->f_50 = 1;
	}
}

void func_88(int iParam0)
{
	int iVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::IS_PED_HUMAN(iVar0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			Global_1949739->f_7 = iVar0;
		}
	}
}

void func_89(int iParam0)
{
	int iVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 2))
	{
		if (Global_35 == iVar0)
		{
			func_367(-1315007749, 0, 0);
		}
	}
}

void func_90(int iParam0)
{
	vector3 vVar0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 5))
	{
		return;
	}
	if (!func_368(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(vVar0.z)))
	{
		return;
	}
	Global_17096.f_17 = 0;
	Global_1268935->f_513.f_318 = func_369(vVar0.y);
	Global_1268935->f_513.f_317 = ENTITY::GET_ENTITY_MODEL(vVar0.y);
}

void func_91(int iParam0)
{
	vector3 vVar0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 4))
	{
		return;
	}
	if (!func_368(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(vVar0.y)))
	{
		return;
	}
	if (Global_1268935->f_513.f_318 != 0)
	{
		if (vVar0.z == 1)
		{
		}
		else if (!func_370(Global_1268935->f_513.f_318, 1))
		{
			func_371(PLAYER::_0x5CA6BBD4A7D8145E(PLAYER::PLAYER_ID()), 0, 1);
		}
		Global_17096.f_17 = 0;
		Global_1268935->f_513.f_318 = 0;
		Global_1268935->f_513.f_317 = 0;
	}
}

void func_92(int iParam0)
{
	if (!func_372(iParam0))
	{
	}
}

void func_93(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(3, iParam0))
	{
		case -1267317510:
			if (func_373())
			{
				func_374(iParam0);
			}
			SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(3, iParam0, 1);
			break;
		case -346212524:
			func_375(iParam0);
			SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(3, iParam0, 1);
			break;
	}
}

void func_94()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_376(iVar0))
		{
			func_377(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 138)
	{
		if (func_299(iVar0))
		{
			if (func_378(iVar0))
			{
				func_379(iVar0, 1, 350);
			}
			else
			{
				func_379(iVar0, 0, 350);
			}
			if (func_103(iVar0))
			{
				func_380(iVar0, 1);
			}
			else
			{
				func_380(iVar0, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_381(iVar1))
		{
			if (func_382(iVar1, 0))
			{
				func_383(iVar1, 1);
			}
			else
			{
				func_383(iVar1, 0);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_376(iVar2))
		{
			if (func_384(iVar2, 1))
			{
				func_385(iVar2, 1);
			}
			else
			{
				func_385(iVar2, 0);
			}
			if (func_386(iVar2, 4))
			{
				func_387(iVar2, 1);
			}
			else
			{
				func_387(iVar2, 0);
			}
		}
		iVar2++;
	}
}

bool func_96()
{
	return func_388(1, 255);
}

int func_97(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_389(bParam1, bParam2, bParam3);
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
	if (LAW::_0xAD401C63158ACBAA(iParam0))
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

void func_98(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;

	if (!bParam0)
	{
		if (func_390())
		{
			iVar0 = func_285(func_59());
			if (func_376(iVar0) && func_391(iVar0))
			{
				func_392(iVar0);
				func_393(iVar0, func_291(iVar0));
				func_394(iVar0, 0);
			}
		}
	}
	else
	{
		if (func_64() == -1)
		{
			iVar1 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
		}
		else
		{
			Var2 = { func_100(PLAYER::PLAYER_ID()) };
			BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var2, &iVar9);
			iVar1 = iVar9;
		}
		func_393(func_395(), iVar1);
	}
}

void func_99()
{
	if (func_64() == -1)
	{
		if (func_97(PLAYER::PLAYER_ID(), 1, 1, 1))
		{
			if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				if (!func_103(func_102()))
				{
					func_380(func_102(), 1);
				}
			}
		}
		else if (func_103(func_102()))
		{
			if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0 || func_397(func_396(func_102())) >= 4320)
			{
				func_380(func_102(), 0);
			}
		}
	}
}

struct<7> func_100(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

void func_101()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (Global_1273874->f_2.f_1 == 1)
		{
			NETWORK::_0x236905C700FDB54D();
			if (func_398("net_jail", 1024, &(Global_1273874->f_2)))
			{
				Global_1273874->f_2.f_1 = 2;
			}
		}
	}
}

int func_102()
{
	return Global_1893575->f_2;
}

int func_103(int iParam0)
{
	if (!func_299(iParam0))
	{
		return 0;
	}
	return func_399(iParam0, 67108864);
}

void func_104(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	struct<17> Var6;
	int iVar23;
	var uVar24;
	float fVar41;
	int iVar42;
	int iVar43;

	iVar0 = func_400();
	bVar1 = false;
	bVar2 = Global_1939168->f_7;
	bVar3 = true;
	bVar4 = false;
	if ((iVar0 == 5 || bParam1) || CAM::_0x139EFB0A71DD9011())
	{
		if (Global_1938075->f_75.f_59 != 0)
		{
			func_401(0);
		}
	}
	else if ((!bVar2 && !bParam0) && Global_1938075->f_75.f_62 == -1)
	{
		if (Global_1938075->f_75.f_59 != 0)
		{
			if (Global_1938075->f_75.f_59 != 9)
			{
				func_401(0);
			}
		}
	}
	else if (bParam0)
	{
		bVar1 = func_402(PLAYER::PLAYER_ID());
	}
	if (Global_1938075->f_75.f_62 != -1)
	{
		if (Global_1938075->f_75.f_59 != Global_1938075->f_75.f_62)
		{
			func_401(Global_1938075->f_75.f_62);
		}
	}
	switch (Global_1938075->f_75.f_59)
	{
		case 0:
			if (iVar0 != 5)
			{
				if (func_403(PLAYER::PLAYER_ID(), 0, 0, 1))
				{
					func_404(bVar1);
					return;
				}
				else if (bVar2)
				{
					if (func_401(1))
					{
						return;
					}
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_406();
					func_407(-1);
					AUDIO::_0x3E98AC9D8C56C62C(0);
					if (func_408(4))
					{
						func_409(0);
					}
					func_410(2);
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_2, "LAW_UI_WITNESS");
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, true);
					func_411();
					func_412(&(Global_1938075->f_75.f_56));
					if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Witness", "HUD_Wanted_Sounds", true, 0);
					}
					if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()))
					{
						Global_1938075->f_6 = LAW::_GET_HUD_PLAYER_CRIME_TYPE(PLAYER::PLAYER_ID());
						sVar5 = func_413(Global_1938075->f_6);
						if (Global_1938075->f_6 == -1361146315)
						{
							if (!func_414(299))
							{
								if (!func_415() && !func_416())
								{
									func_151(299, 0);
								}
							}
						}
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_12, true);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_5, sVar5);
						func_410(2);
					}
					else
					{
						if ((!func_415() && !func_414(288)) && !func_416())
						{
							func_151(288, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_12, false);
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_3, false);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_4, "LAW_UI_INVESTIGATING");
						func_410(1);
					}
					break;
				case 1:
					if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()) || bParam0)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_12, true);
						func_410(2);
					}
					break;
				case 2:
					iVar23 = LAW::_GET_HUD_PLAYER_CRIME_TYPE(PLAYER::PLAYER_ID());
					if (LAW::_0xDAEFDFDB2AEECE37(iVar23, 0) >= LAW::_0xDAEFDFDB2AEECE37(Global_1938075->f_6, 0))
					{
						Global_1938075->f_6 = iVar23;
					}
					sVar5 = func_413(Global_1938075->f_6);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_5, sVar5);
					if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_1.f_3) != 1)
					{
						if ((!func_415() && !func_414(290)) && !func_416())
						{
							func_151(290, 0);
						}
						func_411();
					}
					else if ((!func_415() && !func_414(289)) && !func_416())
					{
						func_151(289, 0);
					}
					func_417();
					if (bParam0 && Global_1939168->f_9 != 1370593166)
					{
						func_404(bVar1);
						return;
					}
					break;
			}
			break;
		case 2:
			bVar4 = true;
			if (func_418())
			{
				if (func_401(5))
				{
					return;
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_411();
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_CRIME_REPORTED");
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
					if (Global_1939168->f_12)
					{
						LAW::_0x9C5BD8C562565CE6(&Var6);
						if (Var6.f_16)
						{
							func_419();
							func_411();
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, true);
						}
						else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, true);
					}
					func_417();
					func_412(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (Global_1939168->f_12)
					{
						LAW::_0x9C5BD8C562565CE6(&Var6);
					}
					if (((func_420(&(Global_1938075->f_75.f_56)) > 4000 && LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID())) || Var6.f_12 == 5) || Var6.f_12 == 3)
					{
						if (func_421())
						{
							AUDIO::_0x3E98AC9D8C56C62C(1);
						}
						if (func_401(3))
						{
							return;
						}
					}
					break;
			}
			break;
		case 3:
			bVar4 = true;
			if (func_418())
			{
				if (func_401(5))
				{
					return;
				}
			}
			else
			{
				if (!func_421() || !Global_1939168->f_12)
				{
					if (func_401(8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
						return;
					}
				}
				if (func_422())
				{
					if (func_401(4))
					{
						return;
					}
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
					func_412(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (func_420(&(Global_1938075->f_75.f_56)) > 2000)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, true);
						if (Global_1939168->f_12)
						{
							LAW::_0x9C5BD8C562565CE6(&Var6);
						}
						if (Var6.f_16)
						{
							if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14))
							{
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, false);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, true);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_5, func_423());
						}
						else
						{
							if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14))
							{
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, true);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, false);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_5, "LAW_UI_UNKNOWN_SUSPECT");
						}
						func_412(&(Global_1938075->f_75.f_56));
						func_410(2);
					}
					break;
				case 2:
					if (func_420(&(Global_1938075->f_75.f_56)) > 2000)
					{
						func_412(&(Global_1938075->f_75.f_56));
						if (Global_1939168->f_12)
						{
							LAW::_0x9C5BD8C562565CE6(&Var6);
						}
						if (Var6.f_12 == 3)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_MOVE_ALONG");
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
						}
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
						func_410(1);
					}
					break;
			}
			break;
		case 4:
			bVar4 = true;
			if (func_418())
			{
				if (func_401(5))
				{
					return;
				}
			}
			else if (!func_422())
			{
				if (func_401(3))
				{
					return;
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, true);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INTERROGATING");
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
					if ((!func_415() && !func_414(300)) && !func_416())
					{
						func_151(300, 0);
					}
					func_412(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (func_420(&(Global_1938075->f_75.f_56)) > 2000)
					{
						func_412(&(Global_1938075->f_75.f_56));
					}
					break;
				case 2:
					break;
			}
			break;
		case 5:
			func_407(func_400());
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_411();
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, false);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, "");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, func_423());
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, false);
					if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Wanted_Spotted", "HUD_Wanted_Sounds", true, 0);
					}
					func_412(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (func_420(&(Global_1938075->f_75.f_56)) > 4000)
					{
						if (Global_1938075->f_6 == 0)
						{
							LAW::_0x6ABC50979655BEE7(PLAYER::PLAYER_ID(), &uVar24, 1);
							Global_1938075->f_6 = uVar24;
						}
						sVar5 = func_413(Global_1938075->f_6);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_5, sVar5);
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, true);
						func_412(&(Global_1938075->f_75.f_56));
						func_410(2);
					}
					break;
				case 2:
					if (func_420(&(Global_1938075->f_75.f_56)) > 4000)
					{
						if (func_401(6))
						{
							return;
						}
					}
					break;
			}
			break;
		case 6:
			func_419();
			if (Global_1939168->f_12)
			{
				LAW::_0x9C5BD8C562565CE6(&Var6);
				if (Var6.f_16)
				{
					func_407(func_400());
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_424(3);
					AUDIO::_0x3E98AC9D8C56C62C(1);
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, true);
					func_411();
					if (LAW::_0x717DA2281DF90855(PLAYER::PLAYER_ID()) > 0f)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, false);
					}
					func_410(2);
					break;
				case 2:
					if (LAW::_0x717DA2281DF90855(PLAYER::PLAYER_ID()) > 1f)
					{
						if (!func_421())
						{
							if (func_401(8))
							{
								return;
							}
						}
						else if (func_401(7))
						{
							return;
						}
					}
					break;
			}
			break;
		case 7:
			bVar4 = true;
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					AUDIO::_0x3E98AC9D8C56C62C(1);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_13, true);
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, true);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_5, "LAW_UI_LAW_SEARCHING");
					func_412(&(Global_1938075->f_75.f_56));
					func_410(2);
					break;
				case 2:
					fVar41 = LAW::_0x717DA2281DF90855(PLAYER::PLAYER_ID());
					if (fVar41 <= 0f && LAW::_0x9945A3E2528A02E8(PLAYER::PLAYER_ID()))
					{
						if (bVar1)
						{
							if (func_401(10))
							{
								return;
							}
						}
						else if (func_401(6))
						{
							return;
						}
					}
					if (!func_421() || !Global_1939168->f_12)
					{
						if (func_401(8))
						{
							return;
						}
					}
					Global_1938075->f_75.f_61 = fVar41;
					break;
			}
			break;
		case 8:
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					AUDIO::_0x3E98AC9D8C56C62C(0);
					if (!Global_1939168->f_12)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_16, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_16, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_16, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_17, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_17, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_17, true);
						if ((!func_415() && !func_414(296)) && !func_416())
						{
							func_151(296, 0);
						}
					}
					func_412(&(Global_1938075->f_75.f_56));
					func_410(2);
					break;
				case 2:
					if (func_421() && Global_1939168->f_12)
					{
						func_404(bVar1);
						if (func_425(296))
						{
							func_426(296);
						}
						return;
					}
					if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_16))
					{
						iVar42 = 10000;
					}
					else
					{
						iVar42 = 35000;
					}
					if (func_420(&(Global_1938075->f_75.f_56)) > iVar42)
					{
						if (func_425(296))
						{
							func_426(296);
						}
						if (!Global_1939168->f_12)
						{
							if (func_401(9))
							{
								return;
							}
						}
						else if (func_427())
						{
							return;
						}
					}
					break;
			}
			break;
		case 9:
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_406();
					func_412(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (func_420(&(Global_1938075->f_75.f_56)) > 1000)
					{
						if (func_376(func_395()))
						{
							iVar43 = func_428(func_395());
							if (iVar43 > 0)
							{
								func_292(-1, -1, -1, 0, func_395(), 0);
							}
						}
						func_410(2);
					}
					break;
				case 2:
					func_401(0);
					break;
			}
			break;
		case 10:
			bVar3 = false;
			if (!bVar1)
			{
				func_404(bVar1);
				return;
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					if (LAW::_0x9945A3E2528A02E8(PLAYER::PLAYER_ID()))
					{
						func_405();
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_55, true);
						func_412(&(Global_1938075->f_75.f_56));
						func_410(1);
					}
					break;
				case 1:
					if (func_420(&(Global_1938075->f_75.f_56)) > 4000)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_55, false);
						func_410(2);
					}
					break;
			}
			break;
	}
	func_429(bVar3, bVar4);
}

void func_105()
{
	Global_1939221->f_14.f_17++;
	if (Global_1939221->f_14.f_17 >= Global_1939221->f_14.f_16)
	{
		Global_1939221->f_14.f_17 = 0;
	}
	if (Global_1939221->f_14.f_17 >= Global_1939221->f_14.f_16)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE((Global_1939221->f_14[Global_1939221->f_14.f_17 /*3*/])->f_2, false))
	{
		return;
	}
	func_430(Global_1939221->f_14.f_17);
}

void func_106()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 <= Global_17169)
	{
		func_431(1);
	}
	if (iVar0 <= Global_17156)
	{
		func_432();
	}
	switch (Global_17157)
	{
		case 1:
			if (!Global_17170)
			{
				if (!func_148(&(Global_17158[1])))
				{
					Global_17158[1] = func_433("DOCUMENT_INSPECTION_PREV_DOC", joaat("INPUT_DOCUMENT_PAGE_PREV"), Global_35, 2, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_434(&(Global_17158[1]), &(Global_17163[1]), 1, 1);
					func_435(&(Global_17158[1]), 1310260484, 0, 1);
				}
				if (!func_148(&(Global_17158[0])))
				{
					Global_17158[0] = func_433("DOCUMENT_INSPECTION_NEXT_DOC", joaat("INPUT_DOCUMENT_PAGE_NEXT"), Global_35, 2, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_434(&(Global_17158[0]), &(Global_17163[0]), 1, 1);
					func_435(&(Global_17158[0]), 1310260484, 0, 1);
				}
			}
			if (!Global_17171)
			{
				if (!func_148(&(Global_17158[2])))
				{
					Global_17158[2] = func_433("HUD_SATCHEL", joaat("INPUT_INSPECT_OPEN_SATCHEL"), Global_35, 2, 0, 0, 1, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
					func_435(&(Global_17158[2]), 1310260484, 0, 1);
				}
			}
			if (!func_148(&(Global_17158[3])))
			{
				Global_17158[3] = func_433("VI_READ", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_434(&(Global_17158[3]), &(Global_17163[3]), 1, 1);
				if (!Global_17172)
				{
					func_435(&(Global_17158[3]), 1310260484, 0, 1);
				}
			}
			Global_17172 = 0;
			if ((((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(195871429) == 0 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2006217472) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-704221704) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-369505775) == 0) && MISC::GET_GAME_TIMER() >= Global_17168)
			{
				Global_17157 = 2;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (func_148(&(Global_17158[iVar1])))
				{
					func_149(Global_17158[iVar1], 0, 1);
				}
				iVar1++;
			}
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
			Global_17157 = 0;
			break;
	}
}

void func_107()
{
	int iVar0;
	bool bVar1;
	var uVar4;
	bool bVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (((*Global_1913136)[iVar0 /*6*/])->f_1)
		{
			case 4:
				if (!TASK::_0x038B1F1674F0E242(Global_35))
				{
					func_436(iVar0);
				}
				break;
			case 3:
				if (!((*Global_1913136)[iVar0 /*6*/])->f_4)
				{
					if (((*Global_1913136)[iVar0 /*6*/])->f_2 != 0)
					{
						TXD::_0x8232F37DF762ACB2(((*Global_1913136)[iVar0 /*6*/])->f_2);
						((*Global_1913136)[iVar0 /*6*/])->f_2 = 0;
					}
				}
				else if (((*Global_1913136)[iVar0 /*6*/])->f_3 != 0)
				{
					HUD::_0xF1E6979C0B779985(&(((*Global_1913136)[iVar0 /*6*/])->f_3));
					((*Global_1913136)[iVar0 /*6*/])->f_3 = 0;
				}
				((*Global_1913136)[iVar0 /*6*/])->f_1 = 0;
				break;
			case 0:
				if (Global_1913136[iVar0 /*6*/] != 0)
				{
					((*Global_1913136)[iVar0 /*6*/])->f_4 = func_438(func_437(Global_1913136[iVar0 /*6*/], -949239683));
					if (!((*Global_1913136)[iVar0 /*6*/])->f_4)
					{
						if (func_439(Global_1913136[iVar0 /*6*/], &bVar1, joaat("inventory"), -401018458, 0, 0))
						{
							if (TXD::_0xBA0163B277C2D2D0(bVar1))
							{
								TXD::_0xDB1BD07FB464584D(bVar1, 0);
								((*Global_1913136)[iVar0 /*6*/])->f_2 = bVar1;
							}
						}
					}
					else
					{
						uVar4 = func_440(Global_1913136[iVar0 /*6*/]);
						((*Global_1913136)[iVar0 /*6*/])->f_3 = HUD::_0xB6857100F8FD433C(uVar4, -2);
					}
					((*Global_1913136)[iVar0 /*6*/])->f_1 = 1;
				}
				break;
			case 1:
				if (!((*Global_1913136)[iVar0 /*6*/])->f_4)
				{
					if (((*Global_1913136)[iVar0 /*6*/])->f_2 != 0)
					{
						if (TXD::_0xBE72591D1509FFE4(((*Global_1913136)[iVar0 /*6*/])->f_2))
						{
							((*Global_1913136)[iVar0 /*6*/])->f_1 = 2;
						}
					}
					else
					{
						((*Global_1913136)[iVar0 /*6*/])->f_1 = 2;
					}
				}
				else
				{
					((*Global_1913136)[iVar0 /*6*/])->f_1 = 2;
				}
				break;
			case 2:
				if (((*Global_1913136)[iVar0 /*6*/])->f_4)
				{
					bVar5 = TASK::_0x038B1F1674F0E242(Global_35);
					if (iVar0 == 0)
					{
						if (!bVar5 || !((*Global_1913136)[iVar0 /*6*/])->f_5)
						{
							iVar6 = HUD::_0xBE1067CD1C9570F6(((*Global_1913136)[iVar0 /*6*/])->f_3);
							if (iVar6 != 0)
							{
								HUD::_0x51DE09A2196BD951(iVar6, joaat("p_cs_newspaper_02x"));
								if (bVar5)
								{
									((*Global_1913136)[iVar0 /*6*/])->f_5 = 1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

bool func_108()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("binoculars")) > 0;
}

int func_109(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938407->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1938407)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_110()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "binoculars", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_441(Var10, 0);
}

void func_111()
{
	if (MISC::IS_BIT_SET(&Global_1956177, 0))
	{
		MISC::SET_BIT(Global_1956177, 1);
		MISC::CLEAR_BIT(Global_1956177, 0);
		return;
	}
	if (!MISC::IS_BIT_SET(&Global_1956177, 0))
	{
		MISC::CLEAR_BIT(Global_1956177, 1);
		return;
	}
}

void func_112()
{
	if (!MISC::IS_BIT_SET(&Global_1956177, 4))
	{
		if (MISC::IS_BIT_SET(&Global_1956177, 1))
		{
			func_442(64);
		}
	}
}

bool func_113()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0;
}

void func_114()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "camera_item", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_441(Var10, 0);
}

bool func_115()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-458977373) > 0;
}

void func_116()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "electric_lantern", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_441(Var10, 0);
}

int func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1939168->f_38 == -862059856)
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false) && iVar0 == -862059856)
	{
		return 1;
	}
	if (Global_1273882->f_22[Global_1199509->f_3] && !&Global_1273882->f_88[Global_1199509->f_3])
	{
		iVar1 = &Global_1273882->f_154[Global_1199509->f_3];
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (iVar2 != PLAYER::PLAYER_PED_ID())
		{
			if (BUILTIN::VDIST2(Global_1273882->f_17, ENTITY::GET_ENTITY_COORDS(iVar2, true, false)) < 2500f)
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar2, "DigSiteX"))
				{
					return 1;
				}
			}
		}
	}
	Global_1199509->f_3++;
	if (Global_1199509->f_3 >= 32)
	{
		Global_1199509->f_3 = 0;
	}
	return 0;
}

bool func_118()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-689602647) > 0;
}

void func_119()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "metal_detector", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_441(Var10, 0);
}

bool func_120(int iParam0, int iParam1)
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

int func_121(int iParam0, int iParam1)
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

bool func_122(bool bParam0)
{
	return ((!bParam0 && !func_124()) && (CAM::IS_SCREEN_FADED_IN() || func_125(1)));
}

void func_123()
{
	if (func_398("fishing_core", 5505, Global_1902941))
	{
	}
}

int func_124()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1902941, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	if (func_64() == 0 && NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-506425016, -1, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)
{
	return func_310(Global_1902941->f_1, iParam0);
}

int func_126()
{
	bool bVar0;
	bool bVar1;

	bVar0 = true;
	if (Global_1915170->f_20136 || Global_1939221->f_8)
	{
		bVar0 = false;
	}
	if (!func_136(bVar0, 1, 0, 1, 0, 0, 0, 0, 1))
	{
		if (&Global_1939221 == 1)
		{
		}
		return 0;
	}
	if (!Global_1939221->f_2)
	{
		if (&Global_1939221 == 1)
		{
		}
		return 0;
	}
	bVar1 = Global_1939221->f_5;
	Global_1939221->f_5 = 0;
	if (bVar1)
	{
		if (&Global_1939221 == 1)
		{
		}
		return 0;
	}
	if (func_134())
	{
		if (&Global_1939221 == 1)
		{
		}
		return 0;
	}
	return 1;
}

bool func_127(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_443(iParam0);
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

void func_128()
{
	func_444();
}

void func_129()
{
	struct<4> Var0;
	int iVar4;

	if (func_134())
	{
		return;
	}
	iVar4 = 1433015236;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1340543710:
					func_445(Var0, Var0.f_2);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 290710310:
							func_446(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

void func_130()
{
	bool bVar0;

	bVar0 = func_447(0, 0, 1);
	Global_1896726->f_384 = bVar0;
}

int func_131()
{
	if (!Global_1896726->f_383)
	{
		return 0;
	}
	return 1;
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

int func_133()
{
	if (func_448(&(Global_1939057->f_83[3]), 1))
	{
		return 1;
	}
	return 0;
}

bool func_134()
{
	return Global_1896726->f_382;
}

var func_135()
{
	return Global_1954385->f_1;
}

int func_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = &Global_1273882->f_154[&Global_1273882];
	iVar1 = Global_1273882->f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::IS_PED_INCAPACITATED(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_35))
			{
				return 0;
			}
			if (PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099293->f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915170->f_20136 || Global_1915170->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
		{
			return 0;
		}
	}
	if (func_449())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939057->f_10 || Global_1939057->f_11) || Global_1939057->f_12) || Global_1939057->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1223462->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1121338)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1121338)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1123331->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_137()
{
	if (func_310(Global_1130954->f_137.f_1, 2))
	{
		func_450(8);
	}
	else
	{
		func_450(0);
	}
}

void func_138()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1896726->f_388, false))
	{
		return;
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("player_menu") && func_134())
	{
		Global_1896726->f_388 = SCRIPTS::START_NEW_SCRIPT("player_menu", 1400);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_menu");
		Global_1896726->f_387 = 0;
	}
	else
	{
		SCRIPTS::REQUEST_SCRIPT("player_menu");
		func_132(1);
	}
}

int func_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_163(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_164(bParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		bVar2 = func_362(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_451(bParam0, 0);
	}
	if (func_452(bParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_453(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_454(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_453(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

void func_140()
{
	Global_1939057->f_21 = 0;
}

void func_141()
{
	if (Global_1939057->f_92)
	{
		Global_1939057->f_43 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "quick_select_satchel_shortcut");
		Global_1939057->f_43.f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1939057->f_43, "isAccessible", true);
	}
}

void func_142()
{
}

void func_143()
{
	if (func_64() == -1)
	{
		Global_1939057->f_47 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "quick_select_crafting_menu_shortcut");
		Global_1939057->f_47.f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1939057->f_47, "isAccessible", true);
	}
}

void func_144()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		func_149(Global_1939057->f_83[iVar1], 1, 1);
		iVar0++;
	}
	Global_1939057->f_21 = 0;
}

void func_145()
{
	int iVar0;

	iVar0 = func_453(0);
	func_455(iVar0, 1, 0, 0);
	func_456(iVar0);
}

void func_146()
{
}

void func_147()
{
	int iVar0;
	bool bVar1;

	iVar0 = -1;
	if (Global_1939057->f_102 != -1)
	{
		if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1939057->f_102.f_1) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1939057->f_102.f_1, false))
		{
			func_457();
		}
		iVar0 = Global_1939057->f_102;
	}
	else if (Global_1939057->f_102.f_2 != -1)
	{
		iVar0 = Global_1939057->f_102.f_2;
	}
	bVar1 = _NAMESPACE76::_0xF8806EC3FF840FDC();
	if (iVar0 != -1 && !bVar1)
	{
		if (Global_1939057->f_102.f_4 > 8)
		{
			HUD::_0xF1622CE88A1946FB();
			if (iVar0 != Global_1939057->f_102.f_3 || !HUD::BUSYSPINNER_IS_ON())
			{
				if (HUD::BUSYSPINNER_IS_ON())
				{
					HUD::BUSYSPINNER_OFF();
				}
				HUD::_BUSYSPINNER_SET_TEXT(func_458(iVar0));
			}
		}
		Global_1939057->f_102.f_4++;
	}
	else
	{
		if (Global_1939057->f_102.f_4 > 38)
		{
			Global_1939057->f_102.f_4 = 0;
		}
		else if (Global_1939057->f_102.f_4 > 8)
		{
			Global_1939057->f_102.f_4++;
		}
		else
		{
			Global_1939057->f_102.f_4 = 0;
		}
		if (HUD::BUSYSPINNER_IS_ON())
		{
			if (Global_1939057->f_102.f_4 == 0 || bVar1)
			{
				HUD::BUSYSPINNER_OFF();
			}
			else
			{
				HUD::_0xF1622CE88A1946FB();
			}
		}
	}
	Global_1939057->f_102.f_3 = iVar0;
	Global_1939057->f_102.f_2 = -1;
}

bool func_148(int iParam0)
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

void func_149(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_148(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_443(*uParam0);
	if (((*Global_1949749)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_459(iVar0);
	*uParam0 = 0;
}

int func_150(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_151(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_460(iParam0, &iVar0, &iVar1);
	if (!func_461(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_462(iVar0, iVar1);
}

void func_152(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	func_463();
	bVar0 = func_464(1);
	if (func_466(1, 92296) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = func_464(2);
	if (func_466(2, 92374) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = (func_464(4) || func_464(8));
	if (!func_468())
	{
		func_469(4);
		func_469(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_470(81053684) || func_471(4))
		{
			func_469(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_470(-525676072) || func_471(8))
		{
			func_469(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_158(0, func_472()))
			{
				if (!bVar0)
				{
					Global_1939057->f_80.f_1 = 1;
				}
				if (bVar1)
				{
					func_473(4);
				}
				if (bVar2)
				{
					func_473(8);
				}
			}
			else
			{
				func_469(4);
				func_469(8);
				if (bVar0)
				{
					Global_1939057->f_80.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_464(16);
	if (func_466(16, 92488) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = func_464(256);
	if (func_466(256, 92501) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = func_464(512);
	if (func_466(512, 92514) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = func_464(1024);
	if (func_466(1024, 92527) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	if (((((func_478() || func_479()) || func_480()) || func_481()) || func_482()) || bParam0)
	{
		bVar0 = func_464(8192);
		if (func_466(8192, 92622) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = func_464(64);
		if (func_466(64, 92635) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = func_464(32);
		if (func_466(32, 92648) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = func_464(128);
		if (func_466(128, 92661) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = func_464(2048);
		if (func_466(2048, 92673) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = func_464(32768);
		if (func_466(32768, 92686) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = func_464(4096);
		if (func_466(4096, 92699) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
	}
	func_490();
}

void func_153()
{
	if (func_482() || (((func_478() || func_479()) || func_480()) || func_481()))
	{
		Global_1939057->f_80 = 1;
		func_174();
		if (Global_1939057->f_80.f_1)
		{
			func_491(1, 1, 0);
		}
		Global_1939057->f_80.f_1 = 0;
	}
	else if (Global_1939057->f_80)
	{
		func_145();
		Global_1939057->f_80 = 0;
		Global_1939057->f_80.f_1 = 0;
	}
}

void func_154()
{
	func_492();
	func_493();
	if (Global_1939057->f_20)
	{
		Global_1939057->f_20 = 0;
	}
	if ((Global_1939057->f_22 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE"))) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_REVEAL_HUD")))
	{
		Global_1939057->f_22 = 0;
	}
	func_494();
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_REVEAL_HUD")))
	{
		if (Global_1939057->f_109)
		{
			func_495(1);
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
	{
		func_495(0);
	}
	else if (func_496())
	{
		if (Global_1939057->f_109)
		{
			func_495(1);
		}
	}
	else if (func_448(&(Global_1939057->f_83[5]), 1))
	{
		func_166(Global_1939057->f_77.f_2, 1, 0, 0, 1, 0, 0);
		func_185();
	}
	else if (func_448(&(Global_1939057->f_83[6]), 1))
	{
		Global_1939057->f_70.f_2 = MISC::GET_GAME_TIMER();
		func_166(Global_1939057->f_70.f_1, 0, 0, 0, 1, 0, 0);
		func_497();
	}
}

void func_155(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char cVar6[64];
	bool bVar14;
	int iVar15;
	char* sVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	char* sVar28;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "quick_select");
		uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "target_horse_info");
	}
	bVar0 = true;
	if (!func_498())
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "visible", bVar0);
	if (!bVar0)
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseName", "");
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "bondingRankTexture", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseCoat", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseHandling", "");
		return;
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	iVar2 = -1;
	if (func_499(iVar1))
	{
		iVar2 = func_500(iVar1);
	}
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar1);
	iVar4 = func_501(iVar3);
	sVar5 = "";
	StringCopy(&cVar6, func_502(iVar4), 64);
	sVar5 = func_503(&cVar6);
	bVar14 = false;
	iVar15 = func_504(iVar1);
	if (iVar2 == 0)
	{
		if (iVar15 == 0)
		{
			bVar14 = -217389439;
		}
		else if (iVar15 == 1)
		{
			bVar14 = 13992470;
		}
		else if (iVar15 == 2)
		{
			bVar14 = 396341162;
		}
		else if (iVar15 == 3)
		{
			bVar14 = 623069873;
		}
		else if (iVar15 == 4)
		{
			bVar14 = -637422489;
		}
	}
	else if (iVar15 == 0)
	{
		bVar14 = 937553910;
	}
	else if (iVar15 == 1)
	{
		bVar14 = 489732756;
	}
	else if (iVar15 == 2)
	{
		bVar14 = 195204984;
	}
	else if (iVar15 == 3)
	{
		bVar14 = -103418913;
	}
	else if (iVar15 == 4)
	{
		bVar14 = -815685893;
	}
	sVar16 = func_505(iVar4);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseName", HUD::_GET_LABEL_TEXT_2(sVar5));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "bondingRankTexture", bVar14);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseCoat", sVar16);
	iVar17 = func_506(iVar1);
	bVar18 = iVar17 + 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedValue", bVar18);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMaxValue", 10);
	iVar19 = func_507(iVar1);
	bVar20 = (bVar18 + iVar19);
	bVar20 = func_508(bVar20, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentValue", bVar20);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
	bVar21 = bVar18 + 2;
	bVar21 = func_508(bVar21, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityValue", bVar21);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
	iVar22 = func_509(iVar1);
	bVar23 = iVar22 + 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccValue", bVar23);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMaxValue", 10);
	iVar24 = func_510(iVar1);
	bVar25 = (bVar23 + iVar24);
	bVar25 = func_508(bVar25, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentValue", bVar25);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
	bVar26 = bVar23 + 2;
	bVar26 = func_508(bVar26, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityValue", bVar26);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMaxValue", 10);
	iVar27 = func_511(iVar1);
	sVar28 = func_512(iVar27);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseHandling", sVar28);
}

void func_156()
{
	int iVar0;
	bool bVar1;

	if (func_513())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, false);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, true);
		}
	}
	else
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_43.f_1) && !Global_1939057->f_92)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, false);
		}
		else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_43.f_1) && Global_1939057->f_92)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, true);
		}
		if (func_64() == -1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_45.f_1) && !Global_1939057->f_91)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, false);
			}
			else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_45.f_1) && Global_1939057->f_91)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, true);
			}
		}
	}
	if (func_64() == -1)
	{
		bVar1 = -1448210800; /* GXTEntry: "Crafting Tools" */
	}
	else
	{
		bVar1 = -2035110427; /* GXTEntry: "Mortar and Pestle" */
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_47.f_1) && !func_341(bVar1, 1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_47.f_1, false);
	}
	else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_47.f_1) && func_341(bVar1, 1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_47.f_1, true);
	}
}

void func_157(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_514(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_515(Var0);
}

int func_158(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1939168->f_6 || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_64() == 0)
	{
		if (func_516(131072))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 1))
	{
		if (func_516(1024))
		{
			return 0;
		}
	}
	if (Global_1939168->f_16)
	{
		return 0;
	}
	if (!func_517(iParam1, 2) && func_516(32))
	{
		return 0;
	}
	if (!func_517(iParam1, 4))
	{
		if (func_516(4096))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 8) && func_516(512))
	{
		return 0;
	}
	if (!func_517(iParam1, 512) && !func_518(bParam0))
	{
		return 0;
	}
	if (!func_517(iParam1, 262144) && !func_519(bParam0, func_517(iParam1, 524288)))
	{
		return 0;
	}
	if (!func_517(iParam1, 64) && !func_520(bParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_517(iParam1, 128))
	{
		if (func_121(Global_35, 1868526510) || func_521(Global_35))
		{
			if (bParam0)
			{
				func_522("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_517(iParam1, 16))
	{
		if (func_521(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (!func_523(iVar0, 1))
			{
				if (bParam0)
				{
					func_522("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return 0;
			}
		}
	}
	if (!func_517(iParam1, 256) && func_516(8192))
	{
		return 0;
	}
	if (!func_517(iParam1, 1024) && func_516(65536))
	{
		if (bParam0)
		{
			func_522("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_517(iParam1, 2048))
	{
		if (func_516(32768))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 4096))
	{
		if (func_516(16384))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 8192))
	{
		if (!func_516(16))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 16384))
	{
		if (func_516(256))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 32768))
	{
		if (func_482())
		{
			if (bParam0)
			{
				func_522("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_517(iParam1, 131072))
	{
		if (!func_516(524288))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 65536))
	{
		if (!func_516(262144))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 1048576))
	{
		if (!func_516(2097152))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 2097152))
	{
		if (!func_516(8388608))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 4194304))
	{
		if (!func_516(16777216))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 8388608))
	{
		if (func_516(33554432))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 16777216))
	{
		if (func_516(67108864))
		{
			return 0;
		}
	}
	if (!func_517(iParam1, 33554432))
	{
		if (func_516(134217728))
		{
			return 0;
		}
	}
	if (func_516(64))
	{
		return 0;
	}
	else if (func_516(128))
	{
		return 0;
	}
	else if (func_516(1048576))
	{
		return 0;
	}
	else if (func_516(4))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			if (PED::_0x4E76CB57222A00E5(iParam0) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_160()
{
	if (func_524(4))
	{
		return Global_1939168->f_21;
	}
	return func_525();
}

void func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;
	struct<18> Var17;

	if (Global_1939057->f_16 == iParam0 && !Global_1939057->f_17)
	{
		return;
	}
	Global_1939057->f_16 = iParam0;
	Global_1939057->f_17 = 0;
	Var3.f_9 = -1591664384;
	if (func_526("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		Var17.f_3 = -1;
		Var17.f_12 = 4;
		Var17.f_17 = 4;
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (!func_527(&Var3, bVar2, iVar0, iVar1))
			{
			}
			else if (!func_322(Var3.f_4))
			{
			}
			else if (!func_528(Var3.f_4, 1194584906) && INVENTORY::_0x0C093C1787F18519(Var3.f_4, &Var17))
			{
				INVENTORY::_0x227522FD59DDB7E8(func_453(0), &Var3, iParam0);
			}
			bVar2++;
		}
		func_529(iVar0);
	}
}

int func_162()
{
	if (Global_1913156->f_1581)
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		if (func_530("simple_crafting", 1024))
		{
			Global_1913156->f_1581 = 0;
			Global_1913156->f_1582 = 1;
		}
		else if ((MISC::GET_GAME_TIMER() - Global_1913156->f_1583) > 1000)
		{
			Global_1913156->f_1581 = 0;
		}
		return 0;
	}
	if (func_64() == 0)
	{
		return 0;
	}
	return 0;
}

bool func_163(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_164(bool bParam0)
{
	vector3 vVar0;

	if (!func_163(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_165(bool bParam0)
{
	int iVar0;

	iVar0 = func_437(bParam0, -949239683);
	switch (iVar0)
	{
		case -1919515848:
		case -1915958659:
		case -1337515701:
		case -809056541:
		case -273840653:
		case -262371497:
		case 89124942:
		case 238865292:
		case 845883585:
		case 999632878:
		case 1130235258:
		case 1177617310:
		case 1443104131:
		case 1451036371:
		case 1859991422:
		case 1891031775:
			return 0;
		default:
			break;
	}
	if (func_528(Global_1939057->f_40, 791664616))
	{
		return 0;
	}
	return 1;
}

int func_166(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_531())
	{
		Global_1939221->f_10479 = bParam0;
		func_532(bParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_533(bParam0, bParam4))
	{
		return 0;
	}
	if (func_534(bParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_528(bParam0, -2081717885))
	{
		func_535(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_528(bParam0, -1909684001))
	{
		func_536(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_528(bParam0, 587975446))
	{
		func_537(bParam0, Var10);
	}
	else if (func_528(bParam0, 566155764))
	{
		if (!func_538(bParam0))
		{
			return 0;
		}
	}
	if (func_539(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1912966 = bParam0;
		Global_1913155 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_528(bParam0, -1227898937))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_441(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_528(bParam0, -1472964441) || func_528(bParam0, -228153877)) || func_528(bParam0, 566155764))
	{
	}
	else if (func_528(bParam0, 1919582297))
	{
		if (((func_540() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (bParam0)
		{
			case 1929383243: /* GXTEntry: "Herbivore Bait" */
			case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397: /* GXTEntry: "Predator Bait" */
			case 1831763320: /* GXTEntry: "Potent Predator Bait" */
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_441(Var10, 0);
		bVar28 = false;
	}
	else if (func_541(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_542(Global_1070355->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_441(Var10, 0);
		iVar29 = 1;
	}
	else if (func_164(bParam0) == joaat("clothing"))
	{
		if (!func_543(bParam0))
		{
			func_522("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_348(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_544();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_545(PLAYER::PLAYER_ID()))
			{
				func_522("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_522("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951131->f_1657 != bParam0)
			{
				func_157(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_546(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_547(bParam0);
					func_157(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == &Global_1951131->f_1657.f_1[23 /*3*/])
					{
						func_345(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_343(bParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_343(bParam0, 1);
					}
					break;
				default:
					if (!func_528(bParam0, -1348134986))
					{
					}
					else
					{
						func_546(bParam0, 0);
					}
					break;
			}
			func_345(Global_35, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_209(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_64() != -1)
				{
				}
				else if (!func_543(bParam0))
				{
					func_522("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_548(7, bParam0);
					bVar31 = func_548(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17095))
						{
							MAP::REMOVE_BLIP(&Global_17095);
						}
						Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
						func_522(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17095), 10000, 0, 0, 0, 1);
					}
					else if (!func_549(7))
					{
						func_522("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_551(Global_35, func_550(7), 0))
						{
							func_522("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17095))
							{
								MAP::REMOVE_BLIP(&Global_17095);
							}
							Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
							func_522(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17095), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_441(Var10, 0);
						}
						Jump @2071; //curOff = 1568
						func_217();
						Jump @2071; //curOff = 1575
						if (!func_517(Global_1956162->f_1, 1) || func_517(Global_1956162->f_1, 512))
						{
							if (func_543(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_552(1, 1))
								{
									func_553(2, 1);
								}
								else if (func_554(1))
								{
									func_522("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (func_555())
								{
									func_522("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_556();
									}
									else
									{
										func_522("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_557(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_522("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_557(_NAMESPACE26::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
							else if (func_555())
							{
								func_522("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								func_522("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956162->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2071; //curOff = 1850
						if (!WEAPON::_0xC853230E76A152DF(func_558(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bParam0, true, 0, false, false);
						}
						return 1;
						Jump @2071; //curOff = 1888
						if (func_558(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2071; //curOff = 1929
						Jump @2071; //curOff = 1932
						func_151(533, 1);
						Jump @2071; //curOff = 1943
						func_559(1);
						Jump @2071; //curOff = 1951
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2071; //curOff = 1986
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_441(Var10, 0);
						}
						return 1;
						Jump @2071; //curOff = 2062
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
		}
	}

void func_167()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if (!func_560())
	{
		if (Global_1912968->f_2 > 0)
		{
			if ((iVar0 - Global_1912968->f_1) > Global_1912968->f_2)
			{
				func_561();
				Global_1912968->f_2 = 0;
			}
		}
		else
		{
			return;
		}
	}
	else if (!func_562())
	{
		iVar1 = 0;
		while (iVar1 < Global_1912968->f_3)
		{
			func_563(&(Global_1912968->f_4[iVar1 /*6*/]), (Global_1912968->f_4[iVar1 /*6*/])->f_1, (Global_1912968->f_4[iVar1 /*6*/])->f_2, (Global_1912968->f_4[iVar1 /*6*/])->f_4, (Global_1912968->f_4[iVar1 /*6*/])->f_3, (Global_1912968->f_4[iVar1 /*6*/])->f_5, 0);
			Global_1912968->f_4[iVar1 /*6*/] = 0;
			iVar1++;
		}
		func_564();
	}
	if (!func_565())
	{
		if ((iVar0 - Global_1912968->f_125) > Global_1912968->f_126)
		{
			func_566(Global_1912968->f_127, 0, 0, 0);
			func_567();
		}
	}
	if (!func_568())
	{
		if ((iVar0 - Global_1912968->f_128) > Global_1912968->f_129)
		{
			func_569(184, Global_1912968->f_130, 255, 0);
			func_570();
		}
	}
	if (!func_571())
	{
		if ((iVar0 - Global_1912968->f_131) > Global_1912968->f_132)
		{
			func_572(0);
			func_573();
		}
	}
}

void func_168()
{
}

void func_169()
{
	struct<4> Var0;

	if (Global_1956121->f_2 != -1 && !Global_1939057->f_8)
	{
		func_574(1, Global_1956121->f_2, Var0);
	}
}

void func_170()
{
	Global_1939057->f_17 = 1;
}

bool func_171()
{
	return func_464(1);
}

void func_172()
{
	if (func_64() != -1)
	{
		return;
	}
	if (func_341(-1838434463 /* GXTEntry: "Camp" */, 1))
	{
		if (func_575())
		{
			func_576(-1838434463 /* GXTEntry: "Camp" */, 1, 1, -142743235);
			func_577(2019377485 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else if (func_341(2019377485 /* GXTEntry: "Camp" */, 1))
	{
		if (!func_575())
		{
			func_576(2019377485 /* GXTEntry: "Camp" */, 1, 1, -142743235);
			func_577(-1838434463 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;

	Var3.f_9 = -1591664384;
	if (func_526("ALL", &iVar0, &iVar1, -1591664384, 0))
	{
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (!func_527(&Var3, bVar2, iVar0, iVar1))
			{
			}
			else if ((((WEAPON::IS_WEAPON_VALID(Var3.f_4) && WEAPON::_0xC853230E76A152DF(Var3.f_4)) || Var3.f_4 == joaat("weapon_kit_camera")) || Var3.f_4 == -1838434463) || Var3.f_4 == 2019377485)
			{
				INVENTORY::_0x227522FD59DDB7E8(func_453(0), &Var3, iParam0);
			}
			bVar2++;
		}
		func_529(iVar0);
	}
}

void func_174()
{
	int iVar0;

	if (!func_260(0) && !func_578())
	{
		iVar0 = func_453(0);
		func_455(iVar0, 0, 0, 0);
		func_456(iVar0);
	}
}

void func_175(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = uParam0;
	if (INVENTORY::_0x3D10D7179D7034AF(func_453(0), bVar0, 1))
	{
		return;
	}
	iVar1 = func_164(bVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iVar1 != joaat("clothing"))
	{
		func_579(bVar0, iParam1);
	}
	else
	{
		func_166(bVar0, 0, 0, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1939057->f_41 = bVar0;
	}
	else
	{
		Global_1939057->f_42 = bVar0;
	}
}

void func_176(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = uParam0;
	if (INVENTORY::_0x3D10D7179D7034AF(func_453(0), bVar0, 1))
	{
		return;
	}
	iVar1 = func_164(bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	if ((iVar1 != 2085633299 || Global_1939057->f_40 != bVar0) || !func_165(bVar0))
	{
		func_166(bVar0, 1, iParam1, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1939057->f_41 = bVar0;
	}
	else
	{
		Global_1939057->f_42 = bVar0;
	}
	iVar2 = func_453(0);
	if (!INVENTORY::_0x3D10D7179D7034AF(iVar2, bVar0, 0))
	{
		Global_1902941->f_36 = bVar0;
	}
}

var func_177()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &uVar1, true, false))
	{
		return uVar1;
	}
	if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &uVar1) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

void func_178(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		iVar2 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar1);
		if (iVar2 == 0)
		{
			return;
		}
		if (!PLAYER::_0x354F689C4FFAAB37(iVar2))
		{
			return;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	func_580(iParam1, iVar0, vVar3, bParam2, iParam3);
	if (bParam2 && -153407852 == iParam1)
	{
		COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(iParam0, iParam3);
	}
}

bool func_179(var uParam0)
{
	return uParam0->f_13;
}

void func_180(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	uParam0->f_12 = func_177();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_12))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
		if (func_581(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_12);
			if (!func_582(iVar2) && !func_583(iVar2))
			{
				bVar0 = true;
			}
		}
	}
	bVar3 = false;
	if (bVar0)
	{
		if (func_584(uParam0))
		{
			bVar3 = true;
		}
	}
	else if (func_585(uParam0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		uParam0->f_13 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("show_info", "Study_Sounds", true, 0);
	}
}

int func_181(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_12))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
		if (func_581(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_12);
			if (!func_582(iVar1) && !func_583(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_182(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
	iVar1 = func_504(iVar0);
	if (uParam0->f_14 != iVar1)
	{
		return 1;
	}
	return 0;
}

void func_183(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
	bVar2 = false;
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
	{
		bVar2 = true;
	}
	bVar3 = 937553910;
	iVar4 = func_504(iVar1);
	if (bVar2)
	{
		if (iVar4 == 0)
		{
			bVar3 = -217389439;
		}
		else if (iVar4 == 1)
		{
			bVar3 = 13992470;
		}
		else if (iVar4 == 2)
		{
			bVar3 = 396341162;
		}
		else if (iVar4 == 3)
		{
			bVar3 = 623069873;
		}
		else if (iVar4 == 4)
		{
			bVar3 = -637422489;
		}
	}
	else if (iVar4 == 0)
	{
		bVar3 = 937553910;
	}
	else if (iVar4 == 1)
	{
		bVar3 = 489732756;
	}
	else if (iVar4 == 2)
	{
		bVar3 = 195204984;
	}
	else if (iVar4 == 3)
	{
		bVar3 = -103418913;
	}
	else if (iVar4 == 4)
	{
		bVar3 = -815685893;
	}
	uParam0->f_2.f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2, "bonding");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2.f_7, "bondingRankTexture", bVar3);
}

void func_184(int iParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*iParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(304478236);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	*iParam0 = 0;
	if (*iParam0 != 0)
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_1);
	}
	if (iParam0->f_13)
	{
		AUDIO::PLAY_SOUND_FRONTEND("hide_info", "Study_Sounds", true, 0);
	}
	iParam0->f_12 = 0;
	iParam0->f_13 = 0;
}

void func_185()
{
	func_149(Global_1939057->f_83[5], 1, 1);
	Global_1939057->f_77 = 0;
	Global_1939057->f_77.f_1 = 0;
	Global_1939057->f_77.f_2 = 0;
}

void func_186(var uParam0)
{
	int iVar0;
	var uVar1;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 0;
	uParam0->f_26 = 0f;
	func_586(uParam0, 0);
	func_587(uParam0, 1);
	Global_17096 = 0;
	Global_17096.f_1 = 0;
	Global_17096.f_2 = 3;
	func_588();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17096.f_4[iVar0 /*2*/] = 0;
		(Global_17096.f_4[iVar0 /*2*/])->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_589(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	uParam0->f_46.f_37 = 0;
	StringCopy(&(uParam0->f_84), "default_inspection_settings", 64);
	StringCopy(&(uParam0->f_84.f_8), "DEFAULT_INSPECTION_REQUEST", 64);
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
}

int func_187(var uParam0)
{
	return *uParam0;
}

void func_188(var uParam0)
{
	vector3 vVar0;

	if (func_414(496))
	{
		return;
	}
	if (!func_590())
	{
		return;
	}
	if (func_415())
	{
		return;
	}
	if (func_591())
	{
		return;
	}
	func_151(496, 0);
	uParam0->f_136 = func_592(15, 0, 0, 0);
	if (!func_593(uParam0->f_136))
	{
		return;
	}
	vVar0 = { func_594(uParam0->f_136) };
	if (func_595(vVar0))
	{
		return;
	}
	if (!func_189(&(Global_1915170->f_17805[uParam0->f_136 /*11*/])))
	{
		Global_1915170->f_17805[uParam0->f_136 /*11*/] = func_596(func_190(uParam0->f_136), func_192(func_191(uParam0->f_136)), vVar0, -1);
	}
	if (&Global_1915170->f_17805[uParam0->f_136 /*11*/] == -1)
	{
		return;
	}
	func_597(func_190(uParam0->f_136), func_192(func_191(uParam0->f_136)), 580546400);
	func_597(func_190(uParam0->f_136), func_192(func_191(uParam0->f_136)), 847579139);
	uParam0->f_137 = MISC::GET_GAME_TIMER();
	uParam0->f_135 = 0;
}

int func_189(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_16844)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_16844[iParam0]));
	}
	return 0;
}

int func_190(int iParam0)
{
	if (!func_593(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_102() == 137)
	{
		return 137;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 151:
		case 152:
		case 153:
		case 154:
			return 84;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
			return 104;
		case 4:
			return 14;
		case 160:
		case 161:
		case 162:
		case 163:
			return 76;
		case 164:
		case 165:
		case 166:
		case 167:
			return 4;
		case 40:
			return 95;
		case 168:
		case 169:
		case 170:
		case 171:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 135;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 136;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_191(int iParam0)
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

int func_192(int iParam0)
{
	int iVar0;

	if (!func_598(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 21;
			break;
		case 0:
			iVar0 = 25;
			break;
		case 6:
			iVar0 = 23;
			break;
		case 7:
			iVar0 = 26;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 31;
			break;
		case 9:
			iVar0 = 37;
			break;
		case 10:
			iVar0 = 32;
			break;
		case 14:
			iVar0 = 35;
			break;
		case 5:
			iVar0 = 21;
			break;
		case 30:
			iVar0 = 27;
			break;
		case 15:
			iVar0 = 36;
			break;
		case 16:
			iVar0 = 36;
			break;
		case 17:
			iVar0 = 40;
			break;
		case 12:
			iVar0 = 15;
			break;
		case 18:
			iVar0 = 41;
			break;
		case 27:
			iVar0 = 22;
			break;
		case 25:
			iVar0 = 42;
			break;
		case 28:
			iVar0 = 43;
			break;
		case 29:
			iVar0 = 44;
			break;
		case 35:
			iVar0 = 45;
			break;
		case 36:
			iVar0 = 46;
			break;
		case 38:
			iVar0 = 48;
			break;
		case 11:
			iVar0 = func_599(Global_1915170->f_20144.f_1009);
			break;
	}
	return iVar0;
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_16844)
	{
		if (func_600(iVar0) == iParam0 && func_601(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_16844[iVar0])))
			{
				return MAP::_0xB059D7BD3D78C16F(&(Global_16844[iVar0]), iParam2);
			}
			return 0;
		}
		iVar0++;
	}
	return 0;
}

void func_194(var uParam0)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;

	if (func_602(Global_35))
	{
		func_603(uParam0, 1);
	}
	else if (func_604(&Var0))
	{
		switch (Var0)
		{
			case 2:
				iVar3 = ENTITY::GET_ENTITY_TYPE(Var0.f_1);
				switch (iVar3)
				{
					case 1:
						if (!func_605())
						{
							func_151(580, 1);
						}
						break;
					case 3:
						break;
				}
				break;
			case 4:
				if (func_606(10))
				{
					return;
				}
				bVar2 = func_609(func_608(func_607(10f)));
				if (func_163(bVar2, 0))
				{
					func_522(MISC::_CREATE_VAR_STRING(10, "HELP_QUANTITY_MAXED", MISC::_CREATE_VAR_STRING(0, bVar2)), 10000, 0, 0, 0, 1);
				}
				else
				{
					func_522("HELP_QUANTITY_MAXED_GENERIC", 10000, 0, 0, 0, 1);
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
						{
							func_151(222, 1);
						}
					}
				}
				break;
		}
	}
}

void func_195(var uParam0)
{
	int iVar0;

	iVar0 = func_610(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
		{
			func_611(uParam0, iVar0);
			func_603(uParam0, 2);
		}
		else
		{
			func_603(uParam0, 6);
		}
	}
}

void func_196(var uParam0)
{
	func_612(uParam0);
	if (uParam0->f_25 == 0)
	{
		func_603(uParam0, 4);
		return;
	}
	func_613(uParam0);
	func_614(uParam0, 1);
	func_615();
	CAM::_0x6A4D224FC7643941(&(uParam0->f_84));
	func_603(uParam0, 3);
}

void func_197(var uParam0)
{
	int iVar0;

	iVar0 = func_616(uParam0);
	func_431(0);
	if (func_617(uParam0))
	{
		func_618(&(uParam0->f_84), uParam0->f_84.f_43, uParam0->f_84.f_44, uParam0->f_84.f_45);
		if (MISC::_0x38C2BF94D15F464D(Global_35))
		{
			func_586(uParam0, 1);
			func_619(uParam0, iVar0);
		}
		else if (func_620(uParam0))
		{
			func_613(uParam0);
			func_621(uParam0, iVar0 + 1);
		}
		if (iVar0 >= func_622(uParam0))
		{
			if (uParam0->f_84.f_47 != -1)
			{
				func_623(&(uParam0->f_84.f_48), 0);
			}
			func_603(uParam0, 4);
		}
	}
	else
	{
		func_603(uParam0, 4);
	}
	if (!func_602(Global_35))
	{
		func_603(uParam0, 6);
	}
}

void func_198(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (uParam0->f_25 > 0 || (uParam0->f_25 >= 0 && !bVar0))
	{
		func_624(uParam0);
	}
}

void func_199(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19[10];
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	var uVar36;
	int iVar37;

	if (func_625(uParam0))
	{
		iVar0 = func_626(uParam0);
		TELEMETRY::_0x7581972ADF5D699A(uParam0->f_15, &(uParam0->f_33));
		bVar1 = func_627(iVar0);
		iVar2 = uParam0->f_15;
		func_178(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar2, 0, 1);
		if (func_628(iVar0))
		{
			func_151(498, 0);
		}
		STATS::_0xD64DBC8B0424135F(iVar0, iVar2);
		if (!func_629(0) || func_630())
		{
			iVar3 = func_631(iVar0);
			Var4.f_1 = 10;
			func_632(uParam0->f_44, uParam0->f_45, &Var4, 0);
			func_633(iVar3, &Var4, 0);
			iVar16 = 0;
			while (iVar16 < uParam0->f_33)
			{
				if ((!func_634(&(uParam0->f_33[iVar16])) && !func_635(&(uParam0->f_33[iVar16]))) && !func_528(&(uParam0->f_33[iVar16]), -887064662))
				{
					func_151(499, 0);
				}
				iVar16++;
			}
			if (!bVar1)
			{
				iVar17 = 0;
				while (iVar17 < uParam0->f_33)
				{
					func_636(&(uParam0->f_33[iVar17]), 1, 0);
					iVar17++;
				}
			}
		}
		else
		{
			iVar18 = 0;
			iVar30 = 0;
			while (iVar30 < uParam0->f_33)
			{
				if (!func_163(&(uParam0->f_33[iVar30]), 0))
				{
				}
				else
				{
					bVar32 = false;
					iVar31 = 0;
					while (iVar31 < uParam0->f_33)
					{
						if (&uParam0->f_33[iVar30] == &uVar19[iVar31])
						{
							bVar32 = true;
						}
						iVar31++;
					}
					if (bVar32)
					{
					}
					else
					{
						uVar19[iVar18] = &uParam0->f_33[iVar30];
						iVar18++;
						bVar34 = false;
						iVar33 = 0;
						while (iVar33 < uParam0->f_33)
						{
							if (&uParam0->f_33[iVar30] == &uParam0->f_33[iVar33])
							{
								bVar34++;
							}
							iVar33++;
						}
						if (bVar34 > 0)
						{
							func_637(&(uParam0->f_33[iVar30]));
							func_636(&(uParam0->f_33[iVar30]), bVar34, bVar1);
							if (bVar1 || !INVENTORY::_0x4AEF1FB5B9011D75(&(uParam0->f_33[iVar30])))
							{
								func_577(&(uParam0->f_33[iVar30]), bVar34, 0, 0, 0, -897553835, 0, 0, 0, 0);
								uParam0->f_33[iVar30] = 0;
							}
						}
					}
				}
				iVar30++;
			}
			func_638();
		}
		iVar35 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		func_639(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar36, &iVar37);
		func_640(iVar37, 0, 0);
		func_642(func_641(iVar35));
		func_643(5);
		func_603(uParam0, 6);
	}
	else if (Global_17096.f_18)
	{
		Global_17096.f_18 = 0;
		func_603(uParam0, 6);
	}
}

void func_200(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (func_644(&(uParam0->f_84.f_48)) && func_645(&(uParam0->f_84.f_48)) >= uParam0->f_84.f_47)
	{
		func_646(&(uParam0->f_84.f_48));
		func_647(&(uParam0->f_84), 0);
	}
	if (!func_602(Global_35) || bParam1)
	{
		func_648();
		func_614(uParam0, 0);
		func_649(*uParam0);
		func_647(&(uParam0->f_84), 1);
		func_650(uParam0);
		iVar0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			bVar1 = ENTITY::_0x31FEF6A20F00B963(iVar0);
			if (func_634(bVar1) && func_651(bVar1))
			{
				if (!func_414(496))
				{
					uParam0->f_135 = 1;
				}
				else
				{
					uParam0->f_135 = 0;
				}
				Global_17096.f_15 = 1;
				Global_17096.f_16 = iVar0;
			}
		}
		func_603(uParam0, 0);
	}
}

void func_201(var uParam0)
{
	Global_17096 = func_187(uParam0);
	Global_17096.f_1 = func_626(uParam0);
	if (uParam0->f_17)
	{
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
	}
	func_652(uParam0);
}

int func_202()
{
	switch (func_64())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

int func_203(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_202();
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return &Global_1954392;
}

int func_204(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::DOES_VOLUME_EXIST(((*Global_1954393)[iParam0 /*16*/])->f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(((*Global_1954393)[iParam0 /*16*/])->f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_205(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_204(iParam0, 1, 1))
	{
		return func_310(Global_1954393[iParam0 /*16*/], iParam1);
	}
	return 0;
}

void func_206()
{
	int iVar0;

	iVar0 = func_102();
	while (true)
	{
		switch (iVar0)
		{
			case 9:
				func_653(&Global_17138);
				break;
			case 84:
				func_654(&Global_17138);
				break;
			case 5:
				func_655(&Global_17138);
				break;
			case 4:
				func_656(&Global_17138);
				break;
			case 38:
				func_657(&Global_17138);
				break;
			case 59:
				func_658(&Global_17138);
				break;
			case 111:
				func_659(&Global_17138);
				break;
			case 39:
				func_660(&Global_17138);
				break;
			case 21:
				func_661(&Global_17138);
				break;
			case 22:
				func_662(&Global_17138);
				break;
			case 81:
				func_663(&Global_17138);
				break;
			case 8:
				func_664(&Global_17138);
				break;
			case 45:
				break;
			case 70:
				func_665(&Global_17138);
				break;
			case 73:
				func_666(&Global_17138);
				break;
			case 74:
				func_667(&Global_17138);
				break;
			case 16:
				func_668(&Global_17138);
				break;
			case 42:
				func_669(&Global_17138);
				break;
			case 47:
				func_670(&Global_17138);
				break;
			case 50:
				func_671(&Global_17138);
				break;
			case 12:
				func_672(&Global_17138);
				break;
			case 101:
				func_669(&Global_17138);
				break;
			case 26:
				func_673(&Global_17138);
				break;
			case 83:
				func_674(&Global_17138);
				break;
			case 121:
				func_675(&Global_17138);
				break;
			case 80:
				func_676(&Global_17138);
				break;
			case 129:
				func_677(&Global_17138);
				break;
			case 99:
				func_678(&Global_17138);
				break;
			case 85:
				func_679(&Global_17138);
				break;
			case 89:
				func_680(&Global_17138);
				break;
			case 40:
				func_681(&Global_17138);
				break;
			case 44:
				func_682(&Global_17138);
				break;
			case -1:
				func_683(&Global_17138);
				break;
			default:
				Global_17138 = 0;
				break;
		}
		if (!func_684())
		{
		}
	else
	{
		}
	}
	if (iVar0 == 45)
	{
		func_685();
	}
}

int func_207(bool bParam0, bool bParam1)
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

var func_208()
{
	return Global_1051202->f_8;
}

void func_209(bool bParam0)
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

void func_210()
{
	Global_1912965 = 1;
}

void func_211()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		switch (iVar0)
		{
			case 34:
				break;
			case 30:
				func_686();
				break;
			case 32:
				func_687();
				break;
			default:
				func_688(iVar0);
				func_689(iVar0);
				break;
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_212(int iParam0, int iParam1)
{
	func_690(&((Global_1051387->f_69[iParam0 /*76*/])->f_50), iParam1);
}

bool func_213(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_214()
{
	return &Global_1572864;
}

int func_215()
{
	return Global_1572864->f_1;
}

int func_216()
{
	if (func_127(&(Global_1939057->f_83[4]), 1))
	{
		return 1;
	}
	if (Global_1051387->f_3577)
	{
		if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
		{
			if (!func_644(&(Global_1051387->f_3579)))
			{
				func_623(&(Global_1051387->f_3579), 0);
			}
			if (func_691(&(Global_1051387->f_3579)) > 10000f)
			{
				Global_1051387->f_3577 = 0;
				func_692(0);
				func_646(&(Global_1051387->f_3579));
			}
			if (func_227())
			{
				Global_1915170->f_21989.f_1 = 0;
			}
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_217()
{
	if (func_693())
	{
		return;
	}
	if (func_227())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915170->f_21989.f_1 = 1;
		Global_1051387->f_42 = 0;
		func_694();
	}
	else if (Global_1915170->f_21989.f_5 != 0)
	{
		func_522(func_695(), 10000, 0, 0, 0, 1);
		Global_1051387->f_3577 = 0;
		func_692(0);
		Global_1915170->f_21989.f_5 = 0;
	}
}

void func_218()
{
	bool bVar0;

	if (!func_513())
	{
		return;
	}
	bVar0 = true;
	if (func_260(1))
	{
		bVar0 = false;
	}
	if (Global_1051387->f_3673 && (_NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) == 1 || !func_696(Global_1273882->f_15)))
	{
		bVar0 = false;
	}
	if (Global_1051387->f_3666 != 0)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		NETWORK::_0x236905C700FDB54D();
	}
}

void func_219()
{
	if (func_697())
	{
		return;
	}
	if (!Global_1051387->f_3211)
	{
		if (((Global_1915170->f_20135 || Global_1915170->f_21989.f_2) && !Global_1939168->f_6) && !Global_13)
		{
			if (!func_698() == 9 || Global_1915170->f_20143)
			{
				if (func_699(Global_1915170->f_19742) || func_700(Global_1915170->f_19742))
				{
					HUD::_0x4CC5F2FC1332577F(1422092402);
				}
				HUD::_0x4CC5F2FC1332577F(-1347445791);
				func_701(1);
				Global_1051387->f_3211 = 1;
			}
		}
	}
	else if (((!(Global_1915170->f_20135 || Global_1915170->f_21989.f_2) || Global_1939168->f_6) || Global_13) || (func_698() == 9 && !Global_1915170->f_20143))
	{
		HUD::_0x8BC7C1F929D07BF3(1422092402);
		HUD::_0x8BC7C1F929D07BF3(-1347445791);
		func_701(0);
		Global_1051387->f_3211 = 0;
	}
}

void func_220()
{
	int iVar0;

	if (func_702())
	{
		if (!func_703(iLocal_24, &iVar0))
		{
			func_704();
			return;
		}
		if (func_705(iVar0))
		{
			return;
		}
		switch (iLocal_24)
		{
			case 10:
				func_706(iVar0, "CALL_OUT_GENERAL");
				break;
			case 38:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
					case 1:
						func_706(iVar0, "CALL_OUT_GENERAL");
						break;
					case 2:
						if (PED::IS_PED_MALE(Global_35))
						{
							func_706(iVar0, "CALL_OUT_MALE");
						}
						else
						{
							func_706(iVar0, "CALL_OUT_FEMALE");
						}
						break;
				}
				break;
			case 15:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
				{
					case 0:
						func_706(iVar0, "CALL_OUT_MARKET_GARMENT");
						break;
					case 1:
						func_706(iVar0, "CALL_OUT_MARKET_EQUIPMENT");
						break;
					case 2:
						func_706(iVar0, "CALL_OUT_MARKET_CLOTHING");
						break;
					case 3:
						func_706(iVar0, "CALL_OUT_MARKET_SADDLE");
						break;
					case 4:
						func_706(iVar0, "CALL_OUT_MARKET_ITEMS");
						break;
				}
				break;
			case 14:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						func_706(iVar0, "CALL_OUT_BAIT");
						break;
					case 1:
						func_706(iVar0, "CALL_OUT_FISHING_EQUIPMENT");
						break;
					case 2:
						func_706(iVar0, "CALL_OUT_NEUTRAL");
						break;
					case 3:
						if (PED::IS_PED_MALE(Global_35))
						{
							func_706(iVar0, "CALL_OUT_MALE");
						}
						else
						{
							func_706(iVar0, "CALL_OUT_NEUTRAL");
						}
						break;
				}
				break;
		}
		func_704();
	}
}

void func_221()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	if (Global_1051387->f_3691 == -1)
	{
		Global_1051387->f_3691 = 0;
	}
	else
	{
		Global_1051387->f_3691++;
		if (Global_1051387->f_3691 == 176)
		{
			Global_1051387->f_3691 = 0;
		}
	}
	iVar0 = func_191(Global_1051387->f_3691);
	if (iVar0 == -1)
	{
		return;
	}
	func_707(Global_1051387->f_3691, iVar0);
	bVar1 = ((func_708(iVar0) || func_709(func_190(Global_1051387->f_3691), 255)) || func_710(Global_1051387->f_3691) == 1);
	iVar2 = func_711(Global_1051387->f_3691);
	bVar1 = ((bVar1 || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2)) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar2));
	if (bVar1)
	{
		if (&Global_1051387->f_3693[iVar0 /*16*/] == Global_1051387->f_3691)
		{
			func_712(Global_1051387->f_3693[iVar0 /*16*/]);
			func_713(Global_1051387->f_3693[iVar0 /*16*/]);
		}
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
		if (func_714(Global_1051387->f_3691, &uVar7, &uVar6, &vVar3) && !func_595(vVar3))
		{
			if (&Global_1051387->f_3693[iVar0 /*16*/] == -1 || func_191(&(Global_1051387->f_3693[iVar0 /*16*/])) != iVar0)
			{
				Global_1051387->f_3693[iVar0 /*16*/] = Global_1051387->f_3691;
				(Global_1051387->f_3693[iVar0 /*16*/])->f_1 = { vVar3 };
				(Global_1051387->f_3693[iVar0 /*16*/])->f_9 = 0;
			}
			else if (&Global_1051387->f_3693[iVar0 /*16*/] == Global_1051387->f_3691)
			{
			}
			else if (BUILTIN::VDIST(Global_36, vVar3) < BUILTIN::VDIST(Global_36, (Global_1051387->f_3693[iVar0 /*16*/])->f_1))
			{
				func_712(Global_1051387->f_3693[iVar0 /*16*/]);
				Global_1051387->f_3693[iVar0 /*16*/] = Global_1051387->f_3691;
				(Global_1051387->f_3693[iVar0 /*16*/])->f_1 = { vVar3 };
				(Global_1051387->f_3693[iVar0 /*16*/])->f_9 = 0;
			}
		}
	}
	if (Global_1051387->f_3692 == -1)
	{
		Global_1051387->f_3692 = 0;
	}
	iVar8 = Global_1051387->f_3692 + 1;
	if (iVar8 == 39 || iVar8 == -1)
	{
		iVar8 = 0;
	}
	while (iVar8 != Global_1051387->f_3692)
	{
		if (BUILTIN::VDIST2((Global_1051387->f_3693[iVar8 /*16*/])->f_1, Global_36) < func_715(iVar8, 1))
		{
			Global_1051387->f_3692 = iVar8;
		}
		else
		{
			iVar8++;
			if (iVar8 == 39)
			{
				iVar8 = 0;
			}
		}
	}
	func_716(Global_1051387->f_3693[Global_1051387->f_3692 /*16*/], Global_1051387->f_3692);
	func_717(Global_1051387->f_3692);
	if (Global_1051387->f_3666.f_1 != -1)
	{
		func_718(&(Global_1051387->f_3693[Global_1051387->f_3666.f_1 /*16*/]));
	}
	else if (func_719())
	{
		iVar9 = 0;
		while (iVar9 < 39)
		{
			func_718(&(Global_1051387->f_3693[iVar9 /*16*/]));
			if (Global_1051387->f_3666.f_1 != -1)
			{
			}
			else
			{
				iVar9++;
			}
		}
	}
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_191(iParam0);
	if (!func_720(iParam0, iVar0) || func_722(iParam0, iVar0, ((iParam1 == -1 || iParam1 != func_102()) || !func_721(func_102()))))
	{
		if (func_723(iParam0))
		{
			func_724(Global_1915170->f_17805[iParam0 /*11*/], 0);
			(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 0;
		}
		return 0;
	}
	bVar1 = false;
	if (!func_723(iParam0))
	{
		Global_1915170->f_17805[iParam0 /*11*/] = func_725(iVar0, iParam0, iParam1);
		if (&Global_1915170->f_17805[iParam0 /*11*/] != -1)
		{
			iVar2 = func_192(iVar0);
			if (iVar0 == 9)
			{
				iVar2 = func_726(iParam0, iVar0);
			}
			if (iVar2 != 0)
			{
				(Global_1915170->f_17805[iParam0 /*11*/])->f_1 = iVar2;
				func_728(&(Global_1915170->f_17805[iParam0 /*11*/]), func_727(iVar2));
			}
			bVar1 = true;
		}
		func_729(iParam0, 16);
		func_729(iParam0, 64);
		func_729(iParam0, 128);
		func_729(iParam0, -2147483648);
	}
	else
	{
		bVar1 = true;
	}
	func_730(iParam0);
	if (bVar1)
	{
		if (func_731(&(Global_1915170->f_17805[iParam0 /*11*/])) && !(Global_1915170->f_17805[iParam0 /*11*/])->f_5)
		{
			if (!((Global_1915170->f_17805[iParam0 /*11*/])->f_6 != -1 && !(Global_1915170->f_17805[iParam0 /*11*/])->f_8) && !func_732(iParam0, 8))
			{
				if (iParam1 == func_190(iParam0) && func_733(&(Global_1915170->f_17805[iParam0 /*11*/]), iParam1))
				{
					(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 1;
				}
			}
		}
		func_734(iParam0, iVar0);
	}
	return 1;
}

void func_223()
{
	int iVar0;
	struct<8> Var1;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;

	iVar0 = joaat("store");
	if (Global_1051387->f_4354.f_5 == -1)
	{
		if (!func_163(Global_1051387->f_4354.f_3, 0) && Global_1051387->f_4354.f_4 == 0)
		{
			func_735(0);
			return;
		}
	}
	if (!func_736())
	{
		func_735(0);
		return;
	}
	if (!func_737())
	{
		func_738(0);
		return;
	}
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(iVar0))
	{
		return;
	}
	if (Global_1051387->f_4354.f_1 && !UIAPPS::_IS_APP_RUNNING(iVar0))
	{
		func_738(1);
		return;
	}
	else
	{
		if (Global_1051387->f_4354.f_2 == 0)
		{
			Var1.f_2 = 0;
			Var1.f_3 = MISC::GET_HASH_KEY("SHOP_YES");
			Var1.f_7 = MISC::GET_HASH_KEY("SHOP_NO");
			Var1.f_3.f_3 = 0;
			func_739(&Var1);
			if (Global_1051387->f_4354.f_5 != -1)
			{
				iVar20 = Global_1051387->f_4354.f_5;
			}
			else if (Global_1051387->f_4354.f_3 != 0)
			{
				iVar20 = func_741(Global_1051387->f_4354.f_3, func_740(Global_1051387->f_4354.f_3), 1, 0, 1);
			}
			else
			{
				iVar20 = func_743(func_742(Global_1051387->f_4354.f_4, -570078785, 0, 1));
			}
			if (iVar20 == 1)
			{
				Global_1051387->f_4354.f_2 = func_744(&Var1, "GLOBAL_ALERT_ALT", MISC::_CREATE_VAR_STRING(2, "SHOP_GOLD_STORE_ALERT_S", iVar20), 0, 1);
			}
			else
			{
				Global_1051387->f_4354.f_2 = func_744(&Var1, "GLOBAL_ALERT_ALT", MISC::_CREATE_VAR_STRING(2, "SHOP_GOLD_STORE_ALERT", iVar20), 0, 1);
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_ACCEPT")))
		{
			_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1051387->f_4354.f_2);
			Global_1051387->f_4354.f_2 = 0;
			iVar21 = UIAPPS::_LAUNCH_APP_BY_HASH(iVar0);
			if (iVar21 == 1 || iVar21 == 2)
			{
				return;
			}
			else
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(true);
				CAM::DO_SCREEN_FADE_OUT(0);
				Global_1051387->f_4354.f_1 = 1;
			}
			iVar22 = func_745();
			iVar23 = func_746();
			bVar24 = func_747(Global_1051387->f_4354.f_3, 1) > NETWORK::_0x32C90CDFAF40514C();
			if (iVar22 != 0 && iVar23 != 0)
			{
				TELEMETRY::_0x536B6025E94AC48F(iVar22, iVar23, Global_1051387->f_4354.f_3, bVar24);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
		{
			_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1051387->f_4354.f_2);
			Global_1051387->f_4354.f_2 = 0;
			func_735(0);
			return;
		}
	}
}

void func_224()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_191(Global_1051387->f_4558);
	if (Global_1051387->f_4558 != -1)
	{
		if ((((Global_1051387->f_69[iVar0 /*76*/])->f_18 != Global_1051387->f_4558 || func_732(Global_1051387->f_4558, 1)) || func_719()) || func_691(&(Global_1051387->f_4559)) > 20f)
		{
			Global_1051387->f_4558 = -1;
			func_646(&(Global_1051387->f_4559));
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		else if (Global_1915170->f_19742.f_1 != Global_1051387->f_4558)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 295, true);
			if (func_134())
			{
				func_748();
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				UIAPPS::_CLOSE_APP_BY_HASH(29649618);
				return;
			}
			if (func_482())
			{
				func_749();
				return;
			}
			if (PED::_0xA911EE21EDF69DAF(Global_35) || func_750(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0xED00D72F81CF7278(iVar1, 0, 0);
				}
				return;
			}
			if (func_602(Global_35))
			{
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (!func_751(Global_35, -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
				}
				return;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!func_751(Global_35, 501393341))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
				return;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_752(Global_1051387->f_4558, &vVar2))
				{
					func_753(Global_35, vVar2, 0f, 2, 1073741824 /* Float: 2f */);
				}
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
	}
}

void func_225(var uParam0)
{
	var uVar0;

	if (Global_1051387->f_3218 <= 12)
	{
		if ((Global_1051387->f_3218 % 4) == 0)
		{
			if (((((((UNLOCK::_UNLOCK_IS_UNLOCKED(func_711(Global_1915170->f_19742.f_1)) && WEAPON::_0xCB690F680A3EA971(Global_35, 7)) && Global_1915170->f_19742 != 9) && Global_1915170->f_19742 != 18) && Global_1915170->f_19742 != 28) && Global_1915170->f_19742 != 14) && Global_1915170->f_19742 != 29) && Global_1915170->f_19742 != 27)
			{
				*uParam0 |= 1024;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 1024);
			}
		}
	}
	else
	{
		Global_1051387->f_3218 = 0;
		if (&Global_1273882->f_88[&Global_1273882])
		{
			*uParam0 |= 8;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 8);
		}
		if (func_97(Global_1273882->f_10, 1, 0, 1) && Global_1915170->f_19742 != 37)
		{
			*uParam0 |= 4;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 4);
		}
		if (((func_754(&uVar0) && !func_755(Global_1915170->f_19742)) && !func_756(Global_1915170->f_19742)) && !Global_1954385->f_1)
		{
			*uParam0 |= 16384;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 16384);
		}
		if (Global_1915170->f_19742 == 29)
		{
			if (WEAPON::_0x0DE0944ECCB3DF5D(Global_35) || FIRE::IS_EXPLOSION_IN_SPHERE(35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5f))
			{
				*uParam0 |= 32768;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 32768);
			}
		}
		if (func_757(Global_1273882->f_10, 10000) && Global_1915170->f_19742 != 37)
		{
			*uParam0 |= 256;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 256);
		}
		if (func_758() || (Global_1915170->f_19742 == 37 && func_312(func_759())))
		{
			*uParam0 |= 4096;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 4096);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1273882->f_8))
		{
			if (PED::IS_PED_HOGTIED(Global_1273882->f_8))
			{
				*uParam0 |= 64;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 64);
			}
		}
		if (func_760())
		{
			*uParam0 |= 8192;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 8192);
		}
		if (PED::_0xA911EE21EDF69DAF(Global_1273882->f_8))
		{
			*uParam0 |= 128;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 128);
		}
		if (func_761() && !func_762())
		{
			*uParam0 |= 2048;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 2048);
		}
	}
	Global_1051387->f_3218++;
}

int func_226(var uParam0)
{
	if (Global_1051387->f_40 < 1)
	{
		*uParam0 = -1;
		return 0;
	}
	*uParam0 = Global_1051387[Global_1051387->f_41];
	Global_1051387->f_41++;
	if (Global_1051387->f_41 >= Global_1051387->f_40)
	{
		Global_1051387->f_41 = 0;
	}
	return 1;
}

bool func_227()
{
	return Global_1915170->f_21989;
}

void func_228(bool bParam0)
{
	if (!(bParam0 && Global_1915170->f_21989))
	{
		if (bParam0)
		{
			INVENTORY::_0x6A564540FAC12211(2, 1807503187);
		}
		else
		{
			INVENTORY::_0x766315A564594401(2, 1807503187, 0);
		}
	}
	Global_1915170->f_21989 = bParam0;
}

void func_229()
{
	if (!func_763(34))
	{
		func_228(0);
		if (func_764())
		{
			if (!func_765(34))
			{
			}
		}
	}
	else if (func_766())
	{
		func_228(1);
	}
	else
	{
		func_228(0);
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1051387->f_3659 < 0 || Global_1051387->f_3659 == 4) || &Global_1051387->f_3582[Global_1051387->f_3659 /*19*/] == -1)
	{
		Global_1051387->f_3659 = 0;
	}
	iVar3 = Global_1051387->f_3659;
	if (&Global_1051387->f_3582[iVar3 /*19*/] != -1)
	{
		func_707(&(Global_1051387->f_3582[iVar3 /*19*/]), 30);
		switch ((Global_1051387->f_3582[iVar3 /*19*/])->f_1)
		{
			case 0:
				func_767(iVar3, 1);
				break;
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_8) || !ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_7))
				{
					if (&Global_1051387->f_3693[30 /*16*/] != &Global_1051387->f_3582[iVar3 /*19*/])
					{
					}
					else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[30 /*16*/])->f_4))
					{
					}
					else
					{
						(Global_1051387->f_3582[iVar3 /*19*/])->f_7 = (Global_1051387->f_3693[30 /*16*/])->f_4;
						(Global_1051387->f_3582[iVar3 /*19*/])->f_8 = (Global_1051387->f_3693[30 /*16*/])->f_5;
					}
				}
				else
				{
					iVar0 = (Global_1051387->f_3582[iVar3 /*19*/])->f_8;
					if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY((Global_1051387->f_3582[iVar3 /*19*/])->f_7))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar3 /*19*/])->f_7, true, false);
					}
					func_767(iVar3, 2);
				}
				break;
			case 2:
				if ((Global_1051387->f_3582[iVar3 /*19*/])->f_9 == -1)
				{
					func_767(iVar3, 3);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_15) || !ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_14))
				{
					iVar2 = func_711((Global_1051387->f_3582[iVar3 /*19*/])->f_9);
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar2))
					{
						func_767(iVar3, 3);
					}
					else if (&Global_1051387->f_3693[31 /*16*/] != (Global_1051387->f_3582[iVar3 /*19*/])->f_9)
					{
					}
					else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[31 /*16*/])->f_4))
					{
					}
					else
					{
						(Global_1051387->f_3582[iVar3 /*19*/])->f_14 = (Global_1051387->f_3693[31 /*16*/])->f_4;
						(Global_1051387->f_3582[iVar3 /*19*/])->f_15 = (Global_1051387->f_3693[31 /*16*/])->f_5;
					}
				}
				else
				{
					iVar0 = (Global_1051387->f_3582[iVar3 /*19*/])->f_15;
					ENTITY::SET_ENTITY_INVINCIBLE((Global_1051387->f_3582[iVar3 /*19*/])->f_15, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY((Global_1051387->f_3582[iVar3 /*19*/])->f_15))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar3 /*19*/])->f_15, true, false);
					}
					ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
					PED::SET_PED_CAN_RAGDOLL(iVar0, false);
					PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 376, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 44, true);
					(Global_1051387->f_3582[iVar3 /*19*/])->f_16 = 0;
					func_767(iVar3, 3);
				}
				break;
			case 3:
				if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_8))
				{
					func_767(iVar3, 0);
					Jump @1289; //curOff = 801
				}
				else if (!Global_1938932->f_51)
				{
					if (!TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_6))
					{
					}
					else if (PED::_0x9C54041BB66BCF9E((Global_1051387->f_3582[iVar3 /*19*/])->f_8, (Global_1051387->f_3582[iVar3 /*19*/])->f_6))
					{
					}
					else if (func_768(30, 1))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS((Global_1051387->f_3582[iVar3 /*19*/])->f_8, 1, 0);
						TASK::_TASK_USE_SCENARIO_POINT((Global_1051387->f_3582[iVar3 /*19*/])->f_8, (Global_1051387->f_3582[iVar3 /*19*/])->f_6, 0, 0, false, true, 1778448947, false, -1082130432, 0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_15))
				{
					if ((Global_1051387->f_3582[iVar3 /*19*/])->f_9 != -1)
					{
						func_767(iVar3, 2);
					}
					else
					{
						Jump @1286; //curOff = 1006
						if (TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_13) && !PED::_0x9C54041BB66BCF9E((Global_1051387->f_3582[iVar3 /*19*/])->f_15, (Global_1051387->f_3582[iVar3 /*19*/])->f_13))
						{
							TASK::CLEAR_PED_TASKS((Global_1051387->f_3582[iVar3 /*19*/])->f_15, 1, 0);
							TASK::_TASK_USE_SCENARIO_POINT((Global_1051387->f_3582[iVar3 /*19*/])->f_15, (Global_1051387->f_3582[iVar3 /*19*/])->f_13, 0, 0, false, true, 1595886358, false, -1082130432, 0);
							(Global_1051387->f_3582[iVar3 /*19*/])->f_16 = 0;
						}
						else if (!(Global_1051387->f_3582[iVar3 /*19*/])->f_16)
						{
							if (AUDIO::_0xBE28DB99556FF8D9((Global_1051387->f_3582[iVar3 /*19*/])->f_15) != 0 && !func_769())
							{
								iVar1 = func_770(&(Global_1051387->f_3582[iVar3 /*19*/]));
								if (iVar1 != 0)
								{
									AUDIO::_0x8E901B65206C2D3E((Global_1051387->f_3582[iVar3 /*19*/])->f_15);
									AUDIO::_0xB93A769B8B726950((Global_1051387->f_3582[iVar3 /*19*/])->f_15, iVar1);
									AUDIO::_0xC4CFCE4C656EF480((Global_1051387->f_3582[iVar3 /*19*/])->f_15);
								}
							}
							(Global_1051387->f_3582[iVar3 /*19*/])->f_16 = 1;
						}
					}
					Global_1051387->f_3659++;
				}
		}
	}

void func_231()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_102();
	if (!func_771(iVar0))
	{
		return;
	}
	Global_1268116->f_45 = (Global_1268116->f_45 + 1 % 2);
	iVar1 = Global_1268116->f_45;
	if (!func_772(iVar0, iVar1))
	{
		return;
	}
	(Global_1051387->f_69[36 /*76*/])->f_10 = 50f;
	if (SCRIPTS::IS_THREAD_ACTIVE((Global_1051387->f_69[36 /*76*/])->f_9, false))
	{
		return;
	}
	if (BUILTIN::VDIST((Global_1268116->f_32[Global_1268116->f_45 /*6*/])->f_1, Global_36) < (Global_1051387->f_69[36 /*76*/])->f_10)
	{
		Global_1051387->f_69[36 /*76*/] = 0;
		(Global_1051387->f_69[36 /*76*/])->f_18 = func_773(iVar0, iVar1);
		(Global_1051387->f_69[36 /*76*/])->f_25 = &Global_1268116->f_47[Global_1268116->f_45];
		(Global_1051387->f_69[36 /*76*/])->f_3 = { func_775(func_774(iVar0, iVar1)) };
		(Global_1051387->f_69[36 /*76*/])->f_26 = &Global_1268116->f_50[Global_1268116->f_45];
		(Global_1051387->f_69[36 /*76*/])->f_2 = iVar0;
		(Global_1051387->f_69[36 /*76*/])->f_64 = func_711((Global_1051387->f_69[36 /*76*/])->f_18);
		if (func_776(36))
		{
			if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6005) > 0)
			{
				Var2 = 36;
				Var2.f_2 = (Global_1051387->f_69[36 /*76*/])->f_25;
				Var2.f_3 = (Global_1051387->f_69[36 /*76*/])->f_26;
				Var2.f_1 = iVar0;
				Var2.f_4 = { (Global_1051387->f_69[36 /*76*/])->f_3 };
				(Global_1051387->f_69[36 /*76*/])->f_9 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_777(36), &Var2, 7, 6005);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_777(36));
				func_778(36, 2);
				func_212(36, 8);
			}
		}
		else if (!func_779(36, 2))
		{
			func_780(36);
		}
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1051387->f_4348 < 0 || Global_1051387->f_4348 == 4)
	{
		Global_1051387->f_4348 = 0;
	}
	iVar1 = Global_1051387->f_4348;
	iVar2 = &Global_1051387->f_4319[iVar1 /*7*/];
	if (iVar2 != -1)
	{
		func_707(iVar2, 32);
		if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_4319[iVar1 /*7*/])->f_1))
		{
			if (&Global_1051387->f_3693[32 /*16*/] != iVar2)
			{
			}
			else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[32 /*16*/])->f_4))
			{
			}
			else
			{
				(Global_1051387->f_4319[iVar1 /*7*/])->f_1 = (Global_1051387->f_3693[32 /*16*/])->f_4;
				(Global_1051387->f_4319[iVar1 /*7*/])->f_2 = (Global_1051387->f_3693[32 /*16*/])->f_5;
			}
		}
		else
		{
			iVar0 = (Global_1051387->f_4319[iVar1 /*7*/])->f_2;
			if (!TASK::DOES_SCENARIO_POINT_EXIST((Global_1051387->f_4319[iVar1 /*7*/])->f_6))
			{
			}
			else if (PED::_0x9C54041BB66BCF9E(iVar0, (Global_1051387->f_4319[iVar1 /*7*/])->f_6))
			{
			}
			else
			{
				STREAMING::_0x19A6BE7D9C6884D3((Global_1051387->f_4319[iVar1 /*7*/])->f_5, 8207, 0, 0);
				if (STREAMING::_0x9427C94D2E4094A4((Global_1051387->f_4319[iVar1 /*7*/])->f_5, 0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					TASK::_TASK_USE_SCENARIO_POINT(iVar0, (Global_1051387->f_4319[iVar1 /*7*/])->f_6, 0, 0, true, false, (Global_1051387->f_4319[iVar1 /*7*/])->f_5, false, -1082130432, 0);
				}
			}
		}
	}
	Global_1051387->f_4348++;
}

int func_233(int iParam0)
{
	return func_517(&(Global_1915170->f_19887[iParam0]), 8);
	return 0;
}

int func_234(int iParam0)
{
	if (!func_781(iParam0))
	{
		if (!func_782(iParam0))
		{
			return 0;
		}
	}
	else
	{
		if (func_517(&(Global_1915170->f_19887[iParam0]), 1))
		{
			func_783(Global_1915170->f_19887[iParam0], 1);
		}
		if (!func_784(iParam0))
		{
			return 0;
		}
		else
		{
			func_690(Global_1915170->f_19887[iParam0], 8);
		}
	}
	return 1;
}

void func_235(int iParam0, int iParam1)
{
	func_785(iParam0);
	if (STREAMING::IS_MODEL_VALID((Global_1051387->f_69[iParam0 /*76*/])->f_19))
	{
		STREAMING::REQUEST_MODEL((Global_1051387->f_69[iParam0 /*76*/])->f_19, false);
	}
	func_786(Global_1051387->f_69[iParam0 /*76*/], 2, iParam0);
}

void func_236(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (((Global_1051387->f_3220 != -1 && Global_1051387->f_3221 != 0) && _NAMESPACE71::_0x59FA676177DBE4C9(Global_1051387->f_3221) > 5) && !Global_1915170->f_20135)
	{
		Global_1051387->f_3221 = 0;
		Global_1051387->f_3220 = -1;
	}
	func_707(iParam1, iParam0);
	func_787(iParam0);
	if (func_763(iParam0))
	{
		func_788(iParam0);
	}
	else if (BUILTIN::VDIST(Global_1273882->f_17, (Global_1051387->f_69[iParam0 /*76*/])->f_3) < (Global_1051387->f_69[iParam0 /*76*/])->f_10)
	{
		if (!func_765(iParam0))
		{
		}
	}
	if (!func_700(iParam0) && VOLUME::DOES_VOLUME_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_25))
	{
		if (func_732(iParam1, 1))
		{
			if (func_768(iParam0, 2))
			{
				VOLUME::SET_VOLUME_RELATIONSHIP((Global_1051387->f_69[iParam0 /*76*/])->f_25, 623901053);
				PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_25);
				func_789(iParam0, 2);
			}
		}
		else if (!func_768(iParam0, 2))
		{
			iVar0 = 0;
			iVar1 = 0;
			fVar3 = 0f;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				if (func_768(iVar1, 2))
				{
					fVar4 = BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iVar1 /*76*/])->f_3);
					if (fVar4 > fVar3)
					{
						fVar3 = fVar4;
						iVar2 = iVar1;
					}
					iVar0++;
					if (iVar0 == 4)
					{
					}
					else
					{
						iVar1++;
					}
					if (iVar0 == 4)
					{
						if (BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iParam0 /*76*/])->f_3) < fVar3)
						{
							VOLUME::SET_VOLUME_RELATIONSHIP((Global_1051387->f_69[iVar2 /*76*/])->f_25, 623901053);
							PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME((Global_1051387->f_69[iVar2 /*76*/])->f_25);
							func_789(iVar2, 2);
							iVar0 = (iVar0 - 1);
						}
					}
					if (iVar0 < 4)
					{
						VOLUME::SET_VOLUME_RELATIONSHIP((Global_1051387->f_69[iParam0 /*76*/])->f_25, func_790());
						PATHFIND::_0x19C7567D2F2287D6((Global_1051387->f_69[iParam0 /*76*/])->f_25, 16);
						func_791(iParam0, 2);
					}
					if (func_779(iParam0, 512))
					{
						if (Global_1051387->f_3221 != 0 && iParam0 == Global_1915170->f_19742)
						{
							func_792(1);
							Global_1051387->f_3221 = 0;
							Global_1051387->f_3220 = -1;
						}
						if ((Global_1051387->f_69[iParam0 /*76*/])->f_50 & 1 != 0 && (Global_1051387->f_69[iParam0 /*76*/])->f_50 & 134217728 != 0)
						{
							func_793(iParam0);
						}
						if (func_794(iParam0) || (Global_1051387->f_69[iParam0 /*76*/])->f_50 & 268435456 != 0)
						{
							func_795(iParam0, iParam1);
						}
						else
						{
							func_796(iParam0);
						}
					}
					else
					{
						if (func_794(iParam0))
						{
							if (func_797(iParam0))
							{
								func_798(iParam0);
							}
							if ((Global_1051387->f_69[iParam0 /*76*/])->f_50 & 1 != 0 && !func_779(iParam0, 65536))
							{
								func_799(iParam0, 65536);
							}
						}
						if (func_800(iParam0))
						{
							func_801();
						}
						if (iParam0 != 9)
						{
							if ((Global_1051387->f_69[iParam0 /*76*/])->f_50 & 1 != 0 && !(Global_1051387->f_69[iParam0 /*76*/])->f_50 & 134217728 != 0)
							{
								func_802(iParam0, 0);
							}
						}
					}
				}
			}
		}
	}

void func_237()
{
	char* sVar0;
	int iVar1;

	sVar0 = "net_ugc_end_flow";
	if (!func_803(4))
	{
		return;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar1) != 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, -1, true, 0))
	{
		return;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		Global_265331->f_124672 = SCRIPTS::START_NEW_SCRIPT(sVar0, 6000);
		func_804(4);
	}
}

int func_238(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
			bVar1 = func_207(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_207(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_805();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_239(int iParam0)
{
	func_690(&(Global_1915119->f_1), iParam0);
}

void func_240(int iParam0)
{
	func_783(&(Global_1915119->f_1), iParam0);
}

void func_241()
{
	struct<51> Var0;

	MISC::_CANCEL_ONSCREEN_KEYBOARD();
	func_806();
	func_251(0);
	Global_1958224->f_53 = 0;
	Global_1958224->f_52 = 0;
	StringCopy(&(Global_1958224->f_56), "", 128);
	Var0.f_50 = 256;
	MISC::_COPY_MEMORY(Global_1958224, &Var0, 51);
}

void func_242(int iParam0)
{
	Global_1958224->f_51 = iParam0;
}

int func_243()
{
	return Global_1958224->f_51;
}

int func_244()
{
	int iVar0;

	if (func_807() == 0)
	{
		return 0;
	}
	iVar0 = func_808();
	if (iVar0 != -1)
	{
		func_246(iVar0);
		return 0;
	}
	return 1;
}

void func_245(int iParam0)
{
	if (Global_1939057->f_102.f_2 >= iParam0)
	{
		return;
	}
	Global_1939057->f_102.f_2 = iParam0;
}

void func_246(int iParam0)
{
	func_242(5);
	func_809(iParam0);
}

void func_247()
{
	struct<4> Var0;
	char* sVar19;

	if (Global_1958224->f_52 == 0)
	{
		Var0.f_2 = 0;
		Var0.f_3 = 1330277134; /* GXTEntry: "Accept" */
		Var0.f_3.f_3 = 0;
		sVar19 = "";
		switch (func_810())
		{
			case -1:
				func_242(8);
				return;
			case 0:
				func_249(4);
				sVar19 = "ERROR_PROFANITY_SERVICE_DOWN";
				break;
			case 1:
				func_249(5);
				sVar19 = "ERROR_FAILEDPROFANITY";
				break;
			case 2:
				sVar19 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
				break;
			case 3:
				sVar19 = "NM_GC_UGC_RESTRICT";
				break;
		}
		if (func_811(&Var0, "GLOBAL_ALERT_ALT", sVar19, 0, 0, 1))
		{
		}
		else
		{
			func_249(3);
			func_242(7);
			return;
		}
	}
	if (func_812() != -1577439368)
	{
		func_813();
		func_242(7);
	}
}

void func_248(char* sParam0)
{
	StringCopy(&(Global_1958224->f_56), sParam0, 128);
}

void func_249(int iParam0)
{
	Global_1958224->f_54 = iParam0;
}

int func_250()
{
	return Global_1958224->f_54;
}

void func_251(int iParam0)
{
	Global_1958224->f_72 = iParam0;
}

int func_252()
{
	if (Global_1572887->f_13 != -1)
	{
		Global_35 = Global_1273882->f_8;
		Global_36 = { Global_1273882->f_17 };
		return Global_1273882->f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_254()
{
	Global_1939168->f_7 = 0;
	Global_1939168->f_8 = 0;
	Global_1939168->f_20 = 0;
	Global_1939168->f_9 = 0;
	Global_1939168->f_10 = 0;
	Global_1939168->f_11 = 0;
	Global_1939168->f_12 = 0;
	Global_1939168->f_13 = -1;
	Global_1939168->f_14 = -1;
	Global_1939168->f_15 = -1;
	Global_1939168->f_17 = 0;
}

bool func_255(int iParam0)
{
	return (Global_1951131 && iParam0) != 0;
}

void func_256(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	iVar0 = Global_1951131->f_919;
	switch (uParam0[iVar0 /*4*/])
	{
		case 26:
			func_814(((*uParam0)[iVar0 /*4*/])->f_1);
			break;
		case 27:
			if (func_255(32))
			{
				func_815(&(Global_1951131->f_2228));
				func_817(Global_1951131->f_2228, func_816(*((*uParam0)[iVar0 /*4*/]), 2));
			}
			else
			{
				func_815(&(Global_1951131->f_1657));
				func_817(Global_1951131->f_1657, func_816(*((*uParam0)[iVar0 /*4*/]), 2));
			}
			func_818();
			break;
		case 35:
			func_819(&(Global_1951131->f_1657));
			break;
		case 28:
			bVar2 = ((*uParam0)[iVar0 /*4*/])->f_1;
			if (func_348(bVar2) != -999503751)
			{
				iVar3 = func_350(bVar2);
				if (iVar3 == -358215195)
				{
				}
				else
				{
					bVar1 = bVar2 == &Global_1951131->f_1657.f_1[func_820(iVar3, 1) /*3*/];
					Jump @305; //curOff = 290
					bVar1 = bVar2 == Global_1951131->f_1657;
					func_821(bVar2, 1, 1, bVar1);
					Jump @498; //curOff = 315
					bVar2 = ((*uParam0)[iVar0 /*4*/])->f_1;
					func_822(bVar2, 1, 1);
					Jump @498; //curOff = 336
					func_817(Global_1951131->f_1657, 0);
					Jump @498; //curOff = 351
					func_817(Global_1951131->f_1657, 0);
					Jump @498; //curOff = 366
					func_823(((*uParam0)[iVar0 /*4*/])->f_1);
					Jump @498; //curOff = 381
					func_824(((*uParam0)[iVar0 /*4*/])->f_1);
					Jump @498; //curOff = 396
					if (func_255(32))
					{
						func_825(&(Global_1951131->f_2228));
					}
					else
					{
						func_825(&(Global_1951131->f_1657));
					}
					Jump @498; //curOff = 433
					func_826(&(Global_1951131->f_1055.f_9), Global_1951131->f_1055.f_6);
					Jump @498; //curOff = 458
					func_827();
					Jump @498; //curOff = 465
					if (Global_1951131->f_926)
					{
					}
					else
					{
						if (func_828())
						{
							return;
						}
						func_829();
					}
				}
				func_830(uParam0[iVar0 /*4*/]);
				iVar0 = (iVar0 + 1 % 20);
				Global_1951131->f_919 = iVar0;
				Global_1951131->f_918 = (Global_1951131->f_918 - 1);
			}
		}

void func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = Global_1951131->f_921;
	if (((*uParam0)[iVar1 /*4*/])->f_3 != 0)
	{
		iVar0 = ((*uParam0)[iVar1 /*4*/])->f_3;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	}
	if (!func_831(iVar0, &iVar3))
	{
		return;
	}
	if (iVar3 == 0)
	{
		switch (uParam0[iVar1 /*4*/])
		{
			case 5:
				if (func_816(*((*uParam0)[iVar1 /*4*/]), 4096))
				{
					PED::_0x314C5465195F3B30(iVar0, Global_17173.f_54.f_644.f_1775);
				}
				if (func_816(*((*uParam0)[iVar1 /*4*/]), 16384))
				{
					PED::_0x283978A15512B2FE(iVar0, 1);
				}
				PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 0, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
				break;
			case 13:
				func_832(&(Global_1951131->f_1055));
				break;
			case 3:
				if (Global_1951131->f_1055.f_1 == 0)
				{
				}
				else
				{
					if (!func_833(&(Global_1951131->f_1055), &(Global_1951131->f_1055.f_9)))
					{
						return;
					}
					Jump @1576; //curOff = 358
					if (!func_834(iVar0, &(Global_1951131->f_1055)))
					{
						return;
					}
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 16))
					{
						PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, false);
					}
					Jump @1576; //curOff = 409
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					func_835(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 508
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					func_835(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 607
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					func_835(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 706
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					func_835(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 805
					func_836();
					Jump @1576; //curOff = 812
					func_837(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), func_816(*((*uParam0)[iVar1 /*4*/]), 64), func_816(*((*uParam0)[iVar1 /*4*/]), 128));
					Jump @1576; //curOff = 897
					func_837(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), func_816(*((*uParam0)[iVar1 /*4*/]), 64), func_816(*((*uParam0)[iVar1 /*4*/]), 128));
					Jump @1576; //curOff = 982
					iVar4 = -1;
					if (((*uParam0)[iVar1 /*4*/])->f_1 != 0)
					{
						iVar4 = ((*uParam0)[iVar1 /*4*/])->f_1;
					}
					func_835(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), iVar4, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), !func_816(*((*uParam0)[iVar1 /*4*/]), 1024), 1);
					Jump @1576; //curOff = 1083
					iVar4 = -1;
					if (((*uParam0)[iVar1 /*4*/])->f_1 != 0)
					{
						iVar4 = ((*uParam0)[iVar1 /*4*/])->f_1;
					}
					func_835(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), iVar4, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), !func_816(*((*uParam0)[iVar1 /*4*/]), 1024), 1);
					Jump @1576; //curOff = 1184
					iVar2 = func_820(((*uParam0)[iVar1 /*4*/])->f_1, 1);
					func_838(iVar0, iVar2, !func_816(*((*uParam0)[iVar1 /*4*/]), 256));
					PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
					Jump @1576; //curOff = 1250
					iVar2 = func_820((Global_1951131->f_734[iVar1 /*4*/])->f_1, 1);
					func_839(&(Global_1951131->f_1657), iVar0, iVar2, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16));
					Jump @1576; //curOff = 1316
					iVar2 = func_820((Global_1951131->f_734[iVar1 /*4*/])->f_1, 1);
					func_839(&(Global_1951131->f_1538), iVar0, iVar2, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16));
					Jump @1576; //curOff = 1382
					func_840(iVar0, 1);
					Jump @1576; //curOff = 1392
					if (!func_841(2))
					{
					}
					else
					{
						if (!func_843(iVar0, func_842(255), ((*uParam0)[iVar1 /*4*/])->f_1))
						{
						}
						PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
						Jump @1576; //curOff = 1455
						PED::_0xD710A5007C2AC539(iVar0, -668168749, 0);
						Jump @1576; //curOff = 1470
						if (!func_844(*((*uParam0)[iVar1 /*4*/])))
						{
							return;
						}
						Jump @1576; //curOff = 1492
						func_845(iVar0, ((*uParam0)[iVar1 /*4*/])->f_1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
						Jump @1576; //curOff = 1525
						func_846(iVar0, ((*uParam0)[iVar1 /*4*/])->f_1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16), func_816(*((*uParam0)[iVar1 /*4*/]), 8192));
					}
				}
				if (func_816(*((*uParam0)[iVar1 /*4*/]), 32))
				{
				}
				func_830(uParam0[iVar1 /*4*/]);
				iVar1 = (iVar1 + 1 % 25);
				Global_1951131->f_921 = iVar1;
				Global_1951131->f_916 = (Global_1951131->f_916 - 1);
		}
	}

void func_258(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_917)
	{
		if (((*uParam0)[iVar0 /*4*/])->f_3 != 0)
		{
			iVar2 = ((*uParam0)[iVar0 /*4*/])->f_3;
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		}
		if (!func_831(iVar2, &iVar3))
		{
			return;
		}
		if (iVar3 == 0)
		{
			switch (uParam0[iVar0 /*4*/])
			{
				case 23:
					PED::_APPLY_PED_METAPED_OUTFIT(((*uParam0)[iVar0 /*4*/])->f_1, iVar2, true, false);
					bVar1 = true;
					break;
				case 24:
					func_847(iVar2, ((*uParam0)[iVar0 /*4*/])->f_1);
					bVar1 = true;
				case 25:
					PED::_0x1902C4CFCC5BE57C(iVar2, ((*uParam0)[iVar0 /*4*/])->f_1);
					bVar1 = true;
					break;
			}
		}
		func_830(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	if (bVar1)
	{
		PED::_0xCC8CA3E88256E58F(iVar2, 0, 1, 1, 1, func_816(*((*uParam0)[iVar0 /*4*/]), 16));
	}
	Global_1951131->f_917 = 0;
}

void func_259(int iParam0)
{
	Global_1951131 = (&Global_1951131 - (Global_1951131 && iParam0));
}

bool func_260(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915170->f_20136;
	}
	return (Global_1915170->f_20136 || Global_1915170->f_21989.f_1);
}

void func_261(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_848(&Global_0, 8);
	}
	if (!func_321() || func_64() != -1)
	{
		return;
	}
	func_848(&Global_0, 1);
}

int func_262(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099293->f_16)
	{
		return 0;
	}
	if (!func_849())
	{
		return 0;
	}
	if (!func_850())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_848(&Global_0, 8);
	}
	func_848(&Global_0, 1);
	return 1;
}

float func_263()
{
	return 0.5f;
}

bool func_264()
{
	return Global_1938998->f_13;
}

bool func_265()
{
	return (func_851() || func_852());
}

float func_266()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1938998->f_15.f_1 - func_263()) * (1f / (1f - func_263())));
	fVar1 = ((Global_1938998->f_15.f_5 * fVar0) + (Global_1938998->f_15.f_4 * (1f - fVar0)));
	return (fVar1 * Global_1938998->f_15.f_2);
}

float func_267()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1938998->f_15.f_1 - func_263()) * (1f / (1f - func_263())));
	fVar1 = ((Global_1938998->f_15.f_7 * fVar0) + (Global_1938998->f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1938998->f_15.f_3);
}

int func_268()
{
	if (Global_1938998->f_14)
	{
		return 0;
	}
	if (Global_1938998->f_28.f_1)
	{
		return 1;
	}
	if (Global_1938998->f_9 >= 1f && func_853())
	{
		func_854();
		return 1;
	}
	return 0;
}

void func_269()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_855(1);
		func_856();
	}
	vVar2 = { 1f, 1f, 1f };
	switch (Global_1938998->f_28.f_8)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
			func_857(1);
			Global_1938998->f_28.f_3 = 0;
			break;
		case 1:
			if (!Global_1938998->f_28.f_3)
			{
				STREAMING::REQUEST_ANIM_DICT(func_858());
				Global_1938998->f_28.f_3 = 1;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_858()))
			{
				func_857(2);
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_OUT(5000);
			Global_1938998->f_28.f_4 = MISC::GET_GAME_TIMER();
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				func_857(3);
			}
			else
			{
				func_857(4);
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar1, Global_36 + vVar2, 1073741824, 0);
				func_857(5);
			}
			break;
		case 4:
			if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35))
			{
				bVar0 = true;
			}
			if (func_859(Global_35))
			{
				bVar0 = false;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_0x2D0571BB55879DA2(Global_35) == -1241981548)
			{
				bVar0 = false;
			}
			if (Global_1938998->f_28.f_4 > 8000)
			{
				if (bVar0 && !Global_1938998->f_28)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_858(), func_860(), 4f, -2f, 5000, 0, 0, 0, 0, 0, 0, 0);
					Global_1938998->f_28 = 1;
				}
				if (Global_1938998->f_28.f_3)
				{
					STREAMING::REMOVE_ANIM_DICT(func_858());
					Global_1938998->f_28.f_3 = 0;
				}
				func_857(5);
			}
			break;
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT() && !PED::_0xA911EE21EDF69DAF(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				ENTITY::_0x9587913B9E772D29(Global_35, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					func_282(Global_35, 357427886, 1, 1);
				}
			}
			break;
		case 6:
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(5000);
			}
			func_855(1);
			func_856();
			break;
	}
}

bool func_270(int iParam0, int iParam1)
{
	return (Global_1896610[iParam0 /*2*/] && iParam1) != 0;
}

int func_271(int iParam0)
{
	int iVar0;

	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1896610)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1896610)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::DOES_VOLUME_EXIST(((*Global_1896610)[6 /*2*/])->f_1) && VOLUME::DOES_VOLUME_EXIST(((*Global_1896610)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1896610)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1896610)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	((*Global_1896610)[iParam0 /*2*/])->f_1 = iVar0;
	return iVar0;
}

void func_272(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_273(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

void func_274(int iParam0, int iParam1)
{
	(*Global_1896610)[iParam0 /*2*/] = (Global_1896610[iParam0 /*2*/] - (Global_1896610[iParam0 /*2*/] && iParam1));
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_861(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_307((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_64() != -1)
	{
		return;
	}
	if (func_861(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_862((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

var func_277()
{
	return &Global_1048577;
}

bool func_278(int iParam0)
{
	return func_863(&(Global_3145858->f_6), iParam0);
}

bool func_279(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_280(int iParam0)
{
	return iParam0;
}

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_282(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<13> Var0;

	if (ENTITY::_0x083D497D57B7400F(Global_1273882->f_8))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_1273882->f_8))
	{
		if (bParam2)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1273882->f_8, true);
		}
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 243, true);
		}
		Var0 = PLAYER::PLAYER_PED_ID();
		Var0.f_1 = iParam0;
		Var0.f_2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
		Var0.f_3 = 1;
		Var0.f_5 = bParam1;
		Var0.f_12 = (bParam1 != 0 && WEAPON::_0x959383DCD42040DA(bParam1));
		func_864(&Var0, &(Global_1099293->f_267));
		PED::_0x1CE875505D45338A(PLAYER::PLAYER_PED_ID(), iParam0, bParam1);
	}
}

void func_283(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_865(&(Var30.f_6), &Var30, 0))
	{
		Var30.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_866(85);
	if (func_867(iParam0, &uVar0))
	{
		func_868(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_869(0);
		}
		return;
	}
	func_870(Var30.f_6, Var30, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	if (bParam1)
	{
		func_869(0);
	}
}

void func_284(char* sParam0)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar1 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar1 != 0)
		{
			if (iVar0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar1))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar1, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar1, 523);
				}
			}
			iVar1 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

int func_285(int iParam0)
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

int func_286(int iParam0)
{
	if (!func_381(iParam0))
	{
		return 0;
	}
	return func_871(iParam0, 2);
}

void func_287(int iParam0, int iParam1)
{
	if (!func_381(iParam0))
	{
		return;
	}
	func_394(func_285(iParam0), iParam1);
}

int func_288(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_102();
	if (func_299(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_872(vParam0, iParam3);
}

bool func_289(int iParam0)
{
	if (!func_299(iParam0))
	{
		return false;
	}
	return ((((*Global_1887327)[iParam0 /*36*/])->f_21 == 1 || ((*Global_1887327)[iParam0 /*36*/])->f_21 == 2) && !func_873(iParam0));
}

bool func_290()
{
	return func_253(&Global_1939168, 8192);
}

int func_291(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_376(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_40.f_186[iParam0 /*12*/]);
	}
	iVar0 = 0;
	Var1 = { func_100(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1070355->f_19592[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return &(Global_1070355->f_19592[iParam0 /*12*/]);
}

void func_292(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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

	if (!func_874())
	{
		return;
	}
	sVar1 = func_875(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_376(iParam4))
	{
		if (func_299(iParam0))
		{
			iParam4 = func_285(func_876(iParam0));
		}
		else
		{
			iParam4 = func_285(iParam1);
		}
	}
	if (func_376(iParam4))
	{
		iVar3 = func_291(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_878(func_877(iParam2));
	}
	else if ((func_871(iParam1, 2) || func_386(iParam4, 2)) && !Global_1893575->f_9)
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
	else if ((func_299(iParam0) && func_399(iParam0, 16777216)) && !Global_1893575->f_9)
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
		iVar4 = func_880(func_879());
		iVar5 = func_881(func_879());
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
				fVar7 = func_882(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_883(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_883(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_882(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_883(&cVar6, joaat("COLOR_PURE_WHITE")), func_883(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893575->f_9 = 0;
	}
	Global_1938075->f_145 = func_884(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_293(int iParam0)
{
	int iVar0;

	if (!func_381(iParam0))
	{
		return;
	}
	iVar0 = func_285(iParam0);
	func_392(iVar0);
	func_393(iVar0, func_291(iVar0));
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_885(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_307((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_295(int iParam0)
{
	Global_1896610->f_41 = iParam0;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2025841068;
		case 1:
			return 822658194;
		case 2:
			return 1308232528;
		case 3:
			return 1835499550;
		case 4:
			return 476637847;
		case 6:
			return -120156735;
		case 7:
			return 1645618177;
		case 8:
			return -512529193;
		case 9:
			return 131399519;
		case 10:
			return 178647645;
		case 11:
			return -864275692;
		case 12:
			return 1684533001;
		case 13:
			return -2066240242;
		case 14:
			return -2145992129;
		case 15:
			return -108848014;
		case 16:
			return 892930832;
		default:
			break;
	}
	return -1;
}

void func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_64() != -1)
	{
		return;
	}
	if (func_885(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_886((iVar1 + iVar0)))
			{
				func_862((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_298(int iParam0)
{
	if (!func_381(iParam0))
	{
		return;
	}
	func_887();
	switch (iParam0)
	{
		case 0:
			func_888(5, joaat("ANIMALS_ALLIGATOR"));
			func_888(10, -530650579);
			func_888(11, joaat("ANIMALS_ALLIGATOR"));
			func_888(12, -79992523);
			func_888(13, -1608748833);
			func_888(7, -1243003160);
			break;
		case 1:
			func_888(5, -431794078);
			func_888(10, -530650579);
			func_888(11, 2024364203);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			break;
		case 2:
			func_888(5, -715307145);
			func_888(10, 1784992423);
			func_888(11, joaat("ANIMALS_ALLIGATOR"));
			func_888(12, 1784992423);
			func_888(13, -1608748833);
			func_888(7, 486487548);
			break;
		case 3:
			func_888(5, -2064541187);
			func_888(10, -530650579);
			func_888(11, 2024364203);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, 506825778);
			break;
		case 4:
			func_888(5, -530650579);
			func_888(10, -530650579);
			func_888(11, 2024364203);
			func_888(12, -1897088481);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			func_888(8, 239028334);
			break;
		case 5:
		case 6:
		case 7:
			func_888(5, -530650579);
			func_888(10, -1608748833);
			func_888(11, 1455354960);
			func_888(12, -530650579);
			func_888(13, -1608748833);
			func_888(7, 188176855);
			break;
		case 8:
			func_888(5, -79992523);
			func_888(10, -79992523);
			func_888(11, 796850253);
			func_888(12, joaat("animal_hen"));
			func_888(13, -79992523);
			func_888(7, -1063650279);
			break;
		case 9:
			func_888(5, -530650579);
			func_888(10, -530650579);
			func_888(11, 1455354960);
			func_888(12, -79992523);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			func_888(8, 239028334);
			break;
		case 10:
			func_888(5, -2064541187);
			func_888(10, -530650579);
			func_888(11, 1455354960);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			break;
		case 11:
			func_888(5, -530650579);
			func_888(10, -1074047115);
			func_888(11, -1608748833);
			func_888(12, -1897088481);
			func_888(13, -1608748833);
			func_888(7, 662736559);
			break;
		case 12:
			func_888(5, -530650579);
			func_888(10, -1608748833);
			func_888(11, -1504621559);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, 486487548);
			break;
	}
}

bool func_299(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_300(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_378(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_378(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_64() != -1 && func_889() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_64() != -1)
			{
				return 1624541293;
			}
			if (func_890(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_64() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_64() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_64() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 134:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 135:
			if (func_64() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_890(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_891(iParam0);
		if (iVar0 != -1)
		{
			return func_301(iVar0, bParam1);
		}
	}
	return 0;
}

int func_301(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_64() != -1)
			{
				return -1308265478;
			}
			if (func_890(44))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_64() != -1)
			{
				return -650528936;
			}
			if (func_890(44))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_64() != -1)
			{
				return -877373104;
			}
			if (func_890(44))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_302(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_301(func_61(Global_36), 1);
	}
	if (func_892(iParam0, iParam1))
	{
	}
}

void func_303(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893575->f_182 = fParam0;
	Global_1893575->f_183 = fParam1;
	Global_1893575->f_184 = fParam2;
	Global_1893575->f_185 = fParam3;
}

bool func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_893(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_894(iVar1))
	{
		if (Global_1070355->f_17915.f_24 && !func_895(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070355->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_40.f_106[iVar1]), iVar2);
}

void func_305(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_896(1497516462);
			func_897(2016141805);
			func_897(1010885152);
			func_897(-502324015);
			break;
		case 2016141805:
			func_897(1497516462);
			func_896(2016141805);
			func_897(1010885152);
			func_897(-502324015);
			break;
		case 1010885152:
			func_897(1497516462);
			func_897(2016141805);
			func_896(1010885152);
			func_897(-502324015);
			break;
		case -502324015:
			func_897(1497516462);
			func_897(2016141805);
			func_897(1010885152);
			func_896(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_897(-538889627);
			func_897(-538880323);
			func_897(-1056767524);
			func_896(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_898();
			func_896(iParam0);
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
			func_899();
			func_896(iParam0);
			break;
		case 2019386373:
			func_897(-664252410);
			func_897(2109952320);
			func_896(2019386373);
			break;
		case -664252410:
			func_897(2019386373);
			func_897(2109952320);
			func_896(-664252410);
			break;
		case 2109952320:
			func_897(2019386373);
			func_897(-664252410);
			func_896(2109952320);
			break;
		case -1674179981:
			func_897(-1835851517);
			func_897(-1838352012);
			func_896(-1674179981);
			break;
		case -1835851517:
			func_897(-1674179981);
			func_897(-1838352012);
			func_896(-1835851517);
			break;
		case -1838352012:
			func_897(-1674179981);
			func_897(-1835851517);
			func_896(-1838352012);
			break;
		case -1717960576:
			func_897(210001842);
			func_896(-1717960576);
			break;
		case 210001842:
			func_897(-1717960576);
			func_896(210001842);
			break;
		case -150493654:
			func_897(-1271608261);
			func_897(1846061697);
			func_897(-1145519186);
			func_896(-150493654);
			break;
		case -1271608261:
			func_897(-150493654);
			func_897(1846061697);
			func_897(-1145519186);
			func_896(-1271608261);
			break;
		case 1846061697:
			func_897(-150493654);
			func_897(-1271608261);
			func_897(-1145519186);
			func_896(1846061697);
			Jump @2886; //curOff = 1081
			func_897(-150493654);
			func_897(-1271608261);
			func_897(1846061697);
			func_896(-1145519186);
			Jump @2886; //curOff = 1120
			func_897(280705402);
			func_897(1926308480);
			func_896(1766284049);
			Jump @2886; //curOff = 1150
			func_897(1766284049);
			func_897(1926308480);
			func_896(280705402);
			Jump @2886; //curOff = 1180
			func_897(1766284049);
			func_897(280705402);
			func_896(1926308480);
			Jump @2886; //curOff = 1210
			if (bParam1)
			{
				func_897(439465264);
				func_896(1609506757);
			}
			else
			{
				func_897(1609506757);
				func_897(439465264);
			}
			Jump @2886; //curOff = 1257
			if (func_304(1609506757))
			{
				if (bParam1)
				{
					func_896(439465264);
				}
				else
				{
					func_897(439465264);
				}
			}
			Jump @2886; //curOff = 1298
			func_897(-1612662716);
			func_896(1822001510);
			Jump @2886; //curOff = 1319
			func_897(1822001510);
			func_896(-1612662716);
			Jump @2886; //curOff = 1340
			func_897(1952610440);
			func_897(-223469678);
			func_897(-404698347);
			func_897(1517904467);
			func_896(1306158345);
			Jump @2886; //curOff = 1388
			func_897(1306158345);
			func_897(-223469678);
			func_897(-404698347);
			func_897(1517904467);
			func_896(1952610440);
			Jump @2886; //curOff = 1436
			func_897(1306158345);
			func_897(1952610440);
			func_897(-404698347);
			func_897(1517904467);
			func_896(-223469678);
			Jump @2886; //curOff = 1484
			func_897(1306158345);
			func_897(1952610440);
			func_897(-223469678);
			func_897(1517904467);
			func_896(-404698347);
			Jump @2886; //curOff = 1532
			func_897(1306158345);
			func_897(1952610440);
			func_897(-223469678);
			func_897(-404698347);
			func_896(1517904467);
			Jump @2886; //curOff = 1580
			func_897(931649776);
			func_897(-434590080);
			func_897(1743048395);
			func_897(449774763);
			func_896(1376646519);
			Jump @2886; //curOff = 1628
			func_897(1376646519);
			func_897(-434590080);
			func_897(1743048395);
			func_897(449774763);
			func_896(931649776);
			Jump @2886; //curOff = 1676
			func_897(1376646519);
			func_897(931649776);
			func_897(1743048395);
			func_897(449774763);
			func_896(-434590080);
			Jump @2886; //curOff = 1724
			func_897(1376646519);
			func_897(931649776);
			func_897(-434590080);
			func_897(449774763);
			func_896(1743048395);
			Jump @2886; //curOff = 1772
			func_897(1376646519);
			func_897(931649776);
			func_897(-434590080);
			func_897(1743048395);
			func_896(449774763);
			Jump @2886; //curOff = 1820
			func_897(38162571);
			func_897(1350391819);
			func_897(54073871);
			func_896(-1414537028);
			Jump @2886; //curOff = 1859
			func_897(-1414537028);
			func_897(1350391819);
			func_897(54073871);
			func_896(38162571);
			Jump @2886; //curOff = 1898
			func_897(-1414537028);
			func_897(38162571);
			func_897(54073871);
			func_896(1350391819);
			Jump @2886; //curOff = 1937
			func_897(-1414537028);
			func_897(38162571);
			func_897(1350391819);
			func_896(54073871);
			Jump @2886; //curOff = 1976
			func_896(198200492);
			func_897(-1124061431);
			func_897(52706132);
			func_897(-259123672);
			Jump @2886; //curOff = 2015
			func_897(198200492);
			func_896(-1124061431);
			func_897(52706132);
			func_897(-259123672);
			Jump @2886; //curOff = 2054
			func_897(198200492);
			func_897(-1124061431);
			func_896(52706132);
			func_897(-259123672);
			Jump @2886; //curOff = 2093
			func_897(198200492);
			func_897(-1124061431);
			func_897(52706132);
			func_896(-259123672);
			Jump @2886; //curOff = 2132
			func_896(-919512195);
			func_897(-1925798111);
			func_897(420709909);
			func_897(1703426636);
			Jump @2886; //curOff = 2171
			func_896(-1925798111);
			func_897(-919512195);
			func_897(420709909);
			func_897(1703426636);
			Jump @2886; //curOff = 2210
			func_896(420709909);
			func_897(-919512195);
			func_897(-1925798111);
			func_897(1703426636);
			Jump @2886; //curOff = 2249
			func_896(1703426636);
			func_897(-919512195);
			func_897(-1925798111);
			func_897(420709909);
			Jump @2886; //curOff = 2288
			func_896(-1223121209);
			func_897(630808005);
			Jump @2886; //curOff = 2309
			func_896(630808005);
			func_897(-1223121209);
			Jump @2886; //curOff = 2330
			func_896(1453909576);
			func_897(1643531967);
			Jump @2886; //curOff = 2351
			func_896(1643531967);
			func_897(1453909576);
			Jump @2886; //curOff = 2372
			func_896(0);
			func_897(473295046);
			func_897(-1738165526);
			Jump @2886; //curOff = 2398
			func_896(473295046);
			func_897(0);
			func_897(-1738165526);
			Jump @2886; //curOff = 2424
			func_896(-1738165526);
			func_897(0);
			func_897(473295046);
			Jump @2886; //curOff = 2450
			func_896(932909855);
			func_897(2051822093);
			Jump @2886; //curOff = 2471
			func_896(2051822093);
			func_897(932909855);
			Jump @2886; //curOff = 2492
			func_896(405586984);
			func_897(1509509592);
			func_897(-959357075);
			func_897(-1311865656);
			Jump @2886; //curOff = 2531
			func_896(1509509592);
			func_897(405586984);
			func_897(-959357075);
			func_897(-1311865656);
			Jump @2886; //curOff = 2570
			func_896(-959357075);
			func_897(1509509592);
			func_897(405586984);
			func_897(-1311865656);
			Jump @2886; //curOff = 2609
			func_896(-1311865656);
			func_897(1509509592);
			func_897(-959357075);
			func_897(405586984);
			Jump @2886; //curOff = 2648
			if (bParam1)
			{
				func_896(-524145696);
			}
			else
			{
				func_897(-524145696);
			}
			func_897(1626481264);
			func_897(282809459);
			Jump @2886; //curOff = 2695
			func_896(282809459);
			func_897(1626481264);
			func_897(-524145696);
			Jump @2886; //curOff = 2725
			func_896(1626481264);
			func_897(-524145696);
			func_897(282809459);
			Jump @2886; //curOff = 2755
			if (bParam1)
			{
				func_896(885203519);
			}
			else
			{
				func_897(885203519);
			}
			Jump @2886; //curOff = 2784
			if (bParam1)
			{
				func_896(-1080627546);
			}
			else
			{
				func_897(-1080627546);
			}
			Jump @2886; //curOff = 2813
			if (bParam1)
			{
				func_896(-510945576);
			}
			else
			{
				func_897(-510945576);
				func_900(385812466);
				func_900(-1201452352);
			}
			Jump @2886; //curOff = 2860
			if (bParam1)
			{
				func_896(iParam0);
			}
			else
			{
				func_897(iParam0);
			}
		}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_307(int iParam0, bool bParam1)
{
	if (!func_901(iParam0))
	{
		return 0;
	}
	if (!func_902(iParam0, 2))
	{
		return 0;
	}
	if (func_903(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_904(iParam0)))
	{
		return 1;
	}
	if (func_902(iParam0, 1) && !bParam1)
	{
		func_905(iParam0, 128);
		return 1;
	}
	func_906(iParam0, 129);
	func_907(iParam0);
	_NAMESPACE48::DELETE_PERSCHAR(func_904(iParam0));
	func_908(iParam0, 0);
	return 1;
}

int func_308(int iParam0, bool bParam1, bool bParam2)
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
		if (func_909())
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
	if (iParam0 == 0 && func_312(func_66(0)))
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
	switch (func_68(func_66(0)))
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

int func_309(struct<2> Param0)
{
	int iVar0;

	if (!func_312(Param0))
	{
		return -1;
	}
	iVar0 = func_910(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070355->f_17817.f_1[iVar0 /*3*/])->f_2;
}

bool func_310(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_311(int iParam0, int iParam1)
{
	func_911(iParam0, iParam1);
}

int func_312(struct<2> Param0)
{
	if (!func_912(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_913(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_313(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_309(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_314(int iParam0, int iParam1)
{
	return (func_914(iParam0) && (((*Global_1900820)[iParam0 /*2*/])->f_1 && iParam1) != 0);
}

int func_315(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_915(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_316(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_317(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_316(iParam0))
	{
		return;
	}
	if (func_916((*Global_1835011)[iParam0 /*72*/], 8192))
	{
		bVar0 = true;
	}
	((*Global_1835011)[iParam0 /*72*/])->f_58 = 0;
	if (!bParam1 && bVar0)
	{
		((*Global_1835011)[iParam0 /*72*/])->f_58 |= 2;
		((*Global_1835011)[iParam0 /*72*/])->f_58 |= 8192;
	}
}

void func_318(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_914(iParam1))
	{
		iParam1 = func_918(func_917(iParam0));
		if (!func_914(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1835011)[iParam0 /*72*/])->f_28));
		((*Global_1835011)[iParam0 /*72*/])->f_66 = 0;
	}
	else if (bParam2 && !Global_26387)
	{
		func_919(iParam0, iParam5, iParam1);
	}
	if (func_314(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1835011)[iParam0 /*72*/])->f_13));
	}
	Var0 = { ((*Global_1835011)[iParam0 /*72*/])->f_13 };
	if ((bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)) && SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*72*/])->f_17, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(((*Global_1835011)[iParam0 /*72*/])->f_17);
	}
	if (bParam4)
	{
		func_920(((*Global_1835011)[iParam0 /*72*/])->f_1);
	}
	else
	{
		func_921(iParam1, 3831);
	}
	((*Global_1835011)[iParam0 /*72*/])->f_71 = 0;
}

void func_319(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {((*Global_1835011)[iParam0 /*72*/])->f_4}, 3);
	if ((func_64() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*72*/])->f_8, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(((*Global_1835011)[iParam0 /*72*/])->f_8);
	}
}

void func_320()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1878407->f_7160)
	{
		if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
			{
				switch (&Global_1878407->f_1805[(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar1 = (Global_1878407->f_1805[(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 /*3*/])->f_2;
						if (func_316(iVar1))
						{
							func_317(iVar1, 0);
							func_318(iVar1, -1, 0, 1, 0, 0, 0);
							if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iVar1 /*72*/])->f_28))
							{
								MAP::REMOVE_BLIP(&(((*Global_1835011)[iVar1 /*72*/])->f_28));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

int func_321()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_322(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

void func_323(int iParam0)
{
	vector3 vVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x) || ENTITY::IS_ENTITY_DEAD(vVar0.x))
	{
		return;
	}
	if (vVar0.z != 0)
	{
		if (WEAPON::_0x705BE297EEBDB95D(vVar0.z))
		{
			DECORATOR::DECOR_SET_INT(vVar0.x, "last_gun_damage_time_in_ms", func_922());
			if (ENTITY::IS_ENTITY_A_PED(vVar0.y))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35)
				{
					DECORATOR::DECOR_SET_BOOL(vVar0.x, "DamagedByPlayer", true);
				}
			}
		}
	}
}

void func_324(int iParam0)
{
	vector3 vVar0;
	int iVar9;
	int iVar10;
	bool bVar11;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
		if (!PED::GET_PED_CONFIG_FLAG(iVar9, 385, false))
		{
			iVar10 = func_923(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x), 1);
			if (iVar10 != -1)
			{
				func_924(iVar10);
				if (LAW::_0x40851BCC33ACD9AB(iVar9) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y)))
				{
				}
			}
			if (GRAPHICS::_0xFF584F097C17FA8F() && ENTITY::IS_ENTITY_A_PED(vVar0.y))
			{
				if (PED::_0x118D476A6F1A13F1(iVar9) && vVar0.z == joaat("weapon_run_over_by_car"))
				{
					bVar11 = true;
				}
				if (((iVar9 != Global_35 && !ENTITY::IS_ENTITY_DEAD(vVar0.y)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35) && !bVar11)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("PedKill");
				}
			}
		}
	}
}

void func_325(int iParam0)
{
	struct<2> Var0;
	int iVar3;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 3);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0.f_1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	if (func_925(&Var0))
	{
		return;
	}
	switch (Var0)
	{
		case 1437412331: /* GXTEntry: "Looting" */
			if (iVar3 != Global_1273882->f_10)
			{
				func_926(-1648877470, iVar3);
				func_927(&Var0);
			}
			else
			{
				func_367(-1648877470, 0, 0);
			}
			break;
		case -2051405571: /* GXTEntry: "Rustling" */
		case 1923998736: /* GXTEntry: "Theft" */
			if (iVar3 != Global_1273882->f_10)
			{
				func_926(-545299531, iVar3);
				func_927(&Var0);
			}
			else
			{
				func_367(-545299531, 0, 0);
			}
			break;
		case -999071359: /* GXTEntry: "Animal Cruelty" */
		case -857617219: /* GXTEntry: "Animal Cruelty" */
		case 416962030: /* GXTEntry: "Animal Cruelty" */
			if (iVar3 != Global_1273882->f_10)
			{
				func_926(-1598949067, iVar3);
				func_927(&Var0);
			}
			else
			{
				func_367(-1598949067, 0, 0);
			}
			break;
		case 1746095559: /* GXTEntry: "Arson" */
			if (iVar3 != Global_1273882->f_10)
			{
				func_926(478308321, iVar3);
				func_927(&Var0);
			}
			else
			{
				func_367(478308321, 0, 0);
			}
			break;
		case -2130852007: /* GXTEntry: "Vandalism" */
		case -102241052: /* GXTEntry: "Vandalism" */
			if (iVar3 != Global_1273882->f_10)
			{
				func_926(440583097, iVar3);
				func_927(&Var0);
			}
			else
			{
				func_367(440583097, 0, 0);
			}
			break;
	}
}

void func_326(int iParam0)
{
}

void func_327(int iParam0)
{
}

void func_328(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1585489042))
	{
		return;
	}
	Global_1903928->f_485[51] = 0;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if ((Global_1273882->f_12 || Global_1273882->f_88[&Global_1273882]) // PointerArith)
	{
		return;
	}
	iVar2 = Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (iVar3 != iVar4)
	{
		return;
	}
	switch (Var0.f_1)
	{
		case -72209530:
			iVar5 = 0;
			break;
		case 1704957293:
			iVar5 = 0;
			break;
		case 869278708:
			iVar5 = 4;
			break;
		case 640210656:
			iVar5 = 0;
			break;
		case 1051485804:
			iVar5 = 2;
			break;
		default:
			iVar5 = 0;
			break;
	}
	DECORATOR::DECOR_SET_BOOL(iVar4, "Whistling", true);
	Global_1903928->f_485[4] = 1;
}

void func_329(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	struct<4> Var6;
	vector3 vVar10;
	vector3 vVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar4 = Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		return;
	}
	if (iVar4 != PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	iVar5 = Var0.f_1;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) != iVar5)
	{
		return;
	}
	Var6 = { func_928(0, 1, 0, -1) };
	func_929(&Var6, 0, 1, 1);
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
	if (!Var0.f_2)
	{
		func_930(&Var6, vVar10);
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	vVar13 = { func_931(&Var6) };
	if (!func_595(vVar13))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar10, vVar13, true) < 200f)
		{
			fu