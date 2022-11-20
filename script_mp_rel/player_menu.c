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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	char* sLocal_26 = NULL;
	char* sLocal_27 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	sLocal_26 = "props_misc@campfires@5_logs";
	sLocal_27 = "Script_PropCampfire";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (func_2(255))
		{
			return;
		}
		switch (&Global_1896726)
		{
			case 0:
				PAD::_0x2804658EB7D8A50B(4, 1623465848);
				if (func_3())
				{
					MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
					func_4(1);
				}
				else
				{
					func_4(2);
				}
				break;
			case 1:
				if (!func_5())
				{
					func_4(2);
				}
				else
				{
					func_6();
				}
				break;
			case 2:
				func_1();
				break;
		}
		_NAMESPACE79::_0x1C38C3577901AF1F();
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_7();
	func_8(0);
	func_9();
	func_10();
	if (func_11())
	{
		func_12();
	}
	func_13(0);
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	MISC::_CANCEL_ONSCREEN_KEYBOARD();
	NETWORK::_0x49CF17A564918E8D();
	func_14();
	if (UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
	}
	func_4(0);
	HUD::_0x8BC7C1F929D07BF3(-523411361);
	HUD::_0x8BC7C1F929D07BF3(-1274560729);
	func_15();
	func_16();
	func_17();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_18(35, iParam0);
}

int func_3()
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	iVar0 = 0;
	bVar1 = false;
	if (UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		bVar1 = true;
	}
	sVar2 = func_19(Global_1896726->f_390);
	if (UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", sVar2) == 0 || bVar1)
	{
		iVar0 = 1;
		Global_1896726->f_386 = 0;
		func_20(0);
	}
	TXD::_0xDB1BD07FB464584D(-786228517, 0);
	TXD::_0xDB1BD07FB464584D(1997120069, 0);
	TXD::_0xDB1BD07FB464584D(908516622, 0);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_391))
	{
		Global_1896726->f_391 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_392))
	{
		Global_1896726->f_392 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_391, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_392, false);
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		func_21(42, 0);
	}
	return iVar0;
}

void func_4(int iParam0)
{
	if (&Global_1896726 != iParam0)
	{
		Global_1896726 = iParam0;
	}
}

bool func_5()
{
	bool bVar0;

	bVar0 = func_22();
	if (func_23())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_24();
	}
	func_25();
	func_26();
	if (bVar0)
	{
		func_27(Global_1939221->f_1433);
	}
	func_28();
	return bVar0;
}

void func_6()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PHONE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_NEXT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_PREV"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
}

int func_7()
{
	char* sVar0;

	if (!func_29(Global_1273882->f_1))
	{
		return 0;
	}
	sVar0 = PLAYER::GET_PLAYER_NAME(&(Global_1273882->f_154[&Global_1273882]));
	if (!func_30(Global_1273882->f_1, sVar0))
	{
		return 0;
	}
	return 1;
}

void func_8(int iParam0)
{
	Global_1939221->f_1433.f_4174.f_2083 = iParam0;
}

void func_9()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_31(iVar0, 1);
		iVar0++;
	}
}

void func_10()
{
	var uVar0;

	Global_1939221->f_1433.f_1314 = -1;
	MISC::_COPY_MEMORY(&(Global_1939221->f_1433.f_1314.f_1), &uVar0, 7);
	func_32();
}

bool func_11()
{
	return Global_1939221->f_3;
}

void func_12()
{
	func_33(1, -1343026476);
	func_34();
}

void func_13(bool bParam0)
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

void func_14()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1070355->f_2 = 0;
}

void func_15()
{
	Global_1896726->f_5 = 0;
}

void func_16()
{
	if (!func_35(0))
	{
		return;
	}
	func_36(0, 0);
}

void func_17()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1896726->f_1.f_3)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), &(Global_1896726->f_1[iVar0 /*2*/]), (Global_1896726->f_1[iVar0 /*2*/])->f_1, 0);
		iVar0++;
	}
	Global_1896726->f_1.f_3 = 0;
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_37(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_38())
	{
		return func_37(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_37(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mp";
		case 1:
			return "mp_matchmaking";
		case 2:
			return "mp_camp_selection";
		case 3:
			return "mp_moonshine_selection";
		case 4:
			return "mp_invites";
		case 5:
			return "mp_post_office";
		case 7:
			return "mp_emote_types";
		case 8:
			return "mp_minigame";
		case 9:
			return "mp_minigame_landing";
		case 10:
			return "mp_minigame_jip_landing";
		case 11:
			return "mp_minigame_invites";
		case 12:
			return "mp_minigame_invite_players";
		default:
			break;
	}
	return "mp";
}

void func_20(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1896726->f_1.f_3 >= 1)
	{
		return 0;
	}
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), iParam0, iParam1, 1);
	Global_1896726->f_1[Global_1896726->f_1.f_3 /*2*/] = iParam0;
	(Global_1896726->f_1[Global_1896726->f_1.f_3 /*2*/])->f_1 = iParam1;
	Global_1896726->f_1.f_3++;
	return 1;
}

bool func_22()
{
	return Global_1896726->f_382;
}

int func_23()
{
	int iVar0;

	iVar0 = 0;
	if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		iVar0 = 1;
	}
	if (Global_1123331->f_293 && !Global_1113330->f_7999.f_4)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_24()
{
	int iVar0;

	iVar0 = func_39(UIAPPS::_0x96FD694FE5BE55DC(1433015236));
	if (!func_40(iVar0) && iVar0 != Global_1939221->f_1433)
	{
		func_41(Global_1939221->f_1433);
		Global_1939221->f_1433.f_1 = Global_1939221->f_1433;
		Global_1939221->f_1433 = iVar0;
		if (Global_1939221->f_1433.f_2 == -1)
		{
			func_43(Global_1939221->f_1433.f_1, func_42());
		}
		if (iVar0 != Global_1939221->f_1433.f_2)
		{
			func_44(iVar0);
		}
		func_45();
	}
	if (func_46())
	{
		func_43(Global_1939221->f_1433, func_42());
		func_47(1);
		func_48();
		func_44(Global_1939221->f_1433.f_2);
		func_27(Global_1939221->f_1433.f_2);
		func_36(5, 0);
	}
}

void func_25()
{
	var uVar0;
	var uVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<95> Var15;
	int iVar110;
	struct<7> Var111;
	bool bVar118;
	bool bVar119;
	bool bVar120;
	int iVar121;
	int iVar122;
	bool bVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	bool bVar128;
	bool bVar129;
	int iVar130;
	struct<4> Var131;

	if (!func_22())
	{
		return;
	}
	iVar6 = 1433015236;
	iVar7 = &Global_1273882->f_154[&Global_1273882];
	iVar9 = Global_1273882->f_15;
	Var15.f_38 = 7;
	Var15.f_91 = -1;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar6))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar6, &Var2))
		{
			switch (Var2)
			{
				case -1340543710:
					func_49(Var2, Var2.f_2);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
					break;
				case -1151569080:
					bVar10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(38));
					if (bVar10 != 0)
					{
						bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
						func_51(bVar10, bVar13);
						switch (bVar10)
						{
							case 822989203:
								switch (bVar13)
								{
									case -2107252183:
										func_52(0, 0);
										break;
									case -6116668:
										func_52(1, 0);
										break;
								}
								break;
							case -1611253054:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
								break;
							case 1908740613:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
								bVar118 = bVar13;
								func_53(bVar118 == 126620015);
								func_54();
								break;
							case -91914989:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
								bVar119 = bVar13;
								func_55(bVar119);
								func_54();
								break;
							case 1163184660:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
								bVar120 = bVar13;
								func_56(bVar120 == -299269340);
								func_54();
								break;
							case -1703621955:
								func_57(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33)));
								break;
							case -736673978:
								func_58(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33)));
								func_59(1);
								func_60();
								func_62(func_61(), joaat("COLOR_WHITE"));
								break;
							case 1601127062:
								func_63(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33)));
								break;
							case -758850690:
								func_65(func_64(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33))));
								break;
							case 87004688:
								func_66(func_64(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33))));
								break;
							case -2036453627:
								func_67(func_64(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33))));
								break;
							case 1505306971:
								func_68(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33)));
								break;
							case 1234263153:
								iVar12 = func_69(iVar7);
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
								if (bVar13 == 1388965074)
								{
									if (func_70(iVar12))
									{
										if (func_71(iVar12))
										{
											func_72(iVar12);
										}
									}
								}
								else if (bVar13 == -1272839496)
								{
									if (!func_70(iVar12))
									{
										if (func_73(iVar12))
										{
											func_74(iVar12);
										}
									}
								}
								break;
						}
					}
					else
					{
						switch (Var2.f_2)
						{
							case -1996395310:
								if (Var2.f_1 > 0)
								{
									func_75(1);
								}
								else
								{
									func_75(0);
								}
								break;
							case -1712603330:
								if (!func_77(func_76()))
								{
									func_47(1);
								}
								break;
						}
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
					break;
				case -1740156697:
					func_78(&Var2);
					func_79(&Var2);
					func_47(1);
					iVar11 = Var2.f_2;
					bVar10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(38));
					bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_50(33));
					func_51(bVar10, bVar13);
					switch (iVar11)
					{
						case -1537476917:
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_82, true);
							break;
						case -1594107850:
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_118, true);
							if (UNLOCK::_UNLOCK_IS_NEW(1392007362))
							{
								UNLOCK::_UNLOCK_SET_NEW(1392007362, false);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_124, false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_116, true);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_115, MISC::_CREATE_VAR_STRING(2, "NM_FR_CHARACTER_DETAILS_INFO"));
							break;
						case 238850895:
							if (func_80())
							{
								iVar8 = func_81();
								if (NETWORK::_0x255A5EF65EDA9167(iVar8))
								{
									func_82(iVar8, 1);
									func_83(238850895, 1);
								}
							}
							break;
						case 1229094512:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case -758886156:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 252544183:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 573237416:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 72556410:
							func_59(1);
							func_60();
							break;
						case -1080557963:
							func_85(1);
							func_86();
							func_87();
							break;
						case -1103748417:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case -779773310:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 298326212:
							if (func_88(&(Var2.f_3), &Var15))
							{
								func_89(&Var15);
							}
							break;
						case 1930452436:
							if (func_90())
							{
								if (func_91())
								{
									if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
									{
										func_62(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME"), joaat("COLOR_WHITE"));
									}
									else if (!NETWORK::_0x6506BFA755FB209C())
									{
										func_62(MISC::_CREATE_VAR_STRING(2, "NM_GC_UGC_RESTRICT"), joaat("COLOR_WHITE"));
									}
									else
									{
										func_62(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE"), joaat("COLOR_WHITE"));
									}
								}
								else
								{
									func_62(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN"), joaat("COLOR_RED"));
								}
							}
							else
							{
								func_62(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP"), joaat("COLOR_WHITE"));
							}
							break;
						case 1962827136:
							func_92();
							func_93();
							func_94();
							break;
						case -949910923:
							func_95();
							break;
						case -1577085532:
						case -1181862186:
						case -715226337:
						case -265461064:
						case -183012873:
						case 161109887:
							func_96(Var2.f_1);
							break;
						case 271601522:
							func_97(3);
							break;
						case -766526475:
							func_97(0);
							break;
						case 388232363:
							func_97(1);
							break;
						case -783563355:
							func_97(2);
							break;
						case -446710138:
							func_98();
							break;
						case -1997447231:
						case -1890363343:
						case -630943934:
						case 1191420897:
						case 1222267777:
						case 1528509922:
							func_99(Var2.f_1);
							break;
						case 697595630:
							func_100(3);
							break;
						case -516833774:
							func_100(0);
							break;
						case -1523420457:
							func_100(1);
							break;
						case -189386465:
							func_100(2);
							break;
						case 908022114:
							break;
						case 1219657827:
							Global_1939221->f_242.f_1189 = 0;
							break;
						case 290710310:
						case 1685218753:
							Global_1939221->f_242 = Var2.f_3;
							break;
						case 1891046454:
							func_101(-682748, -1896177107);
							func_102(-1896177107);
							break;
						case -1431653946:
							func_101(-682748, 2042309940);
							func_102(2042309940);
							break;
						case 1603044301:
							func_103(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"));
							func_105(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"), func_104());
							func_106(func_104(), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"));
							break;
						case 1537752051:
							Global_1939221->f_1433.f_6264 = 3;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case 2073308105:
							Global_1939221->f_1433.f_6264 = 1;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case 519925072:
							Global_1939221->f_1433.f_6264 = 0;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case 1070510924:
							Global_1939221->f_1433.f_6264 = 2;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case -1309595911:
							if (Global_1939221->f_1433.f_6264.f_5)
							{
								Global_1939221->f_1433.f_6264.f_2 = Var2.f_1;
								Global_1939221->f_1433.f_6264.f_1 = func_109(Global_1939221->f_1433.f_6264, Var2.f_1);
							}
							else
							{
								Global_1939221->f_1433.f_6264.f_2 = func_110(Global_1939221->f_1433.f_6264, Global_1939221->f_1433.f_6264.f_1);
								iVar14 = Global_1939221->f_1433.f_6264;
								if (iVar14 < 0 || iVar14 > (4 - 1))
								{
								}
								else
								{
									Global_1939221->f_1433.f_6264.f_1 = &(Global_17173.f_54.f_2480[iVar14 /*7*/])->f_2[Var2.f_1];
									func_108(Global_1939221->f_1433.f_6264.f_1);
									Jump @2522; //curOff = 2420
									func_111(Var2.f_3);
									func_112(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "moonshine_selection_district"));
									Jump @2522; //curOff = 2447
									func_114(func_113(iVar11));
									func_115(func_113(iVar11));
									Jump @2522; //curOff = 2470
									func_116();
									func_117();
									Jump @2522; //curOff = 2481
									Global_1113330->f_7999 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
									Global_1113330->f_7999.f_5 = Var2.f_3;
								}
								UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
								Jump @7512; //curOff = 2528
								switch (Var2.f_2)
								{
									case -1537476917:
										DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_82, false);
										break;
								}
								UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
								Jump @7512; //curOff = 2572
								switch (Var2.f_2)
								{
									case 1930452436:
										func_118();
										break;
									case -55349945:
										func_119();
										break;
									case -135401173:
										func_120();
										break;
									case 101104516:
										UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(1433015236);
										func_121();
										break;
									case 290710310:
										func_122(Var2.f_3);
										break;
									case 1685218753:
										func_123(Global_1939221->f_242);
										break;
									case -2111588953:
										func_124(Global_1939221->f_242);
										break;
									case -533058584:
										break;
									case 110545328:
										func_125(Global_1939221->f_242);
										break;
									case 1471279564:
										if (func_126())
										{
											func_128(func_127());
										}
										else
										{
											func_128(0);
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										break;
									case 855278636:
										if (func_129())
										{
											func_131(func_130());
										}
										else
										{
											func_131(0);
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										break;
									case -1390952377:
										func_132(5);
										break;
									case 1050964521:
										func_132(13);
										break;
									case 334553069:
										func_132(52);
										func_133();
										break;
									case -1239884668:
										func_132(51);
										func_133();
										break;
									case -1487960093:
										UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-779472066, 348001928);
										break;
									case -350804472:
										func_134(128);
										break;
									case 647482278:
										func_134(256);
										break;
									case -2051980641:
										func_136(func_135(), 8);
										func_137();
										break;
									case -1862490249:
										func_134(512);
										if (!func_138(4096))
										{
											UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, joaat("continue"));
										}
										else
										{
											func_137();
										}
										break;
									case 1211445926:
										func_134(16384);
										break;
									case 1671201754:
										func_133();
										func_132(18);
										break;
									case -1513928818:
										func_133();
										func_132(17);
										break;
									case -1321015585:
										func_132(22);
										break;
									case 298326212:
										func_36(7, 1);
										if (func_88(&(Var2.f_3), &Var15))
										{
											func_139();
											func_133();
											func_140(&Var15);
											func_132(16);
											func_141(394524610);
										}
										break;
									case -1103748417:
										if (func_142())
										{
											func_132(6);
											func_141(-1105836878);
										}
										break;
									case -974997823:
										func_132(22);
										break;
									case -1320685749:
										func_132(21);
										break;
									case 252544183:
										if (func_142())
										{
											func_139();
											func_132(6);
											func_141(-1105836878);
										}
										break;
									case 519925072:
									case 1070510924:
									case 1537752051:
									case 2073308105:
										iVar14 = Global_1939221->f_1433.f_6264;
										if (iVar14 < 0 || iVar14 > (4 - 1))
										{
										}
										else
										{
											DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1939221->f_1433.f_6264.f_13);
											Global_1939221->f_1433.f_6264.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1939221->f_1433.f_6264.f_6, 1901482920);
											func_143(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
											DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_6264.f_8, func_144(Global_1939221->f_1433.f_6264));
											func_145(Global_1939221->f_1433.f_6264.f_1 != 0);
											Jump @7444; //curOff = 4021
											iVar14 = Global_1939221->f_1433.f_6264;
											if (iVar14 < 0 || iVar14 > (4 - 1))
											{
											}
											else
											{
												DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1939221->f_1433.f_6264.f_13);
												Global_1939221->f_1433.f_6264.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1939221->f_1433.f_6264.f_6, 1901482920);
												if (Global_1939221->f_1433.f_6264.f_5)
												{
													Global_1939221->f_1433.f_6264.f_5 = !Global_1939221->f_1433.f_6264.f_5;
													func_146(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
												}
												else
												{
													Global_1939221->f_1433.f_6264.f_5 = !Global_1939221->f_1433.f_6264.f_5;
													func_143(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
												}
												Global_1939221->f_1433.f_6264.f_4 = 1;
												Jump @7444; //curOff = 4242
												iVar14 = Global_1939221->f_1433.f_6264;
												if (iVar14 < 0 || iVar14 > (4 - 1))
												{
												}
												else
												{
													if ((Global_17173.f_54.f_2480[iVar14 /*7*/])->f_1 == -1 || &(Global_17173.f_54.f_2480[iVar14 /*7*/])->f_2[(Global_17173.f_54.f_2480[iVar14 /*7*/])->f_1] != Global_1939221->f_1433.f_6264.f_1)
													{
														func_147(Global_17173.f_54.f_2480[iVar14 /*7*/], Global_1939221->f_1433.f_6264, Global_1939221->f_1433.f_6264.f_1);
													}
													else
													{
														func_148(Global_17173.f_54.f_2480[iVar14 /*7*/], Global_1939221->f_1433.f_6264);
													}
													Jump @7444; //curOff = 4416
													iVar14 = Global_1939221->f_1433.f_6264;
													if (iVar14 < 0 || iVar14 > (4 - 1))
													{
													}
													else
													{
														Global_1939221->f_1433.f_6264.f_3 = 1;
														if (Global_1939221->f_1433.f_6264.f_2 > -1 && Global_1939221->f_1433.f_6264.f_2 < 37)
														{
															Global_1939221->f_1433.f_6264.f_1162[Global_1939221->f_1433.f_6264.f_2] = 1;
														}
														iVar121 = func_149(&(Global_17173.f_54.f_2480), Global_1939221->f_1433.f_6264, Global_1939221->f_1433.f_6264.f_1);
														if (!Global_1939221->f_1433.f_6264.f_5 && iVar121 == 1)
														{
															DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1939221->f_1433.f_6264.f_13);
															Global_1939221->f_1433.f_6264.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1939221->f_1433.f_6264.f_6, 1901482920);
															func_146(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
														}
														Global_1939221->f_1433.f_6264.f_4 = 1;
														Jump @7444; //curOff = 4681
														func_150();
														func_152(func_151(), func_151());
														Jump @7444; //curOff = 4701
														func_153(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_walk_enum"));
														Jump @7444; //curOff = 4720
														func_137();
														Jump @7444; //curOff = 4727
														if (func_155(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "posse_versus_content_type"), func_154()))
														{
															func_137();
														}
														else
														{
															iVar122 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(54));
															if (iVar122 == 0)
															{
															}
															else
															{
																switch (iVar122)
																{
																	case 97603778:
																		func_132(20);
																		func_133();
																		break;
																}
															}
														}
														Jump @7444; //curOff = 4813
														if (func_155(4, func_154()) || func_155(5, func_154()))
														{
															func_137();
														}
														Jump @7444; //curOff = 4850
														bVar123 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district");
														iVar124 = func_104();
														if (func_156(iVar124, bVar123))
														{
															if (func_157())
															{
																func_158(bVar123, iVar124);
																func_141(joaat("exit"));
															}
															else if (func_159(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"), func_104(), 1, 0))
															{
																func_160(512);
																func_141(joaat("exit"));
															}
														}
														Jump @7444; //curOff = 4958
														func_161(-1896177107);
														func_132(39);
														Jump @7444; //curOff = 4977
														func_161(2042309940);
														func_132(39);
														Jump @7444; //curOff = 4996
														func_162();
														func_163();
														func_137();
														Jump @7444; //curOff = 5012
														func_132(38);
														Jump @7444; //curOff = 5022
														func_164();
														Global_1275329->f_65 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "moonshine_selection_property");
														Jump @7444; //curOff = 5047
														func_132(23);
														Jump @7444; //curOff = 5057
														func_132(41);
														Jump @7444; //curOff = 5067
														func_165();
														func_137();
														Jump @7444; //curOff = 5078
														func_137();
														Jump @7444; //curOff = 5085
														if (func_166())
														{
															func_167(13);
															func_141(-959354268);
														}
														else
														{
															func_132(13);
															func_141(-303450633);
														}
														func_133();
														Jump @7444; //curOff = 5135
														func_141(394524610);
														Jump @7444; //curOff = 5148
														func_168(func_35(3), 0);
														func_133();
														if (func_35(3))
														{
															func_36(3, 0);
														}
														Jump @7444; //curOff = 5179
														func_132(16);
														func_133();
														Jump @7444; //curOff = 5193
														func_48();
														func_169();
														Jump @7444; //curOff = 5204
														func_170(1);
														func_36(1, 0);
														func_132(14);
														func_133();
														func_141(-648381463);
														Jump @7444; //curOff = 5239
														func_170(0);
														func_133();
														func_36(1, 0);
														Jump @7444; //curOff = 5257
														func_132(19);
														func_133();
														Jump @7444; //curOff = 5271
														func_132(5);
														func_133();
														Jump @7444; //curOff = 5284
														if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var2.f_3))
														{
															Var111 = { func_171(Var2.f_3, func_50(29)) };
															iVar125 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, func_50(15));
															if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var111))
															{
															}
															else if (!func_172(Var111, iVar125, 0))
															{
															}
														}
														Jump @7444; //curOff = 5362
														func_174(&(Global_1896726->f_393.f_1), func_173());
														Jump @7444; //curOff = 5382
														if (!func_175())
														{
														}
														else if (func_176(&uVar1, &uVar0))
														{
															if (func_90())
															{
																func_180(func_177(), func_178(), uVar1, uVar0, func_179());
															}
															else
															{
																func_181(func_177(), func_178(), uVar1, uVar0);
															}
															func_182(0);
														}
														Jump @7444; //curOff = 5463
														Var15 = { func_183(1) };
														if (func_184(&Var15))
														{
															func_185(Var15.f_2, 1);
															func_186(4);
														}
														else if (Var15.f_1 == Global_1273882->f_15)
														{
															func_187(1);
															func_186(4);
														}
														Jump @7444; //curOff = 5531
														Var15 = { func_183(1) };
														if (func_188(&Var15))
														{
															func_189(32);
															func_190(1, 1);
															func_186(7);
														}
														else if (Var15.f_1 == Global_1273882->f_15)
														{
															func_187(1);
															func_186(4);
														}
														Jump @7444; //curOff = 5602
														Var15 = { func_183(1) };
														if (func_188(&Var15))
														{
															func_189(32);
															func_190(1, 1);
															func_186(7);
														}
														else if (Var15.f_1 == Global_1273882->f_15)
														{
															func_187(1);
															func_186(4);
														}
														Jump @7444; //curOff = 5673
														func_191();
														Jump @7444; //curOff = 5680
														if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var2.f_3))
														{
															Var111 = { func_171(Var2.f_3, func_50(29)) };
															iVar126 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, func_50(15));
															if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var111))
															{
																iVar127 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var111);
																if (func_192(iVar127))
																{
																	func_47(1);
																}
															}
															else if (func_172(Var111, iVar126, 0))
															{
																func_47(1);
															}
														}
														Jump @7444; //curOff = 5790
														if (!func_193(func_76()))
														{
														}
														Jump @7444; //curOff = 5805
														if (!func_195(func_194()))
														{
														}
														Jump @7444; //curOff = 5820
														if (!func_195(func_196()))
														{
														}
														Jump @7444; //curOff = 5835
														if (func_197(Var2.f_3))
														{
															func_47(1);
														}
														Jump @7444; //curOff = 5857
														func_199(!func_198());
														func_47(1);
														Jump @7444; //curOff = 5874
														if (func_200())
														{
															func_47(1);
														}
														Jump @7444; //curOff = 5889
														if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar7))
														{
															return;
														}
														bVar128 = func_80();
														if (!bVar128)
														{
															if (Global_1939221->f_1433.f_156.f_2.f_4)
															{
																func_201(&(Global_1180694->f_501[Global_1180694->f_490 /*118*/]), Global_1939221->f_1433.f_8);
																func_141(joaat("back"));
															}
															else
															{
																return;
															}
														}
														else
														{
															bVar129 = _NAMESPACE26::_0x81FB74C83C2ED69F(func_81());
															if (bVar129 || Global_1939221->f_1433.f_156.f_2.f_4)
															{
																if (bVar129)
																{
																	func_202(func_81(), 1, 120);
																}
																else
																{
																	func_201(&(Global_1180694->f_501[Global_1180694->f_490 /*118*/]), Global_1939221->f_1433.f_8);
																}
																func_141(joaat("back"));
															}
														}
														Jump @7444; //curOff = 6083
														Var111 = { func_194() };
														if (!func_203(&Var111))
														{
														}
														Jump @7444; //curOff = 6104
														func_47(1);
														if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
														{
															if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar7))
															{
																func_204(func_81(), 1);
															}
															else if (_NAMESPACE26::_0x149A2751AB66AC02(iVar9) == _NAMESPACE26::_0x853B0FA4D8732C57(iVar9))
															{
																func_204(func_81(), 2);
															}
															else if (func_204(func_81(), -1))
															{
															}
														}
														Jump @7444; //curOff = 6190
														if (func_172(func_194(), func_205(), 0))
														{
															func_47(1);
														}
														Jump @7444; //curOff = 6214
														func_206(func_81());
														Jump @7444; //curOff = 6226
														Var111 = { func_194() };
														func_207(&Var111);
														func_137();
														Jump @7444; //curOff = 6247
														Var111 = { func_194() };
														if (!func_208(&Var111))
														{
														}
														Jump @7444; //curOff = 6268
														Var111 = { func_194() };
														if (!func_209(&Var111))
														{
														}
														Jump @7444; //curOff = 6289
														func_36(3, 1);
														if (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(func_81())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(func_81())))
														{
															if (func_210(_NAMESPACE26::_0x901E0DC25080C8B9(func_81()), &Var15, 1))
															{
																func_140(&Var15);
															}
														}
														Jump @7444; //curOff = 6360
														switch (Var2.f_2)
														{
															case -2012882360:
																iVar130 = 0;
																break;
															case 1717935887:
																iVar130 = 1;
																break;
															case 566751030:
																iVar130 = 2;
																break;
															case 575735035:
																iVar130 = 3;
																break;
															case 1302293867:
																iVar130 = 4;
																break;
															case 1284519075:
																iVar130 = 5;
																break;
															case -36476126:
																iVar130 = 6;
																break;
															case 1296297252:
																iVar130 = 7;
																break;
															case 1463101399:
																iVar130 = 8;
																break;
														}
														if (func_211(func_194(), iVar130, func_205()))
														{
														}
														Jump @7444; //curOff = 6499
														Var15 = { func_183(1) };
														if (func_212(&Var15))
														{
															if (func_213(&Var15))
															{
																func_186(3);
															}
														}
														Jump @7444; //curOff = 6542
														Var15 = { func_183(1) };
														if (func_212(&Var15))
														{
															if (func_213(&Var15))
															{
																func_186(5);
															}
														}
														Jump @7444; //curOff = 6585
														Var15 = { func_183(1) };
														if (func_212(&Var15))
														{
															if (func_213(&Var15))
															{
																func_186(6);
															}
														}
														Jump @7444; //curOff = 6628
														if (func_214(DATABINDING::_0xE6AAB897120492D6(Var2.f_3, "posse_list_entry_gang_id")))
														{
															func_141(1627801305);
														}
														Jump @7444; //curOff = 6663
														if (func_215())
														{
															func_216(1);
														}
														func_134(262144);
														Jump @7444; //curOff = 6686
														func_217(2, 2);
														func_137();
														Jump @7444; //curOff = 6699
														func_217(3, 2);
														func_137();
														Jump @7444; //curOff = 6712
														func_217(4, 2);
														func_137();
														Jump @7444; //curOff = 6725
														func_217(5, 2);
														func_137();
														Jump @7444; //curOff = 6738
														func_217(6, 2);
														func_137();
														Jump @7444; //curOff = 6751
														func_217(8, 2);
														func_137();
														Jump @7444; //curOff = 6765
														func_217(9, 2);
														func_137();
														Jump @7444; //curOff = 6779
														func_217(0, 2);
														func_137();
														Jump @7444; //curOff = 6792
														func_217(1, 2);
														func_137();
														Jump @7444; //curOff = 6805
														iVar110 = func_218();
														func_217(iVar110, 2);
														func_137();
														Jump @7444; //curOff = 6825
														func_217(15, 2);
														func_137();
														Jump @7444; //curOff = 6839
														func_217(16, 2);
														func_137();
														Jump @7444; //curOff = 6853
														func_217(17, 2);
														func_137();
														Jump @7444; //curOff = 6867
														func_217(19, 2);
														func_137();
														Jump @7444; //curOff = 6881
														func_217(18, 2);
														func_137();
														Jump @7444; //curOff = 6895
														func_219();
														func_137();
														Jump @7444; //curOff = 6906
														if (_NAMESPACE26::_0x0F99F6436528A089(iVar9))
														{
															if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar9) == iVar7 && _NAMESPACE26::_0x149A2751AB66AC02(iVar9) == 1)
															{
																func_141(962885784);
															}
															else
															{
																func_141(-1913939249);
															}
														}
														else
														{
															func_141(962885784);
														}
														Jump @7444; //curOff = 6979
														func_220(1);
														func_221();
														func_137();
														func_222();
														if (func_223(255))
														{
															func_224(0, 0, 0, 1);
															if (!func_225(255))
															{
																func_226();
															}
															func_227(1, 1);
														}
														if (func_228())
														{
															func_229();
															func_230(0, 129);
														}
														else
														{
															func_187(1);
															func_231();
														}
														Jump @7444; //curOff = 7066
														func_232(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)));
														Jump @7444; //curOff = 7088
														func_233(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)));
														Jump @7444; //curOff = 7110
														func_234(0);
														func_235();
														Jump @7444; //curOff = 7122
														func_236(1);
														Jump @7444; //curOff = 7131
														func_237(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)));
														Jump @7444; //curOff = 7152
														func_238(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)));
														Jump @7444; //curOff = 7173
														func_239(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)), 0);
														Jump @7444; //curOff = 7195
														func_239(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)), 1);
														Jump @7444; //curOff = 7217
														func_239(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)), 2);
														Jump @7444; //curOff = 7239
														func_240(0);
														func_241();
														Jump @7444; //curOff = 7251
														func_242(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)));
														Jump @7444; //curOff = 7272
														func_243(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)), 4);
														Jump @7444; //curOff = 7294
														func_243(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)), 5);
														Jump @7444; //curOff = 7316
														func_243(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_50(80)), 6);
														Jump @7444; //curOff = 7338
														Var131 = { func_244(0, 1, 0, -1) };
														TELEMETRY::_0xE67AF24C5A3B6058(-1842437844, &Var131, 0);
														func_245(Var131, 2, 2);
														func_246();
														Jump @7444; //curOff = 7380
														Global_1113330->f_7999 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
														Global_1113330->f_7999.f_1 = 1;
														Global_1113330->f_7999.f_5 = Var2.f_3;
														Jump @7444; //curOff = 7425
														Global_1113330->f_7999.f_2 = 1;
													}
												}
											}
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7450
										switch (Var2.f_2)
										{
											case -1373902020:
												func_247();
												break;
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7482
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7491
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7500
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										func_248();
									}
							}
					}
				}
			}

