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
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23[3] = { 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	struct<216> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	struct<83> Local_268[4];
	struct<19> Local_601[13];
	struct<9> Local_849[13];
	var uLocal_967 = 3;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	bool bLocal_974 = false;
	int iLocal_975 = 0;
	int iLocal_976[3] = { 0, 0, 0 };
	int iLocal_980 = 0;
	struct<4> Local_981[28];
	char* sLocal_1094[1] = { NULL };
	var uLocal_1096 = 1;
	var uLocal_1097 = 0;
	int iLocal_1098[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = -1;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 2;
	var uLocal_1124 = 1;
	var uLocal_1125 = 1;
	var uLocal_1126 = 1;
	var uLocal_1127 = 0;
	var uLocal_1128 = 1;
	var uLocal_1129 = 2;
	var uLocal_1130 = 2;
	var uLocal_1131 = 3;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 3;
	var uLocal_1135 = 1;
	var uLocal_1136 = 3;
	var uLocal_1137 = 3;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	struct<6> Local_1140[2];
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	bool bLocal_1157 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_22 = 1;
	iLocal_1156 = vScriptParam_0.x;
	iLocal_1154 = vScriptParam_0.z;
	if (func_1(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_1155)
		{
			iLocal_1155 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_1154;
			func_4(iLocal_1156, &iLocal_1154);
			switch (iLocal_1154)
			{
				case 0:
					if (!Global_1879534->f_1)
					{
						bLocal_1157 = !func_5(iLocal_1156, 1);
						if (bLocal_1157)
						{
						}
						iLocal_1154 = 1;
					}
					break;
				case 1:
					iLocal_1154 = 2;
					break;
				case 2:
					if (func_6(bLocal_1157))
					{
						iLocal_1154 = 4;
					}
					break;
				case 4:
					iLocal_1154 = 6;
					break;
				case 6:
					if (func_7(iLocal_1156, -1, -1, 0))
					{
						func_8(iLocal_1156, 4);
						iLocal_1154 = 7;
					}
					break;
				case 7:
					iLocal_1154 = 8;
					break;
				case 8:
					func_9(iLocal_1156);
					iLocal_1154 = 9;
					break;
				case 9:
					if (iLocal_1156 != 5)
					{
						func_10(Global_1898004);
						func_11(iLocal_1156, Global_1898004, bLocal_1157);
					}
					func_8(iLocal_1156, 8);
					iLocal_1154 = 10;
					break;
				case 10:
					if (!bLocal_1157)
					{
						func_12();
						if (func_13(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							func_14(32);
						}
						iLocal_1154 = 3;
					}
					else
					{
						iLocal_1154 = 3;
					}
					break;
				case 3:
					if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
					{
						if (func_15(bLocal_1157))
						{
							iLocal_1154 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_1157)
					{
						if (!func_16(iLocal_1156))
						{
							iLocal_1155 = 0;
						}
					}
					func_17(Global_1898004, iLocal_1156);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_1154)
			{
				iLocal_1155 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

int func_1(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_19(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

int func_3()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	return 1;
}

void func_4(int iParam0, var uParam1)
{
	if (!func_13(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_14(16);
		return;
	}
	if (!func_20(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_14(16);
		return;
	}
	if (func_21(8))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_22(8);
			*uParam1 = 11;
			return;
		}
	}
	if (func_21(2))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_22(2);
			*uParam1 = 11;
			return;
		}
	}
	if (func_21(16))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_22(16);
			*uParam1 = 11;
			return;
		}
	}
	if (func_21(4))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 6;
			return;
		}
		else if (*uParam1 != 6)
		{
			func_22(4);
			*uParam1 = 11;
			return;
		}
	}
	if (func_21(1))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 2;
			return;
		}
		else if (*uParam1 != 2)
		{
			func_22(1);
			*uParam1 = 11;
			return;
		}
	}
}

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_23(iParam0))
	{
		return 0;
	}
	if (func_24() == -1)
	{
		if (func_25(6206, 1, 1))
		{
			iVar0 = func_26(0);
			iVar1 = func_27(iVar0);
			return 0;
		}
		if (bParam1)
		{
			if (func_28() == iParam0)
			{
				return 0;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_29(63))
					{
						return 0;
					}
					if (func_30(76) || func_31())
					{
						return 0;
					}
					break;
				case 125:
					if (!func_32())
					{
						return 0;
					}
					break;
				case 129:
					if (!func_33())
					{
						return 0;
					}
					if (func_34(19, 0))
					{
						return 0;
					}
					break;
				case 114:
					if (!func_33())
					{
						return 0;
					}
					if (func_34(20, 0))
					{
						return 0;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_24() == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
	if (func_35(iParam0, 256))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar2 = func_36(iParam0);
		if (!func_37(iVar2))
		{
			return 0;
		}
		iVar3 = func_38(iVar2);
		if (func_39(iVar3))
		{
			func_40(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_41(iVar3, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_6(bool bParam0)
{
	return 1;
}

int func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return 1;
	}
	if (!func_42(iParam0))
	{
		return 1;
	}
	if (func_35(iParam0, 16))
	{
		return 1;
	}
	if (func_43(iParam0) && !func_44(iParam0))
	{
	}
	if (func_45(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_46(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_46(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_43(iParam0) || func_44(iParam0)) || func_47(&Global_1897950))
			{
				func_48(&Global_1897950, 0);
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

void func_8(int iParam0, int iParam1)
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

void func_9(int iParam0)
{
	iParam0 = iParam0;
}

void func_10(var uParam0)
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

void func_11(int iParam0, var uParam1, bool bParam2)
{
	func_49(uParam1, Local_44.f_215, 1);
}

void func_12()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Twin_Rocks", true, true);
	func_50();
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57(376);
	func_57(377);
	func_57(378);
	func_57(379);
	func_58(&Local_44, 125, &sLocal_1094, 20);
}

bool func_13(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_14(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

int func_15(bool bParam0)
{
	return 1;
}

int func_16(int iParam0)
{
	switch (Local_44)
	{
		case 0:
			if (func_59(&Local_44, &uLocal_1096, &uLocal_967, "", 0))
			{
				func_60(&Local_44, 1);
			}
			break;
		case 1:
			func_60(&Local_44, 2);
			break;
		case 2:
			if (func_61(&Local_44, &Local_849, 1222652248, 0, 8))
			{
				Local_44.f_197 = 0;
				func_60(&Local_44, 3);
			}
			break;
		case 3:
			func_62(&Local_44, &Local_849, 0, (Local_44.f_201 - 1));
			func_60(&Local_44, 6);
			break;
		case 6:
			func_63();
			func_64();
			func_65();
			switch (iLocal_971)
			{
				case 0:
				case 1:
				case 2:
					func_66(1);
					break;
			}
			func_60(&Local_44, 7);
			break;
		case 7:
			func_67();
			func_68();
			break;
	}
	func_69(&Local_44);
	return 0;
}

void func_17(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_70(&Global_1935630, 16384)) || func_70(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_71(uParam0, 1))
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
	bVar2 = func_72();
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
							if ((!func_73((*uParam0)[iVar3 /*3*/], 1) && func_74(iParam1)) && !func_75(iParam1, 16))
							{
								func_77(iParam1, func_76(), -1, 0, -1, 0);
								func_78((*uParam0)[iVar3 /*3*/], 1);
							}
							func_79(iParam1, 0);
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
	if (func_24() == -1)
	{
		if (func_80() != bVar0)
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
			func_81();
			func_82(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_83(bVar0);
	if (func_24() == -1)
	{
		func_84((iParam1 == func_28() && bVar0));
	}
}

void func_18()
{
	func_85(bLocal_1157);
	func_86(bLocal_1157);
	if (func_24() == -1)
	{
		if (iLocal_1156 != 5)
		{
			func_87(iLocal_1156);
		}
	}
	if (iLocal_1156 != 5)
	{
		func_88(iLocal_1156);
		func_89(iLocal_1156, 4);
		func_89(iLocal_1156, 8);
		func_83(0);
		if (func_24() == -1)
		{
			func_84(0);
		}
	}
	func_90(0);
	if (func_28() == iLocal_1156)
	{
		func_91(0);
	}
	if (func_92(func_36(iLocal_1156), 1))
	{
		func_94(func_93(iLocal_1156), 1, 0);
	}
	func_95(iLocal_1156);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_20(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return func_35(iParam0, 8);
}

bool func_21(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_22(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_96(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return (Global_40.f_9571[iVar0 /*10*/])->f_1 == 5;
}

int func_24()
{
	return Global_1572887->f_12;
}

int func_25(int iParam0, bool bParam1, int iParam2)
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
		if (func_97())
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
		iVar0 = func_98(&(Global_1898164->f_1[0 /*5*/]));
		if (func_99(iVar0) && func_100(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_37(&(Global_1898164->f_1[0 /*5*/])))
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

int func_26(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_27(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_102(func_101(iParam0));
}

int func_28()
{
	return Global_40.f_4283.f_1;
}

int func_29(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_99(iParam0))
	{
		return 0;
	}
	return func_92(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_30(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_92(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_31()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_32()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_33()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_24() != -1)
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

bool func_35(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_36(int iParam0)
{
	if (!func_103(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -15;
	}
	return func_104(iParam0);
}

bool func_39(int iParam0)
{
	return iParam0 != -15;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_105(*iParam0);
	iVar1 = func_106(*iParam0);
	iVar2 = func_107(*iParam0);
	iVar3 = func_108(*iParam0);
	iVar4 = func_109(*iParam0);
	iVar5 = func_110(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_111(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_111(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_112(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_114(func_113(), iParam0, bParam1);
}

bool func_42(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_43(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return func_35(iParam0, 33554432);
}

int func_44(int iParam0)
{
	if (!func_42(iParam0))
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

int func_45(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_24() != -1;
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

bool func_46(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_47(int iParam0)
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

int func_48(int iParam0, bool bParam1)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (!func_115(iParam0, 2))
	{
		return 0;
	}
	if (func_115(iParam0, 32) && !bParam1)
	{
		func_117(iParam0, _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(func_116(iParam0)));
		if (func_24() == -1)
		{
			if (func_115(iParam0, 2048))
			{
				_NAMESPACE48::REVIVE_PERSCHAR(func_118(iParam0));
				func_119(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_118(iParam0));
		}
		return 0;
	}
	if (!func_120(iParam0) && func_24() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_118(iParam0)))
	{
		func_119(iParam0, 128);
		return 1;
	}
	func_117(iParam0, _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(func_116(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_118(iParam0));
	if (func_115(iParam0, 2048))
	{
		_NAMESPACE48::REVIVE_PERSCHAR(func_118(iParam0));
		func_119(iParam0, 2048);
	}
	return 1;
}

void func_49(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_121(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

void func_50()
{
	Local_44.f_4 = func_122(&(Local_44.f_4), 125);
	iLocal_971 = Local_44.f_4;
}

void func_51()
{
	func_123(iLocal_1098[0], -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f, "HTW_VOLUME_COMBAT_AREA");
	func_124(iLocal_1098[1], -3987.26f, -2156.08f, -4.04f, 0f, 0f, 33f, 27f, 65.25f, 10f, "HTW_VOLUME_OUTSIDE_WEST");
	func_124(iLocal_1098[2], -3941.76f, -2167.14f, -4.04f, 0f, 0f, 121.25f, 27f, 65.25f, 10f, "HTW_VOLUME_OUTSIDE_SOUTH");
	func_124(iLocal_1098[3], -3927.17f, -2131.54f, -4.04f, 0f, 0f, -168f, 27f, 65.25f, 10f, "HTW_VOLUME_OUTSIDE_EAST");
	func_124(iLocal_1098[5], -3959.85f, -2132.08f, -4.9f, 0f, 0f, 49.75f, 4f, 6.25f, 5f, "HTW_VOLUME_HOUSE_ENTRANCE");
	func_124(iLocal_1098[6], -3956.01f, -2127.24f, -5f, 0f, 0f, 51f, 5.75f, 5.5f, 3.75f, "HTW_VOLUME_IN_HOUSE");
	func_124(iLocal_1098[7], -3955.3f, -2125.3f, 0.4f, 0f, 0f, 51.5f, 5.5f, 3.5f, 2.25f, "HTW_VOLUME_ON_NORTH_ROOF");
	func_124(iLocal_1098[8], -3953.88f, -2123.1f, -2.81f, 0f, 0f, 48.25f, 2f, 1f, 2.5f, "HTW_VOLUME_NORTH_ROOF_LADDER");
	func_124(iLocal_1098[9], -3951.7f, -2137.94f, -0.35f, 0f, 0f, 9.75f, 4.75f, 6f, 3.25f, "HTW_VOLUME_ON_SOUTH_ROOF");
	func_124(iLocal_1098[10], -3952.04f, -2134.08f, -2.65f, 0f, 0f, 8.75f, 1f, 1f, 3f, "HTW_VOLUME_SOUTH_ROOF_LADDER");
	func_124(iLocal_1098[13], -3930.49f, -2147.19f, -1.94f, 0f, 0f, -90.5f, 21f, 19f, 20f, "HTW_VOLUME_SEEN_BY_GUARD_EAST");
	func_124(iLocal_1098[14], -3981.99f, -2161.48f, -1.94f, 0f, 0f, 38.25f, 20f, 18f, 20f, "HTW_VOLUME_SEEN_BY_GUARD_SOUTH");
	func_124(iLocal_1098[11], -3973.99f, -2105.69f, -1.94f, 0f, 0f, 42.75f, 31f, 17f, 20f, "HTW_VOLUME_SEEN_BY_HOUSE_NORTH");
	func_124(iLocal_1098[12], -3938.24f, -2121.19f, -1.94f, 0f, 0f, -64f, 31f, 17f, 20f, "HTW_VOLUME_SEEN_BY_HOUSE_SOUTH");
	iLocal_1098[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HTW_VOLUME_IN_CAMP");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_1098[4]), -3964.67f, -2126.84f, -4.48f, 0f, 0f, 47f, 32.75f, 23.75f, 10f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_1098[4]), -3959.06f, -2147.65f, -4.48f, 0f, 0f, 30f, 22.75f, 22.75f, 10f);
	func_125();
}

void func_52()
{
	int iVar0;

	Local_44.f_189 = 2;
	Local_44.f_199 = (13 - 2);
	Local_44.f_201 = (13 - 2);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Local_849[iVar0 /*9*/] = joaat("g_m_m_unibanditos_01");
		iVar0++;
	}
	func_126(&uLocal_967, -727455979);
	func_126(&uLocal_967, -1554827654);
	func_126(&uLocal_967, &(Local_849[0 /*9*/]));
}

void func_53()
{
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			(Local_849[0 /*9*/])->f_1 = { -3943.859f, -2148.014f, -5.354f };
			(Local_849[0 /*9*/])->f_4 = 267.2186f;
			(Local_849[1 /*9*/])->f_1 = { -3971.832f, -2152.81f, -7.6095f };
			(Local_849[1 /*9*/])->f_4 = 125.6486f;
			(Local_849[2 /*9*/])->f_1 = { -3956.941f, -2125.583f, -1.6662f };
			(Local_849[2 /*9*/])->f_4 = 14.5547f;
			(Local_849[3 /*9*/])->f_1 = { -3950.537f, -2136.363f, -1.965f };
			(Local_849[3 /*9*/])->f_4 = 316.7583f;
			(Local_849[4 /*9*/])->f_1 = { -3944.685f, -2148.145f, -4.597f };
			(Local_849[4 /*9*/])->f_4 = 83.1685f;
			(Local_849[5 /*9*/])->f_1 = { -3953.86f, -2142.464f, -5.772f };
			(Local_849[5 /*9*/])->f_4 = 190.8f;
			(Local_849[6 /*9*/])->f_1 = { -3952.9f, -2144.07f, -4.95f };
			(Local_849[6 /*9*/])->f_4 = 3.76f;
			(Local_849[7 /*9*/])->f_1 = { -3970.088f, -2138.389f, -6.0259f };
			(Local_849[7 /*9*/])->f_4 = 92.61f;
			(Local_849[8 /*9*/])->f_1 = { -3976.67f, -2140.09f, -7.0178f };
			(Local_849[8 /*9*/])->f_4 = 279.8591f;
			(Local_849[9 /*9*/])->f_1 = { -3870.026f, -2128.681f, 5.6926f };
			(Local_849[10 /*9*/])->f_1 = { -3871.538f, -2134.644f, 5.8518f };
			break;
	}
}

void func_54()
{
	sLocal_1094[0] = "TEST";
}

void func_55()
{
	Local_44.f_215 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 60f, 60f, 20f, "volHideout_TwinRocks");
}

void func_56()
{
	TASK::REQUEST_WAYPOINT_RECORDING("hideout_tr_horseCharge");
	TASK::REQUEST_WAYPOINT_RECORDING("hideout_tr_horseCharge_Left");
}

int func_57(int iParam0)
{
	int iVar0;

	if (!func_46(iParam0))
	{
		return 0;
	}
	if (!func_127(func_116(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_118(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::GET_PERSCHAR_PED_INDEX(func_118(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::GET_PERSCHAR_PED_INDEX(func_118(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(func_118(iParam0));
	return 1;
}

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;

	func_128(128);
	uParam0->f_205 = iParam1;
	bVar0 = func_129(&(uParam0->f_5), 1048576);
	uParam0->f_202 = { func_130(uParam0->f_205, bVar0) };
	uParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (uParam0->f_205 == 16)
	{
		func_131(uParam0->f_202, 120f, 0);
	}
	else
	{
		func_131(uParam0->f_202, 80f, 0);
	}
	func_132(uParam0, 1);
	func_133(&(uParam0->f_155));
	func_134(&(uParam0->f_155));
	func_135(&(uParam0->f_155));
	func_136(&(uParam0->f_155), 1);
	func_137(&(uParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	func_138(&(uParam0->f_155), 50);
	func_139(&(uParam0->f_155), 8f);
	func_140(sParam2);
	func_141(uParam0);
	if (!func_142(65))
	{
		func_143(uParam0);
	}
	func_144(uParam0);
	func_145(uParam0);
	func_146(&(uParam0->f_38), Global_35, "ARTHUR", 0);
}

int func_59(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS(iParam0->f_201);
	}
	else
	{
		PED::_RESERVE_AMBIENT_PEDS(iParam0->f_199);
	}
	if (func_147(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_0x5E420FF293EE5472())
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0)
	{
		iParam4 = (iParam0->f_199 - 1);
	}
	if (iParam0->f_197 < iParam3)
	{
		iParam0->f_197 = iParam3;
	}
	if (iParam1[iParam0->f_197 /*9*/] != 0)
	{
		func_148((*iParam1)[iParam0->f_197 /*9*/], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_149(((*iParam1)[iVar0 /*9*/])->f_5, 0, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(((*iParam1)[iVar0 /*9*/])->f_5, true);
		}
		iVar0++;
	}
}

void func_63()
{
	func_134(&(Local_44.f_155));
	func_150(&(Local_44.f_155), 1);
	func_151(&(Local_44.f_155), 0);
	func_152(&(Local_44.f_155), 1);
	func_153(&(Local_44.f_155), 1);
	func_154(&(Local_44.f_155), 1);
	func_136(&(Local_44.f_155), 1);
	func_155(&(Local_44.f_155), 1);
	func_156(&(Local_44.f_155), 1);
	func_157(&(Local_44.f_155), 1);
	func_153(&(Local_44.f_155), 1);
	func_158(&(Local_44.f_155), 1);
	func_159(&(Local_44.f_155), 1);
	func_160(&(Local_44.f_155), 1);
	if (((func_161() == 1500834021 || func_161() == -702816767) || func_161() == 669657108) || func_161() == -1317052143)
	{
		Local_44.f_155.f_24 = 40f;
	}
	else
	{
		Local_44.f_155.f_24 = 60f;
	}
	Local_44.f_155.f_17 = Local_44.f_155.f_24;
	bLocal_974 = func_162(5, -1);
}

void func_64()
{
	int iVar0;
	char* sVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		switch (iVar0)
		{
			case 0:
				sVar1 = "1019_G_M_M_UniBanditos_01_HISPANIC_01";
				break;
			case 1:
				sVar1 = "1024_G_M_M_UniBanditos_01_WHITE_02";
				break;
			case 2:
				sVar1 = "1068_G_M_M_UniCriminals_01_HISPANIC_05";
				break;
			case 3:
				sVar1 = "1020_G_M_M_UniBanditos_01_HISPANIC_02";
				break;
			case 4:
				sVar1 = "1069_G_M_M_UniCriminals_01_HISPANIC_06";
				break;
			case 5:
				sVar1 = "1067_G_M_M_UniCriminals_01_HISPANIC_04";
				break;
			case 6:
				sVar1 = "1023_G_M_M_UniBanditos_01_WHITE_01";
				break;
			case 7:
				sVar1 = "1066_G_M_M_UniCriminals_01_HISPANIC_03";
				break;
			case 8:
				sVar1 = "1022_G_M_M_UniBanditos_01_HISPANIC_04";
				break;
			case 9:
				sVar1 = "1021_G_M_M_UniBanditos_01_HISPANIC_03";
				break;
			case 10:
				sVar1 = "0135_G_M_M_UniCriminals_01_HISPANIC_02";
				break;
			default:
				sVar1 = "1019_G_M_M_UniBanditos_01_HISPANIC_01";
				break;
		}
		Local_601[iVar0 /*19*/] = MISC::_DOES_STRING_EXIST_IN_STRING(sVar1, "UniBanditos");
		func_163((Local_849[iVar0 /*9*/])->f_5, sVar1, 0);
		(Local_601[iVar0 /*19*/])->f_1 = sVar1;
		PED::SET_PED_CONFIG_FLAG((Local_849[iVar0 /*9*/])->f_5, 146, true);
		PED::SET_PED_CONFIG_FLAG((Local_849[iVar0 /*9*/])->f_5, 6, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((Local_849[iVar0 /*9*/])->f_5, 1269650476);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER((Local_849[iVar0 /*9*/])->f_5, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER((Local_849[iVar0 /*9*/])->f_5, false);
		TASK::_0x9DE63896B176EA94((Local_849[iVar0 /*9*/])->f_5, 0);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER((Local_849[iVar0 /*9*/])->f_5, 1, 1065353216);
		func_164(&(Local_44.f_155), (Local_849[iVar0 /*9*/])->f_5);
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
		{
			if (!func_165(32768))
			{
				fVar2 = 40f;
			}
			else
			{
				fVar2 = 30f;
			}
		}
		else if (((func_161() == 1500834021 || func_161() == -702816767) || func_161() == 669657108) || func_161() == -1317052143)
		{
			fVar2 = 20f;
		}
		else
		{
			fVar2 = 60f;
		}
		PED::SET_PED_SEEING_RANGE((Local_849[iVar0 /*9*/])->f_5, fVar2);
		PED::SET_PED_HEARING_RANGE((Local_849[iVar0 /*9*/])->f_5, 60f);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE((Local_849[iVar0 /*9*/])->f_5, 40f);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE((Local_849[iVar0 /*9*/])->f_5, 8f);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE((Local_849[iVar0 /*9*/])->f_5, -30f);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE((Local_849[iVar0 /*9*/])->f_5, 30f);
		WEAPON::REMOVE_ALL_PED_WEAPONS((Local_849[iVar0 /*9*/])->f_5, true, true);
		PED::SET_PED_ACCURACY((Local_849[iVar0 /*9*/])->f_5, 16);
		PED::SET_PED_COMBAT_MOVEMENT((Local_849[iVar0 /*9*/])->f_5, 1);
		PED::SET_PED_COMBAT_RANGE((Local_849[iVar0 /*9*/])->f_5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 22, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 29, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 0, true);
		iVar0++;
	}
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			func_166((Local_849[0 /*9*/])->f_5, joaat("weapon_repeater_carbine"), 100, 0, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[1 /*9*/])->f_5, joaat("weapon_repeater_carbine"), 100, 0, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[2 /*9*/])->f_5, joaat("weapon_repeater_carbine"), 100, 1, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[3 /*9*/])->f_5, joaat("weapon_repeater_carbine"), 100, 1, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[4 /*9*/])->f_5, joaat("weapon_revolver_cattleman"), 100, 0, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[5 /*9*/])->f_5, joaat("weapon_revolver_cattleman"), 100, 0, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[6 /*9*/])->f_5, joaat("weapon_revolver_cattleman"), 100, 0, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[7 /*9*/])->f_5, joaat("weapon_revolver_cattleman"), 100, 0, 0, 1056964608, 1065353216, 0);
			func_166((Local_849[8 /*9*/])->f_5, joaat("weapon_revolver_cattleman"), 100, 0, 0, 1056964608, 1065353216, 0);
			break;
	}
}

void func_65()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		PED::SET_PED_COMBAT_MOVEMENT((Local_849[iVar0 /*9*/])->f_5, 1);
		PED::SET_PED_COMBAT_RANGE((Local_849[iVar0 /*9*/])->f_5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 22, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 29, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 0, true);
		iVar0++;
	}
}

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_53();
	if (!func_165(32768))
	{
		(Local_601[0 /*19*/])->f_4 = 421625586;
		(Local_601[1 /*19*/])->f_4 = -258459266;
		(Local_601[2 /*19*/])->f_4 = -258459266;
		(Local_601[3 /*19*/])->f_4 = -258459266;
		(Local_601[5 /*19*/])->f_4 = 421625586;
		(Local_601[6 /*19*/])->f_4 = -22664287;
		(Local_601[7 /*19*/])->f_4 = -2036140949;
		(Local_601[8 /*19*/])->f_4 = -22664287;
		(Local_601[4 /*19*/])->f_4 = 1348830223;
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (iVar0 != 7)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION((Local_849[iVar0 /*9*/])->f_5, (Local_601[iVar0 /*19*/])->f_4, (Local_849[iVar0 /*9*/])->f_1, (Local_849[iVar0 /*9*/])->f_4, -1, !bParam0, bParam0, 0, -1082130432, 0);
			}
			iVar0++;
		}
		iVar1 = TASK::_0xF533D68FF970D190((Local_849[7 /*9*/])->f_1, -2036140949, 3f, 1, 0);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			TASK::_TASK_USE_SCENARIO_POINT((Local_849[7 /*9*/])->f_5, iVar1, 0, -1, !bParam0, bParam0, 0, 0, -1082130432, 0);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION((Local_849[7 /*9*/])->f_5, -2036140949, (Local_849[7 /*9*/])->f_1, (Local_849[7 /*9*/])->f_4, -1, !bParam0, bParam0, 0, -1082130432, 0);
		}
	}
	else
	{
		(Local_849[5 /*9*/])->f_1 = { -3955.041f, -2128.666f, -4.7153f };
		(Local_849[5 /*9*/])->f_4 = 280f;
		(Local_601[5 /*19*/])->f_4 = -1426662425;
		(Local_849[6 /*9*/])->f_1 = { -3955.982f, -2125.408f, -4.7749f };
		(Local_849[6 /*9*/])->f_4 = 180f;
		(Local_601[6 /*19*/])->f_4 = 935336933;
		(Local_849[4 /*9*/])->f_1 = { -3963.223f, -2121.671f, -3.5f };
		(Local_849[4 /*9*/])->f_4 = 240f;
		(Local_601[4 /*19*/])->f_4 = 1238531635;
		(Local_601[0 /*19*/])->f_4 = 421625586;
		(Local_601[1 /*19*/])->f_4 = -258459266;
		(Local_601[2 /*19*/])->f_4 = -258459266;
		(Local_601[3 /*19*/])->f_4 = -258459266;
		(Local_601[7 /*19*/])->f_4 = -2036140949;
		(Local_601[8 /*19*/])->f_4 = -22664287;
		iVar2 = 0;
		while (iVar2 <= 8)
		{
			if ((iVar2 != 7 && iVar2 != 5) && iVar2 != 6)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION((Local_849[iVar2 /*9*/])->f_5, (Local_601[iVar2 /*19*/])->f_4, (Local_849[iVar2 /*9*/])->f_1, (Local_849[iVar2 /*9*/])->f_4, -1, !bParam0, bParam0, 0, -1082130432, 0);
			}
			iVar2++;
		}
		iVar3 = TASK::_0xF533D68FF970D190((Local_849[7 /*9*/])->f_1, -2036140949, 3f, 1, 0);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar3))
		{
			TASK::_TASK_USE_SCENARIO_POINT((Local_849[7 /*9*/])->f_5, iVar3, 0, -1, !bParam0, bParam0, 0, 0, -1082130432, 0);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION((Local_849[7 /*9*/])->f_5, -2036140949, (Local_849[7 /*9*/])->f_1, (Local_849[7 /*9*/])->f_4, -1, !bParam0, bParam0, 0, -1082130432, 0);
		}
		iVar3 = TASK::_0xF533D68FF970D190((Local_849[5 /*9*/])->f_1, -1426662425, 3f, 1, 0);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar3))
		{
			TASK::_TASK_USE_SCENARIO_POINT((Local_849[5 /*9*/])->f_5, iVar3, 0, -1, !bParam0, bParam0, 0, 0, -1082130432, 0);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION((Local_849[5 /*9*/])->f_5, -1426662425, (Local_849[5 /*9*/])->f_1, (Local_849[5 /*9*/])->f_4, -1, !bParam0, bParam0, 0, -1082130432, 0);
		}
		iVar3 = TASK::_0xF533D68FF970D190((Local_849[6 /*9*/])->f_1, 935336933, 3f, 1, 0);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar3))
		{
			TASK::_TASK_USE_SCENARIO_POINT((Local_849[6 /*9*/])->f_5, iVar3, 0, -1, !bParam0, bParam0, 0, 0, -1082130432, 0);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION((Local_849[6 /*9*/])->f_5, -1426662425, (Local_849[6 /*9*/])->f_1, (Local_849[6 /*9*/])->f_4, -1, !bParam0, bParam0, 0, -1082130432, 0);
		}
	}
}

void func_67()
{
	int iVar0;

	if (!func_19(iLocal_19, 16) && func_167())
	{
		func_168(&iLocal_19, 16);
	}
	if ((func_19(iLocal_19, 1) && !func_19(iLocal_19, 2)) && Local_44.f_3 < 5)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
		func_168(&iLocal_19, 2);
	}
	if (func_19(iLocal_19, 4) && func_169(&uLocal_35) > 20f)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
		func_170(&iLocal_19, 4);
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		PED::SET_PED_RESET_FLAG((Local_849[iVar0 /*9*/])->f_5, 42, true);
		iVar0++;
	}
	func_171();
	func_172(&Local_44, &Local_849);
	func_173();
}

void func_68()
{
	if (!func_174(&Local_44, 9))
	{
		Local_44.f_198 = func_175(&Local_849, Local_44.f_199, Local_44.f_199);
	}
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			if (Local_44.f_3 < 5)
			{
				func_176();
				func_177();
				func_178();
				if (func_179() || func_180())
				{
					func_181(0);
					func_181(1);
					func_181(2);
					func_181(3);
					func_182(&Local_44, 5);
				}
			}
			switch (Local_44.f_3)
			{
				case 0:
					if (func_183())
					{
						func_182(&Local_44, 1);
					}
					break;
				case 1:
					break;
				case 5:
					switch (iLocal_972)
					{
						case 0:
							if (func_184())
							{
								iLocal_972 = 1;
							}
							break;
						case 1:
							func_185();
							if (func_186(&Local_44, &Local_849, -1))
							{
								func_187();
								func_182(&Local_44, 7);
							}
							break;
						case 2:
							func_182(&Local_44, 8);
							break;
					}
					break;
				case 7:
					AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Twin_Rocks", false, true);
					func_182(&Local_44, 8);
					break;
				case 8:
					func_182(&Local_44, 9);
					break;
				case 9:
					func_188();
					func_189();
					Local_44.f_205 = 125;
					func_190(&Local_44, &Local_849, 1000, 1, 1);
					if (func_129(&(Local_44.f_5), 33554432) && func_191())
					{
						func_182(&Local_44, 10);
					}
					break;
				case 10:
					break;
			}
			break;
	}
	if (Local_44.f_3 <= 5)
	{
		func_192(&Local_849, &Local_44);
	}
}

void func_69(var uParam0)
{
	if (uParam0->f_195 == 0)
	{
		if (func_193(uParam0))
		{
		}
		if (func_194(Global_1888801[uParam0->f_205 /*35*/]) == 3)
		{
			if (func_149(Global_35, 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			}
		}
		func_195(uParam0);
	}
	if (!func_129(&(uParam0->f_5), 1073741824))
	{
		if (!func_196())
		{
			if (uParam0->f_3 >= 4 && uParam0->f_3 < 8)
			{
				func_197(uParam0, 1);
				func_198(uParam0, 1);
			}
		}
		else if (uParam0->f_3 >= 8)
		{
			func_197(uParam0, 0);
			func_199(0);
		}
	}
	if (uParam0->f_195 < 5)
	{
		uParam0->f_195++;
	}
	else
	{
		uParam0->f_195 = 0;
	}
}

bool func_70(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_72()
{
	return func_70(&Global_1935630, 4096);
}

bool func_73(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_74(int iParam0)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_200(iParam0));
}

bool func_75(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_76()
{
	return Global_1897952->f_41;
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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

	if (!func_201())
	{
		return;
	}
	sVar1 = func_202(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_203(iParam4))
	{
		if (func_42(iParam0))
		{
			iParam4 = func_205(func_204(iParam0));
		}
		else
		{
			iParam4 = func_205(iParam1);
		}
	}
	if (func_203(iParam4))
	{
		iVar3 = func_206(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_208(func_207(iParam2));
	}
	else if ((func_209(iParam1, 2) || func_210(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_42(iParam0) && func_35(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_108(func_113());
		iVar5 = func_109(func_113());
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
				fVar7 = func_211(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_212(&sVar6, 109029619), sVar9, func_212(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_211(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_212(&sVar6, 109029619), func_212(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_213(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_79(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_24() == 0)
	{
		return;
	}
	if (func_214(128))
	{
		return;
	}
	if (!func_215(iParam0))
	{
		return;
	}
	if (func_35(iParam0, 32))
	{
		return;
	}
	func_8(iParam0, 32);
	func_216(Global_1935630, 8192);
	func_218(func_217(-1532769513, -36357794), 1);
	switch (func_204(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_218(func_217(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_218(func_217(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_218(func_217(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_218(func_217(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_218(func_217(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_218(func_217(-1532769513, -910218296), 1);
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
		func_8(iParam0, 64);
	}
}

bool func_80()
{
	return (Global_1894899 & 1 != 0 && func_219() != -1);
}

void func_81()
{
	if (!func_220(&Global_1327479))
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
	func_221(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_82(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_222() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_220(iVar1) && !func_223(iVar1, iParam2)) && (!bParam3 || !func_224(iVar1))) && (!bParam4 || !func_225(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_226(iVar0);
			}
		}
		iVar0++;
	}
}

void func_83(bool bParam0)
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

void func_84(bool bParam0)
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

void func_85(var uParam0)
{
}

void func_86(var uParam0)
{
}

void func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_227(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_228(&((Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1]));
		(Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1] = 0;
		iVar1++;
	}
}

void func_88(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_229(iVar0);
		}
		iVar0++;
	}
}

void func_89(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_90(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 4);
	}
}

void func_91(bool bParam0)
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_230(iVar0) && !func_231(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_232(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_233(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

int func_92(int iParam0, bool bParam1)
{
	switch (func_194(iParam0))
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

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 273461605;
		case 16:
			return -857964358;
		case 9:
			return -868076593;
		case 36:
			return 1205826474;
		case 127:
			return 2136753624;
		case 125:
			return -796902762;
		case 118:
			return 1360745816;
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

void func_94(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_234(1497516462);
			func_235(2016141805);
			func_235(1010885152);
			func_235(-502324015);
			break;
		case 2016141805:
			func_235(1497516462);
			func_234(2016141805);
			func_235(1010885152);
			func_235(-502324015);
			break;
		case 1010885152:
			func_235(1497516462);
			func_235(2016141805);
			func_234(1010885152);
			func_235(-502324015);
			break;
		case -502324015:
			func_235(1497516462);
			func_235(2016141805);
			func_235(1010885152);
			func_234(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_235(-538889627);
			func_235(-538880323);
			func_235(-1056767524);
			func_234(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_236();
			func_234(iParam0);
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
			func_237();
			func_234(iParam0);
			break;
		case 2019386373:
			func_235(-664252410);
			func_235(2109952320);
			func_234(2019386373);
			break;
		case -664252410:
			func_235(2019386373);
			func_235(2109952320);
			func_234(-664252410);
			break;
		case 2109952320:
			func_235(2019386373);
			func_235(-664252410);
			func_234(2109952320);
			break;
		case -1674179981:
			func_235(-1835851517);
			func_235(-1838352012);
			func_234(-1674179981);
			break;
		case -1835851517:
			func_235(-1674179981);
			func_235(-1838352012);
			func_234(-1835851517);
			break;
		case -1838352012:
			func_235(-1674179981);
			func_235(-1835851517);
			func_234(-1838352012);
			break;
		case -1717960576:
			func_235(210001842);
			func_234(-1717960576);
			break;
		case 210001842:
			func_235(-1717960576);
			func_234(210001842);
			break;
		case -150493654:
			func_235(-1271608261);
			func_235(1846061697);
			func_235(-1145519186);
			func_234(-150493654);
			break;
		case -1271608261:
			func_235(-150493654);
			func_235(1846061697);
			func_235(-1145519186);
			func_234(-1271608261);
			break;
		case 1846061697:
			func_235(-150493654);
			func_235(-1271608261);
			func_235(-1145519186);
			func_234(1846061697);
			break;
		case -1145519186:
			func_235(-150493654);
			func_235(-1271608261);
			func_235(1846061697);
			func_234(-1145519186);
			break;
		case 1766284049:
			func_235(280705402);
			func_235(1926308480);
			func_234(1766284049);
			break;
		case 280705402:
			func_235(1766284049);
			func_235(1926308480);
			func_234(280705402);
			break;
		case 1926308480:
			func_235(1766284049);
			func_235(280705402);
			func_234(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_235(439465264);
				func_234(1609506757);
			}
			else
			{
				func_235(1609506757);
				func_235(439465264);
			}
			break;
		case 439465264:
			if (func_238(1609506757))
			{
				if (bParam1)
				{
					func_234(439465264);
				}
				else
				{
					func_235(439465264);
				}
			}
			break;
		case 1822001510:
			func_235(-1612662716);
			func_234(1822001510);
			break;
		case -1612662716:
			func_235(1822001510);
			func_234(-1612662716);
			break;
		case 1306158345:
			func_235(1952610440);
			func_235(-223469678);
			func_235(-404698347);
			func_235(1517904467);
			func_234(1306158345);
			break;
		case 1952610440:
			func_235(1306158345);
			func_235(-223469678);
			func_235(-404698347);
			func_235(1517904467);
			func_234(1952610440);
			break;
		case -223469678:
			func_235(1306158345);
			func_235(1952610440);
			func_235(-404698347);
			func_235(1517904467);
			func_234(-223469678);
			break;
		case -404698347:
			func_235(1306158345);
			func_235(1952610440);
			func_235(-223469678);
			func_235(1517904467);
			func_234(-404698347);
			break;
		case 1517904467:
			func_235(1306158345);
			func_235(1952610440);
			func_235(-223469678);
			func_235(-404698347);
			func_234(1517904467);
			break;
		case 1376646519:
			func_235(931649776);
			func_235(-434590080);
			func_235(1743048395);
			func_235(449774763);
			func_234(1376646519);
			break;
		case 931649776:
			func_235(1376646519);
			func_235(-434590080);
			func_235(1743048395);
			func_235(449774763);
			func_234(931649776);
			break;
		case -434590080:
			func_235(1376646519);
			func_235(931649776);
			func_235(1743048395);
			func_235(449774763);
			func_234(-434590080);
			break;
		case 1743048395:
			func_235(1376646519);
			func_235(931649776);
			func_235(-434590080);
			func_235(449774763);
			func_234(1743048395);
			break;
		case 449774763:
			func_235(1376646519);
			func_235(931649776);
			func_235(-434590080);
			func_235(1743048395);
			func_234(449774763);
			break;
		case -1414537028:
			func_235(38162571);
			func_235(1350391819);
			func_235(54073871);
			func_234(-1414537028);
			break;
		case 38162571:
			func_235(-1414537028);
			func_235(1350391819);
			func_235(54073871);
			func_234(38162571);
			break;
		case 1350391819:
			func_235(-1414537028);
			func_235(38162571);
			func_235(54073871);
			func_234(1350391819);
			break;
		case 54073871:
			func_235(-1414537028);
			func_235(38162571);
			func_235(1350391819);
			func_234(54073871);
			break;
		case 198200492:
			func_234(198200492);
			func_235(-1124061431);
			func_235(52706132);
			func_235(-259123672);
			break;
		case -1124061431:
			func_235(198200492);
			func_234(-1124061431);
			func_235(52706132);
			func_235(-259123672);
			break;
		case 52706132:
			func_235(198200492);
			func_235(-1124061431);
			func_234(52706132);
			func_235(-259123672);
			break;
		case -259123672:
			func_235(198200492);
			func_235(-1124061431);
			func_235(52706132);
			func_234(-259123672);
			break;
		case -919512195:
			func_234(-919512195);
			func_235(-1925798111);
			func_235(420709909);
			func_235(1703426636);
			break;
		case -1925798111:
			func_234(-1925798111);
			func_235(-919512195);
			func_235(420709909);
			func_235(1703426636);
			break;
		case 420709909:
			func_234(420709909);
			func_235(-919512195);
			func_235(-1925798111);
			func_235(1703426636);
			break;
		case 1703426636:
			func_234(1703426636);
			func_235(-919512195);
			func_235(-1925798111);
			func_235(420709909);
			break;
		case -1223121209:
			func_234(-1223121209);
			func_235(630808005);
			break;
		case 630808005:
			func_234(630808005);
			func_235(-1223121209);
			break;
		case 1453909576:
			func_234(1453909576);
			func_235(1643531967);
			break;
		case 1643531967:
			func_234(1643531967);
			func_235(1453909576);
			break;
		case 0:
			func_234(0);
			func_235(473295046);
			func_235(-1738165526);
			break;
		case 473295046:
			func_234(473295046);
			func_235(0);
			func_235(-1738165526);
			break;
		case -1738165526:
			func_234(-1738165526);
			func_235(0);
			func_235(473295046);
			break;
		case 932909855:
			func_234(932909855);
			func_235(2051822093);
			break;
		case 2051822093:
			func_234(2051822093);
			func_235(932909855);
			break;
		case 405586984:
			func_234(405586984);
			func_235(1509509592);
			func_235(-959357075);
			func_235(-1311865656);
			break;
		case 1509509592:
			func_234(1509509592);
			func_235(405586984);
			func_235(-959357075);
			func_235(-1311865656);
			break;
		case -959357075:
			func_234(-959357075);
			func_235(1509509592);
			func_235(405586984);
			func_235(-1311865656);
			break;
		case -1311865656:
			func_234(-1311865656);
			func_235(1509509592);
			func_235(-959357075);
			func_235(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_234(-524145696);
			}
			else
			{
				func_235(-524145696);
			}
			func_235(1626481264);
			func_235(282809459);
			break;
		case 282809459:
			func_234(282809459);
			func_235(1626481264);
			func_235(-524145696);
			break;
		case 1626481264:
			func_234(1626481264);
			func_235(-524145696);
			func_235(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_234(885203519);
			}
			else
			{
				func_235(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_234(-1080627546);
			}
			else
			{
				func_235(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_238(iParam0))
				{
					func_234(iParam0);
				}
			}
			else if (func_238(iParam0))
			{
				func_235(iParam0);
			}
			break;
	}
}

void func_95(int iParam0)
{
	if (Local_44.f_205 != iParam0)
	{
		Local_44.f_205 = iParam0;
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Twin_Rocks", false, true);
	func_239();
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_31() && !func_30(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

int func_97()
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

int func_98(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_240(func_101(iParam0));
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_101(int iParam0)
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

int func_102(var uParam0)
{
	return uParam0 & 31;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

var func_105(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_241(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_106(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_107(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_108(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_109(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_110(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_111(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_112(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_242(uParam0, iParam6);
	func_243(uParam0, iParam5);
	func_244(uParam0, iParam4);
	func_245(uParam0, iParam3);
	func_246(uParam0, iParam2);
	func_247(uParam0, iParam1);
}

int func_113()
{
	return &Global_1899515;
}

bool func_114(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_248(iParam1) || !func_248(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_115(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_46(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_116(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_117(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_118(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_119(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_46(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_120(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (!func_115(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_121(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

var func_122(var uParam0, int iParam1)
{
	*uParam0 = func_249(Global_1888801[iParam1 /*35*/]);
	if (*uParam0 >= 4)
	{
		*uParam0 = 3;
	}
	return *uParam0;
}

void func_123(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_124(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 10)
	{
		(Local_601[iVar0 /*19*/])->f_3 = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		switch (iVar1)
		{
			case 0:
				*(Local_981[iVar1 /*4*/]) = { -3971.094f, -2144.598f, -6.2625f };
				(Local_981[iVar1 /*4*/])->f_3 = 4f;
				break;
			case 1:
				*(Local_981[iVar1 /*4*/]) = { -3981.807f, -2146.849f, -6.2549f };
				(Local_981[iVar1 /*4*/])->f_3 = 4f;
				break;
			case 2:
				*(Local_981[iVar1 /*4*/]) = { -3978.186f, -2138.788f, -6.3548f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 3:
				*(Local_981[iVar1 /*4*/]) = { -3970.302f, -2125.941f, -5.8482f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 4:
				*(Local_981[iVar1 /*4*/]) = { -3968.119f, -2119.825f, -5.5615f };
				(Local_981[iVar1 /*4*/])->f_3 = 1.5f;
				break;
			case 5:
				*(Local_981[iVar1 /*4*/]) = { -3964.27f, -2115.999f, -5.3122f };
				(Local_981[iVar1 /*4*/])->f_3 = 1.5f;
				break;
			case 6:
				*(Local_981[iVar1 /*4*/]) = { -3929.049f, -2138.114f, -2.1214f };
				(Local_981[iVar1 /*4*/])->f_3 = 4f;
				break;
			case 7:
				*(Local_981[iVar1 /*4*/]) = { -3929.245f, -2142.282f, -2.7944f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 8:
				*(Local_981[iVar1 /*4*/]) = { -3937.728f, -2156.474f, -4.5805f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 9:
				*(Local_981[iVar1 /*4*/]) = { -3937.795f, -2146.768f, -4.1406f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 10:
				*(Local_981[iVar1 /*4*/]) = { -3945.072f, -2148.385f, -4.8529f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 11:
				*(Local_981[iVar1 /*4*/]) = { -3950.908f, -2145.867f, -5.4153f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 12:
				*(Local_981[iVar1 /*4*/]) = { -3956.188f, -2151.824f, -5.8898f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 13:
				*(Local_981[iVar1 /*4*/]) = { -3954.779f, -2158.29f, -6.2883f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 14:
				*(Local_981[iVar1 /*4*/]) = { -3966.381f, -2156.465f, -7.027f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 15:
				*(Local_981[iVar1 /*4*/]) = { -3961.58f, -2121.125f, -5.5624f };
				(Local_981[iVar1 /*4*/])->f_3 = 5f;
				break;
			case 16:
				*(Local_981[iVar1 /*4*/]) = { -3955.941f, -2126.14f, -5.8552f };
				(Local_981[iVar1 /*4*/])->f_3 = 8f;
				break;
			case 17:
				*(Local_981[iVar1 /*4*/]) = { -3951.994f, -2138.524f, -7.1198f };
				(Local_981[iVar1 /*4*/])->f_3 = 6f;
				break;
			case 26:
				*(Local_981[iVar1 /*4*/]) = { -3956.437f, -2125.543f, -0.5384f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 27:
				*(Local_981[iVar1 /*4*/]) = { -3951.983f, -2138.202f, -0.8788f };
				(Local_981[iVar1 /*4*/])->f_3 = 4f;
				break;
			case 18:
				*(Local_981[iVar1 /*4*/]) = { -3969.329f, -2157.042f, -7.2936f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 19:
				*(Local_981[iVar1 /*4*/]) = { -3961.913f, -2162.208f, -6.5693f };
				(Local_981[iVar1 /*4*/])->f_3 = 3f;
				break;
			case 20:
				*(Local_981[iVar1 /*4*/]) = { -3947.224f, -2153.151f, -5.1127f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 21:
				*(Local_981[iVar1 /*4*/]) = { -3942.24f, -2130.83f, -4.5484f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 22:
				*(Local_981[iVar1 /*4*/]) = { -3945.389f, -2122.152f, -4.6311f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 23:
				*(Local_981[iVar1 /*4*/]) = { -3958.01f, -2111.579f, -4.5302f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 24:
				*(Local_981[iVar1 /*4*/]) = { -3964.481f, -2109.635f, -5.0323f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
			case 25:
				*(Local_981[iVar1 /*4*/]) = { -3970.395f, -2116.261f, -5.5881f };
				(Local_981[iVar1 /*4*/])->f_3 = 2f;
				break;
		}
		iVar1++;
	}
}

void func_126(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] == 0)
		{
			iVar1 = iVar0;
			Jump @68; //curOff = 42
		}
		else if (uParam0[iVar0] == iParam1)
		{
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		(*uParam0)[iVar1] = iParam1;
	}
}

bool func_127(int iParam0)
{
	return iParam0 != 0;
}

void func_128(int iParam0)
{
	Global_1898091 = (&Global_1898091 - (Global_1898091 && iParam0));
}

bool func_129(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

Vector3 func_130(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 9:
			vVar0 = { 1897.123f, -1863.157f, 46.0415f };
			break;
		case 16:
			vVar0 = { -2205.06f, 704.86f, 107.62f };
			break;
		case 36:
			vVar0 = { -45.93f, 1230.82f, 175.19f };
			break;
		case 79:
			vVar0 = { 2351f, 1335.5f, 102.4f };
			break;
		case 125:
			vVar0 = { -3962.021f, -2137.957f, -5.9562f };
			break;
		case 127:
			vVar0 = { -1411.857f, -2333.451f, 42.1056f };
			break;
		case 118:
			vVar0 = { -4201.647f, -3440.702f, 47.5009f };
			break;
		case 129:
			vVar0 = { -5415.055f, -3654.25f, -13.4989f };
			break;
		case 114:
			vVar0 = { -5984.121f, -3249.982f, -22.5604f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, VOLUME::GET_VOLUME_COORDS(func_250(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_131(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_132(var uParam0, bool bParam1)
{
	char* sVar0;

	switch (uParam0->f_205)
	{
		case 79:
			sVar0 = "AZ_hideout_beaver_hollow";
			break;
		case 118:
			sVar0 = "AZ_hideout_fort_mercer";
			break;
		case 16:
			sVar0 = "AZ_hideout_hanging_dog_ranch";
			break;
		case 9:
			sVar0 = "AZ_hideout_shady_belle";
			break;
		case 36:
			sVar0 = "AZ_hideout_six_point_cabin";
			break;
		case 127:
			sVar0 = "AZ_hideout_thieves_landing";
			break;
		case 125:
			sVar0 = "AZ_hideout_Twin_Rocks";
			break;
		default:
			return;
	}
	if (func_129(&(uParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_251(&(uParam0->f_5), 262144);
	}
	else
	{
		func_252(&(uParam0->f_5), 262144);
	}
	AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, bParam1, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, true, true);
}

void func_133(var uParam0)
{
	func_254(uParam0, (func_253(uParam0) - 6f));
	func_255(uParam0, 1);
}

void func_134(var uParam0)
{
	func_256(uParam0, 0);
	func_156(uParam0, 0);
	func_136(uParam0, 1);
	func_257(uParam0, 1);
	func_159(uParam0, 0);
	func_258(uParam0, 1);
	func_259(uParam0, 1, 1, 1);
}

void func_135(var uParam0)
{
	func_260(uParam0, 1);
	func_261(uParam0, 1);
	func_157(uParam0, 1);
}

void func_136(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 256);
	}
	else
	{
		func_263(&(uParam0->f_1), 256);
	}
}

void func_137(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_139(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_140(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (*uParam0 <= 1)
	{
		return;
	}
	iVar0 = (*uParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		uVar2 = uParam0[iVar1];
		(*uParam0)[iVar1] = uParam0[iVar0];
		(*uParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_141(var uParam0)
{
	switch (uParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

int func_142(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_99(iParam0))
	{
		return 0;
	}
	return func_264(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_143(var uParam0)
{
}

void func_144(var uParam0)
{
	uParam0->f_136.f_9 = { 0f, 0f, 0f };
	uParam0->f_136.f_12 = 1;
	uParam0->f_136.f_13 = 30f;
	uParam0->f_136.f_14 = 100f;
	uParam0->f_136.f_15 = -1;
	uParam0->f_136.f_16 = 1500;
	uParam0->f_136.f_17 = 1000;
	uParam0->f_136.f_6 = 25f;
}

void func_145(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	switch (uParam0->f_205)
	{
		case 79:
			iVar0 = 325633398;
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 214473058;
			}
			else
			{
				iVar0 = 1811505867;
			}
			break;
		case 9:
			iVar0 = -2009656535;
			break;
		case 36:
			iVar0 = 214473058;
			break;
		case 125:
			iVar0 = 1004822587;
			break;
		case 127:
			iVar0 = 1004822587;
			break;
		default:
			uParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { func_217(953441746, iVar0) };
		STATS::STAT_ID_GET_INT(&Var1, &(uParam0->f_200));
	}
}

void func_146(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_265(uParam0, iParam1, sParam2))
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

int func_147(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			func_266(uParam1);
			func_267(uParam2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3) || func_268(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!func_269(uParam1))
			{
				return 0;
			}
			if (!func_270(uParam2))
			{
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				if (!HUD::TEXT_BLOCK_IS_LOADED(sParam3))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = func_271(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_272(&(uParam0->f_7), 2))
	{
		if (func_272(&(uParam0->f_7), 8))
		{
			iVar0 = func_271(-1038436471, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_ON_MOUNT(uParam0->f_5, iVar0, -1, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, iParam1);
		if (func_272(&(uParam0->f_7), 4))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, 1, 0, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		func_273(uParam0->f_5, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
}

bool func_149(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_1(iParam0, iParam1);
}

void func_150(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 65536);
	}
	else
	{
		func_262(uParam0, 65536);
	}
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 1);
	}
	else
	{
		func_263(&(uParam0->f_1), 1);
	}
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 4);
	}
	else
	{
		func_263(&(uParam0->f_1), 4);
	}
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 2);
	}
	else
	{
		func_263(&(uParam0->f_1), 2);
	}
}

void func_154(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 16);
	}
	else
	{
		func_263(&(uParam0->f_1), 16);
	}
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 8);
	}
	else
	{
		func_263(&(uParam0->f_1), 8);
	}
}

void func_156(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 2048);
	}
	else
	{
		func_263(&(uParam0->f_1), 2048);
	}
}

void func_157(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 8);
	}
	else
	{
		func_262(uParam0, 8);
	}
}

void func_158(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 32);
	}
	else
	{
		func_262(uParam0, 32);
	}
}

void func_159(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 128);
	}
	else
	{
		func_263(&(uParam0->f_1), 128);
	}
}

void func_160(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 4096);
	}
	else
	{
		func_262(uParam0, 4096);
	}
}

int func_161()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_162(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_274(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_275(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_149(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_164(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

int func_165(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_108(func_113());
	if (func_276(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_276(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_277(iParam3, 1);
	bVar1 = func_277(iParam3, 2);
	bVar2 = !func_277(iParam3, 4);
	bVar3 = func_277(iParam3, 8);
	bVar4 = !func_277(iParam3, 16);
	bVar5 = func_277(iParam3, 32);
	bVar6 = func_277(iParam3, 64);
	return func_278(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_167()
{
	if (func_19(iLocal_19, 16))
	{
		return 1;
	}
	if (!func_279(&((Local_1140[0 /*6*/])->f_3), &((Local_1140[0 /*6*/])->f_1), &((Local_1140[0 /*6*/])->f_2), -159553124, -3953.96f, -2130.33f, -5.3f, 1))
	{
		return 0;
	}
	if (!func_279(&((Local_1140[1 /*6*/])->f_3), &((Local_1140[1 /*6*/])->f_1), &((Local_1140[1 /*6*/])->f_2), -1521274693, -3962.54f, -2119.48f, -5.09f, 1))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(&(Local_1140[0 /*6*/])))
	{
		Local_1140[0 /*6*/] = TASK::_0xD508FA229F1C4900((Local_1140[0 /*6*/])->f_2, 0f, 0f, 0f, 991715917, 1f);
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(&(Local_1140[1 /*6*/])))
	{
		Local_1140[1 /*6*/] = TASK::_0xD508FA229F1C4900((Local_1140[1 /*6*/])->f_2, 0f, 0f, 0f, 1691157334, 1f);
		return 0;
	}
	func_280(-159553124, -3953.96f, -2130.33f, -5.3f, &((Local_1140[0 /*6*/])->f_2), &(Local_1140[0 /*6*/]), 0);
	func_280(-1521274693, -3962.54f, -2119.48f, -5.09f, &((Local_1140[1 /*6*/])->f_2), &(Local_1140[1 /*6*/]), 0);
	func_281(-159553124, -3953.96f, -2130.33f, -5.3f, &((Local_1140[0 /*6*/])->f_2), -1682377294, 1, &(Local_1140[0 /*6*/]), 0, 0);
	func_281(-1521274693, -3962.54f, -2119.48f, -5.09f, &((Local_1140[1 /*6*/])->f_2), 544283678, 1, &(Local_1140[1 /*6*/]), 0, 0);
	func_281(-1521274693, -3962.54f, -2119.48f, -5.09f, &((Local_1140[1 /*6*/])->f_2), 318818236, 1, &(Local_1140[1 /*6*/]), 0, 0);
	return 1;
}

void func_168(int iParam0, int iParam1)
{
	func_282(iParam0, iParam1);
}

float func_169(var uParam0)
{
	if (!func_283(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_284(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_285() - uParam0->f_1);
}

void func_170(int iParam0, int iParam1)
{
	func_286(iParam0, iParam1);
}

void func_171()
{
	int iVar0;

	func_287();
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_288(iVar0);
		iVar0++;
	}
}

void func_172(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_196 >= uParam0->f_199)
		{
			uParam0->f_196 = 0;
		}
		if (func_149(((*iParam1)[uParam0->f_196 /*9*/])->f_5, 0, 1))
		{
			((*iParam1)[iVar0 /*9*/])->f_8 = func_289(((*iParam1)[uParam0->f_196 /*9*/])->f_5, Global_35, 0, 1);
			if ((*iParam1)[iVar0 /*9*/])->f_8 < func_290(uParam0)
			{
				if (!func_272(&(((*iParam1)[uParam0->f_196 /*9*/])->f_7), 16))
				{
					func_291(&(((*iParam1)[uParam0->f_196 /*9*/])->f_7), 32);
					func_292(&(((*iParam1)[uParam0->f_196 /*9*/])->f_7), 16, 1);
				}
			}
			else if (!func_272(&(((*iParam1)[uParam0->f_196 /*9*/])->f_7), 32))
			{
				func_291(&(((*iParam1)[uParam0->f_196 /*9*/])->f_7), 16);
				func_292(&(((*iParam1)[uParam0->f_196 /*9*/])->f_7), 32, 1);
			}
			if (!func_129(&(uParam0->f_5), 65536))
			{
				if (func_293(((*iParam1)[uParam0->f_196 /*9*/])->f_5, 45f, 30f, ((*iParam1)[iVar0 /*9*/])->f_8, 70f))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(((*iParam1)[uParam0->f_196 /*9*/])->f_5, true, false) };
					func_251(&(uParam0->f_5), 65536);
				}
			}
		}
		uParam0->f_196++;
		iVar0++;
	}
}

void func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_44.f_3 > 5)
	{
		return;
	}
	iVar0 = iLocal_980;
	if (iVar0 == 9 || iVar0 == 10)
	{
		iLocal_980++;
		if (iLocal_980 >= 13)
		{
			iLocal_980 = 0;
		}
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_849[iVar0 /*9*/])->f_5) && !ENTITY::IS_ENTITY_DEAD((Local_849[iVar0 /*9*/])->f_5))
	{
		if ((Local_601[iVar0 /*19*/])->f_18 && func_294((Local_849[iVar0 /*9*/])->f_5, &(iLocal_1098[0]), 0, 1))
		{
			(Local_601[iVar0 /*19*/])->f_18 = 0;
		}
		else if (!func_294((Local_849[iVar0 /*9*/])->f_5, &(iLocal_1098[0]), 0, 1) && !(Local_601[iVar0 /*19*/])->f_18)
		{
			PED::SET_PED_CONFIG_FLAG((Local_849[iVar0 /*9*/])->f_5, 112, false);
			PED::SET_PED_COMBAT_MOVEMENT((Local_849[iVar0 /*9*/])->f_5, 1);
			func_296(iVar0, func_295(ENTITY::GET_ENTITY_COORDS((Local_849[iVar0 /*9*/])->f_5, true, false)));
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(0, *(Local_981[(Local_601[iVar0 /*19*/])->f_3 /*4*/]), Global_36, 2f, 1, 0.5f, 4f, 1, 8192, 0, -687903391);
			TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
			func_297((Local_849[iVar0 /*9*/])->f_5, &iLocal_1114, 0f, 0.5f, 1, 1);
			(Local_601[iVar0 /*19*/])->f_18 = 1;
		}
		else if (func_298(Global_35, (Local_849[iVar0 /*9*/])->f_5, 3f, 1))
		{
			func_299(iVar0);
		}
		else if (func_300(&((Local_601[iVar0 /*19*/])->f_11)) > 20f)
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_1098[7]), true, 0) && !PED::GET_PED_CONFIG_FLAG((Local_849[iVar0 /*9*/])->f_5, 112, true)) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((Local_849[iVar0 /*9*/])->f_5, Global_35, 17))
			{
				if (func_301(27) && iVar1 < 20)
				{
					func_296(iVar0, 27);
				}
				else if (iVar1 == 0)
				{
					func_299(iVar0);
				}
			}
			else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_1098[9]), true, 0) && !PED::GET_PED_CONFIG_FLAG((Local_849[iVar0 /*9*/])->f_5, 112, true)) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((Local_849[iVar0 /*9*/])->f_5, Global_35, 17))
			{
				if (func_301(26) && iVar1 < 20)
				{
					func_296(iVar0, 26);
				}
				else if (iVar1 == 0)
				{
					func_299(iVar0);
				}
			}
			else if (iVar1 > 100 || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((Local_849[iVar0 /*9*/])->f_5, Global_35, 17))
			{
				iVar2 = func_302((Local_601[iVar0 /*19*/])->f_3);
				if (iVar2 != -1 && iVar2 != (Local_601[iVar0 /*19*/])->f_3)
				{
					func_296(iVar0, iVar2);
				}
			}
		}
	}
	else if ((Local_601[iVar0 /*19*/])->f_3 != -1 && ENTITY::DOES_ENTITY_EXIST((Local_849[iVar0 /*9*/])->f_5))
	{
		func_303(iVar0);
	}
	iLocal_980++;
	if (iLocal_980 >= 13)
	{
		iLocal_980 = 0;
	}
}

int func_174(var uParam0, int iParam1)
{
	if (uParam0->f_3 < iParam1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_149(((*iParam0)[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_176()
{
	int iVar0;
	int iVar1;

	if (!func_129(&(Local_44.f_5), 65536))
	{
		return;
	}
	if (func_129(&(Local_44.f_5), 131072))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (!MAP::DOES_BLIP_EXIST((Local_849[iVar1 /*9*/])->f_6))
		{
			if (func_304((Local_849[iVar1 /*9*/])->f_5, 60f, 0))
			{
				func_305(Local_849[iVar1 /*9*/], 831283580, -662251075);
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 13)
	{
		func_251(&(Local_44.f_5), 131072);
	}
}

void func_177()
{
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			break;
	}
}

void func_178()
{
	switch (iLocal_18)
	{
		case 0:
			if (func_165(32768))
			{
				iLocal_18 = 4;
			}
			else
			{
				iLocal_18 = 3;
			}
			break;
		case 1:
			func_66(0);
			iLocal_18 = 3;
			break;
		case 2:
			func_66(0);
			iLocal_18 = 4;
			break;
		case 3:
			if (func_165(32768))
			{
				iLocal_18 = 2;
			}
			break;
		case 4:
			if (!func_165(32768))
			{
				iLocal_18 = 1;
			}
			break;
	}
}

int func_179()
{
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			if (((func_306(0, 15f, 25f, -1) || func_306(1, 15f, 25f, -1)) || func_306(2, 25f, 35f, -1)) || func_306(3, 30f, 40f, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_180()
{
	int iVar0;

	iVar0 = func_307(Global_36, 0);
	if (func_294(Global_35, &(iLocal_1098[4]), 0, 1) && func_308(&iVar0))
	{
		func_309();
		if (func_310((Local_849[iVar0 /*9*/])->f_5, (Local_849[iVar0 /*9*/])->f_5, 4, 0, -1082130432, 291934926, -1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (func_311((Local_849[iVar0 /*9*/])->f_5, 0, &(Local_44.f_155), &(Local_44.f_183), 0, 0))
		{
			if (func_312(Local_44.f_183, 1, 1, 1, 0) || Local_44.f_183 == 256)
			{
				iLocal_975 = iVar0;
				func_309();
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_181(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG((Local_849[iParam0 /*9*/])->f_5, 297, false);
	PED::SET_PED_CONFIG_FLAG((Local_849[iParam0 /*9*/])->f_5, 130, false);
	PED::SET_PED_CONFIG_FLAG((Local_849[iParam0 /*9*/])->f_5, 315, false);
	PED::SET_PED_CONFIG_FLAG((Local_849[iParam0 /*9*/])->f_5, 301, true);
	func_313(Local_268[iParam0 /*83*/], &((Local_268[iParam0 /*83*/])->f_21));
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_183()
{
	int iVar0;

	iVar0 = -1;
	iVar0 = func_314(&Local_849, &Local_44, 0, 0, 0, (Local_44.f_199 - 1));
	if (iVar0 < 0)
	{
		return 0;
	}
	Local_44.f_190 = iVar0;
	Local_44.f_192 = (Local_849[Local_44.f_190 /*9*/])->f_5;
	return 1;
}

int func_184()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = func_307(Global_36, 0);
	if ((!func_19(iLocal_19, 8) && func_315(0f, iVar0, 0, 0)) && func_310((Local_849[iVar0 /*9*/])->f_5, 0, 5, 0f, -1f, 291934926, iVar0))
	{
		func_168(&iLocal_19, 8);
	}
	switch (iLocal_15)
	{
		case 0:
			func_316();
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (!ENTITY::IS_ENTITY_DEAD((Local_849[iVar0 /*9*/])->f_5))
				{
					PED::SET_PED_SEEING_RANGE((Local_849[iVar0 /*9*/])->f_5, 60f);
					PED::SET_PED_HEARING_RANGE((Local_849[iVar0 /*9*/])->f_5, 60f);
				}
				iVar0++;
			}
			iLocal_15 = 1;
			break;
		case 1:
			func_317(iLocal_975, 0);
			func_318(iLocal_975);
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (iVar0 != iLocal_975)
				{
					if (func_298((Local_849[iVar0 /*9*/])->f_5, (Local_849[iLocal_975 /*9*/])->f_5, 10f, 1))
					{
						(Local_601[iVar0 /*19*/])->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 500);
					}
					else
					{
						(Local_601[iVar0 /*19*/])->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
					}
					func_319(&((Local_601[iVar0 /*19*/])->f_14));
				}
				iVar0++;
			}
			iLocal_15 = 2;
			break;
		case 2:
			if ((Local_44.f_183 == 4 && !func_321(func_320(Global_35, 1, 0, 0))) || Local_44.f_183 == 256)
			{
				iVar0 = 0;
				while (iVar0 <= 8)
				{
					if (iVar0 != iLocal_975 && func_149((Local_849[iVar0 /*9*/])->f_5, 0, 1))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO((Local_849[iVar0 /*9*/])->f_5))
						{
							PED::_0x62FDAD5E01D2DD47((Local_849[iVar0 /*9*/])->f_5, Global_36, 3, 0);
						}
						fVar1 = (func_289(Global_35, (Local_849[iVar0 /*9*/])->f_5, 1, 1) * 0.2f);
						vVar2 = { func_322(Global_36, fVar1, 0.5f) };
						TASK::TASK_AIM_AT_COORD((Local_849[iVar0 /*9*/])->f_5, vVar2, 5000, 0, 0);
					}
					iVar0++;
				}
			}
			iLocal_15 = 3;
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if ((Local_601[iVar0 /*19*/])->f_2)
				{
					iVar5++;
				}
				else if ((func_323(&((Local_601[iVar0 /*19*/])->f_14)) > (Local_601[iVar0 /*19*/])->f_17 || func_298(Global_35, (Local_849[iVar0 /*9*/])->f_5, 8f, 1)) || func_324(iVar0))
				{
					func_317(iVar0, 1);
				}
				iVar0++;
			}
			func_325();
			if (iVar5 >= (8 - 0) + 1)
			{
				iLocal_15 = 4;
			}
			break;
		case 4:
			func_181(0);
			func_181(1);
			func_181(2);
			func_181(3);
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
			func_168(&iLocal_19, 4);
			func_319(&uLocal_35);
			return 1;
	}
	return 0;
}

void func_185()
{
	if (!func_283(&uLocal_32))
	{
		func_319(&uLocal_32);
	}
	if (Local_44.f_198 > 4)
	{
		func_326();
	}
	func_327();
	func_328();
	func_329();
}

int func_186(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;

	if (iParam2 >= 0)
	{
		iVar0 = iParam2;
	}
	else
	{
		iVar0 = uParam0->f_198;
	}
	if (iVar0 < uParam0->f_189)
	{
		switch (uParam0->f_205)
		{
			case 79:
				vVar3 = { 2279.824f, 1490.092f, 83.44096f };
				break;
			case 16:
				vVar3 = { -2142.385f, 797.8377f, 135.6134f };
				break;
			case 36:
				vVar3 = { -50.2002f, 1267.741f, 171.5688f };
				break;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_199)
		{
			func_330((*iParam1)[iVar1 /*9*/], uParam0->f_207, &uVar2, iVar1, vVar3);
			iVar1++;
		}
		if (!func_283(&(uParam0->f_211)))
		{
			func_331(&(uParam0->f_211), 0);
		}
		func_251(&(uParam0->f_5), 128);
		return 1;
	}
	return 0;
}

void func_187()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_849[iVar0 /*9*/])->f_5) && !PED::IS_PED_INJURED((Local_849[iVar0 /*9*/])->f_5))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED((Local_849[iVar0 /*9*/])->f_5, Global_35, 3, 266240, -1082130432, -1, 0);
		}
		iVar0++;
	}
}

void func_188()
{
	int iVar0;
	int iVar1;

	if (func_129(&(Local_44.f_5), 33554432))
	{
		return;
	}
	iVar0 = (10 - 0) + 1;
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		if (MAP::DOES_BLIP_EXIST((Local_849[iVar1 /*9*/])->f_6))
		{
			if ((!func_298(Global_35, (Local_849[iVar1 /*9*/])->f_5, 50f, 1) && ENTITY::IS_ENTITY_OCCLUDED((Local_849[iVar1 /*9*/])->f_5)) || !func_149((Local_849[iVar1 /*9*/])->f_5, 0, 1))
			{
				MAP::REMOVE_BLIP(&((Local_849[iVar1 /*9*/])->f_6));
				if (!func_149((Local_849[iVar1 /*9*/])->f_5, 0, 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&((Local_849[iVar1 /*9*/])->f_5));
				}
				else
				{
					PED::DELETE_PED(&((Local_849[iVar1 /*9*/])->f_5));
				}
			}
		}
		else
		{
			iVar0 = (iVar0 - 1);
		}
		iVar1++;
	}
	if (iVar0 <= 0)
	{
		func_251(&(Local_44.f_5), 33554432);
	}
}

void func_189()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD((Local_849[iVar0 /*9*/])->f_5))
		{
			switch (iLocal_20)
			{
				case 0:
					if (func_315(0.5f, -1, 1, 0) && func_310((Local_849[iVar0 /*9*/])->f_5, 0, 6, 0, -1082130432, 291934926, -1))
					{
						iLocal_20++;
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_190(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_332(iParam1, uParam0))
	{
		return 0;
	}
	if (!func_129(&(uParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		func_333(uParam0);
		func_334(uParam0);
		if (bParam4)
		{
			func_335(uParam0->f_205, bParam3, 0);
		}
		func_132(uParam0, 0);
		func_251(&(uParam0->f_5), 256);
		func_251(&(uParam0->f_5), 8);
	}
	return 1;
}

int func_191()
{
	int iVar0;

	if (!func_283(&uLocal_41))
	{
		func_331(&uLocal_41, 0);
	}
	else if (func_300(&uLocal_41) > 5f)
	{
		switch (iLocal_971)
		{
			case 0:
				iVar0 = 15;
				break;
			case 1:
			case 2:
				iVar0 = 16;
				break;
		}
		if (func_310(Global_35, 0, iVar0, 0, -1082130432, 291934926, -1))
		{
			return 1;
		}
	}
	else if (func_300(&uLocal_41) > 3f && !func_336(Global_35, 716706914))
	{
		if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
		}
		else
		{
			func_337(Global_35, 1);
		}
	}
	return 0;
}

void func_192(int iParam0, var uParam1)
{
	int iVar0;

	if (!func_338(uParam1->f_205) && !func_70(&Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < uParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST(((*iParam0)[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(((*iParam0)[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					func_339(uParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_193(var uParam0)
{
	if (!func_129(&(uParam0->f_5), 1024))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_215, Global_36))
		{
			if (func_149(Global_35, 0, 1))
			{
				func_340(uParam0, 1);
				func_251(&(uParam0->f_5), 1024);
				return 1;
			}
		}
	}
	else if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_215, Global_36) && func_194(Global_1888801[uParam0->f_205 /*35*/]) != 3)
	{
		if (func_149(Global_35, 0, 1))
		{
			func_340(uParam0, 0);
			func_252(&(uParam0->f_5), 1024);
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_341(iParam0);
}

void func_195(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_342(302))
	{
		return;
	}
	if (func_28() == uParam0->f_205)
	{
		return;
	}
	if (!func_343(uParam0->f_205))
	{
		return;
	}
	if (func_25(32, 0, 1))
	{
		return;
	}
	if (func_34(83, 0))
	{
		return;
	}
	if (!func_5(uParam0->f_205, 0))
	{
		return;
	}
	if (func_129(&(uParam0->f_5), 1024))
	{
		if (func_344(uParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_345(302, &iVar0, &iVar1);
			func_346(iVar0, iVar1);
			func_347(&iVar0, &iVar1);
			func_348("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_196()
{
	return func_349(2);
}

void func_197(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(uParam0, 1);
		func_351(2);
	}
	else
	{
		if (func_349(2))
		{
			func_350(uParam0, 0);
		}
		func_128(2);
	}
}

void func_198(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_129(&(uParam0->f_5), 32768))
		{
			LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
			func_251(&(uParam0->f_5), 32768);
		}
	}
	else if (func_129(&(uParam0->f_5), 32768))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		func_252(&(uParam0->f_5), 32768);
	}
}

void func_199(bool bParam0)
{
	if (bParam0)
	{
		if (!func_352())
		{
			func_351(8);
		}
	}
	else if (func_352())
	{
		func_128(8);
	}
}

int func_200(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_31())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_353())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_25(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_202(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_354(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_356(func_355(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_357(iParam0) || func_358(45))
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

bool func_203(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_204(int iParam0)
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

int func_205(int iParam0)
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

int func_206(int iParam0)
{
	if (!func_203(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_207(int iParam0)
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

char* func_208(int iParam0)
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

bool func_209(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_210(int iParam0, int iParam1)
{
	if (!func_203(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

float func_211(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_212(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_360(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_213(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_214(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_215(int iParam0)
{
	int iVar0;

	if (func_357(iParam0))
	{
		if (!func_358(45))
		{
			return 0;
		}
	}
	iVar0 = func_204(iParam0);
	if (func_361())
	{
		if (!func_92(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_217(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_218(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_219()
{
	return Global_1894899->f_2;
}

bool func_220(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_221(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_222()
{
	return Global_1310750->f_16037;
}

bool func_223(int iParam0, int iParam1)
{
	if (!func_220(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_224(int iParam0)
{
	if (!func_220(iParam0))
	{
		return 0;
	}
	if (func_362(64) && func_363(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_225(int iParam0)
{
	if (!func_220(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_226(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_220(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_364(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_227(int iParam0)
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

void func_228(int iParam0)
{
	if (func_365(iParam0) && func_366())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_229(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_46((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_367((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_368((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
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
	func_369((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_370(iParam0, 536870912);
	iVar1 = func_371(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_228(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
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
	func_372(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_373(iParam0, 0);
}

bool func_230(int iParam0)
{
	return func_374(iParam0, 16, 1);
}

bool func_231(int iParam0)
{
	return func_232(iParam0, 32, 1);
}

bool func_232(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_375(iParam0))
		{
			return false;
		}
	}
	func_376(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_377(iParam0)))
	{
		func_378(iParam0, 4, 1);
		func_378(iParam0, 17, 1);
		func_378(iParam0, 1, 1);
		func_378(iParam0, 2, 1);
		return;
	}
	if (!func_379(iParam0))
	{
		return;
	}
	if (func_231(iParam0) && !bParam2)
	{
		return;
	}
	if (func_230(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_377(iParam0))) && func_380(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_378(iParam0, 4, 1);
	func_378(iParam0, 17, 1);
	func_378(iParam0, 1, 1);
	func_378(iParam0, 2, 1);
	func_381(iParam0, func_377(iParam0));
	func_382(iParam0, 1, 1, 1, bParam4);
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_383(iParam0, 1);
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

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_383(iParam0, 1);
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

void func_236()
{
	func_235(-939420910);
	func_235(-1187950766);
	func_235(356365161);
	func_235(753127042);
	func_235(-2038424081);
	func_235(1884271742);
	func_235(459290420);
}

void func_237()
{
	func_235(704802028);
	func_235(588987611);
	func_235(2008888900);
	func_235(1649996811);
	func_235(227918160);
	func_235(168171957);
	func_235(1193080109);
	func_235(-491981251);
	func_235(-639037538);
	func_235(-618620429);
}

bool func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_383(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_239()
{
	func_384(&Local_44, 1);
	func_385(376);
	func_385(377);
	func_385(378);
	func_385(379);
	Local_44.f_205 = 125;
	func_386(&Local_849, &Local_44, &uLocal_967, SCRIPTS::GET_ID_OF_THIS_THREAD(), "Twin Rocks");
}

int func_240(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_241(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_242(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_243(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_106(*uParam0);
	iVar1 = func_105(*uParam0);
	if (iParam1 < 1 || iParam1 > func_111(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_245(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_109(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_108(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_105(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_106(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_111(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_387(iParam0) & 2147418112, 16);
}

int func_250(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_253(var uParam0)
{
	return uParam0->f_24;
}

void func_254(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_255(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 1);
	}
	else
	{
		func_262(uParam0, 1);
	}
}

void func_256(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_262(&(uParam0->f_1), 16384);
	}
	else
	{
		func_263(&(uParam0->f_1), 16384);
	}
}

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 16);
	}
	else
	{
		func_262(uParam0, 67108864);
		func_262(uParam0, 16);
	}
}

void func_258(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 256);
	}
	else
	{
		func_262(uParam0, 256);
	}
}

void func_259(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_263(uParam0, 268435456);
	}
	else
	{
		func_262(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_263(uParam0, 1073741824);
	}
	else
	{
		func_262(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_263(uParam0, 536870912);
	}
	else
	{
		func_262(uParam0, 536870912);
	}
}

void func_260(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 512);
	}
	else
	{
		func_262(uParam0, 512);
	}
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 2);
	}
	else
	{
		func_262(uParam0, 2);
	}
}

void func_262(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_264(int iParam0)
{
	int iVar0;

	iVar0 = func_194(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_265(var uParam0, int iParam1, char* sParam2)
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

void func_266(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_267(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

int func_268(char* sParam0, char* sParam1)
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar0 = HUD::TEXT_BLOCK_REQUEST(sParam0);
		if (iVar0 == 0)
		{
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	iVar0 = HUD::TEXT_BLOCK_REQUEST(sParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_269(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0]))
		{
			iVar1 = 1;
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_270(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_271(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_388(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_272(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_273(int iParam0, bool bParam1, bool bParam2)
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

bool func_274(int iParam0, int iParam1)
{
	if (!func_389(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (iParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

bool func_276(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_277(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_278(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_390(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_390(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_24() == -1 && !func_391(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_391(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_390(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_392(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_393(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_394(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_279(var uParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 1;
	}
	else
	{
		if (!func_283(uParam0))
		{
			func_331(uParam0, 0);
		}
		else if (func_169(uParam0) > 10f)
		{
			return 1;
		}
		if (*uParam1 == 0)
		{
			if (bParam7)
			{
				*uParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam3, vParam4, 7);
			}
			else
			{
				*uParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam3, vParam4, 11);
			}
		}
		else if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam1))
		{
			*uParam2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(*uParam1));
		}
		return 0;
	}
	return 0;
}

void func_280(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_395(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_396(*uParam4);
	}
}

void func_281(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_397(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, uParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_282(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_283(var uParam0)
{
	return func_398(*uParam0, 1);
}

bool func_284(var uParam0)
{
	return func_398(*uParam0, 2);
}

float func_285()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_286(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_287()
{
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		if (func_283(&uLocal_38))
		{
			func_399(&uLocal_38);
		}
	}
	else if (!func_283(&uLocal_38))
	{
		func_319(&uLocal_38);
	}
}

void func_288(int iParam0)
{
	if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_849[iParam0 /*9*/])->f_5))
	{
		if (func_283(&((Local_601[iParam0 /*19*/])->f_8)))
		{
			func_399(&((Local_601[iParam0 /*19*/])->f_8));
		}
	}
	else if (!func_283(&((Local_601[iParam0 /*19*/])->f_8)))
	{
		func_319(&((Local_601[iParam0 /*19*/])->f_8));
	}
}

float func_289(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_290(var uParam0)
{
	return 18f;
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_292(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

int func_293(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_400(iParam0, Global_36, 1);
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
		if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, fParam4))
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

bool func_294(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

int func_295(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 99999.9f;
	iVar3 = 0;
	while (iVar3 <= 27)
	{
		if (func_301(iVar3))
		{
			fVar1 = BUILTIN::VDIST2(*(Local_981[iVar3 /*4*/]), vParam0);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_296(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD((Local_849[iParam0 /*9*/])->f_5))
	{
		return;
	}
	else if (!func_301(iParam1))
	{
		return;
	}
	else if (PED::GET_PED_CONFIG_FLAG((Local_849[iParam0 /*9*/])->f_5, 112, true))
	{
		return;
	}
	func_319(&((Local_601[iParam0 /*19*/])->f_11));
	(Local_601[iParam0 /*19*/])->f_3 = iParam1;
	PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_849[iParam0 /*9*/])->f_5, *(Local_981[iParam1 /*4*/]), (Local_981[iParam1 /*4*/])->f_3, 1, 0, 0);
}

void func_297(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_298(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_299(int iParam0)
{
	func_303(iParam0);
	PED::SET_PED_COMBAT_MOVEMENT((Local_849[iParam0 /*9*/])->f_5, 2);
	PED::SET_PED_CONFIG_FLAG((Local_849[iParam0 /*9*/])->f_5, 112, true);
	return 1;
}

float func_300(var uParam0)
{
	if (!func_283(uParam0))
	{
		return 0f;
	}
	if (func_284(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_285() - uParam0->f_1);
}

int func_301(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if ((Local_601[iVar0 /*19*/])->f_3 == iParam0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_302(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (iParam0 == -1)
	{
		return -1;
	}
	vVar0 = { Global_36 + *(Local_981[iParam0 /*4*/]) * Vector(0.5f, 0.5f, 0.5f) };
	fVar3 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, *(Local_981[iParam0 /*4*/]), true) * 0.5f);
	iVar4 = 0;
	while (iVar4 <= 19)
	{
		vVar5 = { func_401(vVar0, fVar3, 0f) };
		iVar8 = func_295(vVar5);
		if (!func_402(*(Local_981[iVar8 /*4*/]), vVar0, fVar3, 1))
		{
			Jump @248; //curOff = 127
		}
		else if (iParam0 == 26 || iParam0 == 27)
		{
			Jump @248; //curOff = 152
		}
		else if (func_403(Global_35, *(Local_981[iVar8 /*4*/]), 10f, 1, 1))
		{
			Jump @248; //curOff = 184
		}
		else if (iVar8 == iParam0)
		{
			Jump @248; //curOff = 197
		}
		else if (BUILTIN::VDIST2(Global_36, *(Local_981[iVar8 /*4*/])) < BUILTIN::VDIST2(Global_36, *(Local_981[iParam0 /*4*/])))
		{
			return iVar8;
		}
		iVar4++;
	}
	return -1;
}

void func_303(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD((Local_849[iParam0 /*9*/])->f_5))
	{
		(Local_601[iParam0 /*19*/])->f_3 = -1;
		return;
	}
	(Local_601[iParam0 /*19*/])->f_3 = -1;
	PED::REMOVE_PED_DEFENSIVE_AREA((Local_849[iParam0 /*9*/])->f_5, false);
}

int func_304(int iParam0, float fParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_404(Global_35, iParam0, 0, fParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	if (!func_149(uParam0->f_5, 0, 0) || DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		func_405(&(uParam0->f_6));
	}
	uParam0->f_6 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, iParam2);
	}
}

int func_306(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = -1;
	if ((Local_268[iParam0 /*83*/])->f_76 > 0)
	{
		iVar0 = func_406(iParam0, (fParam1 + 5f));
	}
	iVar2 = (Local_849[iParam0 /*9*/])->f_5;
	if (iParam3 != -1)
	{
		bVar1 = true;
		iVar3 = (Local_849[iParam3 /*9*/])->f_5;
	}
	iVar4 = -1;
	if (((Local_268[iParam0 /*83*/])->f_76 >= 3 && (Local_268[iParam0 /*83*/])->f_76 <= 22) && !func_298(Global_35, iVar2, fParam2, 1))
	{
		func_407(iParam0, 26);
	}
	switch ((Local_268[iParam0 /*83*/])->f_76)
	{
		case 0:
			func_408((Local_268[iParam0 /*83*/])->f_21[0 /*17*/], "RE_INTER_POS", 0, -163964935, 0, 0, 0, 1, 0);
			func_408((Local_268[iParam0 /*83*/])->f_21[1 /*17*/], "RE_INTER_ANTAGONIZE", 0, 648122183, 0, 0, 0, 1, 0);
			func_409(iParam0, 0, !(Local_268[iParam0 /*83*/])->f_74);
			func_409(iParam0, 1, 1);
			func_407(iParam0, 1);
			break;
		case 1:
			if (func_324(iParam0))
			{
				func_410(iVar2, Global_35, &uLocal_1115, -1, 30);
				if (bVar1)
				{
					func_410(iVar3, Global_35, &uLocal_1115, -1, 30);
				}
				func_407(iParam0, 2);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 3);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 4);
			}
			break;
		case 2:
			func_409(iParam0, 0, 0);
			if (func_298(Global_35, iVar2, fParam1, 1) && func_324(iParam0))
			{
				func_407(iParam0, 17);
			}
			break;
		case 3:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 7;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 5);
			}
			break;
		case 4:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 8;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 6);
			}
			break;
		case 5:
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
			{
				PED::_0x62FDAD5E01D2DD47(iVar2, Global_36, 3, 0);
			}
			if (bVar1 && PED::IS_PED_USING_ANY_SCENARIO(iVar3))
			{
				PED::_0x62FDAD5E01D2DD47(iVar3, Global_36, 3, 0);
			}
			func_407(iParam0, 7);
			break;
		case 7:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 11;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 8);
			}
			break;
		case 8:
			if (bLocal_974)
			{
				func_407(iParam0, 28);
				return 0;
			}
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				if (!(Local_268[iParam0 /*83*/])->f_73)
				{
					func_412((Local_268[iParam0 /*83*/])->f_21[0 /*17*/], "RE_INTER_DEFUSE");
					(Local_268[iParam0 /*83*/])->f_73 = 1;
				}
				func_409(iParam0, 0, !(Local_268[iParam0 /*83*/])->f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((func_169(&((Local_268[iParam0 /*83*/])->f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !func_413(iVar2))
			{
				if (iParam0 == 0 || iParam0 == 1)
				{
					func_407(iParam0, 23);
				}
				else
				{
					func_407(iParam0, 20);
				}
			}
			break;
		case 9:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 12;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 10);
			}
			break;
		case 10:
			if (bLocal_974)
			{
				func_407(iParam0, 28);
				return 0;
			}
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				if (!(Local_268[iParam0 /*83*/])->f_73)
				{
					func_412((Local_268[iParam0 /*83*/])->f_21[0 /*17*/], "RE_INTER_DEFUSE");
					(Local_268[iParam0 /*83*/])->f_73 = 1;
				}
				func_409(iParam0, 0, !(Local_268[iParam0 /*83*/])->f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((func_169(&((Local_268[iParam0 /*83*/])->f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !func_413(iVar2))
			{
				func_407(iParam0, 23);
			}
			break;
		case 11:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 9;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				(Local_268[iParam0 /*83*/])->f_74 = 1;
				func_407(iParam0, 12);
			}
			break;
		case 12:
			if (func_336(iVar2, -1073489615))
			{
				TASK::CLEAR_PED_TASKS(iVar2, 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar2, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 13;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 13);
			}
			break;
		case 13:
			if (func_315(0.5f, iParam0, 1, 0))
			{
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((func_169(&((Local_268[iParam0 /*83*/])->f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !func_413(iVar2))
			{
				func_407(iParam0, 23);
			}
			break;
		case 14:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 10;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 15);
			}
			break;
		case 15:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 14;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 16);
			}
			break;
		case 16:
			if (func_315(0f, iParam0, 1, 0))
			{
				TASK::TASK_SHOOT_AT_ENTITY(iVar2, Global_35, -1, 0, 0);
				return 1;
			}
			break;
		case 17:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_336(iVar2, -1073489615))
			{
				func_407(iParam0, 18);
			}
			break;
		case 18:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 0;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 19);
			}
			break;
		case 19:
			if (bLocal_974)
			{
				func_407(iParam0, 28);
				return 0;
			}
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				if (!(Local_268[iParam0 /*83*/])->f_73)
				{
					func_412((Local_268[iParam0 /*83*/])->f_21[0 /*17*/], "RE_INTER_DEFUSE");
					(Local_268[iParam0 /*83*/])->f_73 = 1;
				}
				func_409(iParam0, 0, !(Local_268[iParam0 /*83*/])->f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if ((((func_169(&((Local_268[iParam0 /*83*/])->f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && !func_413(iVar2)) && func_324(iParam0)) && func_315(0.5f, iParam0, 1, 1))
			{
				if (iParam0 == 0 || iParam0 == 1)
				{
					func_407(iParam0, 23);
				}
				else
				{
					func_407(iParam0, 20);
				}
			}
			break;
		case 20:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_336(iVar2, -1073489615))
			{
				func_407(iParam0, 21);
			}
			break;
		case 21:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 1;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 22);
			}
			break;
		case 22:
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				func_409(iParam0, 0, !(Local_268[iParam0 /*83*/])->f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if ((((func_169(&((Local_268[iParam0 /*83*/])->f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !func_413(iVar2)) && func_315(0.5f, iParam0, 1, 1))
			{
				func_407(iParam0, 23);
			}
			break;
		case 23:
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
			{
				PED::_0x802092B07E3B1EEA(iVar2, Global_36, 3);
			}
			if (!func_336(iVar2, 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36 + Vector(1f, 1f, 1f), 2000, 1566631136, 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
				func_297(iVar2, &iLocal_1114, 0, 0, 1, 1);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_336(iVar2, 242628503))
			{
				func_407(iParam0, 24);
			}
			break;
		case 24:
			if (!func_336(iVar2, 242628503))
			{
				func_411(iParam0, 0);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 2;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 25);
			}
			break;
		case 25:
			if (!func_336(iVar2, 242628503))
			{
				func_411(iParam0, 0);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				func_409(iParam0, 0, !(Local_268[iParam0 /*83*/])->f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((func_169(&((Local_268[iParam0 /*83*/])->f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !func_413(iVar2))
			{
				TASK::TASK_SHOOT_AT_ENTITY(iVar2, Global_35, -1, 0, 0);
				return 1;
			}
			break;
		case 26:
			TASK::TASK_START_SCENARIO_AT_POSITION(iVar2, func_414(iParam0), (Local_849[iParam0 /*9*/])->f_1, (Local_849[iParam0 /*9*/])->f_4, -1, 1, 0, 0, -1082130432, 0);
			if (bVar1)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar3, func_414(iParam3), (Local_849[iParam3 /*9*/])->f_1, (Local_849[iParam3 /*9*/])->f_4, -1, 1, 0, 0, -1082130432, 0);
			}
			func_407(iParam0, 27);
			break;
		case 27:
			if ((func_324(iParam0) && func_298(Global_35, iVar2, (fParam1 - 5f), 1)) && !func_413(iVar2))
			{
				func_407(iParam0, 23);
			}
			break;
		case 28:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, 3, 0, -1082130432, 291934926, iParam0))
			{
				func_407(iParam0, 29);
			}
			break;
		case 29:
			if (func_315(0f, iParam0, 1, 0))
			{
				TASK::TASK_SHOOT_AT_ENTITY(iVar2, Global_35, -1, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_307(vector3 vParam0, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 99999.9f;
	iVar3 = 0;
	while (iVar3 <= 10)
	{
		if (func_149((Local_849[iVar3 /*9*/])->f_5, 0, 1))
		{
			if (!bParam3 || (Local_601[iVar3 /*19*/])->f_3 == -1)
			{
				fVar1 = func_415((Local_849[iVar3 /*9*/])->f_5, vParam0, 1);
				if (fVar1 < fVar0)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_308(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (func_324(iVar0))
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_309()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_416(iVar0, 100);
		iVar0++;
	}
}

int func_310(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	var uVar0;
	char* sVar1;

	if (iParam2 == -1)
	{
		return 1;
	}
	sVar1 = func_417(iParam2, &uVar0, iParam6);
	if (!func_283(&uLocal_29))
	{
		func_319(&uLocal_29);
	}
	else if (func_169(&uLocal_29) > fParam3 && func_418(iParam0, iParam1, sVar1, 0, fParam4, uVar0, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
	{
		func_399(&uLocal_29);
		return 1;
	}
	return 0;
}

int func_311(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_419(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
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
			if (func_420(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_422(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_423(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_424(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_425(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_426(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_427(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_428(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_429(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_429(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_430(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_431(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_432(uParam2, 4000))
				{
					if ((func_433(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_434(uParam2, iParam0)) && func_435(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_433(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_434(uParam2, iParam0)) && func_435(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_436(iParam0, Global_1935630->f_41))
							{
								func_437();
								*uParam3 = 2;
								func_421(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_436(iParam0, Global_1935630->f_41))
						{
							func_437();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_438(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_439() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_437();
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_440())
					{
						if (func_436(iParam0, Global_1935630->f_42))
						{
							func_437();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_441(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_442(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_443(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_444(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_445(uParam2, 4000))
				{
					if (func_446(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_421(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_447(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_421(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_448(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_421(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_313(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_449(iParam0, uParam1, 1);
	func_450(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_314(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam5 == 0)
	{
		if (uParam1->f_199 > 0)
		{
			iParam5 = (uParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = func_451((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (uParam1->f_191 == -1)
	{
		uParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (uParam1->f_191 > ((iParam4 + iVar2) - 1) || uParam1->f_191 < iParam4)
		{
			uParam1->f_191 = iParam4;
		}
		if (!func_452(((*iParam0)[uParam1->f_191 /*9*/])->f_5) || iParam3)
		{
			if (func_453(((*iParam0)[uParam1->f_191 /*9*/])->f_5, &(uParam1->f_155), &(uParam1->f_183), 0))
			{
				if (bParam2)
				{
					func_305((*iParam0)[uParam1->f_191 /*9*/], 831283580, 0);
				}
				return uParam1->f_191;
			}
		}
		else if (func_452(((*iParam0)[uParam1->f_191 /*9*/])->f_5))
		{
			if (func_289(((*iParam0)[uParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(((*iParam0)[uParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					func_305((*iParam0)[uParam1->f_191 /*9*/], 831283580, 0);
				}
				return uParam1->f_191;
			}
		}
		uParam1->f_191++;
		iVar0++;
	}
	return -1;
}

bool func_315(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return func_454() > fParam0;
	}
	if (iParam2 && func_455() < fParam0)
	{
		return false;
	}
	if (bParam3)
	{
		if (((func_456(0) < fParam0 || func_456(1) < fParam0) || func_456(2) < fParam0) || func_456(3) < fParam0)
		{
			return false;
		}
	}
	return func_456(iParam1) > fParam0;
}

void func_316()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if ((Local_601[iVar0 /*19*/])->f_3 == -1)
		{
			func_296(iVar0, func_295(ENTITY::GET_ENTITY_COORDS((Local_849[iVar0 /*9*/])->f_5, true, false)));
		}
		iVar0++;
	}
}

void func_317(int iParam0, bool bParam1)
{
	if ((Local_601[iParam0 /*19*/])->f_2)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD((Local_849[iParam0 /*9*/])->f_5))
	{
		(Local_601[iParam0 /*19*/])->f_2 = 1;
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO((Local_849[iParam0 /*9*/])->f_5))
	{
		PED::_0x802092B07E3B1EEA((Local_849[iParam0 /*9*/])->f_5, Global_36, 3);
	}
	if (bParam1)
	{
		TASK::TASK_COMBAT_PED((Local_849[iParam0 /*9*/])->f_5, Global_35, 16777216, 16);
	}
	else if ((Local_44.f_183 == 4 && !func_321(func_320(Global_35, 1, 0, 0))) || Local_44.f_183 == 256)
	{
		TASK::TASK_COMBAT_PED((Local_849[iParam0 /*9*/])->f_5, Global_35, 16793600, 16);
	}
	else if (!func_294(Global_35, &(iLocal_1098[4]), 0, 1))
	{
		TASK::TASK_COMBAT_PED((Local_849[iParam0 /*9*/])->f_5, Global_35, 16793600, 16);
	}
	else if (func_324(iParam0))
	{
		TASK::TASK_COMBAT_PED((Local_849[iParam0 /*9*/])->f_5, Global_35, 16777216, 16);
	}
	else
	{
		TASK::TASK_COMBAT_PED((Local_849[iParam0 /*9*/])->f_5, Global_35, 16793600, 16);
	}
	(Local_601[iParam0 /*19*/])->f_2 = 1;
}

void func_318(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST((Local_849[iParam0 /*9*/])->f_5) && !ENTITY::IS_ENTITY_DEAD((Local_849[iParam0 /*9*/])->f_5))
	{
		if (MAP::DOES_BLIP_EXIST((Local_849[iParam0 /*9*/])->f_6))
		{
			MAP::BLIP_REMOVE_MODIFIER((Local_849[iParam0 /*9*/])->f_6, -662251075);
		}
		else
		{
			func_305(Local_849[iParam0 /*9*/], 831283580, 0);
		}
	}
}

void func_319(var uParam0)
{
	func_457(uParam0, 0f);
}

int func_320(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_321(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

Vector3 func_322(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_458(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_323(var uParam0)
{
	if (!func_283(uParam0))
	{
		return 0;
	}
	if (func_284(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_439() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_324(int iParam0)
{
	if (PED::_0x06087579E7AA85A9((Local_849[iParam0 /*9*/])->f_5, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((Local_849[iParam0 /*9*/])->f_5, Global_35, 17))
	{
		return 1;
	}
	if (func_298(Global_35, (Local_849[iParam0 /*9*/])->f_5, 0.5f, 1))
	{
		return 1;
	}
	if (func_298(Global_35, (Local_849[iParam0 /*9*/])->f_5, 2f, 1) && !PED::GET_PED_STEALTH_MOVEMENT(Global_35))
	{
		return 1;
	}
	if ((iParam0 == 0 && func_298(Global_35, (Local_849[0 /*9*/])->f_5, PED::_0x2BA9D7BF629F920C((Local_849[0 /*9*/])->f_5), 1)) && func_294(Global_35, &(iLocal_1098[13]), 0, 1))
	{
		return 1;
	}
	if ((iParam0 == 1 && func_298(Global_35, (Local_849[1 /*9*/])->f_5, PED::_0x2BA9D7BF629F920C((Local_849[1 /*9*/])->f_5), 1)) && func_294(Global_35, &(iLocal_1098[14]), 0, 1))
	{
		return 1;
	}
	if ((iParam0 == 2 && func_298(Global_35, (Local_849[2 /*9*/])->f_5, PED::_0x2BA9D7BF629F920C((Local_849[2 /*9*/])->f_5), 1)) && func_294(Global_35, &(iLocal_1098[11]), 0, 1))
	{
		return 1;
	}
	if ((iParam0 == 3 && func_298(Global_35, (Local_849[3 /*9*/])->f_5, PED::_0x2BA9D7BF629F920C((Local_849[3 /*9*/])->f_5), 1)) && func_294(Global_35, &(iLocal_1098[12]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_325()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if ((Local_601[iVar0 /*19*/])->f_2)
		{
			iVar1++;
			func_318(iVar0);
		}
		iVar0++;
	}
	if (iVar1 >= (8 - 0) + 1)
	{
		func_251(&(Local_44.f_5), 131072);
		return 1;
	}
	return 0;
}

void func_326()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((iLocal_16 >= 2 && iLocal_16 <= 4) && !func_459(Global_35, 1))
	{
		iLocal_16 = 7;
		return;
	}
	switch (iLocal_16)
	{
		case 0:
			iLocal_976[0] = -1;
			iLocal_976[1] = -1;
			iLocal_976[2] = -1;
			iLocal_16 = 1;
			break;
		case 1:
			iVar0 = func_307(Global_36, 0);
			if (func_19(iLocal_973, 32) && func_418((Local_849[iVar0 /*9*/])->f_5, 0, "INTERIOR_CHASE_NEUTRAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
			{
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST((Local_849[iVar0 /*9*/])->f_5) && !ENTITY::IS_ENTITY_DEAD((Local_849[iVar0 /*9*/])->f_5))
					{
						func_460((Local_849[iVar0 /*9*/])->f_5, &(iLocal_1098[6]));
						func_460((Local_849[iVar0 /*9*/])->f_5, &(iLocal_1098[5]));
					}
					iVar0++;
				}
				iLocal_16 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_OCCLUDED(func_461(-130924893, 1, 0)))
			{
				func_462(-130924893, 0, 0f, 0, 1, 0f, 1, 0);
				iLocal_16 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					if (((((ENTITY::DOES_ENTITY_EXIST((Local_849[iVar0 /*9*/])->f_5) && !ENTITY::IS_ENTITY_DEAD((Local_849[iVar0 /*9*/])->f_5)) && !func_463(iVar0)) && iVar0 != &iLocal_976[0]) && iVar0 != &iLocal_976[1]) && iVar0 != &iLocal_976[2])
					{
						iLocal_976[iVar1] = iVar0;
					}
					iVar0++;
				}
				iVar1++;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, 0, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3958.514f, -2138.044f, -5.9996f, 3f, -1, 0.25f, false, 3.3855f);
			TASK::TASK_AIM_AT_COORD(0, -3957.94f, -2129.794f, -4.0829f, -1, 1, 0);
			func_297((Local_849[&iLocal_976[0] /*9*/])->f_5, &iLocal_1114, 0.1f, 0.4f, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, 0, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3960.9f, -2138.789f, -6.1669f, 3f, -1, 0.25f, false, 341.0457f);
			TASK::TASK_AIM_AT_COORD(0, -3957.94f, -2129.794f, -4.0829f, -1, 1, 0);
			func_297((Local_849[&iLocal_976[1] /*9*/])->f_5, &iLocal_1114, 0.1f, 0.4f, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, 0, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3962.908f, -2137.941f, -6.1791f, 3f, -1, 0.25f, false, 328.4208f);
			TASK::TASK_AIM_AT_COORD(0, -3957.94f, -2129.794f, -4.0829f, -1, 1, 0);
			func_297((Local_849[&iLocal_976[2] /*9*/])->f_5, &iLocal_1114, 0.1f, 0.4f, 1, 1);
			BUILTIN::SETTIMERA(0);
			iLocal_16 = 4;
			break;
		case 4:
			if (BUILTIN::TIMERA() > 20000)
			{
				iLocal_16 = 7;
				return;
			}
			if (((func_403((Local_849[&iLocal_976[0] /*9*/])->f_5, -3958.514f, -2138.044f, -5.9996f, 4f, 1, 1) && func_403((Local_849[&iLocal_976[1] /*9*/])->f_5, -3960.9f, -2138.789f, -6.1669f, 4f, 1, 1)) && func_403((Local_849[&iLocal_976[2] /*9*/])->f_5, -3962.908f, -2137.941f, -6.1791f, 4f, 1, 1)) && func_418((Local_849[&iLocal_976[0] /*9*/])->f_5, 0, "SURROUNDED_IN_INTERIOR", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
			{
				func_464((Local_849[&iLocal_976[0] /*9*/])->f_5, 1);
				func_464((Local_849[&iLocal_976[1] /*9*/])->f_5, 1);
				func_464((Local_849[&iLocal_976[2] /*9*/])->f_5, 1);
				iLocal_16 = 5;
			}
			break;
		case 5:
			if (BUILTIN::TIMERA() > 20000)
			{
				iLocal_16 = 7;
				return;
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, (Local_849[&iLocal_976[1] /*9*/])->f_5, 17) || MISC::ABSF(func_465(-130924893)) > 0.25f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36, 5000, -957453492, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_297((Local_849[&iLocal_976[0] /*9*/])->f_5, &iLocal_1114, 0.1f, 0.3f, 1, 1);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36, 5000, -957453492, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_297((Local_849[&iLocal_976[1] /*9*/])->f_5, &iLocal_1114, 0.1f, 0.3f, 1, 1);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36, 5000, -957453492, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_297((Local_849[&iLocal_976[2] /*9*/])->f_5, &iLocal_1114, 0.1f, 0.3f, 1, 1);
				BUILTIN::SETTIMERA(0);
				iLocal_16 = 6;
			}
			break;
		case 6:
			if (PLAYER::_0xCCE7C695C164C35F(PLAYER::PLAYER_ID()) < iLocal_1153)
			{
				BUILTIN::SETTIMERA((BUILTIN::TIMERA() - BUILTIN::ROUND((MISC::GET_FRAME_TIME() * 800f))));
			}
			iLocal_1153 = PLAYER::_0xCCE7C695C164C35F(PLAYER::PLAYER_ID());
			if (ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[0] /*9*/])->f_5))
			{
				iVar2++;
			}
			if (ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[1] /*9*/])->f_5))
			{
				iVar2++;
			}
			if (ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[2] /*9*/])->f_5))
			{
				iVar2++;
			}
			if (iVar2 >= 3 || BUILTIN::TIMERA() >= 5000)
			{
				iLocal_16 = 7;
				return;
			}
			if (iVar2 >= 2 && BUILTIN::TIMERA() < 5000)
			{
				if (!ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[0] /*9*/])->f_5))
				{
					CAM::_0x986F7A51EE3E1F92((Local_849[&iLocal_976[0] /*9*/])->f_5, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[1] /*9*/])->f_5))
				{
					CAM::_0x986F7A51EE3E1F92((Local_849[&iLocal_976[1] /*9*/])->f_5, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[2] /*9*/])->f_5))
				{
					CAM::_0x986F7A51EE3E1F92((Local_849[&iLocal_976[2] /*9*/])->f_5, 1);
				}
			}
			break;
		case 7:
			CAM::_0x5B637D6F3B67716A((Local_849[&iLocal_976[0] /*9*/])->f_5);
			CAM::_0x5B637D6F3B67716A((Local_849[&iLocal_976[1] /*9*/])->f_5);
			CAM::_0x5B637D6F3B67716A((Local_849[&iLocal_976[2] /*9*/])->f_5);
			func_464((Local_849[&iLocal_976[0] /*9*/])->f_5, 0);
			func_464((Local_849[&iLocal_976[1] /*9*/])->f_5, 0);
			func_464((Local_849[&iLocal_976[2] /*9*/])->f_5, 0);
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (ENTITY::DOES_ENTITY_EXIST((Local_849[iVar0 /*9*/])->f_5) && !ENTITY::IS_ENTITY_DEAD((Local_849[iVar0 /*9*/])->f_5))
				{
					func_466((Local_849[iVar0 /*9*/])->f_5, &(iLocal_1098[6]));
					func_466((Local_849[iVar0 /*9*/])->f_5, &(iLocal_1098[5]));
				}
				iVar0++;
			}
			if (func_294(Global_35, &(iLocal_1098[6]), 0, 1))
			{
				func_299(&(iLocal_976[0]));
				func_299(&(iLocal_976[1]));
				func_299(&(iLocal_976[2]));
				TASK::TASK_COMBAT_PED((Local_849[&iLocal_976[0] /*9*/])->f_5, Global_35, 0, 0);
				TASK::TASK_COMBAT_PED((Local_849[&iLocal_976[1] /*9*/])->f_5, Global_35, 0, 0);
				TASK::TASK_COMBAT_PED((Local_849[&iLocal_976[2] /*9*/])->f_5, Global_35, 0, 0);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[0] /*9*/])->f_5))
				{
					TASK::TASK_COMBAT_PED((Local_849[&iLocal_976[0] /*9*/])->f_5, Global_35, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[1] /*9*/])->f_5))
				{
					TASK::TASK_COMBAT_PED((Local_849[&iLocal_976[1] /*9*/])->f_5, Global_35, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD((Local_849[&iLocal_976[2] /*9*/])->f_5))
				{
					TASK::TASK_COMBAT_PED((Local_849[&iLocal_976[2] /*9*/])->f_5, Global_35, 0, 0);
				}
			}
			iLocal_16 = 8;
			break;
		case 8:
			break;
	}
}

void func_327()
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iLocal_17)
	{
		case 0:
			iLocal_17 = 1;
			break;
		case 1:
			if (func_294(Global_35, &(iLocal_1098[1]), 0, 1) || func_294(Global_35, &(iLocal_1098[4]), 0, 1))
			{
				if (Local_44.f_198 < 8)
				{
					iLocal_17 = 2;
				}
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
			{
				iLocal_27 = func_271(-727455979, -3869.636f, -2129.337f, 5.5928f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
			{
				iLocal_28 = func_271(-1554827654, -3871.748f, -2133.177f, 5.7012f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return;
			}
			(Local_849[9 /*9*/])->f_1 = { -3869.636f, -2129.337f, 5.5928f };
			(Local_849[10 /*9*/])->f_1 = { -3871.748f, -2133.177f, 5.7012f };
			if (func_61(&Local_44, &Local_849, 1222652248, 9, 10))
			{
				Local_44.f_197 = 0;
				func_62(&Local_44, &Local_849, 9, 10);
				iLocal_17 = 3;
			}
			break;
		case 3:
			if ((func_344(-3886.243f, -2122.982f, 6.3099f, 0.1f, 0.9f, 0, 1061158912) || func_298(Global_35, iLocal_27, 25f, 1)) || Local_44.f_198 < 3)
			{
				func_305(Local_849[9 /*9*/], 831283580, 0);
				func_305(Local_849[10 /*9*/], 831283580, 0);
				if (!func_467((Local_849[9 /*9*/])->f_5, iLocal_27, 0) || !func_467((Local_849[10 /*9*/])->f_5, iLocal_28, 0))
				{
					func_468((Local_849[9 /*9*/])->f_5, iLocal_27, 0, -1, 1);
					func_468((Local_849[10 /*9*/])->f_5, iLocal_28, 0, -1, 1);
					return;
				}
				iVar0 = 9;
				while (iVar0 <= 10)
				{
					PED::SET_PED_COMBAT_RANGE((Local_849[iVar0 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 49, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 57, false);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 17, false);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 47, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 8, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 16, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 29, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 42, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 67, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 115, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_849[iVar0 /*9*/])->f_5, 98, true);
					PED::_0x8B1E8E35A6E814EA((Local_849[iVar0 /*9*/])->f_5, 1479995766, -1082130432);
					func_278((Local_849[iVar0 /*9*/])->f_5, joaat("weapon_revolver_schofield"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON((Local_849[iVar0 /*9*/])->f_5, joaat("weapon_revolver_schofield"), false, 0, true, false);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
					if (iVar0 == 9)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "hideout_tr_horseCharge_Left", 0, 19496, -1, 0, 1, -1);
					}
					else
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "hideout_tr_horseCharge", 0, 19496, -1, 0, 1, -1);
					}
					func_297((Local_849[iVar0 /*9*/])->f_5, &iLocal_1114, 0f, 0f, 1, 1);
					iVar0++;
				}
				iLocal_17 = 5;
			}
			break;
		case 5:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hideout_tr_horseCharge_Left", ENTITY::GET_ENTITY_COORDS((Local_849[9 /*9*/])->f_5, true, false), &iVar1);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hideout_tr_horseCharge", ENTITY::GET_ENTITY_COORDS((Local_849[10 /*9*/])->f_5, true, false), &iVar2);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED((Local_849[9 /*9*/])->f_5, 0) && iVar1 > 95)
			{
				func_469(iLocal_27);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_DISMOUNT_ANIMAL(0, 268435520, 0, 0, 0, Global_35);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_297((Local_849[9 /*9*/])->f_5, &iLocal_1114, 0, 0, 1, 1);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED((Local_849[10 /*9*/])->f_5, 0) && iVar2 > 75)
			{
				func_469(iLocal_28);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_DISMOUNT_ANIMAL(0, 268435520, 0, 0, 0, Global_35);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_297((Local_849[10 /*9*/])->f_5, &iLocal_1114, 0, 0, 1, 1);
			}
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED((Local_849[9 /*9*/])->f_5, 0) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED((Local_849[10 /*9*/])->f_5, 0))
			{
				iLocal_17 = 6;
			}
			break;
		case 6:
			break;
	}
}

void func_328()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_44.f_198 <= 3)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (!PED::IS_PED_INJURED((Local_849[iVar0 /*9*/])->f_5) && !func_272(&((Local_849[iVar0 /*9*/])->f_7), 4096))
			{
				func_299(iVar0);
				func_470((Local_849[iVar0 /*9*/])->f_5, 0, 0);
				func_292(&((Local_849[iVar0 /*9*/])->f_7), 4096, 0);
				iVar1 = 0;
				while (iVar1 <= (iLocal_22 - 1))
				{
					if (PED::IS_PED_INJURED((Local_849[&iLocal_23[iVar1] /*9*/])->f_5) || !ENTITY::DOES_ENTITY_EXIST((Local_849[&iLocal_23[iVar1] /*9*/])->f_5))
					{
						iLocal_23[iVar1] = iVar0;
						iLocal_21++;
					}
					else
					{
						iVar1++;
					}
				}
			}
			if (iLocal_21 >= 3)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iLocal_21 == 0)
	{
		if (!func_294(Global_35, &(iLocal_1098[0]), 0, 1))
		{
			iLocal_22++;
			if (iLocal_22 > 3)
			{
				iLocal_22 = 3;
			}
			if (PED::IS_PED_INJURED((Local_849[0 /*9*/])->f_5) && PED::IS_PED_INJURED((Local_849[1 /*9*/])->f_5))
			{
				iVar2 = 0;
				while (iVar2 <= 8)
				{
					if (!PED::IS_PED_INJURED((Local_849[iVar2 /*9*/])->f_5))
					{
						func_299(iVar2);
						func_470((Local_849[iVar2 /*9*/])->f_5, 0, 0);
						iVar3 = 0;
						while (iVar3 <= (iLocal_22 - 1))
						{
							if (PED::IS_PED_INJURED((Local_849[&iLocal_23[iVar3] /*9*/])->f_5) || !ENTITY::DOES_ENTITY_EXIST((Local_849[&iLocal_23[iVar3] /*9*/])->f_5))
							{
								iLocal_23[iVar3] = iVar2;
							}
							else
							{
								iVar3++;
							}
						}
						iLocal_21++;
					}
					if (iLocal_21 >= iLocal_22)
					{
					}
					else
					{
						iVar2++;
					}
				}
			}
			else
			{
				func_299(0);
				func_299(1);
				func_470((Local_849[0 /*9*/])->f_5, 0, 0);
				func_470((Local_849[1 /*9*/])->f_5, 0, 0);
				iLocal_23[0] = 0;
				iLocal_23[1] = 1;
				iLocal_21 += 2;
			}
		}
	}
	else
	{
		iVar4 = iLocal_22;
		iVar5 = 0;
		while (iVar5 <= (iLocal_22 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST((Local_849[&iLocal_23[iVar5] /*9*/])->f_5))
			{
				if (PED::IS_PED_INJURED((Local_849[&iLocal_23[iVar5] /*9*/])->f_5))
				{
					iVar4 = (iVar4 - 1);
				}
			}
			iVar5++;
		}
		if (iVar4 == 0 && Local_44.f_198 > (Local_44.f_199 - 3))
		{
			iLocal_21 = 0;
		}
	}
}

void func_329()
{
	if ((!func_19(iLocal_973, 16) && func_294(Global_35, &(iLocal_1098[5]), 0, 1)) && func_299(func_307(Global_36, 0)))
	{
		func_168(&iLocal_973, 16);
	}
	if (!func_19(iLocal_973, 32) && func_294(Global_35, &(iLocal_1098[6]), 0, 1))
	{
		func_168(&iLocal_973, 32);
	}
	if ((!func_19(iLocal_973, 8) && func_294(Global_35, &(iLocal_1098[4]), 0, 1)) && func_299(func_307(Global_36, 0)))
	{
		func_168(&iLocal_973, 8);
	}
}

void func_330(var uParam0, char* sParam1, var uParam2, int iParam3, vector3 vParam4)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, 1) != 1)
		{
			if (!func_471(uParam0))
			{
				if (!func_472(vParam4))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::_TASK_FLEE_FROM_PED(0, Global_35, vParam4, -1f, -1, 5120, 1077936128, 0);
					func_297(uParam0->f_5, &iVar0, 0, 0, 1, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					*uParam2 = 1;
				}
				if (!*uParam2)
				{
					_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
					func_418(uParam0->f_5, Global_35, sParam1, "", 70f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					*uParam2 = 1;
				}
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
		}
	}
}

void func_331(var uParam0, int iParam1)
{
	if (iParam1 || !func_283(uParam0))
	{
		func_319(uParam0);
	}
}

int func_332(var uParam0, var uParam1)
{
	if (!func_129(&(uParam1->f_5), 33554432))
	{
		if (func_473(uParam0) <= 0)
		{
			func_251(&(uParam1->f_5), 33554432);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_333(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	iVar2 = 0;
	switch (uParam0->f_205)
	{
		case 9:
			iVar0 = 100;
			iVar1 = 150;
			iVar2 = -2009656535;
			break;
		case 16:
			iVar0 = 100;
			iVar1 = 150;
			if (!func_31())
			{
				iVar2 = 214473058;
			}
			else
			{
				iVar2 = -1005838710;
			}
			break;
		case 36:
			iVar0 = 75;
			iVar1 = 100;
			iVar2 = 214473058;
			break;
		case 79:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 325633398;
			break;
		case 125:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 1004822587;
			break;
		case 127:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 1004822587;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 0)
	{
		Var4 = { func_217(953441746, iVar2) };
		STATS::STAT_ID_GET_INT(&Var4, &iVar3);
		if (iVar3 >= (uParam0->f_200 + uParam0->f_199))
		{
			func_474(iVar0, 1);
		}
		else
		{
			func_474(iVar1, 1);
		}
	}
}

void func_334(var uParam0)
{
	if (func_475(1) <= 0)
	{
		return;
	}
}

void func_335(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	func_476(iVar0, 1, bParam1, 0, 1);
	func_477(iParam0, -1);
	if (bParam2)
	{
		if (func_249(iVar0) >= 1)
		{
			func_478(iVar0, (func_249(iVar0) - 1));
		}
	}
	else
	{
		func_479(0, 12);
		iVar1 = func_480(iParam0);
		if (func_249(iVar0) <= 1)
		{
			func_218(func_481(64058978), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = (Global_40.f_9571[iVar1 /*10*/])->f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				((*Global_1392050)[iVar1 /*14*/])->f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237->f_192[iVar1] = (func_439() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						((*Global_1392050)[iVar1 /*14*/])->f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						((*Global_1392050)[iVar1 /*14*/])->f_1 |= 8;
					}
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			func_483(func_482(iParam0, 1), 350f, 0);
			func_484(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iParam0, 1, iParam1, 0, 0);
			}
		}
	}
}

int func_338(int iParam0)
{
	int iVar0;

	if (!func_42(iParam0))
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return 0;
	}
	return func_264(iVar0);
}

void func_339(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_485(iParam0, 57, func_482(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (func_194(iVar0) != 4)
	{
		func_216(Global_1935630, 32);
	}
	if (func_92(iVar0, 1))
	{
		func_486(iVar0);
	}
	iVar1 = func_480(iParam0);
	if (iVar1 != -1)
	{
		func_484(0, iVar1, 0, 12, 0);
	}
	func_487(iParam0);
	func_488(iVar0, 1);
	func_489(iVar0, 1, func_425(PLAYER::PLAYER_ID(), 1, 0, 1));
	func_490(iParam0);
	func_479(0, 12);
}

void func_340(var uParam0, bool bParam1)
{
	if (uParam0->f_205 != 9)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, bParam1);
	}
}

int func_341(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_491(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_343(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_344(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_345(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

void func_346(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_347(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (func_24() != -1)
	{
		uVar0 = &Global_36637.f_1444[*iParam0];
		MISC::SET_BIT(&uVar0, *iParam1);
		Global_36637.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*iParam0];
	MISC::SET_BIT(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

var func_348(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_349(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

void func_350(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	func_492(&iVar0, 0);
	func_492(&iVar0, 17);
	func_492(&iVar0, 28);
	if (bParam1)
	{
		COMPANION::_0x3CAAD93FA5B9579A(uParam0->f_215, 2, iVar0);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_215))
	{
		COMPANION::_0x7274F84B1501B523(uParam0->f_215);
	}
}

void func_351(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

bool func_352()
{
	return func_349(8);
}

int func_353()
{
	if (func_24() != 0)
	{
		return 1;
	}
	return 1;
}

char* func_354(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_355(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_493(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_356(int iParam0)
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

int func_357(int iParam0)
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

int func_358(int iParam0)
{
	if (!func_494(iParam0))
	{
		return 0;
	}
	return func_495(iParam0);
}

bool func_359(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_360(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_361()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_362(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_363(int iParam0)
{
	return func_223(iParam0, Global_1310750->f_16072 | 64);
}

void func_364(int iParam0)
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

int func_365(int iParam0)
{
	if (func_496(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_366()
{
	return 1;
}

bool func_367(int iParam0)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_368(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_46(iParam0))
	{
		return;
	}
	if (!func_115(iParam0, 1))
	{
		return;
	}
	if (!func_115(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_367(iParam0)) && func_497(iParam0))
	{
		return;
	}
	func_119(iParam0, 1);
	func_498(iParam0);
	if (func_127(func_116(iParam0)))
	{
		iVar0 = func_118(iParam0);
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
		func_119(iParam0, 16);
	}
	if (func_115(iParam0, 128) && !bParam3)
	{
		func_499(iParam0, 0);
	}
}

void func_369(int iParam0, bool bParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_501(iParam0, 1024))
		{
			func_502(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_501(iParam0, 1024))
	{
		func_503(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_504(iParam0);
}

void func_370(int iParam0, int iParam1)
{
	if (!func_505(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

var func_371(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_372(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_373(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_505(iParam0))
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

bool func_374(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_375(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_375(int iParam0)
{
	return iParam0 > -1;
}

int func_376(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_377(int iParam0)
{
	if (!func_375(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_378(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_375(iParam0))
		{
			return;
		}
	}
	func_376(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_379(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

float func_380(int iParam0)
{
	if (!func_375(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_381(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_506(iParam1);
	}
}

void func_382(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_379(iParam0))
	{
		return;
	}
	if (func_230(iParam0))
	{
		if (!func_507(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_232(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_508(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_377(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_380(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_509(iParam0, 2, 1);
	}
	else
	{
		func_510(iParam0);
		func_509(iParam0, 1, 1);
	}
}

int func_383(int iParam0, int iParam1)
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

void func_384(var uParam0, bool bParam1)
{
	switch (uParam0->f_205)
	{
		case 9:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_END");
			}
			break;
		case 36:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ABANDON");
			}
			break;
		case 79:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_ABANDON");
			}
			break;
		case 125:
		case 127:
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}
}

int func_385(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (!func_127(func_116(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_118(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_118(iParam0));
	return 1;
}

void func_386(var uParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_129(&(uParam1->f_5), 8) && !func_129(&(uParam1->f_5), 4))
	{
		iVar0 = func_36(uParam1->f_205);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_264(iVar0))
			{
				if (!func_129(&(uParam1->f_5), 4096))
				{
					func_384(uParam1, 1);
					func_251(&(uParam1->f_5), 4096);
				}
				func_511(uParam1->f_205);
			}
		}
		else if (func_264(iVar0))
		{
			func_384(uParam1, 0);
			func_512(uParam1->f_205, uParam1->f_198);
			func_251(&(uParam1->f_5), 4);
		}
	}
	func_132(uParam1, 0);
	func_198(uParam1, 0);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		func_405(&(((*uParam0)[iVar1 /*9*/])->f_6));
		if ((CAM::IS_SCREEN_FADED_OUT() || (func_289(((*uParam0)[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 60f && ENTITY::IS_ENTITY_OCCLUDED(((*uParam0)[iVar1 /*9*/])->f_5))) || func_289(((*uParam0)[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 100f)
		{
			func_513(&(((*uParam0)[iVar1 /*9*/])->f_5));
		}
		iVar1++;
	}
	func_514(&(uParam1->f_214), 1, 1);
	func_515(uParam2);
	if (uParam1->f_201 > 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::_TEXT_BLOCK_DELETE(sParam4);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_516(&uVar2, 0);
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_215))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam1->f_215);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam1->f_215);
		VOLUME::DELETE_VOLUME(uParam1->f_215);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_216))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam1->f_216);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam1->f_216);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(func_250(uParam1->f_205)))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(func_250(uParam1->f_205));
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(func_250(uParam1->f_205));
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	func_197(uParam1, 0);
	func_199(0);
	func_517(Global_1935630, 32);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_387(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_388(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_518(iParam1))
		{
			func_519(iParam0, 41788943);
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
			func_520(iParam0, 0, 1);
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
			func_521(iParam0, 0);
			bVar0 = true;
		}
		func_522(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_389(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

bool func_390(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_391(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_392(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_523(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_524((375 + iVar28), 1);
			if (func_525(bParam0, &Var0, iVar5, 0))
			{
				if (func_526(bParam0, &Var6, iVar5))
				{
					Var29 = { func_527(bParam0, Var0, iVar5, 0) };
					func_528(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_529(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_530(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_531(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_393(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_394(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_395(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::_0xF533D68FF970D190(vParam1, iParam5, 1f, 0, 0);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iParam4))
		{
			iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_396(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, -1143637011);
	}
}

void func_397(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam10))
	{
		*uParam10 = func_395(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam10))
	{
		if (!func_472(vParam4) || !func_472(vParam7))
		{
			func_532(*uParam10, vParam4, vParam7);
		}
		func_533(*uParam10, iParam11, iParam12, iParam15);
	}
}

bool func_398(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_399(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_400(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_401(vector3 vParam0, float fParam3, float fParam4)
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
	return func_322(vParam0, fParam3, fParam4);
}

bool func_402(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_534(vParam0, vParam3) <= (fParam6 * fParam6);
}

int func_403(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_534(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

bool func_404(int iParam0, int iParam1, bool bParam2, float fParam3, var uParam4)
{
	if (bParam2)
	{
		if (!func_535(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_298(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (uParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_405(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_406(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 > 3)
	{
		return -1;
	}
	iVar0 = 1;
	iVar1 = func_536(&((Local_849[iParam0 /*9*/])->f_5), Local_268[iParam0 /*83*/], fParam1, &((Local_268[iParam0 /*83*/])->f_21), &iVar0, 0f, 2, 0, 0, 64, 0, 0, 2, 1, -1082130432, 0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_407(int iParam0, int iParam1)
{
	func_319(&((Local_268[iParam0 /*83*/])->f_77));
	(Local_268[iParam0 /*83*/])->f_76 = iParam1;
}

void func_408(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_537(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_538(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_539(iParam0->f_6, iParam0->f_5, 0);
			}
			func_540(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_412(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 && func_541((Local_268[iParam0 /*83*/])->f_21[iParam1 /*17*/], 0, 0))
	{
		func_542((Local_268[iParam0 /*83*/])->f_21[iParam1 /*17*/], bParam2, 0);
	}
	else if (bParam2 && !func_541((Local_268[iParam0 /*83*/])->f_21[iParam1 /*17*/], 0, 0))
	{
		func_542((Local_268[iParam0 /*83*/])->f_21[iParam1 /*17*/], bParam2, 0);
	}
}

void func_410(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_289(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam2);
	}
}

void func_411(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (Local_849[iParam0 /*9*/])->f_5;
	if (bParam1)
	{
		if (func_336(iVar0, -1942934348))
		{
			if (func_403(iVar0, (Local_849[iParam0 /*9*/])->f_1, 10f, 1, 1) && func_298(iVar0, Global_35, 8f, 1))
			{
				return;
			}
		}
		if (func_336(iVar0, -1098463898) && !PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return;
		}
		if (func_298(Global_35, iVar0, 4f, 1))
		{
			if (!func_336(iVar0, -1942934348))
			{
				if (!func_283(&((Local_268[iParam0 /*83*/])->f_80)) || func_300(&((Local_268[iParam0 /*83*/])->f_80)) > 15f)
				{
					iVar1 = func_320(iVar0, 1, 0, 0);
					if (iVar1 != joaat("weapon_unarmed"))
					{
						if (!func_336(iVar0, 716706914))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
							TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
						}
					}
					else
					{
						func_319(&((Local_268[iParam0 /*83*/])->f_80));
						TASK::TASK_CONFRONT(iVar0, Global_35, 2);
					}
					return;
				}
			}
		}
		else if (!func_403(iVar0, (Local_849[iParam0 /*9*/])->f_1, 10f, 1, 1) || !func_298(iVar0, Global_35, 8f, 1))
		{
			if ((!func_336(iVar0, -1098463898) && !func_336(iVar0, -1073489615)) && !func_336(iVar0, 716706914))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, func_414(iParam0), (Local_849[iParam0 /*9*/])->f_1, (Local_849[iParam0 /*9*/])->f_4, -1, 1, 0, 0, -1082130432, 0);
				return;
			}
		}
	}
	if (!func_336(iVar0, -1073489615))
	{
		iVar2 = func_320(iVar0, 1, 0, 0);
		if (!WEAPON::_0x705BE297EEBDB95D(iVar2))
		{
			if (!func_336(iVar0, 716706914))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
			}
		}
		else
		{
			TASK::TASK_AIM_AT_ENTITY(iVar0, Global_35, -1, 0, 0);
		}
	}
}

void func_412(int* iParam0, char* sParam1)
{
	if (func_537(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_539(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_543(iParam0, 1);
}

int func_413(int iParam0)
{
	if (!PED::IS_PED_FACING_PED(Global_35, iParam0, 80f) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f)
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 421625586;
		case 1:
			return -258459266;
		case 3:
			return -258459266;
		default:
			break;
	}
	return 0;
}

float func_415(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_534(vVar0, vParam1);
}

void func_416(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST((Local_849[iParam0 /*9*/])->f_5))
	{
		func_544((Local_849[iParam0 /*9*/])->f_5, iParam1);
	}
}

char* func_417(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	*uParam1 = 0;
	if (iParam0 == 3)
	{
		if (iParam2 != -1)
		{
			return "HEADS_UP_BAD_MEMORY";
		}
	}
	if (iParam0 == 15)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar0)
		{
			case 0:
				return "HIDEOUT_TL_V1_PLYFINAL";
			case 1:
				return "HIDEOUT_TL_V2_PLYFINAL_FIRST";
			case 2:
				return "HIDEOUT_TL_V3_PLYFINAL_FIRST";
			default:
				break;
		}
	}
	else if (iParam0 == 16)
	{
		switch (iLocal_971)
		{
			case 1:
				return "HIDEOUT_TL_V2_PLYFINAL";
			case 2:
				return "HIDEOUT_TL_V3_PLYFINAL";
			default:
				break;
		}
	}
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam0)
			{
				case 4:
					return "CALLOUT_CAMP_WAKE_UP";
				case 6:
					return "COMBAT_FLEE";
				case 5:
					if (iParam2 == 3)
					{
						return "HIDEOUT_TL_V1_SPOT_A";
					}
					else if (func_545())
					{
						return "HIDEOUT_TL_V1_SPOT_A";
					}
					else
					{
						return "HIDEOUT_TL_V2_SPOT_A";
					}
					break;
				case 0:
					switch (iParam2)
					{
						case 0:
							return "HEADS_UP_NEUTRAL";
						case 1:
							return "GET_OUT";
						case 2:
							return "HEADS_UP_HIDEOUT";
						case 3:
							return "HEADS_UP_HIDEOUT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							return "LEAVE_NOW";
						case 3:
							return "WARNED_ALREADY";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "LEAVE_NOW";
						case 1:
							return "FINAL_WARNING";
						case 2:
							return "GANG_INTERACT_THREATEN";
						case 3:
							*uParam1 = 1;
							return "FINAL_WARNING";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_GRT_G1";
						case 1:
							return "HIDEOUT_TW_PL_GRT_G2";
						case 2:
							return "HIDEOUT_TW_PL_GRT_LO1";
						case 3:
							return "HIDEOUT_TW_PL_GRT_LO2";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_ANT_01_G1";
						case 1:
							return "HIDEOUT_TW_PL_ANT_01_G2";
						case 2:
							return "HIDEOUT_TW_PL_ANT_01_LO1";
						case 3:
							return "HIDEOUT_TW_PL_ANT_01_LO2";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_DEF_G1";
						case 1:
							return "HIDEOUT_TW_PL_DEF_G2";
						case 2:
							return "HIDEOUT_TW_PL_DEF_01_LO1";
						case 3:
							return "HIDEOUT_TW_PL_DEF_01_LO2";
						default:
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_ANT_02_G1";
						case 1:
							return "HIDEOUT_TW_PL_ANT_02_G2";
						case 2:
							return "HIDEOUT_TW_PL_ANT_02_LO1";
						case 3:
							return "HIDEOUT_TW_PL_ANT_02_LO2";
						default:
							break;
					}
					break;
				case 11:
					switch (iParam2)
					{
						case 0:
							return "GREET_GENERAL_STRANGER";
						case 1:
							return "GREET_GENERAL_STRANGER";
						case 2:
							return "GENERIC_SHOCKED_MED";
						case 3:
							return "GET_OUT";
						default:
							break;
					}
					break;
				case 12:
					switch (iParam2)
					{
						case 0:
							return "INSULT_RESPONSE";
						case 1:
							return "WHATS_YOUR_PROBLEM";
						case 2:
							return "GENERIC_INSULT_HIGH_NEUTRAL";
						case 3:
							return "INSULT_RESPONSE";
						default:
							break;
					}
					break;
				case 13:
					switch (iParam2)
					{
						case 0:
							*uParam1 = 2;
							return "DEFUSE_RESPONSE";
						case 1:
							*uParam1 = 1;
							return "DEFUSE_RESPONSE";
						case 2:
							return "GANG_INTERACT_CHAT_WARNING_WILDERNESS";
						case 3:
							return "DEFUSE_RESPONSE";
						default:
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 0:
							return "GENERIC_INSULT_HIGH_MALE";
						case 1:
							return "OPENS_FIRE";
						case 2:
							return "OPENS_FIRE";
						case 3:
							return "OPENS_FIRE";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "";
}

bool func_418(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_546(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_419(var uParam0, bool bParam1, int iParam2)
{
	func_547(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_548(0);
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
							func_263(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_549(1))
						{
							func_263(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_549(1) || *uParam0 & 8192 != 0))
				{
					func_262(uParam0, 33554432);
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
			if (func_550(uParam0))
			{
				uParam0->f_15 = func_439();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_439() - uParam0->f_15) > 500)
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
	func_551(uParam0);
}

int func_420(int iParam0, var uParam1)
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
		case 869302489:
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
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_552(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_553(iParam0, iVar2) <= func_554(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_421(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_312(iParam2, 1, 1, 1, 0))
	{
		func_263(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_555(uParam1, 1);
	func_556();
}

int func_422(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_557(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_558(uParam1);
			if (func_559(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_560(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_555(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_555(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, var uParam2)
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
	if (func_561(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_558(uParam2);
		if (func_559(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_560(uParam2)
				{
					func_555(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_424(int iParam0, var uParam1)
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
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_552(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_560(uParam1)
		{
			fVar3 = func_558(uParam1);
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

int func_425(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_562(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
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
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
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

int func_426(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_439();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_427(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_563(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_435(uParam2, iParam1))
			{
				func_555(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_428(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_564(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_435(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_555(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_429(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_565(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_555(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_555(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_566(iParam1, vVar0, vVar4))
					{
						func_555(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_555(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_566(iParam1, vVar0, vVar7))
					{
						func_555(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_430(int iParam0, var uParam1)
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
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_552(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_567(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_568(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_569(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_570(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_571(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_431(int iParam0, var uParam1)
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
		case -1695849405:
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

int func_432(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_439();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
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
		if (func_572(iVar0, &iVar2))
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
	if (func_573(iVar0, iParam0))
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

int func_434(var uParam0, int iParam1)
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

int func_435(var uParam0, int iParam1)
{
	if (func_574(uParam0))
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
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_289(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_437()
{
}

int func_438(var uParam0, int iParam1)
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
		if (func_575(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_439();
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
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_400(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_439();
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

int func_439()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_440()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_439() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_441(var uParam0, int iParam1)
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
	fVar0 = func_554(uParam0);
	if (uParam0->f_12 > func_253(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_576(iParam1);
	iVar1 = func_577(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_442(int iParam0, int iParam1, var uParam2)
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
	return func_578(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_443(int iParam0, var uParam1)
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
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_579(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
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
		case 73464052:
		case 1201762715:
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
					if (!func_580(uParam1, iParam0))
					{
						if (func_400(iVar4, Global_36, 1) < 7f)
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

int func_444(int iParam0, var uParam1)
{
	if (!func_581(0))
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

int func_445(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_439();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_446(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_447(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_439();
	}
	else if (func_439() - uParam1->f_4) > func_582(uParam1)
	{
		return func_583(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_448(var uParam0, int iParam1)
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
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_449(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_514(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_584(iParam0, 0);
		}
	}
}

void func_450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_537(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_514(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_451(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_452(int iParam0)
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
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
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

int func_453(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_419(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_432(uParam1, 4000))
				{
					if ((func_433(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_434(uParam1, iParam0)) && func_435(uParam1, iParam0))
					{
						func_437();
						*uParam2 = 2;
						func_421(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_432(uParam1, 4000))
				{
					if ((func_433(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_434(uParam1, iParam0)) && func_435(uParam1, iParam0))
					{
						func_437();
						*uParam2 = 2;
						func_421(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_436(iParam0, Global_1935630->f_41))
							{
								func_437();
								*uParam2 = 2;
								func_421(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_436(iParam0, Global_1935630->f_41))
						{
							func_437();
							*uParam2 = 2;
							func_421(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_440())
					{
						if (func_436(iParam0, Global_1935630->f_42))
						{
							func_437();
							*uParam2 = 2;
							func_421(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_426(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_427(Global_35, iParam0, uParam1))
					{
						func_437();
						*uParam2 = 4;
						func_421(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_428(Global_35, iParam0, uParam1))
					{
						func_437();
						*uParam2 = 256;
						func_421(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_585(iParam0, uParam1))
			{
				func_437();
				*uParam2 = 131072;
				func_421(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_586(iParam0, uParam1))
			{
				func_437();
				*uParam2 = 262144;
				func_421(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_454()
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (func_587())
	{
		return -1f;
	}
	fVar0 = 0f;
	if (func_455() > -1f)
	{
		fVar0 = func_455();
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		fVar2 = func_456(iVar1);
		if (fVar2 < fVar0)
		{
			fVar0 = fVar2;
		}
		iVar1++;
	}
	return fVar0;
}

float func_455()
{
	if (!func_283(&uLocal_38))
	{
		return -1f;
	}
	return func_169(&uLocal_38);
}

float func_456(int iParam0)
{
	if (!func_283(&((Local_601[iParam0 /*19*/])->f_8)))
	{
		return -1f;
	}
	return func_169(&((Local_601[iParam0 /*19*/])->f_8));
}

void func_457(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_285() - fParam1);
	func_588(uParam0, 1);
	func_589(uParam0, 2);
	uParam0->f_2 = 0f;
}

Vector3 func_458(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_459(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_590(iVar0) || func_591(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_460(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	}
	if (PED::_0xE9B168527B337BF0(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_461(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_592(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

void func_462(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_593(iParam0, 0, 0);
	if (func_365(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_594(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_595(iParam0, 1);
			}
			else
			{
				func_596(iParam0, 1);
			}
		}
		else
		{
			func_597(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::DOOR_SYSTEM_FORCE_SHUT(iParam0, 1);
		}
	}
	else if (func_598())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_463(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST((Local_849[iParam0 /*9*/])->f_5) && !ENTITY::IS_ENTITY_DEAD((Local_849[iParam0 /*9*/])->f_5))
	{
		if ((Local_601[iParam0 /*19*/])->f_3 == 26 || (Local_601[iParam0 /*19*/])->f_3 == 27)
		{
			return 1;
		}
	}
	return 0;
}

void func_464(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

float func_465(int iParam0)
{
	func_593(iParam0, 0, 0);
	if (func_365(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
	}
	return -1f;
}

int func_466(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME(iParam1);
	}
	if (PED::_0x0CAB404CD2DB41F5(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_468(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

int func_469(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_599(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_470(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pistol_m1899"), 0, iParam2) && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_pistol_m1899");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pistol_mauser"), 0, iParam2))
	{
		bVar0 = joaat("weapon_pistol_mauser");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_revolver_lemat"), 0, iParam2) && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_revolver_lemat");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_revolver_doubleaction_gambler"), 0, iParam2) && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_revolver_doubleaction_gambler");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_revolver_doubleaction"), 0, iParam2))
	{
		bVar0 = joaat("weapon_revolver_doubleaction");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pistol_semiauto"), 0, iParam2))
	{
		bVar0 = joaat("weapon_pistol_semiauto");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_revolver_schofield"), 0, iParam2))
	{
		bVar0 = joaat("weapon_revolver_schofield");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pistol_volcanic"), 0, iParam2))
	{
		bVar0 = joaat("weapon_pistol_volcanic");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_revolver_cattleman"), 0, iParam2))
	{
		bVar0 = joaat("weapon_revolver_cattleman");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_shotgun_sawedoff"), 0, iParam2))
	{
		bVar0 = joaat("weapon_shotgun_sawedoff");
	}
	else
	{
		bVar0 = joaat("weapon_revolver_cattleman");
		func_278(iParam0, bVar0, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	if (bVar0 == 0)
	{
		return;
	}
	if (bParam1)
	{
		TASK::TASK_SWAP_WEAPON(iParam0, 1, 0, 0, 0);
	}
	else if (iParam0 == Global_35)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, bVar0, true, 0, false, false);
}

int func_471(var uParam0)
{
	if (func_272(&(uParam0->f_7), 1))
	{
		return 1;
	}
	return 0;
}

int func_472(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_473(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MAP::DOES_BLIP_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && func_149(((*uParam0)[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_474(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_24() != -1)
	{
		return;
	}
	if (func_600(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_601())
	{
		iVar1 = 0;
	}
	func_602(iParam0, iVar1);
}

int func_475(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_603(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_604(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_604(), iVar3);
		if (func_605(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_476(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_37(iParam0))
	{
		return;
	}
	if (func_194(iParam0) == 4)
	{
		func_606(iParam0, func_113());
		if (!func_341(iParam0) == 5 && !func_341(iParam0) == 6)
		{
			if (bParam3)
			{
				func_607(iParam0, 6);
			}
			else
			{
				func_607(iParam0, 5);
			}
			func_608(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_609(1);
	}
	iVar0 = func_27(iParam0);
	bVar1 = func_24() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_610(0, 2);
		if (!bVar1 && bParam1)
		{
			func_611();
		}
	}
	else
	{
		func_612(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_613(iParam0);
	}
	else
	{
		Var2 = { func_481(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_214(32768))
		{
			Var4 = { func_481(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_341(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_98(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_98(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_98(iParam0) != 95 && func_98(iParam0) != 82) && !func_100(((*Global_1347702)[func_98(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_98(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_98(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_615(func_98(iParam0), iVar6, func_614());
	}
	else if (iVar0 == 8)
	{
		func_617(func_98(iParam0), iVar6, func_614(), func_616());
	}
	if (!func_341(iParam0) == 5 && !func_341(iParam0) == 6)
	{
		iVar9 = func_618(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_619(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_620(func_98(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_621((iVar10 - 20), 0, iVar10);
					iVar11 = func_621((iVar11 - 10), 0, iVar11);
				}
				func_622(1);
				func_623(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_623(45, 0, 1);
				break;
			case 8:
				iVar10 = func_624(func_98(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_621((iVar10 - 20), 0, iVar10);
					iVar11 = func_621((iVar11 - 10), 0, iVar11);
				}
				func_623(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_625(func_98(iParam0)))
				{
					func_626(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_623(120, 0, 1);
				break;
			case 2:
				func_623(120, 0, 1);
				break;
			case 6:
				func_623(func_628(func_627(iParam0)), 0, 1);
				break;
			case 5:
				func_623(120, 0, 1);
				break;
		}
	}
	func_629(iParam0, 1);
	func_606(iParam0, func_113());
	func_608(iParam0);
	if ((!func_341(iParam0) == 0 && bParam1) && func_24() == -1)
	{
		iVar12 = func_630(iParam0);
		if (iVar12 != -1)
		{
			func_631(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_632();
			if (iVar12 != -1)
			{
				func_631(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_98(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_99(func_98(iParam0)) && func_100(((*Global_1347702)[func_98(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_98(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_633();
				}
				break;
			case 8:
				if (func_98(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_633();
				}
				break;
		}
	}
	if (!func_341(iParam0) == 5 && !func_341(iParam0) == 6)
	{
		if (bParam3)
		{
			func_607(iParam0, 6);
		}
		else
		{
			func_607(iParam0, 5);
		}
		func_608(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_98(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::MAP_DISCOVER_REGION(-1753910767);
						break;
					case 1:
						func_634();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_635(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(-1267972061);
						func_635(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(1619534881);
						func_635(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(-755457379);
						func_635(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(1015404643);
						func_635(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(-1724192342);
						func_635(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(1310680212);
						func_635(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(-566881549);
						func_635(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(-1753730528);
						func_635(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(147796381);
						func_635(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(-378547623);
						func_635(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(829545206);
						func_635(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_636(891318243);
						func_635(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_637();
						func_638(967523420);
						func_639();
						func_640();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_641(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_635(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_642(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_642(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_643(304805134, 1, 1);
						if (!func_92(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_476(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_644();
						break;
					case 26:
						func_645();
						break;
					case 17:
						func_646(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_33())
						{
							func_647(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_648(-514575035, -1))
						{
							iVar15 = func_113();
							func_40(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_649(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_33())
						{
							func_647(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_33())
						{
							func_647(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_650();
						break;
					case 37:
						func_651();
						if (func_32())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(2116153146, iVar14);
						}
						break;
					case 38:
						func_652();
						break;
					case 43:
						func_653();
						break;
					case 44:
						if (!func_92(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_476(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_92(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_476(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_654();
						break;
					case 59:
						func_655();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_656();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_657();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_642(451, 0);
						}
						if (!func_658(-1992824800))
						{
							if (func_658(1520110311))
							{
								iVar16 = func_113();
								func_40(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_649(1937177603, iVar16, 1);
							}
						}
						if (func_659(4))
						{
							if (!func_660(684296857, 1, 0))
							{
								iVar17 = func_113();
								func_40(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_649(-1439688706, iVar17, 1);
							}
						}
						func_635(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_661(89200);
						func_661(2300);
						func_661(2300);
						break;
					case 68:
						func_662();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_663();
						func_661(-139100);
						break;
					case 69:
						if (func_92(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_661(-6000);
						}
						break;
					case 70:
						func_661(23400);
						func_661(1900);
						func_661(-15000);
						break;
					case 71:
						func_661(-5500);
						break;
				}
				break;
			case 8:
				switch (func_98(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					case 58:
						func_664();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_665();
						break;
					case 66:
						func_666();
						func_667();
						break;
					case 67:
						if (!func_668(6))
						{
							func_669(6);
						}
						if (!func_668(3))
						{
							func_669(3);
						}
						if (func_33())
						{
							func_647(joaat("weapon_pistol_m1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::MAP_DISCOVER_REGION(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					case 9:
						if (func_92(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_670(0);
							func_661(40500);
						}
						else
						{
							func_670(0);
							func_661(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_98(iParam0))
				{
					case 0:
						switch (func_627(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_671(iParam0);
		func_672();
		switch (iVar0)
		{
			case 1:
				switch (func_98(iParam0))
				{
					case 4:
						func_673(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_673(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_673(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_673(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_673(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_673(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_673(iParam0, 70000/*func_452*/, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_674(iParam0);
						func_673(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_673(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_673(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_660(-2046502963, 1, 0))
						{
							func_635(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_673(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_673(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_673(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_674(iParam0) == 0)
						{
							func_673(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_673(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_100(((*Global_1347702)[func_98(iParam0) /*49*/])->f_12, 536870912))
				{
					func_675(11, 1);
				}
				switch (func_98(iParam0))
				{
					case 109:
						func_673(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_675(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_673(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_673(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_673(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_673(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_676(0, 10, 11, 2116153146))
				{
					func_673(iParam0, func_674(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_676(0, 7, 11, -379687487))
				{
					func_673(iParam0, func_677(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_676(0, 8, 11, -1386089015))
				{
					func_673(iParam0, func_677(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_676(0, 11, 11, -1952009645))
				{
					func_673(iParam0, func_677(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_676(0, 12, 11, 2065895756))
				{
					func_673(iParam0, func_677(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_341(iParam0) == 0)
			{
				if (func_678(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_678(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_679(func_27(iParam0), func_678(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_98(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_681(func_680(Global_1879514->f_1));
						if (iVar0 == 8 && func_98(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_99(func_98(iParam0)) && func_100(((*Global_1347702)[func_98(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_479(bParam2, iVar20);
		}
	}
	func_682(1);
	if ((bVar13 || func_633()) && (func_27(iParam0) == 1 || func_27(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_477(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_683(iParam0);
	Global_40.f_11864[iVar0 /*2*/] = iParam1;
}

void func_478(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	iVar0 = func_387(iParam0) & 65535;
	iVar1 = BUILTIN::SHIFT_LEFT(iParam1, 16);
	func_684(iParam0, (iVar1 + iVar0));
}

void func_479(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_685(&Global_0, 8);
	}
	if (!func_361() || func_24() != -1)
	{
		return;
	}
	func_685(&Global_0, 1);
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 2;
		case 79:
			return 1;
		case 36:
			return 0;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
		case 16:
			if (func_31())
			{
				return 4;
			}
			else
			{
				return 0;
			}
			break;
	}
	return -1;
}

struct<2> func_481(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

Vector3 func_482(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_483(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST((Global_1393237->f_11[iVar0 /*30*/])->f_3, vParam0) < fParam3)
		{
			func_686(iVar0);
		}
		iVar0++;
	}
}

void func_484(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_687(Global_1393447, 1);
	func_688();
	func_689();
	func_690((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_439() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_691();
		if (iParam1 == -1)
		{
			if (func_276(iParam0, 1))
			{
				func_692(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_276(iParam0, 2))
			{
				func_692(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_276(iParam0, 4))
			{
				func_692(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_693(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_694(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_694((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_485(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_695(iVar0) == iParam0 && func_696(iVar0) == iParam1)
		{
			func_697(iVar0, -1);
			func_698(iVar0, 0);
			func_699(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
				}
				MAP::REMOVE_BLIP(Global_36307[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

void func_486(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_607(iParam0, 0);
}

void func_487(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 36:
			iVar0 = 55818986; /* GXTEntry: "O\'Driscoll Boys" */
			iVar1 = -1595327694;
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 55818986; /* GXTEntry: "O\'Driscoll Boys" */
				iVar1 = -1065712501;
			}
			else
			{
				iVar0 = -2100600611; /* GXTEntry: "The Laramie Gang" */
				iVar1 = 151695316;
			}
			break;
		case 9:
			iVar0 = 1143368244; /* GXTEntry: "Lemoyne Raiders" */
			iVar1 = -162596529;
			break;
		case 79:
			iVar0 = -1797026825; /* GXTEntry: "The Murfree Brood" */
			iVar1 = -339251000;
			break;
		case 125:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = -437070331;
			break;
		case 127:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1047393655;
			break;
		case 118:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1048432636;
			break;
		case 114:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 2103232336;
			break;
		case 129:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1351740867;
			break;
	}
	COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(iVar0, iVar1);
}

void func_488(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_700(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_678(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_678(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_27(iParam0), func_98(iParam0), func_627(iParam0), func_678(iParam0), Global_36);
		}
	}
	func_607(iParam0, 1);
	bParam1 = bParam1;
}

void func_489(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_701(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (bParam1)
	{
		if (func_678(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_678(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_702(func_98(iParam0));
			}
			if (func_24() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_678(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_678(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_703(iParam0);
	if (!func_37(func_26(0)))
	{
		func_607(iParam0, 3);
		func_609(bParam2);
		if (func_24() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_612(1);
		}
		func_704(iParam0, -1);
		if (bParam1 && !func_214(2))
		{
			func_685(&Global_0, 1024);
		}
		if (func_24() == -1)
		{
			func_705(&(Global_1347343->f_11), 536870912);
			func_706(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_707(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_708(0);
			}
		}
		if (func_24() == -1)
		{
			iVar1 = func_630(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_632();
				switch (iVar1)
				{
					case 0:
						func_709(0);
						break;
					case 1:
						func_709(1);
						break;
					case 2:
						func_709(2);
						break;
					case 3:
						func_709(3);
						break;
					case 4:
						func_709(4);
						break;
					case 5:
						func_709(5);
						break;
					case 6:
						func_709(5);
						break;
					case 7:
						func_709(7);
						break;
					case 8:
						func_709(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_98(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_709(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_98(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_709(11);
						break;
					default:
						iVar1 = func_632();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_710(0);
									break;
								case 1:
									func_710(1);
									break;
								case 2:
									func_710(2);
									break;
								case 3:
									func_710(3);
									break;
								case 4:
									func_710(4);
									break;
								case 5:
									func_710(5);
									break;
								case 6:
									func_710(5);
									break;
								case 7:
									func_710(7);
									break;
								case 8:
									func_710(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_682(1);
	}
	else
	{
		func_704(iParam0, -1);
		func_607(iParam0, 4);
	}
	func_629(iParam0, 0);
}

void func_490(int iParam0)
{
	int iVar0;

	if (func_711(iParam0))
	{
		return;
	}
	iVar0 = func_683(iParam0);
	func_712(iVar0, 16);
}

int func_491(int iParam0)
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

void func_492(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_493(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_713(iParam3, &vVar0, &Var3, &fVar6);
	if (func_714(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_496(int iParam0)
{
	return iParam0 != 0;
}

bool func_497(int iParam0)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_498(int iParam0)
{
	int iVar0;

	if (!func_46(iParam0))
	{
		return;
	}
	iVar0 = func_715(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_499(int iParam0, bool bParam1)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	if (!func_115(iParam0, 2))
	{
		return 0;
	}
	if (func_116(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(func_118(iParam0)))
	{
		return 1;
	}
	if (func_115(iParam0, 1) && !bParam1)
	{
		func_716(iParam0, 128);
		return 1;
	}
	func_119(iParam0, 129);
	func_498(iParam0);
	_NAMESPACE48::DELETE_PERSCHAR(func_118(iParam0));
	func_117(iParam0, 0);
	return 1;
}

bool func_500(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_501(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_502(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_503(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_504(int iParam0)
{
	func_718(func_717(iParam0));
}

bool func_505(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_506(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_507(int iParam0)
{
	if (!func_379(iParam0))
	{
		return false;
	}
	if (!func_230(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_508(int iParam0, bool bParam1)
{
	if (!func_379(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_719(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_509(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_375(iParam0))
		{
			return;
		}
	}
	func_376(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_510(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_377(iParam0);
	iVar1 = func_508(iParam0, 0);
	func_381(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

void func_511(int iParam0)
{
	int iVar0;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	if (iVar0 != func_26(0))
	{
		func_720(iVar0);
	}
	else
	{
		func_720(iVar0);
	}
}

void func_512(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	iVar1 = func_480(iParam0);
	if (iVar1 != -1)
	{
		((*Global_1392050)[iVar1 /*14*/])->f_1 |= 16;
	}
	func_721(iVar0, 0, 2);
	func_477(iParam0, uParam1);
}

void func_513(int* iParam0)
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

void func_514(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_537(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_722(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_723(iVar0);
	*uParam0 = 0;
}

void func_515(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_516(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_724(2000);
	Global_16 = 0;
	func_725();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_726(*uParam0, 8));
	if (!func_726(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_726(*uParam0, 2) || func_726(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(-1679307491);
	}
	if (!func_726(*uParam0, 16))
	{
		func_727(1);
	}
	if (func_726(*uParam0, 32))
	{
		func_728(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_729(-1623728698, 0);
	}
	func_730(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_517(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_518(int iParam0)
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

void func_519(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_731(iParam0, iParam1))
		{
			if (func_732(iParam0, iParam1))
			{
				if (func_733(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_734(iParam0);
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

void func_520(int iParam0, int iParam1, bool bParam2)
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

void func_521(int iParam0, bool bParam1)
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

void func_522(int iParam0, int iParam1)
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

struct<5> func_523(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_735(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_736(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_527(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_737(bParam1) };
			if (iParam2 && func_738(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_525(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_525(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_526(iParam0, &Var5, 1728382685))
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
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_739(bParam1) };
			switch (func_740(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_741(iParam0, -1823706425))
			{
				Var0 = { func_527(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, -1838434463);
			}
			else if (func_741(iParam0, -1483207246))
			{
				Var0 = { func_527(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_742(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_524(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
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

bool func_525(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_743(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_526(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_744(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_527(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_745(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_746(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_528(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_747(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_742(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_529(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_746(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_529(bool bParam0)
{
	if (func_24() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_746(bParam0));
}

int func_530(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_748(iParam0))
	{
		return 0;
	}
	if (!func_529(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_531(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_451(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_532(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_749(iParam0);
		func_750(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

float func_534(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_535(int iParam0, int iParam1, float fParam2)
{
	return func_751(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

var func_536(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_752(&iVar0);
	if (func_276(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_753(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_276(iVar0, 134217728))
	{
		func_754(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_342(558))
				{
					func_642(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

bool func_537(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_538(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_537(iParam0))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_539(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_537(iParam0))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_540(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_537(iParam0))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	if (bParam1)
	{
		func_755(iParam0, 4);
		func_756(iVar0, 1);
		func_757(iVar0, 1);
	}
	else
	{
		func_758(iParam0, 4);
		func_757(iVar0, 0);
	}
}

int func_541(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_537(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_759(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_542(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_760(iParam0, 13))
	{
		func_761(iParam0, 0);
	}
	else
	{
		func_543(iParam0, 0);
	}
	if (func_537(iParam0->f_6))
	{
		if (bParam2)
		{
			func_514(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_543(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_544(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

int func_545()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_546(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_80())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_762(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_289(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_319(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_763(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_241(func_764(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_547(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_765();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_766(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_548(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_549(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_767(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_550(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_24() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_768(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_768(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_577(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_551(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_769(uParam0);
	}
}

int func_552(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_577(iParam2);
	}
	else
	{
		iVar1 = func_576(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_577(iParam0);
	}
	else
	{
		iVar0 = func_576(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_276(*uParam1, 8388608))
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

float func_553(int iParam0, int iParam1)
{
	return func_289(iParam0, iParam1, 1, 1);
}

float func_554(var uParam0)
{
	return uParam0->f_26;
}

void func_555(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_263(uParam0, 134217728);
	}
	else
	{
		func_262(uParam0, 134217728);
	}
}

void func_556()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_557(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_289(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_770(iVar0, 0)))
		{
			if (func_771(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_558(var uParam0)
{
	return uParam0->f_17;
}

int func_559(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_276(*uParam0, 4194304))
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

int func_560(var uParam0)
{
	return uParam0->f_18;
}

int func_561(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_770(iVar0, 0)))
		{
			if (func_344(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_562(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_563(var uParam0)
{
	return uParam0->f_23;
}

int func_564(var uParam0)
{
	return uParam0->f_21;
}

int func_565(var uParam0)
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

int func_566(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_751(iParam0, vParam4, 0.5f))
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

int func_567(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_772(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_568(int iParam0)
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

int func_569(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_452(iParam1))
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

int func_570(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_452(iParam1))
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

int func_571(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_452(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_572(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_573(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_320(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_574(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_575(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_400(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_576(int iParam0)
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

int func_577(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
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

int func_578(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
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
			if (func_572(Global_35, &iVar1))
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
		fVar2 = func_289(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_289(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
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

int func_579(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_767(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_580(uParam1, iVar0))
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
				if (!bParam2 || !func_580(uParam1, iVar1))
				{
					if (func_400(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_580(var uParam0, int iParam1)
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

int func_581(int iParam0)
{
	if (func_31())
	{
		return 0;
	}
	return func_92(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_582(var uParam0)
{
	return uParam0->f_20;
}

int func_583(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_584(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_399(&(uParam0->f_18));
}

int func_585(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_773(uParam1);
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
		fVar2 = func_774(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_775())
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

int func_586(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_452(iParam0))
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

int func_587()
{
	int iVar0;

	if (func_455() == -1f)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (func_456(iVar0) == -1f)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_588(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_589(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_590(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_591(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

int func_592(int iParam0, int iParam1)
{
	int iVar0;

	func_593(iParam0, 0, 0);
	if (func_365(iParam0))
	{
		iVar0 = ENTITY::_GET_ENTITY_BY_DOORHASH(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_593(int iParam0, int iParam1, bool bParam2)
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

void func_594(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_365(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_595(int iParam0, int iParam1)
{
	if (func_365(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_596(int iParam0, int iParam1)
{
	if (func_365(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_597(int iParam0, int iParam1)
{
	if (func_365(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_598()
{
	return 1;
}

int func_599(int iParam0, int iParam1)
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

int func_600(var uParam0)
{
	if (-1829635046 == func_776(81053684))
	{
		if (func_777(uParam0))
		{
			return 1;
		}
	}
	else if (func_778(-525676072, uParam0))
	{
		if (func_777(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_601()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43799) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43799, 0));
}

void func_602(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_779();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(&Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_621(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_621(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_780())
		{
			func_781(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_782())
		{
			func_781(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_783())
		{
			func_781(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_784())
	{
		func_781(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_218(func_481(661720433), iVar1);
	iVar10 = func_779();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

int func_603(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_286(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_604()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_605(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_24() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_606(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

void func_607(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_785(iParam0, iParam1);
}

int func_608(int iParam0)
{
	return func_787(func_786(iParam0));
}

void func_609(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_517(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_216(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_610(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_238(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_612(bParam0);
	return 1;
}

void func_611()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_379(iVar17))
		{
			iVar18 = func_377(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_399(&(Global_1359489->f_55));
	if (func_788(1777191912, 1))
	{
		func_789(1777191912, 1, 0);
	}
}

int func_612(bool bParam0)
{
	if (!bParam0 && func_238(373691918))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(752193127, bParam0, 0);
	return 1;
}

void func_613(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_684(iParam0, (func_387(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_614()
{
	return func_790() > 0;
}

void func_615(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_791(-1032423150, iParam1);
			break;
		case 18:
			func_791(294066959, iParam1);
			func_791(-1925639563, iParam1);
			func_791(-378582304, iParam1);
			func_791(-338306437, iParam1);
			break;
		case 20:
			func_791(437270255, iParam1);
			break;
		case 2:
			func_791(-304000413, iParam1);
			func_791(-533612796, iParam1);
			func_791(48036954, iParam1);
			break;
		case 23:
			func_791(193108691, iParam1);
			func_791(491732588, iParam1);
			func_791(671962088, iParam1);
			func_792(1);
			break;
		case 16:
			func_791(-1836056650, iParam1);
			func_791(-754657922, iParam1);
			func_791(-1752355838, iParam1);
			func_791(-1375324510, iParam1);
			break;
		case 59:
			func_791(-514392105, iParam1);
			func_791(-822060246, iParam1);
			if (func_793(146))
			{
				func_791(1372748575, iParam1);
			}
			func_792(1);
			break;
		case 76:
			func_791(1991352213, iParam1);
			if (func_794() == 0)
			{
				func_791(1852488616, iParam1);
			}
			else
			{
				func_791(-9866350, iParam1);
			}
			break;
		case 44:
			func_791(863852599, iParam1);
			func_791(1228374935, iParam1);
			func_791(1517889050, iParam1);
			func_791(830657578, iParam1);
			func_791(1901354958, iParam1);
			break;
		case 46:
			func_791(-582805654, iParam1);
			func_791(250378940, iParam1);
			func_791(-2143265426, iParam1);
			break;
		case 17:
			func_791(-941494139, iParam1);
			func_791(1641489521, iParam1);
			break;
		case 19:
			func_791(-1829423531, iParam1);
			func_791(-1590504752, iParam1);
			func_791(1357221321, iParam1);
			break;
		case 21:
			func_791(-1037992610, iParam1);
			func_791(-1286414399, iParam1);
			func_792(0);
			break;
		case 15:
			func_791(-1014460309, iParam1);
			func_791(-1030502825, iParam1);
			break;
		case 33:
			func_791(479388090, iParam1);
			func_791(-1396342239, iParam1);
			func_791(-619618632, iParam1);
			break;
		case 34:
			func_791(1193561641, iParam1);
			break;
		case 64:
			func_791(1363960851, iParam1);
			break;
		case 60:
			func_791(-1232453926, iParam1);
			func_791(-882833584, iParam1);
			break;
		case 73:
			func_791(2023205767, iParam1);
			break;
		case 74:
			func_791(-2135286513, iParam1);
			if (func_794() == 0)
			{
				func_791(33799444, iParam1);
			}
			else
			{
				func_791(-161343203, iParam1);
			}
			break;
		case 8:
			func_791(841639693, iParam1);
			func_791(358952323, iParam1);
			break;
		case 36:
			func_791(852538149, iParam1);
			func_791(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_791(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_791(1116039310, iParam1);
			}
			break;
		case 27:
			func_791(107633428, iParam1);
			func_791(335902282, iParam1);
			func_791(575673055, iParam1);
			func_791(-425944207, iParam1);
			break;
		case 28:
			func_791(-1941530250, iParam1);
			func_791(1399269304, iParam1);
			func_791(1839684664, iParam1);
			func_791(923168503, iParam1);
			func_791(-1485078322, iParam1);
			break;
		case 29:
			func_791(574995900, iParam1);
			func_791(-1691275407, iParam1);
			func_791(-1725307861, iParam1);
			break;
		case 31:
			func_791(-2108383238, iParam1);
			func_791(-1321828931, iParam1);
			func_791(-1632118592, iParam1);
			func_791(334938948, iParam1);
			break;
		case 4:
			func_791(115823701, iParam1);
			func_791(-1896939736, iParam1);
			func_791(-1830746356, iParam1);
			func_791(-1235169781, iParam1);
			func_792(0);
			break;
		case 6:
			func_791(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_791(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_791(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_791(-384176140, iParam1);
			}
			break;
		case 25:
			func_791(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_791(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_791(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_791(-1374849484, iParam1);
			}
			break;
		case 48:
			func_791(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_791(217772674, iParam1);
			}
			else
			{
				func_791(2071798160, iParam1);
			}
			if (func_795(51))
			{
				func_791(-792802286, iParam1);
			}
			break;
		case 49:
			func_791(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_791(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_791(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_791(1402120602, iParam1);
			}
			break;
		case 58:
			func_791(-1661934591, iParam1);
			break;
		case 50:
			func_791(-1713759426, iParam1);
			break;
		case 52:
			func_791(-314799932, iParam1);
			func_791(-462260432, iParam1);
			func_791(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_791(345256028, iParam1);
				func_791(-1635084094, iParam1);
			}
			else
			{
				func_791(114267347, iParam1);
			}
			break;
		case 32:
			func_791(615304157, iParam1);
			break;
		case 47:
			func_791(415434835, iParam1);
			break;
		case 69:
			func_791(1373465877, iParam1);
			if (func_92(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_791(-2058273527, iParam1);
			}
			break;
		case 70:
			func_791(451334985, iParam1);
			if (func_794() == 0)
			{
				func_791(-224150200, iParam1);
			}
			else
			{
				func_791(289012628, iParam1);
			}
			break;
		case 71:
			if (func_794() == 0)
			{
				func_791(-41692120, iParam1);
			}
			else
			{
				func_791(1537840678, iParam1);
			}
			break;
		case 37:
			func_791(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_791(1842132550, iParam1);
			}
			else
			{
				func_791(-785735240, iParam1);
			}
			func_791(-1605690566, iParam1);
			break;
		case 13:
			func_791(-731367459, iParam1);
			func_791(224176585, iParam1);
			func_791(-14545580, iParam1);
			break;
		case 53:
			func_791(1095274522, iParam1);
			break;
		case 54:
			func_791(-572027988, iParam1);
			break;
		case 56:
			func_791(1339307101, iParam1);
			func_791(2102267732, iParam1);
			break;
		case 57:
			func_791(710102686, iParam1);
			break;
		case 22:
			func_791(-1754368482, iParam1);
			func_791(-2071408557, iParam1);
			break;
		case 12:
			func_791(-181334543, iParam1);
			break;
		case 0:
			func_791(-2134669864, iParam1);
			func_791(-548289709, iParam1);
			func_791(-911271922, iParam1);
			func_791(-604455775, iParam1);
			break;
		case 1:
			func_792(1);
			break;
		case 3:
			if (func_32())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_791(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_791(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_616()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_617(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			func_791(-145926707, iParam1);
			func_791(-604922090, iParam1);
			func_791(-848690769, iParam1);
			break;
		case 1:
			func_791(-1477631591, iParam1);
			break;
		case 2:
			func_791(76112544, iParam1);
			break;
		case 9:
			func_791(1396404308, iParam1);
			func_791(-1357381228, iParam1);
			if (func_92(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_791(1902679064, iParam1);
			}
			else
			{
				func_791(-2146422425, iParam1);
			}
			break;
		case 22:
			func_791(-1534761730, iParam1);
			break;
		case 26:
			if (iParam3 == 1)
			{
				func_791(-1934184559, iParam1);
				func_791(1281755988, iParam1);
			}
			else
			{
				func_791(-1745220872, iParam1);
				func_791(-1044976796, iParam1);
			}
			break;
		case 29:
			if (iParam3 == 1)
			{
				func_791(-1641504538, iParam1);
				func_791(-988014485, iParam1);
			}
			else if (func_793(26))
			{
				func_791(-343043950, iParam1);
				func_791(-640062214, iParam1);
			}
			else
			{
				func_791(-1272028496, iParam1);
			}
			break;
		case 32:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_791(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_791(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_791(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_791(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_791(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_791(1301690984, iParam1);
				}
			}
			else
			{
				func_791(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_791(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_791(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_791(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_791(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_791(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_791(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (iParam3 == 1)
			{
				func_791(-754570528, iParam1);
			}
			else
			{
				func_791(1690083163, iParam1);
			}
			break;
		case 36:
			if (iParam3 == 1)
			{
				func_791(-2072125821, iParam1);
			}
			else
			{
				func_791(270040030, iParam1);
			}
			break;
		case 37:
			func_791(-870030001, iParam1);
			break;
		case 53:
			if (iParam3 == 1)
			{
				func_791(-505314737, iParam1);
				func_791(-1853052860, iParam1);
			}
			else
			{
				func_791(-1975624994, iParam1);
				func_791(1648135852, iParam1);
			}
			break;
		case 54:
			if (iParam3 == 1)
			{
				func_791(1690231002, iParam1);
			}
			else
			{
				func_791(517031924, iParam1);
			}
			break;
		case 55:
			if (iParam3 == 1)
			{
				func_791(1225386280, iParam1);
			}
			else if (func_793(54))
			{
				func_791(-283235773, iParam1);
			}
			else
			{
				func_791(701962369, iParam1);
			}
			break;
		case 38:
			if (iParam3 == 1)
			{
				func_791(1355398007, iParam1);
			}
			else
			{
				func_791(-1900349467, iParam1);
			}
			break;
		case 39:
			if (iParam3 == 1)
			{
				func_791(574636806, iParam1);
			}
			else
			{
				func_791(-196256251, iParam1);
			}
			break;
		case 40:
			if (iParam3 == 1)
			{
				func_791(821118338, iParam1);
			}
			else if (func_793(39))
			{
				func_791(846829260, iParam1);
			}
			else
			{
				func_791(-1212247553, iParam1);
			}
			break;
		case 43:
			if (iParam3 == 1)
			{
				if (func_674(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_791(1422779093, iParam1);
				}
				else
				{
					func_791(-1769536986, iParam1);
				}
			}
			else
			{
				func_791(-600786233, iParam1);
			}
			break;
		case 45:
			if (iParam3 == 1)
			{
				func_791(352134789, iParam1);
			}
			else if (func_793(43))
			{
				func_791(260723113, iParam1);
			}
			else
			{
				func_791(1080243038, iParam1);
			}
			break;
		case 41:
			if (iParam3 == 1)
			{
				func_791(-457958799, iParam1);
			}
			else
			{
				func_791(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_793(41))
			{
				func_791(-546824600, iParam1);
			}
			else
			{
				func_791(-308364587, iParam1);
			}
			break;
		case 49:
			if (iParam3 == 1)
			{
				func_791(1297261593, iParam1);
			}
			else
			{
				func_791(1940089142, iParam1);
			}
			break;
		case 50:
			if (iParam3 == 1)
			{
				func_791(2068484886, iParam1);
			}
			else if (func_793(49))
			{
				func_791(-1489080639, iParam1);
				func_791(-2102244050, iParam1);
			}
			else
			{
				func_791(-1863040467, iParam1);
			}
			break;
		case 51:
			func_791(-2055943209, iParam1);
			break;
		case 58:
			if (func_92(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_791(1650066845, iParam1);
			}
			else
			{
				func_791(151370023, iParam1);
			}
			func_791(1426057961, iParam1);
			func_791(476379584, iParam1);
			break;
		case 59:
			func_791(-1638117866, iParam1);
			break;
		case 62:
			func_791(199541730, iParam1);
			break;
		case 63:
			func_791(1703485804, iParam1);
			func_791(-800449045, iParam1);
			break;
		case 65:
			func_791(-1678210868, iParam1);
			func_791(-1448238026, iParam1);
			func_791(-1200864845, iParam1);
			func_791(1473511536, iParam1);
			break;
		case 66:
			func_791(-1774490051, iParam1);
			func_791(-34645921, iParam1);
			func_791(174027075, iParam1);
			func_791(-1155999, iParam1);
			func_792(1);
			break;
		case 67:
			func_791(701612593, iParam1);
			func_791(-1069631343, iParam1);
			func_791(1673428882, iParam1);
			break;
		case 68:
			func_791(-739133286, iParam1);
			func_791(-2130089358, iParam1);
			func_791(2056190391, iParam1);
			func_791(1941753817, iParam1);
			func_792(0);
			break;
		case 70:
			func_791(-1217555753, iParam1);
			break;
		case 71:
			func_791(697048821, iParam1);
			break;
		case 73:
			func_791(-553148661, iParam1);
			break;
		case 75:
			func_791(1349250531, iParam1);
			break;
		case 77:
			if (iParam3 == 1)
			{
				func_791(1414263863, iParam1);
			}
			else
			{
				func_791(-1772294468, iParam1);
			}
			break;
		case 79:
			if (iParam3 == 1)
			{
				func_791(1835465936, iParam1);
				func_791(523715611, iParam1);
			}
			else if (func_793(78))
			{
				func_791(1420338873, iParam1);
			}
			else
			{
				func_791(-46362051, iParam1);
			}
			break;
		case 80:
			if (iParam3 == 1)
			{
				func_791(10180941, iParam1);
			}
			else if (func_793(79))
			{
				func_791(768420635, iParam1);
			}
			else
			{
				func_791(-1734012650, iParam1);
			}
			break;
		case 85:
			if (iParam3 == 1)
			{
				func_791(-383601523, iParam1);
			}
			else
			{
				func_791(1004812390, iParam1);
			}
			break;
		case 86:
			if (iParam3 == 1)
			{
				func_791(1606472408, iParam1);
			}
			else
			{
				func_791(1405690220, iParam1);
			}
			break;
		case 87:
			if (iParam3 == 1)
			{
				func_791(-203571927, iParam1);
			}
			else
			{
				func_791(640033630, iParam1);
			}
			break;
		case 88:
			if (iParam3 == 1)
			{
				func_791(729886222, iParam1);
			}
			else
			{
				func_791(-158717807, iParam1);
			}
			break;
		case 89:
			if (iParam3 == 1)
			{
				func_791(-714816362, iParam1);
			}
			else
			{
				func_791(1160146336, iParam1);
			}
			break;
		case 92:
			if (iParam3 == 1)
			{
				func_791(-932932179, iParam1);
				func_791(-1458537240, iParam1);
			}
			else
			{
				func_791(-1764383885, iParam1);
				func_791(894349517, iParam1);
			}
			break;
		case 93:
			if (iParam3 == 1)
			{
				func_791(1741466706, iParam1);
			}
			else
			{
				func_791(1405815775, iParam1);
			}
			break;
		case 94:
			func_791(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_791(1905280979, iParam1);
			}
			else
			{
				func_791(-1966245299, iParam1);
			}
			func_791(721468880, iParam1);
			break;
		case 99:
			func_791(800644248, iParam1);
			break;
		case 101:
			if (iParam3 == 1)
			{
				func_791(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_791(-1117781095, iParam1);
				}
				else
				{
					func_791(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_791(141494548, iParam1);
			}
			else
			{
				func_791(-633957459, iParam1);
			}
			break;
		case 102:
			if (iParam3 == 1)
			{
				func_791(-369525697, iParam1);
			}
			else if (func_793(101))
			{
				func_791(1595015219, iParam1);
			}
			else
			{
				func_791(-321486961, iParam1);
			}
			break;
		case 103:
			func_791(1422724221, iParam1);
			break;
		case 104:
			if (iParam3 == 1)
			{
				func_791(793460477, iParam1);
				func_791(-1610242176, iParam1);
			}
			else if (func_793(103))
			{
				func_791(1830897187, iParam1);
			}
			else
			{
				func_791(1419017828, iParam1);
			}
			break;
		case 105:
			if (iParam3 == 1)
			{
				func_791(1528309077, iParam1);
			}
			else if (func_793(104))
			{
				func_791(1864966105, iParam1);
			}
			else
			{
				func_791(-103336013, iParam1);
			}
			break;
		case 108:
			func_791(1175579551, iParam1);
			break;
		case 109:
			if (iParam3 == 1)
			{
				func_791(-1123227713, iParam1);
				func_791(-889574341, iParam1);
			}
			else
			{
				func_791(2065385917, iParam1);
				func_791(780305039, iParam1);
			}
			break;
		case 110:
			if (iParam3 == 1)
			{
				func_791(-887421691, iParam1);
			}
			else if (func_793(109))
			{
				func_791(-1318117949, iParam1);
			}
			else
			{
				func_791(1632244327, iParam1);
			}
			break;
		case 111:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_791(284822762, iParam1);
				}
				else
				{
					func_791(-1425017554, iParam1);
				}
			}
			else if (func_793(110))
			{
				if (&Global_1357515 == 0)
				{
					func_791(553087292, iParam1);
				}
				else
				{
					func_791(-1766870331, iParam1);
					func_791(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_791(-1980598735, iParam1);
			}
			else
			{
				func_791(-442732098, iParam1);
				func_791(1955756409, iParam1);
			}
			break;
		case 115:
			func_791(394303528, iParam1);
			func_791(-2040171028, iParam1);
			break;
		case 143:
			if (iParam3 == 1)
			{
				func_791(1182403394, iParam1);
			}
			else
			{
				func_791(-2116547899, iParam1);
			}
			break;
		case 144:
			if (iParam3 == 1)
			{
				func_791(924445424, iParam1);
			}
			else
			{
				func_791(1227062271, iParam1);
			}
			break;
		case 117:
			if (iParam3 == 1)
			{
				func_791(430755273, iParam1);
				func_791(-1473879802, iParam1);
			}
			else
			{
				func_791(1121266049, iParam1);
			}
			break;
		case 118:
			if (iParam3 == 1)
			{
				func_791(73885747, iParam1);
			}
			else if (func_793(117))
			{
				func_791(1559707913, iParam1);
			}
			else
			{
				func_791(926897873, iParam1);
			}
			break;
		case 119:
			if (iParam3 == 1)
			{
				func_791(-2103887972, iParam1);
			}
			else if (func_793(118))
			{
				func_791(-435828462, iParam1);
			}
			else
			{
				func_791(-516020583, iParam1);
			}
			break;
		case 121:
			if (iParam3 == 1)
			{
				func_791(2054486196, iParam1);
			}
			else
			{
				func_791(1809320262, iParam1);
			}
			break;
		case 122:
			if (iParam3 == 1)
			{
				func_791(-570086056, iParam1);
			}
			else if (func_793(121))
			{
				func_791(32337856, iParam1);
			}
			else
			{
				func_791(-206811842, iParam1);
			}
			break;
		case 124:
			if (iParam3 == 1)
			{
				func_791(813493663, iParam1);
			}
			else if (func_793(122))
			{
				func_791(-2132763590, iParam1);
			}
			else
			{
				func_791(477901035, iParam1);
			}
			break;
		case 125:
			if (iParam3 == 1)
			{
				func_791(-66240572, iParam1);
				func_791(1563075046, iParam1);
			}
			else
			{
				func_791(-787011772, iParam1);
				func_791(-1523377438, iParam1);
			}
			break;
		case 127:
			func_791(61020800, iParam1);
			break;
		case 129:
			func_791(428985222, iParam1);
			break;
		case 131:
			func_791(-1393851036, iParam1);
			break;
		case 133:
			func_791(1559531342, iParam1);
			break;
		case 134:
			func_791(-718846442, iParam1);
			break;
		case 135:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_791(-1374407408, iParam1);
				}
				else
				{
					func_791(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_791(-472672138, iParam1);
				}
				else
				{
					func_791(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_791(-1678710489, iParam1);
			}
			else
			{
				func_791(1522210661, iParam1);
			}
			break;
		case 136:
			if (iParam3 == 1)
			{
				func_791(1717582460, iParam1);
			}
			else
			{
				func_791(343644664, iParam1);
			}
			break;
		case 137:
			if (iParam3 == 1)
			{
				func_791(1568112362, iParam1);
				func_791(1388317526, iParam1);
			}
			else if (func_793(136))
			{
				func_791(-1597534828, iParam1);
				func_791(-1207918353, iParam1);
			}
			else
			{
				func_791(-1940891082, iParam1);
				func_791(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_791(448334530, iParam1);
				func_791(2145375502, iParam1);
			}
			else
			{
				func_791(-1891994685, iParam1);
			}
			break;
		case 146:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_791(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_791(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_791(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_791(848633571, iParam1);
			}
			break;
		case 147:
			if (iParam3 == 1)
			{
				func_791(-66616327, iParam1);
			}
			else
			{
				func_791(1978361607, iParam1);
			}
			break;
		case 148:
			if (iParam3 == 1)
			{
				func_791(1862916706, iParam1);
			}
			else if (func_793(147))
			{
				func_791(675105199, iParam1);
			}
			else
			{
				func_791(-1993800776, iParam1);
			}
			break;
		case 149:
			if (iParam3 == 1)
			{
				func_791(174409701, iParam1);
			}
			else if (func_793(148))
			{
				func_791(-1730895475, iParam1);
			}
			else
			{
				func_791(-342396910, iParam1);
			}
			break;
		case 150:
			if (iParam3 == 1)
			{
				func_791(1295237052, iParam1);
			}
			else if (func_793(149))
			{
				func_791(-788577684, iParam1);
			}
			else
			{
				func_791(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_618(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_27(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_796(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_674(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_98(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_98(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_619(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_797(iParam0);
	uVar3 = func_798(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_113();
				func_40(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_799(iParam0, 1);
			if (func_800(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_801(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_802(1, iParam0);
				}
				else
				{
					func_803(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_620(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		case 76:
			*uParam1 = 35;
			return 70;
		case 70:
			*uParam1 = 35;
			return 70;
		case 73:
			*uParam1 = 35;
			return 70;
		case 19:
			*uParam1 = 25;
			return 50;
		case 21:
			*uParam1 = 35;
			return 70;
		case 60:
			*uParam1 = 35;
			return 70;
		case 61:
			*uParam1 = 35;
			return 70;
		case 62:
			*uParam1 = 35;
			return 70;
		case 63:
			*uParam1 = 35;
			return 70;
		case 64:
			*uParam1 = 35;
			return 70;
		case 65:
			*uParam1 = 35;
			return 70;
		case 66:
			*uParam1 = 35;
			return 70;
		case 67:
			*uParam1 = 35;
			return 70;
		case 32:
			*uParam1 = 35;
			return 70;
		case 48:
			*uParam1 = 35;
			return 70;
		case 49:
			*uParam1 = 35;
			return 70;
		case 47:
			*uParam1 = 30;
			return 60;
		case 58:
			*uParam1 = 30;
			return 60;
		case 27:
			*uParam1 = 30;
			return 60;
		case 29:
			*uParam1 = 40;
			return 100;
		case 30:
			*uParam1 = 50;
			return 100;
		case 33:
			*uParam1 = 30;
			return 60;
		case 23:
			*uParam1 = 30;
			return 60;
		case 10:
			*uParam1 = 30;
			return 60;
		case 5:
			*uParam1 = 45;
			return 60;
		case 11:
			*uParam1 = 35;
			return 70;
		case 9:
			*uParam1 = 45;
			return 70;
		case 15:
			*uParam1 = 15;
			return 35;
		case 35:
			*uParam1 = 50;
			return 70;
		case 8:
			*uParam1 = 50;
			return 100;
		case 36:
			*uParam1 = 40;
			return 80;
		case 22:
			*uParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_621(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_622(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_623(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_804(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_624(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_626(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return;
	}
	if ((Global_36615 && func_805(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_806(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_807(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_808(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_807(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_627(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_809(func_101(iParam0));
}

int func_628(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_629(int iParam0, bool bParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_26(0) != iParam0)
	{
		return;
	}
	if (func_810(iParam0))
	{
		if (bParam1)
		{
			func_811(-525676072);
		}
		else
		{
			func_812(-525676072);
		}
	}
}

int func_630(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_27(iParam0))
	{
		case 1:
			iVar0 = func_98(iParam0);
			return func_813(iVar0);
		case 8:
			iVar1 = func_98(iParam0);
			if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_814(iVar1);
			}
			break;
	}
	return -1;
}

void func_631(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_815(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_816();
		Global_1898077->f_9 = func_817(Global_1894899->f_2);
		func_818(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_632()
{
	if (!func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_92(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_92(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_92(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_92(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_92(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_92(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_633()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_361())
	{
		return 0;
	}
	if (!func_92(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_92(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_92(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_92(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_92(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_92(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_92(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_92(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_92(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_92(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_92(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_92(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_92(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_92(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_92(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_92(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_92(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_92(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_92(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_92(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_92(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_92(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_92(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_92(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_92(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_634()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_635(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!func_820(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_821(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_822(iParam0, bParam2);
	iVar2 = 0;
	if (func_823(iParam0, 0, 0) == 0)
	{
		if (func_824(iParam0))
		{
			iVar5 = func_825(iParam0);
			iVar6 = func_826(iVar5);
			iVar7 = func_827(iVar6) + 1;
			func_828(iVar5);
			if (func_829(38))
			{
				func_642(483, 0);
			}
			else
			{
				func_642(482, 0);
			}
			if (iVar7 == func_830(iVar6))
			{
				func_635(func_831(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_361() && func_832(4))
				{
					if (func_361() && (func_833(38) || func_829(38)))
					{
						func_835(38, func_831(iVar6), 0, 0, func_834(), 0, -1, 0);
						func_836(2);
					}
					else
					{
						func_835(38, func_831(iVar6), 0, 0, func_834(), 0, -1, 0);
						func_836(1);
					}
				}
			}
			else if (func_361() && func_832(4))
			{
				if (func_361() && (func_833(38) || func_829(38)))
				{
					func_835(38, 0, 0, 0, func_834(), 0, -1, 0);
					func_836(2);
				}
				else
				{
					func_835(38, 0, 0, 0, func_834(), 0, -1, 0);
					func_836(1);
				}
			}
			if (func_361() && func_832(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_361() && (func_833(38) || func_829(38)))
					{
						func_837(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_837(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_736(iParam0) == -1037537535)
	{
		if ((!func_838(iParam0, 866047851) && !func_838(iParam0, -1979000645)) && !func_838(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_839(iParam0, 8388608) && !func_358(28))
	{
		func_840(28);
	}
	if (!bVar3)
	{
		if (func_838(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_740(iParam0) == -1447088266)
			{
				iVar1 = func_842(func_841(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_24() == -1)
					{
						func_843(iVar1);
					}
					if (func_529(0) && func_392(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_530(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_24() == -1)
					{
						func_843(iParam0);
					}
					if (func_529(0) && func_392(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_530(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_736(iParam0) == -427144552)
		{
			if (!func_844(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_736(iParam0) == 307971639 && func_748(iParam0))
		{
			if (!func_845(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_838(iParam0, 866047851))
		{
			func_846(iParam0);
		}
		else if (func_838(iParam0, 2000026003))
		{
			func_847(iParam0);
		}
		else if (func_838(iParam0, -103750053))
		{
			func_218(func_848(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_218(func_217(-717883113, 2091222383), iVar0);
		}
		else if (func_838(iParam0, -121341956) && !func_838(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_642(498, 0);
				}
			}
			if (func_838(iParam0, -2017733358) || func_838(iParam0, -1369131378))
			{
				func_849(iParam0);
			}
		}
		else if (func_838(iParam0, -136654233))
		{
			if (func_838(iParam0, -1021472396))
			{
			}
		}
		else if (func_838(iParam0, -1466706512) && func_838(iParam0, 1147021565))
		{
			func_642(484, 0);
		}
		else if (func_838(iParam0, 1147021565) && func_838(iParam0, -524514947))
		{
		}
		else if (func_838(iParam0, 554195525))
		{
		}
		else if (func_838(iParam0, 589988438))
		{
			if (func_850())
			{
				func_851(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_838(iParam0, 787083290) && func_838(iParam0, 949916894))
		{
			func_852(iParam0);
		}
		else if (func_838(iParam0, -1718133314))
		{
			func_853(iParam0);
		}
		else if (func_838(iParam0, -1738650224))
		{
			func_854(iParam0);
		}
		else if (func_838(iParam0, -1112814642) && func_838(iParam0, 949916894))
		{
			func_855(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_838(iParam0, 1841149704))
		{
			func_856();
		}
		else if (func_838(iParam0, 606799272))
		{
			func_857(iParam0, iParam1);
			func_858(iParam0);
		}
		else if (func_838(iParam0, -1112814642) && func_838(iParam0, -1697809989))
		{
			func_859(iParam0, 0, 0, 0);
		}
		else if (func_838(iParam0, -2017733358) || func_838(iParam0, -1369131378))
		{
			func_849(iParam0);
		}
		else if (func_838(iParam0, -1921346699))
		{
			if (func_24() != -1)
			{
				return 0;
			}
			func_860(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_838(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_660(215778062, 1, 0))
					{
						func_635(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_660(670273567, 1, 0))
					{
						func_635(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_660(-967317137, 1, 0))
					{
						func_635(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_660(526074061, 1, 0))
					{
						func_635(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_660(-1045488665, 1, 0))
					{
						func_635(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_660(471514780, 1, 0))
					{
						func_635(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_838(iParam0, -839724752) && func_839(iParam0, 4))
		{
			if (!func_829(42))
			{
				func_861(iParam0);
			}
		}
		else if (func_838(iParam0, 1399091007))
		{
			func_862(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_838(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656:
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022:
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895:
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448:
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709:
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973:
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_635(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_840(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_728(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_863(&bVar9, 0))
				{
					func_392(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_24() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_728(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_642(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_864();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_865();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_866();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_867();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_868();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_869(499813453, 854119837, 0);
				func_870(499813453, 0);
				func_871(1);
				break;
			case 2127812557:
				func_869(499813453, -1292544588, 0);
				func_870(499813453, 0);
				func_871(2);
				break;
			case 808991383:
				func_869(499813453, -1003325394, 0);
				func_870(499813453, 0);
				func_871(4);
				break;
			case 1134518629:
				func_869(666607663, -335460405, 0);
				func_870(666607663, 0);
				func_872(1);
				break;
			case 902940106:
				func_869(666607663, 903797617, 0);
				func_870(666607663, 0);
				func_872(2);
				break;
			case -418174898:
				func_869(666607663, 669728650, 0);
				func_870(666607663, 0);
				func_872(4);
				break;
			case -648114971:
				func_869(-220219788, 1214120047, 0);
				func_870(-220219788, 0);
				func_873(1);
				break;
			case 211153747:
				func_869(-220219788, 655769340, 0);
				func_870(-220219788, 0);
				func_873(2);
				break;
			case -32876996:
				func_869(-220219788, 885316185, 0);
				func_870(-220219788, 0);
				func_873(4);
				break;
			case 1191437462:
				func_869(218622660, -1491419385, 0);
				func_870(218622660, 0);
				func_874(1);
				break;
			case 1119149048:
				func_869(218622660, 1809565830, 0);
				func_870(218622660, 0);
				func_874(2);
				break;
			case 506073827:
				func_869(390004462, -628873767, 0);
				func_870(390004462, 0);
				func_875(1);
				break;
			case -1876986168:
				func_869(390004462, -405421956, 0);
				func_870(390004462, 0);
				func_875(2);
				break;
			case 2142623221:
				func_869(390004462, -1108972386, 0);
				func_870(390004462, 0);
				func_875(4);
				break;
			case 1508215381:
				func_869(6410548, 1053716392, 0);
				func_870(6410548, 0);
				func_876(1);
				break;
			case -888935280:
				func_869(6410548, 806507056, 0);
				func_870(6410548, 0);
				func_876(2);
				break;
			case -1252474566:
				func_869(6410548, 1571925350, 0);
				func_870(6410548, 0);
				func_876(4);
				break;
			case -1465702449:
				func_869(6410548, 1330352282, 0);
				func_870(6410548, 0);
				func_876(8);
				break;
			case -21093309:
				func_878(242, func_877(-21093309), 0);
				break;
			case 204375141:
				func_878(240, func_877(204375141), 0);
				break;
			case -417963070:
				func_878(241, func_877(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_879(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_879(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_879(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_879(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_879(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_879(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_642(488, 0);
				break;
			case 1613651027:
				func_642(491, 0);
				break;
			case -885810591:
				func_642(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_635(func_880(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_635(func_881(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_358(1))
				{
					func_642(487, 0);
				}
				break;
			case -898386032:
				func_642(486, 0);
				break;
			case -2035110427:
				if (func_24() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_642(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_882(&iVar10);
		if (!func_883(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_529(0))
		{
			return 1;
		}
		if (func_736(iParam0) == -1037537535)
		{
			func_884(iParam0);
		}
		if (func_838(iParam0, -1979000645))
		{
			func_885(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_529(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_635(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_886(iVar2, 0);
		}
	}
	Var35 = { func_887(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_888(iParam0);
	if (sParam6 > 0f)
	{
		if (func_838(iParam0, -839724752))
		{
			func_889(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_890(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_636(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_838(iParam0, 1989861793))
	{
		iVar0 = func_891(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_892(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_893(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_894(iVar14, iVar1);
					if (iVar15 != iParam0 && func_745(iVar15, 0))
					{
						if (func_895(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_896(iVar1);
				if (bVar13)
				{
					func_897(iParam0);
				}
				else
				{
					func_642(306, 0);
				}
			}
		}
	}
}

void func_637()
{
	if (func_24() != -1)
	{
		return;
	}
	func_898();
	func_899();
	func_900();
	func_901();
	func_902();
	func_903();
	func_904();
}

void func_638(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_905(iParam0, 1, 1, -142743235, 1);
	if (func_906(iParam0))
	{
		func_907(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_909(func_908(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_910(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_911() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_912(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_912(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_913(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_913(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_913(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_913(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_913(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_913(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_913(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_913(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_913(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_914(iVar8, iVar0))
				{
					func_915(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_914(iVar8, iVar0))
		{
			func_915(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_639()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_914(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_911() == -2125499975 || func_911() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_915(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_915(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_640()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_641(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_92(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_92(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_264(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_788(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_642(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_345(iParam0, &iVar0, &iVar1);
	if (!func_916(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_917(iVar0, iVar1);
}

void func_643(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_909(iParam0, 1);
	func_918(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_918(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_919(17, iParam0, 0, 0, 0);
		}
	}
	if (func_24() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_918((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_918((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_644()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_645()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_646(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_523(iParam1, 1, 0) };
		iParam3 = func_920(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_921(iParam3);
	return func_728(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

void func_647(int iParam0)
{
	int iVar0;

	if (!func_390(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_648(int iParam0, int iParam1)
{
	if (!func_922(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_923(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_924(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_649(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_922(iParam0))
	{
		return;
	}
	if (!func_248(iParam1))
	{
		return;
	}
	if (func_41(iParam1, 1))
	{
		return;
	}
	iVar0 = func_923(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_648(iParam0, -1))
	{
		return;
	}
	else
	{
		func_925(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_479(0, 17);
		}
	}
}

void func_650()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_651()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

void func_652()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_653()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_654()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_655()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_656()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_657()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_658(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_659(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_660(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_745(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_926(iParam0, 1))
		{
			return false;
		}
	}
	return func_823(iParam0, 0, bParam2) >= iParam1;
}

void func_661(int iParam0)
{
	if (func_214(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_927(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_927(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_662()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_663()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_664()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_665()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_666()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_819(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_667()
{
	if (func_928() > 1)
	{
		func_929();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_642(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_642(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_642(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_642(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_642(452, 1);
		}
	}
}

bool func_668(int iParam0)
{
	return func_374(iParam0, 4, 1);
}

void func_669(int iParam0)
{
	func_930(iParam0, 4, 1);
}

void func_670(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_481(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_671(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_214(32768))
	{
		return;
	}
	if (!func_37(iParam0))
	{
		return;
	}
	func_216(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_27(iParam0))
	{
		case 1:
			func_218(func_217(909007663, -587839005), 1);
			iVar0 = func_98(iParam0);
			func_218(func_481(-634848880), 1);
			switch (func_813(iVar0))
			{
				case 0:
					func_218(func_217(909007663, 1325140787), 1);
					break;
				case 1:
					func_218(func_217(909007663, 2101241783), 1);
					break;
				case 2:
					func_218(func_217(909007663, -1296936294), 1);
					break;
				case 3:
					func_218(func_217(909007663, -798388728), 1);
					break;
				case 4:
					func_218(func_217(909007663, -1787586531), 1);
					break;
				case 5:
					func_218(func_217(909007663, -1002834519), 1);
					break;
				case 6:
					func_218(func_217(909007663, -50600144), 1);
					break;
				case 7:
					func_218(func_217(909007663, -348503123), 1);
					break;
				case 8:
					func_218(func_217(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_218(func_217(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_218(func_217(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_98(iParam0);
			if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_218(func_481(-634848880), 1);
			}
			if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_218(func_217(909007663, -587839005), 1);
				}
				else
				{
					func_218(func_217(909007663, -2049243343), 1);
				}
			}
			if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_814(iVar1))
				{
					case 0:
						func_218(func_217(909007663, 1325140787), 1);
						break;
					case 1:
						func_218(func_217(909007663, 2101241783), 1);
						break;
					case 2:
						func_218(func_217(909007663, -1296936294), 1);
						break;
					case 3:
						func_218(func_217(909007663, -798388728), 1);
						break;
					case 4:
						func_218(func_217(909007663, -1787586531), 1);
						break;
					case 5:
						func_218(func_217(909007663, -1002834519), 1);
						break;
					case 6:
						func_218(func_217(909007663, -50600144), 1);
						break;
					case 7:
						func_218(func_217(909007663, -348503123), 1);
						break;
					case 8:
						func_218(func_217(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_218(func_217(909007663, 532323983), 1);
				}
			}
			else if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_100(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_218(func_217(909007663, 551192206), 1);
				}
				else
				{
					func_218(func_217(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_672()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_24() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_931(64))
	{
		return;
	}
	else if (func_70(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_25(0, 0, 1) || func_932()) || func_633())
	{
		return;
	}
	iVar0 = func_632();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_933(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_348(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_348(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_934(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_479(0, -1);
	}
	if (iVar2 > 0)
	{
		func_935("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_936(1, 0);
	Global_1956575->f_2 = 1;
}

void func_673(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_214(32768))
	{
		return;
	}
	func_937(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_938(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_674(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_939(iParam0);
}

int func_675(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_940(iParam0))
	{
		return 0;
	}
	if (!func_361())
	{
		return 0;
	}
	if (!func_941(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_676(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_942())
	{
		iVar2 = func_942();
	}
	iVar5 = func_943(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_101(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_101(iVar6) == 0)
			{
				return func_944(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_101(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_101(iVar6) == 0)
			{
				return func_944(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_944(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_945(1330954593, 0, -1);
		case 1:
			return func_945(1330954593, 0, -1);
		case 2:
			return func_945(1330954593, 0, -1) * 2;
		case 4:
			return func_945(1330954593, 0, -1);
		case 5:
			return func_945(1330954593, 0, -1);
		case 6:
			return func_945(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_945(1330954593, 0, -1) * 3;
		case 9:
			return func_945(1330954593, 0, -1) * 3;
		case 10:
			return func_945(1330954593, 0, -1) * 3;
		case 11:
			return func_945(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_678(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

void func_679(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_24() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

var func_680(int iParam0)
{
	char[] cVar0[8];

	if (!func_37(iParam0))
	{
		return cVar0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_796(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_98(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_676(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_681(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_946();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_27(Global_1879514->f_1) == 1)
			{
				func_675(5, 1);
			}
			else if (func_27(Global_1879514->f_1) == 8 && (func_100(((*Global_1347702)[func_98(Global_1879514->f_1) /*49*/])->f_12, 1) || func_100(((*Global_1347702)[func_98(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_675(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_682(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 16:
			return 1;
		case 36:
			return 2;
		case 79:
			return 3;
		case 125:
			return 4;
		case 127:
			return 5;
		case 118:
			return 6;
		case 129:
			return 7;
		case 114:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_684(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_685(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_686(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_472((Global_1393237->f_11[iParam0 /*30*/])->f_3))
	{
		func_947((Global_1393237->f_11[iParam0 /*30*/])->f_3, 0);
		PED::_0x9851DE7AEC10B4E1((Global_1393237->f_11[iParam0 /*30*/])->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0 /*30*/] = -15;
	(Global_1393237->f_11[iParam0 /*30*/])->f_2 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_3 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_6 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_9 = 0f;
	if (func_948(iParam0, 8388608))
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 8388608;
	}
	else
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 0;
		if (Global_1393237->f_11[iParam0 /*30*/])->f_17 != func_949()
		{
		}
		(Global_1393237->f_11[iParam0 /*30*/])->f_17 = func_949();
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_11 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_12 = 0;
	(Global_1393237->f_11[iParam0 /*30*/])->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_14[iVar0] = 0;
		iVar0++;
	}
	func_950(iParam0, 1);
	(Global_1393237->f_11[iParam0 /*30*/])->f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[0])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[0]);
		}
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[1])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[1]);
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2((Global_1393237->f_11[iParam0 /*30*/])->f_21))
	{
		func_947((Global_1393237->f_11[iParam0 /*30*/])->f_3, 1);
	}
}

void func_687(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_688()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_951(iVar0, 128))
		{
			func_952(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_689()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_951(iVar0, 128) && func_951(iVar0, 1))
		{
			func_952(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_690(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_691()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_223(iVar0, 16777216))
		{
			if (!func_953(iVar0))
			{
				func_954(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_692(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_955(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_956(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_957(iVar0) < func_958(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_959(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_693(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_960(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_960(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_960(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_960(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_960(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_960(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_960(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_694(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_285();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_695(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_696(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

void func_697(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_698(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_699(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

bool func_700(int iParam0)
{
	return func_194(iParam0) == 0;
}

int func_701(int iParam0)
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
		iVar0 = func_341(iParam0);
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

void func_702(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_961(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_703(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_684(iParam0, func_387(iParam0) + 1);
}

int func_704(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_786(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_962(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_963(iVar0, iParam1);
	return iParam1;
}

void func_705(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_706(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_707(bool bParam0)
{
	func_964(bParam0);
	func_965(bParam0);
	func_966(bParam0);
	func_967(bParam0);
	func_968(bParam0);
	func_969(bParam0);
	func_970(bParam0);
	func_971(bParam0);
}

void func_708(bool bParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_642(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_642(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_972(1, bParam0, 1);
	func_868();
	Global_40.f_11095.f_43 = bParam0;
}

void func_709(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_973(Global_1898077->f_7, Global_1898077->f_3);
}

void func_710(int iParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_974(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_711(int iParam0)
{
	int iVar0;

	iVar0 = func_683(iParam0);
	return func_975(iVar0, 16);
}

void func_712(int iParam0, int iParam1)
{
	func_263(&((Global_40.f_11864[iParam0 /*2*/])->f_1), iParam1);
}

void func_713(int iParam0, var uParam1, var uParam2, var uParam3)
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
			Jump @2719; //curOff = 1359
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1404
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1449
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			Jump @2719; //curOff = 1498
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			Jump @2719; //curOff = 1547
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1592
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			Jump @2719; //curOff = 1641
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			Jump @2719; //curOff = 1690
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1735
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1780
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			Jump @2719; //curOff = 1829
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			Jump @2719; //curOff = 1878
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			Jump @2719; //curOff = 1927
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1972
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			Jump @2719; //curOff = 2021
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2066
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			Jump @2719; //curOff = 2115
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2160
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			Jump @2719; //curOff = 2209
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2254
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2299
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2344
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2389
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2434
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			Jump @2719; //curOff = 2483
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			Jump @2719; //curOff = 2532
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2719; //curOff = 2581
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2626
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2671
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}

bool func_714(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_715(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0);
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

void func_716(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_46(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_717(int iParam0)
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

void func_718(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

void func_719(int iParam0)
{
	int iVar0;

	if (!func_375(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_976(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::CREATE_PERSISTENT_CHARACTER(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_720(int iParam0)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		return;
	}
	if (iParam0 != func_26(0))
	{
		return;
	}
	if (func_678(iParam0) == 0)
	{
	}
	iVar0 = func_27(iParam0);
	if (func_341(iParam0) == 3)
	{
		if (func_678(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_678(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
			{
				func_679(func_27(iParam0), func_678(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_608(iParam0);
	func_609(1);
	func_612(0);
	func_607(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_622(1);
			func_623(15, 0, 1);
			break;
		case 4:
			func_623(10, 0, 1);
			break;
		case 8:
			func_623(10, 0, 1);
			break;
		case 9:
			func_623(10, 0, 1);
			break;
		case 2:
			func_623(10, 0, 1);
			break;
		case 6:
			func_623(10, 0, 1);
			break;
		case 5:
			func_623(10, 0, 1);
			break;
	}
	func_682(1);
}

void func_721(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_264(iParam0) && !func_701(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_678(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_264(iParam0))
	{
		iParam2 = -1;
	}
	if (func_341(iParam0) == 3 || (func_341(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_678(iParam0))))
	{
		func_679(func_27(iParam0), func_678(iParam0), iParam2);
		if ((!func_37(Global_1572864->f_8) && !func_25(0, 1, 0)) && !func_70(&Global_1935630, 32768))
		{
			iVar0 = func_630(iParam0);
			if (iVar0 != -1)
			{
				func_631(0);
			}
			else if (func_27(iParam0) == 8)
			{
				iVar0 = func_632();
				if (iVar0 != -1)
				{
					func_631(0);
				}
			}
		}
	}
	func_607(iParam0, 0);
	if (func_26(0) == iParam0)
	{
		func_609(1);
		func_612(0);
		func_682(1);
	}
	func_629(iParam0, 1);
	func_608(iParam0);
}

int func_722(int iParam0)
{
	return iParam0;
}

void func_723(int iParam0)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_724(int iParam0)
{
	func_978();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_725()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

bool func_726(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_727(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_979(bParam0);
}

int func_728(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_523(iParam1, 1, 0) };
		iParam3 = func_920(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_980(iParam1, iParam2, func_909(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_981(1, (func_24() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_909(iParam3, 1) /*11*/])
			{
				func_919(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_982(32768) && iParam1 != &Global_1946804->f_57[func_909(iParam3, 1) /*11*/])
			{
				func_983();
				func_919(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_919(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_984(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_919(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_985(0);
			func_986(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_919(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_729(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_523(iParam0, 0, 0) };
	Var5 = { func_527(iParam0, Var0, Var0.f_4, 0) };
	if (func_743(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_746(0), &Var5, bParam1);
}

void func_730(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_24() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_987(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_988(iParam1, 29, bVar4, 1, 0);
			func_988(iParam1, 31, bVar4, 1, 0);
			func_988(iParam1, 30, bVar4, 1, 0);
			func_988(iParam1, 22, bVar4, 1, 0);
			func_988(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_982(32768) && func_989(1108822547, 8)) && func_990(10, iParam3))
	{
		func_991(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_992(iVar1, 1);
			if (func_989(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_990(iVar1, iParam3))
				{
				}
				else if ((func_989(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_989(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_988(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_993(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_988(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_989(iVar3, 1))
							{
								func_994(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_731(int iParam0, int iParam1)
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

int func_732(int iParam0, int iParam1)
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

bool func_733(int iParam0, int iParam1)
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
	if (!func_731(iParam0, iVar0))
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

void func_734(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_735(bool bParam0)
{
	return func_527(1328661203, func_995(), -1591664384, bParam0);
}

int func_736(int iParam0)
{
	vector3 vVar0;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_737(bool bParam0)
{
	int iVar0;

	iVar0 = func_746(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224214))
		{
			*Global_1224214 = { func_527(923904168, func_735(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224222))
		{
			*Global_1224222 = { func_527(923904168, func_735(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_527(923904168, func_735(bParam0), -740156546, 0);
}

int func_738(int iParam0, bool bParam1)
{
	if (func_740(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_996(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_739(bool bParam0)
{
	int iVar0;

	iVar0 = func_746(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224218))
		{
			*Global_1224218 = { func_527(271701509, func_735(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_527(271701509, func_735(bParam0), 12999093, 0);
}

int func_740(int iParam0)
{
	struct<2> Var0;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_741(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_740(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_742(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_746(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_743(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_527(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_746(bParam6), &Var0, 0);
	return uVar4;
}

int func_744(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_746(0);
	*uParam1 = { func_527(iParam0, func_737(0), iParam3, 0) };
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

int func_745(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_746(bool bParam0)
{
	if (func_24() == -1)
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

int func_747(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_748(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_749(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_750(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_751(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_752(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_753(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_752(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_997(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_319(&(iParam1->f_13));
		}
		if (func_998(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_999(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_753(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_1000(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_1001(*uParam0, 1, 1);
						}
					}
					else if (func_1002(iParam1, 22))
					{
						func_1001(*uParam0, 0, 1);
					}
				}
				if (func_1003(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1004(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1005(iParam8);
					if (func_1006(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_1007(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_1008(iParam1, uParam3, fVar8);
					if (func_1009(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_450(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1010(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1003(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1011(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1006(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1004(uParam0, func_1003(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1005(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_450(uParam3, 0, 0, 1, 1);
					}
					func_1012(iParam1, 1);
				}
				func_1008(iParam1, uParam3, fVar8);
				if (func_1010(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_313(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_754(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_1013(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_418(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_755(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_756(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1014(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_757(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_758(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_759(int iParam0, bool bParam1)
{
	if (bParam1 && !func_537(iParam0))
	{
		return false;
	}
	return !func_1014(iParam0, 4);
}

bool func_760(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_761(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

float func_762(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_289(Global_35, iParam0, bParam1, iParam2);
}

int func_763(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_764(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = uParam7;
	return func_1015(iParam0, &Var0);
}

int func_765()
{
	if (func_1016())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_766(var uParam0, var uParam1)
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

int func_767(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
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

int func_768(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
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
			if (!Global_1935630->f_12)
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

void func_769(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_262(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Global_1935630->f_34[iVar0])))
				{
					func_263(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_770(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_771(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_344(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_772(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_773(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_253(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_1017(uParam0);
	}
	return func_253(uParam0);
}

float func_774(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_775()
{
	int iVar0;
	int iVar1;

	iVar0 = func_108(func_113());
	iVar1 = func_109(func_113());
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

int func_776(int iParam0)
{
	int iVar0;

	iVar0 = func_909(func_1018(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_777(var uParam0)
{
	if (func_778(81053684, uParam0))
	{
		return 1;
	}
	if (func_778(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_778(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_909(func_1018(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_740(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_779()
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_1019(661720433);
}

bool func_780()
{
	return Global_1347398->f_1 == 0;
}

void func_781(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_782()
{
	return Global_1347398->f_1 == 1000;
}

bool func_783()
{
	return Global_1347398->f_1 == 2000;
}

bool func_784()
{
	return Global_1347398->f_1 == 3000;
}

void func_785(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1020(iParam0);
	}
	else
	{
		func_1021(iParam0, iParam1);
	}
	func_1022();
}

int func_786(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_787(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_963(iParam0, Global_1898164->f_162);
	return 1;
}

int func_788(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1023(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_789(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_801(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_790()
{
	return Global_40.f_11095.f_35;
}

void func_791(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1024(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_792(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_792(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1024(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1025(1);
	}
}

bool func_793(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_794()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_38(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_114(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_795(int iParam0)
{
	if (!func_961(iParam0))
	{
		return 0;
	}
	return func_92(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_796(int iParam0)
{
	if (func_27(iParam0) == 1)
	{
		return func_98(iParam0);
	}
	return -1;
}

int func_797(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1026(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1027(iVar6);
	}
	return iVar5;
}

int func_798(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1028(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_799(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1029(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_801(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_799(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_802(2, *uParam0);
		}
		else
		{
			func_803(2, *uParam0);
		}
	}
	func_1030(uParam0);
}

void func_802(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_803(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_804(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1031(iParam0, iParam1, bParam2);
}

int func_805(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_807(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_1032();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1033(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_358(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_31())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_621(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1032();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1034(iVar1);
		func_1036(func_1035(), 0, 4000);
		func_1037(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1038(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_218(func_481(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_806(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1039(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_927(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_927(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_218(func_481(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_806(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1039(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_927(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_927(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_481(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_675(10, 1);
	}
}

void func_808(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_809(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_810(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (func_98(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_98(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_811(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_746(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_740(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1041(func_1040(iParam0), 6);
}

void func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_746(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_740(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1042(func_1040(iParam0), 6);
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_815(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_816()
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

int func_817(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_818(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_819(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_820(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_24() == -1)
	{
		if (func_1043(iParam0) && func_1044(iParam0))
		{
			func_1045(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_821(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*uParam1 = iParam2;
	func_1046(iParam0, uParam1);
	Var0 = { func_523(iParam0, 0, 1) };
	iVar5 = func_1047(iParam0, &Var0, 0, 0);
	iVar6 = func_996(iParam0, 0);
	if ((iVar5 > 1 && !func_633()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_838(iParam0, -2051813666))
		{
			func_642(583, 1);
		}
		else
		{
			func_642(582, 0);
		}
	}
	if (func_1048(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_822(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_891(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_823(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1049(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1050(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(bParam2), iParam0, 0);
	return iVar2;
}

bool func_824(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_825(iParam0) != 0;
}

int func_825(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1051())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1052(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_826(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1051())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_826(iVar0))
		{
			if (func_660(func_1052(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_828(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1053(48);
	func_479(0, -1);
}

int func_829(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_92(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_830(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_831(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_832(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_92(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_833(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_99(iParam0))
	{
		return 0;
	}
	return func_264(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_834()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_660(func_1054(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_835(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_361() && (func_833(38) || func_829(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_361() && (func_833(39) || func_829(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1055(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_361() && (func_833(41) || func_829(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_361() && (func_833(49) || func_829(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1055(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_1056(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1057(iParam0, iVar13, iVar14))
	{
	}
	if (func_1058(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1059(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1060(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1061(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1062(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_836(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_837(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_361() && (func_833(38) || func_829(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_361() && (func_833(39) || func_829(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_361() && (func_833(49) || func_829(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_361() && (func_833(38) || func_829(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_348(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1064(func_831(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_361() && (func_833(39) || func_829(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_361() && (func_833(49) || func_829(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1063(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_838(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_839(int iParam0, int iParam1)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_840(int iParam0)
{
	if (!func_494(iParam0))
	{
		return;
	}
	func_1065(iParam0);
	func_1066(iParam0);
}

int func_841(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057:
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324:
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678:
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936:
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802:
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321:
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038:
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975:
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737:
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161:
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925:
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_745(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1067(iVar0) || func_391(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_842(int iParam0, bool bParam1)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_843(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_390(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_844(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	bVar0 = func_842(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_24() == -1)
		{
			func_843(bVar0);
			if (iParam1 == 1248274121)
			{
				func_1068(bVar0);
			}
		}
		if (!func_1048(iParam0, &uVar1, 1, 0, 0))
		{
			func_1045(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1069(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_392(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_392(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_392(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_31())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_394(bVar0))
				{
					func_392(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_392(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				iVar7 = func_1070(Global_35, 2, 0, 1);
				if ((((func_390(iVar7) && !Global_43890) && iVar7 != bVar0) && !func_660(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_390(iVar7) && func_660(-1185145312, 1, 0))
				{
					if (!func_392(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_392(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_392(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_642(480, 1);
	}
	return 1;
}

int func_845(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_748(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_390(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_660(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_878(func_1071(iParam0), func_877(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_24() == -1)
		{
			if (func_92(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_642(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_529(0))
	{
		if (func_530(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_883(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_846(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_32()) || iParam0 != -615217896)
	{
		if (func_1072(Global_35, iParam0, &uVar0))
		{
			func_728(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_868();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_868();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_868();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_866();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_864();
			break;
	}
}

void func_847(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_864();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_865();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_866();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_867();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_868();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1073();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1074();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_848(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_849(int iParam0)
{
	bool bVar0;

	bVar0 = func_838(iParam0, -2017733358);
	if (func_1075() < 3)
	{
		if (bVar0)
		{
			if (func_1077(func_1076(iParam0), iParam0))
			{
				func_878(79, func_877(func_1076(iParam0)), 1);
			}
			else
			{
				func_878(78, func_877(func_1076(iParam0)), 1);
			}
		}
		else
		{
			func_878(80, func_877(func_1078(iParam0)), 1);
		}
	}
}

int func_850()
{
	if (((((func_1079(839908568, 400) || func_1079(-1134030454, 400)) || func_1079(623353496, 400)) || func_1079(-344413337, 400)) || func_1079(-1664948962, 400)) || func_1079(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_851(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_945(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1080(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1081(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_852(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_835(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_837(51, 0, 0, 0, 0, -1, 0);
			func_1082(8192);
			break;
		case 581047644:
			func_835(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_837(51, 0, 0, 0, 0, -1, 0);
			func_1082(524288);
			break;
		case -644199619:
			func_835(39, 0, 0, 0, 0, 0, 1, 0);
			func_837(39, 0, 0, 0, 0, -1, 0);
			func_1083(16);
			break;
		case 684296857:
			func_835(41, 0, 0, 0, 0, 0, 1, 0);
			func_837(41, 0, 0, 0, 0, -1, 0);
			func_1084(8);
			break;
		case 466137807:
			func_835(49, 0, 0, 0, 0, 0, 1, 0);
			func_837(49, 0, 0, 0, 0, -1, 0);
			func_1085(16);
			break;
		case -1087522507:
			func_835(43, 0, 0, -1791518714, func_1086(1), 0, -1, 0);
			func_1087(1);
			break;
		case -405829000:
			func_835(43, 0, 0, -2087881550, func_1086(2), 0, -1, 0);
			func_1087(2);
			break;
		case 378660860:
			func_835(43, 0, 0, 1908068621, func_1086(4), 0, -1, 0);
			func_1087(4);
			break;
		case 1566111097:
			func_835(43, 0, 0, 1611247019, func_1086(8), 0, -1, 0);
			func_1087(8);
			break;
		case 1276007140:
			func_835(43, 0, 0, 1319635688, func_1086(16), 0, -1, 0);
			func_1087(16);
			break;
	}
}

void func_853(int iParam0)
{
	if (func_1088() == 1)
	{
		if (func_829(39))
		{
			func_642(342, 0);
		}
		else
		{
			func_642(343, 0);
			func_1083(1);
		}
	}
	if (func_1088() >= 30)
	{
		func_642(344, 0);
	}
	func_835(39, 0, 0, 0, 0, 0, -1, 0);
	func_837(39, 0, 0, func_1088(), 30, 1, 0);
}

void func_854(int iParam0)
{
	if (func_1089() == 1)
	{
		if (func_829(49))
		{
			func_642(409, 0);
		}
		else
		{
			func_642(410, 0);
			func_1085(1);
		}
	}
	if (func_1089() >= 10)
	{
		func_642(411, 0);
	}
	func_835(49, 0, 0, 0, 0, 0, -1, 0);
	func_837(49, 0, 0, func_1089(), 10, 1, 0);
}

void func_855(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_642(437, 0);
			func_642(440, 0);
			func_1090(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_835(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_837(51, 0, 0, iVar0, func_1055(-949689219, 20), 1, 0);
			func_1082(1);
			func_94(-748969569, 0, 0);
			break;
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1090(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_835(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_837(51, 0, 0, iVar0, func_1055(-1248968496, 20), 1, 0);
			func_1082(8);
			break;
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1090(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_835(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_837(51, 0, 0, iVar0, func_1055(1706369307, 20), 1, 0);
			func_1082(64);
			break;
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1090(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_835(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_837(51, 0, 0, iVar0, func_1055(1520110311, 20), 1, 0);
			func_1082(512);
			break;
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_642(438, 0);
			func_1090(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_835(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_837(51, 0, 0, iVar0, func_1055(-1992824800, 20), 1, 0);
			func_1082(32768);
			break;
		default:
			func_642(439, 0);
			break;
	}
}

void func_856()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_857(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_24() == -1)
	{
		if (!func_829(43))
		{
			if (iParam0 == 281887510)
			{
				func_642(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_642(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_642(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_642(400, 0);
			}
		}
		else if (func_838(iParam0, 412399755))
		{
			func_1091(-1791518714);
			if (func_1092() == 0)
			{
				func_479(0, 10);
				iVar1 = func_1093(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1094(iParam0) < func_1095(iParam0))
					{
						func_835(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_837(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_829(44))
		{
			if (iParam0 == -222563712)
			{
				func_642(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_642(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_642(401, 0);
			}
		}
		else if (func_838(iParam0, 709057512))
		{
			func_1091(-2087881550);
			if (func_1092() == 1)
			{
				func_479(0, 10);
				iVar1 = func_1093(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1094(iParam0) < func_1095(iParam0))
					{
						func_835(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_837(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_829(45))
		{
			if (iParam0 == 2116770557)
			{
				func_642(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_642(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_642(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_642(398, 0);
			}
		}
		else if (func_838(iParam0, -1478961327))
		{
			func_1091(1908068621);
			if (func_1092() == 2)
			{
				func_479(0, 10);
				iVar1 = func_1093(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1096(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1097(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1053(48);
					}
					if (func_1094(iParam0) < func_1095(iParam0))
					{
						func_835(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_837(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1094(iParam0) < func_1095(iParam0))
					{
						func_835(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_837(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_829(46))
		{
			if (iParam0 == 2085530337)
			{
				func_642(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_642(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_642(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_642(406, 0);
			}
		}
		else if (func_838(iParam0, -1238404098))
		{
			func_1091(1611247019);
			if (func_1092() == 3)
			{
				func_479(0, 10);
				iVar1 = func_1093(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1094(iParam0) < func_1095(iParam0))
					{
						func_835(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_837(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_829(47))
		{
			if (iParam0 == -1521783510)
			{
				func_642(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_642(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_642(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_642(403, 0);
			}
		}
		else if (func_838(iParam0, 1160548794))
		{
			func_1091(1319635688);
			if (func_1092() == 4)
			{
				func_479(0, 10);
				iVar1 = func_1093(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1094(iParam0) < func_1095(iParam0))
					{
						func_835(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_837(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_858(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_1096(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1097(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1053(48);
		}
	}
}

void func_859(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_660(func_1098(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1099(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1100(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_860(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_851(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_851(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_851(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_851(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_851(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_851(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_851(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_851(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_851(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_851(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_851(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_851(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_851(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1101())
			{
				func_851(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_851(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_851(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_851(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_851(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_851(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_851(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_851(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_851(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_851(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_851(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_851(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_851(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_861(int iParam0)
{
	if (func_829(41))
	{
		func_642(363, 0);
	}
	else
	{
		func_642(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1102(-1865241121);
			func_1103(-642026005);
			func_1104(-642026005);
			func_479(0, 10);
			break;
		case -2108314374:
			func_1102(2117142684);
			func_1103(-940584364);
			func_1104(-940584364);
			func_479(0, 10);
			break;
		case -1193798153:
			func_1102(-1409326024);
			func_1103(1972645282);
			func_1104(1972645282);
			func_479(0, 10);
			break;
		case -787702678:
			func_1102(-641744968);
			func_1103(1667205433);
			func_1104(1667205433);
			func_479(0, 10);
			break;
		case -804542901:
			func_1102(-946988203);
			func_1103(1362715885);
			func_1104(1362715885);
			func_479(0, 10);
			break;
		case -1696275132:
			func_1102(-646136018);
			func_1103(1053540370);
			func_1104(1053540370);
			func_479(0, 10);
			break;
		case -161595323:
			func_1102(-955835837);
			func_1103(-1100103852);
			func_1104(-1100103852);
			func_479(0, 10);
			break;
		case -1114363619:
			func_1102(-179276075);
			func_1103(-1409869209);
			func_1104(-1409869209);
			func_479(0, 10);
			break;
		case -368407134:
			func_1102(-492711560);
			func_1103(-1760235357);
			func_1104(-1760235357);
			func_479(0, 10);
			break;
		case 1997759228:
			func_1102(1764383959);
			func_1103(-138366827);
			func_1104(-138366827);
			func_479(0, 10);
			break;
		case 1265573293:
			func_1102(317501533);
			func_1103(-1261163843);
			func_1104(-1261163843);
			func_479(0, 10);
			break;
		case -1030441283:
			func_1102(817753087);
			func_1103(-963523016);
			func_1104(-963523016);
			func_479(0, 10);
			break;
		case -1490884871:
			func_1102(576606016);
			func_1103(560825326);
			func_1104(560825326);
			func_479(0, 10);
			break;
		case -395458616:
			func_1102(814934957);
			func_1103(858269539);
			func_1104(858269539);
			break;
	}
}

void func_862(int iParam0, int iParam1)
{
	var uVar0;

	func_1105(iParam0, iParam1, &uVar0);
}

int func_863(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_1070(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_1070(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1106("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1107(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1108(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_864()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_865()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_866()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_867()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_868()
{
	func_1109();
	func_1110();
	func_1111();
}

void func_869(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_870(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_1063(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_871(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_872(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_873(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_874(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_875(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_876(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_877(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_878(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_345(iParam0, &iVar0, &iVar1);
	if (!func_916(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1112(iParam0, 1024))
	{
		return;
	}
	func_917(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_879(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_345(iParam0, &iVar0, &iVar1);
	if (!func_916(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1112(iParam0, 1024))
	{
		return;
	}
	func_917(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_880()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1051())
	{
		return func_881();
	}
	iVar4 = (func_1051() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1051())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1113(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1052(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_881()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1051());
	return func_1052(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_882(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398:
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310:
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777:
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_883(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_523(iParam0, 0, 1) };
	Var5 = { func_527(iParam0, Var0, Var0.f_4, 0) };
	return func_1114(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_884(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_24() != -1)
	{
		return;
	}
	switch (func_740(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1115(81053684, 0) <= 0)
			{
				func_919(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_919(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1116(iParam0);
			if (func_1117(iVar0))
			{
				func_1118(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_919(30, iParam0, 0, 0, 0);
			}
			if (func_911() == -2125499975 || func_911() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_919(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_911() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_919(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1119(-525676072, 0))
			{
				if (func_1120(-525676072, &iVar1))
				{
					func_919(33, iVar1, 0, 0, 0);
				}
			}
			func_919(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1121(99217379))
		{
			func_728(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_840(24);
		if (func_863(&bVar2, 0))
		{
			func_392(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_885(int iParam0)
{
	if (func_838(iParam0, 943695443))
	{
		func_1122(0, iParam0);
	}
	else if (func_838(iParam0, -2096528786))
	{
		func_1122(1, iParam0);
	}
	else if (func_838(iParam0, -1094167013))
	{
		func_1122(2, iParam0);
	}
	else if (func_838(iParam0, 1936654645))
	{
		func_1122(3, iParam0);
	}
	else if (func_838(iParam0, 1306489306))
	{
		func_1122(4, iParam0);
	}
	else if (func_838(iParam0, 435762317))
	{
		func_1122(5, iParam0);
	}
	else if (func_838(iParam0, 1259363210))
	{
		func_1122(6, iParam0);
	}
	else if (func_838(iParam0, 881398259))
	{
		func_1122(7, iParam0);
	}
	else if (func_838(iParam0, -541549214))
	{
		func_1122(8, iParam0);
	}
	else if (func_838(iParam0, 130796156))
	{
		func_1122(-1, iParam0);
	}
}

int func_886(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1123(&Var4, 1356624740);
	return func_1124(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_887(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_745(iParam0, 0))
	{
		return Var0;
	}
	if (func_838(iParam0, -305066475))
	{
		if (func_24() == -1)
		{
			if (func_838(iParam0, -537818634))
			{
				return func_481(189951448);
			}
			else
			{
				return func_481(1176172851);
			}
		}
	}
	else if (func_838(iParam0, -537818634))
	{
		return func_481(-963660207);
	}
	if (func_838(iParam0, 2084895747))
	{
		return func_481(1694039471);
	}
	return Var2;
}

void func_888(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_24() == -1)
			{
				if (func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_642(109, 1);
				}
			}
			break;
	}
}

void func_889(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1126(func_1125(0));
	func_927(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1127(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_890(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_745(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1128())
	{
		func_1129(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1130(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1130(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_839(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_736(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1131(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_360(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_877(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_838(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_877(iParam0));
	}
	func_927(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_891(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_892(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_893(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_894(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_895(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1132(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1132(iParam0, Var2, 1))
				{
					if (func_1133(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1133(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_642(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_25(0, 0, 1))
		{
			func_479(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_896(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_897(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_642(iVar0, 0);
	}
}

void func_898()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(2116153146, 0);
			func_1134(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1135();
		}
		return;
	}
	if (!func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1136();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1134(1);
}

void func_899()
{
	if (!func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_635(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_900()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1137(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1137(1);
}

void func_901()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1138(15000, 0, 0, 0, 1);
			func_1137(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_937(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1137(1);
}

void func_902()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_660(1191437462, 1, 0) && !func_264(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_635(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1139(1))
			{
				func_874(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_660(1119149048, 1, 0) && !func_264(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_635(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1139(2))
			{
				func_874(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_1139(4))
		{
			func_874(4);
		}
		if (func_1139(0))
		{
			func_1140(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_660(1191437462, 1, 0))
			{
				func_905(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_660(1119149048, 1, 0))
			{
				func_905(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1139(1))
		{
			func_1140(1);
		}
		if (func_1139(2))
		{
			func_1140(2);
		}
		if (func_1139(4))
		{
			func_1140(4);
		}
		if (!func_1139(0))
		{
			func_874(0);
		}
	}
}

void func_903()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_92(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1141() };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_843(joaat("weapon_revolver_doubleaction"));
		if (func_392(joaat("weapon_revolver_doubleaction"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1141() };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_1142(-2055673461, Var1, 1423542233);
		func_1142(-202131179, Var1, -1264898804);
		func_1142(2013836545, Var1, 1592019450);
		func_1142(1497476650, Var1, 1117400455);
		func_1142(1063571467, Var1, 1150213537);
		func_1142(2107224237, Var1, 1598825281);
		func_1142(1747981656, Var1, -712527121);
		func_1142(-1371140647, Var1, 454332195);
		func_1142(-19142973, Var1, 256105670);
		func_1142(-2074737817, Var1, -1328061889);
		func_1142(-1114256243, Var1, -782241404);
		func_1142(-1653277288, Var1, 1669853467);
		func_1142(1869398132, Var1, -1559225678);
		func_1142(459868358, Var1, -266425508);
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_601())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_390(iVar16))
			{
				if (iVar16 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_358(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_358(24) && func_390(iVar15)) && iVar15 != joaat("weapon_revolver_doubleaction"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_390(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (iVar15 != joaat("weapon_revolver_doubleaction"))
			{
				if (func_358(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_904()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_905(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1049(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_890(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_660(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_887(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_823(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_823(iParam0, 0, 0) - iParam1) < 0)
		{
			func_905(iParam0, func_823(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_736(iParam0) == -427144552)
	{
		if (!func_1143(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1144(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_529(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_890(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1145(iParam0, iParam1);
	return 1;
}

int func_906(int iParam0)
{
	switch (func_740(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_907(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_740(iParam0))
	{
		case -2061583405:
			bVar0 = func_1146(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1146(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1146(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1146(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1146(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1146(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1147();
	}
	if (bParam1)
	{
		func_1148(0, 0);
	}
}

int func_908(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_523(iParam0, 1, 0) };
	return func_920(Var0.f_4);
}

int func_909(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_910(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_24() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_909(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1149(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_911()
{
	return Global_1946804->f_1;
}

int func_912(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_1150(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1152(uParam0, func_1151(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_909(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1153(iVar3) && func_1154(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1155(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_913(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_914(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_913(iParam0, iParam1) };
	return vVar0.x;
}

void func_915(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_916(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1156(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1157(iParam0))
	{
		return 0;
	}
	if (func_1158(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1112(iParam0, 1)) || func_214(32768))
	{
		if (!func_1112(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1159())
	{
		return 0;
	}
	return 1;
}

void func_917(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_918(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_919(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_987(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1160(Var0);
}

int func_920(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_992(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_921(int iParam0)
{
	func_1149(Global_1946804->f_1497.f_1[func_909(iParam0, 1) /*3*/], 2, 6);
	func_1149(Global_1946804->f_1378.f_1[func_909(iParam0, 1) /*3*/], 2, 6);
}

bool func_922(int iParam0)
{
	return iParam0 != 0;
}

int func_923(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_922(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_924(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_925(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_926(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1049(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1106("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1107(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_390(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_1108(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1108(iVar1);
	}
	return 0;
}

var func_927(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1161(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_928()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1162(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1163(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_929()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1162(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1163(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1163(iVar1), true);
		}
		iVar0++;
	}
}

void func_930(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_379(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_931(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_932()
{
	return (func_70(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_933(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_24() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_745(iVar0, 0))
	{
		return 0;
	}
	if (!func_1164(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1165(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_838(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_523(iVar0, 0, 1) };
	iVar10 = func_1166(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1167(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1168(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_635(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_1138(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_934(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_927(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_935(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_936(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_24() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_937(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1080(iParam0, sParam4, iParam5);
	}
	func_1081(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_938(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	sVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1169())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(sVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = sVar1;
	if (func_1169())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_678(iParam0), iVar3, sVar1, iParam3);
	iVar4 = func_98(iParam0);
	if (func_27(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1170(1, sVar1);
					func_1170(8, sVar1);
					func_1170(7, sVar1);
					break;
				case 12:
					func_1170(6, sVar1);
					break;
				case 53:
					func_1170(3, sVar1);
					func_1170(7, sVar1);
					func_1170(4, sVar1);
					break;
				case 20:
					func_1170(8, sVar1);
					break;
				case 19:
					func_1170(1, sVar1);
					func_1170(2, sVar1);
					break;
				case 24:
					func_1170(3, sVar1);
					func_1170(9, sVar1);
					func_1170(20, sVar1);
					break;
				case 28:
					func_1170(1, sVar1);
					break;
				case 34:
					func_1170(23, sVar1);
					func_1170(2, sVar1);
					func_1170(18, sVar1);
					break;
				case 29:
					func_1170(0, sVar1);
					func_1170(9, sVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1170(0, sVar1);
					func_1170(3, sVar1);
					func_1170(2, sVar1);
					func_1170(11, sVar1);
					func_1170(6, sVar1);
					func_1170(25, sVar1);
					func_1170(24, sVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1170(5, sVar1);
					break;
				case 63:
					func_1170(1, sVar1);
					func_1170(3, sVar1);
					break;
				case 37:
					func_1170(23, sVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_676(0, 10, 11, 2116153146))
			{
				func_1170(7, sVar1);
				func_1170(4, sVar1);
			}
			else if (iParam0 == func_676(0, 7, 11, -379687487))
			{
				func_1170(8, sVar1);
				func_1170(15, sVar1);
			}
			else if (iParam0 == func_676(0, 8, 11, -1386089015))
			{
				func_1170(3, sVar1);
			}
			else if (iParam0 == func_676(0, 11, 11, -1952009645))
			{
				func_1170(6, sVar1);
				func_1170(3, sVar1);
			}
			else if (iParam0 == func_676(0, 12, 11, 2065895756))
			{
				func_1170(9, sVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1171()));
	if (!func_342(629))
	{
		func_642(629, 0);
	}
}

int func_939(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_940(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_941(int iParam0, var uParam1, var uParam2)
{
	if (!func_940(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_942()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_943(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_944(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_1172(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_942())
	{
		return -1;
	}
	uVar0 = func_943(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_785(iVar1, 0);
	func_684(iVar1, 0);
	func_1173(iVar1, 0);
	func_1174(iVar1, 0);
	func_1175(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1176(iVar1, iParam4);
	}
	return iVar1;
}

int func_945(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (iParam1 && func_660(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_745(iVar25, 0) && func_838(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_946()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1177(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1178(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_947(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_472(vParam0))
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
			if (func_1179(vVar2, vParam0, 2f, 1))
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

int func_948(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return 0;
	}
	return func_276((Global_1393237->f_11[iParam0 /*30*/])->f_10, iParam1);
}

int func_949()
{
	return 0;
}

void func_950(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_24 = iParam1;
	}
}

bool func_951(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_952(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_954(int iParam0, int iParam1)
{
	if (!func_220(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_955(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_956(int iParam0)
{
	if (!func_220(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_957(int iParam0)
{
	if (func_220(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_958(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_959(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_960(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_960(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1180(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_24() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

bool func_961(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_962(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_101(iParam0);
		func_1181((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_963(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1182((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1182(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_607(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_964(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_1183(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_965(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1183(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_966(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1183(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_967(bool bParam0)
{
	func_1183(Global_1956612, bParam0);
}

void func_968(bool bParam0)
{
	func_1183(&(Global_1415412->f_3), bParam0);
}

void func_969(bool bParam0)
{
	if (func_1184(Global_1934051->f_33))
	{
		func_1185(Global_1934051->f_33, 7148155);
	}
	func_1183(&(Global_1934051->f_33), bParam0);
}

void func_970(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1187(func_1186(iVar0));
		if (iVar1 != 0)
		{
			func_1185(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_1183((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_971(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_697(iVar0, -1);
		func_698(iVar0, 0);
		func_699(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_972(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_973(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_974(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

bool func_975(int iParam0, int iParam1)
{
	return func_276((Global_40.f_11864[iParam0 /*2*/])->f_1, iParam1);
}

int func_976(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

bool func_977(int iParam0)
{
	return func_1014(iParam0, 2);
}

void func_978()
{
	Global_1911774 = 1;
}

void func_979(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_980(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1188();
	if (iParam2 == 39)
	{
		Var0 = { func_523(iParam0, 1, 0) };
		iParam2 = func_909(func_920(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_838(iParam0, 866047851) && func_1189(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_982(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1190(func_992(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1191(iParam2);
	func_1192(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1149(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1149(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1155(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1193(iParam0, iParam2, iParam1, func_24() != -1);
	if (bParam4)
	{
		func_1194(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1194(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_994(func_992(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_981(bool bParam0, bool bParam1, bool bParam2)
{
	func_1195(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_982(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_983()
{
	func_1196(&(Global_1946804->f_2776));
	func_1197(32768);
	func_994(1108822547, 8, 6);
}

int func_984(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_909(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_985(int iParam0)
{
	struct<4> Var0;

	if (func_1198(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1199(Var0);
}

void func_986(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1199(Var0);
}

void func_987(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_988(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_992(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1200(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_989(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_909(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_990(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_991(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_989(1108822547, 6))
	{
		if (bParam2)
		{
			func_988(iParam0, iVar0, func_24() != -1, 0, 0);
			func_993(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_994(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_992(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_993(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_909(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_909(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_994(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_909(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_909(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_909(iParam0, 1) /*11*/])->f_10 && iParam1));
}

struct<4> func_995()
{
	struct<4> Var0;

	return Var0;
}

int func_996(int iParam0, bool bParam1)
{
	if (func_748(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(bParam1), iParam0, 0);
}

float func_997(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_998(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_1201(iParam0, uParam1))
		{
			if (!func_276(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_450(uParam2, 0, 0, 1, 0);
				func_263(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_276(uParam1->f_10, 1))
		{
			func_1202(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_262(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_999(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_276(iParam4, 32);
		func_449(iParam1, uParam2, 0);
		iVar5 = func_1203(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_450(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_276(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_276(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_276(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_276(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_276(iParam4, 8388608) || func_276(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_276(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_276(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1002(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_1002(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_276(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1204(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_276(iParam4, 268435456))
			{
				iVar8 = func_1205(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1206(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_1002(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_276(iParam4, 2) || func_276(iParam4, 16))
			{
				func_1001(*uParam0, 1, 1);
			}
			else
			{
				func_1001(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_1000(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_1001(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_1002(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_1003(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_1207(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1004(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_1208(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_276(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_1005(int iParam0)
{
	if (func_276(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_276(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_276(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_1006(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_1209(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_1210(Global_35)) || func_1211(Global_35)) || func_1212(Global_35));
	fVar12 = -1f;
	if (func_283(&(iParam1->f_13)))
	{
		fVar12 = func_169(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_537(((*uParam4)[iVar0 /*17*/])->f_6);
		func_1213(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1214(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1215(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_450(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1216(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_449(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_1217(iParam1, fParam6, iParam1->f_9))
					{
						func_319(&(iParam1->f_18));
						if (bVar6)
						{
							func_1216(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_1218(iParam1, fParam2);
	}
	return bVar5;
}

void func_1007(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_1008(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1219((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_1218(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_1009(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_1220(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1221(iParam1, 0);
				func_449(iParam1, uParam2, func_1002(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_1010(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_319(&(iParam1->f_18));
			return 0;
		}
		else if (func_283(&(iParam1->f_18)))
		{
			func_399(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_283(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_1222(&(iParam1->f_18), fParam2);
	return 1;
}

void func_1011(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1213(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1012(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1013(int* iParam0)
{
	if (func_1002(iParam0, 0))
	{
		if (func_1223(iParam0))
		{
			func_1012(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_1014(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

var func_1015(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_1016()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

var func_1017(var uParam0)
{
	return uParam0->f_25;
}

int func_1018(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_920(iVar0);
}

var func_1019(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_481(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1020(int iParam0)
{
	int iVar0;

	iVar0 = func_491(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1224(iVar0);
}

int func_1021(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1225(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1022()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_1023(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1029(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1024(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1025(1);
	}
}

void func_1025(bool bParam0)
{
	if (bParam0)
	{
		func_263(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_262(&(Global_40.f_12018.f_42), 1);
	}
}

int func_1026(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_1028(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1029(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1226(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1030(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1031(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_1032()
{
	int iVar0;

	iVar0 = func_790();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1033(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_997(MISC::ABSF(fVar1) < 1f, func_997(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1034(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1035()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1036(int iParam0, bool bParam1, int iParam2)
{
	func_1227((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1228(iParam0);
}

void func_1037(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1229(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1038(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1230(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1231(iVar5, &iVar2, &iVar0))
			{
				if (!func_745(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1232(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_736(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1032() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1032() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1233();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_1040(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1041(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1042(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_1043(int iParam0)
{
	return func_736(iParam0) == -427144552;
}

int func_1044(int iParam0)
{
	var uVar0;

	if (func_24() != -1)
	{
		return 0;
	}
	if (func_839(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1048(iParam0, &uVar0, 1, 0, 0);
	}
	return func_660(iParam0, 1, 0);
}

void func_1045(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (func_736(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_842(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_391(iVar0))
	{
		if (func_24() == -1)
		{
			func_843(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_823(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_890(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_1046(int iParam0, var uParam1)
{
	int iVar0;

	if (func_838(iParam0, 58855631))
	{
		func_1165(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_1047(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!func_529(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_746(bParam3), iParam0);
}

int func_1048(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1234(&iParam0);
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!func_529(0))
	{
		bParam3 = true;
	}
	if (func_1043(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_737(0) };
			Var4.f_9 = -1591664384;
			if (!func_525(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_526(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_738(iParam0, 1))
			{
				if (!func_525(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_526(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1235(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1047(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_743(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1049(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_838(iParam0, 1399091007))
	{
		func_1105(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1050(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1236(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1237(&Var0, func_737(0));
	}
	if (!func_1238(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1108(iVar14);
	return uVar15;
}

int func_1051()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_1052(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1053(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_1239(iParam0);
	fVar1 = func_1240(iParam0);
	if ((Global_1347477->f_117 || !func_358(31)) || !func_1241(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1242(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1243(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_927(MISC::_CREATE_VAR_STRING(6, func_1244(iParam0), fVar1), "itemtype_textures", func_1245(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1055(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1246(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1056(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_834() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1247(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1248(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1088() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1249(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1088(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1250(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1089() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1251(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1089(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1055(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1057(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_1058(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1059(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1060(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1252(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_660(iVar2, 1, 0) || func_1254(func_1253(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1064(func_1252(iVar0))), func_1064(func_1252(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1088() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1255(iVar0)), func_1255(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1249() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1255(iVar0)), func_1255(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1255(iVar0)), func_1255(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1098(iParam3, func_1256(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1094(iVar2) - iParam7) >= func_1055(iParam3, func_1257(iVar0));
				}
				else
				{
					bVar1 = func_1094(iVar2) >= func_1055(iParam3, func_1257(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1094(iVar2) + iParam7) >= func_1055(iParam3, func_1257(iVar0));
			}
			else
			{
				bVar1 = func_1094(iVar2) >= func_1055(iParam3, func_1257(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1258(iVar2)), func_1258(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1259(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1260(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1260(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1089() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1261(iVar0)), func_1261(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1251() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1261(iVar0)), func_1261(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1261(iVar0)), func_1261(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1098(iParam3, func_1256(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1094(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1262(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1262(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1263(iVar2)), func_1263(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1061(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1250() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_1062(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_37(func_26(0)) && ((func_1264(0) == 1 || func_1264(0) == 8) || func_1264(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_1063(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

void func_1065(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1066(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1265(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1266(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1266(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1266(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1267(1);
			break;
		case 34:
			func_1268(1);
			break;
		case 35:
			func_1269(1);
			break;
		case 36:
			break;
		case 37:
			func_1270(0);
			break;
		case 38:
			func_1271(0);
			break;
		case 39:
			func_1272(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_361()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_348("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_642(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_361()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_348("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_642(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_361()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_348("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_642(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_361()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_348("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_642(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_24() == -1)
			{
				if (!func_1121(99217379) || func_1273(99217379) == 2110595215)
				{
					if (func_31())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_660(iVar0, 1, 0))
					{
						func_883(iVar0, 1, 752097756);
					}
					func_728(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_24() == -1)
			{
				if (!func_660(1013902307, 1, 0))
				{
					func_883(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_24() == -1)
			{
				if (!func_660(1013902307, 1, 0))
				{
					func_883(1013902307, 1, 752097756);
				}
				if (!func_660(142640135, 1, 0))
				{
					func_883(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_24() == -1)
			{
				if (!func_660(786809402, 1, 0))
				{
					func_883(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_24() == -1)
			{
				if (!func_660(786809402, 1, 0))
				{
					func_883(786809402, 1, 752097756);
				}
				if (!func_660(-518019409, 1, 0))
				{
					func_883(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1274();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1067(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1068(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_113();
	func_40(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1069(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_321(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1070(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1071(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_358(50))
			{
				if (!func_358(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_358(51))
			{
				if (!func_358(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_1072(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_745(iParam1, 0))
	{
		return 0;
	}
	if (func_736(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_24() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_740(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_908(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_838(iParam1, 866047851))
	{
		iVar5 = func_909(iVar4, 1);
		if (func_1189(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_740(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_838(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_778(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1275(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1275(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_740(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_838(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_1073()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1074()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_1075()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_660(func_1276(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1076(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_1077(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_660(iVar0, 1, 0) && func_660(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1078(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

int func_1079(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1277(iParam0);
	if (iVar0 != -15)
	{
		func_40(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_41(iVar0, 1);
	}
	return 0;
}

void func_1080(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_927(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1081(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1169())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_927(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1278(iVar0);
			func_1279(iVar0, 0, 0);
		}
		func_927(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_218(func_481(1644987397), iVar1);
	}
}

void func_1082(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1083(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1084(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1085(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1086(int iParam0)
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
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1094(iVar9);
	iVar2 = func_1094(iVar10);
	iVar3 = func_1094(iVar11);
	iVar5 = func_1095(iVar9);
	iVar6 = func_1095(iVar10);
	iVar7 = func_1095(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1094(iVar12);
		iVar8 = func_1095(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1087(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1088()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1280(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1089()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1090(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1262(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1262(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1262(iVar0))
		{
			*iParam2++;
		}
		if (func_1262(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1262(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1262(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1262(iVar0))
		{
			*iParam2++;
		}
		if (func_1262(iVar1))
		{
			*iParam2++;
		}
		if (func_1262(iVar0) && func_1262(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1262(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1262(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1262(iVar0))
		{
			*iParam2++;
		}
		if (func_1262(iVar1))
		{
			*iParam2++;
		}
		if (func_1262(iVar2))
		{
			*iParam2++;
		}
		if ((func_1262(iVar0) && func_1262(iVar1)) && func_1262(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1262(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1262(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1262(iVar0))
		{
			*iParam2++;
		}
		if (func_1262(iVar1))
		{
			*iParam2++;
		}
		if (func_1262(iVar2))
		{
			*iParam2++;
		}
		if (func_1262(iVar3))
		{
			*iParam2++;
		}
		if (((func_1262(iVar0) && func_1262(iVar1)) && func_1262(iVar2)) && func_1262(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1091(int iParam0)
{
	if (!func_1281(iParam0))
	{
		func_1283(func_1282(iParam0));
	}
}

int func_1092()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1281(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1093(int iParam0, int iParam1, int iParam2)
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
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1094(iVar9);
	iVar2 = func_1094(iVar10);
	iVar3 = func_1094(iVar11);
	iVar5 = func_1095(iVar9);
	iVar6 = func_1095(iVar10);
	iVar7 = func_1095(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1094(iVar12);
		iVar8 = func_1095(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1094(int iParam0)
{
	int iVar0;

	if (func_660(iParam0, 1, 0))
	{
		iVar0 = func_823(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1095(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1096(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1097(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1098(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1246(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1099(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1098(iParam1, 5) || iParam0 == func_1098(iParam1, 6)) || iParam0 == func_1098(iParam1, 7)) || iParam0 == func_1098(iParam1, 8)) || iParam0 == func_1098(iParam1, 9))
	{
		func_1090(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_835(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_837(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1100(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_1098(iParam1, 5) || iParam0 == func_1098(iParam1, 6)) || iParam0 == func_1098(iParam1, 7)) || iParam0 == func_1098(iParam1, 8)) || iParam0 == func_1098(iParam1, 9))
	{
		if (func_1090(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_835(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_837(51, 0, 0, iVar0, func_1055(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_835(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_837(51, 0, 0, iVar0, func_1055(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1101()
{
	if (func_264(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1102(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1103(int iParam0)
{
	if (!func_1284(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1104(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1105(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_1106(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_746(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1107(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1108(int iParam0)
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

float func_1109()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1285())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1286(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1286(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1287();
	fVar2 = func_1288();
	fVar3 = func_1289();
	fVar4 = func_1290();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1291()));
	fVar7 = (func_1286(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1292(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1293(3, fVar9, fVar9 > 100f);
	return func_1294(fVar7, -100f, 100f);
}

float func_1110()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1285())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1286(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1286(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1287();
	fVar2 = func_1288();
	fVar3 = func_1289();
	fVar4 = func_1290();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1291()));
	fVar7 = (func_1286(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1292(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1293(2, fVar9, fVar9 > 100f);
	return func_1294(fVar7, -100f, 100f);
}

float func_1111()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1285())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1286(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1295())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1296())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1286(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1287();
	fVar2 = func_1288();
	fVar3 = func_1289();
	fVar4 = func_1290();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1291()));
	fVar7 = (func_1286(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1292(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1293(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1286(0);
	}
	return func_1294(fVar7, -100f, 100f);
}

bool func_1112(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1113(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1114(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_745(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_1048(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_529(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_746(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1115(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1297();
			}
			break;
	}
	return 0;
}

int func_1116(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_1117(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1118(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1117(iParam0))
	{
		return;
	}
	if (func_1298(iParam0))
	{
		return;
	}
	if (!func_1299(iParam0))
	{
		func_1300(iParam0, 1, 0);
	}
	iVar0 = func_1301(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1302(iParam0, 512))
		{
			func_919(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1303() && !bParam1) && !func_25(0, 0, 1))
	{
		func_935(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1304(iParam0, 6);
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_479(1, 4);
		}
	}
}

bool func_1119(int iParam0, bool bParam1)
{
	return func_1115(iParam0, 0) < func_1305(iParam0, bParam1);
}

int func_1120(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_740(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1121(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_909(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_909(iParam0, 1) /*11*/];
}

void func_1122(int iParam0, int iParam1)
{
	if (func_838(iParam1, 130796156))
	{
		func_1306(iParam1, 0);
	}
	else if (func_838(iParam1, 930141731))
	{
		func_1306(iParam1, 1);
		func_1307(iParam0);
	}
}

void func_1123(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1124(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1308(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1309(uParam2, iParam0, Var1);
	return 1;
}

int func_1125(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1127(int iParam0)
{
	var uVar0;

	if (!func_1310(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1128()
{
	return !&Global_1911774;
}

void func_1129(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1130(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1131(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1132(int iParam0, int iParam1, int iParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((iParam2 && func_24() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1311(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1133(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_24() != -1)
	{
		return false;
	}
	if (func_1311(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1134(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_635(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1135();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1312(2032023096);
		func_638(-615217896);
		func_905(655868243, 1, 1, -142743235, 1);
		func_1314(146323340, func_1313());
		Var0 = { func_1315() };
		if (func_1316(&Var0) == -1387633835)
		{
			func_1317(&Var0);
			func_1318(Var0);
		}
		iVar7 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1319(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1320(iVar6) == 2010625508)
			{
				func_1321(iVar6, iVar7);
				func_1322(iVar6, iVar8);
				func_1323(iVar6, iVar9);
				func_1324(iVar6, 0);
				if (func_1325(iVar6))
				{
					func_1326(iVar6);
				}
				iVar10 = func_1327(iVar8);
				func_1328(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_1135()
{
	if (!func_1329(-1898635967, func_1313(), 1))
	{
		return 0;
	}
	if (func_32())
	{
		if (!func_1329(146323340, func_1313(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1136()
{
	func_647(joaat("weapon_pistol_volcanic"));
	func_647(joaat("weapon_shotgun_pump"));
	func_647(joaat("weapon_rifle_varmint"));
}

void func_1137(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_635(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_905(-1080874779, 3, 1, -142743235, 1);
		func_905(-223790555, 3, 1, -142743235, 1);
		func_905(1566032147, 3, 1, -142743235, 1);
		func_905(891311852, 5, 1, -142743235, 1);
		func_905(-1353737667, 5, 1, -142743235, 1);
		func_905(-330313895, 5, 1, -142743235, 1);
		func_905(-2051332199, 5, 1, -142743235, 1);
		func_905(1237770824, 5, 1, -142743235, 1);
		func_905(-1795542128, 3, 1, -142743235, 1);
		func_905(-1757588258, 3, 1, -142743235, 1);
		func_905(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1319(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1320(iVar0) == 153881023)
			{
				func_1321(iVar0, iVar1);
				func_1322(iVar0, iVar2);
				func_1323(iVar0, iVar3);
				func_1324(iVar0, 0);
				if (func_1325(iVar0))
				{
					func_1326(iVar0);
				}
				iVar4 = func_1327(iVar2);
				func_1328(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1135();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

void func_1138(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1330(iParam0);
	if (bParam3)
	{
		func_934(iParam0, sParam1, iParam2);
	}
}

bool func_1139(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1140(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1106("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1107(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_526(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1108(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1108(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1142(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1331(Param1, iParam5, &Var5, 0))
	{
		func_528(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1114(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1332(Var19, 1);
}

int func_1143(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1236(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1237(&Var0, func_737(0));
	}
	if (!func_1238(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_1107(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_528(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1108(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_1144(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_523(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1333(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_527(iParam0, Var0, Var0.f_4, bParam4) };
	return func_528(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1145(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_838(iParam0, 606799272))
		{
			func_1334(iParam0, iParam1);
		}
		if (func_838(iParam0, -1112814642) && func_838(iParam0, -1697809989))
		{
			func_859(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1146(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1335(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_740(iParam0) != -999503751)
		{
			func_1336(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_740(iParam0) != -999503751)
	{
		func_1336(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1337(iParam0, 1);
	return 1;
}

void func_1147()
{
	int iVar0;

	if (func_24() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_1148(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1338(0);
	}
	if (bParam0)
	{
		func_987(8);
		func_987(512);
	}
	else
	{
		func_987(8);
		func_987(16);
	}
}

void func_1149(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1150(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_911();
	}
	if (func_24() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1151(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1152(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1339(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_992(iVar0, 1);
			if (func_990(iVar0, iParam1))
			{
				vVar4 = { func_913(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_989(iVar7, 4))
				{
					func_994(iVar7, 4, 6);
				}
			}
			else
			{
				func_993(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_1153(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_24() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1340(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1154(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_1155(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_740(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_990(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1192(iVar1, iVar3);
		}
	}
	if (func_1121(-1586649372) && func_990(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1192(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1192(iVar1, iVar3);
					}
				}
			}
			func_1341(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1341(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1192(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1341(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1192(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1192(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1341(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1341(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1192(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1341(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1192(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1192(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_740(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1192(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_838(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_740(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_740(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1192(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_740(&(uParam0->f_1[iVar1 /*3*/])) || func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1192(iVar1, iVar3);
						}
					}
					break;
			}
		}

bool func_1156(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1157(int iParam0)
{
	if (func_24() != -1)
	{
		if (func_1112(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1112(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1158(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1112(iParam0, 65536) && !func_1112(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1112(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1112(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1159()
{
	return Global_1905944->f_5694;
}

void func_1160(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
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
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1342(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1343(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_987(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1342(Param0))
			{
				return;
			}
			func_1343(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_987(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_986(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1161(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1162(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_1163(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1164(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_24() == -1)
	{
		if (func_1043(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_1165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1166(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1234(&iParam0);
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!func_529(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1047(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_743(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1167(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_838(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
		}
		iVar49 = 0;
		if (func_1344(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_891(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_894(iVar62, iVar61);
					if (func_745(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1167(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1167(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1344(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1168(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1209(1);
}

int func_1169()
{
	if (func_32())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1170(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1345(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_641(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1345(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_641(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1171()
{
	return Global_40.f_4283.f_325;
}

bool func_1172(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1173(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1174(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_1175(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_1176(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_1177(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_37(iParam0))
	{
		return 0;
	}
	uVar0 = func_680(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1178(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

int func_1179(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_1180(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

void func_1181(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_102(iParam0);
	*uParam1 = func_240(iParam0);
	*uParam2 = func_809(iParam0);
}

void func_1182(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_1183(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_697(*uParam0, -1);
		func_698(*uParam0, 0);
		func_699(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_1184(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_1185(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::BLIP_REMOVE_MODIFIER(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_1186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_1187(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_1188()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1189(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_838(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1190(int iParam0)
{
	func_994(iParam0, 8, 6);
}

void func_1191(int iParam0)
{
	func_1346(&(Global_1946804->f_2589), iParam0);
}

void func_1192(int iParam0, int iParam1)
{
	func_1347(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1193(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1348(0);
	if (iParam2 != 0 && func_1349(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1154(iParam0, func_992(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1194(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_24() != -1;
	iVar7 = func_1348(0);
	if (func_982(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_992(iVar0, 1);
			if (func_989(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_989(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1275(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1350(uParam0);
				if (iVar3 > 0)
				{
					if (!func_982(524288))
					{
						func_987(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_992(iVar0, 1);
							if (func_989(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_989(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1275(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1192(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1197(524288);
				}
			}
		}
	}

void func_1195(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1351(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_24() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1352(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1301(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1301(Global_40.f_7729);
				Global_1946804->f_1378 = func_1301(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1353(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1148(0, 1);
	}
}

void func_1196(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1197(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1199(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1342(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1342(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1343(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_987(8);
}

int func_1200(int iParam0)
{
	int iVar0;

	iVar0 = func_740(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

int func_1201(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1354((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_1202(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1219((*uParam0)[iVar0 /*17*/]))
		{
			func_761((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1203(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_1355(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_537(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_761((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_1204(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1356(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_1205(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1206(int* iParam0, int* iParam1)
{
	if (!func_1002(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_761(iParam1, 19);
			func_1221(iParam0, 23);
			func_1357(iParam1, 2);
		}
	}
}

int func_1207(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1358(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_1359(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_1208(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1355(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1209(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_1210(int iParam0)
{
	return (func_1360(iParam0, 4) || func_1360(iParam0, 5));
}

int func_1211(int iParam0)
{
	return func_1360(iParam0, 7);
}

int func_1212(int iParam0)
{
	return func_1360(iParam0, 6);
}

void func_1213(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_1219(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1355(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_1214(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1361(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_759(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_540(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_540(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_1362(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_1215(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1363(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_1364(iParam1, 1))
	{
		func_1365(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_1216(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_542((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_1217(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_1218(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_1219(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_1220(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1221(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_1222(var uParam0, float fParam1)
{
	if (func_1366(uParam0, fParam1))
	{
		func_399(uParam0);
		return 1;
	}
	return 0;
}

int func_1223(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1224(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1225(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_1226(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

void func_1227(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1367(bParam1);
	}
}

void func_1228(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1229(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1230(var uParam0)
{
	vector3 vVar0;

	if (!func_1246(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1231(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1246(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_1232(int iParam0)
{
	return iParam0;
}

int func_1233()
{
	int iVar0;

	iVar0 = func_1032();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

int func_1234(var uParam0)
{
	if (!func_745(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453:
			*uParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777:
			*uParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398:
			*uParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393:
			*uParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1235(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_523(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_524((375 + iVar29), 1);
		if (func_525(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_526(iParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

struct<14> func_1236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (iParam0 != 0)
	{
		Var0 = iParam0;
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
	return Var0;
}

void func_1237(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1238(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_746(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1239(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1368(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1368(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1368(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_358(18);
		case 2:
			return func_358(20);
		case 1:
			return func_358(19);
		default:
			break;
	}
	return 1;
}

int func_1242(int iParam0)
{
	return func_1369(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1243(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_24() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_358(31))
	{
		return;
	}
	iVar0 = func_1242(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1242(iParam0);
	if (func_1370(iParam0) && func_1371(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1372(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1373(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_642(func_1374(iParam0), 0);
					}
					func_1375(iParam0, iVar2, iVar3);
					func_1376(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1244(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1245(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1246(int iParam0, var uParam1)
{
	if (!func_1377(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1247()
{
	return func_1378(Global_40.f_12018);
}

int func_1248()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1054(iVar1);
		if (func_660(iVar2, 1, 0) || func_1254(func_1253(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1249()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1379(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1250()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1259(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1251()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1253(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1254(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1258(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1259(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1260(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1262(int iParam0)
{
	if (func_1380(iParam0) && func_660(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1381(iParam0) && func_1382(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1263(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_877(iParam0));
}

int func_1264(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1265(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1266(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1267(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1268(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1269(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1270(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(iVar0);
	}
}

void func_1271(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1272(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1273(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_909(iParam0, 1) /*3*/]);
}

void func_1274()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1383();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_843(joaat("weapon_revolver_cattleman_john"));
		func_883(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_843(joaat("weapon_melee_knife_john"));
		func_883(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_1275(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_909(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_982(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_1276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1277(var uParam0)
{
	return func_1384(uParam0, -1);
}

void func_1278(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1385((Global_40.f_4283.f_325 + iParam0));
}

void func_1279(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1169())
	{
		func_927(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_927(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1280(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1281(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1282(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1283(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1284(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1285()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1286(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1287()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1386(13);
	iVar1 = func_1387(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1288()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1289()
{
	if (func_32())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1290()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1291()
{
	return Global_1955565->f_3;
}

void func_1292(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1388(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1293(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1388(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_1294(float fParam0, float fParam1, float fParam2)
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

bool func_1295()
{
	return func_1386(12) <= -99f;
}

bool func_1296()
{
	return func_1386(12) >= 99f;
}

int func_1297()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_740(iVar1) == -999503751)
		{
			if (func_1389() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1298(int iParam0)
{
	if (!func_1117(iParam0))
	{
		return 0;
	}
	if (func_1302(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1299(int iParam0)
{
	if (!func_1117(iParam0))
	{
		return 0;
	}
	if (func_1302(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1300(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1117(iParam0))
	{
		return;
	}
	if (!func_1299(iParam0))
	{
		func_1304(iParam0, 2);
		if (bParam2)
		{
			if (!func_25(0, 0, 1))
			{
				func_479(1, 4);
			}
		}
		if ((!func_1303() && !bParam1) && !func_25(0, 0, 1))
		{
			func_935(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1390(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1301(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_1302(int iParam0, int iParam1)
{
	if (!func_1117(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1303()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_1304(int iParam0, int iParam1)
{
	if (!func_1117(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1305(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1306(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1391(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_840(50);
			}
			else
			{
				func_840(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_840(51);
			}
			else
			{
				func_840(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1392(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_864();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_864();
			}
			break;
		case 3:
			func_840(24);
			if (bParam1)
			{
				if (!func_1392(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_864();
				}
			}
			break;
	}
}

void func_1307(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1393(0))
			{
				iVar0++;
			}
			if (func_1393(2))
			{
				iVar0++;
			}
			if (func_1393(4))
			{
				iVar0++;
			}
			if (!func_1394(16))
			{
				if (iVar0 == 1)
				{
					func_1395();
					func_642(456, 1);
					func_1396(16);
				}
			}
			if (!func_1394(32))
			{
				if (iVar0 >= 3)
				{
					func_1395();
					func_642(456, 1);
					func_1396(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1393(1))
			{
				iVar0++;
			}
			if (func_1393(3))
			{
				iVar0++;
			}
			if (func_1393(7))
			{
				iVar0++;
			}
			if (!func_1394(1))
			{
				if (iVar0 == 1)
				{
					func_1397();
					func_642(457, 1);
					func_1396(1);
				}
			}
			if (!func_1394(2))
			{
				if (iVar0 >= 3)
				{
					func_1397();
					func_642(457, 1);
					func_1396(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1393(5))
			{
				iVar0++;
			}
			if (func_1393(6))
			{
				iVar0++;
			}
			if (func_1393(8))
			{
				iVar0++;
			}
			if (!func_1394(4))
			{
				if (iVar0 == 1)
				{
					func_1398();
					func_642(455, 1);
					func_1396(4);
				}
			}
			if (!func_1394(8))
			{
				if (iVar0 >= 3)
				{
					func_1398();
					func_642(455, 1);
					func_1396(8);
				}
			}
			break;
	}
}

void func_1308(var uParam0)
{
	func_1123(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1123(uParam0, 617531372);
	}
	else
	{
		func_1123(uParam0, 291123060);
	}
}

void func_1309(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1399(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1310(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1311(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_1312(int iParam0)
{
	int iVar0[15];
	int iVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_905(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1400(iParam0, &uVar18);
	func_1401(iParam0, &uVar18, &iVar34, 1);
	if (func_911() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1402(iParam0, &(Global_26795.f_627.f_121.f_20));
	func_907(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_905(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_740(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1402(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1402(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1402(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1402(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1402(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_907(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_909(func_908(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1403(&(Global_1946804->f_1616));
	func_912(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_913(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_913(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_913(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_913(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_913(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_913(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_913(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_913(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_913(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_914(&(iVar0[iVar36]), iVar35))
			{
				func_907(func_1404(iVar35), 1, 1);
				func_1405(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1339(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_915(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			iVar16 = 1;
		}
		else
		{
			iVar36++;
		}
	}
	if ((iVar16 || bVar17) || Global_40.f_7729 == func_1116(iParam0))
	{
		if (!func_1406(8))
		{
			if (func_911() == -2125499975)
			{
				if (bVar17)
				{
					func_912(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1407(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1408(2, 0, 6);
					}
				}
				if (iVar16 || Global_40.f_7729 == func_1116(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_912(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1407(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1408(2, 0, 6);
					}
				}
				if (iVar16 || Global_40.f_7729 == func_1116(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (iVar16 || Global_40.f_7729 == func_1116(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1409(Global_40.f_7729, 4096);
					func_1304(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1410(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_912(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_912(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

struct<4> func_1313()
{
	struct<4> Var0;

	Var0 = { func_735(0) };
	return func_527(856287005, Var0, -218846335, 0);
}

int func_1314(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_745(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_743(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1411(&uVar7);
					if (func_528(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1315()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1412(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1412(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1412(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1412(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1412(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1412(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1316(var uParam0)
{
	return uParam0->f_1;
}

void func_1317(var uParam0)
{
	func_1413(uParam0);
	func_1415(uParam0, func_1414(-1346384396));
	func_1416(uParam0, func_1414(-712836614));
	func_1417(uParam0, func_1414(-1629133289));
	func_1418(uParam0, func_1414(1302066700));
	func_1419(uParam0, func_1414(599669344));
	func_1420(uParam0, func_1414(-1555511632));
}

void func_1318(struct<6> Param0)
{
	if (!func_1421(Param0.f_4, 1))
	{
	}
	if (!func_1421(Param0, 1))
	{
	}
	if (!func_1421(Param0.f_2, 1))
	{
	}
	if (!func_1421(Param0.f_5, 1))
	{
	}
	if (!func_1421(Param0.f_3, 1))
	{
	}
	if (!func_1421(Param0.f_1, 1))
	{
	}
}

int func_1319(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_361())
	{
		if (func_616())
		{
			bVar0 = false;
			if (!func_92(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_358(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1422();
				*iParam1 = func_1423();
				*iParam2 = func_1424();
				return 1;
			}
			else
			{
				*iParam0 = func_1425();
				*iParam1 = func_1426();
				*iParam2 = func_1427();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_92(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_1428();
				*iParam1 = func_1429();
				*iParam2 = func_1430();
				return 1;
			}
			else
			{
				*iParam0 = func_1431();
				*iParam1 = func_1432();
				*iParam2 = func_1433();
				return 1;
			}
		}
	}
	else if (func_616())
	{
		*iParam0 = func_1434();
		*iParam1 = func_1435();
		*iParam2 = func_1436();
		return 1;
	}
	else if (func_31())
	{
		*iParam0 = func_1437();
		*iParam1 = func_1438();
		*iParam2 = func_1439();
		return 1;
	}
	return 0;
}

int func_1320(int iParam0)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_1321(int iParam0, int iParam1)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_1322(int iParam0, int iParam1)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1323(int iParam0, int iParam1)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_1324(int iParam0, int iParam1)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_1325(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1441(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_735(0) };
	if (func_1442(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1326(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1443(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_528(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1327(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return 1538827865;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case joaat("a_c_horse_appaloosa_blanket"):
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1120227140;
		case joaat("a_c_horse_arabian_black"):
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case joaat("a_c_horse_arabian_white"):
			return -1040918754;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 535545841;
		case -635239558:
			return 1686036388;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return -621245377;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return 2125477381;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2051021144;
		case 43825738:
			return 1924406350;
		case joaat("a_c_horse_nokota_blueroan"):
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case joaat("a_c_horse_turkoman_gold"):
			return -1674873797;
		case -1604180548:
			return 281852151;
		case joaat("a_c_donkey_01"):
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case joaat("a_c_horse_shire_ravenblack"):
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1328(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_745(iParam1, 0))
	{
		return 0;
	}
	if (!func_1444(iParam1))
	{
		return 0;
	}
	if (func_1325(iParam0))
	{
		return 0;
	}
	iVar0 = func_1441(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_735(0) };
	Var1.f_4 = iVar0;
	if (!func_1114(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_1329(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_745(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_743(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1411(&Var7);
					if (func_1114(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_1332(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1330(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1209(1) < iParam0)
	{
		iParam0 = func_1209(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_481(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

int func_1331(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_746(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_742(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1332(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_529(0))
	{
		return func_1445(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_742(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_746(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1333(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	if (func_747(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_529(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_746(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1334(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = 0;
	if (func_24() == -1)
	{
		if (func_829(43))
		{
			if (func_838(iParam0, 412399755))
			{
				func_1091(-1791518714);
				if (func_1092() == 0)
				{
					func_479(0, 10);
					sVar0 = func_1446(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1094(iParam0) < func_1095(iParam0))
						{
							func_835(43, iParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_829(44))
		{
			if (func_838(iParam0, 709057512))
			{
				func_1091(-2087881550);
				if (func_1092() == 1)
				{
					func_479(0, 10);
					sVar0 = func_1446(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1094(iParam0) < func_1095(iParam0))
						{
							func_835(43, iParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_829(45))
		{
			if (func_838(iParam0, -1478961327))
			{
				func_1091(1908068621);
				if (func_1092() == 2)
				{
					func_479(0, 10);
					sVar0 = func_1446(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1094(iParam0) < func_1095(iParam0))
						{
							func_835(43, iParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_829(46))
		{
			if (func_838(iParam0, -1238404098))
			{
				func_1091(1611247019);
				if (func_1092() == 3)
				{
					func_479(0, 10);
					sVar0 = func_1446(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1094(iParam0) < func_1095(iParam0))
						{
							func_835(43, iParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_829(47))
		{
			if (func_838(iParam0, 1160548794))
			{
				func_1091(1319635688);
				if (func_1092() == 4)
				{
					func_479(0, 10);
					sVar0 = func_1446(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1094(iParam0) < func_1095(iParam0))
						{
							func_835(43, iParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1335(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_1336(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1447(iParam1);
	func_1448(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1449(&(uParam0->f_26), iVar1);
		if (func_1450(uParam0->f_26, &iVar0))
		{
			func_1451(iVar0, iVar1);
		}
	}
}

int func_1337(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_523(iParam0, 0, 0) };
	Var5 = { func_527(iParam0, Var0, Var0.f_4, 0) };
	if (func_743(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_746(0), &Var5, iParam1);
	return 1;
}

void func_1338(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1339(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1341(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1192(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1192(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_1192(iVar2, iVar0);
		}
	}
}

bool func_1342(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1343(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_1344(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1452(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

char* func_1345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

void func_1346(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1453(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1453(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1454(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1347(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1455(uParam0, 1))
	{
		func_1456(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

int func_1348(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_911();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1349(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1350(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1351(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_24() == -1)
	{
		func_915(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1457(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1352(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_1353(int iParam0, bool bParam1, int iParam2)
{
	func_1407(&(Global_1946804->f_1378), iParam0);
	func_1408(2, iParam0, 6);
	if (bParam1)
	{
		func_1148(0, 1);
	}
}

int func_1354(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1355(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_537(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_514(&(iParam1->f_6), 0, 1);
	}
	if (!func_537(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1219(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1458(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_537(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1362(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1459(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1460(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_538(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1459(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_540(iParam1->f_6, 0, 1);
				}
				else
				{
					func_540(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1356(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_1357(int* iParam0, int iParam1)
{
	if (!func_760(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_761(iParam0, 14);
		}
	}
}

bool func_1358(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1359(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1360(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_1361(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_1362(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_537(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	func_1459(iParam0, 18, 0, 1);
	func_1459(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_1363(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_537(iParam0))
	{
		return false;
	}
	iVar0 = func_722(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1364(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_537(iParam0))
	{
		return false;
	}
	iVar0 = func_722(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1365(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_537(iParam0))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_1366(var uParam0, float fParam1)
{
	if (!func_283(uParam0))
	{
		return 0;
	}
	if (func_169(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_1367(bool bParam0)
{
	func_1461(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(121713391);
	}
}

float func_1368(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1239(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1369(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1462(iVar6) - func_1462(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1369(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1370(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1371(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1372(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1369(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1462(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1462(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1373(int iParam0)
{
	int iVar0;

	if (func_1463(iParam0, &iVar0))
	{
		return func_1462(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1464())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1464())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1464())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1375(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	var uVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1465(iParam0));
	sVar4 = func_1467(func_1466(iVar3, iParam2));
	sVar6 = func_1468(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1469(iParam0));
	uVar8 = func_1470(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = uVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1471(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_1063(sVar7, sVar1, uVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1472(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1376(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1377(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1378(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1379(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1380(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return 1;
		case -1969404854:
			return 1;
		case 1761263432:
			return 1;
		case -843795569:
			return 1;
		case -832850511:
			return 1;
		case -1464585113:
			return 1;
		case -1290897778:
			return 1;
		case -100913452:
			return 1;
		case 313332607:
			return 1;
		case -124539232:
			return 1;
		case 59384454:
			return 1;
		case 905173572:
			return 1;
		case 1432949803:
			return 1;
		case -983831788:
			return 1;
		case -1882344824:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1381(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1382(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1473(&iVar0, 0, iVar95, &Var1) && !func_1473(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1474(iVar0, &Var1);
			if (func_745(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1383()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1475(Global_35, &iVar0);
	Var30 = { func_735(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1476(0);
	func_1477(7);
	func_1478(-1623728698, 1, 1, 0);
	if (func_911() == 1160113249)
	{
		func_1478(-763730846, 1, 1, 1);
		func_1478(-361635024, 1, 1, 1);
	}
	func_1479(Global_35, &iVar0);
}

int func_1384(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_746(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, uParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_242(&uVar6, iVar0);
	func_243(&uVar6, iVar1);
	func_244(&uVar6, iVar2);
	func_245(&uVar6, iVar3);
	func_246(&uVar6, iVar4);
	func_247(&uVar6, iVar5);
	return uVar6;
}

void func_1385(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_481(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

float func_1386(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1387(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1388(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1130(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1130(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1389()
{
	return Global_1946804->f_1497;
}

char* func_1390(int iParam0)
{
	int iVar0;

	iVar0 = func_1301(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1263(iVar0);
}

int func_1391(int iParam0)
{
	int iVar0;

	if (func_1480(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1481(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1482(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1483(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1392(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_660(func_1484(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1393(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_660(func_1485(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1394(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1395()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_883(1654063339, 1, 752097756);
	iVar0 = func_1242(1);
	func_1375(1, iVar0, 0);
}

void func_1396(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1397()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_883(1623931083, 1, 752097756);
	iVar0 = func_1242(2);
	func_1375(2, iVar0, 0);
}

void func_1398()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_883(-1845241476, 1, 752097756);
	iVar0 = func_1242(0);
	func_1375(0, iVar0, 0);
}

int func_1399(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1400(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_1486(iParam0, func_911()))
	{
		return 0;
	}
	Var1 = func_1150(func_911());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1401(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	var uVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	uVar19 = func_1150(func_911());
	Var20 = { func_1236(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1238(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1107(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1116(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*uParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1340(&(Global_1946804->f_964), uVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*uParam2 = (*uParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*uParam2];
						(*uParam1)[*uParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_1108(iVar0);
	return 1;
}

void func_1402(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1335(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26795.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26795.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26795.f_627.f_121.f_19 == 1)
	{
		Global_26795.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26795.f_627.f_121[0] = 0;
		return;
	}
	Global_26795.f_627.f_121.f_19 = (Global_26795.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26795.f_627.f_121[iVar0] = &Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19];
	Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19] = 0;
}

void func_1403(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1404(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1487();
	}
	if (func_24() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

void func_1405(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_24() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_915(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_1457(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1406(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_1407(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_915(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1457(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1408(int iParam0, int iParam1, int iParam2)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1409(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1117(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_1410(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1301(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1404(iParam1);
	}
	if ((iParam3 && func_1302(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1486(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1409(Global_40.f_7729, 4096);
		func_1304(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_734(iParam0);
	}
	func_1488();
	if (!func_1489(iParam1))
	{
		func_1491(iVar0, iParam0, func_1490(iParam1), 1, 0, 1);
	}
	func_1492(iParam0);
	return 1;
}

void func_1411(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_1412(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1493(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1313() };
	*uParam1 = func_1494(Var0, iParam0, 0);
	if (!func_745(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1413(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1414(int iParam0)
{
	if (func_616())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737;
			case -712836614:
				return 1832924306;
			case -1629133289:
				return -960265739;
			case 1302066700:
				return 1484641439;
			case 599669344:
				return -1742648548;
			case -1555511632:
				return -288915854;
		}
	}
	else if (func_31())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398;
			case -712836614:
				return 540384851;
			case -1629133289:
				return 859626502;
			case 1302066700:
				return -415239647;
			case 599669344:
				return 1436607742;
			case -1555511632:
				return 691935155;
		}
	}
	return 0;
}

void func_1415(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_1416(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_1417(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

void func_1418(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_1419(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_1420(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1;
}

int func_1421(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	var uVar18;
	var uVar19;
	var uVar20;
	int iVar21;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (!func_1495(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1313() };
	Var14 = { func_527(iParam0, Var10, iVar9, 0) };
	if (func_1332(Var14, iParam1))
	{
		if (func_1496(iParam0))
		{
			if (func_1412(325139909, &uVar18))
			{
				if (func_1421(uVar18, 0))
				{
				}
			}
		}
		else if (func_1497(iParam0))
		{
			if (func_1412(325139909, &uVar19))
			{
				if (func_1421(uVar19, 0))
				{
				}
			}
			if (func_1412(986998820, &uVar20))
			{
				if (func_1421(uVar20, 0))
				{
				}
			}
			iVar21 = func_1498(iParam0);
			if (func_745(iVar21, 0))
			{
				if (func_1421(iVar21, 1))
				{
				}
			}
		}
		func_1499();
		return 1;
	}
	return 0;
}

int func_1422()
{
	return 1342496140;
}

int func_1423()
{
	return 446670976;
}

int func_1424()
{
	return 1;
}

int func_1425()
{
	return -868094182;
}

int func_1426()
{
	return 1074477367;
}

int func_1427()
{
	return 1;
}

int func_1428()
{
	return -997197050;
}

int func_1429()
{
	return -2063289686;
}

int func_1430()
{
	return 2;
}

int func_1431()
{
	return -868094182;
}

int func_1432()
{
	return 1074477367;
}

int func_1433()
{
	return 1;
}

int func_1434()
{
	return 1235275977;
}

int func_1435()
{
	return 2030804811;
}

int func_1436()
{
	return 1;
}

int func_1437()
{
	return 1974379573;
}

int func_1438()
{
	return 2024948086;
}

int func_1439()
{
	return 1;
}

int func_1440(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1442(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_746(bParam2), uParam0, iParam1);
}

int func_1443(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1325(iParam0))
	{
		return 0;
	}
	iVar0 = func_1441(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_735(0) };
	if (!func_1500(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1501(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1444(int iParam0)
{
	return func_736(iParam0) == -1784221369;
}

int func_1445(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_742(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_736(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1502(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1503(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1504(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1505(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1506(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1507(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1446(int iParam0, int iParam1, int iParam2)
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
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1094(iVar9);
	iVar2 = func_1094(iVar10);
	iVar3 = func_1094(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1094(iVar12);
	}
	iVar5 = func_1095(iVar9);
	iVar6 = func_1095(iVar10);
	iVar7 = func_1095(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1095(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

var func_1447(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1448(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1449(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1508(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1450(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_1451(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1452(int iParam0, int iParam1, var uParam2, int iParam3)
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
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
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
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
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
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

bool func_1453(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1454(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1455(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1456(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1457(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_1458(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 48)
	{
		if (func_1014(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
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
				func_1509(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_1459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_537(iParam0))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1460(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_537(iParam0))
	{
		return;
	}
	iVar0 = func_722(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_1461(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1462(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1463(var uParam0, var uParam1)
{
	return 0;
}

int func_1464()
{
	return 0;
}

int func_1465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(0), -1845241476, 0);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(0), 1654063339, 0);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_746(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1466(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1467(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1468(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1469(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1470(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1472(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1473(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1510(iParam1) && !func_1511(iParam1))
	{
		iVar0 = func_1512(iParam1);
	}
	else
	{
		return 0;
	}
	func_1513(uParam3);
	iVar5 = func_1514(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*uParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*uParam0);
	return 1;
}

void func_1474(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1515(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1516(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1475(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_390(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1476(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_745(iVar1, 0))
		{
			func_907(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1477(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_24() == -1)
	{
		func_1517(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_740(iVar2) != -999503751)
		{
			func_1518(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1337(iVar2, 0))
		{
			func_729(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1478(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1519(iParam0))
	{
		return;
	}
	iVar0 = func_740(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1520(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, iParam1);
			break;
		case 81053684:
			bVar1 = func_1520(iParam0, &(Global_1946804->f_2657.f_23), 1, iParam1);
			break;
		case -999503751:
			bVar1 = func_1520(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, iParam1);
			break;
		case -525676072:
			bVar1 = func_1520(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, iParam1);
			break;
		case -1719060085:
			bVar1 = func_1520(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
		case -413129408:
			bVar1 = func_1520(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1521(0))
	{
		func_1522(iParam0, 1);
		if (func_911() == 1160113249)
		{
			func_1522(func_1521(-2125499975), 0);
		}
		else
		{
			func_1522(func_1521(1160113249), 0);
		}
	}
	func_1147();
	if (func_1523(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_746(0), iParam0, 0);
	}
	func_729(iParam0, bParam3);
	if (bParam2)
	{
		func_1148(0, 0);
	}
}

void func_1479(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, 0))
			{
				if (func_391(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_1480(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (func_838(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1481(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (func_838(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1482(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (func_838(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1483(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (func_838(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1484(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1524(iParam0);
		case 1:
			return func_1525(iParam0);
		case 2:
			return func_1526(iParam0);
		case 3:
			return func_1527(iParam0);
	}
	return 0;
}

int func_1485(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1528(iParam0);
		case 1:
			return func_1529(iParam0);
		case 2:
			return func_1530(iParam0);
		case 3:
			return func_1531(iParam0);
		case 4:
			return func_1532(iParam0);
		case 5:
			return func_1533(iParam0);
		case 6:
			return func_1534(iParam0);
		case 7:
			return func_1535(iParam0);
		case 8:
			return func_1536(iParam0);
	}
	return 0;
}

bool func_1486(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_1150(iParam1);
	func_1340(&(Global_1946804->f_964), uVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

int func_1487()
{
	if (func_24() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

void func_1488()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		return;
	}
	if (!func_982(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1537(), sVar0, 1090519040, -1056964608, -1, 67108880, 0, 0, 0, 0, "Satchel_and_ik_hand_helpers_filter", 0);
	func_1197(1);
	STREAMING::REMOVE_ANIM_DICT(func_1537());
}

int func_1489(int iParam0)
{
	return 0;
}

int func_1490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1491(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_1116(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_24() != -1)
	{
		return;
	}
	func_1188();
	if (bParam5)
	{
		if (!func_1538(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_982(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_983();
	}
	func_1539(iVar3, 1, 1, 1, 1, 1);
	func_919(31, 0, 0, 0, 0);
	func_985(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_919(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_919(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_730(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1492(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

int func_1493(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_740(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1540(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_1494(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1331(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1495(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_740(iParam1);
		iVar5 = func_1540(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_523(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_527(iParam1, *uParam4, uParam4->f_4, 0) };
					*uParam2 = uVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_746(0);
			Var37 = { func_523(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_527(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_740(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_1331(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*uParam2 = uVar2;
									return 1;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*uParam2 = 0;
	return 0;
}

int func_1496(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
	}
	if (func_838(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_1497(int iParam0)
{
	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	if (func_838(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_1498(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		case -769274720:
			return -34331381;
		case 893370428:
			return -993578318;
		case 736792276:
			return 579268144;
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_1499()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_523(856287005, 0, 0) };
	Var5 = { func_527(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_740(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_1494(Var5, -415648720, 0);
	}
	if (!func_745(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1540(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1494(Var5, iVar11, 0);
			if (!func_745(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1497(iVar14) || func_1496(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1497(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1497(iVar14) && func_1541(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1542(iVar11, &Var16, 1))
									{
										if (!func_1332(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}

int func_1500(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_746(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1501(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_746(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

struct<28> func_1502(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_746(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1506(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1503(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1543(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1543(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1543(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1504(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_746(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1506(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1505(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1543(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1543(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1543(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1506(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1507(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1543(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1543(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1543(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1508(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1544(&(uParam0->f_3));
}

void func_1509(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
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
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
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
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_756(iParam0, 1);
	func_757(iParam0, 1);
	func_758(iParam0, 128);
}

int func_1510(int iParam0)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_1511(int iParam0)
{
	int iVar0;

	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1510(iParam0))
	{
		return 0;
	}
	iVar0 = func_1512(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1512(int iParam0)
{
	iParam0 = func_1440(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_1513(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1515(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1516(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1517(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1236(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1238(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_1108(iVar0);
	}
}

void func_1518(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1545(iParam2, *uParam0);
	func_1546(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1519(int iParam0)
{
	if (func_24() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1520(int iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1335(iVar1, &uVar0))
	{
		return 0;
	}
	if (uParam3 && !func_1337(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_740(iParam0) != -999503751)
	{
		func_1518(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1521(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_911();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1522(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_523(iParam0, 0, 0) };
	Var5 = { func_527(iParam0, Var0, Var0.f_4, 0) };
	if (func_743(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_746(0), &Var5);
	return 1;
}

bool func_1523(int iParam0)
{
	return func_1547(func_1040(iParam0));
}

int func_1524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1536(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

char* func_1537()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_1538(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1548(uParam0, iParam3, iParam2) && !func_912(uParam0, iParam2, iParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_982(32768))
	{
		if (!*iParam1 || (*iParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_1190(1108822547);
		}
		else
		{
			func_1549(1108822547);
		}
	}
	func_1194(uParam0, 0, 0);
	func_1338(iParam5);
	return 1;
}

void func_1539(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1487()) || iParam5)
		{
			func_1550();
		}
	}
	if (func_24() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((iParam4 && iVar0 > 5) && func_1551(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1301(Global_40.f_7729);
				Global_1946804->f_1378 = func_1301(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1490(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1353(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1148(0, 1);
	}
	func_1338(0);
}

int func_1540(int iParam0)
{
	int iVar0;

	if (!func_745(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_740(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1541(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_1542(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var2 = { func_1236(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1237(&Var2, func_1313());
	if (func_1238(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_1107(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_745(Var16.f_4, 0) && !Var16.f_10)
				{
					if (iParam2 && func_1541(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_1108(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_1108(iVar0);
	}
	return 0;
}

void func_1543(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1552(iParam0, iParam1);
}

void func_1544(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1545(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1546(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1508(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_909(func_908(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1553(uParam0);
	}
}

bool func_1547(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_1548(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_1404(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_1352(2, iParam1))
	{
		func_1554(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_1549(int iParam0)
{
	func_993(iParam0, 8, 6);
}

void func_1550()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1551(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1150(0);
	iVar1 = 0;
	func_1340(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_1552(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

void func_1553(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1555(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1554(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1555(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1556(func_911());
	if (*uParam0)
	{
		func_1544(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_24() != -1, iParam2);
	*uParam0 = 1;
}

int func_1556(int iParam0)
{
	if (func_24() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

