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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20[5] = { 0, 0, 0, 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	struct<107> Local_33 = { 5, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2 } ;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 570;
	var uLocal_143 = 1065353216;
	var uLocal_144 = -1082130432;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 2;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 570;
	var uLocal_160 = 1065353216;
	var uLocal_161 = -1082130432;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 2;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	struct<248> Local_179 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1065353216;
	var uLocal_444 = 1119092736;
	var uLocal_445 = 1092616192;
	var uLocal_446 = 1085276160;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	struct<25> Local_450 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	vector3 vLocal_487[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_512 = 0;
	int iLocal_513 = 0;
	var uLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517[2] = { 0, 0 };
	var uLocal_520 = 2;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_533 = 0;
	var uLocal_534[5] = { 0, 0, 0, 0, 0 };
	vector3 vLocal_540 = { 0f, 0f, 0f };
	vector3 vLocal_543 = { 0f, 0f, 0f };
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	bool bLocal_549 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_513 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_549 = true;
	}
	while (true)
	{
		func_2(bLocal_549, 965/*func_1*/, 0);
		if (bLocal_549)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_179.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					func_4(&Local_179, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (Local_179.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						func_4(&Local_179, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&Local_179, 2);
						}
						else if (Local_179.f_217 > 0)
						{
							func_4(&Local_179, 3);
						}
						else if (Local_179.f_218 > 0)
						{
							func_4(&Local_179, 4);
						}
						else if (Local_179.f_216 > 0)
						{
							func_4(&Local_179, 5);
						}
						else
						{
							func_4(&Local_179, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&Local_179, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&Local_179, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&Local_179, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&Local_179, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&Local_179, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						(Global_40.f_9632[Local_179.f_151 /*4*/])->f_2 = (1 + (Global_40.f_9632[Local_179.f_151 /*4*/])->f_2);
						if (func_18(Global_1393447, 65536))
						{
							func_19(Global_1393447, 65536);
						}
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&Local_179, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_179.f_20 > (100f - 10f))
						{
							func_21();
							func_4(&Local_179, 9);
						}
						else
						{
							func_22(&Local_179, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_179.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						Local_179.f_226 = func_24();
						if (Global_40.f_9632.f_194 != Local_179.f_151)
						{
							switch (Local_179.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&Local_179, 1);
									break;
							}
						}
						func_26();
						func_27(&Local_179);
						Local_179.f_21 = Local_179.f_20;
						func_28(&Local_179, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						func_22(&Local_179, 16384);
						func_4(&Local_179, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&Local_179, 32768) || func_31())
					{
						switch (Local_179.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&Local_179, 1);
								break;
						}
						func_33(&Local_179, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&Local_179);
						func_4(&Local_179, 11);
					}
					break;
				case 11:
					func_37(&Local_179);
					func_38();
					if (func_39(&Local_179))
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_40(&(Local_179.f_244), 0);
						func_4(&Local_179, 12);
					}
					break;
				case 12:
					func_41(&Local_179);
					func_38();
					if (func_42())
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&Local_179, 13);
					}
					break;
				case 13:
					func_1();
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1()
{
	float fVar0;

	if (func_18(Global_1393447, 2))
	{
		func_19(Global_1393447, 2);
	}
	if (func_18(Global_1393447, 16))
	{
		func_19(Global_1393447, 16);
	}
	if (func_18(Global_1393447, 32768))
	{
		func_19(Global_1393447, 32768);
	}
	if (func_43())
	{
		if (func_30(&Local_179, 4))
		{
			func_44(0);
			func_45(&Local_179, 4);
		}
	}
	fVar0 = 8f;
	if (Local_179.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!func_46() && !func_47(&(Local_179.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !func_48())
	{
		func_40(&(Local_179.f_250), 0);
		return;
	}
	if (func_47(&(Local_179.f_250), fVar0))
	{
	}
	func_37(&Local_179);
	func_49();
	func_50(&Local_179, 0);
	func_51();
	func_52(&Local_179);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	func_28(&Local_179, 1);
	func_53(&Local_179, 0);
	if (Local_179.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_179.f_93);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_179.f_237))
	{
		func_54(&Local_179);
		func_55(Local_179.f_237);
	}
	func_33(&Local_179, 1);
	if (Local_179.f_95 >= 9 && Local_179.f_95 < 11)
	{
		if (func_56(Local_179.f_151))
		{
		}
		else if (func_57(Local_179.f_151, 1) || func_58(Local_179.f_151, 1))
		{
			func_59(Global_1393447, 2048);
			if (!func_60(&(Local_179.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (func_61(Local_179.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_179.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_62(Local_179.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	func_63(Local_179.f_151);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_64(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_3(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;

	if (func_65())
	{
		return 1;
	}
	if (Global_16)
	{
		return 1;
	}
	if (func_66(0, 1, 1))
	{
		return 1;
	}
	if (Local_179.f_95 <= 9 && Local_179.f_96 & 2097152 == 0)
	{
		if (func_18(Global_1393447, 2))
		{
			if (func_67(&Local_179))
			{
				func_19(Global_1393447, 2);
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	else if (Global_1393447->f_2 & 2 != 0)
	{
		func_19(Global_1393447, 2);
		return 0;
	}
	if (Local_179.f_96 & 16 != 0)
	{
		return 1;
	}
	if (Local_179.f_95 < 10 && Local_179.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (func_68())
			{
				if (!uParam0->f_8)
				{
					return 1;
				}
			}
			if (!func_69(Local_179.f_209))
			{
				if (Local_179.f_20 > 207f)
				{
					if (Local_179.f_223 == 0)
					{
						Local_179.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return 0;
					}
					else if (Local_179.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { func_70(PLAYER::PLAYER_ID()) };
						return 1;
					}
				}
				else
				{
					Local_179.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (func_71())
		{
			return 1;
		}
		if (func_72(&uVar5))
		{
			fVar4 = func_73();
			iVar3 = 0;
			while (iVar3 < Local_179.f_215)
			{
				if (&Local_179.f_9[iVar3] < fVar4)
				{
					if (func_61(&(Local_179[iVar3]), 0, 1))
					{
						return 0;
					}
				}
				iVar3++;
			}
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_95 = iParam1;
}

int func_5()
{
	return 0;
}

void func_6()
{
}

void func_7()
{
	func_74();
	func_75();
}

int func_8(struct<8> Param0, var uParam8)
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;

	if (Global_1879534->f_1)
	{
		return 0;
	}
	if (func_69(Local_179.f_209))
	{
		func_76(&(Local_179.f_152));
		func_77(&(Local_179.f_152));
		func_78(&(Local_179.f_152), 0);
		func_79(&(Local_179.f_152), 1);
		func_80(&(Local_179.f_152), 6f);
		Local_179.f_209 = { Param0 };
		Local_179.f_151 = Param0.f_3;
		Local_179.f_221 = Param0.f_4;
		Local_179.f_222 = func_81(Local_179.f_151);
		if (Param0.f_7)
		{
			func_22(&Local_179, 2);
		}
		if (!func_82(Local_179.f_151))
		{
			func_4(&Local_179, 12);
			return 0;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(Local_179.f_151, 0, Local_179.f_221) };
				vVar1 = { func_84(Local_179.f_151, 1, Local_179.f_221) };
				if (func_85())
				{
					if (func_86(&Local_179))
					{
						func_22(&Local_179, 1);
					}
				}
				if (!Local_179.f_227)
				{
					if (func_87(Local_179.f_181, 0))
					{
						Local_179.f_227 = func_88(Local_179.f_181, -1);
					}
				}
				if (func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_4(&Local_179, 13);
					return 0;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&Local_179);
						func_91(&Local_179, 8672);
					}
					PED::_RESERVE_AMBIENT_PEDS((((Local_179.f_215 + Local_179.f_216) + Local_179.f_217 * 2) + Local_179.f_219) + 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_9()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < Local_179.f_216)
	{
		iVar3 = func_92(iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < Local_179.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(&(Local_179.f_66[iVar1])))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					Local_179.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(&(Local_179.f_66[iVar1])))
					{
						bVar0 = false;
					}
				}
				iVar1++;
				STREAMING::REQUEST_MODEL(joaat("p_lantern09x"), false);
				if (!func_95())
				{
					return false;
				}
				iVar1 = 0;
				while (iVar1 < Local_179.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(&(Local_179.f_31[iVar1])))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							Local_179.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(&(Local_179.f_31[iVar1])))
							{
								bVar0 = false;
							}
						}
						iVar1++;
						if (!STREAMING::HAS_MODEL_LOADED(joaat("p_lantern09x")))
						{
							bVar0 = false;
						}
						if (!PED::_0x5E420FF293EE5472())
						{
							bVar0 = false;
						}
						return bVar0;
					}
				}
			}
		}
	}

int func_10()
{
	return 0;
}

void func_11()
{
}

int func_12()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (Local_179.f_217 <= 0)
	{
		return 1;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_98(iVar0);
	vVar2 = { func_99(iVar0) };
	fVar5 = func_100(iVar0);
	if (iVar1 != 0)
	{
		if (func_101(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return 0;
			}
		}
		Local_179.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(&(Local_179.f_49[iVar0]), 0f);
		ENTITY::SET_ENTITY_VISIBLE(&(Local_179.f_49[iVar0]), true);
		ENTITY::_0x3F08C6163A4AB1D6(&(Local_179.f_49[iVar0]));
		func_103(&(Local_179.f_49[iVar0]));
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_179.f_49[iVar0]), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_179.f_49[iVar0]), true, false);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_217)
	{
		Local_179.f_220 = 0;
		return 1;
	}
	return 0;
}

int func_13()
{
	return 1;
}

int func_14()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (Local_179.f_218 <= 0)
	{
		return 1;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_104(iVar0);
	vVar2 = { func_105(iVar0) };
	fVar5 = func_106(iVar0);
	if (iVar1 != 0)
	{
		if (func_107(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return 0;
			}
		}
		Local_179.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(Local_179.f_52[iVar0]), 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(&(Local_179.f_52[iVar0]), false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_179.f_52[iVar0]), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_179.f_52[iVar0]), true, false);
		}
		if (func_107(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(&(Local_179.f_52[iVar0]), 0);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_218)
	{
		Local_179.f_220 = 0;
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;

	if (Local_179.f_216 <= 0)
	{
		return 1;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	fVar5 = func_109(iVar0);
	uVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_40[iVar0])))
	{
		if (iVar1 != 0)
		{
			if (func_110(iVar0))
			{
				if (!func_102(&vVar2, 1, 5, 0))
				{
					return 0;
				}
			}
			if (func_93(iVar0) == func_94())
			{
				Local_179.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_179.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_0x1902C4CFCC5BE57C(&(Local_179.f_40[iVar0]), func_93(iVar0));
				PED::_0xCC8CA3E88256E58F(&(Local_179.f_40[iVar0]), 0, 1, 1, 1, 0);
			}
		}
	}
	if (func_61(&(Local_179.f_40[iVar0]), 0, 1))
	{
		func_112(&(Local_179.f_40[iVar0]), 0);
		if (func_30(&Local_179, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_84[iVar0])))
				{
					Local_179.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_lantern09x"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(Local_179.f_84[iVar0]), &(Local_179.f_40[iVar0]), iVar8, vVar9, vVar12, 0, 0, 0, 0, 1, 1, 0, 0);
					return 0;
				}
			}
		}
		func_115(&(Local_179.f_152), &(Local_179.f_40[iVar0]), 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_179.f_40[iVar0]), true);
		PED::SET_PED_CONFIG_FLAG(&(Local_179.f_40[iVar0]), 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_179.f_40[iVar0]));
		ENTITY::SET_ENTITY_VISIBLE(&(Local_179.f_40[iVar0]), false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_179.f_40[iVar0]), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_179.f_40[iVar0]), true, false);
		}
		Local_179.f_220++;
		if (Local_179.f_220 >= Local_179.f_216)
		{
			Local_179.f_220 = 0;
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	return 1;
}

int func_17()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	var uVar7;

	if (Local_179.f_215 <= 0)
	{
		return 1;
	}
	iVar0 = Local_179.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	uVar7 = func_118(Local_179.f_181);
	if (iVar1 != 0)
	{
		if (func_119(iVar0))
		{
			if (!func_102(&vVar2, 1, 5, 0))
			{
				return 0;
			}
		}
		if (iVar6 == func_94())
		{
			Local_179[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_179[iVar0] = PED::_0xEAF682A14F8E5F53(&(Local_179.f_31[iVar0]), vVar2, fVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
			{
				Local_179[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_179[iVar0]), true);
			PED::SET_PED_CONFIG_FLAG(&(Local_179[iVar0]), 277, false);
			PED::SET_PED_CONFIG_FLAG(&(Local_179[iVar0]), 6, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_179[iVar0]), 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_179[iVar0]));
			func_120(&(Local_179.f_152), &(Local_179[iVar0]));
			func_121(&(Local_179.f_152), &(Local_179[iVar0]), 0);
			ENTITY::SET_ENTITY_VISIBLE(&(Local_179[iVar0]), false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_179[iVar0]), false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_179[iVar0]), true, false);
			}
			if (Local_179.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_179[iVar0]), -401180987);
			}
			func_122(&(Local_179[iVar0]), 1);
			PED::_0xBD75500141E4725C(&(Local_179[iVar0]), uVar7);
			DECORATOR::DECOR_SET_BOOL(&(Local_179[iVar0]), "bBeatPed", true);
			func_124(func_123(&(Local_179[iVar0])), &(Local_179[iVar0]));
		}
		else
		{
			Local_179.f_220 = (Local_179.f_220 - 1);
		}
	}
	Local_179.f_220++;
	if (Local_179.f_220 >= Local_179.f_215)
	{
		Local_179.f_220 = 0;
		return 1;
	}
	return 0;
}

bool func_18(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_20()
{
	int iVar0;
	int iVar1;

	if (func_61(&(Local_179[func_125()]), 0, 1))
	{
		func_126(Local_179[func_125()], Local_179.f_49[0], -1, 1);
		func_127(&Local_179, func_125(), -1, -1);
	}
	if (func_61(&(Local_179[func_128()]), 0, 1))
	{
		func_126(Local_179[func_128()], Local_179.f_49[0], 0, 1);
		if (func_129(&uLocal_533, 16384))
		{
			func_130(&(Local_179[func_128()]), -1101297303, 100, 1, 0, 1056964608, 1065353216, 0);
		}
		else
		{
			func_130(&(Local_179[func_128()]), -594562071, 100, 1, 0, 1056964608, 1065353216, 0);
		}
		func_127(&Local_179, func_128(), -1, -1);
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (func_61(&(Local_179[iVar0]), 0, 1))
		{
			func_132(&(Local_179[iVar0]), func_131(uLocal_533, iLocal_515, iVar0), 0);
		}
		iVar0++;
	}
	iVar1 = 2;
	while (iVar1 <= 2)
	{
		if (func_61(&(Local_179[iVar1]), 0, 1))
		{
			PED::_0x7DE9692C6F64CFE8(&(Local_179[iVar1]), true, 0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[iVar1]), 98, true);
			func_127(&Local_179, iVar1, -1, -1);
		}
		iVar1++;
	}
	if (func_129(&uLocal_533, 16384))
	{
		iVar1 = 3;
		while (iVar1 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar1])))
			{
				PED::DELETE_PED(Local_179[iVar1]);
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 3;
		while (iVar1 <= 4)
		{
			if (func_61(&(Local_179[iVar1]), 0, 1))
			{
				PED::_0x7DE9692C6F64CFE8(&(Local_179[iVar1]), true, 0, 1);
				func_130(&(Local_179[iVar1]), -594562071, 100, 1, 0, 1056964608, 1065353216, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[iVar1]), 98, true);
				func_127(&Local_179, iVar1, -1, -1);
			}
			iVar1++;
		}
	}
	func_133();
	return 1;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
		{
			ENTITY::_0xA91E6CF94404E8C9(&(Local_179[iVar0]));
			if (!func_134(&Local_179, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(Local_179[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_40[iVar0])))
		{
			ENTITY::_0xA91E6CF94404E8C9(&(Local_179.f_40[iVar0]));
			if (!func_135(&Local_179, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(Local_179.f_40[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_49[iVar0])))
		{
			ENTITY::_0xA91E6CF94404E8C9(&(Local_179.f_49[iVar0]));
			ENTITY::SET_ENTITY_VISIBLE(&(Local_179.f_49[iVar0]), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_52[iVar0])))
		{
			ENTITY::SET_ENTITY_VISIBLE(&(Local_179.f_52[iVar0]), true);
		}
		iVar0++;
	}
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_96 = (uParam0->f_96 || iParam1);
}

int func_23()
{
	vector3 vVar0;

	func_136(&uLocal_30, 30f);
	func_137();
	if (iLocal_447 < 4)
	{
		if (iLocal_449 <= 4 && iLocal_447 > 0)
		{
			if (func_47(vLocal_487[5 /*3*/], 12f) && !func_129(&uLocal_533, 2048))
			{
				func_138(&uLocal_533, 8);
			}
		}
		if (func_139())
		{
			iLocal_26 = 1;
			if (func_140())
			{
				func_138(&uLocal_533, 512);
				func_141(&uLocal_533, 128);
				iLocal_447 = 4;
			}
		}
	}
	if (iLocal_447 >= 1)
	{
		if (!func_129(&uLocal_533, 16))
		{
			func_142();
		}
	}
	func_143(&Local_33);
	if (func_129(&uLocal_533, 67108864) && !func_129(&uLocal_533, 8))
	{
		if (func_144(0, 1, Global_35, 1))
		{
			func_138(&uLocal_533, 8);
		}
	}
	if (!iLocal_27)
	{
		if (func_145(&(Local_179.f_152), &(Local_179.f_49[0]), 0))
		{
			iLocal_27 = 1;
		}
	}
	switch (iLocal_447)
	{
		case 0:
			vVar0 = { func_146(Global_35, 2f) };
			if (func_147(&vVar0))
			{
				func_148();
				func_149(1);
				func_40(vLocal_487[3 /*3*/], 0);
				func_150(vLocal_487[5 /*3*/]);
				iLocal_447 = 1;
			}
			else if (func_151())
			{
				if (func_152())
				{
					func_22(&Local_179, 16);
					func_4(&Local_179, 13);
				}
			}
			break;
		case 1:
			func_153(0);
			if (func_47(vLocal_487[3 /*3*/], 0.5f))
			{
				func_154();
			}
			func_155();
			func_149(1);
			if (func_156() && func_144(0f, 1, &(Local_179[0]), 1))
			{
				if (!func_129(&uLocal_533, 256))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(&(Local_179[func_128()]), Global_35, -1, 0, 1);
					if (func_129(&uLocal_533, 16384))
					{
						if (func_129(&uLocal_533, 524288))
						{
							func_157(&(Local_179[0]), Global_35, "CALLOUT_EASY_PICKINGS_MALE", 1, 100f, -500314840);
							func_158(1891783641, &(Local_179[1]), 1);
						}
						else
						{
							func_157(&(Local_179[0]), Global_35, "CALLOUT_EASY_PICKINGS_MALE", 2, 100f, -500314840);
							func_158(1891783641, &(Local_179[1]), 1);
						}
					}
					else
					{
						func_157(&(Local_179[func_128()]), &(Local_179[func_125()]), func_159(iLocal_515), 0, 100f, -500314840);
						func_158(1891783641, &(Local_179[1]), 1);
					}
					func_138(&uLocal_533, 256);
				}
				func_150(vLocal_487[0 /*3*/]);
				iLocal_447 = 2;
			}
			break;
		case 2:
			func_154();
			func_155();
			if (func_149(0))
			{
				iLocal_447 = 3;
			}
			break;
		case 3:
			func_160();
			func_150(vLocal_487[1 /*3*/]);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_141(&uLocal_533, 128);
			iLocal_447 = 4;
			break;
		case 4:
			ENTITY::FREEZE_ENTITY_POSITION(&(Local_179.f_49[0]), true);
			func_138(&uLocal_533, 268435456);
			func_22(&Local_179, 8388608);
			return 1;
	}
	return 0;
}

float func_24()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_25(var uParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar17;

	if (!func_18(Global_1393447, 65536))
	{
		func_59(Global_1393447, 16);
		func_59(Global_1393447, 65536);
		func_22(uParam0, 2097152);
		Global_40.f_9632.f_194 = uParam0->f_151;
		func_53(uParam0, 1);
		func_161(-1, 0, 0, 0, 0);
		func_162();
		Var0.f_6 = -1082130432;
		Var0.f_7 = -1082130432;
		Var0.f_8 = -1082130432;
		Var0.f_9 = -1082130432;
		Var0.f_10 = -1082130432;
		Var0.f_11 = -1082130432;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		Var0 = -1215290486;
		Var0.f_6 = 100f;
		if (!func_69(uParam0->f_212))
		{
			Var0.f_3 = { uParam0->f_212 };
		}
		else
		{
			Var0.f_3 = { uParam0->f_209 };
		}
		if (func_56(uParam0->f_151))
		{
			Var0.f_8 = 40f;
			Var0.f_9 = 40f;
			Var0.f_7 = 40f;
		}
		else
		{
			Var0.f_8 = 120f;
			Var0.f_9 = 120f;
			Var0.f_7 = 120f;
		}
		uParam0->f_93 = EVENT::_0xCA1315C33B9A2847(&Var0);
		if (!func_43())
		{
			func_44(1);
			func_22(uParam0, 4);
		}
		if (bParam1)
		{
			func_35(1, -1, 0, 0, 0);
		}
		else
		{
			func_163();
			func_164();
		}
		if (func_56(uParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_166(func_165(-843295694), 1);
			func_33(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(uParam0->f_151));
		func_167(uParam0);
		func_168(0, 13);
		iVar17 = 0;
		while (iVar17 < uParam0->f_215)
		{
			if (func_61(uParam0[iVar17], 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0[iVar17], Global_35, -1, 0, 51, 0);
			}
			iVar17++;
		}
	}
}

void func_26()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Local_179.f_216)
	{
		if (func_61(&(Local_179.f_40[iVar1]), 0, 0))
		{
			iVar0 = PED::_0xB676EFDA03DADA52(&(Local_179.f_40[iVar1]), 0);
			if (func_61(iVar0, 0, 0))
			{
				PED::SET_PED_OWNS_ANIMAL(iVar0, &(Local_179.f_40[iVar1]), 0);
				func_169(&Local_179, iVar1, 32);
			}
		}
		iVar1++;
	}
}

void func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0[iVar0], 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0[iVar0], 127, true);
		}
		iVar0++;
	}
}

void func_28(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_30(uParam0, 33554432))
		{
			func_170(0);
			func_22(uParam0, 33554432);
		}
	}
	else if (func_30(uParam0, 33554432))
	{
		func_170(1);
		func_45(uParam0, 33554432);
	}
}

void func_29()
{
	int iVar0;

	func_40(&(Local_179.f_247), 0);
	if (func_47(&(Local_179.f_247), 5f))
	{
		func_50(&Local_179, 0);
	}
	if (func_47(&(Local_179.f_247), 3f))
	{
		func_171(&Local_179);
	}
	func_38();
	if (!func_30(&Local_179, 8388608))
	{
		if (!func_30(&Local_179, 4194304))
		{
			if (Local_179.f_181 == 2)
			{
				func_172(&Local_179, 1.1f);
			}
			else
			{
				func_172(&Local_179, 1.2f);
			}
			func_22(&Local_179, 4194304);
		}
		if (func_30(&Local_179, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_179.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_179.f_225) * 0.7f)) || iVar0 < 80)
			{
				func_172(&Local_179, 1f);
				func_22(&Local_179, 8388608);
			}
		}
	}
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0->f_96 && iParam1) != 0;
}