void func_26()
{
	var uVar0;

	if (Global_1939221->f_1433.f_7965 == 0)
	{
		return;
	}
	if (NETWORK::_0x5AE17C6B0134B7F1())
	{
		Global_1939221->f_1433.f_7964 = 1;
		Global_1939221->f_1433.f_7965 = 0;
		uVar0 = NETWORK::_0xDDAEB478E58F8DEA(&(Global_1939221->f_1433.f_7967), 801);
	}
}

void func_27(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_249();
			func_250();
			break;
		case 1:
			func_250();
			func_251();
			break;
		case 2:
			break;
		case 3:
			func_252();
			break;
		case 4:
			func_253();
			break;
		case 13:
			func_254();
			break;
		case 15:
			func_255();
			break;
		case 18:
			func_256();
			break;
		case 14:
			func_257();
			break;
		case 16:
			func_258();
			break;
		case 22:
			func_259();
			break;
		case 21:
			func_260();
			break;
		case 17:
			func_261();
			break;
		case 5:
			func_262();
			break;
		case 52:
			func_263();
			break;
		case 6:
			func_264();
			break;
		case 46:
			func_265();
			break;
		case 7:
		case 8:
		case 9:
			func_266();
			break;
		case 10:
			func_267();
			break;
		case 23:
			func_268();
			break;
		case 24:
			func_269();
			break;
		case 25:
			func_270();
			break;
		case 26:
			func_271();
			break;
		case 27:
			func_272();
			break;
		case 28:
			func_273();
			break;
		case 29:
			func_274();
			break;
		case 30:
			func_275();
			break;
		case 31:
			func_276();
			break;
		case 32:
			func_277();
			break;
		case 33:
			func_278();
			break;
		case 34:
			func_279();
			break;
		case 35:
			func_280();
			break;
		case 36:
			func_281();
			break;
		case 37:
			func_282();
			break;
		case 38:
			func_283();
			break;
		case 39:
			func_284();
			break;
		case 40:
			func_285();
			break;
		case 41:
			func_286();
			break;
		case 43:
			func_287();
			break;
		case 19:
			func_288();
			break;
		case 20:
			func_289();
			break;
		case 42:
			func_290();
			break;
		case 48:
			func_291();
			break;
		case 49:
			func_292();
			break;
		case 50:
			func_293();
			break;
		case 53:
			func_294(0);
			break;
		case 55:
			if (func_295())
			{
				func_296();
			}
			break;
		case 56:
			func_297(56);
			break;
		case 54:
			if (func_295())
			{
				func_298();
			}
			break;
	}
	func_299();
	if (func_300())
	{
		func_301();
		Global_1939221->f_1433.f_8769.f_238 = 0;
	}
	if (func_302())
	{
		func_303();
		Global_1939221->f_1433.f_8769.f_239 = 0;
	}
	func_304();
	func_305();
	func_306();
	func_307();
	if (func_308())
	{
		func_133();
	}
}

int func_28()
{
	if (Global_1896726->f_371.f_5)
	{
		Global_1896726->f_371.f_5 = 0;
		return 1;
	}
	return 0;
}

bool func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

int func_30(struct<7> Param0, char* sParam7)
{
	if (!func_29(Param0))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(Global_1939221->f_1433.f_8), &Param0, 7);
	Global_1939221->f_1433.f_8.f_7 = { func_309(sParam7) };
	return 1;
}

void func_31(bool bParam0, int iParam1)
{
	struct<34> Var0;
	int iVar34;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = func_310(bParam0, 1);
	if (!func_311(iVar34, &Var0, 0, -1))
	{
		func_312(&Var0);
	}
	func_313(bParam0, Global_1939221->f_1433.f_4174.f_1579[bParam0 /*54*/], Var0);
	if (iParam1 && func_314(bParam0))
	{
		func_315(&(Global_1939221->f_1433.f_4174.f_1985), Var0, bParam0);
	}
}

void func_32()
{
	_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_7961);
	Global_1939221->f_1433.f_7961 = 0;
}

int func_33(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099293->f_16)
	{
		return 0;
	}
	if (!func_316())
	{
		return 0;
	}
	if (!func_228())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_317(&Global_0, 8);
	}
	func_317(&Global_0, 1);
	return 1;
}

void func_34()
{
	Global_1939221->f_3 = 0;
}

bool func_35(int iParam0)
{
	return func_318(Global_1896726->f_5, iParam0);
}

void func_36(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_319(&(Global_1896726->f_5), iParam0);
	}
	else
	{
		func_320(&(Global_1896726->f_5), iParam0);
	}
}

bool func_37(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_38()
{
	return Global_1099293->f_339;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case -1909832090:
			return 0;
		case 1120962917:
			return 1;
		case -1302559475:
			return 2;
		case 643368064:
			return 3;
		case 1754472897:
			return 4;
		case -1141649578:
			return 22;
		case -1229126440:
			return 12;
		case 1627801305:
			return 13;
		case 900261631:
			return 15;
		case 2090776647:
			return 14;
		case -910579444:
			return 16;
		case 296053535:
			return 19;
		case -712765443:
			return 20;
		case -248206465:
			return 17;
		case -1269761102:
			return 18;
		case -1151685191:
			return 11;
		case 267128262:
			return 21;
		case joaat("pm_players"):
			return 5;
		case -293089814:
			return 50;
		case 1191195930:
			return 51;
		case -811408979:
			return 48;
		case 1425963091:
			return 49;
		case 907425130:
			return 52;
		case -1431045214:
			return 6;
		case -1748449654:
			return 7;
		case 1984619020:
			return 8;
		case -80027036:
			return 9;
		case joaat("pm_jobs"):
			return 10;
		case -1731090972:
			return 38;
		case -152980413:
			return 39;
		case 1470615405:
			return 40;
		case -1026856039:
			return 41;
		case 1868152501:
			return 42;
		case -721351454:
			return 43;
		case joaat("p_fr_funhmeint_g_05"):
			return 23;
		case -1937951650:
			return 24;
		case 1278626257:
			return 25;
		case -996050125:
			return 26;
		case -1974642358:
			return 27;
		case 883433183:
			return 28;
		case -956828274:
			return 29;
		case 1667751432:
			return 30;
		case -1968023217:
			return 31;
		case -614347122:
			return 32;
		case 1449064090:
			return 33;
		case 1842580097:
			return 45;
		case 1684686721:
			return 46;
		case -516709195:
			return 47;
		case -976096880:
			return 53;
		case -1022521727:
			return 55;
		case 574218998:
			return 54;
		case 2053217867:
			return 56;
		default:
			break;
	}
	return -1;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_41(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_35(7))
	{
		func_167(iParam0);
	}
	func_36(7, 0);
	func_62("", joaat("COLOR_WHITE"));
	iVar0 = func_39(UIAPPS::_0x96FD694FE5BE55DC(1433015236));
	switch (iParam0)
	{
		case 1:
			func_321();
			break;
		case 10:
			func_322();
			func_323();
			break;
		case 2:
		case 3:
			break;
		case 4:
			break;
		case 5:
		case 21:
		case 22:
			func_169();
			func_324();
			func_325(0);
			break;
		case 18:
			func_169();
			break;
		case 14:
			HUD::_0x8BC7C1F929D07BF3(-1274560729);
			break;
		case 19:
			Global_1102098->f_935.f_26 = -1;
			break;
		case 17:
			func_326();
			break;
		case 45:
			Global_1939221->f_1433.f_6264.f_5 = 1;
			if (Global_1939221->f_1433.f_6264.f_3)
			{
				func_327();
				Global_1939221->f_1433.f_6264.f_3 = 0;
			}
			break;
		case 46:
			func_145(0);
			break;
		case 39:
			HUD::_0x8BC7C1F929D07BF3(-523411361);
			break;
		case 53:
			HUD::_0x8BC7C1F929D07BF3(-523411361);
			break;
		case 6:
			if ((iVar0 != 7 && iVar0 != 9) && iVar0 != 8)
			{
				func_7();
			}
			func_82(func_81(), 1);
			func_328();
			break;
		case 42:
			func_329();
			break;
		case 13:
		case 15:
		case 16:
			break;
		case 23:
			func_330();
			break;
		case 24:
			func_331();
			break;
		case 31:
			func_332();
			break;
	}
}

int func_42()
{
	return Global_1939221->f_1433.f_8769;
}

void func_43(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			Global_1939221->f_1433.f_828 = uParam1;
			break;
		case 18:
			Global_1939221->f_1433.f_156.f_196.f_1 = uParam1;
			break;
		default:
			return;
	}
}

void func_44(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_333(iParam0);
	switch (iParam0)
	{
		case 0:
			func_334();
			func_48();
			break;
		case 1:
			func_335();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 12:
			func_336(0);
			break;
		case 6:
			func_337();
			break;
		case 15:
			func_338(iParam0, 1);
			break;
		case 13:
			func_339();
			break;
		case 14:
			func_340();
			break;
		case 18:
			func_341();
			break;
		case 16:
			func_338(iParam0, 0);
			func_342();
			break;
		case 17:
			func_343();
			break;
		case 5:
		case 21:
		case 22:
			func_344(iParam0);
			break;
		case 52:
			func_345();
			break;
		case 7:
		case 8:
		case 9:
			func_346();
			break;
		case 27:
			func_347();
			break;
		case 43:
			func_348();
			break;
		case 39:
			func_349();
			HUD::_0x4CC5F2FC1332577F(-523411361);
			break;
		case 40:
			func_350(2f, 1);
			break;
		case 41:
			break;
		case 20:
			func_351();
			break;
		case 42:
			func_352();
			break;
		case 48:
			func_353();
			break;
		case 49:
			func_354();
			break;
		case 50:
			func_355();
			break;
		case 23:
			func_356();
			break;
		case 24:
			func_357();
			break;
		case 31:
			func_358();
			break;
		case 55:
			func_350(3f, 1);
			break;
		case 54:
			func_350(3f, 1);
			break;
		case 53:
			func_359();
			HUD::_0x4CC5F2FC1332577F(-523411361);
			break;
		case 56:
			func_360();
			break;
	}
}

void func_45()
{
	Global_1939221->f_1433.f_2 = -1;
}

bool func_46()
{
	return func_35(5);
}

void func_47(bool bParam0)
{
	func_361(0, 1);
	if (bParam0)
	{
		func_361(1, 1);
	}
}

void func_48()
{
	int iVar0;

	Global_1939221->f_1433.f_8769 = 0;
	Global_1939221->f_1433.f_8769.f_1 = 0;
	Global_1939221->f_1433.f_8769.f_2 = -1;
	Global_1939221->f_1433.f_8769.f_3 = -1;
	Global_1939221->f_1433.f_8769.f_4 = 0;
	Global_1939221->f_1433.f_8769.f_236 = 1;
	Global_1939221->f_1433.f_8769.f_238 = 0;
	Global_1939221->f_1433.f_8769.f_240 = 1;
	Global_1939221->f_1433.f_8769.f_245 = 0;
	func_362(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&((Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_3), "", 128);
		(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_19 = 0;
		(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_2 = -1;
		Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/] = -1;
		iVar0++;
	}
}

void func_49(struct<4> Param0, int iParam4)
{
	struct<33> Var0;
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	vector3 vVar41;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	switch (iParam4)
	{
		case 778915895:
			if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Param0.f_3, func_50(86)))
			{
				return;
			}
			else if (!func_363())
			{
				func_122(Param0.f_3);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Param0.f_3, func_50(86), true);
			func_364(Param0.f_3);
			break;
		case 1126679425:
			Var0 = Param0.f_1;
			func_311(Var0, &Var0, 2, -1);
			func_82(PLAYER::PLAYER_ID(), 0);
			func_366(func_365(Var0));
			func_367(&Var0);
			UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("abilities"), 1731040532);
			break;
		case 863036578:
			func_368(PLAYER::PLAYER_ID(), &vVar34);
			MAP::_0xE0884C184728C75B(vVar34, 100f);
			UIAPPS::_LAUNCH_APP_BY_HASH(joaat("map"));
			break;
		case 2099367966:
			iVar40 = func_369(PLAYER::PLAYER_ID(), 1);
			vVar37 = { func_370(iVar40) };
			MAP::_0xE0884C184728C75B(vVar37, 100f);
			UIAPPS::_LAUNCH_APP_BY_HASH(joaat("map"));
			break;
		case -1121162991:
			vVar41 = { func_371() };
			MAP::_0xE0884C184728C75B(vVar41, 100f);
			UIAPPS::_LAUNCH_APP_BY_HASH(joaat("map"));
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

char* func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_51(bool bParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (bParam0)
	{
		case 822989203:
			switch (bParam1)
			{
				case -2107252183:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_TYPE_TEMPORARY");
					break;
				case -6116668:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_TYPE_PERSISTENT");
					break;
			}
			break;
		case -1611253054:
			switch (bParam1)
			{
				case 126620015:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					break;
				case 1513236523:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					break;
			}
			break;
		case 1908740613:
			switch (bParam1)
			{
				case 126620015:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1513236523:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
		case -395731946:
			if (!func_90())
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_TEMP_OUTFIT");
			}
			else
			{
				switch (bParam1)
				{
					case -1895608703:
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
						break;
					default:
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
						break;
				}
			}
			break;
		case -91914989:
			switch (bParam1)
			{
				case -1895608703:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
					break;
				default:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
					break;
			}
			break;
		case 2131195733:
			switch (bParam1)
			{
				case -299269340:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					break;
				case 1083456181:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					break;
			}
			break;
		case 1163184660:
			switch (bParam1)
			{
				case -299269340:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1083456181:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_62(sVar0, joaat("COLOR_WHITE"));
	}
}

void func_52(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		bVar0 = func_372(-2040602682);
		func_374(func_373(-2040602682, 0, bVar0));
		if ((!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION()) || !NETWORK::_0x6506BFA755FB209C())
		{
			func_375(0);
			func_377(func_376(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), 0, 0));
		}
		else
		{
			func_375(1);
		}
	}
	else
	{
		func_374(0);
		func_375(0);
		if (func_176(&iVar1, &iVar2))
		{
			if (iVar2 != -1896177107)
			{
				iVar2 = -1896177107;
				func_158(iVar1, iVar2);
			}
		}
		func_377(func_376(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), 0, 0));
	}
	func_378(-1895608703);
	func_380(func_379(PLAYER::PLAYER_ID(), 1), 1);
	if ((bParam1 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_24)) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_23))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_12.f_24, false);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_12.f_23, -6116668);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_12.f_24, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_12.f_23, -2107252183);
		}
	}
}

void func_53(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	bVar0 = func_381(Global_1273882->f_15);
	iVar1 = _NAMESPACE26::_0x9970AE8C3D706139();
	if (func_382())
	{
		iVar1 = func_383();
	}
	iVar2 = -1;
	switch (iVar1)
	{
		case 0:
		case 2:
			if (bParam0 == 0)
			{
				iVar2 = 1;
			}
			break;
		case 1:
			if (bParam0)
			{
				if (bVar0)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 2;
				}
			}
			break;
	}
	if (iVar2 == -1)
	{
		return;
	}
	_NAMESPACE26::_0xC5BF29F4035277C2(iVar2);
	iVar3 = func_384(PLAYER::PLAYER_ID());
	if (iVar3 != 0)
	{
		func_385(iVar3, bParam0);
	}
}

void func_54()
{
	Global_1939221->f_1433.f_156.f_263.f_90 = MISC::GET_GAME_TIMER();
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (bParam0)
	{
		case -1895608703:
			iVar0 = 0;
			break;
		case 76824010:
			iVar0 = 1;
			break;
		case 1128045213:
			iVar0 = 2;
			break;
	}
	iVar1 = func_384(PLAYER::PLAYER_ID());
	if (iVar1 != 0)
	{
		func_386(iVar0, iVar1);
	}
}

void func_56(bool bParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_387(bParam0, 1, 0);
	iVar0 = func_384(PLAYER::PLAYER_ID());
	if (iVar0 != 0)
	{
		func_388(iVar0, bParam0);
	}
}

void func_57(bool bParam0)
{
	int iVar0;

	iVar0 = func_389(bParam0);
	func_390(iVar0);
}

void func_58(bool bParam0)
{
	int iVar0;

	iVar0 = func_391(bParam0);
	Global_1131373->f_6289.f_17 = iVar0;
	switch (iVar0)
	{
		case 1:
			if (func_392(&(Global_1273882->f_154[&Global_1273882])) == 0)
			{
				func_393();
			}
			Global_1131373->f_6289.f_13 = 0;
			break;
		case 0:
			if (func_392(&(Global_1273882->f_154[&Global_1273882])) == 2)
			{
				func_394();
			}
			Global_1131373->f_6289.f_12 = 0;
			break;
	}
}

void func_59(bool bParam0)
{
	bool bVar0;

	bVar0 = func_395(Global_1131373->f_6289.f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_111, -431776754);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_114, joaat("COLOR_WHITE"));
	if (bVar0 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, bVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_113, bParam0);
}

void func_60()
{
	char* sVar0;

	if (Global_1131373->f_6289.f_17 == 1)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_DETAILS_PASSIVE");
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_DETAILS_NOT_PASSIVE");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_115, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_116, true);
}

