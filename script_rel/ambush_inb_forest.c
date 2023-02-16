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
	struct<248> Local_15 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1067450368, 1071644672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<348> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 5 } ;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	vector3 vLocal_627 = { 0f, 0f, 0f };
	bool bLocal_630 = false;
	var uLocal_631 = 0;
	bool bLocal_632 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_632 = true;
	}
	while (true)
	{
		func_2(bLocal_632, 961/*func_1*/, 0);
		if (bLocal_632)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (Local_15.f_95 < 13)
			{
				if (func_3(&ScriptParam_0))
				{
					func_4(&Local_15, 13);
				}
			}
			if (func_5())
			{
				func_6();
			}
			func_7();
			switch (Local_15.f_95)
			{
				case 0:
					if (func_8(ScriptParam_0))
					{
						func_4(&Local_15, 1);
					}
					break;
				case 1:
					if (func_9())
					{
						if (func_10())
						{
							func_4(&Local_15, 2);
						}
						else if (Local_15.f_217 > 0)
						{
							func_4(&Local_15, 3);
						}
						else if (Local_15.f_218 > 0)
						{
							func_4(&Local_15, 4);
						}
						else if (Local_15.f_216 > 0)
						{
							func_4(&Local_15, 5);
						}
						else
						{
							func_4(&Local_15, 6);
						}
					}
					break;
				case 2:
					if (func_10())
					{
						func_11();
					}
					func_4(&Local_15, 3);
					break;
				case 3:
					if (func_12())
					{
						if (func_13())
						{
							func_4(&Local_15, 4);
						}
					}
					break;
				case 4:
					if (func_14())
					{
						func_4(&Local_15, 5);
					}
					break;
				case 5:
					if (func_15())
					{
						func_4(&Local_15, 6);
					}
					break;
				case 6:
					if (func_16())
					{
						func_4(&Local_15, 7);
					}
					break;
				case 7:
					if (func_17())
					{
						(Global_40.f_9632[Local_15.f_151 /*4*/])->f_2 = (1 + (Global_40.f_9632[Local_15.f_151 /*4*/])->f_2);
						if (func_18(Global_1393447, 65536))
						{
							func_19(Global_1393447, 65536);
						}
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&Local_15, 8);
					}
					break;
				case 8:
					if (func_20())
					{
						if (Local_15.f_20 > (100f - 10f))
						{
							func_21();
							func_4(&Local_15, 9);
						}
						else
						{
							func_22(&Local_15, 16);
						}
					}
					break;
				case 9:
					if (func_23())
					{
						Local_15.f_225 = ENTITY::GET_ENTITY_HEALTH(Global_35);
						Local_15.f_226 = func_24();
						if (Global_40.f_9632.f_194 != Local_15.f_151)
						{
							switch (Local_15.f_151)
							{
								case 0:
								case 5:
								case 6:
								case 11:
								case 35:
								case 42:
									break;
								default:
									func_25(&Local_15, 1);
									break;
							}
						}
						func_26();
						func_27(&Local_15);
						Local_15.f_21 = Local_15.f_20;
						func_28(&Local_15, 1);
						PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
						func_22(&Local_15, 16384);
						func_4(&Local_15, 10);
					}
					break;
				case 10:
					func_29();
					if (func_30(&Local_15, 32768) || func_31())
					{
						switch (Local_15.f_151)
						{
							case 0:
							case 5:
							case 6:
							case 11:
							case 35:
							case 42:
								break;
							default:
								func_32(&Local_15, 1);
								break;
						}
						func_33(&Local_15, 1);
						func_34(120, 0, 1);
						func_35(1, -1, 0, 0, 0);
						func_36(&Local_15);
						func_4(&Local_15, 11);
					}
					break;
				case 11:
					func_37(&Local_15);
					func_38();
					if (func_39(&Local_15))
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_40(&(Local_15.f_244), 0);
						func_4(&Local_15, 12);
					}
					break;
				case 12:
					func_41(&Local_15);
					func_38();
					if (func_42())
					{
						if (func_18(Global_1393447, 16))
						{
							func_19(Global_1393447, 16);
						}
						func_4(&Local_15, 13);
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
		if (func_30(&Local_15, 4))
		{
			func_44(0);
			func_45(&Local_15, 4);
		}
	}
	fVar0 = 8f;
	if (Local_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!func_46() && !func_47(&(Local_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !func_48())
	{
		func_40(&(Local_15.f_250), 0);
		return;
	}
	if (func_47(&(Local_15.f_250), fVar0))
	{
	}
	func_37(&Local_15);
	func_49();
	func_50(&Local_15, 0);
	func_51();
	func_52(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	func_28(&Local_15, 1);
	func_53(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_15.f_237))
	{
		func_54(&Local_15);
		func_55(Local_15.f_237);
	}
	func_33(&Local_15, 1);
	if (Local_15.f_95 >= 9 && Local_15.f_95 < 11)
	{
		if (func_56(Local_15.f_151))
		{
		}
		else if (func_57(Local_15.f_151, 1) || func_58(Local_15.f_151, 1))
		{
			func_59(Global_1393447, 2048);
			if (!func_60(&(Local_15.f_244)))
			{
				func_34(120, 0, 1);
			}
		}
	}
	if (func_61(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (func_61(Local_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_62(Local_15.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	func_63(Local_15.f_151);
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
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (func_18(Global_1393447, 2))
		{
			if (func_67(&Local_15))
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
	if (Local_15.f_96 & 16 != 0)
	{
		return 1;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
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
			if (!func_69(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return 0;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { func_70(PLAYER::PLAYER_ID()) };
						return 1;
					}
				}
				else
				{
					Local_15.f_223 = 0;
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
			while (iVar3 < Local_15.f_215)
			{
				if (&Local_15.f_9[iVar3] < fVar4)
				{
					if (func_61(&(Local_15[iVar3]), 0, 1))
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
	if (func_69(Local_15.f_209))
	{
		func_76(&(Local_15.f_152));
		func_77(&(Local_15.f_152));
		func_78(&(Local_15.f_152), 0);
		func_79(&(Local_15.f_152), 1);
		func_80(&(Local_15.f_152), 6f);
		Local_15.f_209 = { Param0 };
		Local_15.f_151 = Param0.f_3;
		Local_15.f_221 = Param0.f_4;
		Local_15.f_222 = func_81(Local_15.f_151);
		if (Param0.f_7)
		{
			func_22(&Local_15, 2);
		}
		if (!func_82(Local_15.f_151))
		{
			func_4(&Local_15, 12);
			return 0;
		}
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (fVar0 < 200f)
		{
			if (func_83())
			{
				vVar1 = { func_84(Local_15.f_151, 0, Local_15.f_221) };
				vVar1 = { func_84(Local_15.f_151, 1, Local_15.f_221) };
				if (func_85())
				{
					if (func_86(&Local_15))
					{
						func_22(&Local_15, 1);
					}
				}
				if (!Local_15.f_227)
				{
					if (func_87(Local_15.f_181, 0))
					{
						Local_15.f_227 = func_88(Local_15.f_181, -1);
					}
				}
				if (func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_4(&Local_15, 13);
					return 0;
				}
				else
				{
					if (!bVar4)
					{
						func_90(&Local_15);
						func_91(&Local_15, 8672);
					}
					PED::_RESERVE_AMBIENT_PEDS((((Local_15.f_215 + Local_15.f_216) + Local_15.f_217 * 2) + Local_15.f_219) + 1);
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
	while (iVar1 < Local_15.f_216)
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
		while (iVar1 < Local_15.f_216)
		{
			iVar3 = func_92(iVar1);
			iVar2 = func_93(iVar1);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(&(Local_15.f_66[iVar1])))
			{
				if (iVar2 == func_94())
				{
				}
				else
				{
					Local_15.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar3, iVar2);
					bVar0 = false;
					Jump @162; //curOff = 137
					if (!PED::_0x610438375E5D1801(&(Local_15.f_66[iVar1])))
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
				while (iVar1 < Local_15.f_215)
				{
					iVar2 = func_96(iVar1);
					iVar4 = func_97(iVar1);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(&(Local_15.f_31[iVar1])))
					{
						if (iVar2 == func_94())
						{
						}
						else
						{
							Local_15.f_31[iVar1] = PED::_REQUEST_METAPED_OUTFIT(iVar4, iVar2);
							bVar0 = false;
							Jump @293; //curOff = 268
							if (!PED::_0x610438375E5D1801(&(Local_15.f_31[iVar1])))
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

	if (Local_15.f_217 <= 0)
	{
		return 1;
	}
	iVar0 = Local_15.f_220;
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
		Local_15.f_49[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, vVar2, fVar5, true, true, false, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(&(Local_15.f_49[iVar0]), 0f);
		ENTITY::SET_ENTITY_VISIBLE(&(Local_15.f_49[iVar0]), true);
		ENTITY::_0x3F08C6163A4AB1D6(&(Local_15.f_49[iVar0]));
		func_103(&(Local_15.f_49[iVar0]));
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_15.f_49[iVar0]), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_15.f_49[iVar0]), true, false);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_217)
	{
		Local_15.f_220 = 0;
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

	if (Local_15.f_218 <= 0)
	{
		return 1;
	}
	iVar0 = Local_15.f_220;
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
		Local_15.f_52[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(Local_15.f_52[iVar0]), 0f, 0f, fVar5, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(&(Local_15.f_52[iVar0]), false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_15.f_52[iVar0]), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_15.f_52[iVar0]), true, false);
		}
		if (func_107(iVar0))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(&(Local_15.f_52[iVar0]), 0);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_218)
	{
		Local_15.f_220 = 0;
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

	if (Local_15.f_216 <= 0)
	{
		return 1;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_92(iVar0);
	vVar2 = { func_108(iVar0) };
	fVar5 = func_109(iVar0);
	uVar6 = func_93(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_40[iVar0])))
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
				Local_15.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_15.f_40[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				PED::_0x1902C4CFCC5BE57C(&(Local_15.f_40[iVar0]), func_93(iVar0));
				PED::_0xCC8CA3E88256E58F(&(Local_15.f_40[iVar0]), 0, 1, 1, 1, 0);
			}
		}
	}
	if (func_61(&(Local_15.f_40[iVar0]), 0, 1))
	{
		func_112(&(Local_15.f_40[iVar0]), 0);
		if (func_30(&Local_15, 1))
		{
			iVar7 = func_113(iVar0);
			if (iVar7 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_84[iVar0])))
				{
					Local_15.f_84[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_lantern09x"), vVar2, true, true, false, false, true);
					func_114(iVar0, iVar7, &vVar9, &vVar12, &iVar8);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(Local_15.f_84[iVar0]), &(Local_15.f_40[iVar0]), iVar8, vVar9, vVar12, 0, 0, 0, 0, 1, 1, 0, 0);
					return 0;
				}
			}
		}
		func_115(&(Local_15.f_152), &(Local_15.f_40[iVar0]), 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_40[iVar0]), true);
		PED::SET_PED_CONFIG_FLAG(&(Local_15.f_40[iVar0]), 277, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_15.f_40[iVar0]));
		ENTITY::SET_ENTITY_VISIBLE(&(Local_15.f_40[iVar0]), false);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_15.f_40[iVar0]), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_15.f_40[iVar0]), true, false);
		}
		Local_15.f_220++;
		if (Local_15.f_220 >= Local_15.f_216)
		{
			Local_15.f_220 = 0;
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

	if (Local_15.f_215 <= 0)
	{
		return 1;
	}
	iVar0 = Local_15.f_220;
	iVar1 = func_97(iVar0);
	vVar2 = { func_116(iVar0) };
	fVar5 = func_117(iVar0);
	iVar6 = func_96(iVar0);
	uVar7 = func_118(Local_15.f_181);
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
			Local_15[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			Local_15[iVar0] = PED::_0xEAF682A14F8E5F53(&(Local_15.f_31[iVar0]), vVar2, fVar5, 1, 1, 1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar0])))
			{
				Local_15[iVar0] = func_111(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar0])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15[iVar0]), true);
			PED::SET_PED_CONFIG_FLAG(&(Local_15[iVar0]), 277, false);
			PED::SET_PED_CONFIG_FLAG(&(Local_15[iVar0]), 6, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_15[iVar0]), 233, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_15[iVar0]));
			func_120(&(Local_15.f_152), &(Local_15[iVar0]));
			func_121(&(Local_15.f_152), &(Local_15[iVar0]), 0);
			ENTITY::SET_ENTITY_VISIBLE(&(Local_15[iVar0]), false);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_15[iVar0]), false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_15[iVar0]), true, false);
			}
			if (Local_15.f_181 == -1)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_15[iVar0]), -401180987);
			}
			func_122(&(Local_15[iVar0]), 1);
			PED::_0xBD75500141E4725C(&(Local_15[iVar0]), uVar7);
			DECORATOR::DECOR_SET_BOOL(&(Local_15[iVar0]), "bBeatPed", true);
			func_124(func_123(&(Local_15[iVar0])), &(Local_15[iVar0]));
		}
		else
		{
			Local_15.f_220 = (Local_15.f_220 - 1);
		}
	}
	Local_15.f_220++;
	if (Local_15.f_220 >= Local_15.f_215)
	{
		Local_15.f_220 = 0;
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

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			func_125(&Local_15, iVar0, 0);
			PED::_0x7DE9692C6F64CFE8(&(Local_15[iVar0]), true, 0, 0);
			func_127(&(Local_15[iVar0]), func_126(iVar0, 0), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 46, true);
		}
		iVar0++;
	}
	func_128();
	return 1;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar0])))
		{
			ENTITY::_0xA91E6CF94404E8C9(&(Local_15[iVar0]));
			if (!func_129(&Local_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(Local_15[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_40[iVar0])))
		{
			ENTITY::_0xA91E6CF94404E8C9(&(Local_15.f_40[iVar0]));
			if (!func_130(&Local_15, iVar0, 4))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(Local_15.f_40[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[iVar0])))
		{
			ENTITY::_0xA91E6CF94404E8C9(&(Local_15.f_49[iVar0]));
			ENTITY::SET_ENTITY_VISIBLE(&(Local_15.f_49[iVar0]), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_52[iVar0])))
		{
			ENTITY::SET_ENTITY_VISIBLE(&(Local_15.f_52[iVar0]), true);
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
	int iVar0;

	if (!func_131(&Local_274, 16384) && !func_131(&Local_274, 262144))
	{
		func_132(&Local_15, 0);
	}
	else if (!func_131(&Local_274, 256))
	{
		func_133(&Local_274, 256);
	}
	iVar0 = -1;
	if (Local_274.f_3 < 2)
	{
		if (Local_274.f_3 >= 0)
		{
			func_134();
		}
		if (func_135())
		{
			func_136();
			func_137();
			func_138(&Local_274, 2);
		}
	}
	switch (Local_274.f_3)
	{
		case 0:
			func_139();
			if (func_140())
			{
				func_138(&Local_274, 1);
			}
			else if (func_141())
			{
				if (func_142())
				{
					func_22(&Local_15, 16);
					func_4(&Local_15, 13);
				}
			}
			break;
		case 1:
			func_139();
			iVar0 = func_143(&(Local_274.f_121));
			if (iVar0 == -1)
			{
				if (func_144(0f, 1, Local_274.f_346, 1))
				{
					if (func_47(Local_274.f_288[7 /*3*/], 3f))
					{
						func_145(&Local_274, &(Local_274.f_121));
						func_146(&(Local_274.f_121), 1, 0);
						func_147(Local_274.f_288[7 /*3*/]);
					}
				}
			}
			else if (iVar0 == 1)
			{
				if (!func_131(&Local_274, 2097152))
				{
					func_133(&Local_274, 2097152);
				}
			}
			func_148(&Local_15, &(Local_15.f_22), 1, 4);
			switch (Local_274.f_10)
			{
				case 1:
					if (func_149())
					{
						func_138(&Local_274, 2);
					}
					break;
				case 0:
					if (func_150())
					{
					}
					break;
			}
			break;
		case 2:
			if (func_61(Local_15.f_56, 0, 1))
			{
				func_151(&Local_274, 8, "HORSE", Local_15.f_56);
				func_152(&Local_274, 8);
				func_153(Local_15.f_56, 0);
			}
			func_40(Local_274.f_288[1 /*3*/], 0);
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
		func_154(-1, 0, 0, 0, 0);
		func_155();
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
			func_156();
			func_157();
		}
		if (func_56(uParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_159(func_158(-843295694), 1);
			func_33(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(uParam0->f_151));
		func_160(uParam0);
		func_161(0, 13);
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
	while (iVar1 < Local_15.f_216)
	{
		if (func_61(&(Local_15.f_40[iVar1]), 0, 0))
		{
			iVar0 = PED::_0xB676EFDA03DADA52(&(Local_15.f_40[iVar1]), 0);
			if (func_61(iVar0, 0, 0))
			{
				PED::SET_PED_OWNS_ANIMAL(iVar0, &(Local_15.f_40[iVar1]), 0);
				func_162(&Local_15, iVar1, 32);
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
			func_163(0);
			func_22(uParam0, 33554432);
		}
	}
	else if (func_30(uParam0, 33554432))
	{
		func_163(1);
		func_45(uParam0, 33554432);
	}
}

void func_29()
{
	int iVar0;

	func_40(&(Local_15.f_247), 0);
	if (func_47(&(Local_15.f_247), 5f))
	{
		func_50(&Local_15, 0);
	}
	if (func_47(&(Local_15.f_247), 3f))
	{
		func_164(&Local_15);
	}
	func_38();
	if (!func_30(&Local_15, 8388608))
	{
		if (!func_30(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				func_165(&Local_15, 1.1f);
			}
			else
			{
				func_165(&Local_15, 1.2f);
			}
			func_22(&Local_15, 4194304);
		}
		if (func_30(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				func_165(&Local_15, 1f);
				func_22(&Local_15, 8388608);
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

	func_166();
	func_134();
	func_167(&(Local_274.f_84));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!&Local_274.f_347[iVar0])
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar0])))
			{
				if (func_168(&(Local_15[iVar0])))
				{
					func_169(Local_15[iVar0], Local_274.f_121[iVar0 /*21*/], &(Local_274.f_121.f_127), 1, 1);
					Local_274.f_347[iVar0] = 1;
				}
			}
			else
			{
				Local_274.f_347[iVar0] = 1;
			}
		}
		iVar0++;
	}
	switch (Local_274.f_4)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_322))
			{
				if (!PED::_0x33FA048675821DA7(Local_274.f_322, 3))
				{
					PED::_0x2EB75FB86C41F026(Local_274.f_322, 3, 1);
				}
				if (!PED::_0x33FA048675821DA7(Local_274.f_322, 1))
				{
					PED::_0x2EB75FB86C41F026(Local_274.f_322, 1, 1);
				}
			}
			func_170(&(Local_274.f_316), 1, 1);
			func_171();
			func_172(&Local_274, 1);
			break;
		case 1:
			if (func_173())
			{
				func_174();
				func_172(&Local_274, 2);
			}
			break;
		case 2:
			if (func_175(&Local_15) <= 2)
			{
				func_176();
				func_172(&Local_274, 3);
			}
			break;
		case 3:
			if (func_177(&Local_15, &(Local_274.f_345), &(Local_15.f_241), "COMBAT_FLEE", 4f))
			{
				func_172(&Local_274, 5);
			}
			break;
		case 4:
			func_178();
			if (func_175(&Local_15) <= 0)
			{
				func_172(&Local_274, 5);
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_32(var uParam0, bool bParam1)
{
	if (func_18(Global_1393447, 65536))
	{
		if (func_87(uParam0->f_181, 0))
		{
			func_179(uParam0->f_181, bParam1);
		}
		func_180(uParam0->f_151, bParam1);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(1);
		func_45(uParam0, 8192);
	}
	else
	{
		func_182(1);
		func_22(uParam0, 8192);
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_183(iParam0, iParam1, bParam2);
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
	func_156();
	func_157();
	func_184((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_185() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_186();
		if (iParam1 == -1)
		{
			if (func_187(iParam0, 1))
			{
				func_188(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_187(iParam0, 2))
			{
				func_188(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_187(iParam0, 4))
			{
				func_188(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_189(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_190(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_190((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
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
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_191(uParam0->f_181));
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
	while (iVar0 < Local_15.f_216)
	{
		if (!func_130(&Local_15, iVar0, 16))
		{
			if (func_61(&(Local_15.f_40[iVar0]), 0, 0))
			{
				if (func_192(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1f, -1, 0);
					PED::SET_PED_KEEP_TASK(&(Local_15.f_40[iVar0]), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_40[iVar0]), false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_15.f_40[iVar0]);
					func_162(&Local_15, iVar0, 16);
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
		func_193(uParam0);
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
				if (func_194(uParam0[iVar0], Global_36, 1) > 40f || func_47(&(uParam0->f_241), 15f))
				{
					func_195(uParam0->f_22[iVar0]);
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
	if (func_47(&(Local_15.f_244), 45f) && func_196())
	{
		func_54(&Local_15);
		func_147(&(Local_15.f_244));
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
	if (func_197(uParam0) > fParam1)
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
	char* sVar0;

	func_170(&(Local_274.f_316), 1, 1);
	sVar0 = func_198(&Local_274);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sVar0);
	}
	func_199(&Local_274, 1);
	func_200(&Local_15, 1);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_61(PED::GET_MOUNT(Global_35), 0, 1))
		{
			if (func_201(Global_35, 658540077))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			if (func_201(PED::GET_MOUNT(Global_35), 658540077))
			{
				TASK::CLEAR_PED_TASKS(PED::GET_MOUNT(Global_35), 1, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_322))
	{
		if (!PED::_0x33FA048675821DA7(Local_274.f_322, 3))
		{
			PED::_0x2EB75FB86C41F026(Local_274.f_322, 3, 1);
		}
		if (!PED::_0x33FA048675821DA7(Local_274.f_322, 1))
		{
			PED::_0x2EB75FB86C41F026(Local_274.f_322, 1, 1);
		}
	}
	if (func_61(Local_15.f_56, 0, 1))
	{
		func_151(&Local_274, 8, "HORSE", Local_15.f_56);
		func_152(&Local_274, 8);
		func_153(Local_15.f_56, 0);
	}
	if (func_61(&(Local_274.f_317[0]), 0, 1))
	{
		func_202(Local_274.f_317[0], 0);
	}
	func_203();
	func_204(&(Local_274.f_73), &(Local_15[0]), 0, 30f);
	func_137();
}

void func_50(var uParam0, int iParam1)
{
	if (!func_30(uParam0, 256))
	{
		if (func_30(uParam0, 32) || iParam1)
		{
			if (func_61(uParam0->f_56, 0, 1))
			{
				func_153(uParam0->f_56, 0);
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
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar0])))
		{
			if (func_205(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(&(Local_15[iVar0]));
				PED::DELETE_PED(Local_15[iVar0]);
			}
			else
			{
				if (func_61(&(Local_15[iVar0]), 0, 0))
				{
					if (!func_30(&Local_15, 16384))
					{
						func_206(Local_15[iVar0]);
					}
					func_122(&(Local_15[iVar0]), 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 5, true);
					PED::_0x24C82EF607105FAA(&(Local_15[iVar0]), -920810745);
					PED::_0xB8B6430EAD2D2437(&(Local_15[iVar0]), 993130593);
					if (func_207(&(Local_15[iVar0])))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_15[iVar0]), -401180987);
					}
					PED::_0x7DE9692C6F64CFE8(&(Local_15[iVar0]), false, 0, 0);
					if ((PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), Global_35) || PED::IS_PED_FLEEING(&(Local_15[iVar0]))) || func_129(&Local_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), 0))
						{
							TASK::CLEAR_PED_TASKS(&(Local_15[iVar0]), 0, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(&(Local_15[iVar0]), Global_35, 4, iVar1, -1082130432, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(&(Local_15[iVar0]), true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && func_61(&(Local_15.f_40[iVar0]), 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(&(Local_15[iVar0]), true))
					{
						iVar11 = &Local_15.f_40[iVar0];
						PED::SET_PED_OWNS_ANIMAL(&(Local_15.f_40[iVar0]), iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, &(Local_15.f_40[iVar0]), 20000, -1, 2f, 1, 0, 0);
						if (!func_69((Local_15.f_118[iVar0 /*4*/])->f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (Local_15.f_118[iVar0 /*4*/])->f_1, 2f, 20000, 0.25f, false, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						func_208(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(&(Local_15[iVar0]), true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(&(Local_15[iVar0]), true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(&(Local_15[iVar0]), true)))
						{
							if (PED::_0x4E76CB57222A00E5(&(Local_15[iVar0])) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(&(Local_15[iVar0]), true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!func_69((Local_15.f_118[iVar0 /*4*/])->f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, (Local_15.f_118[iVar0 /*4*/])->f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								func_208(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(&(Local_15[iVar0])))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!func_69((Local_15.f_118[iVar0 /*4*/])->f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (Local_15.f_118[iVar0 /*4*/])->f_1, 2f, 20000, 0.25f, false, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							func_208(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(&(Local_15[iVar0]), true);
						}
						else
						{
							if (func_209(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432, -1, 0);
								func_208(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(&(Local_15[iVar0]), 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								func_208(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(&(Local_15[iVar0]), true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(&(Local_15[iVar0]), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(&(Local_15[iVar0])), -1) == &Local_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_15[iVar0]);
				}
				else if ((!PED::IS_PED_FLEEING(&(Local_15[iVar0])) && !PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), Global_35)) && !func_129(&Local_15, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(&(Local_15[iVar0]), -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_15[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_40[iVar0])))
		{
			if (func_210(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_84[iVar0])))
				{
					OBJECT::DELETE_OBJECT(Local_15.f_84[iVar0]);
				}
				PED::DELETE_PED(Local_15.f_40[iVar0]);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_84[iVar0])))
				{
					if (func_211(iVar0))
					{
						OBJECT::DELETE_OBJECT(Local_15.f_84[iVar0]);
					}
					else
					{
						ENTITY::DETACH_ENTITY(&(Local_15.f_84[iVar0]), true, true);
						PHYSICS::ACTIVATE_PHYSICS(&(Local_15.f_84[iVar0]));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_15.f_84[iVar0]);
					}
				}
				if (func_61(&(Local_15.f_40[iVar0]), 0, 1))
				{
					if (func_60(&(Local_15.f_247)))
					{
						if (!func_61(PED::_0xB676EFDA03DADA52(&(Local_15.f_40[iVar0]), 0), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1f, -1, 0);
							PED::SET_PED_KEEP_TASK(&(Local_15.f_40[iVar0]), true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_ACTIVE_ANIMAL_OWNER(&(Local_15.f_40[iVar0]))) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(&(Local_15.f_40[iVar0]), 1)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1f, -1, 0);
						PED::SET_PED_KEEP_TASK(&(Local_15.f_40[iVar0]), true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_15.f_40[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[iVar0])))
		{
			if (func_212(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(Local_15.f_49[iVar0]);
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == &Local_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == &Local_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(Local_15.f_49[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_52[iVar0])))
		{
			if (func_213(&Local_15, &(Local_15.f_52[iVar0])))
			{
				OBJECT::DELETE_OBJECT(Local_15.f_52[iVar0]);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_15.f_52[iVar0]);
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
			func_214(joaat("g_m_m_uniduster_01"));
			func_214(joaat("g_m_m_uniduster_03"));
			break;
		case 2:
			func_214(joaat("g_m_o_uniexconfeds_01"));
			func_214(joaat("g_m_y_uniexconfeds_01"));
			break;
		case 1:
			func_214(joaat("g_m_m_uniinbred_01"));
			break;
		case 3:
			func_214(joaat("g_m_m_unimountainmen_01"));
			break;
		case 4:
			func_214(joaat("g_m_m_uniranchers_01"));
			break;
		case 5:
			func_214(joaat("g_m_m_unibanditos_01"));
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

	fVar0 = func_215(uParam0->f_151);
	func_216(uParam0, fVar0);
}

void func_55(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	func_217(vVar0, 0);
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
			if (&Global_40.f_9632[iParam0 /*4*/] >= func_218(iParam0))
			{
				return true;
			}
			Var2 = { func_158(85200619) };
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
	if (func_219(iParam0))
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
	return func_220(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_221(iParam0, iParam1);
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
	if (func_222(iVar0))
	{
		return 0;
	}
	if (func_223(iVar0, 1) || func_223(iVar0, 2))
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
		if (func_224())
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
		iVar0 = func_225(&(Global_1898164->f_1[0 /*5*/]));
		if (func_226(iVar0) && func_227(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_228(&(Global_1898164->f_1[0 /*5*/])))
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
			if (func_129(uParam0, iVar0, 8))
			{
				if (func_229(uParam0[iVar0], Global_36, 1) < (70f * 70f) || func_230(uParam0[iVar0], 70f, -1082130432, -1082130432, -1082130432))
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

	if (!func_30(&Local_15, 16384))
	{
		return 0;
	}
	iVar0 = func_231();
	switch (iVar0)
	{
		case 105:
			if (func_232() && func_233())
			{
				return 1;
			}
			break;
		case 95:
			if (func_232() && func_233())
			{
				return 1;
			}
			break;
	}
	if (func_233())
	{
		if (Local_15.f_151 != 43)
		{
			if (func_234())
			{
				if (func_235(iVar0))
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
						func_40(&(Local_15.f_253), 0);
						if (func_47(&(Local_15.f_253), 0.5f))
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
	if (Local_15.f_21 == 0f)
	{
		*uParam0 = 210f;
	}
	else if (Local_15.f_21 < (func_73() - 10f))
	{
		*uParam0 = func_73();
	}
	else
	{
		*uParam0 = 210f;
	}
	if (Local_15.f_20 > *uParam0)
	{
		return 1;
	}
	switch (Local_15.f_151)
	{
		case 29:
		case 30:
			if (Local_15.f_95 < 10)
			{
				return 1;
			}
			break;
		case 0:
		case 11:
			if (!func_30(&Local_15, 512) && !func_30(&Local_15, 16384))
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_73()
{
	return 120f;
}

void func_74()
{
	if (Local_15.f_95 <= 8)
	{
		Local_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true);
		if (Local_15.f_21 == 0f || Local_15.f_21 > Local_15.f_20)
		{
			Local_15.f_21 = Local_15.f_20;
		}
		return;
	}
	if (Local_15.f_18 < 0)
	{
		Local_15.f_20 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_15.f_209, true);
		if (Local_15.f_21 == 0f || Local_15.f_21 > Local_15.f_20)
		{
			Local_15.f_21 = Local_15.f_20;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(&(Local_15[Local_15.f_18])))
	{
		Local_15.f_9[Local_15.f_18] = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(&(Local_15[Local_15.f_18]), false, true));
	}
	Local_15.f_18++;
	if (Local_15.f_18 >= Local_15.f_215)
	{
		Local_15.f_18 = -1;
	}
}

void func_75()
{
	int iVar0;

	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar0])))
		{
			if (!func_129(&Local_15, iVar0, 8))
			{
				if (func_230(&(Local_15[iVar0]), 200f, -1082130432, &(Local_15.f_9[iVar0]), -1082130432))
				{
					func_236(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_40[iVar0])))
		{
			if (!func_130(&Local_15, iVar0, 8))
			{
				if (func_230(&(Local_15.f_40[iVar0]), 200f, -1082130432, -1082130432, -1082130432))
				{
					func_162(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[iVar0])))
		{
			if (!func_237(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(&(Local_15.f_49[iVar0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_15.f_49[iVar0])))
				{
					if (func_238(&(Local_15.f_49[iVar0]), 200f, -1082130432))
					{
						func_239(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

void func_76(var uParam0)
{
	func_241(uParam0, (func_240(uParam0) - 6f));
	func_242(uParam0, 1);
}

void func_77(var uParam0)
{
	func_243(uParam0, 0);
	func_244(uParam0, 0);
	func_78(uParam0, 1);
	func_245(uParam0, 1);
	func_246(uParam0, 0);
	func_247(uParam0, 1);
	func_248(uParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 256);
	}
	else
	{
		func_250(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 4);
	}
	else
	{
		func_250(&(uParam0->f_1), 4);
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
	float fVar0;
	float fVar1;

	Local_15.f_215 = 5;
	Local_15.f_219 = 1;
	Local_15.f_217 = 0;
	Local_15.f_218 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 1;
	Local_274.f_9 = Local_15.f_221;
	switch (Local_15.f_151)
	{
		case 18:
			Local_274.f_10 = 0;
			break;
		case 19:
			Local_274.f_10 = 1;
			if (Local_15.f_227)
			{
				Local_274.f_84.f_16 = "AMBUSH_FRT_V2_ENTER_FEUD";
				Local_274.f_84.f_17 = "AMBUSH_FRT_V2_ROB_FEUD";
			}
			else
			{
				Local_274.f_84.f_16 = "AMBUSH_FRT_V2_ENTER";
				Local_274.f_84.f_17 = "AMBUSH_FRT_V2_ROB";
			}
			Local_274.f_84.f_18 = "AMBUSH_FRT_V2_FLEE";
			break;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 0, Local_15.f_221), false);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(Local_15.f_151, 1, Local_15.f_221), false);
	if (fVar0 < fVar1)
	{
		func_133(&Local_274, 4);
	}
	func_251();
	func_252(&(Local_15.f_182), 65, 0f, 1.25f, 1.75f, 2.001f, 0);
	func_253();
	func_248(&(Local_15.f_152), 1, 1, 1);
	func_254(&(Local_15.f_152), 50f);
	func_255(&(Local_15.f_182), 32768);
	func_22(&Local_15, 131072);
	return 1;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;

	func_256(iParam0, iParam1, &vVar0, &uVar3, iParam2);
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

	if (!func_257(iParam0, 1))
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
		iVar0 = func_258(iParam0);
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
		return func_259(bParam1, iParam2, bParam3);
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

	fVar0 = func_215(uParam0->f_151);
	func_260(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	func_261(uParam0->f_238, iParam1, 262144, 1, 0);
}

int func_92(int iParam0)
{
	if (&Local_15.f_57[iParam0] == 0)
	{
		if (!func_87(Local_15.f_181, 1))
		{
			Local_15.f_57[iParam0] = func_262(997958153, 1);
		}
		else
		{
			Local_15.f_57[iParam0] = func_263(Local_15.f_181, 0, 1);
		}
	}
	return &(Local_15.f_57[iParam0]);
}

int func_93(int iParam0)
{
	if (&Local_15.f_75[iParam0] == 0)
	{
		if (Local_15.f_181 != -1 && Local_15.f_181 != 1)
		{
			Local_15.f_75[iParam0] = func_264(Local_15.f_181, iParam0, 0);
		}
		else
		{
			Local_15.f_75[iParam0] = func_94();
		}
		if (&Local_15.f_75[iParam0] == 1268180497)
		{
			Local_15.f_75[iParam0] = func_94();
		}
	}
	return &(Local_15.f_75[iParam0]);
}

int func_94()
{
	return 41788943;
}

int func_95()
{
	char* sVar0;
	bool bVar1;

	bVar1 = true;
	switch (Local_274.f_2)
	{
		case 0:
			func_265();
			func_266(&Local_15);
			func_267(&Local_274);
			STREAMING::REQUEST_CLIP_SET(func_268());
			sVar0 = func_198(&Local_274);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sVar0);
			}
			Local_274.f_2 = 1;
			break;
		case 1:
			if (func_269(&Local_274))
			{
				func_270(&Local_274);
				Local_274.f_2 = 2;
			}
			break;
		case 2:
			if (!func_271(&Local_274))
			{
				bVar1 = false;
			}
			if (!func_272(&Local_15))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				Local_274.f_321 = PED::_REQUEST_METAPED_OUTFIT(joaat("g_m_m_uniinbred_01"), 750136551);
				Local_274.f_2 = 3;
			}
			break;
		case 3:
			if (!func_273())
			{
				bVar1 = false;
			}
			if (!PED::_0x610438375E5D1801(Local_274.f_321))
			{
				bVar1 = false;
			}
			if (!STREAMING::HAS_CLIP_SET_LOADED(func_268()))
			{
				bVar1 = false;
			}
			sVar0 = func_198(&Local_274);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0))
				{
					bVar1 = false;
				}
			}
			return bVar1;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_274(&Local_15, &Local_274, iVar0);
}

int func_97(int iParam0)
{
	return joaat("g_m_m_uniinbred_01");
}

int func_98(var uParam0)
{
	return 0;
}

Vector3 func_99(var uParam0)
{
	return 0f, 0f, 0f;
}

float func_100(var uParam0)
{
	return 0f;
}

int func_101(var uParam0)
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

	if (func_275(*uParam0, 0f, 0f, 0f))
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
	return 0f, 0f, 0f;
}

float func_109(int iParam0)
{
	return 0f;
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
	func_276(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
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
		iVar0 = (iVar0 || func_277(iParam1));
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
	*uParam4 = PED::GET_PED_BONE_INDEX(&(Local_15.f_40[iParam0]), 62111);
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
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	vVar1 = { func_278(&Local_274, iVar0) };
	return vVar1;
}

var func_117(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam0;
	Var1 = { func_278(&Local_274, iVar0) };
	return Var1.f_3;
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

void func_125(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(uParam0[iParam1]))
		{
			ENTITY::_0xA91E6CF94404E8C9(uParam0[iParam1]);
			ENTITY::SET_ENTITY_VISIBLE(uParam0[iParam1], true);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0[iParam1], true);
		}
		ENTITY::SET_ENTITY_COLLISION(uParam0[iParam1], true, false);
		ENTITY::SET_ENTITY_PROOFS(uParam0[iParam1], 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0[iParam1], false);
		func_279(uParam0, iParam1, 4);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION(uParam0[iParam1], false, false);
		ENTITY::SET_ENTITY_PROOFS(uParam0[iParam1], 127, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0[iParam1], true);
		func_236(uParam0, iParam1, 4);
	}
}

char[] func_126(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_280(iParam0, bParam1);
	return func_281(iVar0);
}

void func_127(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_128()
{
	switch (Local_274.f_10)
	{
		case 1:
			func_282(0, 4, "MALE_A", -1101297303);
			func_282(1, 6, "FLANK_A", joaat("weapon_shotgun_doublebarrel"));
			func_282(2, 7, "FLANK_B", -1101297303);
			break;
		case 0:
			func_282(0, 0, "MALE_A", joaat("weapon_revolver_cattleman"));
			func_282(1, 2, "FLANK_A", joaat("weapon_shotgun_doublebarrel"));
			func_282(2, 3, "FLANK_B", joaat("weapon_revolver_cattleman"));
		}

bool func_129(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_130(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_106[iParam1] && iParam2) != 0;
}

bool func_131(var uParam0, int iParam1)
{
	return func_187(*uParam0, iParam1);
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (uParam0->f_182.f_17 & 4 != 0)
	{
		return;
	}
	if (uParam0->f_182.f_17 & 128 != 0)
	{
		if (!func_283(&(uParam0->f_182), 256))
		{
			if (func_283(&(uParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, -513041747))
				{
					func_40(&(uParam0->f_182.f_10), 0);
					if (func_284(&(uParam0->f_182.f_10)))
					{
						func_285(&(uParam0->f_182.f_10));
					}
					if (func_47(&(uParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630->f_40 != 0 && iParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630->f_40, 8, 0, 0);
							func_255(&(uParam0->f_182), 256);
						}
					}
				}
				else if (func_60(&(uParam0->f_182.f_10)))
				{
					func_286(&(uParam0->f_182.f_10));
				}
			}
		}
	}
	if (uParam0->f_182.f_17 & 8 != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_255(&(uParam0->f_182), 4);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		if (func_61(PED::GET_MOUNT(Global_35), 0, 1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_MOUNT(Global_35), false);
		}
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (uParam0->f_182.f_17 & 32768 != 0 && uParam0->f_182.f_17 & 64 == 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (uParam0->f_182.f_17 & 1 == 0)
	{
		if (iVar1 && (func_287(&(uParam0->f_182[3])) || func_283(&(uParam0->f_182), 16)))
		{
			if (func_283(&(uParam0->f_182), 32))
			{
				if (func_288(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!func_283(&(uParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				func_255(&(uParam0->f_182), 1);
			}
		}
		else if (iVar1 && func_287(&(uParam0->f_182[2])))
		{
			if (func_288(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(iVar2, 6f);
					}
				}
			}
		}
		else if (iVar1 && func_287(&(uParam0->f_182[1])))
		{
			if (func_288(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_23);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(iVar2, 9f);
					}
				}
			}
		}
		else if (func_287(&(uParam0->f_182[0])))
		{
			if (!func_283(&(uParam0->f_182), 64))
			{
				func_255(&(uParam0->f_182), 64);
			}
			if (func_288(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_24);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(iVar2, 12f);
					}
				}
			}
		}
	}
	if (iVar1 && uParam0->f_182.f_17 & 1 != 0)
	{
		if (!func_283(&(uParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5f, 5000, false);
					func_40(&(uParam0->f_182.f_7), 0);
					func_255(&(uParam0->f_182), 2);
				}
			}
			else
			{
				if (func_187(uParam0->f_182.f_5, 16))
				{
					bVar4 = func_289(Global_35, &(uParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = func_290(Global_35, &(uParam0->f_182.f_6), uParam0->f_182.f_5, 0, 0, 1084227584, 100, 0, 0);
				}
				if (bVar4)
				{
					if (func_187(uParam0->f_182.f_5, 8))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
						if (func_61(iVar0, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
						}
					}
					uParam0->f_182.f_18 = { Global_36 };
					if (func_61(iVar0, 0, 1))
					{
						TASK::TASK_STAND_STILL(iVar0, BUILTIN::FLOOR((uParam0->f_182.f_21 * 1000f)));
					}
					func_40(&(uParam0->f_182.f_7), 0);
					func_255(&(uParam0->f_182), 2);
				}
			}
		}
		else if (!func_283(&(uParam0->f_182), 4))
		{
			if (func_47(&(uParam0->f_182.f_7), uParam0->f_182.f_21))
			{
				if (func_187(uParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (func_61(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_255(&(uParam0->f_182), 4);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				if (func_61(iVar0, 0, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

void func_133(var uParam0, int iParam1)
{
	func_250(uParam0, iParam1);
}

void func_134()
{
	func_291(&(Local_274.f_73), 30f);
	if (func_131(&Local_274, 512))
	{
		if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		{
			func_28(&Local_15, 0);
			func_204(&(Local_274.f_73), &(Local_15[0]), 1, 30f);
			PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
			PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "FRT_V2_ILO_SURRENDER");
			func_292(&Local_274, 512);
		}
	}
	else if (func_131(&Local_274, 4194304))
	{
		if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		{
			func_204(&(Local_274.f_73), &(Local_15[0]), 0, 30f);
			PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 0);
			func_292(&Local_274, 4194304);
		}
		else
		{
			func_200(&Local_15, 0);
			func_204(&(Local_274.f_73), &(Local_15[0]), 0, 30f);
			func_292(&Local_274, 4194304);
		}
	}
}

int func_135()
{
	if (Local_274.f_7 > 1)
	{
		if (!func_131(&Local_274, 16384))
		{
			if (!func_30(&Local_15, 4096) && !func_131(&Local_274, 4096))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					return 1;
				}
			}
		}
		if ((((func_131(&Local_274, 32) || func_131(&Local_274, 1024)) || func_131(&Local_274, 131072)) || func_131(&Local_274, 262144)) || func_131(&Local_274, 2097152))
		{
			return 1;
		}
		if (Local_15.f_151 == 19)
		{
			if (func_30(&Local_15, 33554432))
			{
				if (func_293(&Local_15))
				{
					return 1;
				}
			}
		}
		if (func_294(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_344), 0, 4, 1))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_274.f_317[0])))
		{
			if (func_295(&(Local_274.f_317[0]), 0, &(Local_15.f_152), &(Local_15.f_152.f_16), 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_136()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	func_203();
	bVar2 = func_131(&Local_274, 33554432);
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			func_125(&Local_15, iVar0, 1);
			PED::_0x7DE9692C6F64CFE8(&(Local_15[iVar0]), false, 0, 0);
			iVar3 = 0;
			iVar4 = 0;
			if (WEAPON::_0x959383DCD42040DA(func_296(&(Local_15[iVar0]), 1, 0, 0)))
			{
				func_250(&iVar3, 68157440);
				func_250(&iVar4, 4096);
			}
			if (!PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, iVar3, iVar4);
				func_208(&(Local_15[iVar0]), &iVar1, 0, 0, 1, 1);
			}
			if (!bVar2)
			{
				if (func_131(&Local_274, 32))
				{
					func_297(&Local_274, &(Local_15[iVar0]), Global_35, "AMBUSH_FRT_AGGRO", 70f, 1, 1744022339, 0);
				}
				else if (func_131(&Local_274, 131072))
				{
					func_297(&Local_274, &(Local_15[iVar0]), Global_35, "ITS_THEM_EXTREME", 70f, 1, 1744022339, 2);
				}
				else
				{
					func_297(&Local_274, &(Local_15[iVar0]), Global_35, "AMBUSH_FRT_EAGGRO", 70f, 1, 1744022339, 0);
				}
				bVar2 = true;
			}
			func_298(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 0, 0, 0);
		}
		iVar0++;
	}
	if (func_61(&(Local_274.f_317[0]), 0, 1))
	{
		if (!PED::IS_PED_IN_COMBAT(&(Local_274.f_317[0]), 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_208(&(Local_274.f_317[0]), &iVar1, 0, 0, 1, 1);
		}
		func_298(&(Local_274.f_317[0]), Local_274.f_319[0], 831283580, 0, 0, 0);
	}
	func_199(&Local_274, 1);
	func_137();
	func_133(&Local_274, 8);
	if (func_131(&Local_274, 2048))
	{
		func_133(&Local_274, 16);
	}
	else
	{
		func_299(Local_15.f_151, 1);
	}
}

void func_137()
{
	bLocal_630 = true;
	func_300();
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_139()
{
	int iVar0;

	if (Local_274.f_7 > 1)
	{
		iVar0 = func_301();
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(Local_274.f_334[iVar0]), 0))
		{
			if (!func_230(&(Local_274.f_317[0]), 1116471296, -1082130432, -1082130432, -1082130432) && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ANIMSCENE::_0x43C21623E42B821B(&(Local_274.f_334[iVar0])) <= 1f)
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(&(Local_274.f_334[iVar0]), 1.25f);
				}
			}
			else if (ANIMSCENE::_0x43C21623E42B821B(&(Local_274.f_334[iVar0])) > 1f)
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(&(Local_274.f_334[iVar0]), 1f);
			}
		}
	}
}

int func_140()
{
	int iVar0;
	char* sVar1;

	if (func_131(&Local_274, 8388608))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -611489352, false);
	}
	iVar0 = -1;
	if (Local_274.f_7 > 1)
	{
		func_302(&Local_15);
		func_303();
		func_304();
		if (!func_61(&(Local_15[0]), 0, 1))
		{
			return 0;
		}
		if (Local_274.f_7 > 2)
		{
			func_148(&Local_15, &(Local_15.f_22), 1, 4);
			func_305();
			iVar0 = func_143(&(Local_274.f_121));
			if (iVar0 == -1)
			{
				if (func_144(0f, 1, Local_274.f_346, 1) && (Local_274.f_346 != Global_35 || func_144(-3f, 1, 0, 0)))
				{
					if (func_47(Local_274.f_288[7 /*3*/], 3f))
					{
						func_145(&Local_274, &(Local_274.f_121));
						func_146(&(Local_274.f_121), 1, 0);
						func_147(Local_274.f_288[7 /*3*/]);
					}
				}
			}
			else if (iVar0 == 1)
			{
				if (!func_131(&Local_274, 2097152))
				{
					func_133(&Local_274, 2097152);
				}
			}
		}
	}
	switch (Local_274.f_7)
	{
		case 0:
			func_306(&Local_274, 1);
			break;
		case 1:
			if (func_307(&(Local_274.f_323[3]), Global_36))
			{
				if (((Global_1935630->f_40 == 0 || func_201(Global_35, 501393341)) || func_201(Global_35, 1920417248)) || func_308())
				{
					func_133(&Local_274, 1024);
					return 0;
				}
				func_309();
				func_310();
				func_311();
				func_145(&Local_274, &(Local_274.f_121));
				func_146(&(Local_274.f_121), 0, 1);
				if (func_312(16))
				{
					func_133(&Local_274, 128);
				}
				func_25(&Local_15, 1);
				func_32(&Local_15, 1);
				func_313();
				func_314(&(Local_274.f_75.f_3), 4);
				func_314(&(Local_274.f_75.f_3), 2);
				func_306(&Local_274, 2);
			}
			break;
		case 2:
			func_315();
			func_316();
			if (!func_131(&Local_274, 16777216))
			{
				if (!func_60(Local_274.f_288[8 /*3*/]))
				{
					if (func_230(&(Local_15[0]), 1116471296, -1082130432, -1082130432, -1082130432) || !func_144(0f, 1, &(Local_15[0]), 1))
					{
						func_40(Local_274.f_288[8 /*3*/], 0);
					}
				}
				if (func_47(Local_274.f_288[8 /*3*/], 1.25f))
				{
					HUD::_0x4CC5F2FC1332577F(724769646);
					func_133(&Local_274, 16777216);
				}
			}
			if (func_317(1))
			{
				if (func_318())
				{
					if (func_319())
					{
						func_320();
						func_306(&Local_274, 3);
					}
				}
			}
			break;
		case 3:
			func_315();
			func_321();
			if (func_319() && ENTITY::IS_ENTITY_ON_SCREEN(&(Local_15[0])))
			{
				func_137();
			}
			if (!func_317(0) && !func_322())
			{
				func_306(&Local_274, 4);
			}
			break;
		case 4:
			func_321();
			func_315();
			if (func_319() && ENTITY::IS_ENTITY_ON_SCREEN(&(Local_15[0])))
			{
				func_137();
			}
			if (Local_274.f_10 == 0)
			{
				if (Local_15.f_227)
				{
					if (func_323(&Local_274, 16384))
					{
						func_40(Local_274.f_288[4 /*3*/], 0);
						if (func_47(Local_274.f_288[4 /*3*/], 2f))
						{
							func_324();
							func_306(&Local_274, 5);
						}
					}
				}
				else
				{
					sVar1 = func_198(&Local_274);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
					{
						TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
					}
					func_306(&Local_274, 9);
				}
			}
			else
			{
				func_325();
				if (func_323(&Local_274, 8))
				{
					if (func_326())
					{
						func_306(&Local_274, 9);
					}
				}
				if (func_322())
				{
					if (func_317(0))
					{
						func_306(&Local_274, 9);
					}
				}
			}
			break;
		case 5:
			if (func_144(0f, 1, Local_274.f_346, 1) && func_144(-6f, 1, 0, 0))
			{
				func_327();
				func_306(&Local_274, 6);
			}
			break;
		case 6:
			if (func_144(0f, 1, Local_274.f_346, 1) && func_144(-5f, 1, 0, 0))
			{
				func_133(&Local_274, 32);
			}
			break;
		case 9:
			func_137();
			func_321();
			return 1;
	}
	return 0;
}

int func_141()
{
	int iVar0;

	if (Local_274.f_7 > 1)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, -874806616) || Global_1935630->f_40 == 0)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(&(Local_274.f_323[4]), Global_36))
		{
			func_328(&Local_15, 2);
			return 1;
		}
	}
	if (func_131(&Local_274, 1024) && func_307(&(Local_274.f_323[3]), Global_36))
	{
		func_328(&Local_15, 2);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_329(&(Local_15[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_330(&Local_15))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(&(Local_274.f_323[6]), Global_36))
		{
			func_328(&Local_15, 7);
			return 1;
		}
	}
	if (func_331(&Local_15))
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	return 1;
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

	iVar2 = -1;
	iVar3 = -1;
	iVar4 = 524288 | func_332(3, 0, 0);
	iVar5 = 1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15[iVar1])))
		{
		}
		else
		{
			iVar0 = func_333(Local_15[iVar1], (*uParam0)[iVar1 /*21*/], 20f, &(uParam0->f_127), &iVar5, 4f, 3, 0, 0, iVar4, 0, 0, 2, 1, -1082130432, 0);
			if (func_334((*uParam0)[iVar1 /*21*/]))
			{
				if (uParam0->f_163 == -1)
				{
					uParam0->f_163 = iVar1;
					Local_274.f_346 = Global_35;
				}
				iVar3 = ((*uParam0)[iVar1 /*21*/])->f_1;
				switch (iVar3)
				{
					case 0:
						if (!func_335(uParam0->f_127[0 /*17*/], 0))
						{
							func_336(uParam0->f_127[0 /*17*/], 1, 1);
						}
						break;
					case 1:
						if (!func_335(uParam0->f_127[1 /*17*/], 0))
						{
							func_204(&(Local_274.f_73), &(Local_15[0]), 0, 30f);
							if (func_61(&(Local_15[0]), 0, 1))
							{
								func_337(&(Local_15[0]), 500);
							}
							if (func_61(&(Local_274.f_317[0]), 0, 1))
							{
								func_337(&(Local_274.f_317[0]), 500);
							}
							PED::SET_PED_USING_ACTION_MODE(&(Local_15[0]), true, -1, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar6);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_208(&(Local_15[0]), &iVar6, 2f, 0, 1, 1);
							func_133(&Local_274, 8388608);
							func_336(uParam0->f_127[1 /*17*/], 1, 1);
						}
						break;
				}
				switch (iVar3)
				{
					case 0:
					case 1:
						func_146(uParam0, 0, 1);
						break;
				}
			}
			if (iVar0 != -1)
			{
				iVar2 = iVar0;
				uParam0->f_162 = iVar2;
				switch (iVar2)
				{
					case 0:
						break;
					case 1:
						uParam0->f_166++;
						break;
				}
				uParam0->f_164 = 0;
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_144(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_338(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_339(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_145(var uParam0, var uParam1)
{
	var uVar0[2];
	char* sVar3[2];

	uVar0[0] = func_340(8);
	uVar0[1] = func_340(10);
	sVar3[0] = "";
	switch (uParam0->f_10)
	{
		case 0:
			sVar3[1] = "FRT_V1_ILO_ANTAGONIZE";
			break;
		case 1:
			sVar3[1] = "FRT_V2_ILO_ANTAGONIZE";
			break;
	}
	func_341(uParam1->f_127[0 /*17*/], &(uVar0[0]), &(sVar3[0]), -163964935, 0, 0, 0, 0, 0);
	func_341(uParam1->f_127[1 /*17*/], &(uVar0[1]), &(sVar3[1]), 648122183, 0, 0, 0, 0, 0);
	func_336(uParam1->f_127[0 /*17*/], 1, 1);
}

void func_146(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_342(uParam0, 0))
		{
			func_343(uParam0, 0, 1);
		}
		if (!func_342(uParam0, 1))
		{
			func_343(uParam0, 1, 1);
		}
	}
	else
	{
		if (iParam2 || func_342(uParam0, 0))
		{
			func_343(uParam0, 0, 0);
		}
		if (iParam2 || func_342(uParam0, 1))
		{
			func_343(uParam0, 1, 0);
		}
	}
}

void func_147(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_148(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (MAP::DOES_BLIP_EXIST(uParam1[iVar0]))
		{
		}
		else if (func_230(uParam0[iVar0], 40f, -1082130432, -1082130432, -1082130432))
		{
			func_298(uParam0[iVar0], (*uParam1)[iVar0], 831283580, 942020339, 0, 0);
		}
		else if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0[iVar0]))
		{
			if (func_194(uParam0[iVar0], Global_36, 0) < 10f)
			{
				func_298(uParam0[iVar0], (*uParam1)[iVar0], 831283580, 942020339, 0, 0);
			}
		}
		iVar0++;
	}
}

int func_149()
{
	int iVar0;

	func_303();
	func_344();
	if (Local_274.f_5 < 12)
	{
		func_321();
		func_302(&Local_15);
	}
	if (Local_274.f_5 < 10)
	{
		func_305();
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_345(&Local_274, 10);
		}
	}
	func_167(&(Local_274.f_84));
	switch (Local_274.f_5)
	{
		case 0:
			func_326();
			func_346();
			func_193(Local_274.f_288[2 /*3*/]);
			func_345(&Local_274, 2);
			break;
		case 2:
			func_326();
			if (!func_131(&Local_274, 32768))
			{
				if (func_47(Local_274.f_288[2 /*3*/], 4f))
				{
					func_347();
					func_147(Local_274.f_288[2 /*3*/]);
					func_345(&Local_274, 3);
				}
			}
			break;
		case 3:
			func_326();
			if (!func_317(0) && !func_131(&Local_274, 32768))
			{
				func_345(&Local_274, 4);
			}
			break;
		case 4:
			func_326();
			if (!func_131(&Local_274, 32768))
			{
				func_325();
			}
			if (func_317(0))
			{
				if (!func_131(&Local_274, 32768))
				{
					func_40(Local_274.f_288[2 /*3*/], 0);
					if (func_47(Local_274.f_288[2 /*3*/], 7f))
					{
						func_348();
						func_147(Local_274.f_288[2 /*3*/]);
						func_345(&Local_274, 5);
					}
				}
			}
			break;
		case 5:
			func_326();
			if (!func_131(&Local_274, 32768))
			{
				func_325();
			}
			if (!func_317(0) && !func_131(&Local_274, 32768))
			{
				func_345(&Local_274, 6);
			}
			break;
		case 6:
			func_326();
			if (!func_131(&Local_274, 32768))
			{
				func_325();
			}
			if (func_317(0))
			{
				if (!func_131(&Local_274, 32768))
				{
					func_40(Local_274.f_288[2 /*3*/], 0);
					if (func_47(Local_274.f_288[2 /*3*/], 4f))
					{
						func_133(&Local_274, 32);
						func_345(&Local_274, 15);
					}
				}
			}
			break;
		case 10:
			func_170(&(Local_274.f_316), 1, 1);
			func_349(&Local_15);
			if (!func_350(Global_35))
			{
				func_203();
				if (func_351(&Local_274, 5, &(Local_274.f_317[0]), "MALE_B"))
				{
					func_199(&Local_274, 1);
					func_345(&Local_274, 13);
				}
			}
			break;
		case 13:
			func_352();
			if (func_144(0f, 1, &(Local_274.f_317[0]), 1))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(&(Local_274.f_317[0]), joaat("weapon_melee_knife"), false, 0, false, false);
				func_245(&(Local_15.f_152), 0);
				if (!PED::IS_PED_IN_COMBAT(&(Local_274.f_317[0]), 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
					func_208(&(Local_274.f_317[0]), &iVar0, 0, 0, 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(&(Local_274.f_317[0]), 249, true);
				func_133(&Local_274, 33554432);
				func_297(&Local_274, &(Local_274.f_317[0]), Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", -1073741824, 1, 291934926, 2);
				func_345(&Local_274, 14);
			}
			break;
		case 14:
			if (func_144(-6f, 1, 0, 0))
			{
				func_133(&Local_274, 2097152);
			}
			break;
		case 11:
			func_349(&Local_15);
			func_352();
			if (func_354(&(Local_274.f_317[0]), &(Local_274.f_84), 0.3f, 1, 0, 2, 0, 0, func_353(), 6000, 1, 0))
			{
				func_345(&Local_274, 16);
			}
			else if (Local_274.f_84.f_4)
			{
				func_40(&(Local_15.f_241), 0);
			}
			if (func_47(&(Local_15.f_241), 1f))
			{
				func_355(Local_274.f_288[1 /*3*/], 10f, 0);
				func_172(&Local_274, 4);
				func_345(&Local_274, 16);
			}
			break;
		case 16:
			func_199(&Local_274, 1);
			return 1;
	}
	return 0;
}

int func_150()
{
	func_303();
	if (Local_274.f_5 < 1)
	{
		func_321();
	}
	if (Local_274.f_5 <= 0)
	{
		func_305();
	}
	if (Local_274.f_5 < 7)
	{
		func_356();
	}
	switch (Local_274.f_5)
	{
		case 0:
			if (func_357())
			{
				func_22(&Local_15, 1048576);
				func_151(&Local_274, 8, "HORSE", Local_15.f_56);
				func_152(&Local_274, 8);
				func_255(&(Local_15.f_182), 8);
				func_133(&Local_274, 16384);
				if (func_358(Local_274.f_316))
				{
					func_170(&(Local_274.f_316), 0, 1);
				}
				func_345(&Local_274, 1);
			}
			break;
		case 1:
			if (func_359())
			{
				func_193(Local_274.f_288[2 /*3*/]);
				func_345(&Local_274, 2);
			}
			break;
		case 2:
			if (func_360())
			{
				func_345(&Local_274, 7);
			}
			else if (func_47(Local_274.f_288[2 /*3*/], 4f))
			{
				func_193(Local_274.f_288[2 /*3*/]);
				func_297(&Local_274, &(Local_15[0]), Global_35, "GET_LOST", -1073741824, 1, 1744022339, 2);
				func_345(&Local_274, 4);
			}
			break;
		case 4:
			if (func_360())
			{
				func_345(&Local_274, 7);
			}
			else if (func_47(Local_274.f_288[2 /*3*/], 10f))
			{
				func_193(Local_274.f_288[2 /*3*/]);
				func_297(&Local_274, &(Local_15[0]), Global_35, "FINAL_WARNING", -1073741824, 1, 1744022339, 2);
				if (func_61(&(Local_15[0]), 0, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(&(Local_15[0]), Global_35, -1, 0, 1);
				}
				func_345(&Local_274, 6);
			}
			break;
		case 6:
			if (func_360())
			{
				func_345(&Local_274, 7);
			}
			else if (func_47(Local_274.f_288[2 /*3*/], 8f))
			{
				func_193(Local_274.f_288[2 /*3*/]);
				func_133(&Local_274, 32);
				func_345(&Local_274, 15);
			}
			break;
		case 7:
			if (func_144(-3f, 1, 0, 0))
			{
				func_193(Local_274.f_288[2 /*3*/]);
				func_297(&Local_274, &(Local_274.f_317[0]), &(Local_15[0]), "AMBUSH_FRT_WANTHORSE", -1073741824, 1, 291934926, 0);
				func_345(&Local_274, 8);
			}
			break;
		case 8:
			if (func_361())
			{
				func_133(&Local_274, 131072);
				return 0;
			}
			if (func_144(0, 1, 0, 0))
			{
				func_362();
				func_345(&Local_274, 9);
			}
			break;
		case 9:
			if (func_361())
			{
				func_133(&Local_274, 131072);
				return 0;
			}
			break;
	}
	return 0;
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	var uVar0;

	uVar0 = func_363(uParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(uParam0->f_334[iParam1])))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(uParam0->f_334[iParam1]), sParam2, iParam3);
}

void func_152(var uParam0, int iParam1)
{
	func_364(&(uParam0->f_334[iParam1]), func_363(uParam0, iParam1));
}

void func_153(int iParam0, bool bParam1)
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
	if (!func_365(iParam0))
	{
		return;
	}
	iVar0 = func_366(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_367(iVar0);
	func_368(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_369(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_370(iVar0))
		{
			return;
		}
	}
	func_371(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_372() == -1)
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_154(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_373() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_374(iVar1) && !func_375(iVar1, iParam2)) && (!bParam3 || !func_376(iVar1))) && (!bParam4 || !func_377(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_378(iVar0);
			}
		}
		iVar0++;
	}
}

void func_155()
{
	if (!func_374(&Global_1327479))
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
	func_379(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_156()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_380(iVar0, 128))
		{
			func_381(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_157()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_380(iVar0, 128) && func_380(iVar0, 1))
		{
			func_381(iVar0, 4096);
		}
		iVar0++;
	}
}

struct<2> func_158(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_159(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_160(var uParam0)
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
			func_382(uParam0[iVar2], &iVar0);
			func_383(uParam0[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_384(joaat("g_m_m_uniduster_01"));
			func_384(joaat("g_m_m_uniduster_03"));
			break;
		case 2:
			func_384(joaat("g_m_o_uniexconfeds_01"));
			func_384(joaat("g_m_y_uniexconfeds_01"));
			break;
		case 1:
			func_384(joaat("g_m_m_uniinbred_01"));
			break;
		case 3:
			func_384(joaat("g_m_m_unimountainmen_01"));
			break;
		case 4:
			func_384(joaat("g_m_m_uniranchers_01"));
			break;
		case 5:
			func_384(joaat("g_m_m_unibanditos_01"));
			break;
	}
	func_22(uParam0, 128);
}

void func_161(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_385(&Global_0, 8);
	}
	if (!func_386() || func_372() != -1)
	{
		return;
	}
	func_385(&Global_0, 1);
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_106[iParam1] = (uParam0->f_106[iParam1] || iParam2);
}

void func_163(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_164(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 0))
		{
			if (!func_129(uParam0, iVar0, 512))
			{
				if (PED::IS_PED_HOGTIED(uParam0[iVar0]))
				{
					TASK::TASK_COMBAT_PED(uParam0[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK(uParam0[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0[iVar0], false);
					func_387(uParam0[iVar0]);
					func_236(uParam0, iVar0, 512);
				}
			}
			else if (!PED::IS_PED_HOGTIED(uParam0[iVar0]))
			{
				func_279(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_165(var uParam0, float fParam1)
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

void func_166()
{
	int iVar0;

	if (func_47(Local_274.f_288[1 /*3*/], 5f))
	{
		return;
	}
	if ((!func_131(&Local_274, 8) || func_131(&Local_274, 16)) || func_131(&Local_274, 32))
	{
		iVar0 = 0;
		while (iVar0 < Local_15.f_215)
		{
			if (func_388(iVar0))
			{
				PED::SET_PED_RESET_FLAG(&(Local_15[iVar0]), 27, true);
			}
			iVar0++;
		}
	}
}

void func_167(var uParam0)
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
		if (func_389(Global_1935630->f_44) || uParam0->f_6)
		{
			if (func_358(uParam0->f_36))
			{
				func_170(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!func_60(&(uParam0->f_29)))
	{
		if (func_390(uParam0->f_28))
		{
			func_40(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (func_47(&(uParam0->f_29), 3f) && func_390(uParam0->f_28))
		{
			func_391(1);
			uParam0->f_35 = 1;
			if (!func_47(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				func_392(609);
			}
		}
	}
}

int func_168(int iParam0)
{
	if (!func_221(iParam0, 3))
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

void func_169(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_393(uParam0);
		func_394(iParam1, uParam2);
	}
	func_395(*uParam0, 1, bParam4);
}

void func_170(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_358(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_396(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_397(iVar0);
	*uParam0 = 0;
}

void func_171()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			vVar2 = { func_398(iVar0) };
			fVar5 = func_399(iVar0);
			if (!PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_208(&(Local_15[iVar0]), &iVar1, 0, 0, 1, 1);
			}
			if ((!func_69(vVar2) && fVar5 > 0f) && !func_131(&Local_274, 131072))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_15[iVar0]), vVar2, fVar5, 1, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 45, true);
			}
			func_298(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 580546400, 0, 0);
		}
		iVar0++;
	}
	if (func_61(&(Local_274.f_317[0]), 0, 1))
	{
		if (!PED::IS_PED_IN_COMBAT(&(Local_274.f_317[0]), 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_208(&(Local_274.f_317[0]), &iVar1, 0, 0, 1, 1);
		}
		func_298(&(Local_274.f_317[0]), Local_274.f_319[0], 831283580, 0, 0, 0);
	}
}

void func_172(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

int func_173()
{
	if ((func_400(&(Local_274.f_317)) + func_400(&Local_15)) < 4)
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			PED::SET_PED_COMBAT_RANGE(&(Local_15[iVar0]), 0);
			PED::SET_PED_COMBAT_MOVEMENT(&(Local_15[iVar0]), 2);
		}
		iVar0++;
	}
}

int func_175(var uParam0)
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

void func_176()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_61(&(Local_15[iVar0]), 0, 0))
		{
			PED::_0x1854217C640B39EC(&(Local_15[iVar0]), Global_35, 0f, 0f, 0f, 15f, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 45, true);
			PED::SET_PED_COMBAT_RANGE(&(Local_15[iVar0]), 0);
			PED::SET_PED_COMBAT_MOVEMENT(&(Local_15[iVar0]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 50, true);
		}
		iVar0++;
	}
}

int func_177(var uParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam1 < 0)
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
				if (!func_129(uParam0, iVar2, 1))
				{
					func_193(uParam2);
					*uParam1 = iVar2;
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
			if (func_61(uParam0[*uParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2(uParam0[*uParam1], Global_35, 1, 0);
			}
		}
		func_40(uParam2, 0);
		if (func_47(uParam2, fParam4))
		{
			if (func_61(uParam0[*uParam1], 0, 1))
			{
				if (func_401(uParam0, *uParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0[*uParam1], Global_35, 4, 524292, -1082130432, -1, 0);
					PED::SET_PED_KEEP_TASK(uParam0[*uParam1], true);
					func_387(uParam0[*uParam1]);
					func_395(uParam0[*uParam1], 0, 1);
					func_402(uParam0[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
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

void func_178()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_403(&(Local_15[iVar0]), &(Local_15.f_22[iVar0]), Local_274.f_11[iVar0 /*10*/], iVar0);
		iVar0++;
	}
	func_403(&(Local_274.f_317[0]), &(Local_274.f_319[0]), Local_274.f_62[0 /*10*/], 0);
}

void func_179(int iParam0, bool bParam1)
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
		Global_40.f_9632.f_192 = func_404();
	}
}

void func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_18(Global_1393447, 65536))
	{
		func_19(Global_1393447, 65536);
		func_154(-1, 0, 0, 0, 0);
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
		iVar0 = func_405(iParam0);
		iVar1 = func_406(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_407(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_408();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_409(0, iVar2);
					break;
			}
		}
		if (func_187(iVar0, 1))
		{
			func_410();
		}
		else if (func_187(iVar0, 2))
		{
			func_411(0);
		}
		func_412(iParam0);
		func_413(iParam0);
	}
}

void func_181(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_182(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_414(iParam0, iParam1, bParam2);
}

void func_184(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_185()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_186()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_375(iVar0, 16777216))
		{
			if (!func_415(iVar0))
			{
				func_416(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_187(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_188(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_417(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_418(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_419(iVar0) < func_420(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_421(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_422(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_422(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_422(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_422(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_422(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_422(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_422(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_190(float fParam0, bool bParam1, bool bParam2)
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

int func_191(int iParam0)
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

int func_192(int iParam0)
{
	float fVar0;

	if (func_130(&Local_15, iParam0, 32))
	{
		if (!func_61(PED::_0xB676EFDA03DADA52(&(Local_15.f_40[iParam0]), 0), 0, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_61(PED::_0xB676EFDA03DADA52(&(Local_15.f_40[iParam0]), 1), 0, 1))
	{
		return 0;
	}
	if (Local_15.f_216 == Local_15.f_215)
	{
		if (!func_61(&(Local_15[iParam0]), 0, 1))
		{
			return 1;
		}
	}
	if (!func_130(&Local_15, iParam0, 64))
	{
		fVar0 = func_197(&(Local_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_193(var uParam0)
{
	func_423(uParam0, 0f);
}

float func_194(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_195(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_196()
{
	return 1;
}

float func_197(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_284(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

char* func_198(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_131(uParam0, 4))
			{
				return "gaifa_horse_warn_front";
			}
			else
			{
				return "gaifa_horse_warn_back";
			}
			break;
		case 1:
			if (func_131(uParam0, 4))
			{
				return "gaifa_horse_violent_front";
			}
			else
			{
				return "gaifa_horse_violent_back";
			}
			break;
	}
	return "";
}

void func_199(var uParam0, bool bParam1)
{
	if (func_131(uParam0, 65536))
	{
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_292(uParam0, 65536);
		}
	}
	else if (!bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		func_133(uParam0, 65536);
	}
}

void func_200(var uParam0, bool bParam1)
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

int func_201(int iParam0, int iParam1)
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

void func_202(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_203()
{
	if (!func_131(&Local_274, 4194304))
	{
		func_133(&Local_274, 4194304);
	}
}

void func_204(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		if ((((!uParam0->f_1 && *uParam0 == 0) && Global_1935630->f_58 != iParam1) && func_61(Global_1935630->f_58, 0, 1)) && func_424(Global_1935630->f_58))
		{
			*uParam0 = Global_1935630->f_58;
		}
		else
		{
			*uParam0 = iParam1;
		}
		uParam0->f_1 = 1;
		func_425(*uParam0, 1, fParam3, 0);
	}
	else
	{
		func_425(iParam1, 0, fParam3, 0);
		func_425(*uParam0, 0, fParam3, 0);
		*uParam0 = 0;
		uParam0->f_1 = 0;
	}
}

int func_205(int iParam0)
{
	if (func_129(&Local_15, iParam0, 2))
	{
		return 0;
	}
	if (func_129(&Local_15, iParam0, 128))
	{
		return 0;
	}
	if (func_129(&Local_15, iParam0, 4))
	{
		return 1;
	}
	if (func_426(&Local_15, &(Local_15[iParam0])))
	{
		return 1;
	}
	if (!func_129(&Local_15, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_206(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

int func_207(int iParam0)
{
	if (func_427(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_208(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_209(int iParam0)
{
	switch (Local_15.f_151)
	{
		case 24:
		case 26:
		case 27:
			return 1;
	}
	return 0;
}

int func_210(int iParam0, int iParam1)
{
	if (func_130(&Local_15, iParam0, 2))
	{
		return 0;
	}
	if (func_130(&Local_15, iParam0, 4))
	{
		return 1;
	}
	if (func_428(&(Local_15.f_40[iParam0]), iParam1))
	{
		return 1;
	}
	if (func_426(&Local_15, &(Local_15.f_40[iParam0])))
	{
		return 1;
	}
	if (!func_130(&Local_15, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	float fVar0;

	if (func_312(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (func_429(&(Local_15.f_84[iParam0]), fVar0))
	{
		return 0;
	}
	if (func_194(&(Local_15.f_84[iParam0]), Global_36, 1) < 10f)
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0)
{
	if (func_237(&Local_15, iParam0, 2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, &(Local_15.f_49[iParam0]), true))
	{
		return 0;
	}
	if (func_237(&Local_15, iParam0, 4))
	{
		return 1;
	}
	if (func_430(&Local_15, &(Local_15.f_49[iParam0])))
	{
		return 1;
	}
	if (!func_237(&Local_15, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_213(var uParam0, int iParam1)
{
	if (func_429(iParam1, 1114636288) || func_431(iParam1, 1, 1) <= 30f)
	{
		return 0;
	}
	return 1;
}

void func_214(int iParam0)
{
}

float func_215(int iParam0)
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

void func_216(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_432(vVar0, vVar3, 0) };
	vVar9 = { func_433(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_434(uParam0->f_209, fParam1, 5);
	func_435(uParam0);
}

void func_217(vector3 vParam0, int iParam3)
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
			if (func_436(vVar2, vParam0, 2f, 1))
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

int func_218(int iParam0)
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

int func_219(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = { func_158(85200619) };
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

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_221(int iParam0, int iParam1)
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
	if (func_437(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_437(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_222(int iParam0)
{
	if (((func_223(iParam0, 1) && func_223(iParam0, 2)) && func_223(iParam0, 8)) && func_223(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_223(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_224()
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

int func_225(int iParam0)
{
	if (!func_228(iParam0))
	{
		return -1;
	}
	return func_439(func_438(iParam0));
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_228(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_229(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_440(vVar0, vParam1);
}

int func_230(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_194(iParam0, Global_36, 1);
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

int func_231()
{
	return Global_1894899->f_2;
}

int func_232()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_441(16) && !func_441(21))
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	if (Local_15.f_151 != 11)
	{
		return 1;
	}
	if (Local_15.f_221 == 2)
	{
		return 0;
	}
	return 1;
}

bool func_234()
{
	return (Global_1894899 & 1 != 0 && func_231() != -1);
}

int func_235(int iParam0)
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

void func_236(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (uParam0->f_97[iParam1] || iParam2);
}

bool func_237(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_115[iParam1] && iParam2) != 0;
}

int func_238(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_442(iParam0, Global_35, 1, 1);
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

void func_239(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_115[iParam1] = (uParam0->f_115[iParam1] || iParam2);
}

float func_240(var uParam0)
{
	return uParam0->f_24;
}

void func_241(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_250(uParam0, 1);
	}
	else
	{
		func_249(uParam0, 1);
	}
}

void func_243(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 16384);
	}
	else
	{
		func_250(&(uParam0->f_1), 16384);
	}
}

void func_244(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 2048);
	}
	else
	{
		func_250(&(uParam0->f_1), 2048);
	}
}

void func_245(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_250(uParam0, 16);
	}
	else
	{
		func_249(uParam0, 67108864);
		func_249(uParam0, 16);
	}
}

void func_246(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 128);
	}
	else
	{
		func_250(&(uParam0->f_1), 128);
	}
}

void func_247(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_250(uParam0, 256);
	}
	else
	{
		func_249(uParam0, 256);
	}
}

void func_248(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_250(uParam0, 268435456);
	}
	else
	{
		func_249(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_250(uParam0, 1073741824);
	}
	else
	{
		func_249(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_250(uParam0, 536870912);
	}
	else
	{
		func_249(uParam0, 536870912);
	}
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_250(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_251()
{
	switch (Local_274.f_9)
	{
		case 0:
			func_443(&Local_15, &Local_274);
			break;
	}
}

void func_252(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = fParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

void func_253()
{
	func_78(&(Local_15.f_152), 0);
	func_79(&(Local_15.f_152), 1);
	func_444(&(Local_15.f_152), 1);
	func_445(&(Local_15.f_152), 1);
	func_244(&(Local_15.f_152), 0);
	func_243(&(Local_15.f_152), 0);
	func_446(&(Local_15.f_152), 1);
	func_245(&(Local_15.f_152), 1);
}

void func_254(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_255(var uParam0, int iParam1)
{
	uParam0->f_17 = (uParam0->f_17 || iParam1);
}

void func_256(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							func_447(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_447(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_447(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_447(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_447(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_447(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_447(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_447(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_447(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_447(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_447(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_447(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_447(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							break;
						case 2:
							func_447(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							break;
						case 3:
							func_447(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							break;
						case 4:
							func_447(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							break;
						case 5:
							func_447(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							break;
					}
					break;
				case 12:
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
							break;
					}
					Jump @2999; //curOff = 1424
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
							break;
					}
					Jump @2999; //curOff = 1470
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
							break;
						case 1:
							func_447(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
							break;
					}
					Jump @2999; //curOff = 1551
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
							break;
						case 1:
							func_447(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
							break;
						case 2:
							func_447(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
							break;
					}
					Jump @2999; //curOff = 1667
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
							break;
						case 1:
							func_447(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
							break;
					}
					Jump @2999; //curOff = 1748
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
							break;
						case 1:
							func_447(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
							break;
						case 2:
							func_447(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
							break;
						case 3:
							func_447(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
							break;
						case 4:
							func_447(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
							break;
					}
					Jump @2999; //curOff = 1934
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					Jump @2999; //curOff = 1980
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
							break;
					}
					Jump @2999; //curOff = 2026
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
							break;
						case 1:
							func_447(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
							break;
						case 2:
							func_447(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
							break;
						case 3:
							func_447(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
							break;
					}
					Jump @2999; //curOff = 2177
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
							break;
					}
					Jump @2999; //curOff = 2223
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
							break;
					}
					Jump @2999; //curOff = 2269
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
							break;
					}
					Jump @2999; //curOff = 2315
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
							break;
					}
					Jump @2999; //curOff = 2361
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
							break;
					}
					Jump @2999; //curOff = 2407
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
							break;
					}
					Jump @2999; //curOff = 2453
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
							break;
					}
					Jump @2999; //curOff = 2499
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
							break;
						case 1:
							func_447(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
							break;
					}
					Jump @2999; //curOff = 2580
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
							break;
					}
					Jump @2999; //curOff = 2626
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
							break;
					}
					Jump @2999; //curOff = 2672
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
							break;
					}
					Jump @2999; //curOff = 2718
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
							break;
						case 1:
							func_447(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
							break;
					}
					Jump @2999; //curOff = 2799
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
							break;
					}
					Jump @2999; //curOff = 2845
					switch (iParam4)
					{
						case 0:
							func_447(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
							break;
						case 1:
							func_447(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
							break;
						case 2:
							func_447(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
							break;
						case 3:
							func_447(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
							break;
					}
					Jump @6226; //curOff = 2999
					switch (iParam0)
					{
						case 0:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
									break;
								case 1:
									func_447(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
									break;
								case 2:
									func_447(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
									break;
								case 3:
									func_447(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
									break;
								case 4:
									func_447(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
									break;
							}
							break;
						case 1:
						case 2:
						case 36:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
									break;
								case 1:
									func_447(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
									break;
							}
							break;
						case 3:
						case 4:
						case 38:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
									break;
							}
							break;
						case 5:
						case 35:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
									break;
							}
							break;
						case 6:
						case 42:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
									break;
								case 1:
									func_447(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
									break;
								case 2:
									func_447(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
									break;
							}
							break;
						case 7:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
									break;
							}
							break;
						case 41:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
									break;
								case 1:
									func_447(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
									break;
							}
							break;
						case 8:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
									break;
							}
							break;
						case 40:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
									break;
							}
							break;
						case 9:
						case 10:
						case 37:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
									break;
								case 1:
									func_447(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
									break;
								case 2:
									func_447(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
									break;
								case 3:
									func_447(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
									break;
							}
							break;
						case 11:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
									break;
								case 1:
									func_447(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
									break;
								case 2:
									func_447(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
									break;
								case 3:
									func_447(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
									break;
								case 4:
									func_447(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
									break;
								case 5:
									func_447(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
									break;
							}
							break;
						case 12:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
									break;
							}
							break;
						case 15:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
									break;
							}
							break;
						case 13:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
									break;
								case 1:
									func_447(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
									break;
							}
							break;
						case 14:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
									break;
								case 1:
									func_447(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
									break;
								case 2:
									func_447(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
									break;
							}
							break;
						case 16:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
									break;
								case 1:
									func_447(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
									break;
							}
							break;
						case 17:
						case 39:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
									break;
								case 1:
									func_447(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
									break;
								case 2:
									func_447(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
									break;
								case 3:
									func_447(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
									break;
								case 4:
									func_447(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
									break;
							}
							break;
						case 18:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							break;
						case 19:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
									break;
							}
							break;
						case 21:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
									break;
								case 1:
									func_447(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
									break;
								case 2:
									func_447(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
									break;
								case 3:
									func_447(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
									break;
							}
							break;
						case 20:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
									break;
							}
							break;
						case 22:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
									break;
							}
							break;
						case 23:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
									break;
							}
							break;
						case 24:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
									break;
							}
							break;
						case 25:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
									break;
							}
							break;
						case 28:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
									break;
							}
							break;
						case 27:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
									break;
								case 1:
									func_447(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
									break;
							}
							break;
						case 26:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
									break;
							}
							break;
						case 29:
						case 30:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
									break;
							}
							break;
						case 31:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
									break;
							}
							break;
						case 32:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
									break;
							}
							break;
						case 33:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
									break;
								case 1:
									func_447(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							break;
						case 34:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
									break;
							}
							break;
						case 43:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
									break;
								case 1:
									func_447(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
									break;
								case 2:
									func_447(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
									break;
								case 3:
									func_447(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
									break;
							}
							break;
					}
					Jump @6226; //curOff = 5958
					switch (iParam0)
					{
						case 13:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
									break;
								case 1:
									func_447(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
									break;
							}
							break;
						case 33:
							switch (iParam4)
							{
								case 0:
									func_447(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
									break;
								case 1:
									func_447(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
									break;
							}
							break;
						case 0:
							switch (iParam4)
							{
								case 1:
									func_447(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
									break;
							}
							break;
					}
					Jump @6226; //curOff = 6195
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					Jump @6226; //curOff = 6209
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					*uParam2 = { Var0 };
					*uParam3 = Var0.f_3;
					if (func_69(*uParam2))
					{
						*uParam2 = { 0f, 0f, 0f };
						*uParam3 = 0f;
					}
				}

bool func_257(int iParam0, int iParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (iParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_258(int iParam0)
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

int func_259(bool bParam0, var uParam1, var uParam2)
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

void func_260(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_448(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_449(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_432(vVar0, vVar3, 0) };
	vVar9 = { func_433(vVar0, vVar3, 0) };
	if (func_450(uParam0->f_151))
	{
		iVar12 = func_451(uParam0);
		func_452(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_453(uParam0->f_209, fParam1, 0);
}

void func_261(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_249(&uParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

var func_262(int iParam0, int iParam1)
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

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_454(iParam0);
	if ((func_187(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_455())
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
					if (func_455())
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
					if (func_455())
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
					if (func_455())
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
					if (func_455())
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

int func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1268180497;
	iVar1 = func_454(iParam0);
	if ((func_187(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_455())
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
					if (func_455())
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
					if (func_455())
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
					if (func_455())
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
					if (func_455())
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

void func_265()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_456(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_266(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		iVar0 = func_97(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

void func_267(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_457(uParam0, iVar0, 0, 1);
		iVar0++;
	}
}

char* func_268()
{
	return "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@AMBUSH_TRAP@DIA_03A_PLAYER";
}

int func_269(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_458(uParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_270(var uParam0)
{
	int iVar0;

	if (func_131(uParam0, 4))
	{
		switch (uParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						func_459(uParam0, iVar0, "PBL_ENTER_A");
					}
					func_459(uParam0, iVar0, "PBL_EXIT_A");
					func_459(uParam0, iVar0, "PBL_GEDDOWNA_THERE_A");
					func_459(uParam0, iVar0, "PBL_GET_OFF_A");
					func_459(uParam0, iVar0, "PBL_GOT_YOUR_HORSE_A");
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						func_459(uParam0, iVar0, "PBL_ENTER_A");
					}
					func_459(uParam0, iVar0, "PBL_HELP_YA_A");
					iVar0++;
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						func_459(uParam0, iVar0, "PBL_ENTER_B");
					}
					func_459(uParam0, iVar0, "PBL_EXIT_B");
					func_459(uParam0, iVar0, "PBL_GEDDOWNA_THERE_B");
					func_459(uParam0, iVar0, "PBL_GET_OFF_B");
					func_459(uParam0, iVar0, "PBL_GOT_YOUR_HORSE_B");
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						func_459(uParam0, iVar0, "PBL_ENTER_B");
					}
					func_459(uParam0, iVar0, "PBL_HELP_YA_B");
					iVar0++;
				}
				break;
		}
	}
}

int func_271(var uParam0)
{
	int iVar0;

	if (func_131(uParam0, 4))
	{
		switch (uParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						if (!func_460(uParam0, iVar0, "PBL_ENTER_A"))
						{
							return 0;
						}
					}
					if (!func_460(uParam0, iVar0, "PBL_EXIT_A"))
					{
						return 0;
					}
					if (!func_460(uParam0, iVar0, "PBL_GEDDOWNA_THERE_A"))
					{
						return 0;
					}
					if (!func_460(uParam0, iVar0, "PBL_GET_OFF_A"))
					{
						return 0;
					}
					if (!func_460(uParam0, iVar0, "PBL_GOT_YOUR_HORSE_A"))
					{
						return 0;
					}
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						if (!func_460(uParam0, iVar0, "PBL_ENTER_A"))
						{
							return 0;
						}
					}
					if (!func_460(uParam0, iVar0, "PBL_HELP_YA_A"))
					{
						return 0;
					}
					iVar0++;
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_10)
		{
			case 1:
				iVar0 = 4;
				while (iVar0 <= 7)
				{
					if (iVar0 != 5)
					{
						if (!func_460(uParam0, iVar0, "PBL_ENTER_B"))
						{
							return 0;
						}
					}
					if (!func_460(uParam0, iVar0, "PBL_EXIT_B"))
					{
						return 0;
					}
					if (!func_460(uParam0, iVar0, "PBL_GEDDOWNA_THERE_B"))
					{
						return 0;
					}
					if (!func_460(uParam0, iVar0, "PBL_GET_OFF_B"))
					{
						return 0;
					}
					if (!func_460(uParam0, iVar0, "PBL_GOT_YOUR_HORSE_B"))
					{
						return 0;
					}
					iVar0++;
				}
				break;
			case 0:
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (iVar0 != 1)
					{
						if (!func_460(uParam0, iVar0, "PBL_ENTER_B"))
						{
							return 0;
						}
					}
					if (!func_460(uParam0, iVar0, "PBL_HELP_YA_B"))
					{
						return 0;
					}
					iVar0++;
				}
				break;
		}
	}
	return 1;
}

int func_272(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_215)
	{
		uVar0 = func_97(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(func_97(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_273()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_456(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				iVar2 = 0;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_274(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_151)
	{
		case 18:
			switch (iParam2)
			{
				case 0:
					return 1285276059;
				case 1:
					return -1975236125;
				case 2:
					return 1871320175;
				case 3:
					return 634126580;
				case 4:
					return -2139769274;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					return 1285276059;
				case 1:
					return 1022832458;
				case 2:
					return -454688983;
				case 3:
					return -1288823878;
				case 4:
					return -739156672;
				default:
					break;
			}
			break;
	}
	return func_94();
}

bool func_275(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_276(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_461(iParam1))
		{
			func_462(iParam0, 41788943);
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
			func_463(iParam0, 0, 1);
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
			func_464(iParam0, 0);
			bVar0 = true;
		}
		func_465(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_277(int iParam0)
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

struct<4> func_278(var uParam0, int iParam1)
{
	struct<4> Var0;

	switch (uParam0->f_9)
	{
		case 0:
			if (func_131(uParam0, 4))
			{
				switch (iParam1)
				{
					case 0:
						return func_466(0, 0);
					case 1:
						return func_466(0, 2);
					case 2:
						return func_466(0, 4);
					case 3:
						return func_466(0, 6);
					case 4:
						return func_466(0, 8);
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return func_466(2, 0);
					case 1:
						return func_466(2, 2);
					case 2:
						return func_466(2, 4);
					case 3:
						return func_466(2, 6);
					case 4:
						return func_466(2, 8);
					default:
						break;
				}
			}
			break;
	}
	return Var0;
}

void func_279(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (&uParam0->f_97[iParam1] - (uParam0->f_97[iParam1] && iParam2));
}

int func_280(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 2;
			case 2:
				return 1;
			case 3:
				return 1;
			case 4:
				return 1;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			default:
				break;
		}
	}
	return -1;
}

char* func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0199_G_M_M_UniInbred_01_WHITE_01";
		case 2:
			return "0200_G_M_M_UniInbred_01_WHITE_02";
		case 1:
			return "0203_G_M_M_UniInbred_03_WHITE_01";
		default:
			break;
	}
	return "";
}

void func_282(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (func_61(&(Local_15[iParam0]), 0, 1))
	{
		func_467(&Local_274, iParam1, sParam2, &(Local_15[iParam0]), 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_15[iParam0]), false, true);
		func_468(&(Local_15[iParam0]), joaat("weapon_melee_knife"), -1, 0, 0, 1056964608, 1065353216, 0);
		if (iParam3 == joaat("weapon_shotgun_doublebarrel"))
		{
			func_469(&Local_15, &(Local_15[iParam0]), joaat("weapon_shotgun_doublebarrel"), 1);
		}
		else
		{
			func_469(&Local_15, &(Local_15[iParam0]), iParam3, 1);
		}
	}
}

bool func_283(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

bool func_284(var uParam0)
{
	return func_220(*uParam0, 2);
}

void func_285(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (func_284(uParam0))
	{
		uParam0->f_1 = (func_24() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_470(uParam0, 2);
	}
}

void func_286(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (!func_284(uParam0))
	{
		uParam0->f_2 = (func_24() - uParam0->f_1);
		func_471(uParam0, 2);
	}
}

int func_287(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	if (VOLUME::IS_POINT_IN_VOLUME(iParam0, Global_36))
	{
		return 1;
	}
	return 0;
}

int func_288(var uParam0)
{
	if (!func_60(&(uParam0->f_182.f_13)))
	{
		return 1;
	}
	if (!func_47(&(uParam0->f_182.f_13), uParam0->f_182.f_16))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar0);
		bVar2 = PED::IS_PED_ON_MOUNT(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 149))
			{
				if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return 1;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, iParam4, 0);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (iParam3 && (TASK::IS_PED_RUNNING(iVar0) || TASK::IS_PED_SPRINTING(iVar0)));
				if (bVar3 || (!bParam2 || func_472(iVar0)))
				{
					if (bVar3)
					{
						TASK::TASK_HORSE_ACTION(iVar0, 9, 0, 0);
					}
					else
					{
						TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					*uParam1 = 3;
				}
				else if (!func_201(iVar0, 1041577989))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						return 1;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		HUD::_DISABLE_HUD_CONTEXT(724769646);
	}
	return 0;
}

int func_290(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_437(*uParam1, 128))
	{
		if (!func_201(iParam0, 1245594896))
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
	if (func_437(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_472(iVar2))
			{
				return 0;
			}
			if (!func_201(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_473(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_437(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_187(uParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0)));
			func_474(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_437(*uParam1, 4))
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
	if (func_437(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_472(iVar2))
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
		if (!func_187(uParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_187(uParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_187(uParam2, 8192))
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
		if (func_437(*uParam1, 2336))
		{
			if (!func_472(iVar2))
			{
			}
			if (func_475(iVar2, *uParam1))
			{
				func_476(uParam1, 32);
				func_476(uParam1, 256);
				func_476(uParam1, 2048);
				func_474(uParam1, 512);
				func_474(uParam1, 1024);
				func_474(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_437(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_472(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_476(uParam1, 64);
			}
		}
		if (func_187(uParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_187(uParam2, 1024))) || func_187(uParam2, 8)) && !func_437(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_474(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_187(uParam2, 4096)) && !func_437(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_474(uParam1, 2048);
			func_474(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_187(uParam2, 32)) && !func_437(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_474(uParam1, 256);
			func_474(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_474(uParam1, 64);
		}
		else if (!func_187(uParam2, 1))
		{
			if (!func_187(uParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_473(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_437(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_474(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_474(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_187(uParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_474(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_187(uParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_474(uParam1, 8);
	}
	return 0;
}

void func_291(var uParam0, float fParam1)
{
	if (uParam0->f_1)
	{
		if (Global_1935630->f_58 != *uParam0)
		{
			if (func_61(Global_1935630->f_58, 0, 1) && func_424(Global_1935630->f_58))
			{
				func_204(uParam0, *uParam0, 0, fParam1);
				func_204(uParam0, Global_1935630->f_58, 1, fParam1);
			}
		}
	}
}

void func_292(var uParam0, int iParam1)
{
	func_249(uParam0, iParam1);
}

int func_293(var uParam0)
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

int func_294(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_477(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_295(uParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
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

int func_295(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_478(uParam2, 1, iVar0);
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
			if (func_479(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_480(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_481(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_482(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_483(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_89(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_480(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_484(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_485(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_480(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_486(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_480(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_487(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_487(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_480(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_488(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_489(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_490(uParam2, 4000))
				{
					if ((func_491(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_492(uParam2, iParam0)) && func_493(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_480(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_491(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_492(uParam2, iParam0)) && func_493(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_494(iParam0, Global_1935630->f_41))
							{
								func_495();
								*uParam3 = 2;
								func_480(iParam0, uParam2, *uParam3);
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
						if (func_494(iParam0, Global_1935630->f_41))
						{
							func_495();
							*uParam3 = 2;
							func_480(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_496(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_185() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_495();
						*uParam3 = 2;
						func_480(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_497())
					{
						if (func_494(iParam0, Global_1935630->f_42))
						{
							func_495();
							*uParam3 = 2;
							func_480(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_498(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_480(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_499(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_500(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_480(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_501(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_502(uParam2, 4000))
				{
					if (func_503(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_480(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_504(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_480(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_505(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_480(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_296(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_297(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_402(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, iParam5, iParam6, 1, 0, 0))
	{
		uParam0->f_346 = iParam1;
		func_193(uParam0->f_288[7 /*3*/]);
		return 1;
	}
	return 0;
}

void func_298(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_299(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	func_154(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_190(240f, 1, 0);
		func_183(120, 0, 1);
	}
	(Global_40.f_9632[iParam0 /*4*/])->f_1++;
	Var2 = { func_158(85200619) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		(Global_40.f_9632[iParam0 /*4*/])->f_3 = (iVar1 + func_506(iParam0, 1));
	}
	func_161(0, 13);
}

void func_300()
{
	func_507();
}

int func_301()
{
	if (Local_274.f_10 == 0)
	{
		return 1;
	}
	return 5;
}

void func_302(var uParam0)
{
	if (func_350(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	}
}

void func_303()
{
	if (!func_61(&(Local_15[0]), 0, 0))
	{
		return;
	}
	switch (Local_274.f_10)
	{
		case 0:
			if (!func_323(&Local_274, 1))
			{
				if (func_508(&(Local_15[0]), 2044478011, "bLineLookLost", func_353(), 1067030938, 1))
				{
					func_297(&Local_274, &(Local_15[0]), Global_35, func_509(Local_274.f_10), -1073741824, 0, -500314840, 0);
					func_510(&Local_274, 1);
				}
			}
			else if (!func_323(&Local_274, 8192))
			{
				if (func_508(&(Local_15[0]), 872614613, "bLineHelpYa", func_353(), 1067030938, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_SURROUND", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 8192);
				}
			}
			else if (!func_323(&Local_274, 16384))
			{
				if (func_508(&(Local_15[0]), -1791056103, "bLineGotTheHorse", func_353(), 1067030938, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, &(Local_274.f_317[0]), Global_35, "AMBUSH_FRT_HAVEHORSE", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 16384);
				}
			}
			else if (!func_323(&Local_274, 32768) && !func_60(Local_274.f_288[4 /*3*/]))
			{
				if (func_508(&(Local_15[0]), 746407267, "bLineMurfreeHills", func_353(), 1067030938, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_OURHILLS", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 32768);
				}
			}
			else if (!func_323(&Local_274, 65536))
			{
				if (func_508(&(Local_15[0]), -156995711, "bLineRealSubtle", func_353(), 1067030938, 1))
				{
					if (func_511())
					{
						func_297(&Local_274, Global_35, &(Local_15[0]), "AMBUSH_FRT_IREADYA", -1073741824, 0, 291934926, 0);
					}
					func_510(&Local_274, 65536);
				}
			}
			else if (!func_323(&Local_274, 131072))
			{
				if (func_508(&(Local_15[0]), 250066078, "bLineLetGo", func_353(), 1067030938, 1))
				{
					if (!func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_LETGO", -1073741824, 0, 291934926, 0);
					}
					func_510(&Local_274, 131072);
				}
			}
			break;
		case 1:
			if (!func_323(&Local_274, 1))
			{
				if (func_508(&(Local_15[0]), -1238605452, "bLineLookieHere", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, func_509(Local_274.f_10), -1073741824, 0, -500314840, 0);
					}
					func_510(&Local_274, 1);
				}
			}
			else if (!func_323(&Local_274, 2))
			{
				if (func_508(&(Local_15[0]), -580405577, "bLinePayNoMind", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_V2_INTRO_B_KNOWN", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 2);
				}
			}
			else if (!func_323(&Local_274, 4))
			{
				if (func_508(&(Local_15[0]), 430284395, "bLineGotHisHorse", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, &(Local_274.f_317[0]), Global_35, "AMBUSH_FRT_V2_HAVEHORSE", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 4);
				}
			}
			else if (!func_323(&Local_274, 8))
			{
				if (func_508(&(Local_15[0]), 600349803, "bLineGotYourHorse", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_V2_THREAT_A", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 8);
				}
			}
			else if (!func_323(&Local_274, 16))
			{
				if (func_508(&(Local_15[0]), 1705877904, "bLineYouFellers", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, Global_35, &(Local_15[0]), "AMBUSH_FRT_V2_THREAT_B", -1073741824, 0, 1744022339, 0);
						func_346();
					}
					func_510(&Local_274, 16);
				}
			}
			else if (!func_323(&Local_274, 32))
			{
				if (func_508(&(Local_15[0]), 1677490012, "bLineYouWannaGo", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_V2_THREAT_C", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 32);
				}
			}
			else if (!func_323(&Local_274, 64))
			{
				if (func_508(&(Local_15[0]), 294646186, "bLineGeddownaThere", func_353(), 1067030938, 1))
				{
					if (!func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_V2_OFFHORSE_B", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 64);
				}
			}
			else if (!func_323(&Local_274, 128))
			{
				if (func_508(&(Local_15[0]), 1270111039, "bLineGetOffaThere", func_353(), 1067030938, 1))
				{
					if (func_511() && !func_512())
					{
						func_297(&Local_274, &(Local_15[0]), Global_35, "AMBUSH_FRT_V2_OFFHORSE_A", -1073741824, 0, 1744022339, 0);
					}
					func_510(&Local_274, 128);
				}
			}
			break;
	}
}

void func_304()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_131(&Local_274, 64))
	{
		if (func_323(&Local_274, 1))
		{
			iVar4 = 3;
			while (iVar4 <= 4)
			{
				if (!func_61(&(Local_15[iVar4]), 0, 0))
				{
				}
				else
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(&(Local_15[iVar4]), false, true);
					func_468(&(Local_15[iVar4]), joaat("weapon_melee_knife"), -1, 0, 0, 1056964608, 1065353216, 0);
					switch (iVar4)
					{
						case 3:
							if (func_131(&Local_274, 128))
							{
								func_469(&Local_15, &(Local_15[iVar4]), joaat("weapon_revolver_cattleman"), 0);
								func_513(&(Local_15[iVar4]), 1, 3, 0);
								PED::_0x49DADFC4CD808B0A(&(Local_15[iVar4]), 1, -1);
							}
							else
							{
								func_469(&Local_15, &(Local_15[iVar4]), joaat("weapon_revolver_cattleman"), 0);
								func_468(&(Local_15[iVar4]), joaat("weapon_melee_knife"), -1, 1, 0, 1056964608, 1065353216, 0);
							}
							break;
						case 4:
							if (func_131(&Local_274, 128))
							{
								func_469(&Local_15, &(Local_15[iVar4]), joaat("weapon_revolver_cattleman"), 0);
								func_513(&(Local_15[iVar4]), 1, 3, 0);
								PED::_0x49DADFC4CD808B0A(&(Local_15[iVar4]), 1, -1);
							}
							else
							{
								func_469(&Local_15, &(Local_15[iVar4]), joaat("weapon_shotgun_doublebarrel"), 1);
								PED::_0x49DADFC4CD808B0A(&(Local_15[iVar4]), 1, -1);
							}
							break;
					}
					Var0 = { func_514(&Local_274, iVar4) };
					if (!func_131(&Local_274, 128))
					{
						PED::_0x89F5E7ADECCCB49C(&(Local_15[iVar4]), "angry");
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 1f, -1, 0.25f, false, Var0.f_3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_208(&(Local_15[iVar4]), &iVar5, 0, 0, 1, 1);
				}
				iVar4++;
			}
			func_133(&Local_274, 64);
		}
	}
}

void func_305()
{
	if (((func_131(&Local_274, 262144) || func_131(&Local_274, 16384)) || func_131(&Local_274, 524288)) || func_131(&Local_274, 256))
	{
		if (func_358(Local_274.f_316))
		{
			func_170(&(Local_274.f_316), 0, 1);
		}
		return;
	}
	if (!func_358(Local_274.f_316))
	{
		Local_274.f_316 = func_515("BREAK_FREE", 1367437629, 7, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_516(Local_274.f_316, 0, 1);
	}
	else if (func_517(Local_274.f_316, 0))
	{
		func_170(&(Local_274.f_316), 1, 1);
		func_133(&Local_274, 262144);
		func_151(&Local_274, 8, "HORSE", Local_15.f_56);
		func_152(&Local_274, 8);
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		func_137();
		MAP::DISPLAY_RADAR(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
}

void func_306(var uParam0, int iParam1)
{
	uParam0->f_7 = iParam1;
}

bool func_307(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

int func_308()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40))
	{
		if (PED::_0x7BB810E8B343AC7B(Global_1935630->f_40))
		{
			return 1;
		}
		PED::_0xF60165E1D2C5370B(Global_1935630->f_40, &fVar0, &fVar1);
		fVar2 = MISC::ABSF(fVar0);
		fVar3 = MISC::ABSF(fVar1);
		if (fVar2 > fVar3)
		{
			return 1;
		}
		if (fVar1 < 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_309()
{
	char[] cVar0[8];

	cVar0 = func_518(&Local_274);
	if (func_61(&(Local_15[0]), 0, 0))
	{
		PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), false, 0, 0);
	}
	switch (Local_274.f_10)
	{
		case 0:
			func_519(&Local_274, 0);
			func_520(&Local_274, 0, cVar0, 1);
			break;
		case 1:
			func_519(&Local_274, 4);
			func_520(&Local_274, 4, cVar0, 1);
			break;
	}
	func_40(Local_274.f_288[2 /*3*/], 0);
}

void func_310()
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<4> Var5;
	vector3 vVar9[2];
	float fVar16;

	if (!func_131(&Local_274, 2048))
	{
		func_199(&Local_274, 0);
		HUD::_DISABLE_HUD_CONTEXT(724769646);
		iVar2 = PED::_0x4C8B59171957BCF7(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			PED::_0xF60165E1D2C5370B(iVar2, &uVar0, &fVar1);
		}
		else
		{
			PED::_0xF60165E1D2C5370B(Global_35, &uVar0, &fVar1);
		}
		PED::_0x2EB75FB86C41F026(iVar2, 3, 0);
		PED::_0x2EB75FB86C41F026(iVar2, 1, 0);
		Local_274.f_322 = iVar2;
		Var5 = { func_521(&Local_274) };
		sVar4 = func_198(&Local_274);
		TASK::WAYPOINT_RECORDING_GET_COORD(sVar4, 0, vVar9[0 /*3*/]);
		TASK::WAYPOINT_RECORDING_GET_COORD(sVar4, 1, vVar9[1 /*3*/]);
		fVar16 = func_522(*(vVar9[0 /*3*/]), *(vVar9[1 /*3*/]), 1);
		if (fVar1 < 1f)
		{
			fVar1 = 1f;
		}
		func_523();
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iVar2, 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, *(vVar9[0 /*3*/]), (0.9f * fVar1), 20000, fVar16, 1f, 1);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sVar4, 0, 768, -1, 0, 0, -1);
		func_208(Global_35, &iVar3, 0, 0, 1, 1);
		func_40(Local_274.f_288[3 /*3*/], 0);
		func_133(&Local_274, 2048);
	}
}

void func_311()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 0))
		{
			func_125(&Local_15, iVar0, 1);
		}
		iVar0++;
	}
}

int func_312(int iParam0)
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
	iVar0 = func_524(func_404());
	if (func_187(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_187(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

void func_313()
{
	func_78(&(Local_15.f_152), 1);
	func_79(&(Local_15.f_152), 1);
	func_444(&(Local_15.f_152), 1);
	func_445(&(Local_15.f_152), 1);
	func_244(&(Local_15.f_152), 1);
	func_446(&(Local_15.f_152), 1);
	func_245(&(Local_15.f_152), 1);
	func_525(&(Local_15.f_152), 500);
}

void func_314(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_315()
{
	vector3 vVar0;

	if (!bLocal_630)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 2139949496, false);
		PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
		PAD::DISABLE_CONTROL_ACTION(1, 2139949496, false);
	}
	if (func_131(&Local_274, 16777216))
	{
		func_40(Local_274.f_288[6 /*3*/], 0);
		if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0))
		{
			if (!bLocal_630)
			{
				if (func_69(vLocal_627))
				{
					vLocal_627 = { func_526() };
				}
				func_527(vLocal_627, ENTITY::GET_ENTITY_COORDS(&(Local_15[0]), true, false), &uLocal_631, 2000, 0);
			}
		}
		else
		{
			func_528(&(Local_15[0]), &(Local_274.f_75), vVar0, 1, 30f, 25f, 10000, 7000, 2000, 1075838976, 1, 1, 1084227584);
		}
	}
}

void func_316()
{
	if (func_47(Local_274.f_288[2 /*3*/], 3f))
	{
		if (!func_131(&Local_274, 8192))
		{
			func_529();
			func_133(&Local_274, 8192);
		}
	}
}

int func_317(int iParam0)
{
	switch (Local_274.f_10)
	{
		case 0:
			if (func_131(&Local_274, 4))
			{
				if (func_530(&Local_274, 0, "IDLE_A_WARN") && (iParam0 || func_530(&Local_274, 2, "IDLE_A_WARN")))
				{
					return 1;
				}
			}
			else if (func_530(&Local_274, 0, "IDLE_B_WARN") && (iParam0 || func_530(&Local_274, 2, "IDLE_B_WARN")))
			{
				return 1;
			}
			break;
		case 1:
			if (func_131(&Local_274, 4))
			{
				if (func_530(&Local_274, 4, "IDLE_A_VIOLENT") && (iParam0 || func_530(&Local_274, 6, "IDLE_A_VIOLENT")))
				{
					return 1;
				}
			}
			else if (func_530(&Local_274, 4, "IDLE_B_VIOLENT") && (iParam0 || func_530(&Local_274, 6, "IDLE_B_VIOLENT")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_318()
{
	switch (Local_274.f_8)
	{
		case 0:
			if (func_531())
			{
				Local_274.f_8 = 1;
			}
			break;
		case 1:
			if (func_532())
			{
				Local_274.f_8 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_319()
{
	int iVar0;
	vector3 vVar1;
	float fVar5;
	float fVar6;
	vector3 vVar7;

	if (func_131(&Local_274, 4096))
	{
		func_321();
		return 1;
	}
	if (!func_131(&Local_274, 2048))
	{
		return 0;
	}
	iVar0 = Global_1935630->f_40;
	if (!func_61(iVar0, 0, 0))
	{
		return 0;
	}
	vVar1 = { func_521(&Local_274) };
	fVar5 = ENTITY::GET_ENTITY_SPEED(iVar0);
	fVar6 = func_194(iVar0, vVar1, 0);
	if ((fVar5 < 0.05f && fVar6 < 1f) || func_47(Local_274.f_288[3 /*3*/], 6f))
	{
		MAP::DISPLAY_RADAR(true);
		func_22(&Local_15, 4096);
		func_133(&Local_274, 4096);
		func_199(&Local_274, 1);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_274.f_334[8]), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(Local_274.f_334[8]), "HORSE", iVar0, 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(&(Local_274.f_334[8]), "IDLE_BOOL", false, false);
		ANIMSCENE::START_ANIM_SCENE(&(Local_274.f_334[8]));
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		if (!func_102(&vVar7, 1, 10, 0))
		{
			vVar7 = { vVar7.x, vVar7.y, (vVar7.z - 1f) };
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_274.f_334[1]), vVar7, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_274.f_334[5]), vVar7, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar0), 2);
		func_321();
	}
	return 0;
}

void func_320()
{
	switch (Local_274.f_10)
	{
		case 0:
			func_467(&Local_274, 1, "MALE_B", &(Local_274.f_317[0]), 1);
			func_467(&Local_274, 1, "HORSE", Global_1935630->f_40, 1);
			func_519(&Local_274, 1);
			if (func_131(&Local_274, 4))
			{
				func_520(&Local_274, 1, "PBL_HELP_YA_A", 1);
				func_520(&Local_274, 0, "PBL_HELP_YA_A", 1);
				func_520(&Local_274, 2, "PBL_HELP_YA_A", 1);
				func_520(&Local_274, 3, "PBL_HELP_YA_A", 1);
				func_533(&Local_274, 0, "BOOL_A", 1);
				func_533(&Local_274, 2, "BOOL_A", 1);
				func_533(&Local_274, 3, "BOOL_A", 1);
			}
			else
			{
				func_520(&Local_274, 1, "PBL_HELP_YA_B", 1);
				func_533(&Local_274, 0, "BOOL_B", 1);
				func_533(&Local_274, 2, "BOOL_B", 1);
				func_533(&Local_274, 3, "BOOL_B", 1);
				func_520(&Local_274, 0, "PBL_HELP_YA_B", 1);
				func_520(&Local_274, 2, "PBL_HELP_YA_B", 1);
				func_520(&Local_274, 3, "PBL_HELP_YA_B", 1);
			}
			break;
		case 1:
			func_467(&Local_274, 5, "MALE_B", &(Local_274.f_317[0]), 1);
			func_467(&Local_274, 5, "HORSE", Global_1935630->f_40, 1);
			func_519(&Local_274, 5);
			if (func_131(&Local_274, 4))
			{
				func_520(&Local_274, 5, "PBL_GOT_YOUR_HORSE_A", 1);
				func_533(&Local_274, 4, "BOOL_A", 1);
				func_533(&Local_274, 6, "BOOL_A", 1);
				func_533(&Local_274, 7, "BOOL_A", 1);
				func_520(&Local_274, 4, "PBL_GOT_YOUR_HORSE_A", 1);
				func_520(&Local_274, 6, "PBL_GOT_YOUR_HORSE_A", 1);
				func_520(&Local_274, 7, "PBL_GOT_YOUR_HORSE_A", 1);
			}
			else
			{
				func_520(&Local_274, 5, "PBL_GOT_YOUR_HORSE_B", 1);
				func_533(&Local_274, 4, "BOOL_B", 1);
				func_533(&Local_274, 6, "BOOL_B", 1);
				func_533(&Local_274, 7, "BOOL_B", 1);
				func_520(&Local_274, 4, "PBL_GOT_YOUR_HORSE_B", 1);
				func_520(&Local_274, 6, "PBL_GOT_YOUR_HORSE_B", 1);
				func_520(&Local_274, 7, "PBL_GOT_YOUR_HORSE_B", 1);
			}
			break;
	}
}

void func_321()
{
	if (!func_131(&Local_274, 256))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1882188328, false);
		PAD::DISABLE_CONTROL_ACTION(0, -763919645, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1885667965, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1260100172, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1537201378, false);
		PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1771341755, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1459101765, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2032700426, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
		if (Local_274.f_5 < 2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -874806616, false);
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, -1879280170, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1520437207, true);
		PAD::ENABLE_CONTROL_ACTION(0, -455946723, true);
	}
}

int func_322()
{
	switch (Local_274.f_10)
	{
		case 0:
			if (func_131(&Local_274, 4))
			{
				if (func_530(&Local_274, 1, "IDLE_A_WARN"))
				{
					return 1;
				}
			}
			else if (func_530(&Local_274, 1, "IDLE_B_WARN"))
			{
				return 1;
			}
			break;
		case 1:
			if (func_131(&Local_274, 4))
			{
				if (func_530(&Local_274, 5, "IDLE_A_VIOLENT"))
				{
					return 1;
				}
			}
			else if (func_530(&Local_274, 5, "IDLE_B_VIOLENT"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_323(var uParam0, int iParam1)
{
	return func_187(uParam0->f_1, iParam1);
}

void func_324()
{
	int iVar0;

	func_297(&Local_274, &(Local_15[1]), &(Local_15[0]), "HEADS_UP_STORY_MEMORY_RDCH3", -2f, 1, 1744022339, 1);
	TASK::TASK_LOOK_AT_ENTITY(&(Local_15[0]), Global_35, 8000, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
	func_208(&(Local_15[0]), &iVar0, 1f, 0, 1, 1);
}

void func_325()
{
	char* sVar0;

	switch (Local_274.f_10)
	{
		case 0:
			if (func_131(&Local_274, 4))
			{
				sVar0 = "BOOL_A";
			}
			else
			{
				sVar0 = "BOOL_B";
			}
			if (func_534(&Local_274, 0, sVar0))
			{
				if (!func_317(0))
				{
					func_40(Local_274.f_288[5 /*3*/], 0);
					if (func_47(Local_274.f_288[5 /*3*/], 3f))
					{
						func_533(&Local_274, 0, sVar0, 0);
						func_533(&Local_274, 1, sVar0, 0);
						func_533(&Local_274, 2, sVar0, 0);
						func_533(&Local_274, 3, sVar0, 0);
						func_147(Local_274.f_288[5 /*3*/]);
					}
				}
				else
				{
					func_193(Local_274.f_288[5 /*3*/]);
				}
			}
			break;
		case 1:
			if (func_131(&Local_274, 4))
			{
				sVar0 = "BOOL_A";
			}
			else
			{
				sVar0 = "BOOL_B";
			}
			if (func_534(&Local_274, 4, sVar0))
			{
				if (!func_317(0))
				{
					func_40(Local_274.f_288[5 /*3*/], 0);
					if (func_47(Local_274.f_288[5 /*3*/], 1f))
					{
						func_533(&Local_274, 4, sVar0, 0);
						func_533(&Local_274, 5, sVar0, 0);
						func_533(&Local_274, 6, sVar0, 0);
						func_533(&Local_274, 7, sVar0, 0);
						func_147(Local_274.f_288[5 /*3*/]);
					}
				}
				else
				{
					func_193(Local_274.f_288[5 /*3*/]);
				}
			}
			break;
	}
}

int func_326()
{
	int iVar0;
	char* sVar1;

	if (((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -874806616) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -822242784)) || PAD::IS_CONTROL_JUST_PRESSED(0, -874806616)) || PAD::IS_CONTROL_JUST_PRESSED(0, -822242784)) || PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID())) || func_131(&Local_274, 32768))
	{
		func_349(&Local_15);
		if (!func_131(&Local_274, 32768))
		{
			func_203();
			sVar1 = func_535(&Local_274);
			func_297(&Local_274, Global_35, Global_35, sVar1, -1073741824, 1, 291934926, 0);
			func_536(&(Local_274.f_121.f_127), 1, 1);
			func_133(&Local_274, 32768);
			PED::SET_PED_CONFIG_FLAG(&(Local_274.f_317[0]), 448, true);
			if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
				func_537(0, &(Local_274.f_317[0]), 1500);
				func_208(Global_35, &iVar0, 0, 0, 1, 1);
			}
			if (!func_131(&Local_274, 67108864))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 25f, 1f, 30f, 0);
				if (WEAPON::_0x705BE297EEBDB95D(func_296(&(Local_15[3]), 1, 0, 0)))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 18f, 22f, 1, 0, -687903391, 0);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 12f, 1f, 30f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
				func_208(&(Local_15[3]), &iVar0, 0f, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 30f, 1f, 30f, 0);
				if (WEAPON::_0x705BE297EEBDB95D(func_296(&(Local_15[3]), 1, 0, 0)))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 22f, 25f, 1, 0, -687903391, 0);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				}
				else
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 12f, 1f, 30f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
				func_208(&(Local_15[4]), &iVar0, 0.5f, 0, 1, 1);
				func_133(&Local_274, 67108864);
			}
		}
		if (func_69(Local_274.f_331) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			func_538();
			Local_274.f_331 = { Global_36 };
			return 1;
		}
	}
	return 0;
}

void func_327()
{
	int iVar0;

	func_297(&Local_274, &(Local_15[0]), Global_35, "GENERIC_SHOCKED_DISBELIEF", -2f, 1, 1744022339, 2);
	func_298(&(Local_15[0]), Local_15.f_22[0], 831283580, 0, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 8000, 0, 1);
	func_208(&(Local_15[0]), &iVar0, 1.25f, 0, 1, 1);
}

void func_328(var uParam0, int iParam1)
{
}

int func_329(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0);
	}
	return 0;
}

bool func_330(var uParam0)
{
	return uParam0->f_224 == 6;
}

int func_331(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_539(uParam0))
			{
				func_328(uParam0, 1);
				return 1;
			}
			break;
		case 1:
			if (func_540(uParam0))
			{
				func_328(uParam0, 2);
				return 1;
			}
			break;
		case 2:
			if (func_541(uParam0))
			{
				func_328(uParam0, 3);
				return 1;
			}
			break;
		case 3:
			if (func_542(uParam0))
			{
				func_328(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			if (func_543(uParam0))
			{
				func_328(uParam0, 5);
				return 1;
			}
			break;
		case 5:
			if (func_544(uParam0))
			{
				func_328(uParam0, 6);
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

int func_332(int iParam0, int iParam1, int iParam2)
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

var func_333(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	var uVar0;
	var uVar1;

	uVar0 = iParam9;
	func_545(&uVar0);
	if (func_187(uVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_546(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_187(uVar0, 134217728))
	{
		func_547(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_548(558))
				{
					func_549(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

bool func_334(var uParam0)
{
	return uParam0->f_2 == 2;
}

int func_335(var uParam0, bool bParam1)
{
	if (!bParam1 || func_358(uParam0->f_6))
	{
		return func_550(uParam0, 13);
	}
	return 0;
}

void func_336(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_550(iParam0, 13))
		{
			if (bParam2)
			{
				func_551(iParam0, 0, 0);
			}
			func_552(iParam0, 13);
		}
	}
	else if (func_550(iParam0, 13))
	{
		func_553(iParam0, 13);
	}
}

void func_337(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

int func_338(int iParam0, int iParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_339(float fParam0)
{
	if (func_554(1))
	{
		return 1;
	}
	if (func_60(&uLocal_0) && !func_555(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

char* func_340(int iParam0)
{
	if (func_556(iParam0))
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

void func_341(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_358(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_557(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_558(iParam0->f_6, iParam0->f_5, 0);
			}
			func_559(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_560(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_342(var uParam0, int iParam1)
{
	if ((func_561(uParam0->f_127[iParam1 /*17*/], 1, 0) && !func_550(uParam0->f_127[iParam1 /*17*/], 4)) && !func_550(uParam0->f_127[iParam1 /*17*/], 13))
	{
		return 1;
	}
	return 0;
}

void func_343(var uParam0, int iParam1, int iParam2)
{
	func_551(uParam0->f_127[iParam1 /*17*/], iParam2, 0);
}

void func_344()
{
	PED::SET_PED_RESET_FLAG(Global_35, 179, true);
}

void func_345(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_346()
{
	if (!func_131(&Local_274, 512))
	{
		func_133(&Local_274, 512);
	}
}

void func_347()
{
	char[] cVar0[8];
	char* sVar1;
	int iVar2;

	if (func_131(&Local_274, 4))
	{
		cVar0 = "PBL_GEDDOWNA_THERE_A";
		sVar1 = "BOOL_A";
	}
	else
	{
		cVar0 = "PBL_GEDDOWNA_THERE_B";
		sVar1 = "BOOL_B";
	}
	iVar2 = 4;
	while (iVar2 <= 7)
	{
		func_520(&Local_274, iVar2, cVar0, 1);
		func_533(&Local_274, iVar2, sVar1, 1);
		iVar2++;
	}
}

void func_348()
{
	char[] cVar0[8];
	char* sVar1;
	int iVar2;

	if (func_131(&Local_274, 4))
	{
		cVar0 = "PBL_GET_OFF_A";
		sVar1 = "BOOL_A";
	}
	else
	{
		cVar0 = "PBL_GET_OFF_B";
		sVar1 = "BOOL_B";
	}
	iVar2 = 4;
	while (iVar2 <= 7)
	{
		func_533(&Local_274, iVar2, sVar1, 1);
		func_520(&Local_274, iVar2, cVar0, 1);
		iVar2++;
	}
}

void func_349(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(2, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2103129879, false);
	PAD::DISABLE_CONTROL_ACTION(2, 2103129879, false);
}

bool func_350(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_351(var uParam0, int iParam1, int iParam2, char[4] cParam3)
{
	if (func_562(iParam2, &(uParam0->f_334[iParam1]), cParam3, 0, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_352()
{
	func_564(&Local_15, &(Local_274.f_323[5]), func_563(&Local_274), 1067450368, 1097859072, 1065353216, 1);
}

int func_353()
{
	return 0;
}

int func_354(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	func_167(uParam1);
	if (Global_1935630->f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
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
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						func_565(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_402(iParam0, Global_35, uParam1->f_16, 0, -1082130432, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_0x3E592D0486DEC0F6(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !func_201(Global_35, 501393341)) && !func_201(Global_35, 1553520516)) && !func_201(Global_35, 451360105))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
				if (func_187(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, -1871534317, false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				if (func_389(Global_1935630->f_44))
				{
					func_40(&(uParam1->f_32), 0);
				}
				else
				{
					func_355(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!func_548(609))
				{
					func_391(1);
					uParam1->f_28 = func_566("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					func_567(609, &uVar0, &uVar1);
					func_568(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && func_47(&(uParam1->f_32), 2f)) && func_508(iParam0, -663203358, "bStartSuccess", 1, 1.8f, 1))
			{
				if (func_569(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, 130948705, 1097859072, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (func_358(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (func_508(iParam0, 534755167, "bEndSuccess", 1, 1.8f, 1))
				{
					func_170(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
				return 1;
			}
			bVar2 = false;
			if (func_570() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630->f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && func_201(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (func_571(uParam1))
			{
				bVar2 = true;
			}
			else if (func_572(uParam1, iParam11))
			{
				bVar2 = true;
			}
			else if ((func_187(iParam5, 16) && !func_201(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1898385492))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						func_565(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_402(Global_35, iParam0, uParam1->f_20, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_170(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return 1;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1898385492))
			{
				if (iParam6 != 0)
				{
					func_573(iParam6, 1, 0, -142743235, 0);
					func_574(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(func_575(1)) * fParam2));
				if (iVar3 > 0)
				{
					func_576(iVar3, 0, 0, 1, 1);
					func_577(iVar3);
					func_382(iParam0, &iVar4);
					func_383(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (func_508(iParam0, -1631911761, "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return 1;
				}
			}
			if (func_508(iParam0, 641027726, "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						func_565(0);
					}
					if (func_144(0f, 1, iParam0, 1))
					{
						func_402(iParam0, Global_35, uParam1->f_17, 0, -1082130432, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (func_508(iParam0, -502975245, "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						func_565(0);
					}
				}
				if (uParam1->f_11)
				{
					if (func_144(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							func_402(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (func_144(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						func_402(iParam0, Global_35, uParam1->f_18, 0, -1082130432, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_170(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (func_508(iParam0, 1729031946, "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						func_565(0);
					}
					if (func_144(fParam4, 1, 0, 0))
					{
						func_402(iParam0, Global_35, uParam1->f_19, 0, -1082130432, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (func_508(iParam0, 1842457532, "Blendout", iParam8, 0.8f, 0) || !func_201(iParam0, 2137044382))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_355(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_60(uParam0))
	{
		func_423(uParam0, fParam1);
	}
}

void func_356()
{
	int iVar0;

	if (func_131(&Local_274, 1048576))
	{
		return;
	}
	if (func_144(-6f, 1, 0, 0))
	{
		iVar0 = -1;
		if (func_194(&(Local_15[3]), Global_36, 1) < 5f)
		{
			iVar0 = 3;
		}
		else if (func_194(&(Local_15[4]), Global_36, 1) < 7f)
		{
			iVar0 = 4;
		}
		if (iVar0 != -1)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(Local_15[iVar0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_297(&Local_274, &(Local_15[iVar0]), Global_35, "KEEP_GOING", -1073741824, 1, 291934926, 2);
			func_133(&Local_274, 1048576);
		}
	}
}

int func_357()
{
	if (func_131(&Local_274, 524288))
	{
		return 1;
	}
	if (func_508(&(Local_274.f_317[0]), 632214564, "bHorseReleased", func_353(), 1067030938, 1))
	{
		func_133(&Local_274, 524288);
		return 1;
	}
	return 0;
}

bool func_358(int iParam0)
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

int func_359()
{
	int iVar0;

	if (func_578(&Local_274, 0) && func_579(&Local_274, 0) < 0.99f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 0))
		{
			PED::_0x89F5E7ADECCCB49C(&(Local_15[iVar0]), "intimidate");
			func_195(Local_15.f_22[iVar0]);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(Local_15[iVar0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
		}
		iVar0++;
	}
	if (func_61(&(Local_274.f_317[0]), 0, 1))
	{
		func_195(Local_274.f_319[0]);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(Local_274.f_317[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
	return 1;
}

int func_360()
{
	vector3 vVar0;

	vVar0 = { func_521(&Local_274) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Global_36, true) > 24f)
	{
		return 1;
	}
	return 0;
}

int func_361()
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { func_580(Global_35, 2f) };
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_194(&(Local_15[iVar0]), vVar1, 1) < 10f && PED::IS_PED_FACING_PED(Global_35, &(Local_15[iVar0]), 90f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_362()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	vVar2 = { func_581(79, 1) };
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (func_61(&(Local_15[iVar1]), 0, 0))
		{
			switch (iVar1)
			{
				case 0:
					fVar5 = 0f;
					break;
				case 1:
					fVar5 = 1f;
					break;
				case 2:
					fVar5 = 1.2f;
					break;
				case 3:
					fVar5 = 2f;
					break;
				case 4:
					fVar5 = 2.3f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2, 4f, 1f, 640, 0);
			func_208(&(Local_15[iVar1]), &iVar0, fVar5, 0, 1, 1);
		}
		iVar1++;
	}
	if (func_61(&(Local_274.f_317[0]), 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2, 4f, 1f, 640, 0);
		func_208(&(Local_274.f_317[0]), &iVar0, 0, 0, 1, 1);
	}
}

char* func_363(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "script@proc@robberies@MURFREE@forestambush@warn_a";
		case 1:
			return "script@proc@robberies@MURFREE@forestambush@warn_b";
		case 2:
			return "script@proc@robberies@MURFREE@forestambush@warn_c";
		case 3:
			return "script@proc@robberies@MURFREE@forestambush@warn_d";
		case 4:
			return "script@proc@robberies@MURFREE@forestambush@violent_a";
		case 5:
			return "script@proc@robberies@MURFREE@forestambush@violent_b";
		case 6:
			return "script@proc@robberies@MURFREE@forestambush@violent_c";
		case 7:
			return "script@proc@robberies@MURFREE@forestambush@violent_d";
		case 8:
			return "script@proc@bridgerobberies@bridgetraphorseidle";
		default:
			break;
	}
	return "INVALID ANIM SCENE";
}

void func_364(int iParam0, var uParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

int func_365(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_366(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_366(int iParam0)
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

void func_367(int iParam0)
{
	iParam0 = func_582(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_583(iParam0, 32);
	func_584();
}

void func_368(int iParam0)
{
	int iVar0;

	iParam0 = func_582(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_369(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_371(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_371(iParam0);
	}
}

int func_369(int iParam0)
{
	iParam0 = func_582(iParam0);
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

int func_370(int iParam0)
{
	iParam0 = func_582(iParam0);
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

void func_371(int iParam0)
{
	iParam0 = func_582(iParam0);
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

int func_372()
{
	return Global_1572887->f_12;
}

int func_373()
{
	return Global_1310750->f_16037;
}

bool func_374(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_375(int iParam0, int iParam1)
{
	if (!func_374(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_376(int iParam0)
{
	if (!func_374(iParam0))
	{
		return 0;
	}
	if (func_585(64) && func_586(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_377(int iParam0)
{
	if (!func_374(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_378(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_374(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_587(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_379(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_380(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_381(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_382(int iParam0, int iParam1)
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

bool func_383(int iParam0, int iParam1)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_588(iParam0);
		return func_589(iParam0, 2084597891, iParam1, uVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_384(int iParam0)
{
}

void func_385(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_386()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_387(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

int func_388(int iParam0)
{
	float fVar0;

	if (!func_61(&(Local_15[iParam0]), 0, 0))
	{
		return 0;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(&(Local_15[iParam0])))
	{
		return 0;
	}
	if (func_194(&(Local_15[iParam0]), Global_36, 1) < 3f)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_0xB65A4DAB460A19BD(Global_35)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		case 1:
			fVar0 = 2f;
			break;
		case 2:
			fVar0 = 1.75f;
			break;
		case 3:
			fVar0 = 1.5f;
			break;
		case 4:
			fVar0 = 1.25f;
			break;
	}
	if (!func_131(&Local_274, 16))
	{
		fVar0 = (0.5f * fVar0);
	}
	if (func_47(Local_274.f_288[1 /*3*/], fVar0))
	{
		return 0;
	}
	return 1;
}

bool func_389(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_390(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

void func_391(int iParam0)
{
	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_372() != -1)
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

void func_393(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_394(int* iParam0, var uParam1)
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
	func_590(iParam0, uParam1, 1);
	func_591(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_396(int iParam0)
{
	return iParam0;
}

void func_397(int iParam0)
{
	if (!func_592(iParam0))
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

Vector3 func_398(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_593(&Local_274, iParam0) };
	return vVar0;
}

float func_399(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3f;
		case 3:
			return 3f;
		default:
			break;
	}
	return -1f;
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_61(uParam0[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_401(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_194(uParam0[iParam1], Global_36, 1);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_580(uParam0[iParam1], 1065353216), func_580(Global_35, 1065353216), true);
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

bool func_402(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_594(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_403(int iParam0, int iParam1, var uParam2, int iParam3)
{
	vector3 vVar0;

	if (func_61(iParam0, 0, 1))
	{
		uParam2->f_4 = func_194(iParam0, Global_36, 1);
		if (uParam2->f_4 > 100f)
		{
			if (!func_230(iParam0, 120f, -1082130432, -1082130432, -1082130432))
			{
				func_202(&iParam0, 0);
				return;
			}
		}
		vVar0 = { func_595(&Local_274) };
		if (!uParam2->f_9)
		{
			if (func_201(iParam0, 713668775))
			{
				if (func_596(ENTITY::GET_ENTITY_COORDS(iParam0, false, true), vVar0) < 6f)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, Global_35, 4, 256, -1082130432, -1, 0);
					uParam2->f_9 = 1;
				}
			}
		}
		switch (*uParam2)
		{
			case 0:
				if (!func_60(&(uParam2->f_1)))
				{
					func_355(&(uParam2->f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f), 0);
				}
				if (func_47(&(uParam2->f_1), 1.5f))
				{
					PED::_0x58F7DB5BD8FA2288(iParam0);
					uParam2->f_6 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
					if (!uParam2->f_9)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar0, 2f, -1, 4f, true, 40000f);
					}
					func_597(uParam2, 2, iParam3);
				}
				break;
			case 2:
				if ((func_201(iParam0, 518218985) || func_201(iParam0, 713668775)) || !func_201(iParam0, 1435919172))
				{
					func_597(uParam2, 4, iParam3);
				}
				else if (func_201(iParam0, 780511057))
				{
					if (uParam2->f_4 > (13f + 2f))
					{
						func_193(&(uParam2->f_1));
						TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
						func_195(&iParam1);
						if (!uParam2->f_9)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar0, 2f, -1, 5f, true, 40000f);
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, Global_35, 4, 256, -1082130432, -1, 0);
						}
						func_597(uParam2, 3, iParam3);
					}
				}
				break;
			case 3:
				if (func_197(&(uParam2->f_1)) > 3f || !func_201(iParam0, 1435919172))
				{
					func_193(&(uParam2->f_1));
					func_597(uParam2, 4, iParam3);
				}
				break;
			case 4:
				if (func_598(iParam0, uParam2))
				{
					func_298(iParam0, &iParam1, 831283580, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 3f, 0, 0, 0);
					if (!PED::IS_PED_IN_COMBAT(iParam0, 0))
					{
						TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
					}
					func_193(&(uParam2->f_1));
					uParam2->f_5 = MISC::GET_RANDOM_INT_IN_RANGE(4, 9);
					func_597(uParam2, 5, iParam3);
				}
				break;
			case 5:
				if (func_197(&(uParam2->f_1)) > BUILTIN::TO_FLOAT(uParam2->f_5))
				{
					func_597(uParam2, 2, iParam3);
				}
				break;
		}
	}
}

int func_404()
{
	return &Global_1899515;
}

int func_405(int iParam0)
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

int func_406(int iParam0)
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

void func_407(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_409(func_599(iParam0) + 1, iParam0);
}

var func_408()
{
	return Global_1393447->f_51;
}

void func_409(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_410()
{
	func_411(Global_40.f_9632.f_196 + 1);
}

void func_411(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_412(int iParam0)
{
	func_600(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/] = &Global_40.f_9632[iParam0 /*4*/] + 1;
	if (&Global_40.f_9632[iParam0 /*4*/] > (Global_40.f_9632[iParam0 /*4*/])->f_1)
	{
		(Global_40.f_9632[iParam0 /*4*/])->f_1++;
	}
	func_161(0, 13);
}

void func_413(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_601(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_602(iVar1);
		func_600(iVar1, bVar0);
	}
	iVar1 = func_603(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_602(iVar1);
		func_600(iVar1, bVar0);
	}
	iVar1 = func_604(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_602(iVar1);
		func_600(iVar1, bVar0);
	}
}

void func_414(int iParam0, int iParam1, bool bParam2)
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

int func_415(int iParam0)
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

void func_416(int iParam0, int iParam1)
{
	if (!func_374(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_417(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_418(int iParam0)
{
	if (!func_374(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_419(int iParam0)
{
	if (func_374(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_420(int iParam0)
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

void func_421(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
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
	func_422(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_422(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_605(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_372() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_423(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_471(uParam0, 1);
	func_470(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_424(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bValidRobber") && DECORATOR::DECOR_GET_BOOL(iParam0, "bValidRobber"))
	{
		return 1;
	}
	return 0;
}

void func_425(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (bParam1)
	{
		if (!func_606(610))
		{
			if (!func_607())
			{
				func_608(1);
				func_609();
			}
		}
		func_549(610, 1);
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

int func_426(var uParam0, int iParam1)
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
		if (func_230(iParam1, 200f, (30f * 3f), -1082130432, -1082130432))
		{
			return 0;
		}
	}
	else if (func_230(iParam1, 200f, 30f, -1082130432, -1082130432))
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

int func_427(int iParam0, int iParam1)
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

int func_428(int iParam0, var uParam1)
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

int func_429(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_610(Global_35, iParam0, 0, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_430(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	if (func_238(iParam1, 120f, 30f))
	{
		return 0;
	}
	return 1;
}

float func_431(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_442(Global_35, iParam0, bParam1, iParam2);
}

Vector3 func_432(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_433(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_434(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_432(vVar0, vVar3, 0f) };
	vVar9 = { func_433(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_435(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_238);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_238);
	}
}

int func_436(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_437(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_438(int iParam0)
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

int func_439(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_440(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_441(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_611(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

float func_442(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_443(var uParam0, var uParam1)
{
	uParam1->f_323[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.206f, 1047.766f, 89.42207f, 0f, 0f, -70.01382f, 35.77929f, 12.1547f, 11f, "volStayOut");
	if (func_131(uParam1, 4))
	{
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2420.713f, 1061.299f, 90.88255f, 0f, 0f, -164.5416f, 30f, 36.38013f, 11f, "volSlow");
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.778f, 1043.175f, 90.88255f, 0f, 0f, -159.5113f, 16.69165f, 35.84692f, 17f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2430.144f, 1035.213f, 91.064f, 0f, 0f, -158.2171f, 30f, 22.26933f, 23f, "volSlowest");
		uParam1->f_323[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2430.066f, 1033.579f, 89.90871f, 0f, 0f, -162.4702f, 15.8151f, 41.4572f, 13.2223f, "volTrigger");
		uParam1->f_323[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2422.906f, 1057.44f, 106.081f, 0f, 0f, 19.97916f, 17.64341f, 22.13989f, 60.77388f, "volPreTrigger");
		uParam1->f_323[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(uParam1->f_323[6]), 2324.195f, 998.213f, 106.081f, 0f, 0f, 17.82986f, 207.3883f, 153.2964f, 90.77387f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(uParam1->f_323[6]), 2532.133f, 1052.783f, 106.081f, 0f, 0f, 3.293728f, 205.504f, 153.2964f, 90.77387f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(uParam1->f_323[6]), 2403.291f, 1056.799f, 106.081f, 0f, 0f, 19.97917f, 26.12108f, 35.06133f, 90.77387f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(uParam1->f_323[6]), 2439.763f, 1068.091f, 106.081f, 0f, 0f, 18.33416f, 26.12108f, 35.06133f, 90.77387f);
	}
	else
	{
		uParam0->f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2437.167f, 1026.155f, 90.883f, 0f, 0f, 16.836f, 30f, 36.38f, 11f, "volSlow");
		uParam0->f_182[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2428.499f, 1043.884f, 90.883f, 0f, 0f, 21.866f, 16.692f, 35.847f, 17f, "volSlower");
		uParam0->f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2423.434f, 1057.974f, 91.064f, 0f, 0f, 23.16f, 30f, 22.269f, 23f, "volSlowest");
		uParam1->f_323[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2422.133f, 1059.808f, 89.909f, 0f, 0f, 19.95192f, 9.359425f, 38.32612f, 12.87681f, "volTrigger");
		uParam1->f_323[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2428.37f, 1042.409f, 106.081f, 0f, 0f, 19.97916f, 17.64341f, 22.13989f, 60.77388f, "volPreTrigger");
		uParam1->f_323[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(uParam1->f_323[6]), 2308.198f, 1033.371f, 97.44228f, 0f, 0f, 17.82986f, 225.0717f, 90.78615f, 90.77387f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(uParam1->f_323[6]), 2502.193f, 1145.754f, 106.081f, 0f, 0f, 22.23429f, 206.4126f, 153.2964f, 90.77387f);
	}
}

void func_444(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 2);
	}
	else
	{
		func_250(&(uParam0->f_1), 2);
	}
}

void func_445(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 8);
	}
	else
	{
		func_250(&(uParam0->f_1), 8);
	}
}

void func_446(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_1), 1);
	}
	else
	{
		func_250(&(uParam0->f_1), 1);
	}
}

void func_447(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

void func_448(var uParam0, vector3 vParam1, int iParam4)
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

int func_449(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_612(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_450(int iParam0)
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

int func_451(var uParam0)
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

void func_452(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_432(vVar0, vVar3, 0f) };
	vVar9 = { func_433(vVar0, vVar3, 0f) };
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

void func_453(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_454(int iParam0)
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

int func_455()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

char* func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_PROC@ROBBERIES@BRIDGE@ODRISCOLL@AMBUSH_TRAP";
		default:
			break;
	}
	return "invalid";
}

void func_457(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = func_363(uParam0, iParam1);
	if (bParam3)
	{
		uParam0->f_334[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(uParam0->f_334[iParam1]), 1, 0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_334[iParam1]));
}

int func_458(var uParam0, int iParam1)
{
	var uVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(uParam0->f_334[iParam1])))
	{
		return 0;
	}
	uVar0 = func_363(uParam0, iParam1);
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(&(uParam0->f_334[iParam1]), 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_459(var uParam0, int iParam1, char[4] cParam2)
{
	func_613(&(uParam0->f_334[iParam1]), cParam2, func_363(uParam0, iParam1));
}

int func_460(var uParam0, int iParam1, char[4] cParam2)
{
	if (func_614(&(uParam0->f_334[iParam1]), cParam2, func_363(uParam0, iParam1)))
	{
		return 1;
	}
	r