int func_31()
{
	int iVar0;

	func_137();
	func_173(&Local_450);
	func_174();
	if (func_47(vLocal_487[1 /*3*/], 1f))
	{
		if (func_61(&(Local_179[func_128()]), 0, 1))
		{
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(Local_179[func_128()]), false, 15f);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (!&iLocal_20[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
			{
				if (func_175(&(Local_179[iVar0])))
				{
					func_176(Local_179[iVar0], Local_33[iVar0 /*21*/], &(Local_33.f_106), 1, 1);
					iLocal_20[iVar0] = 1;
				}
			}
			else
			{
				iLocal_20[iVar0] = 1;
			}
		}
		iVar0++;
	}
	if (func_129(&uLocal_533, 32))
	{
	}
	if (iLocal_448 > 0)
	{
		if (!func_129(&uLocal_533, 4194304))
		{
			if ((func_177() || func_129(&uLocal_533, 32)) || Local_179.f_20 > 40f)
			{
				iVar0 = 0;
				while (iVar0 < Local_179.f_215)
				{
					if (func_61(&(Local_179[iVar0]), 0, 0))
					{
						func_178(&(Local_179[iVar0]));
						PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[iVar0]), 98, false);
					}
					iVar0++;
				}
				func_138(&uLocal_533, 4194304);
			}
		}
	}
	func_179(0);
	switch (iLocal_448)
	{
		case 0:
			func_180(&Local_179, 0);
			func_181();
			func_182(&uLocal_30, &(Local_179[1]), 0, 30f);
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[0])))
			{
				VEHICLE::_SET_VEHICLE_EXCLUSIVE_DRIVER_2(&(Local_179.f_49[0]), Global_35, 0);
				if (ENTITY::_0x083D497D57B7400F(&(Local_179.f_49[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(&(Local_179.f_49[0]), false);
				}
			}
			func_183();
			if (func_129(&uLocal_533, 16384))
			{
				if (func_157(&(Local_179[0]), Global_35, "CALLOUT_JUST_KILL_EM_MALE", 0, -1073741824, -500314840) || func_47(vLocal_487[1 /*3*/], 4f))
				{
					iLocal_448 = 1;
				}
			}
			else
			{
				iLocal_448 = 1;
			}
			break;
		case 1:
			if (func_184())
			{
				iLocal_448 = 2;
			}
			break;
		case 2:
			if (func_186(&Local_179, &iLocal_513, &(Local_179.f_241), func_185(uLocal_533, iLocal_515, iLocal_513), 1092616192))
			{
				iLocal_448 = 3;
			}
			break;
		case 3:
			if (ENTITY::_0x083D497D57B7400F(&(Local_179.f_49[0])))
			{
				ENTITY::FREEZE_ENTITY_POSITION(&(Local_179.f_49[0]), false);
			}
			if (func_187(&uLocal_15))
			{
				func_179(1);
				return 1;
			}
			else if (func_188(&uLocal_15, &Local_179, 0, Local_179.f_215, 2f, 0))
			{
				func_189();
				func_179(1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_32(var uParam0, bool bParam1)
{
	if (func_18(Global_1393447, 65536))
	{
		if (func_87(uParam0->f_181, 0))
		{
			func_190(uParam0->f_181, bParam1);
		}
		func_191(uParam0->f_151, bParam1);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_192(1);
		func_45(uParam0, 8192);
	}
	else
	{
		func_193(1);
		func_22(uParam0, 8192);
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_194(iParam0, iParam1, bParam2);
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

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_59(Global_1393447, 1);
	func_163();
	func_164();
	func_195((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_196() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_197();
		if (iParam1 == -1)
		{
			if (func_198(iParam0, 1))
			{
				func_199(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_198(iParam0, 2))
			{
				func_199(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_198(iParam0, 4))
			{
				func_199(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_200(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_201(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_201((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_40[iVar0])))
		{
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_40[iVar0]), 273, false);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(uParam0->f_40[iVar0])))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_49[iVar0])))
		{
			if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(&(uParam0->f_49[iVar0]), &iVar1, &iVar2))
			{
				if (iVar1 <= 0)
				{
					Jump @218; //curOff = 142
				}
				else
				{
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar3 = VEHICLE::_0xA8BA0BAE0173457B(&(uParam0->f_49[iVar0]), iVar4);
						if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
						}
						iVar4++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_37(var uParam0)
{
	if (func_30(uParam0, 16384))
	{
		if (func_61(Global_35, 0, 1))
		{
			if (!func_30(uParam0, 1024))
			{
				if (uParam0->f_181 != -1 && !func_56(uParam0->f_151))
				{
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_202(uParam0->f_181));
					func_22(uParam0, 1024);
				}
			}
		}
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (!func_135(&Local_179, iVar0, 16))
		{
			if (func_61(&(Local_179.f_40[iVar0]), 0, 0))
			{
				if (func_203(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_179.f_40[iVar0]), Local_179.f_209, 4, 0, -1f, -1, 0);
					PED::SET_PED_KEEP_TASK(&(Local_179.f_40[iVar0]), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_179.f_40[iVar0]), false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_179.f_40[iVar0]);
					func_169(&Local_179, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

int func_39(var uParam0)
{
	return func_41(uParam0);
	return 0;
}

void func_40(var uParam0, int iParam1)
{
	if (iParam1 || !func_60(uParam0))
	{
		func_150(uParam0);
	}
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;

	func_40(&(uParam0->f_241), 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 1))
		{
			if (MAP::DOES_BLIP_EXIST(&(uParam0->f_22[iVar0])))
			{
				if (func_204(uParam0[iVar0], Global_36, 1) > 40f || func_47(&(uParam0->f_241), 15f))
				{
					func_205(uParam0->f_22[iVar0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
					return 1;
				}
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_215)
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (func_47(&(Local_179.f_244), 45f) && func_206())
	{
		func_54(&Local_179);
		func_207(&(Local_179.f_244));
	}
	return 0;
}

bool func_43()
{
	return Global_1415398->f_1;
}

void func_44(int iParam0)
{
	Global_1415398->f_1 = iParam0;
}

void func_45(var uParam0, int iParam1)
{
	if (func_30(uParam0, iParam1))
	{
	}
	uParam0->f_96 = (uParam0->f_96 - (uParam0->f_96 && iParam1));
}

int func_46()
{
	return 1;
}

int func_47(var uParam0, float fParam1)
{
	if (!func_60(uParam0))
	{
		return 0;
	}
	if (func_208(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_1392040->f_6;
}

void func_49()
{
	int iVar0;

	func_209(&Local_179, 1);
	func_179(1);
	iVar0 = 0;
	while (iVar0 < iLocal_517)
	{
		if (CAM::DOES_CAM_EXIST(&(iLocal_517[iVar0])))
		{
			CAM::DESTROY_CAM(&(iLocal_517[iVar0]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_523)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_523[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(iLocal_523[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
		{
			func_176(Local_179[iVar0], Local_33[iVar0 /*21*/], &(Local_33.f_106), 1, 1);
		}
		iVar0++;
	}
	if (ENTITY::_0x083D497D57B7400F(&(Local_179.f_49[0])))
	{
		ENTITY::FREEZE_ENTITY_POSITION(&(Local_179.f_49[0]), false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_210(&uLocal_30, &Local_179);
	func_181();
	MAP::DISPLAY_RADAR(true);
}

void func_50(var uParam0, int iParam1)
{
	if (!func_30(uParam0, 256))
	{
		if (func_30(uParam0, 32) || iParam1)
		{
			if (func_61(uParam0->f_56, 0, 1))
			{
				func_211(uParam0->f_56, 0);
				func_22(uParam0, 256);
			}
		}
	}
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_179.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
		{
			if (func_212(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(&(Local_179[iVar0]));
				PED::DELETE_PED(Local_179[iVar0]);
			}
			else
			{
				if (func_61(&(Local_179[iVar0]), 0, 0))
				{
					if (!func_30(&Local_179, 16384))
					{
						func_213(Local_179[iVar0]);
					}
					func_122(&(Local_179[iVar0]), 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[iVar0]), 5, true);
					PED::_0x24C82EF607105FAA(&(Local_179[iVar0]), -920810745);
					PED::_0xB8B6430EAD2D2437(&(Local_179[iVar0]), 993130593);
					if (func_214(&(Local_179[iVar0])))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_179[iVar0]), -401180987);
					}
					PED::_0x7DE9692C6F64CFE8(&(Local_179[iVar0]), false, 0, 0);
					if ((PED::IS_PED_IN_COMBAT(&(Local_179[iVar0]), Global_35) || PED::IS_PED_FLEEING(&(Local_179[iVar0]))) || func_134(&Local_179, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(&(Local_179[iVar0]), 0))
						{
							TASK::CLEAR_PED_TASKS(&(Local_179[iVar0]), 0, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(&(Local_179[iVar0]), Global_35, 4, iVar1, -1082130432, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(&(Local_179[iVar0]), true);
					}
					else if ((Local_179.f_215 == Local_179.f_216 && func_61(&(Local_179.f_40[iVar0]), 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(&(Local_179[iVar0]), true))
					{
						iVar11 = &Local_179.f_40[iVar0];
						PED::SET_PED_OWNS_ANIMAL(&(Local_179.f_40[iVar0]), iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, &(Local_179.f_40[iVar0]), 20000, -1, 2f, 1, 0, 0);
						if (!func_69((Local_179.f_118[iVar0 /*4*/])->f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (Local_179.f_118[iVar0 /*4*/])->f_1, 2f, 20000, 0.25f, false, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						func_215(&(Local_179[iVar0]), &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(&(Local_179[iVar0]), true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(&(Local_179[iVar0]), true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(&(Local_179[iVar0]), true)))
						{
							if (PED::_0x4E76CB57222A00E5(&(Local_179[iVar0])) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(&(Local_179[iVar0]), true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!func_69((Local_179.f_118[iVar0 /*4*/])->f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, (Local_179.f_118[iVar0 /*4*/])->f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								func_215(&(Local_179[iVar0]), &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(&(Local_179[iVar0])))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!func_69((Local_179.f_118[iVar0 /*4*/])->f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (Local_179.f_118[iVar0 /*4*/])->f_1, 2f, 20000, 0.25f, false, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							func_215(&(Local_179[iVar0]), &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(&(Local_179[iVar0]), true);
						}
						else
						{
							if (func_216(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432, -1, 0);
								func_215(&(Local_179[iVar0]), &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(&(Local_179[iVar0]), 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								func_215(&(Local_179[iVar0]), &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(&(Local_179[iVar0]), true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(&(Local_179[iVar0]), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(&(Local_179[iVar0])), -1) == &Local_179[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_179[iVar0]);
				}
				else if ((!PED::IS_PED_FLEEING(&(Local_179[iVar0])) && !PED::IS_PED_IN_COMBAT(&(Local_179[iVar0]), Global_35)) && !func_134(&Local_179, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(&(Local_179[iVar0]), -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_179[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_40[iVar0])))
		{
			if (func_217(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_84[iVar0])))
				{
					OBJECT::DELETE_OBJECT(Local_179.f_84[iVar0]);
				}
				PED::DELETE_PED(Local_179.f_40[iVar0]);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_84[iVar0])))
				{
					if (func_218(iVar0))
					{
						OBJECT::DELETE_OBJECT(Local_179.f_84[iVar0]);
					}
					else
					{
						ENTITY::DETACH_ENTITY(&(Local_179.f_84[iVar0]), true, true);
						PHYSICS::ACTIVATE_PHYSICS(&(Local_179.f_84[iVar0]));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_179.f_84[iVar0]);
					}
				}
				if (func_61(&(Local_179.f_40[iVar0]), 0, 1))
				{
					if (func_60(&(Local_179.f_247)))
					{
						if (!func_61(PED::_0xB676EFDA03DADA52(&(Local_179.f_40[iVar0]), 0), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_179.f_40[iVar0]), Local_179.f_209, 4, 0, -1f, -1, 0);
							PED::SET_PED_KEEP_TASK(&(Local_179.f_40[iVar0]), true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_ACTIVE_ANIMAL_OWNER(&(Local_179.f_40[iVar0]))) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(&(Local_179.f_40[iVar0]), 1)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_179.f_40[iVar0]), Local_179.f_209, 4, 0, -1f, -1, 0);
						PED::SET_PED_KEEP_TASK(&(Local_179.f_40[iVar0]), true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_179.f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_49[iVar0])))
		{
			if (func_219(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(Local_179.f_49[iVar0]);
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == &Local_179.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == &Local_179.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(Local_179.f_49[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_179.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_52[iVar0])))
		{
			if (func_220(&Local_179, &(Local_179.f_52[iVar0])))
			{
				OBJECT::DELETE_OBJECT(Local_179.f_52[iVar0]);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_179.f_52[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	if (!func_30(uParam0, 128))
	{
		return;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_221(joaat("g_m_m_uniduster_01"));
			func_221(joaat("g_m_m_uniduster_03"));
			break;
		case 2:
			func_221(joaat("g_m_o_uniexconfeds_01"));
			func_221(joaat("g_m_y_uniexconfeds_01"));
			break;
		case 1:
			func_221(joaat("g_m_m_uniinbred_01"));
			break;
		case 3:
			func_221(joaat("g_m_m_unimountainmen_01"));
			break;
		case 4:
			func_221(joaat("g_m_m_uniranchers_01"));
			break;
		case 5:
			func_221(joaat("g_m_m_unibanditos_01"));
			break;
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		func_22(uParam0, 65536);
	}
	else
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		func_45(uParam0, 65536);
	}
}

void func_54(var uParam0)
{
	float fVar0;

	fVar0 = func_222(uParam0->f_151);
	func_223(uParam0, fVar0);
}

void func_55(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	func_224(vVar0, 0);
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 11:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_57(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		if (&Global_40.f_9632[iParam0 /*4*/] > 0)
		{
			if (&Global_40.f_9632[iParam0 /*4*/] >= func_225(iParam0))
			{
				return true;
			}
			Var2 = { func_165(85200619) };
			if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
			{
				iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
				if (iVar1 >= (Global_40.f_9632[iParam0 /*4*/])->f_3)
				{
					return false;
				}
			}
		}
	}
	return &Global_40.f_9632[iParam0 /*4*/] > 0;
}

int func_58(int iParam0, bool bParam1)
{
	if (func_57(iParam0, bParam1))
	{
		return 1;
	}
	if ((Global_40.f_9632[iParam0 /*4*/])->f_1 == 0)
	{
		return 0;
	}
	if (!bParam1)
	{
		return (Global_40.f_9632[iParam0 /*4*/])->f_1 > 0;
	}
	if (func_226(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_60(var uParam0)
{
	return func_227(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_228(iParam0, iParam1);
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GAORP";
		case 1:
		case 2:
		case 36:
			return "GALOA";
		case 3:
		case 4:
		case 38:
			return "GAOWA";
		case 5:
		case 35:
			return "GAOBT";
		case 6:
			return "GAOBB";
		case 42:
			return "GAOBB";
		case 7:
		case 41:
			return "GAOBA";
		case 8:
		case 40:
			return "GAORR";
		case 9:
		case 10:
		case 37:
			return "GAROA";
		case 11:
			return "GALPC";
		case 12:
			return "GALOA";
		case 13:
			return "GAEWB";
		case 14:
			return "GAEWT";
		case 15:
			return "GALBT";
		case 16:
			return "GAHCA";
		case 17:
		case 39:
			return "GAROR";
		case 18:
			return "GAIFA";
		case 19:
			return "GAIFA";
		case 21:
			return "GAMFA";
		case 20:
			return "GAMHA";
		case 23:
			return "GAMBA";
		case 22:
			return "GAMRA";
		case 24:
			return "GASBF";
		case 25:
			return "GATLA";
		case 28:
			return "GASLA";
		case 26:
			return "GASRA";
		case 27:
			return "GASFA";
		case 29:
			return "GALHA";
		case 30:
			return "GALHA";
		case 31:
			return "GABCA";
		case 32:
			return "GABSA";
		case 33:
			return "GABRA";
		case 34:
			return "GAGNR";
		case 43:
			return "GAPTO";
		default:
			break;
	}
	return "";
}

void func_63(var uParam0)
{
	Global_1393447->f_49 = -1;
}

int func_64(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_229(iVar0))
	{
		return 0;
	}
	if (func_230(iVar0, 1) || func_230(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	return 0;
}

int func_66(int iParam0, bool bParam1, int iParam2)
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
		if (func_231())
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
		iVar0 = func_232(&(Global_1898164->f_1[0 /*5*/]));
		if (func_233(iVar0) && func_234(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_235(&(Global_1898164->f_1[0 /*5*/])))
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

int func_67(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
		{
			if (func_134(uParam0, iVar0, 8))
			{
				if (func_236(uParam0[iVar0], Global_36, 1) < (70f * 70f) || func_237(uParam0[iVar0], 70f, -1082130432, -1082130432, -1082130432))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68()
{
	if (func_66(0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_69(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_70(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_71()
{
	int iVar0;

	if (!func_30(&Local_179, 16384))
	{
		return 0;
	}
	iVar0 = func_238();
	switch (iVar0)
	{
		case 105:
			if (func_239() && func_240())
			{
				return 1;
			}
			break;
		case 95:
			if (func_239() && func_240())
			{
				return 1;
			}
			break;
	}
	if (func_240())
	{
		if (Local_179.f_151 != 43)
		{
			if (func_241())
			{
				if (func_242(iVar0))
				{
					return 0;
				}
				switch (iVar0)
				{
					case 82:
						return 0;
					case 5:
					case 22:
					case 26:
					case 35:
					case 38:
					case 56:
					case 69:
					case 76:
					case 78:
					case 92:
					case 105:
					case 115:
					case 120:
						func_40(&(Local_179.f_253), 0);
						if (func_47(&(Local_179.f_253), 0.5f))
						{
							return 1;
						}
						break;
				}
			}
		}
	}
	return 0;
}

int func_72(var uParam0)
{
	if (Local_179.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_179.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_179.f_20 > *uParam0)
	{
		return 1;
	}
	switch (Local_179.f_151)
	{
		case 29:
		case 30:
			if (Local_179.f_95 < 10)
			{
				return 1;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&Local_179, 512) && !func_30(&Local_179, 16384))
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_73()
{
	if (iLocal_448 > 0)
	{
		return (140f * 0.75f);
	}
	return 140f;
}

void func_74()
{
	if (Local_179.f_95 <= 8)
	{
		Local_179.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
		if (Local_179.f_21 == 0f || Local_179.f_21 > Local_179.f_20)
		{
			Local_179.f_21 = Local_179.f_20;
		}
		return;
	}
	if (Local_179.f_18 < 0)
	{
		Local_179.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_179.f_209, true);
		if (Local_179.f_21 == 0f || Local_179.f_21 > Local_179.f_20)
		{
			Local_179.f_21 = Local_179.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[Local_179.f_18])))
	{
		Local_179.f_9[Local_179.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(&(Local_179[Local_179.f_18]), false, true));
	}
	Local_179.f_18++;
	if (Local_179.f_18 >= Local_179.f_215)
	{
		Local_179.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;

	if (Local_179.f_19 < Local_179.f_215)
	{
		iVar0 = Local_179.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar0])))
		{
			if (!func_134(&Local_179, iVar0, 8))
			{
				if (func_237(&(Local_179[iVar0]), 200f, -1082130432, &(Local_179.f_9[iVar0]), -1082130432))
				{
					func_243(&Local_179, iVar0, 8);
				}
			}
		}
	}
	else if (Local_179.f_19 < (Local_179.f_215 + Local_179.f_216))
	{
		iVar0 = (Local_179.f_19 - Local_179.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_40[iVar0])))
		{
			if (!func_135(&Local_179, iVar0, 8))
			{
				if (func_237(&(Local_179.f_40[iVar0]), 200f, -1082130432, -1082130432, -1082130432))
				{
					func_169(&Local_179, iVar0, 8);
				}
			}
		}
	}
	else if (Local_179.f_19 < ((Local_179.f_215 + Local_179.f_216) + Local_179.f_217))
	{
		iVar0 = ((Local_179.f_19 - Local_179.f_215) - Local_179.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_49[iVar0])))
		{
			if (!func_244(&Local_179, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(&(Local_179.f_49[iVar0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[iVar0])))
				{
					if (func_245(&(Local_179.f_49[iVar0]), 200f, -1082130432))
					{
						func_246(&Local_179, iVar0, 8);
					}
				}
			}
		}
	}
	Local_179.f_19++;
	if (Local_179.f_19 >= ((Local_179.f_215 + Local_179.f_216) + Local_179.f_217))
	{
		Local_179.f_19 = 0;
	}
}

void func_76(var uParam0)
{
	func_248(uParam0, (func_247(uParam0) - 6f));
	func_249(uParam0, 1);
}

void func_77(var uParam0)
{
	func_250(uParam0, 0);
	func_251(uParam0, 0);
	func_78(uParam0, 1);
	func_252(uParam0, 1);
	func_253(uParam0, 0);
	func_254(uParam0, 1);
	func_255(uParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 256);
	}
	else
	{
		func_257(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 4);
	}
	else
	{
		func_257(&(uParam0->f_1), 4);
	}
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

var func_81(int iParam0)
{
	return &(Global_40.f_9632[iParam0 /*4*/]);
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 36:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 38:
			return 1;
		case 5:
			return 1;
		case 35:
			return 1;
		case 6:
			return 1;
		case 42:
			return 1;
		case 7:
			return 1;
		case 41:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 37:
			return 1;
		case 8:
			return 1;
		case 40:
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
		case 15:
			return 1;
		case 17:
			return 1;
		case 39:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 23:
			return 1;
		case 22:
			return 1;
		case 21:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 28:
			return 1;
		case 26:
			return 1;
		case 27:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 43:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_83()
{
	bool bVar0;

	switch (Local_179.f_221)
	{
		case 1:
			func_138(&uLocal_533, 64);
			func_22(&Local_179, 16);
			return 1;
		default:
			break;
	}
	switch (Local_179.f_151)
	{
		case 38:
			func_138(&uLocal_533, 16384);
			func_138(&uLocal_533, 524288);
			break;
		case 4:
			func_138(&uLocal_533, 16384);
			if (func_258(0) || func_30(&Local_179, 2))
			{
				func_138(&uLocal_533, 524288);
			}
			break;
	}
	Local_179.f_215 = 5;
	Local_179.f_217 = 1;
	Local_179.f_218 = 0;
	if (func_129(&uLocal_533, 16384))
	{
		Local_179.f_216 = 1;
	}
	else
	{
		Local_179.f_216 = 0;
	}
	if (func_129(&uLocal_533, 524288))
	{
		Local_179.f_181 = -1;
	}
	else
	{
		Local_179.f_181 = 0;
	}
	iLocal_515 = (Local_179.f_222 % 2);
	if (!func_129(&uLocal_533, 64))
	{
		bVar0 = func_259();
	}
	else
	{
		bVar0 = func_260();
	}
	if (bVar0)
	{
		func_261(&Local_179, &Local_33);
		func_22(&Local_179, 131072);
		func_262();
		func_79(&(Local_179.f_152), 1);
		func_263(&(Local_179.f_152), 1);
		func_264(&(Local_179.f_152), 1);
		func_265(&(Local_179.f_152), 1);
		func_251(&(Local_179.f_152), 1);
		Local_179.f_212 = { func_266(uLocal_533, 0) };
		return 1;
	}
	func_4(&Local_179, 12);
	return 0;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;

	func_267(iParam0, iParam1, &vVar0, &uVar3, iParam2);
	return vVar0;
}

int func_85()
{
	return 0;
}

int func_86(var uParam0)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20)
	{
		return 1;
	}
	if (iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_87(int iParam0, bool bParam1)
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

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_268(iParam0, 1))
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
		iVar0 = func_269(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

int func_89(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_270(bParam1, iParam2, bParam3);
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

void func_90(var uParam0)
{
	float fVar0;

	fVar0 = func_222(uParam0->f_151);
	func_271(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	func_272(uParam0->f_238, iParam1, 262144, 1, 0);
}

int func_92(int iParam0)
{
	if (&Local_179.f_57[iParam0] == 0)
	{
		if (!func_87(Local_179.f_181, 1))
		{
			Local_179.f_57[iParam0] = func_273(997958153, 1);
		}
		else
		{
			Local_179.f_57[iParam0] = func_274(Local_179.f_181, 0, 1);
		}
	}
	return &(Local_179.f_57[iParam0]);
}

int func_93(int iParam0)
{
	if (&Local_179.f_75[iParam0] == 0)
	{
		if (Local_179.f_181 != -1 && Local_179.f_181 != 1)
		{
			Local_179.f_75[iParam0] = func_275(Local_179.f_181, iParam0, 0);
		}
		else
		{
			Local_179.f_75[iParam0] = func_94();
		}
		if (&Local_179.f_75[iParam0] == 1268180497)
		{
			Local_179.f_75[iParam0] = func_94();
		}
	}
	return &(Local_179.f_75[iParam0]);
}

int func_94()
{
	return 41788943;
}

int func_95()
{
	char* sVar0;
	int iVar1;

	sVar0 = func_276(uLocal_533);
	STREAMING::REQUEST_MODEL(func_97(0), false);
	PROPSET::_REQUEST_PROPSET(-1010941253);
	STREAMING::REQUEST_MODEL(func_98(0), false);
	TASK::REQUEST_WAYPOINT_RECORDING(sVar0);
	iVar1 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(func_97(0)) || !STREAMING::HAS_MODEL_LOADED(func_98(0)))
	{
		iVar1 = 0;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(-1010941253))
	{
		iVar1 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar1 = 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0))
	{
		iVar1 = 0;
	}
	return iVar1;
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_277(iVar0);
}

int func_97(int iParam0)
{
	if (func_258(0) || func_129(&uLocal_533, 524288))
	{
		return joaat("g_m_m_unicriminals_01");
	}
	return joaat("g_m_m_uniduster_01");
}

int func_98(int iParam0)
{
	return func_278(iParam0);
}

Vector3 func_99(int iParam0)
{
	return func_279(uLocal_533, iParam0);
}

float func_100(int iParam0)
{
	return func_280(uLocal_533, iParam0);
}

int func_101(int iParam0)
{
	return 1;
}

int func_102(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_281(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_103(int iParam0)
{
	char* sVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

int func_104(var uParam0)
{
	return 0;
}

Vector3 func_105(var uParam0)
{
	return 0f, 0f, 0f;
}

float func_106(var uParam0)
{
	return 0f;
}

int func_107(int iParam0)
{
	return 1;
}

Vector3 func_108(int iParam0)
{
	return func_282(uLocal_533, iParam0);
}

float func_109(int iParam0)
{
	return func_283(uLocal_533, iParam0);
}

int func_110(int iParam0)
{
	return 1;
}

int func_111(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_284(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_285(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_113(int iParam0)
{
	return 0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 0:
			if ((iParam0 % 2) == 0)
			{
				iParam1 = 1;
			}
			else
			{
				iParam1 = 2;
			}
			break;
	}
	switch (iParam1)
	{
		case 1:
			*uParam2 = { -0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, 50f, 90f };
			break;
		case 2:
			*uParam2 = { 0.31f, 0.03f, -0.22f };
			*uParam3 = { 0f, -50f, 90f };
			break;
	}
	*uParam4 = PED::GET_PED_BONE_INDEX(&(Local_179.f_40[iParam0]), 62111);
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

Vector3 func_116(int iParam0)
{
	return func_286(uLocal_533, iParam0);
}

var func_117(int iParam0)
{
	return func_287(uLocal_533, iParam0);
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -651526383;
		case 2:
			return 114942645;
		case 1:
			return 1846188867;
		case 4:
			return -87251158;
		case 3:
			return -61242338;
		case 5:
			return 744552419;
		case 10:
			return -655472496;
		default:
			break;
	}
	return 353608996;
}

int func_119(int iParam0)
{
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_122(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", true);
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber"))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "bValidRobber", false);
	}
}

int func_123(int iParam0)
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

void func_124(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	if (!func_61(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_ACCURACY(iParam1, 20);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 1);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 110);
			PED::SET_PED_SHOOT_RATE(iParam1, iVar1);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 3);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.25f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			break;
		case 1:
			PED::SET_PED_ACCURACY(iParam1, 15);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, false);
			break;
	}
}

int func_125()
{
	if (func_129(&uLocal_533, 64))
	{
		if (func_129(&uLocal_533, 2))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_126(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *uParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
		{
			if (iParam3 && func_288(*uParam1))
			{
				iParam2 = func_289(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*uParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*uParam0, *uParam1, iParam2);
	}
	return 1;
}

void func_127(var uParam0, int iParam1, int iParam2, int iParam3)
{
	PED::SET_PED_FIRING_PATTERN(uParam0[iParam1], -687903391);
	PED::_0x20E54854DEF6A54A(uParam0[iParam1], 40051185);
	switch (uParam0->f_181)
	{
		case 2:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], 80);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], 65);
			}
			break;
		case 0:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], 50);
			}
			break;
		case 1:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], 110);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], 40);
			}
			break;
		case 5:
			if (iParam3 >= 0)
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], iParam3);
			}
			else
			{
				PED::SET_PED_SHOOT_RATE(uParam0[iParam1], 100);
			}
			if (iParam2 >= 0)
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], iParam2);
			}
			else
			{
				PED::SET_PED_ACCURACY(uParam0[iParam1], 45);
			}
			break;
	}
}

int func_128()
{
	if (func_129(&uLocal_533, 64))
	{
		if (func_129(&uLocal_533, 2))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 1;
}

bool func_129(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_290(iParam3, 1);
	bVar1 = func_290(iParam3, 2);
	bVar2 = !func_290(iParam3, 4);
	bVar3 = func_290(iParam3, 8);
	bVar4 = !func_290(iParam3, 16);
	bVar5 = func_290(iParam3, 32);
	bVar6 = func_290(iParam3, 64);
	return func_291(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

char[] func_131(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_292(uParam0, iParam1, iParam2);
	return func_293(iVar0);
}

void func_132(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_133()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3[2];
	float fVar10;

	if (ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[0])))
	{
		return;
	}
	iVar0 = 6;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(&(Local_179.f_49[0]), iVar1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(&(Local_179.f_49[0]), iVar1, true);
		}
		iVar1++;
	}
	sVar2 = func_276(uLocal_533);
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 0, vVar3[0 /*3*/]);
	TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 1, vVar3[1 /*3*/]);
	func_102(vVar3[0 /*3*/], 1, 10, 0);
	fVar10 = func_294(*(vVar3[0 /*3*/]), *(vVar3[1 /*3*/]), 1);
	ENTITY::_0x203BEFFDBE12E96A(&(Local_179.f_49[0]), *(vVar3[0 /*3*/]), fVar10, 1, 0, 1);
	PROPSET::_0xD80FAF919A2E56EA(&(Local_179.f_49[0]), -1010941253);
	func_246(&Local_179, 0, 4);
}

bool func_134(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_135(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_106[iParam1] && iParam2) != 0;
}

void func_136(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630->f_58 != *uParam0)
		{
			if (func_61(Global_1935630->f_58, 0, 1) && func_295(Global_1935630->f_58))
			{
				func_182(uParam0, *uParam0, 0, fParam1);
				func_182(uParam0, Global_1935630->f_58, 1, fParam1);
			}
		}
	}
}

void func_137()
{
	if (func_129(&uLocal_533, 128))
	{
		if (func_296(Global_35))
		{
			PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 53, true);
		}
	}
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_139()
{
	int iVar0;

	if (func_129(&uLocal_533, 8))
	{
		return 1;
	}
	if (iLocal_26)
	{
		return 1;
	}
	if (func_30(&Local_179, 33554432))
	{
		if (func_297(&Local_179))
		{
			return 1;
		}
	}
	if (func_298(&Local_179, &(Local_179.f_152), &(Local_179.f_180), &uLocal_514, 0, 5, 1) || func_299(&(Local_179.f_49[0]), &uLocal_514))
	{
		if (func_299(&(Local_179.f_49[0]), &uLocal_514))
		{
		}
		if (func_129(&uLocal_533, 16384))
		{
			if (!func_129(&uLocal_533, 16777216))
			{
				func_181();
				func_182(&uLocal_30, &(Local_179[1]), 0, 30f);
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				func_138(&uLocal_533, 16777216);
			}
		}
		if (!func_129(&uLocal_533, 33554432))
		{
			iVar0 = 0;
			while (iVar0 < Local_179.f_215)
			{
				if (PED::GET_PED_RESET_FLAG(&(Local_179[iVar0]), 27))
				{
					PED::SET_PED_RESET_FLAG(&(Local_179[iVar0]), 27, false);
				}
				iVar0++;
			}
			func_138(&uLocal_533, 33554432);
		}
		return 1;
	}
	if (func_300())
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_523[8])))
		{
			if (func_301(Global_35, &(iLocal_523[8]), 1, 0))
			{
				func_40(vLocal_487[4 /*3*/], 0);
				func_138(&uLocal_533, 32);
			}
		}
		return 1;
	}
	return 0;
}

int func_140()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = func_129(&uLocal_533, 1024);
	iVar3 = 1;
	switch (iLocal_516)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[0])))
			{
				VEHICLE::_SET_VEHICLE_EXCLUSIVE_DRIVER_2(&(Local_179.f_49[0]), Global_35, 0);
			}
			if (func_129(&uLocal_533, 32))
			{
				if (func_61(&(Local_179[3]), 0, 1))
				{
					func_303(&(Local_179[3]), func_302(uLocal_533, 3));
					ENTITY::SET_ENTITY_HEADING(&(Local_179[3]), func_304(uLocal_533, 3));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_179[3]), func_305(uLocal_533, 3), 3f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[3]), 45, true);
				}
				if (func_61(&(Local_179[4]), 0, 1))
				{
					func_303(&(Local_179[4]), func_302(uLocal_533, 4));
					ENTITY::SET_ENTITY_HEADING(&(Local_179[4]), func_304(uLocal_533, 4));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_179[4]), func_305(uLocal_533, 4), 1f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[4]), 45, true);
				}
			}
			func_150(vLocal_487[1 /*3*/]);
			func_306(Local_179.f_151, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_307();
			func_138(&uLocal_533, 16);
			iLocal_516 = 1;
			iVar3 = 0;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_179.f_215)
			{
				if (func_61(&(Local_179[iVar0]), 0, 1))
				{
					if (func_144(0, 1, &(Local_179[iVar0]), 1))
					{
						if (!func_308(uLocal_534[iVar0], 1))
						{
							if (iVar0 < 3)
							{
								PED::_0x1854217C640B39EC(&(Local_179[iVar0]), Global_35, 0f, 0f, 0f, 15f, 0, 0);
							}
							PED::_0x7DE9692C6F64CFE8(&(Local_179[iVar0]), false, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (PED::IS_PED_IN_ANY_VEHICLE(&(Local_179[iVar0]), true))
							{
								if (!ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[0])))
								{
									TASK::TASK_LEAVE_VEHICLE(0, &(Local_179.f_49[0]), 1, 0);
								}
							}
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							func_215(&(Local_179[iVar0]), &iVar1, 0.2f, 0, 1, 1);
							func_309(uLocal_534[iVar0], 1);
							if (!bVar2)
							{
								if (!func_129(&uLocal_533, 16384))
								{
									if (iLocal_449 < 1)
									{
										func_157(&(Local_179[iVar0]), Global_35, func_310(iLocal_515), 0, 100f, 1744022339);
									}
									else
									{
										func_157(&(Local_179[iVar0]), Global_35, func_311(iLocal_515), 0, 100f, 1744022339);
									}
								}
								else
								{
									func_157(&(Local_179[iVar0]), Global_35, "CALLOUT_JUST_KILL_EM_MALE", 0, -1073741824, 1744022339);
								}
								bVar2 = true;
							}
							func_312(&(Local_179[iVar0]), Local_179.f_22[iVar0], 831283580, 0, 0, 0);
							func_313(Local_179[iVar0]);
						}
					}
					else
					{
						iVar3 = 0;
					}
				}
				iVar0++;
			}
			break;
	}
	return iVar3;
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_142()
{
	int iVar0;
	vector3 vVar1;

	if (func_204(&(Local_179[func_125()]), func_266(uLocal_533, 0), 0) < 4f || (!func_314(&(Local_179[func_125()]), -1817882002) && func_204(&(Local_179[func_125()]), func_266(uLocal_533, 0), 0) < (4f + 3f)))
	{
		if (func_204(&(Local_179[func_125()]), func_266(uLocal_533, 0), 0) < 1.5f)
		{
			func_207(vLocal_487[6 /*3*/]);
		}
		if (!func_129(&uLocal_533, 2048))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_49[0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[0])))
			{
				if (ENTITY::GET_ENTITY_SPEED(&(Local_179.f_49[0])) < 1.2f)
				{
					func_138(&uLocal_533, 2048);
				}
			}
		}
		if (func_129(&uLocal_533, 2048))
		{
			if (!func_129(&uLocal_533, 1024))
			{
				if (((func_144(-3f, 1, 0, 0) && func_144(0f, 1, &(Local_179[0]), 1)) && func_144(0f, 1, &(Local_179[func_128()]), 1)) && func_129(&uLocal_533, 256))
				{
					vVar1 = { func_315(uLocal_533, 0) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (func_129(&uLocal_533, 16384))
					{
						TASK::TASK_LEAVE_VEHICLE(0, &(Local_179.f_49[0]), 67240001, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					}
					else
					{
						if (0 == func_128())
						{
							TASK::TASK_LEAVE_VEHICLE(0, &(Local_179.f_49[0]), 67240001, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					}
					func_215(&(Local_179[0]), &iVar0, 0.5f, 0, 1, 1);
					if (!func_129(&uLocal_533, 16384) && !func_308(uLocal_534[0], 1))
					{
						func_309(uLocal_534[0], 1);
					}
					vVar1 = { func_315(uLocal_533, 1) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (func_129(&uLocal_533, 16384))
					{
						TASK::TASK_LEAVE_VEHICLE(0, &(Local_179.f_49[0]), 262209, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					}
					else
					{
						if (1 == func_128())
						{
							TASK::TASK_LEAVE_VEHICLE(0, &(Local_179.f_49[0]), 67371105, 0);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					}
					func_215(&(Local_179[1]), &iVar0, 0, 0, 1, 1);
					if (!func_129(&uLocal_533, 16384) && !func_308(uLocal_534[1], 1))
					{
						func_309(uLocal_534[1], 1);
					}
					func_150(vLocal_487[5 /*3*/]);
					func_207(vLocal_487[5 /*3*/]);
					if (func_129(&uLocal_533, 16384))
					{
						vLocal_540 = { func_146(Global_35, 1.1f) };
						if (!bLocal_28)
						{
							func_157(&(Local_179[0]), Global_35, "HOLD_IT", 1, 100f, -500314840);
						}
					}
					else
					{
						func_157(&(Local_179[func_128()]), &(Local_179[func_125()]), func_311(iLocal_515), 0, 100f, -500314840);
					}
					func_138(&uLocal_533, 1024);
					func_138(&uLocal_533, 512);
				}
			}
		}
	}
	if (func_129(&uLocal_533, 16384) && func_129(&uLocal_533, 1024))
	{
		if (!func_129(&uLocal_533, 65536) && !func_129(&uLocal_533, 67108864))
		{
			if (func_144(-5f, 1, 0, 0) && func_144(0f, 1, &(Local_179[0]), 1))
			{
				if (!bLocal_28)
				{
					func_157(&(Local_179[0]), Global_35, "GANG_INTERACT_APPROACH_TOLL", 1, 100f, 1744022339);
				}
				func_138(&uLocal_533, 65536);
			}
		}
	}
}

int func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar5 = 524288 | func_316(3, 0, 0);
	iVar6 = 1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_179[iVar1])))
		{
		}
		else
		{
			iVar0 = func_317(Local_179[iVar1], (*uParam0)[iVar1 /*21*/], 30f, &(uParam0->f_106), &iVar6, 4f, 1, 0, 0, iVar5, 0, 0, 2, 1, -1082130432, 0);
			if (func_318((*uParam0)[iVar1 /*21*/]))
			{
				if (!uParam0->f_145)
				{
					if (uParam0->f_142 == -1)
					{
						uParam0->f_142 = iVar1;
					}
					iVar4 = ((*uParam0)[iVar1 /*21*/])->f_1;
					switch (iVar4)
					{
						case 0:
							func_319(&(uParam0->f_106), 1, 1);
							break;
						case 1:
							func_138(&uLocal_533, 67108864);
							func_319(&(uParam0->f_106), 1, 1);
							break;
					}
					switch (iVar4)
					{
						case 0:
						case 1:
							func_320(uParam0, 0, 1);
							break;
					}
					iVar2 = 0;
					while (iVar2 <= 5)
					{
						if (func_61(&(Local_179[iVar2]), 0, 1))
						{
							func_321(&(Local_179[iVar2]), 500);
						}
						iVar2++;
					}
					uParam0->f_145 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				uParam0->f_141 = iVar3;
				switch (iVar3)
				{
					case 0:
						break;
					case 1:
						uParam0->f_144++;
						break;
				}
				uParam0->f_145 = 0;
			}
		}
		iVar1++;
	}
	return iVar3;
}

int func_144(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_322(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_323(fParam0))
	{
		return 0;
	}
	return 1;
}

int func_145(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = -1;
	if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iParam1, &iVar0, &iVar1))
	{
		if (iVar0 <= 0)
		{
			return 1;
		}
		else if (iVar1 == iVar0)
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = VEHICLE::_0xA8BA0BAE0173457B(iParam1, iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_115(uParam0, iVar3, iParam2);
				}
				iVar2++;
			}
			return 1;
		}
	}
	return 0;
}

Vector3 func_146(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_324(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_147(var uParam0)
{
	if (func_325(&(iLocal_523[4]), *uParam0))
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	char* sVar0;
	int iVar1;

	if (func_61(&(Local_179[0]), 0, 1) && (ENTITY::DOES_ENTITY_EXIST(&(Local_179.f_49[0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_179.f_49[0]))))
	{
		sVar0 = func_276(uLocal_533);
		iVar1 = 520;
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(&(Local_179[0]), &(Local_179.f_49[0]), sVar0, 0, 0, iVar1, -1, -1082130432, 0, 1073741824, 0);
		func_326(&(Local_179.f_49[0]), Global_35, 10);
		if (func_129(&uLocal_533, 16384))
		{
			func_157(&(Local_179[0]), Global_35, "ARRIVAL_ENTER_TRAP", 1, -1073741824, -500314840);
		}
		func_25(&Local_179, 1);
		func_32(&Local_179, 1);
	}
}

int func_149(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_173(&Local_450);
	if (iLocal_449 < 8)
	{
		if (func_129(&uLocal_533, 16))
		{
			iLocal_449 = 8;
		}
		if (iLocal_449 < 7)
		{
			if (!func_129(&uLocal_533, 8) && func_327())
			{
				func_138(&uLocal_533, 8);
			}
		}
		if (!func_129(&uLocal_533, 134217728))
		{
			if (iLocal_449 > 0 && iLocal_449 <= 4)
			{
				if (func_328(&(Local_179[1]), Global_35, 1, 1) < 5f && (iLocal_449 != 4 || !TASK::_0xBEDBE39B5FD98FD6(Global_35)))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					func_215(&(Local_179[1]), &iVar0, 0, 0, 1, 1);
					func_138(&uLocal_533, 134217728);
				}
			}
		}
	}
	switch (iLocal_449)
	{
		case 0:
			func_153(0);
			func_150(vLocal_487[0 /*3*/]);
			if (func_129(&uLocal_533, 256) || iParam0)
			{
				if (func_61(&(Local_179[3]), 0, 1))
				{
					PED::_0x7DE9692C6F64CFE8(&(Local_179[3]), false, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 3), Global_35, 3f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					func_215(&(Local_179[3]), &iVar0, 0, 0, 1, 1);
				}
				if (func_61(&(Local_179[4]), 0, 1))
				{
					PED::_0x7DE9692C6F64CFE8(&(Local_179[4]), false, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 4), Global_35, 3f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					func_215(&(Local_179[4]), &iVar0, 0.5f, 0.5f, 1, 1);
				}
				if (func_61(&(Local_179[2]), 0, 1))
				{
					PED::_0x7DE9692C6F64CFE8(&(Local_179[2]), false, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_315(uLocal_533, 2), Global_35, 3f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					func_215(&(Local_179[2]), &iVar0, 0, 0, 1, 1);
				}
				iLocal_449 = 2;
			}
			break;
		case 2:
			if (!func_47(vLocal_487[0 /*3*/], 1f))
			{
				func_153(0);
			}
			else
			{
				func_181();
				if (!func_129(&uLocal_533, 16384))
				{
					if (func_129(&uLocal_533, 1024))
					{
						return 1;
					}
				}
				else if (!func_129(&uLocal_533, 1024))
				{
					iLocal_449 = 1;
				}
			}
			break;
		case 1:
			if (func_47(vLocal_487[0 /*3*/], 0f))
			{
				func_181();
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_69(vLocal_543))
				{
					func_181();
					vLocal_543 = { Global_36 };
				}
			}
			func_28(&Local_179, 0);
			if (func_47(vLocal_487[0 /*3*/], 5f))
			{
				func_50(&Local_179, 0);
				func_150(vLocal_487[0 /*3*/]);
				func_329();
				func_182(&uLocal_30, &(Local_179[1]), 1, 30f);
				PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
				PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "AMBUSH_PLAYER_SURRENDER");
				func_330(&Local_33, 1, 1);
				iLocal_449 = 3;
			}
			break;
		case 3:
			if (!bLocal_28)
			{
				if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
				{
					func_321(&(Local_179[1]), 100);
					func_321(&(Local_179[0]), 300);
					func_321(&(Local_179[2]), 100);
					func_209(&Local_179, 0);
					func_182(&uLocal_30, &(Local_179[1]), 0, 30f);
					bLocal_28 = true;
				}
			}
			func_331();
			func_332(&Local_179);
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_69(vLocal_543))
				{
					func_181();
					vLocal_543 = { Global_36 };
				}
			}
			if (func_327() || func_333())
			{
				func_138(&uLocal_533, 8);
			}
			else if (!func_334(&(Local_179[1]), &(Local_179.f_49[0]), 1) && bLocal_28)
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (func_69(vLocal_543))
					{
						func_181();
						vLocal_543 = { Global_36 };
					}
				}
				iLocal_449 = 4;
			}
			break;
		case 4:
			func_335(&Local_179);
			PED::SET_PED_RESET_FLAG(&(Local_179[func_128()]), 27, true);
			func_336();
			if (func_129(&uLocal_533, 2))
			{
				func_337(&Local_179, 0, -67.13179f, 270.9976f, 103.5654f, 1067450368, 1097859072, 1065353216, 1);
			}
			else
			{
				func_337(&Local_179, 0, -145.0058f, 332.767f, 100.6059f, 1067450368, 1097859072, 1065353216, 1);
			}
			if (func_338())
			{
				if (func_339(&(Local_179[func_128()]), &Local_450, 0.2f, 0, -6.5f, 2, 0, 0, 0, 6000, 1, 1))
				{
					func_40(vLocal_487[7 /*3*/], 0);
					if (Local_450.f_4)
					{
						func_22(&Local_179, 1048576);
						func_340();
						func_28(&Local_179, 1);
						iLocal_449 = 5;
						func_180(&Local_179, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(&(Local_179[func_128()]), 1, 0);
						TASK::TASK_REACT(&(Local_179[1]), Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						iLocal_449 = 7;
					}
				}
				else
				{
					func_40(vLocal_487[7 /*3*/], 0);
					if (Local_450 >= 2)
					{
						if (!func_129(&uLocal_533, 16777216))
						{
							func_181();
							func_182(&uLocal_30, &(Local_179[1]), 0, 30f);
							func_138(&uLocal_533, 16777216);
						}
					}
					if (Local_450.f_2)
					{
						if (!func_314(&(Local_179[2]), 1868526510))
						{
							func_341(&(Local_179[2]), &(Local_179.f_40[0]), 0, 2f, 20000);
						}
					}
					if (Local_450.f_6)
					{
						TASK::TASK_REACT(&(Local_179[1]), Global_35, Global_36, "Default_Shocked", 0.6f, 0, 4);
						iLocal_449 = 7;
					}
				}
			}
			break;
		case 5:
			if (!iLocal_29)
			{
				if (func_144(0f, 1, &(Local_179[0]), 1) && func_144(0f, 1, &(Local_179[1]), 1))
				{
					func_157(&(Local_179[0]), Global_35, "CALLOUT_FOLLOW_ROB_FLEE_MALE", 0, -1073741824, 1744022339);
					iLocal_29 = 1;
				}
			}
			if (func_342())
			{
				func_343();
				vLocal_543 = { Global_36 };
				iLocal_449 = 6;
			}
			break;
		case 6:
			fVar1 = func_204(Global_35, vLocal_543, 1);
			if (fVar1 > 20f)
			{
				iVar2 = 0;
				while (iVar2 <= 5)
				{
					if (func_61(&(Local_179[iVar2]), 0, 1))
					{
						if (&Local_179.f_9[iVar2] > 0f)
						{
							if (&Local_179.f_9[iVar2] < 10f)
							{
								iLocal_449 = 7;
							}
						}
					}
					iVar2++;
				}
			}
			break;
		case 7:
			func_180(&Local_179, 0);
			if (func_47(vLocal_487[7 /*3*/], 0.3f))
			{
				return 1;
			}
			break;
		case 8:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			return 1;
	}
	return 0;
}

void func_150(var uParam0)
{
	func_344(uParam0, 0f);
}

int func_151()
{
	if (func_301(Global_35, &(iLocal_523[2]), 1, 0))
	{
		if (!func_301(Global_35, &(iLocal_523[1]), 1, 0))
		{
			func_345(&Local_179, 7);
			return 1;
		}
	}
	if (func_346(&Local_179))
	{
		return 1;
	}
	return 0;
}

int func_152()
{
	return 1;
}

void func_153(bool bParam0)
{
	vector3 vVar0;
	int iVar3;

	if (func_177() || &Local_179.f_9[func_128()] < 14f)
	{
		func_181();
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	if (bParam0)
	{
		iVar3 = 1000;
	}
	else
	{
		iVar3 = 1500;
	}
	func_347(&(Local_179[1]), &uLocal_438, vVar0, 1, (30f + 10f), 45f, iVar3, 3000, 3000, 1075838976, 1, 1, 1084227584);
}

void func_154()
{
	int iVar0;
	var uVar1;

	if (Local_450.f_2)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &uVar1, 1, 3f, 0f);
	if (!func_348())
	{
		return;
	}
	if (func_61(iVar0, 0, 1))
	{
		if (func_349())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
		else if (func_350())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
		else if (func_351())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
	}
}

void func_155()
{
	return;
	if (func_352(&Local_179))
	{
		return;
	}
	if (!func_129(&uLocal_533, 1))
	{
		if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(func_315(uLocal_533, 1), Global_36, false) < 15f && func_349()) && func_353()) && func_348()) || func_30(&Local_179, 8))
		{
			if (!func_30(&Local_179, 8))
			{
				if (func_296(Global_35))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PED::GET_MOUNT(Global_35), false);
					PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 53, true);
					func_138(&uLocal_533, 128);
				}
				func_22(&Local_179, 8);
			}
			func_158(1891783641, &(Local_179[1]), 1);
			if (func_354(Global_35, &uLocal_512, 65, 256, 0, 1084227584, 100, 0, 0))
			{
				func_138(&uLocal_533, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
			MAP::DISPLAY_RADAR(true);
		}
	}
}

int func_156()
{
	int iVar0;
	float fVar1;

	if (!func_47(vLocal_487[5 /*3*/], 2f))
	{
		return 0;
	}
	iVar0 = func_128();
	if (func_129(&uLocal_533, 16384))
	{
		fVar1 = 100f;
	}
	else if (func_355(21, 5))
	{
		fVar1 = 25f;
	}
	else
	{
		fVar1 = 45f;
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(Local_179[iVar0]), Global_35, 17))
	{
		if (func_204(&(Local_179[iVar0]), Global_36, 0) < fVar1 || func_47(vLocal_487[5 /*3*/], 5f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_157(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5)
{
	return func_356(iParam0, iParam1, sParam2, "", fParam4, iParam3, 0, 0, 1, fParam4 > 0f, 1, iParam5, 1, 0, 0);
}

void func_158(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, uParam1);
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_REVEAL";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_REVEAL";
}

void func_160()
{
	int iVar0;
	int iVar1;

	if (func_129(&uLocal_533, 16384))
	{
		if (!func_129(&uLocal_533, 16777216))
		{
			func_181();
			func_182(&uLocal_30, &(Local_179[1]), 0, 30f);
			func_138(&uLocal_533, 16777216);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (func_61(&(Local_179[iVar1]), 0, 0))
		{
			if (func_129(&uLocal_533, 16384))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_215(&(Local_179[iVar1]), &iVar0, 0.2f, 0, 1, 1);
				if (!func_308(uLocal_534[iVar1], 1))
				{
					func_309(uLocal_534[iVar1], 1);
				}
			}
			func_312(&(Local_179[iVar1]), Local_179.f_22[iVar1], 831283580, 942020339, 0, 0);
			func_313(Local_179[iVar1]);
		}
		iVar1++;
	}
	if (func_61(&(Local_179[2]), 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_215(&(Local_179[2]), &iVar0, 0.5f, 0, 1, 1);
		if (!func_308(uLocal_534[2], 1))
		{
			func_309(uLocal_534[2], 1);
		}
		func_312(&(Local_179[2]), Local_179.f_22[2], 831283580, 942020339, 0, 0);
	}
	iVar1 = 3;
	while (iVar1 <= 4)
	{
		if (func_61(&(Local_179[iVar1]), 0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_215(&(Local_179[iVar1]), &iVar0, 0.5f, 0, 1, 1);
			if (!func_308(uLocal_534[iVar1], 1))
			{
				func_309(uLocal_534[iVar1], 1);
			}
			func_312(&(Local_179[iVar1]), Local_179.f_22[iVar1], 831283580, 942020339, 0, 0);
		}
		iVar1++;
	}
}

void func_161(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_357() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_358(iVar1) && !func_359(iVar1, iParam2)) && (!bParam3 || !func_360(iVar1))) && (!bParam4 || !func_361(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_362(iVar0);
			}
		}
		iVar0++;
	}
}

void func_162()
{
	if (!func_358(&Global_1327479))
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
	func_363(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_163()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_364(iVar0, 128))
		{
			func_365(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_164()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_364(iVar0, 128) && func_364(iVar0, 1))
		{
			func_365(iVar0, 4096);
		}
		iVar0++;
	}
}

struct<2> func_165(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_166(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_167(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar2], 0, 0))
		{
			iVar0 = 0;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(200, 500);
			func_366(uParam0[iVar2], &iVar0);
			func_367(uParam0[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_368(joaat("g_m_m_uniduster_01"));
			func_368(joaat("g_m_m_uniduster_03"));
			break;
		case 2:
			func_368(joaat("g_m_o_uniexconfeds_01"));
			func_368(joaat("g_m_y_uniexconfeds_01"));
			break;
		case 1:
			func_368(joaat("g_m_m_uniinbred_01"));
			break;
		case 3:
			func_368(joaat("g_m_m_unimountainmen_01"));
			break;
		case 4:
			func_368(joaat("g_m_m_uniranchers_01"));
			break;
		case 5:
			func_368(joaat("g_m_m_unibanditos_01"));
			break;
	}
	func_22(uParam0, 128);
}

void func_168(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_369(&Global_0, 8);
	}
	if (!func_370() || func_371() != -1)
	{
		return;
	}
	func_369(&Global_0, 1);
}

void func_169(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_106[iParam1] = (uParam0->f_106[iParam1] || iParam2);
}

void func_170(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_171(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 0))
		{
			if (!func_134(uParam0, iVar0, 512))
			{
				if (PED::IS_PED_HOGTIED(uParam0[iVar0]))
				{
					TASK::TASK_COMBAT_PED(uParam0[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK(uParam0[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0[iVar0], false);
					func_178(uParam0[iVar0]);
					func_243(uParam0, iVar0, 512);
				}
			}
			else if (!PED::IS_PED_HOGTIED(uParam0[iVar0]))
			{
				func_372(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_172(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 0))
		{
			PED::_0xD77AE48611B7B10A(uParam0[iVar0], fParam1);
		}
		iVar0++;
	}
}

void func_173(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (func_373(Global_1935630->f_44) || uParam0->f_6)
		{
			if (func_374(uParam0->f_36))
			{
				func_375(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!func_60(&(uParam0->f_29)))
	{
		if (func_376(uParam0->f_28))
		{
			func_40(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (func_47(&(uParam0->f_29), 3f) && func_376(uParam0->f_28))
		{
			func_377(1);
			uParam0->f_35 = 1;
			if (!func_47(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				func_378(609);
			}
		}
	}
}

void func_174()
{
	int iVar0;

	if (!func_129(&uLocal_533, 32) && !func_129(&uLocal_533, 16))
	{
		iVar0 = 0;
		while (iVar0 < Local_179.f_215)
		{
			if (func_379(iVar0))
			{
				PED::SET_PED_RESET_FLAG(&(Local_179[iVar0]), 27, true);
			}
			iVar0++;
		}
	}
}

int func_175(int iParam0)
{
	if (!func_228(iParam0, 3))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return 1;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) == iParam0)
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(iParam0) == Global_35)
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_176(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_313(uParam0);
		func_380(iParam1, uParam2);
	}
	func_381(*uParam0, 1, bParam4);
}

int func_177()
{
	if (func_129(&uLocal_533, 2097152))
	{
		return 1;
	}
	if (func_382())
	{
		func_138(&uLocal_533, 2097152);
		return 1;
	}
	return 0;
}

void func_178(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_179(int iParam0)
{
	if (func_129(&uLocal_533, 268435456))
	{
		if (ENTITY::_0x083D497D57B7400F(&(Local_179.f_49[0])))
		{
			if (iParam0 || func_383())
			{
				ENTITY::FREEZE_ENTITY_POSITION(&(Local_179.f_49[0]), false);
				func_141(&uLocal_533, 268435456);
			}
		}
	}
}

void func_180(var uParam0, int iParam1)
{
	if (func_30(uParam0, 32))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam1))
		{
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam1);
		}
		func_45(uParam0, 32);
	}
}

void func_181()
{
	func_307();
}

void func_182(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630->f_58 != iParam1) && func_61(Global_1935630->f_58, 0, 1)) && func_295(Global_1935630->f_58))
		{
			*uParam0 = Global_1935630->f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		func_384(*uParam0, 1, fParam3, 0);
	}
	else
	{
		func_384(iParam1, 0, fParam3, 0);
		func_384(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

void func_183()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar5 = 0;
	while (iVar5 < Local_179.f_215)
	{
		if (func_61(&(Local_179[iVar5]), 0, 0))
		{
			if (!func_308(uLocal_534[iVar5], 1))
			{
				TASK::TASK_COMBAT_PED(&(Local_179[iVar5]), Global_35, 0, 0);
				func_309(uLocal_534[iVar5], 1);
			}
			if (!func_129(&uLocal_533, 16))
			{
				vVar0 = { func_385(uLocal_533, iVar5) };
				if (!func_69(vVar0) && !func_129(&uLocal_533, 16))
				{
					fVar3 = func_386(uLocal_533, iVar5);
					iVar4 = func_387(uLocal_533, iVar5);
					if (!func_177())
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_179[iVar5]), vVar0, fVar3, iVar4, 0, 0);
					}
					if (func_388(uLocal_533, iVar5))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_179[iVar5]), 45, true);
					}
					if (iVar5 == 1)
					{
						PED::SET_COMBAT_FLOAT(&(Local_179[1]), 32, 2f);
					}
				}
			}
			PED::SET_PED_COMBAT_RANGE(&(Local_179[iVar5]), 0);
		}
		iVar5++;
	}
}

int func_184()
{
	if (func_129(&uLocal_533, 2))
	{
		return 1;
	}
	if (func_47(vLocal_487[1 /*3*/], 8f) || func_389(&Local_179) <= 2)
	{
		if (!func_129(&uLocal_533, 16))
		{
			if (func_61(&(Local_179[2]), 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(&(Local_179[2]), &(iLocal_523[7]), 0, 0, 0);
			}
			if (func_61(&(Local_179[4]), 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(&(Local_179[4]), &(iLocal_523[7]), 0, 0, 0);
			}
		}
		if (func_61(&(Local_179[3]), 0, 0))
		{
			func_178(&(Local_179[3]));
		}
		return 1;
	}
	return 0;
}

char* func_185(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 < 0)
	{
		return "";
	}
	iVar0 = iParam2;
	iVar1 = func_292(uParam0, iParam1, iVar0);
	switch (iVar1)
	{
		case 0:
			return "AMBUSH_WAM_FLEE";
		case 1:
			return "AMBUSH_WAM_V2_FLEE";
		default:
			break;
	}
	return "COMBAT_FLEE";
}

int func_186(var uParam0, int iParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_215)
		{
			if (func_61(uParam0[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!func_134(uParam0, iVar2, 1))
				{
					func_150(uParam2);
					*iParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return 1;
			}
		}
	}
	else
	{
		if (!func_60(uParam2))
		{
			if (func_61(uParam0[*iParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2(uParam0[*iParam1], Global_35, 1, 0);
			}
		}
		func_40(uParam2, 0);
		if (func_47(uParam2, fParam4))
		{
			if (func_61(uParam0[*iParam1], 0, 1))
			{
				if (func_390(uParam0, *iParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0[*iParam1], Global_35, 4, 524292, -1082130432, -1, 0);
					PED::SET_PED_KEEP_TASK(uParam0[*iParam1], true);
					func_178(uParam0[*iParam1]);
					func_381(uParam0[*iParam1], 0, 1);
					func_356(uParam0[*iParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_187(var uParam0)
{
	if (func_198(*uParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_188(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;

	if (!func_198(*uParam0, 4))
	{
		if (func_198(iParam5, 1))
		{
			if (func_391())
			{
				func_392(uParam0, 4);
				return 0;
			}
		}
		else if (func_198(iParam5, 2))
		{
			if (func_393())
			{
				func_392(uParam0, 4);
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (!func_198(*uParam0, 1))
	{
		if (!func_198(*uParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (func_61(uParam1[iVar0], 8, 1) && !PED::IS_PED_FLEEING(uParam1[iVar0]))
				{
					return 0;
				}
				iVar0++;
			}
		}
		func_40(&(uParam0->f_1), 0);
		func_392(uParam0, 1);
	}
	if (func_198(*uParam0, 1))
	{
		if (func_47(&(uParam0->f_1), (fParam4 + 4f)))
		{
			func_392(uParam0, 4);
			return 0;
		}
		if (!func_47(&(uParam0->f_1), fParam4))
		{
			return 0;
		}
		if (!func_144(0f, 1, Global_35, 1))
		{
			return 0;
		}
		if (func_394(Global_35))
		{
			return 0;
		}
		if (Global_1935630->f_24)
		{
			return 0;
		}
		func_392(uParam0, 4);
		return 1;
	}
	return 0;
}

void func_189()
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	iVar0 = func_395(&uLocal_15, Local_179.f_225, Local_179.f_226);
	if (func_87(Local_179.f_181, 0) && func_268(Local_179.f_181, 1))
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	sVar2 = func_396(&uLocal_15, Local_179.f_181, bVar1, iVar0);
	func_356(Global_35, Global_35, sVar2, "", -1082130432, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
}

void func_190(int iParam0, bool bParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_40.f_9632.f_177[iParam0] = &Global_40.f_9632.f_177[iParam0] + 1;
	}
	Global_40.f_9632.f_195++;
	Global_40.f_9632.f_193 = iParam0;
	Global_17503.f_7 = 1;
	if (bParam1)
	{
		Global_40.f_9632.f_192 = func_397();
	}
}

void func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_18(Global_1393447, 65536))
	{
		func_19(Global_1393447, 65536);
		func_161(-1, 0, 0, 0, 0);
		func_35(1, -1, 0, 0, 0);
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
		if (bParam1)
		{
			func_34(120, 0, 1);
		}
		else
		{
			func_34(60, 0, 1);
		}
		iVar0 = func_398(iParam0);
		iVar1 = func_399(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_400(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_401();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_402(0, iVar2);
					break;
			}
		}
		if (func_198(iVar0, 1))
		{
			func_403();
		}
		else if (func_198(iVar0, 2))
		{
			func_404(0);
		}
		func_405(iParam0);
		func_406(iParam0);
	}
}

void func_192(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_193(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_194(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_407(iParam0, iParam1, bParam2);
}

void func_195(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_196()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_197()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_359(iVar0, 16777216))
		{
			if (!func_408(iVar0))
			{
				func_409(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_198(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_199(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_410(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_411(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_412(iVar0) < func_413(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_414(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_415(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_415(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_415(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_415(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_415(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_415(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_415(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_201(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_24();
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

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_203(int iParam0)
{
	float fVar0;

	if (func_135(&Local_179, iParam0, 32))
	{
		if (!func_61(PED::_0xB676EFDA03DADA52(&(Local_179.f_40[iParam0]), 0), 0, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_61(PED::_0xB676EFDA03DADA52(&(Local_179.f_40[iParam0]), 1), 0, 1))
	{
		return 0;
	}
	if (Local_179.f_216 == Local_179.f_215)
	{
		if (!func_61(&(Local_179[iParam0]), 0, 1))
		{
			return 1;
		}
	}
	if (!func_135(&Local_179, iParam0, 64))
	{
		fVar0 = func_208(&(Local_179.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_204(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_205(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_206()
{
	return 1;
}

void func_207(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_208(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_416(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_209(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 1);
		}
	}
	else if (PLAYER::_0x6614F9039BD31931(PLAYER::PLAYER_ID(), 14, 0))
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 14, 0, 0);
	}
}

void func_210(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (*uParam0 == uParam1[iVar0])
			{
				func_182(uParam0, uParam1[iVar0], 0, 30f);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_417(iParam0))
	{
		return;
	}
	iVar0 = func_418(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_419(iVar0);
	func_420(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_421(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_422(iVar0))
		{
			return;
		}
	}
	func_423(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_371() == -1)
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

int func_212(int iParam0)
{
	if (func_134(&Local_179, iParam0, 2))
	{
		return 0;
	}
	if (func_134(&Local_179, iParam0, 128))
	{
		return 0;
	}
	if (func_134(&Local_179, iParam0, 4))
	{
		return 1;
	}
	if (func_424(&Local_179, &(Local_179[iParam0])))
	{
		return 1;
	}
	if (!func_134(&Local_179, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_213(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

int func_214(int iParam0)
{
	if (func_425(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_215(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_216(int iParam0)
{
	switch (Local_179.f_151)
	{
		case 24:
		case 26:
		case 27:
			return 1;
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
{
	if (func_135(&Local_179, iParam0, 2))
	{
		return 0;
	}
	if (func_135(&Local_179, iParam0, 4))
	{
		return 1;
	}
	if (func_426(&(Local_179.f_40[iParam0]), iParam1))
	{
		return 1;
	}
	if (func_424(&Local_179, &(Local_179.f_40[iParam0])))
	{
		return 1;
	}
	if (!func_135(&Local_179, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	float fVar0;

	if (func_427(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (func_428(&(Local_179.f_84[iParam0]), fVar0))
	{
		return 0;
	}
	if (func_204(&(Local_179.f_84[iParam0]), Global_36, 1) < 10f)
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0)
{
	if (func_244(&Local_179, iParam0, 2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, &(Local_179.f_49[iParam0]), true))
	{
		return 0;
	}
	if (func_244(&Local_179, iParam0, 4))
	{
		return 1;
	}
	if (func_429(&Local_179, &(Local_179.f_49[iParam0])))
	{
		return 1;
	}
	if (!func_244(&Local_179, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_220(var uParam0, int iParam1)
{
	if (func_428(iParam1, 1114636288) || func_430(iParam1, 1, 1) <= 30f)
	{
		return 0;
	}
	return 1;
}

void func_221(int iParam0)
{
}

float func_222(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 16:
		case 36:
		case 38:
			fVar0 = 45f;
			break;
		case 11:
			fVar0 = 15f;
			break;
		case 0:
			fVar0 = 70f;
			break;
		case 12:
			fVar0 = 2f;
			break;
		case 13:
			fVar0 = 55f;
			break;
		case 14:
		case 26:
			fVar0 = 50f;
			break;
		case 33:
			fVar0 = 85f;
			break;
		case 31:
		case 32:
			fVar0 = 50f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 17:
		case 22:
		case 27:
		case 29:
		case 30:
		case 34:
		case 35:
		case 39:
		case 40:
		case 41:
		case 42:
			fVar0 = 10f;
			break;
		case 9:
		case 10:
		case 37:
			fVar0 = 92.5f;
			break;
		case 18:
		case 19:
		case 20:
			fVar0 = 50f;
			break;
		case 23:
			fVar0 = 3f;
			break;
		case 21:
			fVar0 = 80f;
			break;
		case 24:
			fVar0 = 86f;
			break;
		case 25:
			fVar0 = 100f;
			break;
		case 28:
			fVar0 = 65f;
			break;
		default:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

void func_223(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_431(vVar0, vVar3, 0) };
	vVar9 = { func_432(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_433(uParam0->f_209, fParam1, 5);
	func_434(uParam0);
}

void func_224(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_69(vParam0))
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
			if (func_435(vVar2, vParam0, 2f, 1))
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

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

int func_226(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = { func_165(85200619) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		if (iVar1 >= (Global_40.f_9632[iParam0 /*4*/])->f_3)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_228(int iParam0, int iParam1)
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
	if (func_436(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_436(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_229(int iParam0)
{
	if (((func_230(iParam0, 1) && func_230(iParam0, 2)) && func_230(iParam0, 8)) && func_230(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_230(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_231()
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

int func_232(int iParam0)
{
	if (!func_235(iParam0))
	{
		return -1;
	}
	return func_438(func_437(iParam0));
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_234(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_235(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_236(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_439(vVar0, vParam1);
}

int func_237(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_204(iParam0, Global_36, 1);
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

int func_238()
{
	return Global_1894899->f_2;
}

int func_239()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_440(16) && !func_440(21))
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	if (Local_179.f_151 != 11)
	{
		return 1;
	}
	if (Local_179.f_221 == 2)
	{
		return 0;
	}
	return 1;
}

bool func_241()
{
	return (Global_1894899 & 1 != 0 && func_238() != -1);
}

int func_242(int iParam0)
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

void func_243(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (uParam0->f_97[iParam1] || iParam2);
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_115[iParam1] && iParam2) != 0;
}

int func_245(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_328(iParam0, Global_35, 1, 1);
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (ENTITY::_0xC8CCDB712FBCBA92(iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_246(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_115[iParam1] = (uParam0->f_115[iParam1] || iParam2);
}

float func_247(var uParam0)
{
	return uParam0->f_24;
}

void func_248(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(uParam0, 1);
	}
	else
	{
		func_256(uParam0, 1);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 16384);
	}
	else
	{
		func_257(&(uParam0->f_1), 16384);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 2048);
	}
	else
	{
		func_257(&(uParam0->f_1), 2048);
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(uParam0, 16);
	}
	else
	{
		func_256(uParam0, 67108864);
		func_256(uParam0, 16);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 128);
	}
	else
	{
		func_257(&(uParam0->f_1), 128);
	}
}

void func_254(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(uParam0, 256);
	}
	else
	{
		func_256(uParam0, 256);
	}
}

void func_255(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_257(uParam0, 268435456);
	}
	else
	{
		func_256(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_257(uParam0, 1073741824);
	}
	else
	{
		func_256(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_257(uParam0, 536870912);
	}
	else
	{
		func_256(uParam0, 536870912);
	}
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_258(int iParam0)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/])->f_1 == 5;
}

int func_259()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar0 = BUILTIN::VDIST2(Global_36, -121.1325f, 142.6518f, 90.7199f);
	fVar1 = BUILTIN::VDIST2(Global_36, -197.5622f, 467.291f, 94.5181f);
	fVar2 = BUILTIN::VDIST2(Global_36, -119.9247f, 467.4688f, 111.5982f);
	iLocal_523[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-292.6826f, 471.2841f, 79.65367f, 0f, 0f, 21.38423f, 277.7442f, 420.2423f, 75.37475f, "volNorthwestCheck");
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		func_138(&uLocal_533, 2);
		iVar3 = 1;
	}
	else if (func_301(Global_35, &(iLocal_523[0]), 1, 0))
	{
		func_141(&uLocal_533, 2);
		iVar3 = 1;
	}
	return iVar3;
}

int func_260()
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VDIST2(Global_36, 599.6675f, -489.4001f, 80.1061f);
	fVar1 = BUILTIN::VDIST2(Global_36, 741.9882f, -335.0654f, 95.5447f);
	if (fVar0 < fVar1)
	{
		func_141(&uLocal_533, 2);
	}
	else
	{
		func_138(&uLocal_533, 2);
	}
	return 1;
}

void func_261(var uParam0, var uParam1)
{
	var uVar0[2];

	uVar0[0] = func_441(7);
	uVar0[1] = func_441(10);
	func_442(uParam1->f_106[0 /*17*/], &(uVar0[0]), "", -163964935, 0, 0, 0, 0, 0);
	func_442(uParam1->f_106[1 /*17*/], &(uVar0[1]), func_443(), 648122183, 0, 0, 0, 1, 0);
	func_444(uParam1->f_106[0 /*17*/], 1, 1);
	func_330(uParam1, 1, 0);
}

void func_262()
{
	if (func_129(&uLocal_533, 64))
	{
		func_445();
	}
	else
	{
		func_446();
	}
}

void func_263(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(uParam0, 8);
	}
	else
	{
		func_256(uParam0, 8);
	}
}

void func_264(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 16);
	}
	else
	{
		func_257(&(uParam0->f_1), 16);
	}
}

void func_265(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_256(&(uParam0->f_1), 1);
	}
	else
	{
		func_257(&(uParam0->f_1), 1);
	}
}

Vector3 func_266(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(4, 9);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(6, 9);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_267(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<4> Var0;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_448(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_448(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_448(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_448(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_448(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_448(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_448(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_448(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_448(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_448(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_448(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_448(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_448(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_448(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_448(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_448(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_448(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_448(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_448(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_448(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_448(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_448(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_448(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_448(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_448(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_448(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_448(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_448(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_448(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_448(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_448(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_448(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
							break;
						case 1:
							func_448(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
							break;
						case 2:
							func_448(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
							break;
						case 3:
							func_448(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
							break;
						case 4:
							func_448(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
							break;
						case 1:
							func_448(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
							break;
						case 1:
							func_448(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
							break;
						case 2:
							func_448(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
							break;
						case 1:
							func_448(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
							break;
						case 1:
							func_448(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
							break;
						case 2:
							func_448(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
							break;
						case 3:
							func_448(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
							break;
						case 1:
							func_448(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
							break;
						case 2:
							func_448(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
							break;
						case 3:
							func_448(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
							break;
						case 4:
							func_448(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
							break;
						case 5:
							func_448(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
							break;
					}
					break;
				case 15:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
							break;
					}
					break;
				case 13:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
							break;
						case 1:
							func_448(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
							break;
					}
					break;
				case 14:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
							break;
						case 1:
							func_448(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
							break;
						case 2:
							func_448(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
							break;
					}
					break;
				case 16:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
							break;
						case 1:
							func_448(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
							break;
					}
					break;
				case 17:
				case 39:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
							break;
						case 1:
							func_448(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
							break;
						case 2:
							func_448(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
							break;
						case 3:
							func_448(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
							break;
						case 4:
							func_448(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
							break;
					}
					break;
				case 18:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 19:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
							break;
					}
					break;
				case 21:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
							break;
						case 1:
							func_448(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
							break;
						case 2:
							func_448(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
							break;
						case 3:
							func_448(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
							break;
					}
					break;
				case 20:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
							break;
					}
					break;
				case 22:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
							break;
					}
					break;
				case 23:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
							break;
					}
					break;
				case 24:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
							break;
					}
					break;
				case 25:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
							break;
					}
					break;
				case 28:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
							break;
					}
					break;
				case 27:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
							break;
						case 1:
							func_448(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
							break;
					}
					break;
				case 26:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
							break;
					}
					break;
				case 29:
				case 30:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
							break;
					}
					break;
				case 31:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
							break;
					}
					break;
				case 32:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
							break;
						case 1:
							func_448(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 34:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
							break;
					}
					break;
				case 43:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
							break;
						case 1:
							func_448(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
							break;
						case 2:
							func_448(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
							break;
						case 3:
							func_448(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 13:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
							break;
						case 1:
							func_448(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
							break;
					}
					break;
				case 33:
					switch (iParam4)
					{
						case 0:
							func_448(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
							break;
						case 1:
							func_448(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
							break;
					}
					break;
				case 0:
					switch (iParam4)
					{
						case 1:
							func_448(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
							break;
					}
					break;
			}
			break;
		case 3:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
		default:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			break;
	}
	*uParam2 = { Var0 };
	*uParam3 = Var0.f_3;
	if (func_69(*uParam2))
	{
		*uParam2 = { 0f, 0f, 0f };
		*uParam3 = 0f;
	}
}

bool func_268(int iParam0, int iParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (iParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_269(int iParam0)
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

int func_270(bool bParam0, var uParam1, var uParam2)
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

void func_271(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_449(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_450(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_431(vVar0, vVar3, 0) };
	vVar9 = { func_432(vVar0, vVar3, 0) };
	if (func_451(uParam0->f_151))
	{
		iVar12 = func_452(uParam0);
		func_453(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_454(uParam0->f_209, fParam1, 0);
}

void func_272(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_256(&uParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

var func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 918497150:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-62570976, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 356361174:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-165971473, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -1771663379:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2049218219, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -311956671:
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(989061023, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, 1, 0, 0f, 0f, 0f);
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_455(iParam0);
	if ((func_198(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -247265944;
					break;
				case 1:
					iVar2 = 1696286663;
					break;
				case 2:
					iVar2 = -1038436471;
					break;
				case 3:
					iVar2 = -85890205;
					break;
				case 4:
					iVar2 = -727455979;
					break;
				case 5:
					iVar2 = joaat("a_c_horse_americanpaint_tobiano");
					break;
				default:
					if (func_456())
					{
						iVar2 = -247265944;
					}
					else
					{
						iVar2 = 1696286663;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1072019803;
					break;
				case 1:
					iVar2 = -1038436471;
					break;
				case 2:
					iVar2 = -1261814606;
					break;
				case 3:
					iVar2 = -1554827654;
					break;
				default:
					if (func_456())
					{
						iVar2 = -1038436471;
					}
					else
					{
						iVar2 = 1072019803;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 2024948086;
					break;
				case 1:
					iVar2 = -1265030920;
					break;
				case 2:
					iVar2 = joaat("a_c_horse_belgian_mealychestnut");
					break;
				case 3:
					iVar2 = -1599683008;
					break;
				case 4:
					iVar2 = joaat("a_c_horse_americanpaint_overo");
					break;
				default:
					if (func_456())
					{
						iVar2 = 2024948086;
					}
					else
					{
						iVar2 = -1265030920;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1230359523;
					break;
				case 1:
					iVar2 = 96930969;
					break;
				case 2:
					iVar2 = joaat("a_c_horse_belgian_blondchestnut");
					break;
				case 3:
					iVar2 = 36009259;
					break;
				default:
					if (func_456())
					{
						iVar2 = 1230359523;
					}
					else
					{
						iVar2 = 96930969;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -727455979;
					break;
				case 1:
					iVar2 = joaat("a_c_horse_mustang_wildbay");
					break;
				case 2:
					iVar2 = -1180427609;
					break;
				case 3:
					iVar2 = -1250098797;
					break;
				default:
					if (func_456())
					{
						iVar2 = -727455979;
					}
					else
					{
						iVar2 = joaat("a_c_horse_mustang_wildbay");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = 917402668;
					break;
				case 1:
					iVar2 = -914712122;
					break;
				case 2:
					iVar2 = -598917269;
					break;
				case 3:
					iVar2 = -598917269;
					break;
				default:
					iVar2 = 917402668;
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1250098797;
					break;
				case 1:
					iVar2 = joaat("a_c_horse_appaloosa_blanket");
					break;
				case 2:
					iVar2 = joaat("a_c_horse_thoroughbred_dapplegrey");
					break;
				case 3:
					iVar2 = -1924405794;
					break;
				case 4:
					iVar2 = -1180427609;
					break;
				default:
					iVar2 = -1250098797;
					break;
			}
			break;
		default:
			iVar2 = -1038436471;
			break;
	}
	return iVar2;
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1268180497;
	iVar1 = func_455(iParam0);
	if ((func_198(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1279161173;
					break;
				case 1:
					iVar2 = -520362209;
					break;
				case 2:
					iVar2 = -803977904;
					break;
				case 3:
					iVar2 = -1279161173;
					break;
				case 4:
					iVar2 = -520362209;
					break;
				case 5:
					iVar2 = -803977904;
					break;
				default:
					if (func_456())
					{
						iVar2 = -1279161173;
					}
					else
					{
						iVar2 = -520362209;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 42113864;
					break;
				case 1:
					iVar2 = 694577423;
					break;
				case 2:
					iVar2 = 42113864;
					break;
				case 3:
					iVar2 = 694577423;
					break;
				default:
					if (func_456())
					{
						iVar2 = 42113864;
					}
					else
					{
						iVar2 = 694577423;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1078773108;
					break;
				case 1:
					iVar2 = 1314808215;
					break;
				case 2:
					iVar2 = -801577650;
					break;
				case 3:
					iVar2 = -1635384855;
					break;
				case 4:
					iVar2 = -1150469193;
					break;
				default:
					if (func_456())
					{
						iVar2 = 1078773108;
					}
					else
					{
						iVar2 = 1314808215;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1371076591;
					break;
				case 1:
					iVar2 = 998558599;
					break;
				case 2:
					iVar2 = -1175500706;
					break;
				case 3:
					iVar2 = 1814441161;
					break;
				default:
					if (func_456())
					{
						iVar2 = 1371076591;
					}
					else
					{
						iVar2 = 998558599;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -314847033;
					break;
				case 1:
					iVar2 = -2125596339;
					break;
				case 2:
					iVar2 = 1938775504;
					break;
				case 3:
					iVar2 = -477512349;
					break;
				default:
					if (func_456())
					{
						iVar2 = -2125596339;
					}
					else
					{
						iVar2 = 1938775504;
					}
					break;
			}
			break;
		default:
			break;
	}
	return iVar2;
}

char* func_276(var uParam0)
{
	if (func_129(&uParam0, 2))
	{
		return "gaowa_trigger_front";
	}
	else
	{
		return "gaowa_trigger_back";
	}
	return "";
}

int func_277(int iParam0)
{
	if (!func_129(&uLocal_533, 524288))
	{
		if (!func_129(&uLocal_533, 16384))
		{
			switch (iParam0)
			{
				case 0:
					return -1908453874;
				case 1:
					return -1619093821;
				case 2:
					return -346294909;
				case 3:
					return -1985066158;
				case 4:
					return -1395814000;
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 1635109100;
				case 1:
					return 1395403865;
				case 2:
					return 153059716;
				default:
					break;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1635109100;
			case 1:
				return 1395403865;
			case 2:
				return 153059716;
			default:
				break;
		}
	}
	return func_94();
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("wagon02x");
		default:
			break;
	}
	return 0;
}

Vector3 func_279(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(4, 8);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(6, 8);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 8);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_280(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_457(4, 8);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_457(6, 8);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_457(0, 8);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_457(1, 8);
			default:
				break;
		}
	}
	return 0f;
}

bool func_281(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_282(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(0, 17);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(1, 17);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_283(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_457(0, 17);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_457(1, 17);
			default:
				break;
		}
	}
	return 0f;
}

void func_284(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_458(iParam1))
		{
			func_459(iParam0, 41788943);
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
			func_460(iParam0, 0, 1);
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
			func_461(iParam0, 0);
			bVar0 = true;
		}
		func_462(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_285(int iParam0)
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

Vector3 func_286(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_463(uParam0, iParam1) };
	return vVar0;
}

var func_287(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_463(uParam0, iParam1) };
	return Var0.f_3;
}

int func_288(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return -1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

bool func_290(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_291(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_373(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_373(iVar4) && iVar4 != bVar0)
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
	if (func_371() == -1 && !func_464(bVar0))
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
				if (func_464(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_373(bVar0))
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
		func_465(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_466(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_467(bVar0))
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

int func_292(var uParam0, int iParam1, int iParam2)
{
	if (func_129(&uParam0, 16384))
	{
		if (!func_129(&uParam0, 524288))
		{
			switch (iParam2)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 4;
				case 3:
					return 5;
				case 5:
					return 4;
				default:
					break;
			}
			return 5;
		}
	}
	if (iParam1 == 0)
	{
		switch (iParam2)
		{
			case 0:
				return 0;
			case 1:
				return 0;
			case 2:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			case 5:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				return 0;
			case 3:
				return 0;
			case 4:
				return 0;
			case 5:
				return 1;
			default:
				break;
		}
	}
	return -1;
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 1:
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case 2:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		case 3:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 4:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 5:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		default:
			break;
	}
	return "";
}

float func_294(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_295(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber") && DECORATOR::DECOR_GET_BOOL(iParam0, "bValidRobber"))
	{
		return 1;
	}
	return 0;
}

bool func_296(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_297(var uParam0)
{
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		func_40(&(uParam0->f_256), 0);
		if (func_47(&(uParam0->f_256), 1.5f))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_298(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_468(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_469(uParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_299(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam1;
	if (iVar0 < 6)
	{
		iVar1 = VEHICLE::_0xA8BA0BAE0173457B(iParam0, iVar0);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_300()
{
	if (iLocal_447 < 1)
	{
		if (func_301(Global_35, &(iLocal_523[1]), 1, 0))
		{
			return 1;
		}
	}
	else if (!Local_450.f_2)
	{
		if (!func_348())
		{
			return 1;
		}
	}
	return 0;
}

bool func_301(int iParam0, int iParam1, bool bParam2, int iParam3)
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

Vector3 func_302(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(4, 12);
				case 4:
					return func_447(4, 13);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(6, 14);
				case 4:
					return func_447(6, 15);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(0, 12);
			case 4:
				return func_447(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(1, 14);
			case 4:
				return func_447(1, 15);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_303(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

float func_304(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_457(4, 12);
				case 4:
					return func_457(4, 13);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_457(6, 14);
				case 4:
					return func_457(6, 15);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_457(0, 12);
			case 4:
				return func_457(0, 13);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_457(1, 14);
			case 4:
				return func_457(1, 15);
			default:
				break;
		}
	}
	return 0f;
}

Vector3 func_305(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(5, 4);
				case 4:
					return func_447(5, 3);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(7, 5);
				case 4:
					return func_447(7, 6);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(2, 4);
			case 4:
				return func_447(2, 3);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(3, 5);
			case 4:
				return func_447(3, 6);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_306(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	func_161(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_201(240f, 1, 0);
		func_194(120, 0, 1);
	}
	(Global_40.f_9632[iParam0 /*4*/])->f_1++;
	Var2 = { func_165(85200619) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		(Global_40.f_9632[iParam0 /*4*/])->f_3 = (iVar1 + func_470(iParam0, 1));
	}
	func_168(0, 13);
}

void func_307()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_471();
}

bool func_308(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_ETRIGGER";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_ETRIGGER";
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBUSH_WAM_TRIGGER";
		default:
			break;
	}
	return "AMBUSH_WAM_V2_TRIGGER";
}

void func_312(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_313(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

int func_314(int iParam0, int iParam1)
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

Vector3 func_315(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 3:
					return func_447(4, 14);
				case 4:
					return func_447(4, 15);
				case 2:
					return func_447(4, 4);
				case 0:
					return func_447(4, 6);
				case 1:
					return func_447(4, 7);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 3:
					return func_447(6, 12);
				case 4:
					return func_447(6, 13);
				case 2:
					return func_447(6, 4);
				case 0:
					return func_447(6, 6);
				case 1:
					return func_447(6, 7);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 3:
				return func_447(0, 14);
			case 4:
				return func_447(0, 15);
			case 2:
				return func_447(0, 4);
			case 0:
				return func_447(0, 6);
			case 1:
				return func_447(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 3:
				return func_447(1, 12);
			case 4:
				return func_447(1, 13);
			case 2:
				return func_447(1, 4);
			case 0:
				return func_447(1, 6);
			case 1:
				return func_447(1, 7);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

int func_316(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

var func_317(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	var uVar0;
	var uVar1;

	uVar0 = iParam9;
	func_472(&uVar0);
	if (func_198(uVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_473(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_198(uVar0, 134217728))
	{
		func_474(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_475(558))
				{
					func_476(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

bool func_318(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_319(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_444((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_320(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_477(uParam0, 0))
		{
			func_330(uParam0, 0, 1);
		}
		if (!func_477(uParam0, 1))
		{
			func_330(uParam0, 1, 1);
		}
	}
	else
	{
		if (iParam2 || func_477(uParam0, 0))
		{
			func_330(uParam0, 0, 0);
		}
		if (iParam2 || func_477(uParam0, 1))
		{
			func_330(uParam0, 1, 0);
		}
	}
}

void func_321(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

int func_322(int iParam0, int iParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_323(float fParam0)
{
	if (func_478(1))
	{
		return 1;
	}
	if (func_60(&uLocal_0) && !func_479(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_324(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_325(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_326(int iParam0, int iParam1, int iParam2)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0)) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		VEHICLE::_0xFFFE15B433300B8C(iParam0, iParam1, iParam2);
	}
}

int func_327()
{
	if (func_480(&(Local_179.f_49[0])))
	{
		return 1;
	}
	if (iLocal_449 <= 4)
	{
		if (func_177())
		{
			return 1;
		}
		if (!func_69(vLocal_540))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_540, false) > 8f)
			{
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_540, 70f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_328(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_329()
{
	Local_450.f_16 = "GANG_INTERACT_DEMAND_MONEY";
	Local_450.f_21 = 1;
	Local_450.f_17 = "GANG_INTERACT_DEMAND_MONEY_PAT";
	Local_450.f_22 = 1;
	Local_450.f_18 = "GANG_INTERACT_KNOCKOUT";
	Local_450.f_23 = 2;
	Local_450.f_19 = "CALLOUT_FOLLOW_ROB_ATTACK_MALE";
	Local_450.f_24 = 2;
}

void func_330(var uParam0, int iParam1, int iParam2)
{
	func_481(uParam0->f_106[iParam1 /*17*/], iParam2, 0);
}

void func_331()
{
	PED::SET_PED_RESET_FLAG(Global_35, 179, true);
}

void func_332(var uParam0)
{
	if (func_296(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	}
}

int func_333()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (&Local_179.f_9[iVar0] < 2.5f)
		{
			return 1;
		}
		iVar0++;
	}
	if (!bLocal_28 && !func_482())
	{
		if (func_47(vLocal_487[0 /*3*/], 24f))
		{
			if (func_144(0, 1, 0, 0) && !func_322(Global_35, 1))
			{
				return 1;
			}
		}
		else if (!func_129(&uLocal_533, 131072))
		{
			if ((func_144(0f, 1, &(Local_179[0]), 1) && func_144(0f, 1, &(Local_179[1]), 1)) && func_144(0f, 1, Global_35, 1))
			{
				if (func_296(Global_35))
				{
					func_157(&(Local_179[1]), Global_35, "ORDER_DISMOUNT", 1, -1073741824, 1744022339);
				}
				else
				{
					func_157(&(Local_179[1]), Global_35, "HANDS_UP", 1, -1073741824, 1744022339);
				}
				func_138(&uLocal_533, 131072);
			}
		}
		else if (!func_129(&uLocal_533, 262144))
		{
			if (((func_144(0, 1, 0, 0) && func_144(0f, 1, &(Local_179[0]), 1)) && func_144(0f, 1, &(Local_179[1]), 1)) && func_144(0f, 1, Global_35, 1))
			{
				func_157(&(Local_179[0]), Global_35, "GANG_INTERACT_THREATEN", 1, -1073741824, 1744022339);
				func_138(&uLocal_533, 262144);
			}
		}
	}
	return 0;
}

int func_334(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return 0;
}

void func_335(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(2, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2103129879, false);
	PAD::DISABLE_CONTROL_ACTION(2, 2103129879, false);
}

void func_336()
{
	char[] cVar0[8];

	if (!func_129(&uLocal_533, 16384))
	{
		return;
	}
	if (func_129(&uLocal_533, 1048576))
	{
		return;
	}
	cVar0 = func_131(uLocal_533, 0, 0);
	func_132(&(Local_179[1]), cVar0, 0);
	cVar0 = func_131(uLocal_533, 0, 1);
	func_132(&(Local_179[0]), cVar0, 0);
	func_138(&uLocal_533, 1048576);
}

void func_337(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, bool bParam8)
{
	int iVar0;

	if (!func_30(uParam0, 32))
	{
		if (!func_296(Global_35))
		{
			uParam0->f_56 = Global_1935630->f_41;
			if (func_61(uParam0->f_56, 0, 1))
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_56, -1))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_56, 1, 0);
				}
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam1, 2048, 0, 0, -1, -1, 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_56, 355, true);
				if (func_69(vParam2))
				{
					TASK::TASK_SMART_FLEE_PED(uParam0->f_56, uParam0[0], fParam6, 6000, 0, 2f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam5, 20000, fParam7, false, 40000f);
					if (bParam8)
					{
						TASK::TASK_SMART_FLEE_PED(0, uParam0[0], fParam6, 6000, 0, 2f, 0);
					}
					func_215(uParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				func_22(uParam0, 32);
			}
		}
	}
}

int func_338()
{
	if (Local_450 > 0)
	{
		return 1;
	}
	if (func_483(&Local_179, 0, 0))
	{
		return 0;
	}
	if (!func_144(0f, 1, Global_35, 1) && !func_144(0f, 1, &(Local_179[1]), 1))
	{
		return 0;
	}
	func_40(&uLocal_546, 0);
	if (func_47(&uLocal_546, 1.5f))
	{
		return 1;
	}
	return 0;
}

int func_339(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	func_173(iParam1);
	if (Global_1935630->f_12)
	{
		iParam1->f_1 = 0;
		iParam1->f_2 = 1;
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
	PAD::DISABLE_CONTROL_ACTION(0, -124244224, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2103129879, false);
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	switch (*iParam1)
	{
		case 0:
			if (!iParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_16))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_356(iParam0, Global_35, iParam1->f_16, 0, -1082130432, iParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_0x3E592D0486DEC0F6(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !func_314(Global_35, 501393341)) && !func_314(Global_35, 1553520516)) && !func_314(Global_35, 451360105))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				iParam1->f_25 = { Global_36 };
				if (func_198(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, -1871534317, false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				if (func_373(Global_1935630->f_44))
				{
					func_40(&(iParam1->f_32), 0);
				}
				else
				{
					func_485(&(iParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!func_475(609))
				{
					func_377(1);
					iParam1->f_28 = func_486("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_487(609, &uVar0, &uVar1);
					func_488(&uVar0, &uVar1);
				}
				iParam1->f_8 = 1;
				*iParam1 = 2;
			}
			break;
		case 2:
			if (((!iParam1->f_12 && !iParam1->f_13) && func_47(&(iParam1->f_32), 2f)) && func_489(iParam0, -663203358, "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_490(&(iParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, 130948705, 1097859072, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					iParam1->f_12 = 1;
				}
				if (!iParam1->f_14)
				{
					if (func_374(iParam1->f_36))
					{
						iParam1->f_14 = 1;
					}
				}
			}
			if (iParam1->f_14)
			{
				if (func_489(iParam0, 534755167, "bEndSuccess", 1, 1.8f, 1))
				{
					func_375(&(iParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				iParam1->f_1 = 1;
				return 1;
			}
			bVar2 = false;
			if (func_491() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630->f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && func_314(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_492(iParam1))
			{
				bVar2 = true;
			}
			else if (func_493(iParam1, iParam11))
			{
				bVar2 = true;
			}
			else if ((func_198(iParam5, 16) && !func_314(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1898385492))
			{
				bVar2 = true;
			}
			if (!iParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_356(Global_35, iParam0, iParam1->f_20, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_375(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				iParam1->f_6 = 1;
				return 1;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1898385492))
			{
				if (iParam6 != 0)
				{
					func_494(iParam6, 1, 0, -142743235, 0);
					func_495(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(func_496(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_497(iVar3, 0, 0, 1, 1);
					func_498(iVar3);
					func_366(iParam0, &iVar4);
					func_367(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!iParam1->f_3)
				{
					iParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_489(iParam0, -1631911761, "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					iParam1->f_5 = 1;
					return 1;
				}
			}
			if (func_489(iParam0, 641027726, "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_17))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(0f, 1, iParam0, 1))
					{
						func_356(iParam0, Global_35, iParam1->f_17, 0, -1082130432, iParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_15 = 1;
			}
			if (func_489(iParam0, -502975245, "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						func_484(0);
					}
				}
				if (iParam1->f_11)
				{
					if (func_144(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
						{
							func_356(iParam0, Global_35, iParam1->f_18, 0, -1082130432, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_144(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_18))
					{
						func_356(iParam0, Global_35, iParam1->f_18, 0, -1082130432, iParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_375(&(iParam1->f_36), 1, 1);
				iParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				iParam1->f_4 = 1;
			}
			if (func_489(iParam0, 1729031946, "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_19))
				{
					if (bParam3)
					{
						func_484(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_356(iParam0, Global_35, iParam1->f_19, 0, -1082130432, iParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iParam1->f_2 = 0;
				iParam1->f_3 = 1;
			}
			if (func_489(iParam0, 1842457532, "Blendout", iParam8, 0.8f, 0) || !func_314(iParam0, 2137044382))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_340()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_61(&(Local_179[iVar0]), 0, 0))
		{
		}
		else
		{
			func_205(Local_179.f_22[iVar0]);
			switch (iVar0)
			{
				case 0:
					func_499(&(Local_179[iVar0]), &(Local_179.f_49[0]), -1, 2f, -1, 131073);
					break;
				case 1:
					func_499(&(Local_179[iVar0]), &(Local_179.f_49[0]), 0, 2f, -1, 262145);
					break;
				case 2:
					func_341(&(Local_179[iVar0]), &(Local_179.f_40[0]), 0, 2f, 20000);
					break;
			}
		}
		iVar0++;
	}
}

int func_341(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iParam1, 0)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, bParam2);
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1868526510, 1) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_342()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_61(&(Local_179[iVar0]), 0, 0))
		{
			return 0;
		}
		switch (iVar0)
		{
			case 0:
			case 1:
				if (!PED::IS_PED_IN_VEHICLE(&(Local_179[iVar0]), &(Local_179.f_49[0]), false))
				{
					return 0;
				}
				break;
			default:
				if (!PED::IS_PED_ON_MOUNT(&(Local_179[iVar0])))
				{
					return 0;
				}
				break;
		}
		iVar0++;
	}
	return 1;
}

void func_343()
{
	int iVar0;
	int iVar1;

	func_54(&Local_179);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_61(&(Local_179[iVar0]), 0, 0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					if (func_129(&uLocal_533, 2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_GOTO_NAVMESH(0, &(Local_179.f_49[0]), -64.83394f, 379.5077f, 112.7398f, 14f, 0, 3f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), -96.77056f, 577.9213f, 113.7471f, 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 0, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), 170.4856f, 621.06f, 126.3277f, 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 0, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), func_500(36, 1), 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 0, 5f, 2f);
						func_215(&(Local_179[iVar0]), &iVar1, 0, 0, 1, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_GOTO_NAVMESH(0, &(Local_179.f_49[0]), -120.3455f, 290.5117f, 101.7626f, 14f, 524308, 3f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), -75.02242f, 304.6132f, 105.9758f, 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 67633172, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), -45.25683f, 339.4475f, 113.1327f, 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), 101.9358f, 41.27348f, 99.3008f, 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), 494.5761f, 350.9439f, 105.0089f, 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 67108864, 5f, 2f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, &(Local_179.f_49[0]), func_500(36, 1), 14f, 0, ENTITY::GET_ENTITY_MODEL(&(Local_179.f_49[0])), 67108864, 5f, 2f);
						func_215(&(Local_179[iVar0]), &iVar1, 0, 0, 1, 1);
					}
					break;
				case 1:
					break;
				default:
					TASK::_TASK_SMART_FLEE_STYLE_PED_VIA(&(Local_179[iVar0]), Global_35, 4, func_500(36, 1), 8941956, -1082130432, -1, 0);
					break;
			}
		}
		iVar0++;
	}
}

void func_344(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_501(uParam0, 1);
	func_502(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_345(var uParam0, int iParam1)
{
}

int func_346(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_503(uParam0))
			{
				func_345(uParam0, 1);
				return 1;
			}
			break;
		case 1:
			if (func_504(uParam0))
			{
				func_345(uParam0, 2);
				return 1;
			}
			break;
		case 2:
			if (func_505(uParam0))
			{
				func_345(uParam0, 3);
				return 1;
			}
			break;
		case 3:
			if (func_506(uParam0))
			{
				func_345(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			if (func_507(uParam0))
			{
				func_345(uParam0, 5);
				return 1;
			}
			break;
		case 5:
			if (func_508(uParam0))
			{
				func_345(uParam0, 6);
				return 1;
			}
			break;
		case 6:
			break;
	}
	uParam0->f_224++;
	uParam0->f_224 = (uParam0->f_224 % 7);
	return 0;
}

void func_347(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, int iParam13, float fParam14)
{
	if (func_509(&(uParam1->f_3), 1))
	{
		func_510(uParam1);
		if (func_511(iParam0, fParam7, fParam11, bParam12, iParam13, fParam14))
		{
			func_307();
		}
	}
	if (func_512(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_513(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

int func_348()
{
	vector3 vVar0;

	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &vVar0, 1, 3f, 0f);
	if (!func_69(vVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > 12f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_349()
{
	return func_301(Global_35, &(iLocal_523[5]), 1, 0);
}

bool func_350()
{
	return func_301(Global_35, &(iLocal_523[4]), 1, 0);
}

bool func_351()
{
	return func_301(Global_35, &(iLocal_523[3]), 1, 0);
}

bool func_352(var uParam0)
{
	return func_30(uParam0, 64);
}

int func_353()
{
	int iVar0;
	var uVar1;
	float fVar2;

	if (func_349())
	{
		func_40(vLocal_487[2 /*3*/], 0);
	}
	else
	{
		func_150(vLocal_487[2 /*3*/]);
		func_207(vLocal_487[2 /*3*/]);
	}
	if (func_47(vLocal_487[2 /*3*/], 0.33f))
	{
		return 1;
	}
	iVar0 = func_514(Global_35);
	if (func_61(iVar0, 0, 1))
	{
		PED::_0xF60165E1D2C5370B(iVar0, &uVar1, &fVar2);
		if (fVar2 < 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_354(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_436(*uParam1, 128))
	{
		if (!func_314(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_436(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_515(iVar2))
			{
				return 0;
			}
			if (!func_314(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_516(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_436(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_198(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0)));
			func_517(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_436(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_436(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_515(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_198(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_198(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_198(iParam2, 8192))
				{
					HUD::_DISABLE_HUD_CONTEXT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_436(*uParam1, 2336))
		{
			if (!func_515(iVar2))
			{
			}
			if (func_518(iVar2, *uParam1))
			{
				func_519(uParam1, 32);
				func_519(uParam1, 256);
				func_519(uParam1, 2048);
				func_517(uParam1, 512);
				func_517(uParam1, 1024);
				func_517(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_436(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_515(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_519(uParam1, 64);
			}
		}
		if (func_198(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_198(iParam2, 1024))) || func_198(iParam2, 8)) && !func_436(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_517(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_198(iParam2, 4096)) && !func_436(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_517(uParam1, 2048);
			func_517(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_198(iParam2, 32)) && !func_436(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_517(uParam1, 256);
			func_517(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_517(uParam1, 64);
		}
		else if (!func_198(iParam2, 1))
		{
			if (!func_198(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_516(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_436(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_517(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_517(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_198(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_517(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_198(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_517(uParam1, 8);
	}
	return 0;
}

bool func_355(int iParam0, int iParam1)
{
	return func_520(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

bool func_356(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_521(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_357()
{
	return Global_1310750->f_16037;
}

bool func_358(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_358(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_360(int iParam0)
{
	if (!func_358(iParam0))
	{
		return 0;
	}
	if (func_522(64) && func_523(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_361(int iParam0)
{
	if (!func_358(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_362(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_358(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_524(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_363(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_364(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_365(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_366(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return ENTITY::_0xBA2A089E60ED1163(iParam1, iParam0, 2084597891, 0, 0);
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		return 0;
	}
	*iParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
	return 1;
}

bool func_367(int iParam0, int iParam1)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_525(iParam0);
		return func_526(iParam0, 2084597891, iParam1, uVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_368(int iParam0)
{
}

void func_369(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_370()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_371()
{
	return Global_1572887->f_12;
}

void func_372(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (&uParam0->f_97[iParam1] - (uParam0->f_97[iParam1] && iParam2));
}

bool func_373(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_374(int iParam0)
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

void func_375(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_374(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_527(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_528(iVar0);
	*uParam0 = 0;
}

bool func_376(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

void func_377(int iParam0)
{
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_371() != -1)
	{
		uVar3 = &Global_36637.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36637.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = &Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

int func_379(int iParam0)
{
	float fVar0;

	if (!func_61(&(Local_179[iParam0]), 0, 0))
	{
		return 0;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(&(Local_179[iParam0])))
	{
		return 0;
	}
	if (func_204(&(Local_179[iParam0]), Global_36, 1) < 5f)
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 0.5f;
			break;
		case 2:
			fVar0 = 0.7f;
			break;
		case 3:
			fVar0 = 0.2f;
			break;
		case 4:
			fVar0 = 0.5f;
			break;
	}
	if (func_129(&uLocal_533, 16))
	{
		return 0;
	}
	if (func_47(vLocal_487[1 /*3*/], fVar0))
	{
		return 0;
	}
	return 1;
}

void func_380(int* iParam0, var uParam1)
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
	func_529(iParam0, uParam1, 1);
	func_530(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_381(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_382()
{
	vector3 vVar0;
	vector3 vVar3;

	if (func_129(&uLocal_533, 16384))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_179.f_49[0]), 5f, -15f, 0f) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_179.f_49[0]), 5f, 15f, 0f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_179.f_49[0]), 10f, -15f, 0f) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_179.f_49[0]), 10f, 15f, 0f) };
	}
	if (func_531(vVar0, vVar3, Global_36))
	{
		return 1;
	}
	return 0;
}

int func_383()
{
	if (PED::GET_VEHICLE_PED_IS_IN(Global_35, false) == &Local_179.f_49[0])
	{
		return 1;
	}
	if (func_299(&(Local_179.f_49[0]), &iLocal_32))
	{
		return 1;
	}
	iLocal_32++;
	if (iLocal_32 >= 2)
	{
		iLocal_32 = 0;
	}
	return 0;
}

void func_384(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (bParam1)
	{
		if (!func_532(610))
		{
			if (!func_533())
			{
				func_534(1);
				func_535();
			}
		}
		func_476(610, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, true);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::_0x870708A6E147A9AD(iParam0, "", fParam2, fParam2, 0, 0, 0, 0, 0, -1);
		}
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), iParam0, 1, 0);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			MISC::_0x870708A6E147A9AD(iParam0, "", fParam2, fParam2, 8, 0, 0, 0, 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, false);
		if (!bParam3)
		{
			PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
		}
	}
}

Vector3 func_385(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_447(5, 0);
				case 2:
					return func_447(5, 1);
				case 4:
					return func_447(5, 2);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_447(7, 1);
				case 1:
					return func_447(7, 0);
				case 2:
					return func_447(7, 3);
				case 3:
					return func_447(7, 4);
				case 4:
					return func_447(7, 2);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_447(2, 0);
			case 2:
				return func_447(2, 1);
			case 4:
				return func_447(2, 2);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_447(3, 1);
			case 1:
				return func_447(3, 0);
			case 2:
				return func_447(3, 3);
			case 3:
				return func_447(3, 4);
			case 4:
				return func_447(3, 2);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_386(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1.75f;
				case 2:
					return 1.75f;
				case 4:
					return 3f;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1.75f;
				case 1:
					return 1.75f;
				case 3:
					return 3f;
				case 2:
					return 1f;
				case 4:
					return 2f;
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1.75f;
			case 2:
				return 1.75f;
			case 4:
				return 3f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1.75f;
			case 1:
				return 1.75f;
			case 3:
				return 3f;
			case 2:
				return 1f;
			case 4:
				return 2f;
			default:
				break;
		}
	}
	return -1f;
}

int func_387(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 2:
					return 1;
				case 4:
					return 0;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 3:
					return 1;
				case 4:
					return 1;
				case 2:
					return 1;
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 1;
			case 4:
				return 0;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			case 2:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

int func_388(var uParam0, int iParam1)
{
	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 2:
					return 1;
				case 4:
					return 1;
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 1;
				case 3:
					return 1;
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 1;
			case 4:
				return 1;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 3:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

int func_389(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_390(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_204(uParam0[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_146(uParam0[iParam1], 1065353216), func_146(Global_35, 1065353216), true);
	if (fVar0 < 10f)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(uParam0[iParam1]))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COVER(uParam0[iParam1], 1, 0))
	{
		return 1;
	}
	if (fVar1 < (fVar0 - 2f))
	{
		return 0;
	}
	return 1;
}

int func_391()
{
	if (func_371() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_392(var uParam0, int iParam1)
{
	func_257(uParam0, iParam1);
}

int func_393()
{
	if (func_371() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_394(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

int func_395(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
	fVar1 = BUILTIN::TO_FLOAT((iVar0 / iParam1));
	if (fVar1 > 0.8f || (func_24() - fParam2) < 4f)
	{
		return 2;
	}
	else if (fVar1 < 0.3f)
	{
		return 4;
	}
	return 1;
}

char* func_396(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		if (func_198(iParam3, 1))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL";
				case 2:
					return "WON_FIGHT_EXCONFED";
				case 1:
					return "WON_FIGHT_INBRED";
				case 3:
					return "WON_FIGHT_SAVAGES";
				case 5:
					return "WON_FIGHT_BANDITOS";
				case 4:
					return "WON_FIGHT_RANCHERS";
				case 10:
					return "WON_FIGHT_PINKERTONS";
				default:
					break;
			}
		}
		else if (func_198(iParam3, 2))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_DOM";
				case 2:
					return "WON_FIGHT_EXCONFED_DOM";
				case 1:
					return "WON_FIGHT_INBRED_DOM";
				case 3:
					return "WON_FIGHT_SAVAGES_DOM";
				case 5:
					return "WON_FIGHT_BANDITOS_DOM";
				case 4:
					return "WON_FIGHT_RANCHERS_DOM";
				case 10:
					return "WON_FIGHT_PINKERTONS_DOM";
				default:
					break;
			}
		}
		else if (func_198(iParam3, 4))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_LOWH";
				case 2:
					return "WON_FIGHT_EXCONFED_LOWH";
				case 1:
					return "WON_FIGHT_INBRED_LOWH";
				case 3:
					return "WON_FIGHT_SAVAGES_LOWH";
				case 5:
					return "WON_FIGHT_BANDITOS_LOWH";
				case 4:
					return "WON_FIGHT_RANCHERS_LOWH";
				case 10:
					return "WON_FIGHT_PINKERTONS_LOWH";
				default:
					break;
			}
		}
	}
	return "WON_FIGHT";
}

int func_397()
{
	return &Global_1899515;
}

int func_398(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 36:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 38:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 35:
			iVar0 = 2;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 42:
			iVar0 = 2;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 41:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 2;
			break;
		case 40:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 1;
			break;
		case 10:
			iVar0 = 2;
			break;
		case 37:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 2;
			break;
		case 12:
			iVar0 = 1;
			break;
		case 13:
			iVar0 = 1;
			break;
		case 14:
			iVar0 = 1;
			break;
		case 15:
			iVar0 = 1;
			break;
		case 16:
			iVar0 = 1;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 39:
			iVar0 = 2;
			break;
		case 18:
			iVar0 = 2;
			break;
		case 19:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 1;
			break;
		case 21:
			iVar0 = 1;
			break;
		case 22:
			iVar0 = 1;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 24:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 1;
			break;
		case 26:
			iVar0 = 1;
			break;
		case 27:
			iVar0 = 1;
			break;
		case 28:
			iVar0 = 1;
			break;
		case 29:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 1;
			break;
		case 32:
			iVar0 = 1;
			break;
		case 33:
			iVar0 = 2;
			break;
		case 34:
			iVar0 = 2;
			break;
		case 43:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_399(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

void func_400(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_402(func_536(iParam0) + 1, iParam0);
}

var func_401()
{
	return Global_1393447->f_51;
}

void func_402(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_403()
{
	func_404(Global_40.f_9632.f_196 + 1);
}

void func_404(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_405(int iParam0)
{
	func_537(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/] = &Global_40.f_9632[iParam0 /*4*/] + 1;
	if (&Global_40.f_9632[iParam0 /*4*/] > (Global_40.f_9632[iParam0 /*4*/])->f_1)
	{
		(Global_40.f_9632[iParam0 /*4*/])->f_1++;
	}
	func_168(0, 13);
}

void func_406(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_538(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_539(iVar1);
		func_537(iVar1, bVar0);
	}
	iVar1 = func_540(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_539(iVar1);
		func_537(iVar1, bVar0);
	}
	iVar1 = func_541(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_539(iVar1);
		func_537(iVar1, bVar0);
	}
}

void func_407(int iParam0, int iParam1, bool bParam2)
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

int func_408(int iParam0)
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

void func_409(int iParam0, int iParam1)
{
	if (!func_358(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_410(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_411(int iParam0)
{
	if (!func_358(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_412(int iParam0)
{
	if (func_358(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_413(int iParam0)
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

void func_414(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
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
	func_415(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_415(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_542(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_371() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

bool func_416(var uParam0)
{
	return func_227(*uParam0, 2);
}

int func_417(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_418(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_418(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_419(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_544(iParam0, 32);
	func_545();
}

void func_420(int iParam0)
{
	int iVar0;

	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_423(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_423(iParam0);
	}
}

int func_421(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

int func_422(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_423(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

int func_424(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_HOGTIED(iParam1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam1, Global_35))
	{
		if (func_237(iParam1, 200f, (30f * 3f), -1082130432, -1082130432))
		{
			return 0;
		}
	}
	else if (func_237(iParam1, 200f, 30f, -1082130432, -1082130432))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iParam1, 1)))
		{
			return 0;
		}
	}
	return 1;
}

int func_425(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_427(int iParam0)
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
	iVar0 = func_546(func_397());
	if (func_198(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_198(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_428(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_547(Global_35, iParam0, 0, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_429(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	if (func_245(iParam1, 120f, 30f))
	{
		return 0;
	}
	return 1;
}

float func_430(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_328(Global_35, iParam0, bParam1, iParam2);
}

Vector3 func_431(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_432(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_433(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_431(vVar0, vVar3, 0f) };
	vVar9 = { func_432(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_434(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_238);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_238);
	}
}

int func_435(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_436(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_437(int iParam0)
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

int func_438(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_439(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_440(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_548(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

char* func_441(int iParam0)
{
	if (func_549(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_442(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_374(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_550(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_551(iParam0->f_6, iParam0->f_5, 0);
			}
			func_552(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_553(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_443()
{
	return "ORR_V2_ILO_NEG";
}

void func_444(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_554(iParam0, 13))
		{
			if (bParam2)
			{
				func_481(iParam0, 0, 0);
			}
			func_555(iParam0, 13);
		}
	}
	else if (func_554(iParam0, 13))
	{
		func_556(iParam0, 13);
	}
}

void func_445()
{
	if (func_129(&uLocal_533, 2))
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), 725.1475f, -448.0963f, 83.0689f, 0f, 0f, 136.9009f, 56.30475f, 93.34787f, 15.65002f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), 655.288f, -409.3354f, 89.28727f, 0f, 0f, 146.3069f, 56.30475f, 106.0022f, 24.81304f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(723.0323f, -446.1176f, 83.0689f, 0f, 0f, 136.9009f, 62.13698f, 93.34787f, 15.65002f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 658.0131f, -540.8625f, 62.43887f, 0f, 0f, 156.6684f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 815.4044f, -449.4122f, 62.43887f, 0f, 0f, 148.5282f, 101.063f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 632.79f, -337.6293f, 62.43887f, 0f, 0f, 148.5282f, 148.9367f, 236.6828f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(706.9374f, -404.5294f, 89.061f, 0f, 0f, 136.716f, 34.74449f, 32.68204f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(700.6584f, -414.4554f, 89.06124f, 0f, 0f, 136.716f, 14.54379f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(691.767f, -423.701f, 89.061f, 0f, 0f, 136.716f, 10.89182f, 32.68204f, 11.48877f, "volSlowest");
		iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(740.3391f, -461.0711f, 83.33646f, 0f, 0f, 156.7456f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
	}
	else
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), 637.2888f, -415.046f, 100.3093f, 0f, 0f, -50.42155f, 56.30475f, 64.81712f, 51.95887f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), 697.9006f, -459.1436f, 89.28727f, 0f, 0f, -41.01562f, 41.01216f, 94.53839f, 40.84854f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(635.3097f, -412.6505f, 98.7776f, 0f, 0f, -50.42154f, 62.13698f, 93.34787f, 28.13465f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 715.6987f, -331.594f, 62.43887f, 0f, 0f, -30.65407f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 637.2098f, -355.8026f, 90.84097f, 0f, 0f, -50.19184f, 130.8701f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 718.1372f, -539.7453f, 62.43887f, 0f, 0f, -45.33796f, 169.5687f, 236.6828f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(654.6968f, -458.8107f, 89.06124f, 0f, 0f, -50.6065f, 34.74449f, 32.68204f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(661.8083f, -452.7553f, 89.06124f, 0f, 0f, -50.6065f, 29.81209f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(669.8329f, -444.6637f, 89.06124f, 0f, 0f, -50.6065f, 22.01446f, 32.68204f, 11.48877f, "volSlowest");
		iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(623.8749f, -400.2407f, 83.33646f, 0f, 0f, -30.57684f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
	}
}

void func_446()
{
	Local_179.f_239 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAmbientKillArea");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_179.f_239, -91.40433f, 320.485f, 99.97915f, 0f, 0f, 25.04761f, 89.26486f, 100.682f, 52.32938f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_179.f_239, -115.2348f, 312.9216f, 99.97916f, 0f, 0f, 25.04761f, 30.67535f, 141.5386f, 52.32938f);
	if (func_129(&uLocal_533, 2))
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), -113.0475f, 319.9516f, 102.2646f, 0f, 0f, -19.76745f, 56.30475f, 93.34787f, 15.65002f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), -33.54915f, 312.028f, 108.483f, 0f, 0f, -10.36155f, 56.30475f, 106.0022f, 24.81304f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), -124.972f, 275.153f, 102.604f, 0f, 0f, 70f, 4f, 6f, 2f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volWarpPeds");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[8]), -110.3219f, 318.9721f, 102.2646f, 0f, 0f, -19.76745f, 62.13698f, 93.34787f, 15.65002f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[8]), -124.972f, 275.153f, 102.604f, 0f, 0f, 70f, 4f, 6f, 2f);
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), -88.14307f, 431.7215f, 81.63461f, 0f, 0f, 0f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), -196.4457f, 285.413f, 81.63461f, 0f, 0f, -8.140158f, 101.063f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), 15.50913f, 255.0958f, 81.63461f, 0f, 0f, -8.140158f, 148.9367f, 236.6828f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), -135.694f, 282.614f, 103.588f, 0f, 0f, 62f, 11f, 21f, 10f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-83.0128f, 275.6543f, 108.257f, 0f, 0f, -19.95239f, 34.74449f, 40.60586f, 11.48877f, "volSlow");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-74.91033f, 299.8469f, 108.257f, 0f, 0f, -19.95239f, 31.96415f, 32.68204f, 11.48877f, "volSlower");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-68.36612f, 317.3996f, 108.257f, 0f, 0f, -19.95239f, 28.83469f, 32.68204f, 11.48877f, "volSlowest");
	}
	else
	{
		iLocal_523[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), -82.823f, 324.78f, 95.66585f, 0f, 0f, 10.25873f, 66.57899f, 103.55f, 34.00753f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[1]), -162.771f, 311.783f, 95.66585f, 0f, 0f, 16.10305f, 40.82469f, 103.55f, 34.00753f);
		iLocal_523[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-85.20458f, 324.349f, 95.66585f, 0f, 0f, 10.25873f, 71.66914f, 103.55f, 34.00753f, "volWarpPeds");
		iLocal_523[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), -77.10319f, 227.3434f, 81.63461f, 0f, 0f, -163.1078f, 368.1186f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), -31.49129f, 388.9274f, 81.63461f, 0f, 0f, -157.6661f, 163.6616f, 211.3185f, 117.7756f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_523[2]), -247.5605f, 378.8534f, 81.63461f, 0f, 0f, -150.3424f, 126.4329f, 56.91168f, 117.7756f);
		iLocal_523[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-136.959f, 351.6969f, 101.151f, 0f, 0f, 24.03562f, 59.294f, 78.97474f, 13.489f, "volSlowNorth");
		iLocal_523[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-136.5299f, 349.0497f, 100.722f, 0f, 0f, 23.64807f, 60.407f, 24.49643f, 13.489f, "volSlowerNorth");
		iLocal_523[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-125.3727f, 323.3134f, 100.722f, 0f, 0f, 24.54023f, 58.95389f, 32.682f, 13.489f, "volSlowestNorth");
	}
	iLocal_523[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-132.1358f, 325.8486f, 102.5322f, 0f, 0f, 0.077269f, 23.10939f, 7.275199f, 4.432636f, "volBehindWagonNorth");
}

Vector3 func_447(int iParam0, int iParam1)
{
	return func_557(iParam0, iParam1);
}

void func_448(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

void func_449(var uParam0, vector3 vParam1, int iParam4)
{
	float fVar0;

	if (func_56(iParam4))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 180f;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, fVar0, fVar0, 40f, "volAmbush");
}

int func_450(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_558(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 9:
		case 10:
		case 11:
		case 16:
		case 37:
			return 0;
	}
	return 1;
}

int func_452(var uParam0)
{
	switch (uParam0->f_151)
	{
		case 3:
		case 4:
		case 6:
			return 6;
		case 0:
		case 1:
		case 2:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
			return 6;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			return 6;
		case 18:
		case 19:
		case 20:
			return 4;
		case 21:
		case 22:
		case 23:
			return 6;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
			return 6;
		case 29:
		case 30:
			return 6;
		case 31:
		case 32:
		case 33:
			return 6;
		case 38:
			return 6;
		case 34:
		case 35:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
			return 6;
		case 43:
			return 6;
		default:
			break;
	}
	return 4;
}

void func_453(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_431(vVar0, vVar3, 0f) };
	vVar9 = { func_432(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_454(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

int func_456()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

float func_457(int iParam0, int iParam1)
{
	return func_559(iParam0, iParam1);
}

int func_458(int iParam0)
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

void func_459(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_560(iParam0, iParam1))
		{
			if (func_561(iParam0, iParam1))
			{
				if (func_562(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_563(iParam0);
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

void func_460(int iParam0, int iParam1, bool bParam2)
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

void func_461(int iParam0, bool bParam1)
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

void func_462(int iParam0, int iParam1)
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

struct<4> func_463(var uParam0, int iParam1)
{
	struct<4> Var0;

	if (func_129(&uParam0, 64))
	{
		if (func_129(&uParam0, 2))
		{
			switch (iParam1)
			{
				case 0:
					return func_564(4, 0);
				case 1:
					return func_564(4, 1);
				case 2:
					return func_564(4, 2);
				case 3:
					return func_564(4, 10);
				case 4:
					return func_564(4, 11);
				default:
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return func_564(6, 0);
				case 1:
					return func_564(6, 1);
				case 2:
					return func_564(6, 2);
				case 3:
					return func_564(6, 10);
				case 4:
					return func_564(6, 11);
				default:
					break;
			}
		}
	}
	else if (func_129(&uParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return func_564(0, 0);
			case 1:
				return func_564(0, 1);
			case 2:
				return func_564(0, 2);
			case 3:
				return func_564(0, 10);
			case 4:
				return func_564(0, 11);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_564(1, 0);
			case 1:
				return func_564(1, 1);
			case 2:
				return func_564(1, 2);
			case 3:
				return func_564(1, 10);
			case 4:
				return func_564(1, 11);
			default:
				break;
		}
	}
	return Var0;
}

int func_464(int iParam0)
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

int func_465(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_565(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_566((375 + iVar28), 1);
			if (func_567(iParam0, &Var0, iVar5, 0))
			{
				if (func_568(iParam0, &Var6, iVar5))
				{
					Var29 = { func_569(iParam0, Var0, iVar5, 0) };
					func_570(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_571(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_572(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_573(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_466(int iParam0, int iParam1, float fParam2)
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

bool func_467(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_468(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_469(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_574(uParam2, 1, iVar0);
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
			if (func_575(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_576(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_577(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_578(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_579(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_89(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_576(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_580(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_581(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_576(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_582(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_576(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_583(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_583(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_576(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_584(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_585(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_586(uParam2, 4000))
				{
					if ((func_587(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_588(uParam2, iParam0)) && func_589(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_576(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_587(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_588(uParam2, iParam0)) && func_589(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_590(iParam0, Global_1935630->f_41))
							{
								func_591();
								*uParam3 = 2;
								func_576(iParam0, uParam2, *uParam3);
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
						if (func_590(iParam0, Global_1935630->f_41))
						{
							func_591();
							*uParam3 = 2;
							func_576(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_592(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_196() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_591();
						*uParam3 = 2;
						func_576(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_593())
					{
						if (func_590(iParam0, Global_1935630->f_42))
						{
							func_591();
							*uParam3 = 2;
							func_576(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_594(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_576(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_595(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_596(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_576(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_597(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_598(uParam2, 4000))
				{
					if (func_599(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_576(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_600(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_576(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_601(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_576(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_470(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 720;
				case 2:
					return 720;
				case 36:
					return 720;
				case 5:
				case 35:
					return 720;
				case 6:
				case 42:
					return 720;
				case 9:
					return 720;
				case 10:
					return 720;
				case 37:
					return 720;
				case 12:
					return 720;
				case 13:
					return 720;
				case 14:
					return 720;
				case 15:
					return 720;
				case 16:
					return 720;
				case 18:
					return 720;
				case 31:
					return 720;
				case 34:
					return 720;
				case 43:
					return 20;
				default:
					break;
			}
			return 3600;
		case 1:
			switch (iParam0)
			{
				case 43:
					return 20;
				default:
					break;
			}
			return 180;
	}
	return 180;
}

void func_471()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_472(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_473(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_472(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_602(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_150(&(iParam1->f_13));
		}
		if (func_603(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_604(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_473(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_313(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_605(*uParam0, 1, 1);
						}
					}
					else if (func_606(iParam1, 22))
					{
						func_605(*uParam0, 0, 1);
					}
				}
				if (func_607(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_608(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_609(iParam8);
					if (func_610(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_611(uParam3);
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
					func_612(iParam1, uParam3, fVar8);
					if (func_613(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_530(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_614(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_607(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_615(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_610(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_608(uParam0, func_607(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_609(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_530(uParam3, 0, 0, 1, 1);
					}
					func_616(iParam1, 1);
				}
				func_612(iParam1, uParam3, fVar8);
				if (func_614(uParam0, iParam1, fParam4, bVar6))
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
			func_380(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_474(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_617(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_356(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_371() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_476(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_487(iParam0, &iVar0, &iVar1);
	if (!func_618(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_619(iVar0, iVar1);
}

int func_477(var uParam0, int iParam1)
{
	if (func_620(uParam0->f_106[iParam1 /*17*/], 1, 0) && !func_554(uParam0->f_106[iParam1 /*17*/], 13))
	{
		return 1;
	}
	return 0;
}

bool func_478(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_479(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_207(uParam0);
		return 1;
	}
	return 0;
}

int func_480(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_0xA8BA0BAE0173457B(iParam0, iVar0);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 0, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_481(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_554(iParam0, 13))
	{
		func_555(iParam0, 0);
	}
	else
	{
		func_556(iParam0, 0);
	}
	if (func_374(iParam0->f_6))
	{
		if (bParam2)
		{
			func_375(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_482()
{
	if (((func_314(Global_35, 501393341) || func_314(Global_35, 1553520516)) || func_314(Global_35, 1920417248)) || PAD::IS_CONTROL_JUST_PRESSED(0, -874806616))
	{
		return 1;
	}
	return 0;
}

int func_483(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((func_314(Global_35, 501393341) || func_314(Global_35, 1553520516)) || func_314(Global_35, 1920417248))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return 1;
	}
	return 0;
}

void func_484(int iParam0)
{
	func_207(&uLocal_0);
	func_621(1, iParam0, 0);
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_622();
}

void func_485(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_60(uParam0))
	{
		func_344(uParam0, fParam1);
	}
}

var func_486(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_487(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

void func_488(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (func_371() != -1)
	{
		uVar0 = &Global_36637.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36637.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

int func_489(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_490(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_374(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_623(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_624(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_625(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_69(vParam2))
			{
				return 0;
			}
			*uParam0 = func_626(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_550(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_496(1))
			{
				func_552(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_627(*uParam0, 0, 1);
		}
		return 0;
	}
	if (!bParam16)
	{
		if (func_628(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_552(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_552(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_496(1))
		{
			func_552(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_374(*uParam0))
			{
				func_375(uParam0, 1, 1);
				return 0;
			}
		}
	}
	if ((!bParam17 && func_629(*uParam0, 1)) || (bParam17 && func_630(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_497(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_631(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_375(uParam0, 1, 1);
		return 1;
	}
	return 0;
}

int func_491()
{
	if (func_632(4))
	{
		return Global_1935630->f_27;
	}
	return func_633();
}

int func_492(var uParam0)
{
	if (uParam0->f_4)
	{
		return 0;
	}
	if (uParam0->f_9)
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		return 0;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(Global_1935630->f_44))
	{
		return 0;
	}
	if (func_47(&(uParam0->f_32), 1f))
	{
		if (!func_314(Global_35, 716706914))
		{
			return 1;
		}
	}
	return 0;
}

int func_493(var uParam0, var uParam1)
{
	if (uParam0->f_10)
	{
		return 0;
	}
	if ((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35))
	{
		if (uParam1 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_25, false) > 2f)
		{
			return 1;
		}
	}
	return 0;
}

int func_494(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_635(iParam0, 1);
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
			func_636(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_637(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_638(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_639(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_639(iParam0, 0, 0) - iParam1) < 0)
		{
			func_494(iParam0, func_639(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_640(iParam0) == -427144552)
	{
		if (!func_641(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_642(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_571(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_636(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_643(iParam0, iParam1);
	return 1;
}

void func_495(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_525(iParam0);
		func_526(iParam0, iParam1, iParam2, uVar0);
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

int func_496(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_497(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_644(iParam0);
	if (bParam3)
	{
		func_645(iParam0, sParam1, iParam2);
	}
}

void func_498(int iParam0)
{
	if (iParam0 < 200)
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("LOOT_MONEY", Global_35, "LOOT_BODY_SOUNDSET", 0, 0, 0);
	}
	else
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("LOOT_MONEY_BILLS", Global_35, "LOOT_BODY_SOUNDSET", 0, 0, 0);
	}
}

void func_499(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0, 0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam2) && !PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
			}
		}
	}
}

Vector3 func_500(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_646(iParam0))
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

void func_501(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_502(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_503(var uParam0)
{
	if ((Global_1935630->f_26 || PED::_0x5407B7288D0478B7(Global_35, 16384) > 0) || func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_504(var uParam0)
{
	if (!func_30(uParam0, 131072))
	{
		if (Global_1935630->f_40 == 0)
		{
			if (!func_30(uParam0, 16777216) || uParam0->f_20 < 60f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_505(var uParam0)
{
	if (func_647(50))
	{
		if (func_648(uParam0->f_209, 1, 8, 0))
		{
			return 1;
		}
	}
	if (func_649())
	{
		return 1;
	}
	if (Global_1430231->f_4)
	{
		func_650(21);
		return 1;
	}
	if (func_198(Global_1392581->f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		func_650(22);
		return 1;
	}
	return 0;
}

int func_506(var uParam0)
{
	if (!func_30(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_651(uParam0, 60f, uParam0->f_239))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_507(var uParam0)
{
	if (!func_30(uParam0, 524288))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_652(uParam0, 60f, uParam0->f_239))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_508(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_653(uParam0->f_151, uParam0->f_221))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_509(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_510(var uParam0)
{
	if (func_509(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_654(uParam0) || func_509(&(uParam0->f_3), 4)) && !func_509(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(1, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(2, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1722177808, false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, 2139949496, false);
	}
	if (func_655(uParam0))
	{
		func_307();
	}
	if (!func_509(&(uParam0->f_3), 16))
	{
		if (func_60(uParam0))
		{
			if (func_656(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_511(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	if (func_657(iParam0, fParam1, fParam2, bParam3, uParam4, fParam5))
	{
		return 1;
	}
	return 0;
}

int func_512(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_658(uParam3->f_7, uParam3->f_8))
	{
		return 0;
	}
	if (func_509(&(uParam3->f_3), 1))
	{
		return 0;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 0;
	}
	fVar0 = func_204(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return 0;
	}
	if (!func_659(vParam0, uParam3))
	{
		return 0;
	}
	if (!func_509(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return 0;
		}
		if (!func_660(vParam0, uParam3))
		{
			return 0;
		}
	}
	return 1;
}

void func_513(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_661(vParam1, 1);
	if (!func_509(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_150(uParam0);
	func_662(&(uParam0->f_3), 1);
}

int func_514(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

int func_515(int iParam0)
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
	if (func_314(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_516(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_531(vVar0, vVar3, vParam1);
}

void func_517(var uParam0, int iParam1)
{
	func_663(uParam0, iParam1);
}

int func_518(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_314(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_436(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_436(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_436(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_519(var uParam0, int iParam1)
{
	func_664(uParam0, iParam1);
}

int func_520(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_241())
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
				if (func_430(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_328(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_150(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_665(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_667(func_666(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_522(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_523(int iParam0)
{
	return func_359(iParam0, Global_1310750->f_16072 | 64);
}

void func_524(int iParam0)
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

int func_525(int iParam0)
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

var func_526(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, uParam3, iVar23, 2, 0);
}

int func_527(int iParam0)
{
	return iParam0;
}

void func_528(int iParam0)
{
	if (!func_668(iParam0))
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

void func_529(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_375(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_669(iParam0, 0);
		}
	}
}

void func_530(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_374(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_375(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_531(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_670(iParam0, 65536) && !func_670(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_670(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_670(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_533()
{
	if (!func_671() && func_672(1))
	{
		return 1;
	}
	return 0;
}

void func_534(int iParam0)
{
	func_377(1);
}

void func_535()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_673(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

int func_536(int iParam0)
{
	return &(Global_40.f_9632.f_184[iParam0]);
}

void func_537(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;

	Var2 = { func_165(85200619) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		uVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		(Global_40.f_9632[iParam0 /*4*/])->f_3 = uVar1;
		if (bParam1)
		{
			iVar4 = func_470(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * IntToFloat(iVar4)));
			(Global_40.f_9632[iParam0 /*4*/])->f_3 = ((Global_40.f_9632[iParam0 /*4*/])->f_3 + iVar4);
		}
		else
		{
			(Global_40.f_9632[iParam0 /*4*/])->f_3 = ((Global_40.f_9632[iParam0 /*4*/])->f_3 + func_470(iParam0, 0));
		}
	}
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 35;
		case 1:
		case 2:
			return 36;
		case 9:
		case 10:
			return 37;
		case 3:
		case 4:
			return 38;
		case 17:
			return 39;
		case 6:
			return 42;
		case 8:
			return 40;
		case 35:
			return 5;
		case 36:
			return 1;
		case 37:
			return 9;
		case 38:
			return 3;
		case 39:
			return 17;
		case 42:
			return 6;
		case 40:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 36:
		case 37:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 2;
		case 37:
			return 10;
		case 38:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 9:
			return 10;
		case 3:
			return 4;
		case 2:
			return 1;
		case 10:
			return 9;
		case 4:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_542(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

int func_543(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_544(int iParam0, int iParam1)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_545()
{
	if (func_674(0))
	{
		func_675(0);
	}
	if (func_674(1))
	{
		func_675(1);
	}
	if (func_674(5))
	{
		func_675(5);
	}
	if (func_674(6))
	{
		func_676(6);
	}
}

int func_546(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_547(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_677(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_678(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_548(int iParam0, bool bParam1)
{
	switch (func_679(iParam0))
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

int func_549(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_550(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_551(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_552(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (bParam1)
	{
		func_680(iParam0, 4);
		func_681(iVar0, 1);
		func_682(iVar0, 1);
	}
	else
	{
		func_683(iParam0, 4);
		func_682(iVar0, 0);
	}
}

void func_553(int* iParam0, char* sParam1)
{
	if (func_374(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_551(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_556(iParam0, 1);
}

bool func_554(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_555(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_556(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

Vector3 func_557(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -84.6426f, 316.428f, 106.0875f;
				case 1:
					return -84.2981f, 322.8091f, 105.4735f;
				case 2:
					return -89.1717f, 333.6335f, 103.0008f;
				case 3:
					return -88.102f, 328.3871f, 103.8424f;
				case 4:
					return -79.1038f, 311.7244f, 106.588f;
				case 5:
					return -82.0975f, 314.9543f, 106.2141f;
				case 6:
					return -66.8993f, 306.0392f, 106.9735f;
				case 7:
					return -74.366f, 309.3329f, 106.4846f;
				case 8:
					return -95.0175f, 327.7535f, 102.8154f;
				case 9:
					return -71.2988f, 314.3236f, 107.0159f;
				case 10:
					return -42.0266f, 345.552f, 114.0236f;
				case 11:
					return -43.0849f, 348.8506f, 113.8612f;
				case 12:
					return -109.9214f, 335.0656f, 102.2082f;
				case 13:
					return -131.5672f, 280.713f, 101.1639f;
				case 14:
					return -50.7783f, 314.9141f, 110.3457f;
				case 15:
					return -60.3845f, 324.6346f, 109.8844f;
				case 16:
					return -65.8762f, 309.8829f, 107.6383f;
				case 17:
					return -85.2671f, 335.6891f, 103.9268f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -105.4812f, 325.33f, 101.879f;
				case 1:
					return -113.141f, 322.4635f, 101.5815f;
				case 2:
					return -108.4091f, 324.0324f, 101.8259f;
				case 3:
					return -106.3346f, 319.3181f, 102.4154f;
				case 4:
					return -114.4443f, 322.9393f, 101.7106f;
				case 5:
					return -117.212f, 320.9265f, 101.5372f;
				case 6:
					return -131.7749f, 331.1822f, 101.2828f;
				case 7:
					return -127.0955f, 332.4306f, 101.0931f;
				case 8:
					return -109.3698f, 329.7699f, 101.7037f;
				case 9:
					return -126.7656f, 328.9117f, 101.0141f;
				case 10:
					return -139.9803f, 293.297f, 100.8215f;
				case 11:
					return -138.6669f, 293.1178f, 100.938f;
				case 12:
					return -141.7007f, 304.9293f, 102.0377f;
				case 13:
					return -137.589f, 304.7306f, 102.3917f;
				case 14:
					return -50.9267f, 303.1498f, 107.6625f;
				case 15:
					return -100.9347f, 302.4319f, 103.159f;
				case 16:
					return -133.9256f, 330.0964f, 101.3673f;
				case 17:
					return -102.9949f, 311.6792f, 103.6171f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -69.5277f, 312.8127f, 107.1586f;
				case 1:
					return -75.1162f, 316.1115f, 107.1791f;
				case 2:
					return -65.8874f, 308.0902f, 107.5138f;
				case 3:
					return -122.9017f, 302.4197f, 101.6003f;
				case 4:
					return -126.8734f, 326.1433f, 101.1495f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -125.385f, 327.3113f, 101.1892f;
				case 1:
					return -131.9852f, 327.2832f, 101.441f;
				case 2:
					return -137.1946f, 307.5524f, 102.3471f;
				case 3:
					return -108.6748f, 323.6061f, 101.8175f;
				case 4:
					return -145.3344f, 334.7376f, 100.5408f;
				case 5:
					return -56.1593f, 309.1718f, 108.4659f;
				case 6:
					return -98.5945f, 306.3739f, 103.6851f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 699.4623f, -449.7601f, 84.0806f;
				case 1:
					return 694.3791f, -450.37f, 84.1206f;
				case 2:
					return 690.1107f, -453.6178f, 83.472f;
				case 3:
					return 692.0172f, -447.1501f, 83.9325f;
				case 4:
					return 691.8858f, -435.3443f, 83.7618f;
				case 5:
					return 696.0519f, -433.0005f, 84.1123f;
				case 6:
					return 688.5836f, -420.7917f, 84.1974f;
				case 7:
					return 693.7426f, -423.7245f, 84.1361f;
				case 8:
					return 697.722f, -451.11f, 84.1198f;
				case 9:
					return 690.5294f, -425.6945f, 83.8836f;
				case 10:
					return 642.5613f, -431.6535f, 95.9046f;
				case 11:
					return 642.669f, -435.1697f, 94.4427f;
				case 12:
					return 704.439f, -466.2914f, 81.5926f;
				case 13:
					return 740.9304f, -453.4742f, 75.5977f;
				case 14:
					return 655.7692f, -427.5562f, 93.3905f;
				case 15:
					return 657.0507f, -430.3001f, 91.6493f;
				case 16:
					return 691.07f, -417.4818f, 84.4804f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 686.975f, -424.5924f, 83.918f;
				case 1:
					return 691.5994f, -429.1452f, 83.9385f;
				case 2:
					return 684.5853f, -419.1295f, 84.2732f;
				case 3:
					return 741.2778f, -427.4204f, 78.3597f;
				case 4:
					return 739.3923f, -451.4002f, 77.9089f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 683.1494f, -459.777f, 84.0083f;
				case 1:
					return 680.584f, -461.4462f, 84.2966f;
				case 2:
					return 689.5515f, -456.8322f, 83.1239f;
				case 3:
					return 687.7432f, -456.9682f, 83.1931f;
				case 4:
					return 683.62f, -450.6996f, 83.5166f;
				case 5:
					return 684.2194f, -448.0876f, 83.3847f;
				case 6:
					return 671.7957f, -448.7225f, 84.542f;
				case 7:
					return 669.0417f, -445.6638f, 84.4587f;
				case 8:
					return 682.4808f, -457.3188f, 84.082f;
				case 9:
					return 669.6201f, -442.6719f, 84.4687f;
				case 10:
					return 680.1441f, -389.9271f, 98.8519f;
				case 11:
					return 677.5911f, -387.3658f, 100.7888f;
				case 12:
					return 678.2244f, -399.2587f, 96.5831f;
				case 13:
					return 671.4579f, -398.9648f, 99.8846f;
				case 14:
					return 692.4266f, -462.2748f, 82.2805f;
				case 15:
					return 697.6883f, -457.5936f, 83.1492f;
				case 16:
					return 669.6953f, -451.7408f, 84.6534f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -125.385f, 327.3113f, 101.1892f;
				case 1:
					return -131.9852f, 327.2832f, 101.441f;
				case 2:
					return -137.1946f, 307.5524f, 102.3471f;
				case 3:
					return -108.6748f, 323.6061f, 101.8175f;
				case 4:
					return -145.3344f, 334.7376f, 100.5408f;
				case 5:
					return -56.1593f, 309.1718f, 108.4659f;
				case 6:
					return -98.5945f, 306.3739f, 103.6851f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_558(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_69(vParam0))
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
		if (func_684(vParam0))
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
	func_685(iVar0, bParam8);
	return iVar0;
}

float func_559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 217.0172f;
				case 1:
					return 217.0172f;
				case 2:
					return 171.0172f;
				case 3:
					return 171.0172f;
				case 4:
					return 174.2635f;
				case 5:
					return 212.2635f;
				case 6:
					return 139.6044f;
				case 7:
					return 155.6044f;
				case 8:
					return 235.0172f;
				case 9:
					return 254.4908f;
				case 10:
					return 135.0172f;
				case 11:
					return 133.0172f;
				case 12:
					return 160.8172f;
				case 13:
					return 289.0172f;
				case 14:
					return 143.6575f;
				case 15:
					return 159.6575f;
				case 16:
					return -58.1285f;
				case 17:
					return 225.1706f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 86.4174f;
				case 1:
					return 100.4174f;
				case 2:
					return 46.4174f;
				case 3:
					return 40.4174f;
				case 4:
					return 38.4174f;
				case 5:
					return 22.4174f;
				case 6:
					return 2.4174f;
				case 7:
					return 10.4174f;
				case 8:
					return 88.4174f;
				case 9:
					return 98.4174f;
				case 10:
					return 358.4174f;
				case 11:
					return 344.4174f;
				case 12:
					return 344.4174f;
				case 13:
					return 352.4174f;
				case 14:
					return 19.2641f;
				case 15:
					return 23.2641f;
				case 16:
					return 151.8715f;
				case 17:
					return 91.1706f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 148.6296f;
				case 1:
					return 150.6296f;
				case 2:
					return 136.6296f;
				case 3:
					return -131.2821f;
				case 4:
					return 196.7179f;
			}
			Jump @1776; //curOff = 817
			switch (iParam1)
			{
				case 0:
					return 1.8339f;
				case 1:
					return 5.8339f;
				case 2:
					return 349.8339f;
				case 3:
					return 19.8339f;
				case 4:
					return 323.8339f;
				case 5:
					return 47.2641f;
				case 6:
					return 323.2641f;
			}
			Jump @1776; //curOff = 947
			switch (iParam1)
			{
				case 0:
					return -2.9828f;
				case 1:
					return -2.9828f;
				case 2:
					return -36.9828f;
				case 3:
					return -48.9828f;
				case 4:
					return -13.7365f;
				case 5:
					return -7.7365f;
				case 6:
					return -70.3956f;
				case 7:
					return -64.3956f;
				case 8:
					return 5.0172f;
				case 9:
					return 14.4908f;
				case 10:
					return -84.9828f;
				case 11:
					return -86.9828f;
				case 12:
					return -59.1828f;
				case 13:
					return -2.9828f;
				case 14:
					return 283.6575f;
				case 15:
					return 283.6575f;
				case 16:
					return 121.7756f;
			}
			Jump @1776; //curOff = 1247
			switch (iParam1)
			{
				case 0:
					return 314.6296f;
				case 1:
					return 316.6296f;
				case 2:
					return 302.6296f;
				case 3:
					return 34.7179f;
				case 4:
					return 2.7179f;
			}
			Jump @1776; //curOff = 1343
			switch (iParam1)
			{
				case 0:
					return 44.4174f;
				case 1:
					return 30.4174f;
				case 2:
					return 18.4174f;
				case 3:
					return 16.4174f;
				case 4:
					return 56.4174f;
				case 5:
					return 80.4174f;
				case 6:
					return 98.4174f;
				case 7:
					return 126.4174f;
				case 8:
					return 44.4174f;
				case 9:
					return 36.4174f;
				case 10:
					return 160.4174f;
				case 11:
					return 160.4174f;
				case 12:
					return 176.4174f;
				case 13:
					return 166.4174f;
				case 14:
					return 83.2641f;
				case 15:
					return 75.2641f;
				case 16:
					return 279.7756f;
			}
			Jump @1776; //curOff = 1643
			switch (iParam1)
			{
				case 0:
					return 1.8339f;
				case 1:
					return 5.8339f;
				case 2:
					return 349.8339f;
				case 3:
					return 19.8339f;
				case 4:
					return 323.8339f;
				case 5:
					return 47.2641f;
				case 6:
					return 323.2641f;
			}
			return 0f;
		}

bool func_560(int iParam0, int iParam1)
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

int func_561(int iParam0, int iParam1)
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

bool func_562(int iParam0, int iParam1)
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
	if (!func_560(iParam0, iVar0))
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

void func_563(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_564(int iParam0, int iParam1)
{
	return func_686(iParam0, iParam1);
}

struct<5> func_565(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_687(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_640(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_569(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_688(bParam1) };
			if (iParam2 && func_689(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_567(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_567(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_568(iParam0, &Var5, 1728382685))
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
			Var0 = { func_690(bParam1) };
			switch (func_691(iParam0))
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
			if (func_692(iParam0, -1823706425))
			{
				Var0 = { func_569(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, -1838434463);
			}
			else if (func_692(iParam0, -1483207246))
			{
				Var0 = { func_569(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_693(Var0, &Var27, bParam1, 0))
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

int func_566(int iParam0, int iParam1)
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

bool func_567(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_694(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_568(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_695(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_569(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_634(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_696(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_570(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_697(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_693(*uParam1, &Var0, bParam6, 0))
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
	if (!func_571(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_696(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_571(bool bParam0)
{
	if (func_371() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_696(bParam0));
}

int func_572(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_698(iParam0))
	{
		return 0;
	}
	if (!func_571(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_573(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_468(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_574(var uParam0, bool bParam1, int iParam2)
{
	func_699(iParam2);
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
		uParam0->f_13 = func_700(0);
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
							func_257(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_701(1))
						{
							func_257(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_701(1) || *uParam0 & 8192 != 0))
				{
					func_256(uParam0, 33554432);
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
			if (func_702(uParam0))
			{
				uParam0->f_15 = func_196();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_196() - uParam0->f_15) > 500)
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
	func_703(uParam0);
}

int func_575(int iParam0, var uParam1)
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
			if (!func_704(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_705(iParam0, iVar2) <= func_706(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_576(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_707(iParam2, 1, 1, 1, 0))
	{
		func_257(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_708(uParam1, 1);
	func_471();
}

int func_577(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_709(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_710(uParam1);
			if (func_711(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_712(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_708(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_708(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_578(int iParam0, int iParam1, var uParam2)
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
	if (func_713(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_710(uParam2);
		if (func_711(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_712(uParam2)
				{
					func_708(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_579(int iParam0, var uParam1)
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
	if (func_704(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_712(uParam1)
		{
			fVar3 = func_710(uParam1);
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

int func_580(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_581(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_714(uParam2);
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
			if (func_589(uParam2, iParam1))
			{
				func_708(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_582(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_715(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_589(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_708(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_583(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_716(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_708(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_708(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_717(iParam1, vVar0, vVar4))
					{
						func_708(uParam2, 1);
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
					func_708(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_717(iParam1, vVar0, vVar7))
					{
						func_708(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_584(int iParam0, var uParam1)
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
		if (!func_704(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_718(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_719(&(Global_1935630->f_34[iVar0])))
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
			if (func_720(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_721(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_722(uParam1, iParam0, fVar1, iVar0))
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

int func_585(int iParam0, var uParam1)
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

int func_586(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_723(iVar0, &iVar2))
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
	if (func_724(iVar0, iParam0))
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

int func_588(var uParam0, int iParam1)
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

int func_589(var uParam0, int iParam1)
{
	if (func_725(uParam0))
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

int func_590(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_328(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_591()
{
}

int func_592(var uParam0, int iParam1)
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
		if (func_726(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_196();
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
						if (func_204(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_196();
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

int func_593()
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
	if ((func_196() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_594(var uParam0, int iParam1)
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
	fVar0 = func_706(uParam0);
	if (uParam0->f_12 > func_247(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_727(iParam1);
	iVar1 = func_728(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_595(int iParam0, int iParam1, var uParam2)
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
	return func_729(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_596(int iParam0, var uParam1)
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
		if (func_730(iParam0, uParam1, 1))
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
					if (!func_731(uParam1, iParam0))
					{
						if (func_204(iVar4, Global_36, 1) < 7f)
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

int func_597(int iParam0, var uParam1)
{
	if (!func_732(0))
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

int func_598(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_599(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_600(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_196();
	}
	else if (func_196() - uParam1->f_4) > func_733(uParam1)
	{
		return func_734(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_601(var uParam0, int iParam1)
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

float func_602(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_603(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_735(iParam0, uParam1))
		{
			if (!func_198(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_530(uParam2, 0, 0, 1, 0);
				func_257(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_198(uParam1->f_10, 1))
		{
			func_736(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_256(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_604(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_198(uParam4, 32);
		func_529(iParam1, uParam2, 0);
		iVar5 = func_737(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_530(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_198(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_198(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_198(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_198(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_198(uParam4, 8388608) || func_198(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_198(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_198(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_606(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_606(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_198(uParam4, 67108864))
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
				iParam6 = func_738(uParam0);
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
			if (func_198(uParam4, 268435456))
			{
				iVar8 = func_739(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_740(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_606(iParam1, 23))
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
			if (func_198(uParam4, 2) || func_198(uParam4, 16))
			{
				func_605(*uParam0, 1, 1);
			}
			else
			{
				func_605(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_605(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_606(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_607(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = uParam1 & 32 != false;
	bVar2 = uParam1 & 65792 != false;
	bVar3 = uParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_741(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_608(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_742(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_198(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_609(var uParam0)
{
	if (func_198(uParam0, 4))
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
	if (func_198(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_198(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_610(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_496(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_743(Global_35)) || func_744(Global_35)) || func_745(Global_35));
	fVar12 = -1f;
	if (func_60(&(iParam1->f_13)))
	{
		fVar12 = func_208(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_374(((*uParam4)[iVar0 /*17*/])->f_6);
		func_746(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_747(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_748(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_530(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_749(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_529(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_750(iParam1, fParam6, iParam1->f_9))
					{
						func_150(&(iParam1->f_18));
						if (bVar6)
						{
							func_749(uParam4, 0, 0);
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
		func_751(iParam1, fParam2);
	}
	return bVar5;
}

void func_611(var uParam0)
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

void func_612(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_752((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_751(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_613(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_753(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_754(iParam1, 0);
				func_529(iParam1, uParam2, func_606(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_614(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_150(&(iParam1->f_18));
			return 0;
		}
		else if (func_60(&(iParam1->f_18)))
		{
			func_207(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_60(&(iParam1->f_18)))
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
	return func_479(&(iParam1->f_18), fParam2);
	return 1;
}

void func_615(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_746(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_616(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_617(int* iParam0)
{
	if (func_606(iParam0, 0))
	{
		if (func_755(iParam0))
		{
			func_616(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

int func_618(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_756(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_757(iParam0))
	{
		return 0;
	}
	if (func_532(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_670(iParam0, 1)) || func_758(32768))
	{
		if (!func_670(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_759())
	{
		return 0;
	}
	return 1;
}

void func_619(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_620(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_374(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_628(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_622()
{
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

int func_623(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_760(iVar0, 2))
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
				func_761(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_624(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_374(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	((*Global_1945938)[iVar0 /*18*/])->f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(((*Global_1945938)[iVar0 /*18*/])->f_3, fParam1);
}

int func_625(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_760(iVar0, 2))
		{
			if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_10 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_761(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_626(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_69(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_760(iVar0, 2))
		{
			if (func_435(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_761(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_681(iVar0, iParam1);
}

bool func_628(int iParam0, bool bParam1)
{
	if (bParam1 && !func_374(iParam0))
	{
		return false;
	}
	return !func_760(iParam0, 4);
}

bool func_629(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_630(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_631(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_762(iParam0, sParam4, iParam5);
	}
	func_763(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_632(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

int func_633()
{
	if (func_764())
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

int func_634(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_635(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_765(iParam0, 1399091007))
	{
		func_766(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_636(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_634(iParam0, 0))
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
	if (!func_767())
	{
		func_768(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_769(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_769(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_770(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_640(iParam0);
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
	else if (!func_771(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	iVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		iVar13 = "Transaction_Negative";
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
	sVar15 = func_773(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_772(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_765(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_772(iParam0));
	}
	func_774(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", iVar13, 0, 1);
}

bool func_637(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_634(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_640(iParam0);
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
		if (!func_775(iParam0, 1))
		{
			return false;
		}
	}
	return func_639(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_638(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_634(iParam0, 0))
	{
		return Var0;
	}
	if (func_765(iParam0, -305066475))
	{
		if (func_371() == -1)
		{
			if (func_765(iParam0, -537818634))
			{
				return func_165(189951448);
			}
			else
			{
				return func_165(1176172851);
			}
		}
	}
	else if (func_765(iParam0, -537818634))
	{
		return func_165(-963660207);
	}
	if (func_765(iParam0, 2084895747))
	{
		return func_165(1694039471);
	}
	return Var2;
}

int func_639(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_635(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_776(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_696(bParam2), iParam0, 0);
	return iVar2;
}

int func_640(int iParam0)
{
	vector3 vVar0;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_641(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_777(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_778(&Var0, func_688(0));
	}
	if (!func_779(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_780(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_570(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_781(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_642(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_565(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_782(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_569(iParam0, Var0, Var0.f_4, bParam4) };
	return func_570(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_643(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_765(iParam0, 606799272))
		{
			func_783(iParam0, iParam1);
		}
		if (func_765(iParam0, -1112814642) && func_765(iParam0, -1697809989))
		{
			func_784(iParam0, iParam1, 1, 0);
		}
	}
}

void func_644(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_496(1) < iParam0)
	{
		iParam0 = func_496(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_165(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_645(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_646(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_647(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_48;
}

int func_648(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_69(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_649()
{
	return Global_1310750->f_16077 != 0;
}

void func_650(int iParam0)
{
	Global_1393447->f_1 = iParam0;
}

bool func_651(var uParam0, float fParam1, int iParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	var uVar6;

	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = &uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return func_785(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584, uVar6, iParam2);
}

int func_652(var uParam0, float fParam1, int iParam2)
{
	var uVar0[5];
	var uVar6[9];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;

	iVar16 = 0;
	while (iVar16 < uParam0->f_216)
	{
		uVar6[iVar17] = &uParam0->f_40[iVar16];
		iVar17++;
		iVar16++;
	}
	uVar6[iVar17] = uParam0->f_56;
	iVar17++;
	if (VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		iVar18 = func_786(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_787(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
	}
	iVar16 = 0;
	while (iVar16 < iVar18)
	{
		iVar19 = 0;
		iVar27 = PED::_0xB676EFDA03DADA52(&(uVar0[iVar16]), 0);
		if (iVar27 != 0 && iVar27 != Global_35)
		{
			vVar21 = { ENTITY::GET_ENTITY_COORDS(&(uVar0[iVar16]), true, false) };
			if (!func_69(vVar21))
			{
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar21, &vVar24, 1, 3f, 0f))
				{
					if (func_435(vVar21, vVar24, 5f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40f))
					{
						iVar19 = 1;
						iVar20 = 1;
					}
				}
			}
		}
		iVar16++;
	}
	return iVar20;
}

int func_653(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;

	vVar2 = { func_789(func_788()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (func_439(Global_36, vVar2) < 40000f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_790(iVar0))
		{
			fVar6 = func_791(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = func_792(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return 0;
				}
				if (func_439(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_236(iVar1, Global_36, 1);
					if (fVar7 <= 40000f && fVar7 > 0f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_654(var uParam0)
{
	if (!func_793(*uParam0, uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

int func_655(var uParam0)
{
	if (!func_654(uParam0))
	{
		return 0;
	}
	if (func_794(uParam0->f_7, uParam0->f_8, func_509(&(uParam0->f_3), 4)))
	{
		return 1;
	}
	if (!func_509(&(uParam0->f_3), 4))
	{
		if (func_795())
		{
			return 1;
		}
	}
	return 0;
}

int func_656(var uParam0)
{
	if (!func_60(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_416(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_196() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_657(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return 1;
		}
	}
	if (func_796(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return 1;
	}
	return 0;
}

bool func_658(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

int func_659(vector3 vParam0, var uParam3)
{
	if (!func_509(&(uParam3->f_3), 8))
	{
		return 1;
	}
	if (func_797(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return 1;
	}
	return 0;
}

bool func_660(vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_661(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_661(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_798(0) };
	vVar3 = { func_324(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_662(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_663(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_664(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_665(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_666(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
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
	return func_799(iParam0, &Var0);
}

int func_667(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_668(int iParam0)
{
	return func_760(iParam0, 2);
}

void func_669(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_207(&(uParam0->f_18));
}

bool func_670(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

int func_671()
{
	int iVar0;

	if (func_800())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_672(bool bParam0)
{
	if (func_801())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_671())
		{
			return 0;
		}
	}
	if (Global_16)
	{
		return 0;
	}
	if (!func_759())
	{
		return 0;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return 0;
	}
	if (func_802())
	{
		return 0;
	}
	return 1;
}

void func_673(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_674(int iParam0)
{
	iParam0 = func_543(iParam0);
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

void func_675(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_803(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_804(iParam0, 64))
	{
		func_676(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	uVar3 = func_805(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && uVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_806(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_676(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_807(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_808(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_804(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_809(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_810(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_811(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_812(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_813(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && uVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_814(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::BLIP_ADD_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_807(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_676(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

bool func_677(int iParam0, int iParam1, float fParam2)
{
	return func_815(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_678(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_679(int iParam0)
{
	if (!func_235(iParam0))
	{
		return -1;
	}
	return func_816(iParam0);
}

void func_680(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_681(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_760(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_682(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_683(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_684(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_685(int iParam0, bool bParam1)
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

struct<4> func_686(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_557(iParam0, iParam1) };
	Var0.f_3 = func_559(iParam0, iParam1);
	return Var0;
}

struct<4> func_687(bool bParam0)
{
	return func_569(1328661203, func_817(), -1591664384, bParam0);
}

struct<4> func_688(bool bParam0)
{
	int iVar0;

	iVar0 = func_696(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224214))
		{
			*Global_1224214 = { func_569(923904168, func_687(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224222))
		{
			*Global_1224222 = { func_569(923904168, func_687(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_569(923904168, func_687(bParam0), -740156546, 0);
}

int func_689(int iParam0, bool bParam1)
{
	if (func_691(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_818(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_690(bool bParam0)
{
	int iVar0;

	iVar0 = func_696(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224218))
		{
			*Global_1224218 = { func_569(271701509, func_687(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_569(271701509, func_687(bParam0), 12999093, 0);
}

int func_691(int iParam0)
{
	struct<2> Var0;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_692(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_691(iParam0);
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

int func_693(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_696(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_694(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_569(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_696(bParam6), &Var0, 0);
	return uVar4;
}

int func_695(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_696(0);
	*uParam1 = { func_569(iParam0, func_688(0), iParam3, 0) };
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

int func_696(bool bParam0)
{
	if (func_371() == -1)
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

int func_697(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_698(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_699(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_633();
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
			func_819(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_700(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_701(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_820(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_702(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_371() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_821(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_821(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_728(iVar0) == -1)
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

void func_703(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_822(uParam0);
	}
}

int func_704(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_728(iParam2);
	}
	else
	{
		iVar1 = func_727(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_728(iParam0);
	}
	else
	{
		iVar0 = func_727(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_198(*uParam1, 8388608))
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

float func_705(int iParam0, int iParam1)
{
	return func_328(iParam0, iParam1, 1, 1);
}

float func_706(var uParam0)
{
	return uParam0->f_26;
}

int func_707(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_708(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_257(uParam0, 134217728);
	}
	else
	{
		func_256(uParam0, 134217728);
	}
}

int func_709(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_328(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_823(iVar0, 0)))
		{
			if (func_824(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_710(var uParam0)
{
	return uParam0->f_17;
}

int func_711(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_198(*uParam0, 4194304))
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

int func_712(var uParam0)
{
	return uParam0->f_18;
}

int func_713(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_823(iVar0, 0)))
		{
			if (func_797(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_714(var uParam0)
{
	return uParam0->f_23;
}

int func_715(var uParam0)
{
	return uParam0->f_21;
}

int func_716(var uParam0)
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

int func_717(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_815(iParam0, vParam4, 0.5f))
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

int func_718(int iParam0)
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
	if (func_825(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_719(int iParam0)
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

int func_720(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_826(iParam1))
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

int func_721(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_826(iParam1))
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

int func_722(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_826(iParam1))
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

int func_723(int iParam0, var uParam1)
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

int func_724(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_827(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_725(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_726(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_204(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_727(int iParam0)
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

int func_728(int iParam0)
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

int func_729(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_723(Global_35, &iVar1))
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
		fVar2 = func_328(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_328(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_730(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_820(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_731(uParam1, iVar0))
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
				if (!bParam2 || !func_731(uParam1, iVar1))
				{
					if (func_204(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_731(var uParam0, int iParam1)
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

int func_732(int iParam0)
{
	if (func_391())
	{
		return 0;
	}
	return func_548(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_733(var uParam0)
{
	return uParam0->f_20;
}

int func_734(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_735(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_828((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_736(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_752((*uParam0)[iVar0 /*17*/]))
		{
			func_555((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_737(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_829(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_374(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_555((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_738(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_123(*uParam0);
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

int func_739(var uParam0, int iParam1)
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

void func_740(int* iParam0, int* iParam1)
{
	if (!func_606(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_555(iParam1, 19);
			func_754(iParam0, 23);
			func_830(iParam1, 2);
		}
	}
}

int func_741(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_632(16))
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
					func_831(16);
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

void func_742(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_829(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

var func_743(int iParam0)
{
	return (func_832(iParam0, 4) || func_832(iParam0, 5));
}

int func_744(int iParam0)
{
	return func_832(iParam0, 7);
}

int func_745(int iParam0)
{
	return func_832(iParam0, 6);
}

void func_746(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_752(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_829(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_747(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_833(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_628(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_552(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_552(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_834(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_748(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_630(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_835(iParam1, 1))
	{
		func_836(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_749(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_481((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_750(int* iParam0, float fParam1, var uParam2)
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

void func_751(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_752(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_753(int iParam0)
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

void func_754(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_755(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_756(int iParam0, int iParam1)
{
	if (func_371() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_757(int iParam0)
{
	if (func_371() != -1)
	{
		if (func_670(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_670(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_758(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_759()
{
	return Global_1905944->f_5694;
}

bool func_760(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_761(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, uParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, uParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, uParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_681(iParam0, 1);
	func_682(iParam0, 1);
	func_683(iParam0, 128);
}

void func_762(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_763(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_837())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_774(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_838(iVar0);
			func_839(iVar0, 0, 0);
		}
		func_774(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_166(func_165(1644987397), iVar1);
	}
}

int func_764()
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

int func_765(int iParam0, int iParam1)
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

void func_766(int iParam0, var uParam1, var uParam2)
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

bool func_767()
{
	return !&Global_1911774;
}

void func_768(int iParam0, int iParam1, var uParam2, var uParam3)
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

char* func_769(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_770(int iParam0, int iParam1)
{
	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_771(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_772(int iParam0)
{
	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_773(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_774(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_840(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_775(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_635(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_841("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_780(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_373(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_781(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_781(iVar1);
	}
	return 0;
}

int func_776(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_777(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_778(&Var0, func_688(0));
	}
	if (!func_779(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_781(iVar14);
	return uVar15;
}

struct<14> func_777(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_778(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_779(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_696(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_780(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_781(int iParam0)
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

int func_782(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	if (func_697(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_571(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_696(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_783(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = 0;
	if (func_371() == -1)
	{
		if (func_842(43))
		{
			if (func_765(iParam0, 412399755))
			{
				func_843(-1791518714);
				if (func_844() == 0)
				{
					func_168(0, 10);
					sVar0 = func_845(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_846(iParam0) < func_847(iParam0))
						{
							func_848(43, iParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_842(44))
		{
			if (func_765(iParam0, 709057512))
			{
				func_843(-2087881550);
				if (func_844() == 1)
				{
					func_168(0, 10);
					sVar0 = func_845(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_846(iParam0) < func_847(iParam0))
						{
							func_848(43, iParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_842(45))
		{
			if (func_765(iParam0, -1478961327))
			{
				func_843(1908068621);
				if (func_844() == 2)
				{
					func_168(0, 10);
					sVar0 = func_845(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_846(iParam0) < func_847(iParam0))
						{
							func_848(43, iParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_842(46))
		{
			if (func_765(iParam0, -1238404098))
			{
				func_843(1611247019);
				if (func_844() == 3)
				{
					func_168(0, 10);
					sVar0 = func_845(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_846(iParam0) < func_847(iParam0))
						{
							func_848(43, iParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_842(47))
		{
			if (func_765(iParam0, 1160548794))
			{
				func_843(1319635688);
				if (func_844() == 4)
				{
					func_168(0, 10);
					sVar0 = func_845(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_846(iParam0) < func_847(iParam0))
						{
							func_848(43, iParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_784(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_637(func_849(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_850(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_851(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_785(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, float fParam7, var uParam8, int iParam9)
{
	int iVar0[5];
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	if (VOLUME::DOES_VOLUME_EXIST(iParam9))
	{
		iVar12 = func_852(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_853(&iVar0, iParam0, iVar0, vParam1, fParam4);
	}
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = 0;
		if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(&(iVar0[iVar13]))))
		{
		}
		else if ((!bParam6 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(&(iVar0[iVar13]), -1) != 0) && (!bParam5 || ENTITY::GET_ENTITY_SPEED(&(iVar0[iVar13])) >= 1f))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(&(iVar0[iVar13]), true, false) };
			if (!func_69(vVar6))
			{
				vVar9 = { 0f, 0f, 0f };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar6, &vVar9, 1, 3f, 0f))
				{
					if (func_435(vVar6, vVar9, fParam7, 0))
					{
						iVar14 = 1;
						iVar15 = 1;
					}
				}
			}
		}
		iVar13++;
	}
	return iVar15;
}

int func_786(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = uVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (func_854(iVar2))
				{
					if (!func_426(iVar2, uParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

var func_787(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_786(uParam0, uParam1, iParam2, iVar0);
	func_855(iVar0);
	return uVar1;
}

int func_788()
{
	return Global_40.f_4283;
}

Vector3 func_789(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_856();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_790(int iParam0)
{
	if (func_857(iParam0))
	{
		if (func_228(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_791(int iParam0)
{
	if (!func_858(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

int func_792(int iParam0)
{
	if (func_857(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_793(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_60(&uParam0))
	{
		return 0;
	}
	if (func_656(&uParam0) <= iParam3 + 500)
	{
		return 0;
	}
	return 1;
}

int func_794(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_859(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return 1;
		}
	}
	if (!func_658(fParam0, fParam1))
	{
		return 1;
	}
	return 0;
}

int func_795()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, -1879280170) || PAD::IS_CONTROL_PRESSED(0, 1537201378)) || PAD::IS_CONTROL_PRESSED(0, -1175108432)) || PAD::IS_CONTROL_PRESSED(0, 1520437207)) || PAD::IS_CONTROL_PRESSED(0, -1292666904)) || PAD::IS_CONTROL_PRESSED(0, -640622144)) || PAD::IS_CONTROL_PRESSED(0, -455946723)) || PAD::IS_CONTROL_PRESSED(0, -1242632265)) || PAD::IS_CONTROL_PRESSED(0, -485697785)) || PAD::IS_CONTROL_PRESSED(0, -822242784)) || PAD::IS_CONTROL_PRESSED(0, 782960533)) || PAD::IS_CONTROL_PRESSED(0, -874806616))
	{
		return 1;
	}
	return 0;
}

int func_796(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_204(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && iParam5)
	{
		return 1;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return 1;
	}
	return 0;
}

int func_797(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

Vector3 func_798(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_324((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

var func_799(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_800()
{
	return Global_1905944->f_5693 != -1;
}

bool func_801()
{
	int iVar0;

	iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_802()
{
	var uVar0;

	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

int func_803(int iParam0)
{
	iParam0 = func_543(iParam0);
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

bool func_804(int iParam0, int iParam1)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

int func_805(int iParam0)
{
	if (!func_860(iParam0))
	{
		return 0;
	}
	return func_861(iParam0);
}

void func_806(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_863(func_862(255), 109029619));
	}
	else if (func_393())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_391();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_807(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_808(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_863(func_862(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_393())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_391())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_809(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_810(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_811(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_864(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_807(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_807(iParam0) + 1;
	fVar6 = func_865(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_866(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_812(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_813(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

int func_814(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_815(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_816(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_867(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

struct<4> func_817()
{
	struct<4> Var0;

	return Var0;
}

int func_818(int iParam0, bool bParam1)
{
	if (func_698(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_696(bParam1), iParam0, 0);
}

void func_819(var uParam0, var uParam1)
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

int func_820(bool bParam0, var uParam1, var uParam2)
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

int func_821(var uParam0)
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

void func_822(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_256(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Global_1935630->f_34[iVar0])))
				{
					func_257(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_823(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_824(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_797(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_825(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_826(int iParam0)
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

int func_827(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_828(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_829(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_374(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_375(&(iParam1->f_6), 0, 1);
	}
	if (!func_374(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_752(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_623(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_374(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_834(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_868(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_869(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_550(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_868(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_552(iParam1->f_6, 0, 1);
				}
				else
				{
					func_552(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_830(int* iParam0, int iParam1)
{
	if (!func_554(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_555(iParam0, 14);
		}
	}
}

void func_831(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_832(int iParam0, int iParam1)
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

bool func_833(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

void func_834(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_374(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_868(iParam0, 18, 0, 1);
	func_868(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_835(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_836(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_837()
{
	if (func_870())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_838(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_871((Global_40.f_4283.f_325 + iParam0));
}

void func_839(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_837())
	{
		func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_774(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_840(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_841(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_696(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_842(int iParam0)
{
	if (func_371() != -1)
	{
		return 0;
	}
	return func_548(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_843(int iParam0)
{
	if (!func_872(iParam0))
	{
		func_874(func_873(iParam0));
	}
}

int func_844()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_872(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
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
	iVar1 = func_846(iVar9);
	iVar2 = func_846(iVar10);
	iVar3 = func_846(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_846(iVar12);
	}
	iVar5 = func_847(iVar9);
	iVar6 = func_847(iVar10);
	iVar7 = func_847(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_847(iVar12);
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

int func_846(int iParam0)
{
	int iVar0;

	if (func_637(iParam0, 1, 0))
	{
		iVar0 = func_639(iParam0, 0, 0);
	}
	return iVar0;
}

int func_847(int iParam0)
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

void func_848(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_370() && (func_875(38) || func_842(38)))
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
			if (func_370() && (func_875(39) || func_842(39)))
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
			iVar9 = func_876(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_370() && (func_875(41) || func_842(41)))
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
			if (func_370() && (func_875(49) || func_842(49)))
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
			iVar9 = func_876(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_877(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_878(iParam0, iVar13, iVar14))
	{
	}
	if (func_879(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_880(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_881(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_882(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_883(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_849(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_884(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_850(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_849(iParam1, 5) || iParam0 == func_849(iParam1, 6)) || iParam0 == func_849(iParam1, 7)) || iParam0 == func_849(iParam1, 8)) || iParam0 == func_849(iParam1, 9))
	{
		func_885(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_848(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_886(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_851(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_849(iParam1, 5) || iParam0 == func_849(iParam1, 6)) || iParam0 == func_849(iParam1, 7)) || iParam0 == func_849(iParam1, 8)) || iParam0 == func_849(iParam1, 9))
	{
		if (func_885(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_848(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_886(51, 0, 0, iVar0, func_876(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_848(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_886(51, 0, 0, iVar0, func_876(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_852(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 2);
	if (iVar6 >= iParam3)
	{
	}
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		iVar2 = uVar1;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3 = uVar1;
			if (!func_887(iVar3, uParam1))
			{
				(*uParam0)[iVar4] = iVar3;
				iVar4++;
			}
		}
		if (iVar4 >= iParam3)
		{
		}
		else
		{
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

var func_853(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_852(iParam0, uParam1, iVar0, iParam2);
	func_855(iVar0);
	return uVar1;
}

bool func_854(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

void func_855(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

Vector3 func_856()
{
	if (func_440(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_440(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_857(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_858(int iParam0)
{
	return iParam0 > -1;
}

void func_859(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

int func_860(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_861(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

char* func_862(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_888(37, iParam0))
		{
			return HUD::GET_TEXT_SUBSTRING_2(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_888(37, iParam0))
	{
		return HUD::GET_TEXT_SUBSTRING_2(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_863(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_773(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_864(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

float func_865(int iParam0)
{
	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_866(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_867(int iParam0)
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

void func_868(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_869(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_527(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_870()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_871(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_165(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

bool func_872(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_873(int iParam0)
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

void func_874(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

int func_875(int iParam0)
{
	if (func_371() != -1)
	{
		return 0;
	}
	if (!func_233(iParam0))
	{
		return 0;
	}
	return func_889(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_876(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_884(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_877(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_890() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_891(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_892(), 12);
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
			else if (func_893() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_894(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_893(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_895(), 13);
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
			else if (func_896() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_897(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_896(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_876(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_878(int iParam0, int iParam1, int iParam2)
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

int func_879(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_880(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_881(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_898(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_637(iVar2, 1, 0) || func_900(func_899(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_901(func_898(iVar0))), func_901(func_898(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_893() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_902(iVar0)), func_902(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_894() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_902(iVar0)), func_902(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_902(iVar0)), func_902(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_849(iParam3, func_903(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_846(iVar2) - iParam7) >= func_876(iParam3, func_904(iVar0));
				}
				else
				{
					bVar1 = func_846(iVar2) >= func_876(iParam3, func_904(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_846(iVar2) + iParam7) >= func_876(iParam3, func_904(iVar0));
			}
			else
			{
				bVar1 = func_846(iVar2) >= func_876(iParam3, func_904(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_905(iVar2)), func_905(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_906(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_907(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_907(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_896() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_908(iVar0)), func_908(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_897() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_908(iVar0)), func_908(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_908(iVar0)), func_908(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_849(iParam3, func_903(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_846(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_909(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_909(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_910(iVar2)), func_910(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_882(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_895() >= 13)
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

int func_883(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_235(func_911(0)) && ((func_912(0) == 1 || func_912(0) == 8) || func_912(0) == 6))
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

int func_884(int iParam0, var uParam1)
{
	if (!func_913(iParam0))
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

int func_885(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_909(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_909(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_909(iVar0))
		{
			*iParam2++;
		}
		if (func_909(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_909(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_909(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_909(iVar0))
		{
			*iParam2++;
		}
		if (func_909(iVar1))
		{
			*iParam2++;
		}
		if (func_909(iVar0) && func_909(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_909(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_909(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_909(iVar0))
		{
			*iParam2++;
		}
		if (func_909(iVar1))
		{
			*iParam2++;
		}
		if (func_909(iVar2))
		{
			*iParam2++;
		}
		if ((func_909(iVar0) && func_909(iVar1)) && func_909(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_909(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_909(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_909(iVar0))
		{
			*iParam2++;
		}
		if (func_909(iVar1))
		{
			*iParam2++;
		}
		if (func_909(iVar2))
		{
			*iParam2++;
		}
		if (func_909(iVar3))
		{
			*iParam2++;
		}
		if (((func_909(iVar0) && func_909(iVar1)) && func_909(iVar2)) && func_909(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_886(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_370() && (func_875(38) || func_842(38)))
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
			if (func_370() && (func_875(39) || func_842(39)))
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
			if (func_370() && (func_875(49) || func_842(49)))
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
		if (func_370() && (func_875(38) || func_842(38)))
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
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_916(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_901(func_915(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_370() && (func_875(39) || func_842(39)))
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
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_370() && (func_875(49) || func_842(49)))
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
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_914(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_887(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_888(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_917(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_918())
	{
		return func_917(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_917(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_889(int iParam0)
{
	int iVar0;

	iVar0 = func_679(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_890()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_637(func_919(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_891()
{
	return func_920(Global_40.f_12018);
}

int func_892()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_919(iVar1);
		if (func_637(iVar2, 1, 0) || func_900(func_899(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_893()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_921(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_894()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_922(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_895()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_906(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_896()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_897()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_898(int iParam0)
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

int func_899(int iParam0)
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

bool func_900(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_901(int iParam0)
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

char* func_902(int iParam0)
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

int func_903(int iParam0)
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

int func_904(int iParam0)
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

char* func_905(int iParam0)
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

bool func_906(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_907(int iParam0)
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

char* func_908(int iParam0)
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

int func_909(int iParam0)
{
	if (func_923(iParam0) && func_637(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_924(iParam0) && func_925(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_910(int iParam0)
{
	if (!func_634(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_772(iParam0));
}

int func_911(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_912(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_913(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_914(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_915(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

var func_916(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_917(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_918()
{
	return Global_1109400->f_244;
}

int func_919(int iParam0)
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

int func_920(int iParam0)
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

bool func_921(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_922(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_923(int iParam0)
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

int func_924(int iParam0)
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

int func_925(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_926(&iVar0, 0, iVar95, &Var1) && !func_926(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_927(iVar0, &Var1);
			if (func_634(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_926(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_674(iParam1) && !func_928(iParam1))
	{
		iVar0 = func_803(iParam1);
	}
	else
	{
		return 0;
	}
	func_929(uParam3);
	iVar5 = func_930(iParam2);
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

void func_927(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_931(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_932(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

int func_928(int iParam0)
{
	int iVar0;

	iParam0 = func_543(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_674(iParam0))
	{
		return 0;
	}
	iVar0 = func_803(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_929(var uParam0)
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

int func_930(int iParam0)
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

void func_931(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_932(var uParam0, int iParam1, int iParam2, var uParam3)
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