char* func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_392(&(Global_1273882->f_154[&Global_1273882]));
	switch (iVar0)
	{
		case 2:
			if (!func_228())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_INTRO");
			}
			else if (func_396() && !func_397())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_GANG");
			}
			else if (func_398())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else if (Global_1131373->f_6289.f_17 == 0)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			break;
		case 0:
			fVar6 = func_399(&(Global_1273882->f_154[&Global_1273882]), 1);
			fVar7 = ((*Global_1097609)[&Global_1273882 /*51*/])->f_18;
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && func_400(((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300, 4))
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_BOUNTY_HUNT");
			}
			else if (!func_228())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_INTRO");
			}
			else if (func_401(fVar6))
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_HIGH_HOSTILITY");
			}
			else if (func_401(fVar7))
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_HIGH_HOSTILITY_GANG");
			}
			else if (func_402())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_AGGRESION");
			}
			else if (func_396() && !func_397())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_GANG");
			}
			else if (func_398())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else if (!func_403(0) || !func_228())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED");
			}
			else if (Global_1131373->f_6289.f_17 == 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			break;
		case 3:
			iVar1 = (Global_1901929->f_672.f_38 - (Global_1273882->f_21 - Global_1131373->f_6289.f_11));
			if (iVar1 <= 0)
			{
				MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			else if (iVar1 == 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_WAITING_SINGULAR", iVar1);
			}
			else if (func_398())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_WAITING", iVar1);
			}
			break;
		case 1:
			iVar1 = (Global_1901929->f_672.f_37 - (Global_1273882->f_21 - Global_1131373->f_6289.f_11));
			iVar2 = func_404(&(Global_1273882->f_154[&Global_1273882]));
			iVar4 = (iVar2 / 60);
			iVar5 = (iVar2 % 60);
			if (iVar2 >= iVar1)
			{
				iVar3 = iVar2;
			}
			else
			{
				iVar3 = iVar1;
			}
			if (iVar3 >= 120)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_MINUTES", iVar4, iVar5);
			}
			else if (iVar3 > 60)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_MINUTES_SINGULAR", iVar4, iVar5);
			}
			else if (iVar3 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING", iVar3);
			}
			else if (iVar3 == 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_SINGULAR", iVar3);
			}
			else if (func_398())
			{
				return MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else
			{
				MISC::_CREATE_VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			break;
	}
	return "";
}

void func_62(char* sParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_5, sParam0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_54.f_6))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_54.f_6, bParam1);
	}
}

void func_63(bool bParam0)
{
	switch (bParam0)
	{
		case 1534461337:
			if (!NETWORK::_0xD0541EF28E9C4783())
			{
				NETWORK::_0x777D0571A466B520(1);
			}
			break;
		case 2103335718:
			if (NETWORK::_0xD0541EF28E9C4783())
			{
				NETWORK::_0x777D0571A466B520(0);
			}
			break;
	}
}

int func_64(bool bParam0)
{
	switch (bParam0)
	{
		case 1972219037:
			return 0;
		case 1099303125:
			return 2;
		case -606838807:
			return 3;
		case -1615594685:
			return 4;
		case 1364158563:
			return 1;
		default:
			break;
	}
	return 2;
}

void func_65(int iParam0)
{
	func_405(32);
	func_405(64);
	func_405(128);
	func_405(256);
	func_405(512);
	func_405(1);
	func_405(2);
	func_405(4);
	func_405(8);
	func_405(16);
	switch (iParam0)
	{
		case 0:
			func_406(32);
			func_406(1);
			break;
		case 2:
			func_406(64);
			func_406(2);
			break;
		case 3:
			func_406(128);
			func_406(4);
			break;
		case 4:
			func_406(256);
			func_406(8);
			break;
		case 1:
			func_406(512);
			func_406(16);
			break;
	}
	func_407(0, 1);
}

void func_66(int iParam0)
{
	func_405(262144);
	func_405(524288);
	func_405(1048576);
	func_405(2097152);
	func_405(4194304);
	switch (iParam0)
	{
		case 0:
			func_406(262144);
			break;
		case 2:
			func_406(524288);
			break;
		case 3:
			func_406(1048576);
			break;
		case 4:
			func_406(2097152);
			break;
		case 1:
			func_406(4194304);
			break;
	}
	func_407(0, 1);
}

void func_67(int iParam0)
{
	func_405(32);
	func_405(64);
	func_405(128);
	func_405(256);
	func_405(512);
	func_405(1);
	func_405(2);
	func_405(4);
	func_405(8);
	func_405(16);
	switch (iParam0)
	{
		case 0:
			func_406(32);
			func_406(1);
			break;
		case 2:
			func_406(64);
			func_406(2);
			break;
		case 3:
			func_406(128);
			func_406(4);
			break;
		case 4:
			func_406(256);
			func_406(8);
			break;
		case 1:
			func_406(512);
			func_406(16);
			break;
	}
	func_407(0, 1);
}

void func_68(bool bParam0)
{
	switch (func_408(bParam0))
	{
		case 0:
			func_406(262144);
			break;
		case 1:
			func_405(262144);
			break;
		default:
			break;
	}
}

int func_69(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1126840)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

bool func_70(int iParam0)
{
	return (func_409(iParam0, 16) && !func_409(iParam0, 32));
}

int func_71(int iParam0)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	else if (!func_409(iParam0, 16))
	{
		return 0;
	}
	else if (func_411(&(((*Global_1123778)[iParam0 /*27*/])->f_4)) && func_412(&(((*Global_1123778)[iParam0 /*27*/])->f_4)) < func_413())
	{
		return 0;
	}
	return 1;
}

void func_72(int iParam0)
{
	struct<14> Var0;

	func_414(4);
	func_415(8);
	Var0.f_8 = iParam0;
	func_417(4, Var0, func_416(0, 8));
}

int func_73(int iParam0)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	else if (func_70(iParam0))
	{
		return 0;
	}
	else if (func_409(iParam0, 32))
	{
		return 0;
	}
	else if (func_411(&(((*Global_1123778)[iParam0 /*27*/])->f_4)) && func_412(&(((*Global_1123778)[iParam0 /*27*/])->f_4)) < func_413())
	{
		return 0;
	}
	return 1;
}

void func_74(int iParam0)
{
	struct<14> Var0;

	func_414(8);
	func_415(4);
	Var0.f_8 = iParam0;
	func_417(3, Var0, func_416(0, 8));
}

void func_75(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (bParam0)
	{
		iVar0++;
	}
	else
	{
		iVar0 = (iVar0 - 1);
	}
	iVar1 = (Global_1896726->f_197.f_9 + iVar0);
	if (iVar1 < 0)
	{
		iVar1 = (Global_1896726->f_197.f_10 - 1);
	}
	else if (iVar1 >= Global_1896726->f_197.f_10)
	{
		iVar1 = 0;
	}
	Global_1896726->f_197.f_8 = iVar1;
}

int func_76()
{
	return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939221->f_1433.f_31));
}

int func_77(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/] == 1)
		{
			if ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_1 == iParam0)
			{
				switch ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_2)
				{
					case 0:
						(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_2 = 1;
						break;
					case 1:
						(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_2 = 0;
						break;
				}
				func_47(1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(int iParam0)
{
	func_419(func_418());
	func_420(iParam0);
}

void func_79(var uParam0)
{
	int iVar0;
	char* sVar1;
	bool bVar2;

	if (*uParam0 != -1740156697)
	{
		return;
	}
	iVar0 = uParam0->f_2;
	sVar1 = "";
	bVar2 = joaat("COLOR_WHITE");
	if (!MISC::IS_ORBIS_VERSION())
	{
		if ((iVar0 == -862379603 || iVar0 == 1363191263) || iVar0 == 2132537609)
		{
			return;
		}
	}
	switch (iVar0)
	{
		case -916367143:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "LOG_FOOTER");
			break;
		case -1537476917:
			sVar1 = func_421();
			break;
		case -348311918:
			sVar1 = func_422();
			break;
		case 1486341085:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "CAMP_AND_PROPERTIES_FOOTER");
			break;
		case -880262015:
			sVar1 = func_423();
			break;
		case -260431196:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "PLAYERS_FOOTER");
			break;
		case 1219657827:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "INVITES_FOOTER");
			break;
		case 1615479072:
			sVar1 = func_424();
			break;
		case 1962827136:
			sVar1 = func_425();
			break;
		case -224013573:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "OPTIONS_FOOTER");
			break;
		case 1244828121:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "EMOTES_FOOTER");
			break;
		case -1694883932:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "PINNED_FOOTER");
			break;
		case -543289345:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NET_MOONSHINE_SET_SHACK_LOCATION_FOOTER");
			break;
		case 1222940221:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_427(func_426()));
			break;
		case 88228607:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_429(func_428()));
			break;
		case 290710310:
		case 1685218753:
			sVar1 = func_430(uParam0->f_3);
			break;
		case 504507386:
			sVar1 = func_431();
			break;
		case -1617941426:
			sVar1 = func_431();
			break;
		case 2054047271:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case -1465661771:
			sVar1 = func_432();
			break;
		case -1606096174:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER");
			break;
		case -882681338:
			sVar1 = func_433();
			break;
		case 1671201754:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBERS_FOOTER");
			break;
		case 1689032681:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_SETTINGS_FOOTER");
			break;
		case 1854460024:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
			break;
		case -327353888:
			sVar1 = func_434();
			break;
		case 154809164:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_PERSISTENCE_FOOTER");
			break;
		case -1103748417:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case -779773310:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case -1086306300:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CREW_FOOTER");
			break;
		case -2088725625:
			sVar1 = func_435(&bVar2);
			break;
		case -1320685749:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "INVITE_PLAYERS_LINK");
			break;
		case 1280146211:
			sVar1 = func_436();
			break;
		case -2012882360:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case -1024115628:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case 1717935887:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_ABUSIVE_FOOTER");
			break;
		case 566751030:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_DISRUPTIVE_FOOTER");
			break;
		case -757187920:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OFFENSIVE_FOOTER");
			break;
		case 575735035:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OLN_FOOTER");
			break;
		case 1302293867:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OSCN_FOOTER");
			break;
		case 1284519075:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OCN_FOOTER");
			break;
		case -36476126:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OCE_FOOTER");
			break;
		case 1296297252:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OPN_FOOTER");
			break;
		case 1463101399:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OHN_FOOTER");
			break;
		case -999900281:
			sVar1 = func_437();
			break;
		case -281834246:
			sVar1 = func_438();
			break;
		case 238850895:
			sVar1 = func_439();
			break;
		case -1108319209:
			sVar1 = func_440();
			break;
		case 60364622:
			sVar1 = func_441();
			break;
		case 515157779:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_MESSAGE_FOOTER");
			break;
		case 1029117766:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_REPORT_PLAYER_FOOTER");
			break;
		case -622415922:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_SHOW_GAMER_CARD_FOOTER");
			break;
		case 1891046454:
			sVar1 = func_442(-1896177107);
			break;
		case -1431653946:
			sVar1 = func_442(2042309940);
			break;
		case 921074654:
			sVar1 = func_443();
			break;
		case 2087912236:
			return;
		case -1913419121:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_CAMP_STATS_FOOTER");
			break;
		case 1603044301:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_ENTRY_FOOTER");
			break;
		case 2077941391:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_444(3));
			break;
		case 1018100553:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_444(8));
			break;
		case 1088802604:
			sVar1 = func_445(2, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_2));
			break;
		case -910546409:
			sVar1 = func_445(3, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_3));
			break;
		case -1902254786:
			sVar1 = func_445(4, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_4));
			break;
		case 1876618697:
			sVar1 = func_445(8, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_6));
			break;
		case 587836234:
			sVar1 = func_445(9, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_7));
			break;
		case 513547135:
			sVar1 = func_445(0, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_8));
			break;
		case 2047751621:
			sVar1 = func_445(1, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_9));
			break;
		case -862379603:
			sVar1 = func_445(15, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_10));
			break;
		case 1363191263:
			sVar1 = func_445(16, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_12));
			break;
		case 2132537609:
			sVar1 = func_445(17, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_11));
			break;
		case -1783088248:
			sVar1 = func_445(19, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_13));
			break;
		case 1095154187:
			sVar1 = func_445(18, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_14));
			break;
		case 562873073:
			sVar1 = func_446(DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_15));
			break;
		case 1835613473:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case -949910923:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "HORSES_FOOTER");
			break;
		case 649267219:
			sVar1 = func_447();
			break;
		case 867974977:
			sVar1 = func_448();
			break;
		case -1074910265:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FOOTER");
			break;
		case -766526475:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_RACE_FOOTER");
			break;
		case 388232363:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -783563355:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 271601522:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 988182620:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case 1499523319:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case 1736193867:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "ALLOW_LEADING_FOOTER");
			break;
		case -446710138:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "VEHICLES_FOOTER");
			break;
		case 1129530111:
			sVar1 = func_449();
			break;
		case 1819530459:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FOOTER");
			break;
		case -516833774:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_RACE_FOOTER");
			break;
		case -1523420457:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -189386465:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 697595630:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 746698552:
			sVar1 = func_450();
			break;
		case 1024301510:
			if (func_451())
			{
				sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
			}
			else
			{
				sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_FR_VOICE_CHAT_FILTER_FOOTER");
			}
			break;
		case 72556410:
			sVar1 = func_61();
			break;
		case -1080557963:
			sVar1 = func_452();
			break;
		case -390113081:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_FR_SESSION_PREFERENCE_FOOTER");
			break;
		case 1537752051:
			sVar1 = func_453(3);
			break;
		case 2073308105:
			sVar1 = func_453(1);
			break;
		case 519925072:
			sVar1 = func_453(0);
			break;
		case 1070510924:
			sVar1 = func_453(2);
			break;
		case -1309595911:
			sVar1 = func_454();
			break;
		case -1899275725:
			sVar1 = func_455(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "dynamic_list_item_walk_enum"));
			break;
		case -644769912:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_STYLES_FOOTER");
			break;
		case 823251548:
		case 1401564842:
			Global_1102098->f_935.f_26 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "posse_versus_content_type");
			sVar1 = func_456(Global_1102098->f_935.f_26);
			break;
		case 334553069:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MINIGAME_PLAYERS_FOOTER");
			break;
		case -1239884668:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MINIGAME_GAME_DETAILS_FOOTER");
			break;
		case -1487960093:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MINIGAME_RULES_FOOTER");
			break;
		case -2051980641:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case 596189658:
			sVar1 = func_457();
			break;
		case -2120689682:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "STABLES_HORSES_ENTRY_TOOLTIP");
			break;
		case 1664795258:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "STABLES_VEHICLES_ENTRY_TOOLTIP");
			break;
		case 524868507:
			sVar1 = func_458();
			break;
	}
	func_62(sVar1, bVar2);
}

bool func_80()
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1939221->f_1433.f_8));
}

int func_81()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939221->f_1433.f_8));
	if (!func_80())
	{
		return PLAYER::PLAYER_ID();
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return PLAYER::PLAYER_ID();
	}
	iVar1 = iVar0;
	if (iVar1 < 0)
	{
		return PLAYER::PLAYER_ID();
	}
	if (iVar1 >= 32)
	{
		return PLAYER::PLAYER_ID();
	}
	return iVar0;
}

void func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_459(0);
	}
	if (PLAYER::PLAYER_ID() == iParam0)
	{
		func_8(0);
	}
	else
	{
		func_8(1);
	}
	func_460(0, iParam0);
	func_460(1, iParam0);
	func_460(2, iParam0);
	func_460(3, iParam0);
}

int func_83(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 238850895:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_54, bParam1);
			break;
		case -1108319209:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_156.f_613.f_4.f_1, bParam1);
			break;
	}
	return 1;
}

int func_84(var uParam0)
{
	struct<7> Var0;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	Var0 = { func_171(*uParam0, func_50(29)) };
	iVar7 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(*uParam0, func_50(15));
	if (!func_461(Var0, iVar7))
	{
		return 0;
	}
	return 1;
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = func_462(&(Global_1273882->f_154[&Global_1273882]), 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
		case 6:
			iVar0 = 2;
			break;
	}
	bVar2 = func_463(iVar0);
	bVar3 = func_464(1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_111, -431776754);
	if (bVar2 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, bVar2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_114, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_113, bParam0);
}

void func_86()
{
	char* sVar0;
	int iVar1;

	iVar1 = func_462(&(Global_1273882->f_154[&Global_1273882]), 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HOSTILITY_LOW_DESCRIPTION");
			break;
		case 2:
		case 3:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HOSTILITY_MEDIUM_DESCRIPTION");
			break;
		case 4:
		case 5:
		case 6:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HOSTILITY_HIGH_DESCRIPTION");
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_115, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_116, true);
}

void func_87()
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_465();
	bVar1 = func_464(0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_88.f_19, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_88.f_21, bVar1);
}

int func_88(int iParam0, var uParam1)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*iParam0))
	{
		return 0;
	}
	DATABINDING::_0xE6AAB897120492D7(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", &iVar0);
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP"))
	{
		if (!func_466(iVar0, uParam1, 1))
		{
			return 0;
		}
	}
	else if (!func_210(DATABINDING::_0xE6AAB897120492D6(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID"), uParam1, 1))
	{
		return 0;
	}
	if (!func_212(uParam1))
	{
		return 0;
	}
	return 1;
}

void func_89(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar0++;
	}
	Global_1939221->f_1433.f_156.f_97 = { *uParam0 };
}

int func_90()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_23))
	{
		switch (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_12.f_23))
		{
			case -2107252183:
				return 0;
			case -6116668:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

int func_91()
{
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
	{
		return 0;
	}
	return 1;
}

void func_92()
{
	if (func_467())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_479.f_28, -1);
		if (func_468(9))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, false);
		}
		else if (func_468(10))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, 2);
		}
		else if (func_468(11))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, 3);
		}
		else if (func_468(12))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, 4);
		}
		else if (func_468(13))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, true);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_479.f_28, -758850690);
		if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24) != func_469())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, func_469());
		}
	}
}

void func_93()
{
	if (func_467())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_508.f_28, -1);
		if (func_468(19))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, false);
		}
		else if (func_468(20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, 2);
		}
		else if (func_468(21))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, 3);
		}
		else if (func_468(22))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, 4);
		}
		else if (func_468(23))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, true);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_508.f_28, 87004688);
		if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24) != func_470())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, func_470());
		}
	}
}

void func_94()
{
	if (func_467())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_378.f_28, -1);
		if (func_468(9))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, false);
		}
		else if (func_468(10))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, 2);
		}
		else if (func_468(11))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, 3);
		}
		else if (func_468(12))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, 4);
		}
		else if (func_468(13))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, true);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_378.f_28, -2036453627);
		if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24) != func_469())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, func_469());
		}
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<29> Var6;
	int iVar48;
	bool bVar49;

	if (!func_471("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var2 = { func_472(0, 1, 0, -1) };
	Var6.f_10 = -1;
	Var6.f_23 = 3;
	Var6.f_28 = 13;
	bVar49 = false;
	while (bVar49 < iVar1)
	{
		if (!func_473(bVar49, iVar0, iVar1, 0, &Var6, 0, 0))
		{
		}
		else
		{
			func_474(Var2, &Var6, iVar48, 0);
			iVar48++;
		}
		bVar49++;
	}
	while (iVar48 < 11)
	{
		func_474(Var2, &Var6, iVar48, 1);
		iVar48++;
	}
	func_475(iVar0);
}

void func_96(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<23> Var2;
	char* sVar44;
	int iVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	char* sVar52;

	Global_1939221->f_1433.f_1622 = bParam0;
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!func_471("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (!func_473(bParam0, iVar0, iVar1, 0, &Var2, 0, 1))
	{
		func_475(iVar0);
		return;
	}
	sVar44 = func_476(0);
	if (func_477(Var2, -653439684, 0, -1) == 515427499)
	{
		sVar44 = func_476(1);
	}
	iVar45 = func_478(Var2.f_11);
	bVar46 = func_479(Var2.f_11) + 1;
	bVar46 = func_480(bVar46, 0, 10);
	bVar48 = bVar46 + 2;
	bVar48 = func_480(bVar48, 0, 10);
	bVar49 = func_481(Var2.f_11) + 1;
	bVar49 = func_480(bVar49, 0, 10);
	bVar51 = bVar49 + 2;
	bVar51 = func_480(bVar51, 0, 10);
	func_482(&Var2, &bVar47, &bVar50);
	bVar47 = BUILTIN::FLOOR((IntToFloat(bVar47) * 0.01f));
	bVar47 = (bVar47 + bVar46);
	bVar47 = func_480(bVar47, 0, 10);
	bVar50 = BUILTIN::FLOOR((IntToFloat(bVar50) * 0.01f));
	bVar50 = (bVar50 + bVar49);
	bVar50 = func_480(bVar50, 0, 10);
	sVar52 = func_484(func_483(Var2.f_11));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_473, MISC::GET_HASH_KEY(sVar52));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_474, MISC::GET_HASH_KEY(func_485(Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_475, MISC::GET_HASH_KEY(func_486(iVar45, Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_476, MISC::GET_HASH_KEY(sVar44));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_477, MISC::GET_HASH_KEY(func_487(Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_467, bVar46);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_468, bVar47);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_469, bVar48);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_470, bVar49);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_471, bVar50);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_472, bVar51);
	func_475(iVar0);
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<29> Var3;
	struct<4> Var45;
	int iVar49;

	Var3.f_10 = -1;
	Var3.f_23 = 3;
	Var3.f_28 = 13;
	if (!func_471("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var45 = { func_472(0, 1, 0, iParam0) };
	bVar2 = false;
	while (bVar2 < iVar1)
	{
		if (!func_473(bVar2, iVar0, iVar1, 0, &Var3, 0, 0))
		{
		}
		else
		{
			func_488(Var45, &Var3, iVar49, iParam0, 0);
			iVar49++;
		}
		bVar2++;
	}
	while (iVar49 < 11)
	{
		func_474(Var45, &Var3, iVar49, 1);
		iVar49++;
	}
	func_475(iVar0);
}

void func_98()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	struct<29> Var20;
	int iVar62;
	bool bVar63;

	Var2 = { func_489(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!func_490(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16 = { func_244(0, 1, 0, -1) };
	Var20.f_10 = -1;
	Var20.f_23 = 3;
	Var20.f_28 = 13;
	bVar63 = false;
	while (bVar63 < iVar1)
	{
		if (!func_473(bVar63, iVar0, iVar1, 2, &Var20, 0, 0))
		{
		}
		else
		{
			func_491(Var16, &Var20, iVar62, 0);
			iVar62++;
		}
		bVar63++;
	}
	while (iVar62 < 9)
	{
		func_491(Var16, &Var20, iVar62, 1);
		iVar62++;
	}
	func_475(iVar0);
}

void func_99(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<29> Var16;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;

	Global_1939221->f_1433.f_2190 = bParam0;
	Var2 = { func_489(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!func_490(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!func_473(bParam0, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		func_475(iVar0);
		return;
	}
	iVar58 = Var16.f_11;
	iVar59 = func_492(iVar58);
	iVar60 = func_493(iVar58);
	iVar61 = func_494(iVar58);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_373, MISC::GET_HASH_KEY(func_495(iVar59)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_374, MISC::GET_HASH_KEY(func_496(iVar60)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_375, MISC::GET_HASH_KEY(func_497(iVar61)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_376, MISC::GET_HASH_KEY(func_498(iVar58)));
	func_475(iVar0);
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	struct<29> Var20;
	int iVar62;
	bool bVar63;

	Var2 = { func_489(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!func_490(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16 = { func_244(0, 1, 0, iParam0) };
	Var20.f_10 = -1;
	Var20.f_23 = 3;
	Var20.f_28 = 13;
	bVar63 = false;
	while (bVar63 < iVar1)
	{
		if (!func_473(bVar63, iVar0, iVar1, 2, &Var20, 0, 0))
		{
		}
		else
		{
			func_499(Var16, &Var20, iVar62, iParam0, 0);
			iVar62++;
		}
		bVar63++;
	}
	while (iVar62 < 9)
	{
		func_491(Var16, &Var20, iVar62, 1);
		iVar62++;
	}
	func_475(iVar0);
}

void func_101(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_501(func_500(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_39, bVar0);
}

void func_102(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_38, 442252665);
			break;
		case 2042309940:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_38, 771582374);
			break;
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_38, 2);
			break;
	}
}

void func_103(bool bParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (bParam0)
	{
		case -682748:
			sVar0 = "PLAYER_CAMP_GRIZZLIES";
			break;
		case 1357161730:
			sVar0 = "PLAYER_CAMP_BAYOU_NWA";
			break;
		case 1581179681:
			sVar0 = "PLAYER_CAMP_BIG_VALLEY";
			break;
		case -215258135:
			sVar0 = "PLAYER_CAMP_CHOLLA_SPRINGS";
			break;
		case -987049424:
			sVar0 = "PLAYER_CAMP_CUMBERLAND_FOREST";
			break;
		case 892234183:
			sVar0 = "PLAYER_CAMP_GAPTOOTH_RIDGE";
			break;
		case -1554232707:
			sVar0 = "PLAYER_CAMP_GREAT_PLAINS";
			break;
		case 1538293636:
			sVar0 = "PLAYER_CAMP_HEARTLANDS";
			break;
		case -1992167326:
			sVar0 = "PLAYER_CAMP_HENNIGANS_STEAD";
			break;
		case -1884014371:
			sVar0 = "PLAYER_CAMP_RIO_BRAVO";
			break;
		case -1871413878:
			sVar0 = "PLAYER_CAMP_ROANOKE_RIDGE";
			break;
		case 1483778247:
			sVar0 = "PLAYER_CAMP_SCARLETT_MEADOWS";
			break;
		case -724534761:
			sVar0 = "PLAYER_CAMP_TALL_TREES";
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_70, MISC::_CREATE_VAR_STRING(2, sVar0));
}

int func_104()
{
	return Global_1939221->f_1433.f_2628.f_47;
}

void func_105(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_502(func_500(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_43, bVar0);
}

void func_106(int iParam0, bool bParam1)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;

	if (&Global_1273882 != 255)
	{
		vVar0 = { func_503(&Global_1273882) };
		if (vVar0.y == bParam1 && vVar0.x == func_500(iParam0))
		{
			func_62(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_PITCHED_FOOTER"), joaat("COLOR_WHITE"));
			return;
		}
	}
	bVar3 = func_502(func_500(iParam0));
	if (!func_504(bVar3))
	{
		func_62(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_NO_CASH_FOOTER"), joaat("COLOR_WHITE"));
		return;
	}
	vVar0.f_1 = bParam1;
	vVar0.x = func_500(iParam0);
	if (func_505(vVar0, _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15)))
	{
		func_62(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_TOO_SMALL"), joaat("COLOR_WHITE"));
		return;
	}
	iVar4 = _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15);
	if (!func_506(vVar0.x, iVar4, bParam1))
	{
		func_62(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_DISTRICT_INVALID"), joaat("COLOR_WHITE"));
		return;
	}
	func_62(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_ENTRY_FOOTER"), joaat("COLOR_WHITE"));
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	struct<10> Var8;

	iVar2 = func_507(1);
	Var3 = { func_508(1) };
	bVar7 = func_509(iParam0);
	Var8.f_9 = -1591664384;
	if (bVar7 == 0)
	{
		return 0;
	}
	iVar1 = INVENTORY::_0x033EE4B89F3AC545(iVar2, &Var3, bVar7);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (iVar1 > 37)
	{
		iVar1 = 37;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar2, &Var3, bVar7, iVar0, &Var8))
		{
		}
		else
		{
			return Var8.f_4;
		}
		iVar0++;
	}
	return 0;
}

void func_108(bool bParam0)
{
	vector3 vVar0;

	if (bParam0 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_11, -1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_12, -1);
	}
	else
	{
		vVar0 = { func_510(bParam0) };
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_11, vVar0.x);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_12, func_511(bParam0));
	}
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	struct<10> Var8;
	int iVar22;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = func_507(1);
	Var3 = { func_508(1) };
	Var8.f_9 = -1591664384;
	bVar7 = func_509(iParam0);
	iVar22 = INVENTORY::_0x033EE4B89F3AC545(iVar2, &Var3, bVar7);
	if (iParam1 > (iVar22 - 1))
	{
		return 0;
	}
	if (iVar22 > 0)
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar2, &Var3, bVar7, iParam1, &Var8))
		{
			return 0;
		}
		iVar1 = Var8.f_4;
	}
	else
	{
		return 0;
	}
	return iVar1;
}

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar8;
	struct<10> Var9;

	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return -1;
	}
	iVar3 = func_507(1);
	Var4 = { func_508(1) };
	bVar8 = func_509(iVar0);
	Var9.f_9 = -1591664384;
	iVar2 = INVENTORY::_0x033EE4B89F3AC545(iVar3, &Var4, bVar8);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (iVar2 > 37)
	{
		iVar2 = 37;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar3, &Var4, bVar8, iVar1, &Var9))
		{
		}
		else if (iParam1 == Var9.f_4)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_111(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "moonshine_selection_property");
	if (bVar0 != -1 && bVar0 < 5)
	{
		bVar1 = bVar0;
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_7711.f_248, bVar1);
	}
	func_512(1);
}

void func_112(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_513(bParam0);
	bVar1 = -1593595016;
	if (DATABINDING::_0x81D7183E7A8ECA72(Global_1939221->f_1433.f_7711.f_240) != bVar0)
	{
		if (!TXD::_0xBA0163B277C2D2D0(bVar1))
		{
			return;
		}
		TXD::_0xDB1BD07FB464584D(bVar1, 0);
		if (!TXD::_0xBE72591D1509FFE4(bVar1))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_7711.f_241, bVar1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_7711.f_240, bVar0);
	}
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 2077941391:
			return 3;
		case 1088802604:
			return 2;
		case -910546409:
			return 3;
		case -1902254786:
			return 4;
		case 491987586:
			return 5;
		case -240952777:
			return 6;
		case 1018100553:
			return 8;
		case 1876618697:
			return 8;
		case 587836234:
			return 9;
		case 513547135:
			return 0;
		case 2047751621:
			return 1;
		case -862379603:
			return 15;
		case 1363191263:
			return 16;
		case 2132537609:
			return 17;
		case -1783088248:
			return 19;
		case 1095154187:
			return 18;
		default:
			break;
	}
	return -1;
}

void func_114(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 20)
	{
		return;
	}
	func_514((Global_1901929->f_117[iVar0 /*2*/])->f_1, &(Global_1901929->f_117[iVar0 /*2*/]));
}

void func_115(int iParam0)
{
	func_516(func_515(iParam0));
}

void func_116()
{
	func_514(Global_1901929->f_117.f_41.f_1, Global_1901929->f_117.f_41);
}

void func_117()
{
	func_516(-1209711415);
}

int func_118()
{
	struct<51> Var0;

	func_517();
	Var0.f_50 = 256;
	Var0 = 1;
	StringCopy(&(Var0.f_1), func_518(), 128);
	StringCopy(&(Var0.f_17), func_519(), 128);
	Var0.f_49 = 20;
	return func_520(&Var0);
}

int func_119()
{
	struct<51> Var0;

	func_517();
	Var0.f_50 = 256;
	Var0 = 1;
	StringCopy(&(Var0.f_1), func_518(), 128);
	StringCopy(&(Var0.f_17), func_519(), 128);
	Var0.f_49 = 20;
	return func_520(&Var0);
}

void func_120()
{
	Global_1939221->f_1433.f_8769.f_245 = 0;
	Global_1939221->f_1433.f_8769.f_247 = 3;
	Global_1939221->f_1433.f_8769.f_246 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_121()
{
	func_521(68);
	func_522(joaat("freeroam"), 268435456);
	func_523(3);
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(87));
	switch (iVar0)
	{
		case 6:
			func_524(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50)));
			break;
		case 16:
			iVar1 = DATABINDING::_0xE6AAB897120492D6(iParam0, func_50(88));
			func_525(1, iVar1, Global_1901929->f_295.f_170);
			func_526(88, Global_1273882->f_15, iVar1, 1);
			break;
		case 17:
			iVar1 = DATABINDING::_0xE6AAB897120492D6(iParam0, func_50(88));
			func_525(2, iVar1, Global_1901929->f_295.f_170);
			func_526(89, Global_1273882->f_15, iVar1, 1);
			break;
		case 20:
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(51));
			func_527(PLAYER::INT_TO_PLAYERINDEX(iVar3));
			break;
		case 8:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_528(iVar2, 1);
			break;
		case 21:
			func_529();
			break;
		case 10:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_530(iVar2);
			break;
		case 9:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_531(iVar2);
			break;
		case 12:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			break;
		case 11:
			break;
		case 1:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_532(iVar2, 1);
			break;
		case 19:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			if (CREW::_0x8E2143144B8E188D(iVar2))
			{
			}
			break;
	}
	func_533(iParam0);
	func_137();
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	int iVar14;
	int iVar15;
	int iVar16;
	char cVar17[64];

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(87));
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_3.f_1 = -1;
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	switch (iVar0)
	{
		case 1:
			uVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0xC0CFFDA87C2C163D(uVar2, &Var3, 11);
			iVar15 = NETWORK::_0xE79BA3BC265895DA(uVar2);
			iVar14 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(iParam0, func_50(15));
			break;
		case 10:
			StringCopy(&cVar17, MISC::_CREATE_VAR_STRING(2, "POSSE_INVITE_HDR"), 64);
			iVar15 = func_534(cVar17);
			iVar16 = MISC::_CREATE_VAR_STRING(2, "POSSE_INVITE_DESC");
			iVar14 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(iParam0, func_50(15));
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_242.f_7.f_1, iVar15);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_242.f_7.f_4, iVar14);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_242.f_7.f_5, iVar16);
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(87));
	switch (iVar0)
	{
		case 8:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_535(iVar1, iParam0);
			break;
		case 21:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_536(iVar1, 1);
			break;
		case 16:
		case 17:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(51));
			func_537(iVar1);
			break;
		case 6:
			break;
		case 1:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			func_532(iVar1, 0);
			break;
	}
	func_533(iParam0);
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	struct<2> Var10;
	int iVar18;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(75));
	switch (iVar0)
	{
		case 2:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			uVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0x16EFB123C4451032(uVar2, &Var3);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
		case 3:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			_NAMESPACE26::_0x7BAA30C9BBE8AEE7(iVar1, &Var10);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&(Var10.f_1));
			break;
		case 4:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(51));
			iVar18 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar18) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
			{
				return;
			}
			Var3 = { func_538(iVar18) };
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
		case 22:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(50));
			iVar18 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar18) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
			{
				return;
			}
			Var3 = { func_538(iVar18) };
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
	}
}

int func_126()
{
	int iVar0;

	iVar0 = func_539();
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19);
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_447, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20, false);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_447, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_448, -138701133);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20, false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_447, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_448, 1012636423);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20, true);
			break;
	}
}

int func_129()
{
	int iVar0;

	iVar0 = func_540();
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19);
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_370, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20, false);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_370, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_371, 1810553290);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20, false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_370, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_371, 1049535948);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20, true);
			break;
	}
}

int func_132(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	Global_1939221->f_1433.f_2 = iParam0;
	func_36(5, 1);
	return 1;
}

void func_133()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_54.f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_5, "");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_54.f_6))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_54.f_6, joaat("COLOR_WHITE"));
	}
}

void func_134(int iParam0)
{
	if (!func_541(Global_1130954->f_145, iParam0))
	{
		func_542(&(Global_1130954->f_145), iParam0);
	}
}

int func_135()
{
	var uVar0;

	uVar0 = func_543();
	return uVar0;
}

void func_136(int iParam0, int iParam1)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return;
	}
	if (!func_541(Global_1130954->f_137.f_1, iParam1))
	{
		func_542(&(Global_1130954->f_137.f_1), iParam1);
	}
}

void func_137()
{
	func_13(0);
}

bool func_138(int iParam0)
{
	return func_541(Global_1130954->f_145, iParam0);
}

void func_139()
{
	func_319(&(Global_1896726->f_5), 7);
}

void func_140(var uParam0)
{
	Global_1939221->f_1433.f_156.f_2 = { *uParam0 };
}

int func_141(int iParam0)
{
	if (!UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_142()
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1939221->f_1433.f_31)))
	{
		return 0;
	}
	if (!func_30(Global_1939221->f_1433.f_31, &(Global_1939221->f_1433.f_31.f_7)))
	{
		return 0;
	}
	return 1;
}

int func_143(var uParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	struct<10> Var6;
	int iVar20;
	char cVar21[64];
	struct<36> Var29;
	int iVar65;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	iVar0 = func_507(1);
	Var1 = { func_508(1) };
	Var6.f_9 = -1591664384;
	bVar5 = func_509(*uParam0);
	iVar20 = INVENTORY::_0x033EE4B89F3AC545(iVar0, &Var1, bVar5);
	if (iVar20 > 37)
	{
		iVar20 = 37;
	}
	Var29 = 1;
	Var29.f_1 = 1;
	Var29.f_2 = joaat("COLOR_WHITE");
	Var29.f_4 = -1;
	Var29.f_5 = -1;
	Var29.f_6 = -1;
	Var29.f_10 = -1;
	Var29.f_11 = -1;
	Var29.f_12 = -1;
	Var29.f_32 = -1;
	Var29.f_35 = -1;
	if (iVar20 > 0)
	{
		iVar65 = 0;
		while (iVar65 <= (iVar20 - 1))
		{
			if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &Var1, bVar5, iVar65, &Var6))
			{
			}
			else
			{
				StringCopy(&cVar21, "emote_specific_", 64);
				StringIntConCat(&cVar21, iVar65, 64);
				func_544(&Var29, uParam1, Var6.f_4, uParam0->f_5);
				func_545(uParam0->f_14[iVar65 /*31*/], uParam0->f_13, cVar21, Var29);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", &(uParam0->f_14[iVar65 /*31*/]));
			}
			iVar65++;
		}
	}
	return 1;
}

var func_144(int iParam0)
{
	return func_546(iParam0);
}

void func_145(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_6264.f_10, bParam0);
}

int func_146(var uParam0, var uParam1)
{
	char cVar0[64];
	struct<36> Var8;
	int iVar44;
	int iVar45;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = joaat("COLOR_WHITE");
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	Var8.f_32 = -1;
	Var8.f_35 = -1;
	iVar45 = 3;
	iVar44 = 0;
	while (iVar44 <= iVar45)
	{
		if (&uParam1->f_2[iVar44] == 0)
		{
		}
		else
		{
			StringCopy(&cVar0, "emote_specific_", 64);
			StringIntConCat(&cVar0, iVar44, 64);
			func_544(&Var8, uParam1, &(uParam1->f_2[iVar44]), uParam0->f_5);
			func_545(uParam0->f_14[iVar44 /*31*/], uParam0->f_13, cVar0, Var8);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", &(uParam0->f_14[iVar44 /*31*/]));
			iVar44++;
		}
	}
	return 1;
}

int func_147(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;

	iVar0 = uParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (bParam2 == &uParam0->f_2[iVar2])
		{
			bVar1 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	iVar3 = func_547(iVar0);
	Var4 = { func_548(bParam2, func_508(1), iVar3, 1) };
	return func_549(&(Global_1070355->f_26843.f_11), Var4);
}

int func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	iVar1 = func_547(iVar0);
	Var2 = { func_548(&(uParam0->f_2[uParam0->f_1]), func_508(1), iVar1, 1) };
	return func_550(&(Global_1070355->f_26843.f_11), Var2);
}

int func_149(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_551(bParam2, 0))
	{
		return 2;
	}
	iVar0 = func_552((*uParam0)[iParam1 /*7*/], bParam2);
	if (iVar0 == -1)
	{
		if (&((*uParam0)[iParam1 /*7*/])->f_2[uParam0[iParam1 /*7*/]] != 0)
		{
			if (((*uParam0)[iParam1 /*7*/])->f_1 > -1 && &((*uParam0)[iParam1 /*7*/])->f_2[uParam0[iParam1 /*7*/]] == &((*uParam0)[iParam1 /*7*/])->f_2[((*uParam0)[iParam1 /*7*/])->f_1])
			{
				func_148((*uParam0)[iParam1 /*7*/], iParam1);
			}
		}
		func_553(uParam0, iParam1, bParam2);
		return 0;
	}
	else
	{
		if (((*uParam0)[iParam1 /*7*/])->f_1 > -1 && &((*uParam0)[iParam1 /*7*/])->f_2[iVar0] == &((*uParam0)[iParam1 /*7*/])->f_2[((*uParam0)[iParam1 /*7*/])->f_1])
		{
			func_148((*uParam0)[iParam1 /*7*/], iParam1);
		}
		func_554((*uParam0)[iParam1 /*7*/], iVar0);
		return 1;
	}
	return 2;
}

void func_150()
{
	char cVar0[64];
	struct<28> Var8;
	int iVar36;
	int iVar37;
	int iVar38;

	Global_1939221->f_1433.f_7464 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "player_walk_types_data");
	Global_1939221->f_1433.f_7464.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1939221->f_1433.f_7464, "player_walk_types_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1939221->f_1433.f_7464.f_1);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = joaat("COLOR_WHITE");
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	iVar36 = 0;
	iVar37 = 10;
	iVar36 = 0;
	while (iVar36 < iVar37)
	{
		iVar38 = func_555(iVar36);
		if (iVar38 != 0)
		{
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar38) || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar38))
			{
			}
			else
			{
				StringCopy(&cVar0, "walk_type_", 64);
				StringIntConCat(&cVar0, iVar36, 64);
				Var8.f_8 = 1;
				StringCopy(&(Var8.f_16), func_556(iVar36), 64);
				Var8.f_24 = joaat("hud_textures");
				Var8.f_25 = joaat("check");
				Var8.f_26 = 0;
				Var8.f_5 = -1899275725;
				Var8.f_4 = 1433015236;
				Var8.f_27 = iVar36;
				func_557(Global_1939221->f_1433.f_7464.f_2[iVar36 /*23*/], Global_1939221->f_1433.f_7464, cVar0, Var8);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_1433.f_7464.f_1, -1, "pm_dynamic_text_and_end_image", &(Global_1939221->f_1433.f_7464.f_2[iVar36 /*23*/]));
			}
			iVar36++;
		}
	}

int func_151()
{
	return Global_17173.f_54.f_644.f_1782;
}

int func_152(int iParam0, int iParam1)
{
	if (!iParam0 == iParam1 && (iParam1 != 11 && iParam1 < 10))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_7464.f_2[iParam1 /*23*/])->f_21, false);
	}
	if (iParam0 == 11 || iParam0 >= 10)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_7464.f_2[0 /*23*/])->f_21, true);
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_7464.f_2[iParam0 /*23*/])->f_21, true);
	return 1;
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		iParam0 = 0;
	}
	iVar0 = iParam0;
	iVar1 = func_151();
	func_152(iVar0, iVar1);
	func_558(iVar0, iVar1);
	func_559(iVar0);
}

struct<2> func_154()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_155(int iParam0, struct<2> Param1)
{
	switch (iParam0)
	{
		case 6:
			if (!func_560(Param1))
			{
				return 0;
			}
			break;
		case 4:
			if (!func_561(Param1))
			{
				return 0;
			}
			break;
		case 5:
			if (!func_562(Param1))
			{
				return 0;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (!func_563(iParam0, &Param1))
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	func_564(iParam0, Param1, -1);
	return 1;
}

int func_156(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar3;
	int iVar4;

	if (!func_565(16))
	{
		return 0;
	}
	iVar3 = func_500(iParam0);
	iVar4 = _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15);
	Var0 = iVar3;
	Var0.f_1 = bParam1;
	if (func_565(64))
	{
		if (!func_567(func_566(Var0), 1, 59806960))
		{
			return 0;
		}
	}
	return func_506(iVar3, iVar4, bParam1);
}

bool func_157()
{
	return Global_1896726->f_13.f_3;
}

int func_158(bool bParam0, int iParam1)
{
	Global_1896726->f_13.f_7 = bParam0;
	Global_1896726->f_13.f_8 = iParam1;
	Global_1896726->f_13.f_6 = 1;
	Global_1896726->f_13.f_9 = func_502(func_500(iParam1));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_4, MISC::_CREATE_VAR_STRING(2, func_568(bParam0, 0)));
	}
	return 1;
}

int func_159(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0.f_2 = -2;
	vVar0.f_1 = bParam0;
	vVar0.x = func_500(iParam1);
	Global_1124870->f_1908.f_3 = bParam2;
	if (bParam2)
	{
		if (!func_569(vVar0, 1))
		{
			return 0;
		}
		func_570(1);
	}
	if (func_571(vVar0, 0))
	{
		if (iParam3 == 0)
		{
			func_572(vVar0.y);
		}
		return 1;
	}
	return 0;
}

void func_160(int iParam0)
{
	if (!func_565(iParam0))
	{
		func_542(&(((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73), iParam0);
	}
}

void func_161(int iParam0)
{
	Global_1939221->f_1433.f_2628.f_47 = iParam0;
}

int func_162()
{
	vector3 vVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	func_573(2);
	((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_2 = 0;
	((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_574();
	func_575(vVar0);
	return 1;
}

void func_163()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return;
	}
	Global_1180694->f_5[1] = 0;
	func_576(Global_1180694->f_5[1], 1);
	func_187(1);
}

void func_164()
{
	bool bVar0;
	bool bVar1;

	if (func_369(PLAYER::GET_PLAYER_INDEX(), 1) == -1)
	{
		bVar0 = func_577(1384535894, 0, 1, -1, 1);
		bVar1 = func_578(1384535894, bVar0, 0, 1, 1);
		if ((bVar0 == -570078785 || (func_579(bVar0) && func_580(1384535894, 773203532 /* GXTEntry: "Gold Bar" */, bVar0, 1, 1) > 0)) && !func_581(bVar1))
		{
			func_582(0, 0, (bVar1 / 100));
			func_583(1);
		}
	}
}

void func_165()
{
	if (func_584() == -1)
	{
		PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()), 1, 21030, PLAYER::PLAYER_PED_ID());
	}
	else
	{
		func_585(PLAYER::PLAYER_PED_ID(), joaat("weapon_fall"), 0, 0);
	}
}

bool func_166()
{
	return Global_1939221->f_1433.f_156.f_205.f_3;
}

void func_167(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 57)
	{
		return;
	}
	MISC::_COPY_MEMORY(&((Global_1896726->f_3715[iVar0 /*4*/])->f_3), &uVar1, 1);
	Global_1896726->f_3715[iVar0 /*4*/] = 0;
	(Global_1896726->f_3715[iVar0 /*4*/])->f_2 = 0;
	(Global_1896726->f_3715[iVar0 /*4*/])->f_1 = 0;
}

void func_168(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<95> Var1;
	int iVar96;

	Var1.f_38 = 7;
	Var1.f_91 = -1;
	if (!bParam1)
	{
		if (!bParam0)
		{
			if (func_586(&Var1, 1))
			{
				bVar0 = true;
			}
		}
		else
		{
			Var1 = { func_183(1) };
			if (func_212(&Var1))
			{
				bVar0 = true;
			}
		}
	}
	iVar96 = 0;
	if (bVar0)
	{
		func_140(&Var1);
		func_89(&Var1);
		func_132(16);
		iVar96 = 394524610;
	}
	else
	{
		func_587();
		func_588();
		if (func_589())
		{
			func_132(13);
			iVar96 = -303450633;
		}
		else
		{
			func_132(15);
			iVar96 = 1243396847;
		}
	}
	if (iVar96 == 0)
	{
	}
	else if (!func_141(iVar96))
	{
	}
}

void func_169()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(Global_1896726->f_393.f_1);
	}
}

void func_170(int iParam0)
{
	Global_1896726->f_13.f_3 = iParam0;
}

struct<7> func_171(int iParam0, var uParam1)
{
	struct<7> Var0;

	DATABINDING::_0xB138CA787F3DD858(iParam0, uParam1, &Var0);
	return Var0;
}

int func_172(struct<7> Param0, char[4] cParam7, bool bParam8)
{
	struct<11> Var0;
	vector3 vVar11;

	if (!func_29(Param0))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Param0))
	{
		return 0;
	}
	if (!func_590())
	{
		func_591("NT_INV_FINISH_FIRST_MISSION", 10000, 0, 0, 0, 1);
		return 0;
	}
	if (!bParam8)
	{
		if (Global_1939221->f_1433.f_1405 != -1 && (MISC::GET_GAME_TIMER() - Global_1939221->f_1433.f_1405) < Global_1901929->f_1.f_22)
		{
			Global_1939221->f_1433.f_1405 = MISC::GET_GAME_TIMER();
			return 0;
		}
	}
	if (!bParam8)
	{
		Global_1939221->f_1433.f_1405 = MISC::GET_GAME_TIMER();
	}
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	if (func_592())
	{
		func_576(&(Var0.f_10), 4);
	}
	else
	{
		func_593(&(Var0.f_10), 4);
	}
	Var0 = func_594();
	Var0.f_1 = func_595();
	Var0.f_2 = func_596();
	Var0.f_3 = { func_597() };
	Var0.f_9 = func_598();
	if (NETWORK::NETWORK_IS_FRIEND(&Param0))
	{
		if (!NETWORK::_0xE348D1404BD80146(&Param0))
		{
			return 0;
		}
	}
	vVar11 = { func_599() };
	func_600(&Param0, cParam7, &vVar11, &Var0, 0);
	return 1;
}

int func_173()
{
	return Global_1939221->f_1433.f_8769.f_1;
}

void func_174(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	int iVar10;
	int iVar11;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar10 = func_601();
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (Global_1939221->f_1433.f_1405 != -1 && (MISC::GET_GAME_TIMER() - Global_1939221->f_1433.f_1405) < Global_1901929->f_1.f_22)
			{
			}
			else if (func_602(iVar10) && func_603(iVar10))
			{
				if (!func_604(iVar10, 1))
				{
				}
				else
				{
					bVar0 = false;
					while (bVar0 <= (iVar1 - 1))
					{
						iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, bVar0);
						if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
						{
						}
						else
						{
							Var3 = { func_171(iVar2, func_50(29)) };
							if (!func_29(Var3))
							{
							}
							else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
							{
							}
							else if (NETWORK::_0xA2837A5E21FB5A58(&Var3))
							{
							}
							else if (func_602(iVar10) && func_603(iVar10))
							{
								iVar11 = func_605(iVar10, &Var3);
								if (iVar11 != -1 && iVar11 != 0)
								{
								}
								else if (!func_172(Var3, NETWORK::_0x5659D87BE674AB17(&Var3), 1))
								{
								}
								bVar0++;
								Global_1939221->f_1433.f_1405 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}

bool func_175()
{
	return Global_1896726->f_13.f_6;
}

bool func_176(int iParam0, int iParam1)
{
	*iParam0 = Global_1896726->f_13.f_7;
	*iParam1 = Global_1896726->f_13.f_8;
	return Global_1896726->f_13.f_6;
}

int func_177()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_41.f_23))
	{
		switch (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_41.f_23))
		{
			case 1513236523:
				return 0;
			case 126620015:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

int func_178()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_99.f_23))
	{
		switch (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_99.f_23))
		{
			case 1083456181:
				return 0;
			case -299269340:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

char* func_179()
{
	return func_606(&(Global_1896726->f_13.f_10));
}

int func_180(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4)
{
	if (func_607())
	{
		return 0;
	}
	func_608();
	Global_1896726->f_13.f_37 = 1;
	Global_1896726->f_13.f_37.f_2 = uParam1;
	Global_1896726->f_13.f_37.f_1 = uParam0;
	Global_1896726->f_13.f_37.f_3 = uParam2;
	Global_1896726->f_13.f_37.f_4 = uParam3;
	Global_1896726->f_13.f_37.f_5 = { func_609(sParam4) };
	func_610(1);
	return 1;
}

int func_181(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_607())
	{
		return 0;
	}
	func_608();
	Global_1896726->f_13.f_37 = 0;
	Global_1896726->f_13.f_37.f_2 = uParam1;
	Global_1896726->f_13.f_37.f_1 = uParam0;
	Global_1896726->f_13.f_37.f_3 = uParam2;
	Global_1896726->f_13.f_37.f_4 = uParam3;
	StringCopy(&(Global_1896726->f_13.f_37.f_5), "", 64);
	func_610(1);
	return 1;
}

void func_182(int iParam0)
{
	func_611(iParam0);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_UP"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_DOWN"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_LEFT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_RIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_LEFT_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), false);
}

struct<95> func_183(bool bParam0)
{
	if (bParam0)
	{
		func_612(&(Global_1939221->f_1433.f_156.f_2));
	}
	return Global_1939221->f_1433.f_156.f_2;
}

bool func_184(var uParam0)
{
	return uParam0->f_3;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		_NAMESPACE26::_0x0A04A07BC3074EDB(iParam1);
		if (POSSE::_0xC08DFF658B2E51DA())
		{
			func_613(3);
			return 1;
		}
	}
	else
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iParam0 == iVar0)
		{
			_NAMESPACE26::_0x0A04A07BC3074EDB(iParam1);
		}
		if (POSSE::_0xC08DFF658B2E51DB(iParam0))
		{
			func_613(3);
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;

	if (Global_1896726->f_191.f_1 != 0)
	{
		return 0;
	}
	Global_1896726->f_191.f_1 = iParam0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 5:
			iVar0 = 9;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 1:
			iVar0 = 7;
			break;
	}
	func_614(30f, iVar0);
	return 1;
}

void func_187(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_576(&(Global_1180694->f_3), 32);
		func_576(&(Global_1180694->f_4), 12);
		Global_1180694->f_496 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_576(&(Global_1180694->f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1180694->f_5[5] = 0;
		func_576(Global_1180694->f_5[5], 1);
	}
	Global_1180694->f_5[3] = 0;
	func_576(Global_1180694->f_5[3], 1);
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		func_576(Global_1180694->f_5[3], 6);
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar1))
	{
		func_576(Global_1180694->f_5[3], 6);
		return;
	}
	_NAMESPACE26::_0x0A04A07BC3074EDB(iParam0);
}

bool func_188(var uParam0)
{
	return uParam0->f_4;
}

void func_189(int iParam0)
{
	func_576(&(Global_1180694->f_3), iParam0);
}

int func_190(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	struct<7> Var2;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		bVar0 = _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
		{
			if (bVar0)
			{
				_NAMESPACE26::_0x0A04A07BC3074EDB(1);
			}
			else
			{
				_NAMESPACE26::_0x0A04A07BC3074EDB(0);
			}
		}
	}
	if (Global_1180694->f_490 != -1 && &Global_1180694->f_501[Global_1180694->f_490 /*118*/] != 0)
	{
		Var2 = { func_615() };
		if (func_29((Global_1180694->f_501[Global_1180694->f_490 /*118*/])->f_19) && func_29(Var2))
		{
			bVar1 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((Global_1180694->f_501[Global_1180694->f_490 /*118*/])->f_19), &Var2);
		}
	}
	if (POSSE::_0xC08BFF658B2E51DA(0))
	{
		func_616(bVar1, bParam0);
		if (bParam1)
		{
			func_617();
		}
		return 1;
	}
	return 0;
}

void func_191()
{
	struct<8> Var0;

	func_326();
	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	func_618(&Var0);
	Global_1939221->f_1433.f_156.f_263.f_2 = func_619(&Var0, "NM_MW_POSSE_DISBAND_WARNING_HEADER", "NM_MW_POSSE_DISBAND_WARNING_SUBHEADER", 0, 0, 1);
}

int func_192(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_204(iParam0, 1))
		{
		}
		else
		{
			return 0;
		}
	}
	else if (_NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) >= _NAMESPACE26::_0x853B0FA4D8732C57(Global_1273882->f_15))
	{
		if (func_204(iParam0, 2))
		{
		}
	}
	else if (func_204(iParam0, -1))
	{
	}
	return 1;
}

int func_193(int iParam0)
{
	struct<20> Var0;
	int iVar26;

	if (Global_1275329->f_119.f_5)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!func_620(iParam0))
	{
		return 0;
	}
	if (func_621(iParam0))
	{
		return 0;
	}
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	iVar26 = 0;
	while (iVar26 <= 31)
	{
		if (&Global_1275117->f_3.f_132[iVar26 /*2*/] == 255)
		{
			func_622(&Var0, iParam0);
			Global_1275117->f_3.f_132[iVar26 /*2*/] = iParam0;
			(Global_1275117->f_3.f_132[iVar26 /*2*/])->f_1 = MISC::_GET_SYSTEM_TIME();
			return 1;
		}
		iVar26++;
	}
	return 0;
}

struct<7> func_194()
{
	return Global_1939221->f_1433.f_8;
}

int func_195(struct<7> Param0)
{
	if (!func_29(Param0))
	{
		return 0;
	}
	NETWORK::NETWORK_SHOW_PROFILE_UI(&Param0);
	return 1;
}

struct<7> func_196()
{
	return Global_1939221->f_1433.f_31;
}

int func_197(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_171(iParam0, func_50(29)) };
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		return 0;
	}
	iVar7 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		return 0;
	}
	if (!func_623(iVar7, !_NAMESPACE79::_0x0DED260A1958A82E(iVar7)))
	{
	}
	return 1;
}

bool func_198()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar2 == PLAYER::PLAYER_ID())
		{
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar1++;
			if (!_NAMESPACE79::_0x0DED260A1958A82E(iVar2))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	return iVar1 == iVar0;
}

void func_199(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar0 == PLAYER::PLAYER_ID())
		{
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			func_623(iVar0, bParam0);
		}
		iVar1++;
	}
}

int func_200()
{
	int iVar0;

	iVar0 = func_81();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, false);
		return 0;
	}
	if (!func_624(iVar0, !_NAMESPACE79::_0x0DED260A1958A82E(iVar0)))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_52, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, true);
	return 1;
}

int func_201(int iParam0, struct<7> Param1)
{
	struct<28> Var0;
	struct<7> Var118;
	bool bVar125;
	int iVar126;

	Var0.f_27 = 10;
	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		return 0;
	}
	Var118 = { func_615() };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_19), &Var118))
	{
		return 0;
	}
	if (!func_29(Param1))
	{
		return 0;
	}
	iVar126 = 0;
	while (iVar126 <= (Var0.f_26 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var0.f_27[iVar126 /*9*/], &Param1))
		{
			bVar125 = true;
		}
		else
		{
			iVar126++;
		}
	}
	if (!bVar125)
	{
		return 0;
	}
	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &Param1))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (func_381(iVar1))
	{
		if (bParam1)
		{
			Var2 = { func_538(iParam0) };
			POSSE::_0xC08AFF658B2E51DA(&iVar9);
			if (func_201(iVar9, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_NAMESPACE26::_0xCD9E2D9BC52FD80F(iParam0, iParam2);
	}
	return 1;
}

int func_203(int* iParam0)
{
	char* sVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return 0;
	}
	if (!MISC::IS_DURANGO_VERSION())
	{
		return 0;
	}
	sVar0 = "";
	NETWORK::_0x5759160AC17C13CE(iParam0, sVar0);
	return 1;
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam1 == 1)
	{
		return 0;
	}
	if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (!func_625())
	{
		func_626(iVar0);
		return 0;
	}
	if (func_627(iParam0))
	{
		return 0;
	}
	if (!func_628(iParam0))
	{
		return 0;
	}
	if (iParam1 == 2)
	{
		func_629("NG_FULL_S");
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
	{
		func_629("NG_CANT_INVITE");
		return 0;
	}
	if (!func_630())
	{
		func_629("NG_POSSE_INVITE_LIMIT");
		return 0;
	}
	if (_NAMESPACE26::_0x6102830F764B3DE1(iParam0))
	{
		func_632(func_631(-1225075647, 1047079933), 1);
		sVar1 = MISC::_CREATE_VAR_STRING(10, "NG_INVITE_SENT_POSSE", func_634(PLAYER::GET_PLAYER_NAME(iParam0), func_633(iParam0, 1, -1, 0)));
		func_635(sVar1, -2, 0, 0, 0, 1);
		func_636(iParam0);
		return 1;
	}
	func_629("NG_CANT_INVITE");
	return 0;
}

char* func_205()
{
	return func_637(Global_1939221->f_1433.f_8.f_7);
}

int func_206(int iParam0)
{
	char* sVar0;

	if (!func_638(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!CREW::_0xC685B014CE3D988B(iParam0))
	{
		return 0;
	}
	sVar0 = MISC::_CREATE_VAR_STRING(10, "NC_CREW_INVITE_SENT", func_634(PLAYER::GET_PLAYER_NAME(iParam0), func_633(iParam0, 1, -1, 0)));
	func_635(sVar0, -2, 0, 0, 0, 1);
	return 1;
}

void func_207(int* iParam0)
{
	struct<7> Var0;
	struct<11> Var22;

	if (func_639())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		func_640(0);
		return;
	}
	StringCopy(&(Var0.f_7), NETWORK::_0x5659D87BE674AB17(iParam0), 64);
	Var0 = { *iParam0 };
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_3.f_1 = -1;
	if (func_592())
	{
		func_576(&(Var22.f_10), 4);
	}
	else
	{
		func_593(&(Var22.f_10), 4);
	}
	Var22 = func_594();
	Var22.f_1 = Global_1572887->f_106.f_9;
	Var22.f_2 = func_596();
	Var22.f_3 = { func_597() };
	Var22.f_9 = func_598();
	func_641(&Var0, &Var22);
	func_642(&Var0);
	func_643(&Var22);
	func_644(1);
	func_645(0);
}

int func_208(int* iParam0)
{
	char* sVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_FRIEND(iParam0))
	{
		return 0;
	}
	sVar0 = "";
	if (!NETWORK::NETWORK_ADD_FRIEND(iParam0, sVar0))
	{
		return 0;
	}
	return 1;
}

int func_209(int* iParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_FRIEND(iParam0))
	{
		return 0;
	}
	if (!NETWORK::_0x55F618F68AB854D3(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
		{
			return 0;
		}
		if (!_NAMESPACE26::_0x0F99F6436528A089(iParam0))
		{
			return 0;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)))
		{
			return 0;
		}
	}
	uParam1->f_1 = iParam0;
	uParam1->f_3 = 0;
	*uParam1 = 1;
	uParam1->f_4 = func_381(iParam0);
	if (!func_612(uParam1))
	{
		return 0;
	}
	return 1;
}

int func_211(struct<7> Param0, int iParam7, char[4] cParam8)
{
	struct<19> Var0;

	if (iParam7 < 0 || iParam7 > 8)
	{
		return 0;
	}
	if (!func_29(Param0))
	{
		return 0;
	}
	Global_1939221->f_1433.f_1314 = iParam7;
	Global_1939221->f_1433.f_1314.f_1 = { Param0 };
	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("CM_REPORT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	func_618(&Var0);
	func_647(Var0, "CWS_REPORT", func_646(Global_1939221->f_1433.f_1314));
	return 1;
}

int func_212(var uParam0)
{
	struct<28> Var0;

	if (!*uParam0)
	{
		return 0;
	}
	if (uParam0->f_4 && uParam0->f_3)
	{
		Var0.f_27 = 10;
		if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var0))
		{
			return 0;
		}
	}
	else
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
		{
			return 0;
		}
		if (!_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1))
		{
			return 0;
		}
	}
	return 1;
}

int func_213(var uParam0)
{
	if (!func_212(uParam0))
	{
		return 0;
	}
	if (func_184(uParam0))
	{
		if (func_648(uParam0))
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
			{
				if (!func_649(uParam0->f_2, 0))
				{
					return 0;
				}
			}
			else if (!func_650(uParam0->f_2))
			{
				return 0;
			}
			else if (!func_651(uParam0->f_2))
			{
				return 0;
			}
			else
			{
				func_137();
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
		{
			return 0;
		}
		if (func_188(uParam0))
		{
			if (func_648(uParam0) && !func_652(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1)))
			{
				func_629("NM_GC_POSSE_JOIN_FAIL");
			}
		}
		else
		{
			if (!func_653())
			{
				func_629("NG_CANT_JOIN");
				return 0;
			}
			else if (!func_648(uParam0))
			{
				func_655("NG_FULL", func_654(uParam0->f_1, 1, 0), func_633(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1), 1, -1, 0));
				return 0;
			}
			func_656(uParam0->f_1);
		}
	}
	return 1;
}

int func_214(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	if (!func_653())
	{
		func_629("NG_CANT_JOIN");
		return 0;
	}
	else if (_NAMESPACE26::_0x149A2751AB66AC02(iParam0) == _NAMESPACE26::_0x853B0FA4D8732C57(iParam0))
	{
		func_655("NG_FULL", func_654(iParam0, 1, 0), 340002725);
		return 0;
	}
	if (func_381(iParam0))
	{
		func_652(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0));
	}
	else
	{
		func_656(iParam0);
	}
	return 1;
}

bool func_215()
{
	return Global_1572887->f_106.f_75 != 1;
}

void func_216(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	NETWORK::_0xC505036A35AFD01B(false);
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1) == iVar0)
	{
		uVar2 = func_657(iVar1);
		SCRIPTS::_0xD426E2E3288469D6(&uVar2, &Global_1273882);
		func_658(uVar2);
	}
	func_659("Leave context released", bParam0, 0, 0);
}

void func_217(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_660(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		func_662(func_661(iParam0));
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901929->f_718.f_1)
		{
			iVar1 = func_663(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_664(iParam1);
	func_666(1, 32, iVar0, func_665(iVar1), func_154(), iVar2, -1, 0, 0, 0);
}

int func_218()
{
	int iVar0;

	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 100);
	if (iVar0 >= 0 && iVar0 <= 20)
	{
		return 11;
	}
	else if (iVar0 <= 40)
	{
		return 10;
	}
	else if (iVar0 <= 80)
	{
		return 12;
	}
	else if (iVar0 <= 100)
	{
		return 13;
	}
	return 12;
}

void func_219()
{
	func_664(12);
	func_666(1, 32, 2, -1, func_154(), 0, -1, 0, 3, 0);
}

void func_220(bool bParam0)
{
	int iVar0;

	if (!bParam0 && Global_1954462->f_1331.f_108)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ATTRIBUTE::_0x103C2F885ABEB00B(iVar0, 0))
	{
		Global_1954462->f_1331.f_108.f_1 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 0);
	}
	else
	{
		Global_1954462->f_1331.f_108.f_1 = 0f;
	}
	if (ATTRIBUTE::_0x103C2F885ABEB00B(iVar0, 1))
	{
		Global_1954462->f_1331.f_108.f_3 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 1);
	}
	else
	{
		Global_1954462->f_1331.f_108.f_3 = 0f;
	}
	if (ATTRIBUTE::_0x103C2F885ABEB00B(iVar0, 2))
	{
		Global_1954462->f_1331.f_108.f_2 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 2);
	}
	else
	{
		Global_1954462->f_1331.f_108.f_2 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 0))
	{
		Global_1954462->f_1331.f_108.f_4 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 0);
	}
	else
	{
		Global_1954462->f_1331.f_108.f_4 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 1))
	{
		Global_1954462->f_1331.f_108.f_6 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 1);
	}
	else
	{
		Global_1954462->f_1331.f_108.f_6 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 2))
	{
		Global_1954462->f_1331.f_108.f_5 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 2);
	}
	else
	{
		Global_1954462->f_1331.f_108.f_5 = 0f;
	}
	Global_1954462->f_1331.f_108 = 1;
}

void func_221()
{
	func_667(512);
	func_668(Global_1051085);
}

void func_222()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iVar0 /*20*/])->f_5))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1183537->f_66[iVar0 /*20*/])->f_5);
		}
		if (SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iVar0 /*20*/])->f_4))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1183537->f_66[iVar0 /*20*/])->f_4);
		}
		iVar0++;
	}
}

bool func_223(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_669();
	}
	return func_670(64, iParam0);
}

void func_224(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_671(iParam0);
	if (!func_672(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_673(128) && !func_674(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_675() == 4)
	{
		func_676(17);
	}
	func_677(1024);
}

bool func_225(int iParam0)
{
	return func_18(1, iParam0);
}

void func_226()
{
	bool bVar0;
	int iVar1;

	if (func_678(255) == 4 || func_674(0))
	{
		Global_1099293->f_622 = 1;
		return;
	}
	bVar0 = func_674(35);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1099293->f_4[iVar1] = 0;
		iVar1++;
	}
	func_679(105);
	func_679(127);
	if (bVar0)
	{
		func_679(35);
	}
	Global_1099293->f_619 = 0;
	Global_1099293->f_620 = 0;
	Global_1099293->f_621 = 0;
	Global_1099293->f_622 = 0;
}

void func_227(bool bParam0, bool bParam1)
{
	if (func_678(255) == 4)
	{
		return;
	}
	if (func_680(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_676(0);
	}
	else
	{
		if (bParam1)
		{
			func_224(0, 0, 0, 1);
		}
		func_679(0);
		func_681(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_682(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_683(Global_1099293->f_516, 36);
	func_684(Global_1099293->f_555, 36);
}

int func_228()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 1;
	}
	return 0;
}

void func_229()
{
	int iVar0;

	if (Global_1180694->f_490 == -1)
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1273882->f_154[&Global_1273882]));
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		POSSE::_0xC08BFF658B2E51DA(0);
		func_616(0, 0);
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		POSSE::_0xC08BFF658B2E51DA(0);
		func_616(0, 0);
	}
	else
	{
		func_616(1, 0);
	}
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;

	if (&Global_1051089)
	{
		return;
	}
	if (!func_685(&iVar0))
	{
		func_686(iParam0, iParam1, 0);
		return;
	}
	func_687(0, iParam0, 1, iParam1, -1, 1, iVar0);
}

void func_231()
{
	int iVar0;

	if (&Global_1051089)
	{
		return;
	}
	if (!func_685(&iVar0))
	{
		func_688(1);
		return;
	}
	func_687(2, 0, 1, 0, -1, 1, iVar0);
}

int func_232(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_689(&((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_32)) };
	DATABINDING::_DATABINDING_WRITE_DATA_INT((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_37, Global_1273882->f_21 + 3);
	if (!func_567(1806374467, 1, 59806960))
	{
		return -1;
	}
	iVar4 = func_690(1806374467, "NSTM_STABLE_REVIVE_FEEDPAID", 1, 1, 0, 59806960);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (func_691(&Var0, 0, 1))
	{
		if (!func_692(Var0, 0, 0))
		{
			return -1;
		}
	}
	func_693(Var0, 0, 0);
	func_694(&Var0);
	func_695(32);
	return iVar4;
}

int func_233(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_689(&((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_32)) };
	DATABINDING::_DATABINDING_WRITE_DATA_INT((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_37, Global_1273882->f_21 + 3);
	if (!func_567(852655472, 1, 59806960))
	{
		return -1;
	}
	iVar4 = func_690(852655472, "NSTM_VEHICLE_REVIVE_FEEDPAID", 1, 1, 0, 59806960);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (func_691(&Var0, 2, 1))
	{
		if (!func_245(Var0, 2, 0))
		{
			return -1;
		}
	}
	func_693(Var0, 2, 0);
	func_695(32);
	return iVar4;
}

void func_234(bool bParam0)
{
	if (bParam0)
	{
		func_696(10, 4);
	}
	else
	{
		func_696(9, 4);
	}
}

void func_235()
{
	func_696(11, 2);
}

int func_236(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iVar0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 == PLAYER::PLAYER_PED_ID() && !bParam0)
		{
			return 0;
		}
	}
	Global_1268935->f_11.f_50 = Global_1273882->f_20;
	func_697(47);
	func_698();
	return 1;
}

void func_237(int iParam0)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_699())
	{
		return;
	}
	Var0 = { func_689(&((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_32)) };
	Var4 = { func_700() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(&Var0, &Var4))
	{
		return;
	}
	func_701(&Var0, 1);
	func_695(32);
}

void func_238(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar44;
	int iVar45;
	struct<4> Var46;
	struct<4> Var50;
	struct<4> Var54;
	bool bVar58;
	int iVar59;

	if (!func_471("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		func_475(iVar0);
		return;
	}
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!func_473(bParam0, iVar0, iVar1, 0, &Var2, 0, 0))
	{
		func_475(iVar0);
		return;
	}
	iVar44 = PLAYER::PLAYER_ID();
	iVar45 = PLAYER::_0xF49F14462F0AE27C(iVar44);
	Var46 = { func_472(0, 1, 0, -1) };
	Var50 = { Var2 };
	if (ENTITY::DOES_ENTITY_EXIST(iVar45))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar45, func_702()))
		{
			Var54 = DECORATOR::DECOR_GET_INT(iVar45, func_702());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar45, func_703()))
		{
			Var54.f_1 = DECORATOR::DECOR_GET_INT(iVar45, func_703());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar45, func_704()))
		{
			Var54.f_2 = DECORATOR::DECOR_GET_INT(iVar45, func_704());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar45, func_705()))
		{
			Var54.f_3 = DECORATOR::DECOR_GET_INT(iVar45, func_705());
		}
	}
	if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var46, &Var50))
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var54, &Var50))
		{
			bVar58 = false;
			if (ENTITY::DOES_ENTITY_EXIST(iVar45))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar45))
				{
					bVar58 = true;
				}
			}
			if (bVar58)
			{
				iVar59 = 120000;
			}
			else
			{
				iVar59 = 30000;
			}
			func_706(Var46, (Global_1273882->f_21 + (iVar59 / 1000)), 2, 0);
			func_698();
			func_234(1);
		}
		func_707(&Var50, 0);
	}
	func_475(iVar0);
}

void func_239(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	if (!func_471("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		func_475(iVar0);
		return;
	}
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!func_473(bParam0, iVar0, iVar1, 0, &Var2, 0, 0))
	{
		func_475(iVar0);
		return;
	}
	if (iParam1 == 3)
	{
		func_707(&Var2, 0);
	}
	func_709(&Var2, func_708(iParam1, 0), 0);
	func_475(iVar0);
}

void func_240(bool bParam0)
{
	if (bParam0)
	{
		func_696(13, 5);
	}
	else
	{
		func_696(12, 5);
	}
}

void func_241()
{
	func_696(14, 3);
}

void func_242(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar58;
	int iVar59;
	struct<4> Var60;
	struct<4> Var64;
	struct<4> Var68;
	struct<4> Var72;
	bool bVar76;
	int iVar77;

	Var2 = { func_489(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!func_490(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		func_475(iVar0);
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!func_473(bParam0, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		func_475(iVar0);
		return;
	}
	iVar58 = PLAYER::PLAYER_ID();
	iVar59 = PLAYER::_0xB9050A97594C8832(iVar58);
	Var60 = { func_700() };
	Var64 = { func_244(0, 0, 0, -1) };
	Var68 = { Var16 };
	Var72 = { func_710(2) };
	if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var60, &Var72))
	{
		if (func_711(&Var72) && INVENTORY::_0x4C543D5DFCD2DAFD(&Var72, &Var68))
		{
			func_712();
			func_713();
			func_475(iVar0);
			return;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID())))
	{
	}
	if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var64, &Var68))
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var72, &Var68))
		{
			bVar76 = false;
			if (ENTITY::DOES_ENTITY_EXIST(iVar59))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar59))
				{
					bVar76 = true;
				}
			}
			if (bVar76)
			{
				iVar77 = 120000;
			}
			else
			{
				iVar77 = 30000;
			}
			func_714(Var64, (Global_1273882->f_21 + (iVar77 / 1000)), 2, 2);
			func_246();
			func_240(1);
		}
		func_715(&Var68, 0);
	}
	func_716(&Var68, 2);
	func_475(iVar0);
}

void func_243(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<29> Var16;

	Var2 = { func_489(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!func_490(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		func_475(iVar0);
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!func_473(bParam0, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		func_475(iVar0);
		return;
	}
	if (iParam1 == 7)
	{
		func_715(&Var16, 0);
	}
	func_717(&Var16, func_708(iParam1, 2), 0);
	func_475(iVar0);
}

struct<4> func_244(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var24;
	bool bVar28;
	int iVar29;
	struct<4> Var30;

	Var0.f_9 = -1591664384;
	if (!func_718(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var24 = { func_719() };
		if (func_720() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var24))
		{
			Var0 = { Var24 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var24, &Var0))
		{
			func_721(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_722(PLAYER::PLAYER_ID());
	}
	bVar28 = func_723(76);
	if (bVar28)
	{
		iParam3 = 3;
	}
	iVar29 = func_724(iParam3, 2);
	if (iVar29 != 7)
	{
		if (INVENTORY::_INVENTORY_IS_GUID_VALID(Global_17173.f_54.f_61[iVar29 /*4*/]))
		{
			Var0 = { *(Global_17173.f_54.f_61[iVar29 /*4*/]) };
		}
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		if (!bParam1)
		{
			return func_700();
		}
		if (!func_725(&Var0, 0))
		{
			Var30 = { func_726(bParam0) };
		}
		else
		{
			Var30 = { Var0 };
		}
		return Var30;
	}
	return Var0;
}

int func_245(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (func_691(&Param0, 2, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var0 = { func_700() };
	iVar4 = 0;
	while (iVar4 < 16)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar4 /*7*/], &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar4 /*7*/], &Var0))
		{
		}
		else
		{
			(Global_1268935->f_513.f_125[iVar4 /*7*/])->f_5 = Global_1273882->f_21 + 120;
			*(Global_1268935->f_513.f_125[iVar4 /*7*/]) = { Param0 };
			(Global_1268935->f_513.f_125[iVar4 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_513.f_125[iVar4 /*7*/])->f_4 = iParam4;
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_246()
{
	if (func_727(8, 255))
	{
		return;
	}
	func_728(3);
}

void func_247()
{
	func_729();
}

void func_248()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 571466135;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			if (vVar1.x == 2099701247)
			{
			}
			else if (vVar1.x == -1203660660)
			{
			}
			else if (vVar1.x == -632467210)
			{
				func_133();
			}
			else if (vVar1.x == -1740156697)
			{
				func_62(_NAMESPACE73::_0x3138582E0A13BFAB(vVar1.z), joaat("COLOR_WHITE"));
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
		}
	}
}

void func_249()
{
	bool bVar0;

	func_730(Global_1273882->f_1, 0);
	func_731();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_90, (UNLOCK::_UNLOCK_IS_UNLOCKED(-1810129149) && func_732()));
	if (func_228() && (func_592() || func_733()))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_91, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_91, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_735());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_78, func_736());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_89, func_737());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_84, func_738());
	bVar0 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar0);
	func_740();
}

void func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<39> Var3;

	iVar2 = Global_1273882->f_21;
	if (Global_1939221->f_242.f_1186 <= 0)
	{
		return;
	}
	if (Global_1939221->f_242.f_1190 >= 30)
	{
		Global_1939221->f_242.f_1190 = 0;
	}
	Var3 = { *(Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/]) };
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT(Var3.f_25);
		if (iVar0 < iVar2)
		{
			func_741(DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/])->f_26));
			func_533(Var3);
		}
		switch (DATABINDING::_DATABINDING_READ_DATA_INT(Var3.f_26))
		{
			case 21:
				if (!func_742() || iVar0 < iVar2)
				{
					func_741(DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/])->f_26));
					func_533(Var3);
					iVar1 = 0;
					while (iVar1 < Global_1223462->f_8943.f_14)
					{
						if (&Global_1223462->f_8943.f_9[iVar1 /*4*/] == PLAYER::INT_TO_PLAYERINDEX(DATABINDING::_DATABINDING_READ_DATA_INT(Var3.f_27)))
						{
							(Global_1223462->f_8943.f_9[iVar1 /*4*/])->f_2 = 1;
							(Global_1223462->f_8943.f_9[iVar1 /*4*/])->f_3 = iVar0 < iVar2;
						}
						iVar1++;
					}
				}
				break;
		}
	}
	Global_1939221->f_242.f_1190++;
}

void func_251()
{
	int iVar0;

	if (Global_1939221->f_242.f_1187 <= 0)
	{
		func_62("", joaat("COLOR_WHITE"));
		return;
	}
	func_743();
	iVar0 = Global_1273882->f_21;
	if (Global_1939221->f_242.f_1189 + 1 <= iVar0)
	{
		Global_1939221->f_242.f_1189 = iVar0;
		func_62(func_430(func_744()), joaat("COLOR_WHITE"));
	}
}

void func_252()
{
	char* sVar0;

	sVar0 = UILOG::_0x2A4765812202E671();
	func_62(sVar0, joaat("COLOR_WHITE"));
}

void func_253()
{
	char* sVar0;

	sVar0 = func_421();
	func_62(sVar0, joaat("COLOR_WHITE"));
}

void func_254()
{
	struct<28> Var0;
	struct<92> Var118;
	bool bVar213;
	int iVar214;
	int iVar215;
	int iVar216;
	var uVar217[32];
	int iVar250;
	int iVar251;
	bool bVar252;
	struct<19> Var253;
	int iVar352;
	int iVar353;
	bool bVar354;
	int iVar355;
	int iVar356;
	struct<92> Var357;
	struct<95> Var452;

	func_745(13);
	if (func_295() && !func_746(13))
	{
		Var0.f_27 = 10;
		Var118.f_38 = 7;
		Var118.f_91 = -1;
		bVar213 = false;
		iVar214 = 0;
		POSSE::_0xC08AFF658B2E51DA(&iVar215);
		if (iVar215 != 0)
		{
			func_747(&Var118);
			if (func_466(iVar215, &Var118, 0))
			{
				if (func_748(bVar213, &Var118))
				{
					bVar213++;
				}
			}
		}
		iVar216 = POSSE::_0xC088FF658B2E51DA();
		iVar214 = 0;
		while (iVar214 < iVar216)
		{
			func_747(&Var118);
			if (!func_749(iVar214, &Var0))
			{
			}
			else if (Var0 == 0)
			{
			}
			else if (Var0 == iVar215)
			{
			}
			else if (!func_466(Var0, &Var118, 0))
			{
			}
			else if (!func_748(bVar213, &Var118))
			{
			}
			else
			{
				bVar213++;
			}
			iVar214++;
		}
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
		{
			if (!func_381(Global_1273882->f_15))
			{
				func_747(&Var118);
				if (func_210(Global_1273882->f_15, &Var118, 1))
				{
					if (func_748(bVar213, &Var118))
					{
						bVar213++;
					}
				}
			}
		}
		iVar250 = _NAMESPACE26::_0x53A94294FDDCF98C(&uVar217, 1);
		iVar251 = 0;
		bVar252 = false;
		Var253.f_18 = 10;
		iVar352 = 0;
		while (iVar352 < 2)
		{
			iVar214 = 0;
			while (iVar214 < iVar250)
			{
				func_747(&Var118);
				bVar252 = false;
				if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar217[iVar214])))
				{
				}
				else if (!_NAMESPACE26::_0x0F99F6436528A089(&(uVar217[iVar214])))
				{
				}
				else if (&uVar217[iVar214] == Global_1273882->f_15)
				{
				}
				else if (func_381(&(uVar217[iVar214])))
				{
					if (func_750(&(uVar217[iVar214]), &Var253))
					{
						iVar251 = 0;
						while (iVar251 < 5)
						{
							if (func_749(iVar251, &Var0))
							{
								if (Var0 == Var253)
								{
									bVar252 = true;
								}
								else
								{
									iVar251++;
								}
								if (bVar252)
								{
								}
								else if (!func_210(&(uVar217[iVar214]), &Var118, 1))
								{
								}
								else
								{
									if (func_751(&Var118))
									{
										if (iVar352 != 0)
										{
										}
										else
										{
											Jump @537; //curOff = 524
											if (iVar352 != 1)
											{
											}
											else if (!func_748(bVar213, &Var118))
											{
											}
											else
											{
												bVar213++;
											}
										}
										iVar214++;
										iVar352++;
										iVar353 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1);
										if (bVar213 <= iVar353)
										{
											bVar354 = iVar353;
											while (bVar354 >= bVar213)
											{
												DATABINDING::_0x6318FB3BE37E11B3(Global_1939221->f_1433.f_156.f_1, bVar354);
												bVar354 = (bVar354 + -1);
											}
										}
										if (!func_746(13))
										{
											if (func_35(6))
											{
												iVar355 = func_752(13);
												if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_156.f_1))
												{
													if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1) >= 1 && iVar355 < DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1))
													{
														iVar356 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_1433.f_156.f_1, iVar355);
														if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar356))
														{
															Var357.f_38 = 7;
															Var357.f_91 = -1;
															if (func_88(&iVar356, &Var357))
															{
																func_89(&Var357);
															}
														}
													}
												}
												func_36(6, 0);
											}
											Var452 = { func_753(1) };
											if (func_212(&Var452))
											{
												if (func_612(&Var452))
												{
													if (func_418() == 298326212)
													{
														func_62(func_754(&Var452), joaat("COLOR_WHITE"));
													}
													func_755(&(Global_1939221->f_1433.f_156.f_613.f_4), Var452);
													func_756(&(Global_1939221->f_1433.f_156.f_613.f_4), Var452);
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

void func_255()
{
	func_745(15);
}

void func_256()
{
	struct<95> Var0;
	struct<2> Var95;

	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_183(1) };
	if (!func_184(&Var0) && !func_757(&Var0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, joaat("back"));
	}
	if (func_308())
	{
		func_47(1);
		func_758();
		func_169();
	}
	if (func_188(&Var0) && func_184(&Var0))
	{
		func_759(&Var0);
	}
	if (!func_746(18))
	{
		Var95 = 100009;
		switch (func_42())
		{
			case 0:
				if (func_295())
				{
					func_761(&Var0);
				}
				Var95 = 100009;
				break;
			case 1:
				func_762(&(Global_1939221->f_1433.f_156.f_196.f_3), 0);
				Var95 = 100522;
				break;
		}
		Var95.f_1 = func_752(18);
		func_764(&Var95);
	}
}

void func_257()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<92> Var13;

	func_765();
	switch (func_766())
	{
		case 0:
			if (func_35(2))
			{
				return;
			}
			bVar0 = func_767();
			bVar1 = false;
			if ((_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				bVar1 = true;
			}
			else if (func_768(&(Global_1273882->f_154[&Global_1273882]), 0))
			{
				vVar2 = { func_503(&Global_1273882) };
				if (func_176(&iVar5, &iVar6))
				{
					if (vVar2.y != iVar5 || vVar2.x != func_500(iVar6))
					{
						bVar1 = true;
					}
				}
			}
			else if (func_175())
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar0 = (bVar0 + func_769());
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_10))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_10, true);
				if (bVar0 <= 0)
				{
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_7))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_7, "SHOP_FREE");
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_8, true);
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_9, false);
					}
				}
				else
				{
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_6))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_6, bVar0);
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_9, true);
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_8, false);
					}
				}
			}
			bVar7 = false;
			if (func_770() >= bVar0)
			{
				bVar7 = true;
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_11))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_11, bVar7);
			}
			bVar9 = joaat("COLOR_WHITE");
			bVar10 = func_771(func_90(), bVar0);
			bVar11 = true;
			if (func_90())
			{
				if (func_91())
				{
					if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
					{
						sVar8 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
						bVar11 = false;
					}
					else if (!NETWORK::_0x6506BFA755FB209C())
					{
						sVar8 = "NM_GC_UGC_RESTRICT";
						bVar11 = false;
					}
					else
					{
						sVar8 = "NM_GC_FOOTER_NAME_CHANGE";
						bVar11 = true;
					}
				}
				else
				{
					bVar9 = joaat("COLOR_RED");
					sVar8 = "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN";
					bVar11 = false;
				}
			}
			else
			{
				sVar8 = "NM_GC_FOOTER_NAME_CHANGE_TEMP";
				bVar11 = false;
			}
			bVar12 = true;
			if (!func_772(1, 0))
			{
				bVar12 = false;
				if (bVar1)
				{
					bVar10 = false;
				}
			}
			switch (func_418())
			{
				case -620534422:
					sVar8 = func_773(&bVar9);
					func_62(MISC::_CREATE_VAR_STRING(2, sVar8), bVar9);
					break;
				case 1930452436:
					func_62(MISC::_CREATE_VAR_STRING(2, sVar8), bVar9);
					break;
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_3))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_3, bVar11);
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_5))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_5, bVar12);
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_10))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_1, bVar10);
			}
			break;
		case 3:
			func_36(2, 1);
			func_141(joaat("back"));
			break;
		case 2:
			func_36(2, 1);
			Var13.f_38 = 7;
			Var13.f_91 = -1;
			if (func_586(&Var13, 1))
			{
				func_140(&Var13);
				func_89(&Var13);
				func_132(16);
				func_141(394524610);
			}
			else
			{
				func_141(joaat("back"));
			}
			break;
	}
}

void func_258()
{
	int iVar0;
	struct<95> Var1;
	int iVar96;
	int iVar97;

	if (func_774())
	{
		iVar0 = func_775();
		switch (func_776())
		{
			case 3:
				switch (iVar0)
				{
					case 2:
						func_338(16, 0);
						func_777(3);
						func_141(-585660575);
						break;
					case 3:
						break;
				}
				break;
			case 5:
			case 6:
				switch (iVar0)
				{
					case 2:
						func_338(16, 0);
						func_777(3);
						func_141(-585660575);
						break;
					case 3:
						break;
				}
				break;
			case 7:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 4:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	if (!func_746(16))
	{
		func_745(16);
	}
	Var1 = { func_183(1) };
	if (!func_212(&Var1))
	{
		return;
	}
	func_755(&(Global_1939221->f_1433.f_156.f_205.f_7), Var1);
	func_756(&(Global_1939221->f_1433.f_156.f_205.f_7), Var1);
	if (!func_295() || func_746(16))
	{
		return;
	}
	iVar96 = func_778();
	iVar97 = func_42();
	if ((iVar97 == iVar96 && iVar97 > -1) && iVar97 < func_779())
	{
		if (!MISC::ARE_STRINGS_EQUAL(func_780(&Var1), DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1939221->f_1433.f_156.f_205.f_4.f_1)))
		{
			func_781(&(Global_1939221->f_1433.f_156.f_205.f_4), func_780(&Var1), Global_1939221->f_1433.f_8769.f_4 > 1, 1);
		}
	}
	func_782(&Var1);
}

void func_259()
{
	func_297(22);
}

void func_260()
{
	func_297(21);
}

void func_261()
{
	int iVar0;
	struct<95> Var1;

	func_783();
	if (func_746(17))
	{
		return;
	}
	if (func_774())
	{
		iVar0 = func_775();
		switch (func_776())
		{
			case 4:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 8:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	func_784();
	Var1 = { func_183(1) };
	if (!func_212(&Var1))
	{
		func_168(0, 0);
		return;
	}
	if (func_785())
	{
		func_786();
		return;
	}
	if (!func_295())
	{
		return;
	}
	func_787(&Var1);
}

void func_262()
{
	func_297(5);
}

void func_263()
{
	vector3 vVar0;

	if (func_788() == -1 || func_788() == 52)
	{
		func_789(15);
		vVar0.x = 106805;
		vVar0.f_1 = func_752(52);
		vVar0.f_2 = 15;
		func_764(&vVar0);
	}
}

void func_264()
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	bool bVar9;
	struct<95> Var10;
	bool bVar105;
	int iVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	char cVar110[128];
	int iVar126;
	int iVar127;
	bool bVar128;
	bool bVar129;
	bool bVar130;
	bool bVar131;
	bool bVar132;

	Var0 = { func_194() };
	if (!func_29(Var0))
	{
		return;
	}
	func_730(Var0, func_205());
	iVar7 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		iVar7 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		iVar8 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar7);
	}
	bVar9 = false;
	if (func_418() == -1108319209)
	{
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar8) && _NAMESPACE26::_0x0F99F6436528A089(iVar8))
		{
			Var10.f_38 = 7;
			Var10.f_91 = -1;
			if (func_210(iVar8, &Var10, 1))
			{
				func_755(&(Global_1939221->f_1433.f_156.f_613.f_4), Var10);
				if (func_756(&(Global_1939221->f_1433.f_156.f_613.f_4), Var10))
				{
					bVar9 = true;
				}
			}
		}
	}
	func_791(&(Global_1939221->f_1433.f_156.f_613.f_4), bVar9);
	if (func_792() == 0)
	{
		if (Global_1939221->f_1433.f_7964)
		{
			func_794(func_793(&(Global_1939221->f_1433.f_7967), &(Global_1939221->f_1433.f_8), &(Global_1939221->f_1433.f_8.f_7)));
			func_795(NETWORK::GET_CLOUD_TIME_AS_INT());
			func_796(1);
			func_47(1);
		}
	}
	if (func_792() == 1)
	{
		if (Global_1901929->f_718 != 0)
		{
			if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_797())) >= Global_1901929->f_718)
			{
				func_796(2);
			}
		}
	}
	if (func_792() == 2)
	{
		if (func_798(Var0))
		{
			func_796(0);
		}
		else
		{
			func_795(NETWORK::GET_CLOUD_TIME_AS_INT());
			func_796(1);
		}
	}
	bVar105 = func_799() == true;
	if (!func_295())
	{
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		func_542(&iVar106, 1);
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &Var0))
	{
		func_542(&iVar106, 16);
	}
	if (((func_451() || func_800()) || func_802(func_801(0)) == 6) || func_541(Global_1130954->f_137.f_1, 2))
	{
		func_542(&iVar106, 64);
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		if (_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
		{
			func_542(&iVar106, 2);
			if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15) == PLAYER::PLAYER_ID())
			{
				func_542(&iVar106, 4);
			}
			if (func_541(iVar106, 1))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar7))
				{
					func_542(&iVar106, 32);
				}
			}
		}
	}
	if (!func_541(iVar106, 32))
	{
		if ((Global_1180694->f_490 != -1 && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((Global_1180694->f_501[Global_1180694->f_490 /*118*/])->f_19), &(Global_1273882->f_1))) && func_803(&Var0))
		{
			func_542(&iVar106, 32);
		}
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		func_542(&iVar106, 8);
	}
	if (((!func_541(iVar106, 16) && func_541(iVar106, 32)) && func_541(iVar106, 4)) && !func_541(iVar106, 64))
	{
		func_542(&iVar106, 128);
	}
	if ((!func_541(iVar106, 16) && func_541(iVar106, 32)) && func_541(iVar106, 4))
	{
		func_542(&iVar106, 512);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_8.f_2, ((func_541(iVar106, 4) && !func_541(iVar106, 16)) && func_541(iVar106, 32)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_8.f_1, (((func_541(iVar106, 4) && !func_541(iVar106, 16)) && func_541(iVar106, 32)) && !((func_541(iVar106, 64) || func_804()) || func_805())));
	bVar107 = NETWORK::_0x9C725D149622BFDE(7);
	bVar108 = NETWORK::NETWORK_IS_FRIEND(&Var0);
	bVar109 = true;
	if (bVar108 && bVar107)
	{
		bVar109 = NETWORK::_0xE348D1404BD80146(&Var0);
	}
	else if (bVar108)
	{
		bVar109 = NETWORK::_0x665161D250850A9F(&Var0);
	}
	StringCopy(&cVar110, "", 128);
	iVar126 = func_806(&Var0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_11.f_1, (iVar126 == 5 && bVar109));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_11.f_2, ((!func_541(iVar106, 16) && !func_541(iVar106, 32)) && func_541(iVar106, 4)));
	if (func_418() == 442978665)
	{
		func_807(iVar126, &cVar110);
		func_62(&cVar110, joaat("COLOR_WHITE"));
	}
	iVar127 = func_808(&Var0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_14.f_2, !func_541(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_14.f_1, (iVar127 == 0 && bVar109));
	if (func_418() == -999900281)
	{
		StringCopy(&cVar110, func_437(), 128);
		func_62(&cVar110, joaat("COLOR_WHITE"));
	}
	bVar128 = func_228();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_17.f_2, !func_541(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_17.f_1, (((!func_541(iVar106, 8) && bVar105) && bVar128) && !func_809()));
	if (func_418() == -281834246)
	{
		StringCopy(&cVar110, func_438(), 128);
		func_62(&cVar110, joaat("COLOR_WHITE"));
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_4174.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_20.f_1, func_541(iVar106, 1));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_20.f_1, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_23.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_23.f_1, func_541(iVar106, 1));
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar8) && _NAMESPACE26::_0x0F99F6436528A089(iVar8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_26.f_1, (func_541(iVar106, 1) && !func_541(iVar106, 64)));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_26.f_1, false);
	}
	if (func_810())
	{
		NETWORK::_0x1F51F367B710A832();
	}
	bVar129 = false;
	if (MISC::_IS_STADIA_VERSION())
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var0) && !func_541(iVar106, 16))
		{
			bVar129 = true;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_44.f_2, bVar129);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_44.f_1, true);
	bVar130 = false;
	if (!NETWORK::NETWORK_IS_FRIEND(&Var0) && !func_541(iVar106, 16))
	{
		bVar130 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_29.f_2, bVar130);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_29.f_1, NETWORK::_0x99ABE9BF9DADA162(&Var0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_32.f_2, !func_541(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_32.f_1, func_811(iVar7));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_38.f_2, !func_541(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_38.f_1, true);
	if (MISC::IS_DURANGO_VERSION())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_35.f_2, !func_541(iVar106, 16));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_35.f_1, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_35.f_2, false);
	}
	bVar131 = NETWORK::_0x9C725D149622BFDE(0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_41.f_2, bVar131);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_41.f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_47.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_47.f_1, false);
	bVar132 = _NAMESPACE79::_0x356135B9B10A2A82(&Var0);
	if (bVar132)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_47.f_3, MISC::_CREATE_VAR_STRING(2, "IB_VOICE_CHAT_CHANNEL_PRIVATE"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_47.f_3, MISC::_CREATE_VAR_STRING(2, "IB_VOICE_CHAT_CHANNEL_PUBLIC"));
	}
	if ((func_541(iVar106, 1) && func_541(iVar106, 8)) && !func_541(iVar106, 16))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_52, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, true);
		if (_NAMESPACE79::_0x0DED260A1958A82E(iVar7))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1405.f_51, 979712174);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1405.f_51, 830040270);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_52, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, false);
	}
}

void func_265()
{
	int iVar0;

	if (Global_1939221->f_1433.f_6264.f_4)
	{
		iVar0 = Global_1939221->f_1433.f_6264;
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1939221->f_1433.f_6264.f_5)
			{
				func_812(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar0 /*7*/]);
			}
			else
			{
				func_813(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar0 /*7*/]);
			}
			Global_1939221->f_1433.f_6264.f_4 = 0;
		}
	}
}

void func_266()
{
	switch (Global_1939221->f_1433.f_1314.f_9)
	{
		case 0:
			if (func_814())
			{
				switch (func_815())
				{
					case 2074623703:
						if (!func_816(&(Global_1939221->f_1433.f_1314.f_1), Global_1939221->f_1433.f_1314))
						{
						}
						Global_1939221->f_1433.f_1314.f_8 = Global_1939221->f_1433.f_7961;
						Global_1939221->f_1433.f_1314.f_9 = 1;
						break;
					case 1400745903:
						func_10();
						break;
				}
			}
			break;
		case 1:
			if (_NAMESPACE76::_0x07954320D77F6A3D(Global_1939221->f_1433.f_1314.f_8) == 5)
			{
				return;
			}
			Global_1939221->f_1433.f_1314.f_9 = 2;
			break;
		case 2:
			Global_1939221->f_1433.f_1314.f_8 = 0;
			func_817();
			Global_1939221->f_1433.f_1314.f_9 = 3;
			break;
		case 3:
			if (func_814())
			{
				switch (func_815())
				{
					case 2074623703:
						_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_1314.f_8);
						Global_1939221->f_1433.f_1314.f_8 = 0;
						func_10();
						Global_1939221->f_1433.f_1314.f_9 = 0;
						func_137();
						break;
				}
			}
			break;
	}
}

void func_267()
{
	int iVar0;
	int iVar1;

	if (func_592() || func_733())
	{
		func_818(0);
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_INDEX();
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
		if ((iVar1 != 0 && _NAMESPACE26::_0x0F99F6436528A089(iVar1)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
		{
			func_818(0);
		}
		else
		{
			func_818(1);
		}
	}
}

void func_268()
{
}

void func_269()
{
	bool bVar0;
	bool bVar1;

	func_92();
	func_93();
	bVar0 = func_126();
	if (bVar0)
	{
		func_128(1);
	}
	else
	{
		func_128(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_21, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_22, bVar0);
	bVar1 = func_819();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_566, bVar1);
	if (func_418() == -409501472)
	{
		if (func_451())
		{
			func_62(MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), joaat("COLOR_WHITE"));
		}
		else
		{
			func_62(func_820(bVar1), joaat("COLOR_WHITE"));
		}
	}
}

void func_270()
{
	func_821();
	func_95();
	func_822();
}

void func_271()
{
	bool bVar0;

	bVar0 = func_126();
	if (bVar0)
	{
		func_128(2);
	}
	else
	{
		func_128(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_21, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_22, bVar0);
}

void func_272()
{
	func_821();
	func_97(3);
	func_822();
}

void func_273()
{
	func_821();
	func_97(0);
	func_822();
}

void func_274()
{
	func_821();
	func_97(1);
	func_822();
}

void func_275()
{
	func_821();
	func_97(2);
	func_822();
}

void func_276()
{
	bool bVar0;
	bool bVar1;

	func_94();
	bVar0 = func_129();
	if (bVar0)
	{
		func_131(1);
	}
	else
	{
		func_131(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_22, bVar0);
	bVar1 = func_823();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_436, bVar1);
	if (func_418() == 496174085)
	{
		if (func_451())
		{
			func_62(MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), joaat("COLOR_WHITE"));
		}
		else
		{
			func_62(func_824(bVar1), joaat("COLOR_WHITE"));
		}
	}
}

void func_277()
{
	func_825();
	func_98();
	func_826();
}

void func_278()
{
	bool bVar0;

	bVar0 = func_129();
	if (bVar0)
	{
		func_131(2);
	}
	else
	{
		func_131(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_22, bVar0);
}

void func_279()
{
	func_825();
	func_100(3);
	func_826();
}

void func_280()
{
	func_825();
	func_100(0);
	func_826();
}

void func_281()
{
	func_825();
	func_100(1);
	func_826();
}

void func_282()
{
	func_825();
	func_100(2);
	func_826();
}

void func_283()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	bVar0 = false;
	bVar1 = false;
	iVar2 = PLAYER::PLAYER_ID();
	bVar3 = (func_228() && func_768(iVar2, 0));
	bVar4 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar2);
	bVar0 = (bVar3 && bVar4);
	bVar1 = bVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_2, (((bVar4 && !func_541(Global_1129497->f_8, 1)) && (Global_1124870->f_1891 < 6 || Global_1124870->f_1891 > 12)) && !func_827()));
	if (func_228())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_3, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_3, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_5, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_4, bVar1);
	bVar5 = ((bVar3 && bVar4) && UNLOCK::_UNLOCK_IS_UNLOCKED(-212568391));
	iVar6 = func_828(_NAMESPACE26::_0x901E0DC25080C8B9(iVar2));
	if (func_829(4) && func_70(iVar6))
	{
		func_414(4);
	}
	if (func_829(8) && !func_70(iVar6))
	{
		func_414(8);
	}
	if ((func_70(iVar6) && !func_829(8)) || func_829(4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_6.f_24, false);
		if (!func_71(iVar6) || func_829(8))
		{
			bVar5 = false;
		}
	}
	else if ((!func_70(iVar6) && !func_829(4)) || func_829(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_6.f_24, true);
		if (!func_73(iVar6) || func_829(4))
		{
			bVar5 = false;
		}
	}
	if (func_418() == 921074654)
	{
		func_62(func_443(), joaat("COLOR_WHITE"));
	}
	if (func_418() == 2087912236)
	{
		func_62(func_830(), joaat("COLOR_WHITE"));
	}
	func_831(&(Global_1939221->f_1433.f_2628.f_6), bVar5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_1, func_768(&(Global_1273882->f_154[&Global_1273882]), 0));
}

void func_284()
{
	struct<2> Var0;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;

	if (func_308())
	{
		func_832();
		func_47(1);
	}
	if (!func_295())
	{
		return;
	}
	Var0.f_1 = 13;
	iVar15 = func_104();
	bVar17 = false;
	iVar19 = func_833();
	switch (iVar19)
	{
		case 0:
			if (!func_834(&Var0))
			{
				func_832();
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				bVar16 = &Var0.f_1[iVar18];
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_835(bVar17, bVar16);
				}
				func_837(bVar17, bVar16, iVar15, func_156(iVar15, bVar16), func_836(iVar15, bVar16));
				bVar17++;
				iVar18++;
			}
			break;
		case 1:
			if (!func_838(&Var0))
			{
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_832();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				bVar16 = &Var0.f_1[iVar18];
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_835(bVar17, bVar16);
				}
				func_837(bVar17, bVar16, iVar15, func_156(iVar15, bVar16), func_836(iVar15, bVar16));
				bVar17++;
				iVar18++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iVar19)
			{
				case 2:
					iVar20 = 0;
					break;
				case 3:
					iVar20 = 1;
					break;
				case 6:
					iVar20 = 4;
					break;
				case 5:
					iVar20 = 3;
					break;
				case 4:
					iVar20 = 2;
					break;
			}
			if (!func_839(iVar20, Global_1273882->f_17, &Var0))
			{
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_832();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				bVar16 = &Var0.f_1[iVar18];
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_835(bVar17, bVar16);
				}
				func_837(bVar17, bVar16, iVar15, func_156(iVar15, bVar16), func_836(iVar15, bVar16));
				bVar17++;
				iVar18++;
			}
			break;
	}
	bVar21 = bVar17;
	while (bVar21 <= (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42) - 1))
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1939221->f_1433.f_2628.f_42, bVar21);
		bVar21++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_44, func_770() >= DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_2628.f_43));
}

void func_285()
{
	if (!func_295())
	{
		return;
	}
	func_840(((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_1);
}

void func_286()
{
	bool bVar0;

	bVar0 = false;
	if (func_157())
	{
		bVar0 = func_90();
	}
	else
	{
		bVar0 = func_381(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_36, func_841(-1896177107, bVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_37, func_841(2042309940, bVar0));
}

void func_287()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<25> Var3;
	struct<25> Var28;
	float fVar53;

	Var3 = -1;
	Var3.f_1 = 1;
	Var3.f_1.f_1 = 1;
	Var3.f_1.f_2 = joaat("COLOR_WHITE");
	Var3.f_1.f_4 = -1;
	Var3.f_1.f_5 = -1;
	Var3.f_1.f_6 = -1;
	Var3.f_1.f_10 = -1;
	Var3.f_1.f_11 = -1;
	Var3.f_1.f_12 = -1;
	Var3.f_1.f_18 = joaat("COLOR_WHITE");
	Var3.f_1.f_19 = joaat("COLOR_WHITE");
	Var3.f_1.f_22 = 100;
	Var3.f_1.f_23 = 50;
	Var28 = -1;
	Var28.f_1 = 1;
	Var28.f_1.f_1 = 1;
	Var28.f_1.f_2 = joaat("COLOR_WHITE");
	Var28.f_1.f_4 = -1;
	Var28.f_1.f_5 = -1;
	Var28.f_1.f_6 = -1;
	Var28.f_1.f_10 = -1;
	Var28.f_1.f_11 = -1;
	Var28.f_1.f_12 = -1;
	Var28.f_1.f_18 = joaat("COLOR_WHITE");
	Var28.f_1.f_19 = joaat("COLOR_WHITE");
	Var28.f_1.f_22 = 100;
	Var28.f_1.f_23 = 50;
	Var3 = { Var28 };
	if (&Global_1939221->f_1433.f_3305.f_4[bVar0 /*27*/] == Global_1939221->f_1433.f_3305.f_3)
	{
	}
	if (iVar1 >= Global_1939221->f_1433.f_3305.f_2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_1433.f_3305.f_1, bVar0, "pm_dynamic_large_image_and_stacked_text_with_fill", &(Global_1939221->f_1433.f_3305.f_4[bVar0 /*27*/]));
	}
	Var3.f_1.f_23 = BUILTIN::FLOOR((IntToFloat(Var3.f_1.f_22) * fVar53));
	Var3.f_1.f_18 = joaat("COLOR_RED");
	Var3.f_1.f_5 = -1231195292;
	Var3.f_1.f_4 = 1433015236;
	Var3.f_1.f_20 = joaat("hud_textures");
	Var3.f_1.f_21 = -1102349958;
	func_842(Global_1939221->f_1433.f_3305.f_4[bVar0 /*27*/], Var3);
	iVar1++;
	bVar2 = iVar1;
	while (bVar2 <= (Global_1939221->f_1433.f_3305.f_2 - 1))
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1939221->f_1433.f_3305.f_1, bVar2);
		bVar2++;
	}
	Global_1939221->f_1433.f_3305.f_2 = iVar1;
}

void func_288()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	func_843();
	func_844();
	bVar1 = false;
	if (Global_1102098->f_935.f_26 != -1 && (&Global_1102098->f_935.f_5[Global_1102098->f_935.f_26] - Global_1273882->f_21) < 180)
	{
		func_62(func_456(Global_1102098->f_935.f_26), joaat("COLOR_WHITE"));
		Global_1102098->f_935.f_17 = 1;
		Global_1102098->f_935.f_28 = Global_1102098->f_935.f_26;
	}
	else if ((Global_1102098->f_935.f_17 && Global_1102098->f_935.f_28 == Global_1102098->f_935.f_26) && Global_1102098->f_935.f_28 != -1)
	{
		func_62(func_456(Global_1102098->f_935.f_26), joaat("COLOR_WHITE"));
		Global_1102098->f_935.f_17 = 0;
	}
	else
	{
		Global_1102098->f_935.f_28 = -1;
		Global_1102098->f_935.f_17 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		bVar1 = func_845(iVar2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_156.f_356.f_2[iVar0 /*21*/])->f_1, bVar1);
		iVar0++;
	}
}

void func_289()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;
	struct<2> Var53;
	int iVar56;
	var uVar57;
	int iVar58;
	vector3 vVar65;
	vector3 vVar68;
	var uVar71[2];
	int iVar74;

	if (!func_845(4))
	{
		func_141(joaat("back"));
	}
	func_844();
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		return;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		return;
	}
	if (func_295())
	{
		iVar50 = _NAMESPACE26::_0xD1BF325C8252A982(Global_1273882->f_15, &Var0);
		iVar56 = 0;
		iVar56 = 0;
		while (iVar56 < 7)
		{
			if (!func_846(iVar56, &Var53))
			{
			}
			else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, Var53.f_1))
			{
				func_847(iVar56);
			}
			iVar56++;
		}
		iVar51 = 0;
		while (iVar51 < iVar50)
		{
			if (!func_29(*(Var0[iVar51 /*7*/])))
			{
			}
			else
			{
				iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar51 /*7*/]);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar52))
				{
				}
				else if (!func_848(iVar52))
				{
					uVar57 = func_849();
					if (!func_850(iVar52, uVar57))
					{
					}
				}
			}
			iVar51++;
		}
		func_758();
		iVar56 = 0;
		while (iVar56 < 7)
		{
			if (!func_846(iVar56, &Var53))
			{
			}
			else
			{
				NETWORK::NETWORK_HANDLE_FROM_PLAYER(Var53.f_1, &iVar58);
				if (!func_851(&iVar58, PLAYER::GET_PLAYER_NAME(Var53.f_1), 0, 4))
				{
				}
			}
			iVar56++;
		}
	}
	vVar65.x = 115862;
	vVar65.f_2 = 4;
	vVar65.f_1 = func_752(20);
	func_764(&vVar65);
	if (func_295())
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_1, true);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197))
		{
			func_853(func_76(), &vVar68);
			iVar74 = 0;
			while (iVar74 < 2)
			{
				uVar71[iVar74] = func_854(iVar74);
				iVar74++;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, &uVar71[vVar68.z] > 1);
		}
	}
}

void func_290()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	func_855();
	if (!func_856())
	{
		bVar0 = false;
	}
	else if (func_857(255))
	{
		bVar0 = false;
	}
	else if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		bVar0 = false;
	}
	else if (func_809())
	{
		bVar0 = false;
	}
	else if (func_858())
	{
		bVar0 = false;
	}
	switch (func_418())
	{
		case 746698552:
			if (bVar0 != func_859())
			{
				func_62(func_450(), joaat("COLOR_WHITE"));
			}
			break;
		case -1594107850:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1744263063);
			break;
	}
	func_860(bVar0);
	func_861(!(func_800() || func_592()));
	bVar2 = true;
	if (!_NAMESPACE79::_0xCCF71FCFA0070B1A())
	{
		bVar2 = false;
	}
	else if (func_451())
	{
		bVar2 = false;
	}
	func_862(bVar2);
	func_863();
	func_864();
	func_865();
}

void func_291()
{
	int iVar0;

	iVar0 = func_135();
	if (func_866(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_7, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_7, false);
	}
	if (func_867(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_9, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_9, false);
	}
	func_868();
}

void func_292()
{
	func_868();
}

void func_293()
{
	bool bVar0;
	bool bVar1;

	bVar0 = (func_138(8192) && !func_138(16384));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_10, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_11, true);
	bVar1 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_869());
	func_870();
	func_868();
}

void func_294(bool bParam0)
{
	if (!bParam0)
	{
		if (func_308())
		{
			func_47(1);
		}
		if (!func_295())
		{
			return;
		}
	}
	func_871();
	func_512(0);
	func_872();
}

bool func_295()
{
	return func_873(1);
}

void func_296()
{
	func_874(-165442446, 1);
	func_874(-1536030095, func_426() == 0);
}

void func_297(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<7> Var12[32];
	struct<29> Var237;
	int iVar321;

	iVar3 = func_173();
	iVar4 = func_875();
	switch (iParam0)
	{
		case 5:
		case default:
			iVar5 = 0;
			iVar6 = 1;
			iVar7 = 2;
			iVar8 = 3;
			vVar0.x = 117711;
			break;
		case 21:
			iVar6 = 12;
			iVar7 = 13;
			iVar8 = 14;
			vVar0.x = 118023;
			break;
		case 22:
			iVar5 = 7;
			iVar6 = 8;
			iVar7 = 9;
			iVar8 = 10;
			vVar0.x = 118269;
			break;
		case 56:
			iVar5 = 11;
			vVar0.x = 118603;
			break;
	}
	if (func_308())
	{
		func_47(1);
		if (iVar4 == 2 && iVar3 != 2)
		{
			func_880();
		}
		switch (iVar3)
		{
			case 0:
				func_881();
				break;
			case 1:
			case 3:
				func_881();
				func_758();
				func_169();
				break;
		}
		if (func_35(4))
		{
			func_36(4, 0);
		}
		else
		{
			func_882(0);
			func_325(0);
		}
	}
	func_883(iVar7, iVar3 == 2);
	if (func_788() == -1 || func_788() == iParam0)
	{
		switch (iVar3)
		{
			case 0:
				if (func_295())
				{
					func_884(iVar5);
				}
				break;
			case 1:
				func_885(iVar6);
				break;
			case 3:
				if (func_295())
				{
					func_886(iVar8);
				}
				break;
		}
		iVar11 = func_887();
		Var237.f_27 = -1;
		Var237.f_28 = -1;
		iVar321 = func_601();
		if (func_602(iVar321) && func_603(iVar321))
		{
			if (!MINIGAME::_0xBEA7D3CB47E1479C())
			{
				iVar9 = 0;
				while (iVar9 < iVar11)
				{
					if (!func_888(iVar9, &Var237))
					{
					}
					else if (iVar10 < 32)
					{
						*(Var12[iVar10 /*7*/]) = { Var237.f_1 };
						iVar10++;
					}
					iVar9++;
				}
				func_889(iVar321, &Var12, iVar10);
			}
		}
		vVar0.f_1 = func_752(iParam0);
		switch (iVar3)
		{
			case 0:
				vVar0.f_2 = iVar5;
				break;
			case 1:
				vVar0.f_2 = iVar6;
				break;
			case 3:
				vVar0.f_2 = iVar8;
				break;
			case 2:
				vVar0.f_2 = iVar7;
				break;
		}
		func_764(&vVar0);
	}
}

void func_298()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_92, func_428() == 0);
}

void func_299()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_890())
	{
		if (func_891() == 0 || MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_892())) > func_891())
		{
			func_120();
		}
	}
	bVar0 = false;
	iVar1 = &Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/];
	if (iVar1 == -1)
	{
		bVar0 = true;
	}
	else
	{
		iVar2 = func_39(UIAPPS::_0x96FD694FE5BE55DC(1433015236));
		bVar0 = iVar2 == iVar1;
	}
	if (Global_1939221->f_1433.f_8769.f_241)
	{
		Global_1939221->f_1433.f_8769.f_241 = 0;
	}
	if (Global_1939221->f_1433.f_8769.f_240 && !Global_1939221->f_1433.f_8769.f_239)
	{
		func_336(0);
		func_893("", 0);
	}
	Global_1939221->f_1433.f_8769.f_240 = 0;
	if (Global_1939221->f_1433.f_8769.f_236)
	{
		Global_1939221->f_1433.f_8769.f_236 = 0;
	}
	if (Global_1939221->f_1433.f_8769.f_4 <= 1)
	{
		return;
	}
	if (!bVar0)
	{
		return;
	}
	if (func_890())
	{
		return;
	}
	if (!func_894())
	{
		iVar3 = 0;
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_RIGHT")))
		{
			func_895("Bumper_Right", "HUD_PLAYER_MENU", 1);
			iVar3++;
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_LEFT")))
		{
			func_895("Bumper_Left", "HUD_PLAYER_MENU", 1);
			iVar3 = (iVar3 - 1);
		}
		if (iVar3 == 0)
		{
			return;
		}
		Global_1939221->f_1433.f_8769.f_244 = (Global_1939221->f_1433.f_8769 + iVar3);
		if (Global_1939221->f_1433.f_8769.f_244 < 0)
		{
			Global_1939221->f_1433.f_8769.f_244 = (Global_1939221->f_1433.f_8769.f_4 - 1);
		}
		else if (Global_1939221->f_1433.f_8769.f_244 > (Global_1939221->f_1433.f_8769.f_4 - 1))
		{
			Global_1939221->f_1433.f_8769.f_244 = 0;
		}
		if (func_896(Global_1939221->f_1433.f_8769.f_244))
		{
			func_614(7f, 0);
			func_362(1);
			return;
		}
	}
	else
	{
		switch (func_897())
		{
			case 0:
				if (!func_898())
				{
					func_899();
				}
				break;
			case 2:
				Global_1939221->f_1433.f_8769.f_244 = 0;
				func_362(0);
				return;
		}
		if (func_898())
		{
			func_362(0);
			func_16();
		}
		else
		{
			return;
		}
	}
	if (!func_900(Global_1939221->f_1433.f_8769.f_244, 1))
	{
	}
}

bool func_300()
{
	return Global_1939221->f_1433.f_8769.f_238;
}

void func_301()
{
	switch ((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2)
	{
		case -303450633:
			func_132(13);
			break;
		case 394524610:
			if (Global_1939221->f_1433 == 13)
			{
				func_139();
			}
			func_132(16);
			break;
	}
}

bool func_302()
{
	return Global_1939221->f_1433.f_8769.f_239;
}

void func_303()
{
	bool bVar0;

	bVar0 = false;
	switch ((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2)
	{
		case -303450633:
			func_781(&(Global_1939221->f_1433.f_156.f_193), func_606(&((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_3)), Global_1939221->f_1433.f_8769.f_4 > 1, (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_19);
			bVar0 = true;
			break;
		case 394524610:
			func_781(&(Global_1939221->f_1433.f_156.f_205.f_4), func_606(&((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_3)), Global_1939221->f_1433.f_8769.f_4 > 1, (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_19);
			bVar0 = true;
			break;
	}
	if (!bVar0)
	{
		func_893(func_606(&((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_3)), (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_19);
	}
}

void func_304()
{
	int iVar0;

	if (func_901() == 0)
	{
		Global_1896726->f_3085.f_1 = 0;
		if (!CREW::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			return;
		}
		if (!CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(Global_1273882->f_1)))
		{
			return;
		}
		if (!CREW::_0x58D378AF2C8765B7(&iVar0))
		{
			return;
		}
		Global_1896726->f_3085.f_1 = 1;
		if (func_902() != iVar0)
		{
			func_903(iVar0);
		}
		if (func_904() == 0 || func_904() != func_902())
		{
			Global_1896726->f_3085.f_6 = 0;
			func_880();
			func_905();
		}
		if (func_906() < 5000)
		{
			return;
		}
		if (!Global_1896726->f_3085.f_4)
		{
			return;
		}
		NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
		func_907(iVar0);
		func_908(1);
	}
	if (func_901() == 1)
	{
		if (NETWORK::NETWORK_IS_FINDING_GAMERS())
		{
			func_908(2);
		}
		else if (CREW::_0xE532D6811B3A4D2A(0))
		{
			func_908(2);
		}
		else
		{
			func_908(1);
		}
	}
	if (func_901() == 2)
	{
		if (NETWORK::_0x0E54D4DA6018FF8E() && NETWORK::_0xF9B83B77929D8863())
		{
			func_909();
			func_910();
			Global_1896726->f_3085.f_6 = NETWORK::_0x7BCA0A3972708436(&(Global_1896726->f_3085.f_7), 482);
			NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
			if (Global_1896726->f_3085.f_6 == 0)
			{
				func_908(0);
			}
			if (Global_1896726->f_3085.f_6 >= 32)
			{
				Global_1896726->f_3085.f_6 = 31;
			}
			func_908(0);
		}
		else if (!NETWORK::NETWORK_IS_FINDING_GAMERS())
		{
			func_908(1);
		}
	}
}

void func_305()
{
	if (func_873(1))
	{
		func_361(1, 0);
	}
	if (func_873(0))
	{
		func_361(0, 0);
		func_361(1, 1);
		Global_1896726->f_194.f_2 = 0f;
	}
	if (Global_1896726->f_194.f_1 > 0f)
	{
		Global_1896726->f_194.f_2 = (Global_1896726->f_194.f_2 + MISC::GET_FRAME_TIME());
		if (Global_1896726->f_194.f_2 >= Global_1896726->f_194.f_1)
		{
			func_361(1, 1);
			Global_1896726->f_194.f_2 = 0f;
		}
	}
}

void func_306()
{
	bool bVar0;

	switch (func_911())
	{
		case 0:
			if (func_774())
			{
				func_912(1);
				func_913(1);
			}
			break;
		case 1:
			switch (func_897())
			{
				case 0:
					func_913(3);
					break;
				case 2:
					func_912(3);
					func_913(2);
					break;
			}
			switch (func_776())
			{
				case 5:
				case 6:
					if (func_914())
					{
						if (func_915(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
				case 7:
					if (func_916())
					{
						if (func_917(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
				case 8:
					if (func_918())
					{
						if (func_919(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
				case 3:
					if (func_920())
					{
						if (func_921(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
				case 4:
					if (func_922())
					{
						if (func_923(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
				case 2:
					if (func_924())
					{
						if (func_925(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
				case 1:
					if (func_926())
					{
						if (func_927(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							func_913(2);
						}
					}
					break;
			}
			break;
		case 2:
			func_47(1);
			func_912(0);
			func_913(3);
			break;
		case 3:
			func_16();
			func_928();
			func_912(0);
			func_913(0);
			break;
	}
}

void func_307()
{
	if (func_929() == -1)
	{
		if (!func_35(0))
		{
			return;
		}
		func_930(0);
	}
	if (func_929() == 0)
	{
		func_931(&(Global_1896726->f_6.f_2));
		func_930(1);
	}
	if (func_929() == 1)
	{
		func_182(Global_1896726->f_6.f_1);
		if (!func_35(0))
		{
			func_930(3);
			return;
		}
		if (Global_1896726->f_6.f_5 != -1f)
		{
			if (!func_932(&(Global_1896726->f_6.f_2)))
			{
				func_933(&(Global_1896726->f_6.f_2), 0);
			}
			if (func_934(&(Global_1896726->f_6.f_2)) >= Global_1896726->f_6.f_5)
			{
				func_930(2);
				return;
			}
		}
	}
	if (func_929() == 2)
	{
		func_935(2);
		func_930(3);
		return;
	}
	if (func_929() == 3)
	{
		func_930(-1);
		func_931(&(Global_1896726->f_6.f_2));
		func_936(0);
		func_935(0);
		func_36(0, 0);
	}
}

bool func_308()
{
	return Global_1939221->f_1433.f_8769.f_236;
}

struct<16> func_309(char* sParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

int func_310(bool bParam0, bool bParam1)
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;

	if (func_937())
	{
		return &(Global_1131373->f_5525.f_34[bParam0 /*3*/]);
	}
	uVar0 = func_938(bParam0);
	Var1 = { func_939(bParam1) };
	bVar5 = func_940(Var1, uVar0, 0, bParam1);
	if (!func_941(bVar5))
	{
		return 0;
	}
	return func_942(bVar5);
}

int func_311(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_943())
	{
		return 0;
	}
	return func_944(iParam0, uParam1, iParam2, iParam3);
}

void func_312(var uParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_945(&Var0);
	*uParam0 = { Var0 };
}

void func_313(bool bParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bool bVar0;

	bVar0 = func_946(bParam0);
	if (func_937())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_947(uParam1, &Param2);
		return;
	}
	func_947(uParam1, &Param2);
	if (bVar0)
	{
		func_948(&((Global_1131373->f_5351.f_36[bParam0 /*3*/])->f_2), 1);
	}
	else
	{
		func_949(&((Global_1131373->f_5351.f_36[bParam0 /*3*/])->f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_950()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_950()) && func_951(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_950()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_950()) && func_951(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_953(func_952(bParam0)));
}

bool func_314(bool bParam0)
{
	return Global_1939221->f_1433.f_4174.f_2086 == bParam0;
}

void func_315(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, bool bParam35)
{
	func_954(bParam35, &uParam1);
	func_947(uParam0, &uParam1);
}

bool func_316()
{
	return !Global_1572887->f_9;
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_318(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_319(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_320(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_321()
{
	func_729();
}

void func_322()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_100, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_97, false);
}

void func_323()
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_34, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_35, false);
}

void func_324()
{
	switch (Global_1939221->f_1433.f_828.f_1)
	{
		case 2:
			NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
			break;
		case 3:
			NETWORK::_0x49CF17A564918E8D();
			break;
	}
	func_955(&(Global_1939221->f_1433.f_828), -1);
}

void func_325(bool bParam0)
{
	if (Global_1896726->f_197.f_7 == bParam0)
	{
		return;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197) || !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_1))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_1, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_5, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_6, bParam0);
	Global_1896726->f_197.f_7 = bParam0;
}

void func_326()
{
	_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_156.f_263.f_2);
	Global_1939221->f_1433.f_156.f_263.f_2 = 0;
}

void func_327()
{
	Global_1939221->f_3 = 1;
}

void func_328()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_54, false);
}

void func_329()
{
	func_956();
	func_957();
	func_958();
}

void func_330()
{
}

void func_331()
{
}

void func_332()
{
}

void func_333(int iParam0)
{
	char* sVar0;

	sVar0 = func_959(iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_3, sVar0);
}

void func_334()
{
	bool bVar0;

	func_730(Global_1273882->f_1, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_78, func_736());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_735());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_84, func_738());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_89, func_737());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_81, STATS::_0x3AEABAE3F3C7600C());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_83, UNLOCK::_UNLOCK_IS_UNLOCKED(2108779990));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_85, (((UNLOCK::_UNLOCK_IS_UNLOCKED(254907751) && !func_451()) && !func_800()) && func_960()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_87, ((((UNLOCK::_UNLOCK_IS_UNLOCKED(1015316659) && !func_451()) && !func_800()) && !func_961()) && !func_809()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_88, (UNLOCK::_UNLOCK_IS_UNLOCKED(1349034126) && func_962()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_85, func_963());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_92, func_964());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_93, (func_963() || func_964()));
	bVar0 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar0);
	if ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 14) && !func_592())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887->f_106.f_131, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_33, false);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1461.f_32, "MATCHMAKING_ACTIVE_LINK");
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887->f_106.f_131, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_33, true);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1461.f_32, "MATCHMAKING_LINK");
	}
	func_322();
}

void func_335()
{
}

void func_336(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_156.f_613.f_3, bParam0);
}

void func_337()
{
	func_730(func_194(), func_205());
	func_798(func_194());
	func_794(-1);
	func_796(0);
	func_325(0);
}

void func_338(int iParam0, bool bParam1)
{
	struct<95> Var0;
	bool bVar95;
	bool bVar96;
	int iVar97;
	int iVar98;
	int iVar99;

	func_48();
	Var0 = { func_183(1) };
	bVar95 = false;
	bVar96 = false;
	if (func_29(Var0.f_29) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_29))))
	{
	}
	switch (iParam0)
	{
		case 15:
			func_48();
			break;
		case 13:
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
			{
				if (func_381(Global_1273882->f_15))
				{
					POSSE::_0xC08AFF658B2E51DA(&iVar97);
					if (iVar97 != 0)
					{
						bVar95 = true;
					}
				}
				else
				{
					bVar95 = true;
				}
			}
			bVar96 = true;
			break;
		case 16:
			func_966(func_965(&Var0));
			bVar95 = true;
			if (func_184(&Var0))
			{
				if (func_757(&Var0))
				{
					bVar96 = true;
				}
			}
			else if (func_967(&Var0))
			{
				bVar96 = true;
			}
			break;
	}
	if (bVar95)
	{
		iVar98 = func_968(func_780(&Var0), -1, 394524610, 1, 1, 0, 1, 16);
		func_969(iVar98);
	}
	if (bVar96)
	{
		iVar99 = func_968(MISC::_CREATE_VAR_STRING(2, "POSSE_SUBH"), -1, -303450633, 1, 1, 0, 1, 13);
	}
	switch (iParam0)
	{
		case 16:
			func_900(iVar98, bParam1);
			break;
		case 13:
			func_900(iVar99, bParam1);
			break;
	}
}

void func_339()
{
	struct<92> Var0;

	Var0.f_38 = 7;
	Var0.f_91 = -1;
	if (func_586(&Var0, 1))
	{
		func_140(&Var0);
	}
	func_36(6, 1);
	func_338(13, 1);
	func_350(1.5f, 1);
	func_791(&(Global_1939221->f_1433.f_156.f_613.f_4), 1);
}

void func_340()
{
	vector3 vVar0;

	if (!func_35(1))
	{
		func_970();
		func_971();
		if (func_768(&(Global_1273882->f_154[&Global_1273882]), 0))
		{
			vVar0 = { func_503(&Global_1273882) };
			func_158(vVar0.y, func_972(vVar0.x));
		}
		else
		{
			func_971();
		}
		func_52(0, 1);
		func_973(!Global_17173.f_54.f_14.f_5);
		func_974(0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_70.f_24, false);
		func_36(2, 0);
		func_36(1, 1);
	}
	HUD::_0x4CC5F2FC1332577F(-1274560729);
}

void func_341()
{
	struct<95> Var0;

	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_183(1) };
	if (Global_1939221->f_1433.f_1 != 6)
	{
	}
	func_350(3f, 1);
	func_48();
	func_968("POSSE_MEMBERS_SUBH", -1, -1, 0, 0, 0, 0, -1);
	if (func_212(&Var0))
	{
		if (func_188(&Var0) && func_184(&Var0))
		{
			func_968("POSSE_DEPUTIES_SUBH", -1, -1, 0, 0, 1, 0, -1);
		}
	}
	if (!func_975(18, 6))
	{
	}
	func_976(0);
	func_762(&(Global_1939221->f_1433.f_156.f_196.f_3), 1);
}

void func_342()
{
	func_350(1.5f, 1);
	func_791(&(Global_1939221->f_1433.f_156.f_205.f_7), 1);
}

void func_343()
{
	struct<95> Var0;

	func_350(1.5f, 1);
	func_517();
	Var0 = { func_183(1) };
	if (!func_212(&Var0))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_156.f_263.f_92))
	{
		if (func_188(&Var0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_263.f_92, "NM_MW_POSSE_TYPE_PERSISTENT");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_263.f_92, "NM_MW_POSSE_TYPE_TEMPORARY");
		}
	}
	if (!func_977(func_780(&Var0)))
	{
	}
}

void func_344(int iParam0)
{
	int iVar0;

	func_881();
	func_350(2f, 1);
	if (Global_1939221->f_1433.f_1 == 6)
	{
		func_36(4, 1);
	}
	func_48();
	switch (iParam0)
	{
		case 21:
			if (func_978())
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					func_968(func_979(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
					iVar0++;
				}
			}
			else
			{
				func_968(func_979(1), 1, -1, 0, 0, 0, 0, -1);
				func_968(func_979(2), 2, -1, 0, 0, 0, 0, -1);
				func_968(func_979(3), 3, -1, 0, 0, 0, 0, -1);
			}
			if (!func_975(5, 6))
			{
			}
			break;
		default:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_968(func_979(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
				iVar0++;
			}
			if (!func_975(5, 6))
			{
			}
			break;
	}
	func_980();
}

void func_345()
{
	func_881();
	func_350(2f, 1);
	func_48();
	func_980();
	func_47(1);
}

void func_346()
{
	Global_1939221->f_1433.f_1314.f_9 = 0;
	_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_1314.f_8);
	Global_1939221->f_1433.f_1314.f_8 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_55, "");
	func_10();
}

void func_347()
{
}

void func_348()
{
}

void func_349()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uVar0 = func_981(0, 1);
	func_105(uVar0, func_104());
	func_350(1f, 1);
	func_832();
	func_48();
	iVar2 = 7;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1 = iVar3;
		func_968(func_982(iVar1), iVar3, iVar3, 0, 0, 0, 0, -1);
		iVar3++;
	}
}

void func_350(float fParam0, bool bParam1)
{
	Global_1896726->f_194.f_2 = 0f;
	Global_1896726->f_194.f_1 = fParam0;
	if (bParam1)
	{
		func_361(0, 1);
	}
}

void func_351()
{
	func_350(2f, 1);
	func_983();
	func_984();
}

void func_352()
{
	func_863();
	func_864();
	func_865();
}

void func_353()
{
	int iVar0;
	char* sVar1;

	iVar0 = func_135();
	sVar1 = func_985(iVar0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_7697.f_5, MISC::_CREATE_VAR_STRING(2, "NET_MG_CONTEXT_PUBLIC", sVar1));
	func_986(iVar0);
}

void func_354()
{
	int iVar0;

	iVar0 = func_135();
	func_986(iVar0);
}

void func_355()
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = func_135();
	bVar1 = func_138(2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_7697.f_1, MISC::_CREATE_VAR_STRING(42, "NET_MG_TITLE_ASSEMBLY", MISC::_CREATE_VAR_STRING(2, func_987(bVar1, "NET_MG_TITLE_PRIVATE", "NET_MG_TITLE_PUBLIC")), func_989(func_988(iVar0))));
	func_986(iVar0);
	sVar2 = func_985(iVar0, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_7697.f_12, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_BUYIN", sVar2));
	bVar3 = (func_138(8192) && !func_138(16384));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_10, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_11, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_869());
	bVar4 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar4);
	func_870();
}

void func_356()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_3, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_4, true);
}

void func_357()
{
}

void func_358()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_436, false);
}

void func_359()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_350(1f, 1);
	func_48();
	iVar1 = 3;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = iVar2;
		func_968(func_990(iVar0), iVar2, iVar2, 0, 0, 0, 0, -1);
		iVar2++;
	}
}

void func_360()
{
	func_881();
	func_350(2f, 1);
	func_48();
	func_968(func_979(0), 0, -1, 0, 0, 0, 0, -1);
}

void func_361(int iParam0, bool bParam1)
{
	if (func_318(Global_1896726->f_194, iParam0) != bParam1)
	{
		if (bParam1)
		{
			func_319(&(Global_1896726->f_194), iParam0);
		}
		else
		{
			func_320(&(Global_1896726->f_194), iParam0);
		}
	}
}

void func_362(bool bParam0)
{
	Global_1939221->f_1433.f_8769.f_243 = bParam0;
	Global_1939221->f_1433.f_8769.f_242 = !bParam0;
}

bool func_363()
{
	if (func_858())
	{
		return func_991(11, 0);
	}
	return func_991(4, 0);
}

void func_364(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_50(91));
	if (func_992(iVar0))
	{
		_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, 1);
	}
}

int func_365(int iParam0)
{
	bool bVar0;
	var uVar1;
	bool bVar2;

	if (!func_993(iParam0))
	{
		return -1;
	}
	bVar2 = func_994(iParam0);
	bVar0 = false;
	while (bVar0 < 4)
	{
		uVar1 = func_938(bVar0);
		if (func_995(bVar2, uVar1, 1))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_366(bool bParam0)
{
	int iVar0;

	func_459(bParam0);
	if (func_996(bParam0))
	{
		iVar0 = joaat("deadeye");
	}
	else if (!func_997(bParam0, 1))
	{
		iVar0 = func_998(func_310(bParam0, 1));
	}
	else
	{
		iVar0 = joaat("combat");
	}
	func_999(iVar0, func_310(bParam0, 1));
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("abilities"), -2109508723);
}

void func_367(int iParam0)
{
	func_1000(*iParam0);
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("abilities"), -1316999016);
}

int func_368(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	*uParam1 = { ((*Global_1126840)[iVar0 /*83*/])->f_38.f_8 };
	return 1;
}

int func_369(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1275475)[iParam0 /*86*/])->f_5.f_12;
}

Vector3 func_370(int iParam0)
{
	vector3 vVar0;

	func_1002(51288898, func_1001(iParam0), 0, 0);
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &(Global_1275329->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_371()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= (func_1003() - 1))
	{
		iVar1 = func_1004(iVar0);
		if (iVar1 == -1)
		{
		}
		else
		{
			fVar3 = func_1006(Global_36, func_1005(iVar1));
			if (iVar2 == -1)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
			else if (fVar3 < fVar4)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		return 0f, 0f, 0f;
	}
	return func_1005(iVar2);
}

int func_372(bool bParam0)
{
	int iVar0;

	if (func_1007(bParam0, 997808187) && !func_1008(bParam0, 997808187, 0))
	{
		return 997808187;
	}
	iVar0 = 0;
	if (func_1009(bParam0, &iVar0))
	{
		return iVar0;
	}
	if (func_1007(bParam0, 59806960))
	{
		iVar0 = 59806960;
	}
	else if (func_1007(bParam0, -915411861))
	{
		iVar0 = -915411861;
	}
	else if (func_1007(bParam0, -570078785))
	{
		iVar0 = -570078785;
	}
	return iVar0;
}

int func_373(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_551(bParam0, 0))
	{
		return 0;
	}
	return func_1010(bParam0, bParam2, 1, bParam1, 1, 0);
}

void func_374(int iParam0)
{
	Global_1896726->f_13.f_26 = iParam0;
}

void func_375(bool bParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_3, bParam0);
	}
}

char* func_376(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_634(PLAYER::GET_PLAYER_NAME(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_634(PLAYER::GET_PLAYER_NAME(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
			return func_1011(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)));
	}
	sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)));
	return func_1011(sVar0, iParam2);
}

void func_377(char* sParam0)
{
	StringCopy(&(Global_1180694->f_1092), sParam0, 64);
}

void func_378(bool bParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_70.f_24) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_70.f_23))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_70.f_24, func_1012(bParam0, 1));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_70.f_23, bParam0);
	}
}

char* func_379(int iParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_634(PLAYER::GET_PLAYER_NAME(iParam0), joaat("COLOR_PURE_WHITE")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(iParam0));
}

void func_380(char* sParam0, bool bParam1)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_2, sParam0);
	}
	if (bParam1)
	{
		Global_1896726->f_13.f_10 = { func_309(func_376(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), 0, 0)) };
	}
	else
	{
		Global_1896726->f_13.f_10 = { func_309(sParam0) };
	}
}

int func_381(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		else
		{
			Var2 = { func_538(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return 1;
				}
				iVar19++;
			}
		}
	}
	return 0;
}

bool func_382()
{
	return Global_1180694->f_409.f_9;
}

int func_383()
{
	return Global_1180694->f_409;
}

int func_384(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<10> Var8;
	int iVar18;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		POSSE::_0xC08AFF658B2E51DA(&uVar0);
		return uVar0;
	}
	Var1 = { func_538(iParam0) };
	iVar18 = 0;
	while (iVar18 <= (POSSE::_0xC084FF658B2E61DA(&Var1) - 1))
	{
		if ((POSSE::_0xC084FF658B2E81DA(&Var1, iVar18, &Var8) && Var8 != 0) && Var8.f_9 == 1)
		{
			return Var8;
		}
		iVar18++;
	}
	return 0;
}

int func_385(int iParam0, bool bParam1)
{
	struct<28> Var0;
	int iVar118;

	Var0.f_27 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		if (func_1013())
		{
			func_1014();
			return 1;
		}
		if (!func_1015())
		{
			return 0;
		}
		Var0.f_9.f_2 = bParam1;
		iVar118 = 0;
		if (!POSSE::_0xC09CFF658B2E51DA(iParam0, &Var0, &iVar118) && iVar118 == 1)
		{
			func_1016();
			return 0;
		}
		else
		{
			func_1014();
			return 1;
		}
	}
	return 0;
}

void func_386(int iParam0, int iParam1)
{
	struct<28> Var0;

	if (Global_1180694->f_116.f_3 == iParam0)
	{
		return;
	}
	Var0.f_27 = 10;
	Var0.f_9 = iParam0;
	func_1017(&Var0);
	Global_1180694->f_116 = iParam0;
	Global_1180694->f_116.f_1 = iParam1;
	Global_1180694->f_116.f_4 = 1;
	func_1018(1);
}

void func_387(bool bParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_1019())
	{
		return;
	}
	if (bParam0 == 1)
	{
		if (!func_1020(PLAYER::PLAYER_ID(), 32))
		{
			func_1021(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_ON");
				func_635(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_1022(bParam0, _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_1020(PLAYER::PLAYER_ID(), 32))
	{
		func_1023(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_OFF");
			func_635(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_1022(bParam0, _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		}
	}
}

int func_388(int iParam0, bool bParam1)
{
	struct<28> Var0;
	int iVar118;

	Var0.f_27 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		if (func_1013())
		{
			func_1014();
			return 1;
		}
		if (!func_1015())
		{
			return 0;
		}
		Var0.f_9.f_1 = bParam1;
		iVar118 = 0;
		if (!POSSE::_0xC09CFF658B2E51DA(iParam0, &Var0, &iVar118) && iVar118 == 1)
		{
			func_1016();
			return 0;
		}
		else
		{
			func_1014();
			return 1;
		}
	}
	return 0;
}

int func_389(bool bParam0)
{
	switch (bParam0)
	{
		case 1364158563:
			return 0;
		case -1615594685:
			return 1;
		case -606838807:
			return 2;
		case 1099303125:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_390(int iParam0)
{
	if (iParam0 == 0)
	{
		NETWORK::_0x3F0ABAE38A0515AD(0, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(0, 1);
	}
	if (iParam0 == 1)
	{
		NETWORK::_0x3F0ABAE38A0515AD(1, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(1, 1);
	}
	if (iParam0 == 2)
	{
		NETWORK::_0x3F0ABAE38A0515AD(2, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(2, 1);
	}
	if (iParam0 == 3)
	{
		NETWORK::_0x3F0ABAE38A0515AD(3, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(3, 1);
	}
}

int func_391(bool bParam0)
{
	switch (bParam0)
	{
		case 2118609260:
			return 1;
		case 910568583:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_392(int iParam0)
{
	int iVar0;

	if (!Global_1131373->f_6289)
	{
		return 0;
	}
	if (iParam0 == &Global_1273882->f_154[&Global_1273882])
	{
		return Global_17173.f_2619.f_2;
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
	return ((*Global_1097609)[iVar0 /*51*/])->f_48;
}

void func_393()
{
	if (!Global_1131373->f_6289)
	{
		return;
	}
	Global_1131373->f_6289.f_12 = 1;
}

void func_394()
{
	if (!Global_1131373->f_6289)
	{
		return;
	}
	Global_1131373->f_6289.f_13 = 1;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2029245166;
		case 0:
			return -651592419;
		default:
			break;
	}
	return -2029245166;
}

int func_396()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1273882->f_154[&Global_1273882]));
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_397()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1273882->f_154[&Global_1273882]));
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		return 0;
	}
	return 1;
}

int func_398()
{
	if (Global_1572887->f_106.f_75 >= 9 && Global_1572887->f_106.f_75 <= 13)
	{
		return 1;
	}
	return 0;
}

float func_399(int iParam0, bool bParam1)
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
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097609)[iVar0 /*51*/])->f_18 >= ((*Global_1097609)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097609)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097609)[iVar0 /*51*/])->f_45;
}

bool func_400(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_401(float fParam0)
{
	if (BUILTIN::FLOOR(fParam0) >= Global_1901929->f_672.f_29)
	{
		return 1;
	}
	return 0;
}

int func_402()
{
	if (func_404(&(Global_1273882->f_154[&Global_1273882])) > 0)
	{
		return 1;
	}
	return 0;
}

int func_403(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_401(Global_17173.f_2619) || func_401(((*Global_1097609)[&Global_1273882 /*51*/])->f_18))
	{
		return 0;
	}
	if (func_1024(&(Global_1273882->f_154[&Global_1273882]), 1, 1))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_402())
		{
			return 0;
		}
	}
	if (func_1025(&(Global_1273882->f_154[&Global_1273882])))
	{
		return 0;
	}
	iVar0 = &Global_1273882->f_154[&Global_1273882];
	if ((((*Global_1097609)[iVar0 /*51*/])->f_1 >= 2 && ((*Global_1097609)[iVar0 /*51*/])->f_1 <= 4) && !Global_1572887->f_6)
	{
		return 0;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1273882->f_154[&Global_1273882]));
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar1))
		{
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_404(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1901929->f_672.f_39 - func_1026(iParam0));
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return 0;
}

void func_405(int iParam0)
{
	Global_17173.f_54.f_61.f_582 = (Global_17173.f_54.f_61.f_582 - (Global_17173.f_54.f_61.f_582 && iParam0));
}

void func_406(int iParam0)
{
	Global_17173.f_54.f_61.f_582 = (Global_17173.f_54.f_61.f_582 || iParam0);
}

void func_407(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1027();
	}
	if (bParam0)
	{
		func_1028(8);
		func_1028(512);
	}
	else
	{
		func_1028(8);
		func_1028(16);
	}
}

int func_408(bool bParam0)
{
	switch (bParam0)
	{
		case 470592719:
			return 0;
		case 1413457193:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_409(int iParam0, int iParam1)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	return func_541(((*Global_1123778)[iParam0 /*27*/])->f_7, iParam1);
}

int func_410(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_411(var uParam0)
{
	return func_1029(*uParam0, 1);
}

int func_412(var uParam0)
{
	if (!func_411(uParam0))
	{
		return 0;
	}
	if (func_1030(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1031(uParam0->f_1);
}

int func_413()
{
	return 30000;
}

void func_414(int iParam0)
{
	func_1032(&(Global_1129497->f_8), iParam0);
}

void func_415(int iParam0)
{
	func_542(&(Global_1129497->f_8), iParam0);
}

var func_416(int iParam0, int iParam1)
{
	return func_1033(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_417(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

int func_418()
{
	return func_1034(Global_1939221->f_1433);
}

void func_419(int iParam0)
{
	switch (iParam0)
	{
		case -1594107850:
		case -1080557963:
		case 72556410:
			func_329();
			break;
		default:
			break;
	}
	func_83(iParam0, 0);
}

int func_420(int iParam0)
{
	return func_1035(iParam0, Global_1939221->f_1433);
}

char* func_421()
{
	char* sVar0;

	sVar0 = STATS::_0x3F6FD87D2030ADC6();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "DAILY_DISABLED");
	}
	return sVar0;
}

char* func_422()
{
	char* sVar0;

	if (func_1036())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_INTRO_MISSION_TOOLTIP";
	}
	else if (func_451())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_ACTIVITY_TOOLTIP";
	}
	else
	{
		sVar0 = "POSSE_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_423()
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	bVar1 = func_1036();
	if (bVar1)
	{
		iVar2 = func_1037(-55206167, func_939(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0) + 1;
	}
	if (bVar1 && iVar2 <= 16)
	{
		sVar0 = "NET_CAMP_INTRO_MISSION_DISABLED_FOOTER";
	}
	else if (func_451() || Global_262996[&Global_1273882 /*70*/] > 2)
	{
		sVar0 = "NET_CAMP_DISABLED_ACTIVITY_FOOTER";
	}
	else
	{
		sVar0 = "CAMP_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_424()
{
	char* sVar0;

	if (func_1036())
	{
		sVar0 = "NM_OPTION_DISABLED_INTRO_TOOLTIP";
	}
	else if (func_451() || Global_262996[&Global_1273882 /*70*/] > 2)
	{
		sVar0 = "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP";
	}
	else if (func_961())
	{
		sVar0 = "JOB_POSSE_MEMBERS_IN_JAIL_FOOTER";
	}
	else if (func_809())
	{
		sVar0 = "JOB_PLAYER_IN_JAIL_FOOTER";
	}
	else
	{
		sVar0 = "MATCHMAKING_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_425()
{
	bool bVar0;
	char* sVar1;

	bVar0 = DATABINDING::_DATABIND