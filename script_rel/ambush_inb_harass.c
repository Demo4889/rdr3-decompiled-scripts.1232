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
	struct<124> Local_274 = { 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0 } ;
	bool bLocal_398 = false;
	struct<9> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_398 = true;
	}
	while (true)
	{
		func_2(bLocal_398, 961/*func_1*/, 0);
		if (bLocal_398)
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
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[0])))
	{
		ENTITY::FREEZE_ENTITY_POSITION(&(Local_15.f_49[0]), true);
	}
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
	vector3 vVar1;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			func_125(&Local_15, &Local_274, iVar0);
			if (iVar0 == 0)
			{
				func_126();
			}
			else if (iVar0 < 3)
			{
				vVar1 = { func_127(&Local_274, iVar0) };
				if (func_69(vVar1))
				{
					vVar1 = { func_128(&Local_274, iVar0) };
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(&(Local_15[iVar0]), vVar1, -1, 0, 0f, 0, 0, &(Local_274.f_46[iVar0]), 0, 0, 0);
			}
			iVar4 = func_129(iVar0);
			func_131(&(Local_15[iVar0]), func_130(iVar4), 0);
			PED::SET_COMBAT_FLOAT(&(Local_15[iVar0]), 29, 0f);
			PED::SET_COMBAT_FLOAT(&(Local_15[iVar0]), 40, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 5, true);
			PED::SET_COMBAT_FLOAT(&(Local_15[iVar0]), 3, 0.75f);
			PED::SET_COMBAT_FLOAT(&(Local_15[iVar0]), 1, 4f);
			PED::SET_COMBAT_FLOAT(&(Local_15[iVar0]), 32, 2f);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 98, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_15[iVar0]), 167, false);
			func_132(&Local_15, iVar0, 40, -1);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_15.f_49[0])))
	{
		func_133(&(Local_15.f_49[0]), &(Local_274.f_57[0]), "WAGON05X", "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X");
		func_134(&Local_274, 0, "WAGON05X", &(Local_15.f_49[0]));
		VEHICLE::_0x8268B098F6FCA4E2(&(Local_15.f_49[0]), 0);
		VEHICLE::_0xF89D82A0582E46ED(&(Local_15.f_49[0]), 0);
	}
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
			if (!func_135(&Local_15, iVar0, 4))
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
			if (!func_136(&Local_15, iVar0, 4))
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
	bool bVar0;

	func_137();
	func_138(&Local_15, 0);
	if (Local_274.f_9 > 0)
	{
		func_139();
		func_140();
		func_141();
		func_142();
	}
	switch (Local_274.f_9)
	{
		case 0:
			if (func_143() || func_144())
			{
				if (func_145())
				{
					if (func_61(&(Local_15[0]), 0, 1))
					{
						PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), false, 0, 0);
					}
					func_146(Local_15.f_151, 1);
					func_147();
					func_148();
					func_149();
					func_150(&Local_274, 512);
					func_151(&Local_274, 3);
				}
			}
			else if (func_152())
			{
				if (func_153())
				{
					func_22(&Local_15, 16);
					func_4(&Local_15, 13);
				}
			}
			else
			{
				bVar0 = func_154();
				if (bVar0)
				{
					func_155();
					func_151(&Local_274, 1);
				}
			}
			break;
		case 1:
			func_156();
			if (!func_157(&Local_274, 8))
			{
				if (func_144())
				{
					if (func_145())
					{
						if (func_61(&(Local_15[0]), 0, 1))
						{
							PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), false, 0, 0);
						}
						func_146(Local_15.f_151, 1);
						func_147();
						func_148();
						func_149();
						func_150(&Local_274, 512);
						func_151(&Local_274, 3);
					}
					else
					{
						if ((func_157(&Local_274, 16) && func_158(&(Local_15.f_182), 4)) || func_47(Local_274.f_12[3 /*3*/], 4f))
						{
							func_151(&Local_274, 2);
						}
						Jump @416; //curOff = 379
						func_156();
						func_148();
						func_151(&Local_274, 3);
						Jump @416; //curOff = 398
						func_156();
						func_149();
						return 1;
					}
					return 0;
				}
			}
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
		func_159(-1, 0, 0, 0, 0);
		func_160();
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
			func_161();
			func_162();
		}
		if (func_56(uParam0->f_151))
		{
			func_34(30, 0, 1);
		}
		else
		{
			func_164(func_163(-843295694), 1);
			func_33(uParam0, 0);
		}
		MISC::_0x1096603B519C905F(func_62(uParam0->f_151));
		func_165(uParam0);
		func_166(0, 13);
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
				func_167(&Local_15, iVar1, 32);
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
			func_168(0);
			func_22(uParam0, 33554432);
		}
	}
	else if (func_30(uParam0, 33554432))
	{
		func_168(1);
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
		func_169(&Local_15);
	}
	func_38();
	if (!func_30(&Local_15, 8388608))
	{
		if (!func_30(&Local_15, 4194304))
		{
			if (Local_15.f_181 == 2)
			{
				func_170(&Local_15, 1.1f);
			}
			else
			{
				func_170(&Local_15, 1.2f);
			}
			func_22(&Local_15, 4194304);
		}
		if (func_30(&Local_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (Local_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(Local_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				func_170(&Local_15, 1f);
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

	if (!func_157(&Local_274, 512))
	{
		func_156();
		func_138(&Local_15, 0);
		func_172(&Local_15, &(Local_274.f_40[0]), func_171(&Local_274), 2.5f, 25f, 1065353216, 1);
	}
	func_139();
	func_140();
	func_141();
	if (!func_173(&Local_274, 65536))
	{
		func_142();
	}
	else
	{
		func_174();
		func_175();
		func_176();
		if (Local_274.f_10 < 2)
		{
			func_177();
		}
	}
	switch (Local_274.f_10)
	{
		case 0:
			func_150(&Local_274, 2048);
			func_22(&Local_15, 8388608);
			func_178(&Local_274, 1);
			break;
		case 1:
			if (func_179())
			{
				iVar0 = func_180(&Local_15, 0, (Local_15.f_215 - 1), 1);
				if (iVar0 >= 0)
				{
					func_181(&(Local_15[iVar0]), Global_35, "RE_HAT_RKR_V1_RETREAT", 1117782016, 0, 1744022339, 0, 0);
					func_40(Local_274.f_12[8 /*3*/], 0);
					func_178(&Local_274, 2);
				}
				else if (func_182(&Local_15) <= 0)
				{
					func_178(&Local_274, 3);
				}
			}
			break;
		case 2:
			func_183();
			if (func_182(&Local_15) <= 0)
			{
				func_178(&Local_274, 3);
			}
			break;
		case 3:
			if (func_182(&Local_15) <= 0)
			{
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
			func_184(uParam0->f_181, bParam1);
		}
		func_185(uParam0->f_151, bParam1);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_186(1);
		func_45(uParam0, 8192);
	}
	else
	{
		func_187(1);
		func_22(uParam0, 8192);
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_188(iParam0, iParam1, bParam2);
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
	func_161();
	func_162();
	func_189((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_190() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_191();
		if (iParam1 == -1)
		{
			if (func_192(iParam0, 1))
			{
				func_193(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_192(iParam0, 2))
			{
				func_193(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_192(iParam0, 4))
			{
				func_193(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_194(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_195(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_195((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
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
					COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_196(uParam0->f_181));
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
		if (!func_136(&Local_15, iVar0, 16))
		{
			if (func_61(&(Local_15.f_40[iVar0]), 0, 0))
			{
				if (func_197(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(&(Local_15.f_40[iVar0]), Local_15.f_209, 4, 0, -1f, -1, 0);
					PED::SET_PED_KEEP_TASK(&(Local_15.f_40[iVar0]), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_15.f_40[iVar0]), false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_15.f_40[iVar0]);
					func_167(&Local_15, iVar0, 16);
				}
			}
		}
		iVar0++;
	}
}

int func_39(var uParam0)
{
	char* sVar0;

	if (!func_157(&Local_274, 1024))
	{
		if (func_41(uParam0))
		{
			func_150(&Local_274, 1024);
			Local_274.f_118 = MISC::GET_GAME_TIMER();
		}
	}
	else if (MISC::GET_GAME_TIMER() >= Local_274.f_118 + 1600 && func_198(0f, 1, Global_35, 1))
	{
		sVar0 = "RE_HAT_RKR_V1_PLYFINAL_KILL";
		if (func_199(1, 1))
		{
			sVar0 = "RE_HAT_RKR_V1_PLYFINAL_FEUD";
		}
		if (func_181(Global_35, 0, sVar0, 1117782016, 0, 1744022339, 0, 0))
		{
			func_200(&Local_274, 4194304);
			return 1;
		}
	}
	return 0;
}

void func_40(var uParam0, int iParam1)
{
	if (iParam1 || !func_60(uParam0))
	{
		func_201(uParam0);
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
				if (func_202(uParam0[iVar0], Global_36, 1) > 40f || func_47(&(uParam0->f_241), 15f))
				{
					func_203(uParam0->f_22[iVar0]);
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
	if (func_47(&(Local_15.f_244), 45f) && func_204())
	{
		func_54(&Local_15);
		func_205(&(Local_15.f_244));
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
	if (func_206(uParam0) > fParam1)
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
	if (func_61(Local_15.f_56, 0, 1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
	}
	if (PATHFIND::_0xDE0EA444735C1368(&(Local_274.f_40[4])))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_VOLUME(&(Local_274.f_40[4]));
	}
	if (func_157(&Local_274, 2048))
	{
		if (func_198(0f, 1, Global_35, 1))
		{
			if (!func_173(&Local_274, 4194304))
			{
				if (func_199(1, 1))
				{
					func_181(Global_35, 0, "RE_HAT_RKR_V1_PLYFINAL_FEUD", 1117782016, 0, 1744022339, 0, 0);
				}
				else
				{
					func_181(Global_35, 0, "RE_HAT_RKR_V1_PLYFINAL_RUN", 1117782016, 0, 1744022339, 0, 0);
				}
			}
		}
	}
	AUDIO::_0x05D6195FB4D428F4(-1233557377);
	STREAMING::_REMOVE_IMAP(-64729392);
}

void func_50(var uParam0, int iParam1)
{
	if (!func_30(uParam0, 256))
	{
		if (func_30(uParam0, 32) || iParam1)
		{
			if (func_61(uParam0->f_56, 0, 1))
			{
				func_207(uParam0->f_56, 0);
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
			if (func_208(iVar0))
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
						func_209(Local_15[iVar0]);
					}
					func_122(&(Local_15[iVar0]), 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 5, true);
					PED::_0x24C82EF607105FAA(&(Local_15[iVar0]), -920810745);
					PED::_0xB8B6430EAD2D2437(&(Local_15[iVar0]), 993130593);
					if (func_210(&(Local_15[iVar0])))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_15[iVar0]), -401180987);
					}
					PED::_0x7DE9692C6F64CFE8(&(Local_15[iVar0]), false, 0, 0);
					if ((PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), Global_35) || PED::IS_PED_FLEEING(&(Local_15[iVar0]))) || func_135(&Local_15, iVar0, 256))
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
						func_211(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
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
								func_211(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
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
							func_211(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(&(Local_15[iVar0]), true);
						}
						else
						{
							if (func_212(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432, -1, 0);
								func_211(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(&(Local_15[iVar0]), 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								func_211(&(Local_15[iVar0]), &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(&(Local_15[iVar0]), true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(&(Local_15[iVar0]), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(&(Local_15[iVar0])), -1) == &Local_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_15[iVar0]);
				}
				else if ((!PED::IS_PED_FLEEING(&(Local_15[iVar0])) && !PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), Global_35)) && !func_135(&Local_15, iVar0, 128))
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
			if (func_213(iVar0, &iVar2))
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
					if (func_214(iVar0))
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
			if (func_215(iVar0))
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
			if (func_216(&Local_15, &(Local_15.f_52[iVar0])))
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
			func_217(joaat("g_m_m_uniduster_01"));
			func_217(joaat("g_m_m_uniduster_03"));
			break;
		case 2:
			func_217(joaat("g_m_o_uniexconfeds_01"));
			func_217(joaat("g_m_y_uniexconfeds_01"));
			break;
		case 1:
			func_217(joaat("g_m_m_uniinbred_01"));
			break;
		case 3:
			func_217(joaat("g_m_m_unimountainmen_01"));
			break;
		case 4:
			func_217(joaat("g_m_m_uniranchers_01"));
			break;
		case 5:
			func_217(joaat("g_m_m_unibanditos_01"));
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

	fVar0 = func_218(uParam0->f_151);
	func_219(uParam0, fVar0);
}

void func_55(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) };
	func_220(vVar0, 0);
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
			if (&Global_40.f_9632[iParam0 /*4*/] >= func_221(iParam0))
			{
				return true;
			}
			Var2 = { func_163(85200619) };
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
	if (func_222(iParam0))
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
	return func_223(*uParam0, 1);
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_224(iParam0, iParam1);
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
	if (func_225(iVar0))
	{
		return 0;
	}
	if (func_226(iVar0, 1) || func_226(iVar0, 2))
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
		if (func_227())
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
		iVar0 = func_228(&(Global_1898164->f_1[0 /*5*/]));
		if (func_229(iVar0) && func_230(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_231(&(Global_1898164->f_1[0 /*5*/])))
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
			if (func_135(uParam0, iVar0, 8))
			{
				if (func_232(uParam0[iVar0], Global_36, 1) < (70f * 70f) || func_233(uParam0[iVar0], 70f, -1082130432, -1082130432, -1082130432))
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
	iVar0 = func_234();
	switch (iVar0)
	{
		case 105:
			if (func_235() && func_236())
			{
				return 1;
			}
			break;
		case 95:
			if (func_235() && func_236())
			{
				return 1;
			}
			break;
	}
	if (func_236())
	{
		if (Local_15.f_151 != 43)
		{
			if (func_237())
			{
				if (func_238(iVar0))
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
			if (!func_135(&Local_15, iVar0, 8))
			{
				if (func_233(&(Local_15[iVar0]), 200f, -1082130432, &(Local_15.f_9[iVar0]), -1082130432))
				{
					func_239(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_40[iVar0])))
		{
			if (!func_136(&Local_15, iVar0, 8))
			{
				if (func_233(&(Local_15.f_40[iVar0]), 200f, -1082130432, -1082130432, -1082130432))
				{
					func_167(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[iVar0])))
		{
			if (!func_240(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(&(Local_15.f_49[iVar0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_15.f_49[iVar0])))
				{
					if (func_241(&(Local_15.f_49[iVar0]), 200f, -1082130432))
					{
						func_242(&Local_15, iVar0, 8);
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
	func_244(uParam0, (func_243(uParam0) - 6f));
	func_245(uParam0, 1);
}

void func_77(var uParam0)
{
	func_246(uParam0, 0);
	func_247(uParam0, 0);
	func_78(uParam0, 1);
	func_248(uParam0, 1);
	func_249(uParam0, 0);
	func_250(uParam0, 1);
	func_251(uParam0, 1, 1, 1);
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 256);
	}
	else
	{
		func_253(&(uParam0->f_1), 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 4);
	}
	else
	{
		func_253(&(uParam0->f_1), 4);
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
	switch (Local_15.f_221)
	{
		case 0:
			break;
		default:
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(20, 0, Local_15.f_221), true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_84(20, 1, Local_15.f_221), true))
	{
		func_150(&Local_274, 1);
	}
	Local_15.f_215 = 5;
	Local_15.f_217 = 1;
	Local_15.f_218 = 0;
	Local_15.f_216 = 0;
	Local_15.f_181 = 1;
	func_254();
	func_255(&(Local_15.f_182), 24, 2.5f, 1.75f, 1067450368, 2.001f, 0);
	if (func_256(16))
	{
		func_150(&Local_274, 4);
	}
	func_257(&Local_15, 2, 1);
	func_22(&Local_15, 131072);
	STREAMING::_REQUEST_IMAP(-64729392);
	return 1;
}

Vector3 func_84(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;

	func_258(iParam0, iParam1, &vVar0, &uVar3, iParam2);
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

	if (!func_199(iParam0, 1))
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
		iVar0 = func_259(iParam0);
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
		return func_260(bParam1, iParam2, bParam3);
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

	fVar0 = func_218(uParam0->f_151);
	func_261(uParam0, fVar0);
}

void func_91(var uParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_209, 0f, 0f, 0f, 80f, 80f, 40f, "volAvoidance");
	}
	func_262(uParam0->f_238, iParam1, 262144, 1, 0);
}

int func_92(int iParam0)
{
	if (&Local_15.f_57[iParam0] == 0)
	{
		if (!func_87(Local_15.f_181, 1))
		{
			Local_15.f_57[iParam0] = func_263(997958153, 1);
		}
		else
		{
			Local_15.f_57[iParam0] = func_264(Local_15.f_181, 0, 1);
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
			Local_15.f_75[iParam0] = func_265(Local_15.f_181, iParam0, 0);
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
	int iVar0;

	switch (Local_274.f_8)
	{
		case 0:
			func_266();
			func_267(&Local_15);
			func_268(&Local_15);
			func_269();
			Local_274.f_8 = 1;
			break;
		case 1:
			if (STREAMING::_IS_IMAP_ACTIVE(-64729392))
			{
				Local_274.f_123 = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_270(&Local_274), 40f, "des_re_wagon_crash_front");
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_274.f_123))
				{
					func_271(&Local_274);
					Local_274.f_8 = 2;
				}
			}
			break;
		case 2:
			if (!func_272(&Local_274))
			{
				return 0;
			}
			func_273(&Local_274);
			Local_274.f_8 = 3;
			break;
		case 3:
			iVar0 = 1;
			if (!func_274())
			{
				iVar0 = 0;
			}
			if (!func_275(&Local_15))
			{
				iVar0 = 0;
			}
			if (!func_276(&Local_15))
			{
				iVar0 = 0;
			}
			if (!func_277(&Local_274))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_278(iVar0);
}

int func_97(int iParam0)
{
	return joaat("g_m_m_uniinbred_01");
}

int func_98(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return joaat("wagon05x");
		default:
			break;
	}
	return 0;
}

Vector3 func_99(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_279(&Local_274, iVar0);
}

float func_100(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_280(&Local_274, iVar0);
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
	int iVar0;

	iVar0 = uParam0;
	return func_282(&Local_274, iVar0);
}

float func_106(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	return func_283(&Local_274, iVar0);
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

	iVar0 = iParam0;
	return func_128(&Local_274, iVar0);
}

float func_117(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_286(&Local_274, iVar0);
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

void func_125(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_127(uParam1, iParam2) };
	if (func_69(vVar0))
	{
		vVar0 = { func_128(uParam1, iParam2) };
		fVar3 = func_286(uParam1, iParam2);
	}
	else
	{
		fVar3 = func_287(uParam1, iParam2);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0[iParam2], true, true);
	if (func_288(uParam1, iParam2))
	{
		if (func_289(iParam2))
		{
			if (iParam2 == 1)
			{
				func_290(uParam0[iParam2], joaat("weapon_melee_knife"), -1, 0, 0, 1056964608, 1065353216, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0[iParam2], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0[iParam2], 93, true);
				PED::_0x1854217C640B39EC(uParam0[iParam2], Global_35, 0f, 0f, 0f, 5f, 0, 0);
			}
			else
			{
				func_290(uParam0[iParam2], -1101297303, -1, 0, 0, 1056964608, 1065353216, 0);
			}
			WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0[iParam2], joaat("weapon_melee_torch"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			PED::SET_PED_CONFIG_FLAG(uParam0[iParam2], 249, true);
		}
		else
		{
			if (iParam2 == 1)
			{
				func_290(uParam0[iParam2], joaat("weapon_melee_knife"), -1, 1, 0, 1056964608, 1065353216, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0[iParam2], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0[iParam2], 93, true);
				PED::_0x1854217C640B39EC(uParam0[iParam2], Global_35, 0f, 0f, 0f, 5f, 0, 0);
			}
			else
			{
				func_290(uParam0[iParam2], -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
			}
			if (func_157(uParam1, 4))
			{
			}
		}
	}
	else
	{
		func_291(uParam0[iParam2], 0, 2, 0);
	}
	switch (iParam2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0[iParam2], vVar0, 2f, 0, 0, 0);
			break;
	}
	if (iParam2 < 3)
	{
		uParam1->f_46[iParam2] = TASK::ADD_COVER_POINT(vVar0, fVar3, 3, 0, 1, false);
	}
}

void func_126()
{
	PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), true, 0, 1);
}

Vector3 func_127(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 5);
			case 3:
				return func_292(0, 8);
			case 4:
				return func_292(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 5);
			case 3:
				return func_292(1, 8);
			case 4:
				return func_292(1, 10);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_128(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 0);
			case 1:
				return func_292(0, 1);
			case 2:
				return func_292(0, 2);
			case 3:
				return func_292(0, 6);
			case 4:
				return func_292(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 0);
			case 1:
				return func_292(1, 1);
			case 2:
				return func_292(1, 2);
			case 3:
				return func_292(1, 6);
			case 4:
				return func_292(1, 7);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 1;
		case 4:
			return 0;
		default:
			break;
	}
	return -1;
}

char* func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0199_G_M_M_UniInbred_01_WHITE_01";
		case 1:
			return "0200_G_M_M_UniInbred_01_WHITE_02";
		case 2:
			return "0201_G_M_M_UniInbred_02_WHITE_01";
		case 3:
			return "0202_G_M_M_UniInbred_02_WHITE_02";
		default:
			break;
	}
	return "";
}

void func_131(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_61(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_132(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_133(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<4> Var0;

	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, !MISC::IS_STRING_NULL_OR_EMPTY(sParam3), sParam3, 2))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Var0, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0, Var0.f_3, 2, true);
	}
}

void func_134(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_57[iParam1]), sParam2, iParam3, 0);
}

bool func_135(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_97[iParam1] && iParam2) != 0;
}

bool func_136(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_106[iParam1] && iParam2) != 0;
}

void func_137()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_157(&Local_274, 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[0])))
	{
		return;
	}
	if (!VEHICLE::GET_DRAFT_ANIMAL_COUNT(&(Local_15.f_49[0]), &iVar0, &iVar1))
	{
		return;
	}
	if (iVar1 >= iVar0)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_15.f_49[0])))
			{
				Local_274.f_52[iVar3] = VEHICLE::_0xA8BA0BAE0173457B(&(Local_15.f_49[0]), iVar2);
				if (func_61(&(Local_274.f_52[iVar3]), 0, 1))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_274.f_52[iVar3]), false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_274.f_52[iVar3]), true, true);
					}
					PED::DELETE_PED(Local_274.f_52[iVar3]);
					iVar3++;
					if (iVar3 >= Local_274.f_52)
					{
					}
					else
					{
						iVar2++;
					}
					func_150(&Local_274, 256);
				}
			}
		}
	}

void func_138(var uParam0, int iParam1)
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
		if (!func_158(&(uParam0->f_182), 256))
		{
			if (func_158(&(uParam0->f_182), 64))
			{
				if (PAD::IS_CONTROL_PRESSED(0, -513041747))
				{
					func_40(&(uParam0->f_182.f_10), 0);
					if (func_293(&(uParam0->f_182.f_10)))
					{
						func_294(&(uParam0->f_182.f_10));
					}
					if (func_47(&(uParam0->f_182.f_10), 0.2f))
					{
						if (Global_1935630->f_40 != 0 && iParam1)
						{
							TASK::TASK_HORSE_ACTION(Global_1935630->f_40, 8, 0, 0);
							func_295(&(uParam0->f_182), 256);
						}
					}
				}
				else if (func_60(&(uParam0->f_182.f_10)))
				{
					func_296(&(uParam0->f_182.f_10));
				}
			}
		}
	}
	if (uParam0->f_182.f_17 & 8 != 0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_295(&(uParam0->f_182), 4);
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
		if (iVar1 && (func_297(&(uParam0->f_182[3])) || func_158(&(uParam0->f_182), 16)))
		{
			if (func_158(&(uParam0->f_182), 32))
			{
				if (func_298(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, uParam0->f_182.f_22);
					}
				}
				return;
			}
			if (!func_158(&(uParam0->f_182), 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				func_295(&(uParam0->f_182), 1);
			}
		}
		else if (iVar1 && func_297(&(uParam0->f_182[2])))
		{
			if (func_298(uParam0))
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
		else if (iVar1 && func_297(&(uParam0->f_182[1])))
		{
			if (func_298(uParam0))
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
		else if (func_297(&(uParam0->f_182[0])))
		{
			if (!func_158(&(uParam0->f_182), 64))
			{
				func_295(&(uParam0->f_182), 64);
			}
			if (func_298(uParam0))
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
		if (!func_158(&(uParam0->f_182), 2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iVar3, 5f, 5000, false);
					func_40(&(uParam0->f_182.f_7), 0);
					func_295(&(uParam0->f_182), 2);
				}
			}
			else
			{
				if (func_192(uParam0->f_182.f_5, 16))
				{
					bVar4 = func_299(Global_35, &(uParam0->f_182.f_26), 1, 0, 256, 0);
				}
				else
				{
					bVar4 = func_300(Global_35, &(uParam0->f_182.f_6), uParam0->f_182.f_5, 0, 0, 1084227584, 100, 0, 0);
				}
				if (bVar4)
				{
					if (func_192(uParam0->f_182.f_5, 8))
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
					func_295(&(uParam0->f_182), 2);
				}
			}
		}
		else if (!func_158(&(uParam0->f_182), 4))
		{
			if (func_47(&(uParam0->f_182.f_7), uParam0->f_182.f_21))
			{
				if (func_192(uParam0->f_182.f_5, 8))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					if (func_61(iVar0, 0, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_295(&(uParam0->f_182), 4);
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

void func_139()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(&(Local_15.f_22[iVar0])))
			{
				if (func_301(&(Local_15[iVar0]), 1))
				{
					if (func_157(&Local_274, 16))
					{
						func_302(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_140()
{
	int iVar0;

	if (!func_157(&Local_274, 32))
	{
		if (func_61(&(Local_15[0]), 0, 1))
		{
			if (func_303())
			{
				if (func_304(&(Local_15[0]), 1, 0, 0) == joaat("weapon_melee_torch"))
				{
					WEAPON::_0xCEF4C65DE502D367(&(Local_15[0]), 1, 0, 1, 0);
				}
				if (func_305(joaat("weapon_melee_hatchet_meleeonly")))
				{
					iVar0 = joaat("weapon_melee_hatchet_meleeonly");
				}
				else if (func_305(joaat("weapon_melee_machete")))
				{
					iVar0 = joaat("weapon_melee_machete");
				}
				else
				{
					iVar0 = joaat("weapon_melee_knife");
				}
				func_290(&(Local_15[0]), iVar0, -1, 0, 0, 1056964608, 1065353216, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(&(Local_15[0]), iVar0, false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(&(Local_15[0]), 1, 0, 0, 0);
				TASK::TASK_COMBAT_PED(&(Local_15[0]), Global_35, 0, 0);
				func_306(&(Local_15[0]));
				PED::_0x1854217C640B39EC(&(Local_15[0]), Global_35, 0f, 0f, 0f, 5f, 0, 0);
				PED::SET_PED_COMBAT_RANGE(&(Local_15[0]), 0);
				PED::SET_PED_COMBAT_MOVEMENT(&(Local_15[0]), 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[0]), 45, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[0]), 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[0]), 93, true);
				func_150(&Local_274, 32);
			}
		}
		else
		{
			func_150(&Local_274, 32);
		}
	}
}

void func_141()
{
	int iVar0;
	float fVar1;

	if (!func_60(Local_274.f_12[3 /*3*/]))
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (func_307(&Local_274, iVar0, 1) || func_307(&Local_274, iVar0, 2))
		{
		}
		else if (!func_61(&(Local_15[iVar0]), 0, 1))
		{
		}
		else if (func_304(&(Local_15[iVar0]), 0, 0, 0) == joaat("weapon_melee_torch") || func_304(&(Local_15[iVar0]), 0, 1, 0) == joaat("weapon_melee_torch"))
		{
			func_308(&Local_274, iVar0, 1);
		}
		else if (!func_288(&Local_274, iVar0))
		{
			func_309(&Local_15, &(Local_15[iVar0]), joaat("weapon_shotgun_doublebarrel"), 1);
			func_308(&Local_274, iVar0, 2);
			PED::SET_PED_COMBAT_RANGE(&(Local_15[iVar0]), 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					fVar1 = 4.5f;
					break;
				case 2:
					fVar1 = 5.1f;
					break;
				case 3:
					fVar1 = 6f;
					break;
				case 4:
					fVar1 = 6f;
					break;
			}
			if (func_47(Local_274.f_12[3 /*3*/], fVar1))
			{
				if (iVar0 == 1)
				{
					func_290(&(Local_15[iVar0]), joaat("weapon_melee_knife"), -1, 5, 0, 1056964608, 1065353216, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar0]), 93, true);
					PED::_0x1854217C640B39EC(&(Local_15[iVar0]), Global_35, 0f, 0f, 0f, 5f, 0, 0);
				}
				else
				{
					func_309(&Local_15, &(Local_15[iVar0]), joaat("weapon_revolver_cattleman"), 1);
				}
				if (func_157(&Local_274, 4))
				{
					func_291(&(Local_15[iVar0]), 1, 3, 1);
				}
				func_308(&Local_274, iVar0, 1);
			}
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_173(&Local_274, 16384))
	{
		return;
	}
	if (!func_173(&Local_274, 65536))
	{
		if (func_198(-3f, 1, 0, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				iVar0 = func_129(iVar1);
				switch (iVar0)
				{
					case 0:
						if (func_61(&(Local_15[iVar1]), 0, 1))
						{
							if (!Local_15.f_227)
							{
								if (func_181(&(Local_15[iVar1]), Global_35, "TAUNT_GEN_LOCATION", 1117782016, 0, 1744022339, 0, 0))
								{
									bVar2 = true;
								}
							}
							else if (func_181(&(Local_15[iVar1]), Global_35, "RE_HAT_RKR_V1_INTRO_PED_3_FEUD", 1117782016, 0, 1744022339, 0, 0))
							{
								bVar2 = true;
							}
							if (bVar2)
							{
								func_200(&Local_274, 65536);
							}
							else
							{
								Jump @223; //curOff = 200
								if (iVar1 >= 4)
								{
									func_200(&Local_274, 65536);
								}
								else
								{
									iVar1++;
								}
							}
							Jump @390; //curOff = 235
							if (!func_173(&Local_274, 32768))
							{
								if (func_198(-1f, 1, 0, 0))
								{
									iVar1 = 0;
									while (iVar1 <= 4)
									{
										iVar0 = func_129(iVar1);
										switch (iVar0)
										{
											case 1:
												if (func_61(&(Local_15[iVar1]), 0, 1))
												{
													func_181(&(Local_15[iVar1]), Global_35, "RE_HAT_RKR_V1_INTRO_PED_2", 1117782016, 0, 1808677283, 0, 0);
													func_200(&Local_274, 32768);
													Jump @390; //curOff = 352
												}
												else if (iVar1 >= 3)
												{
													func_200(&Local_274, 32768);
												}
												else
												{
													iVar1++;
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

int func_143()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_310(&(Local_15[iVar0]), 0, &(Local_15.f_152), &(Local_15.f_180), 0, 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_157(&Local_274, 64))
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	if (func_173(&Local_274, 1048576))
	{
		if (func_311(&(Local_274.f_40[2]), Global_36) || (func_312() && (func_233(&(Local_15[3]), 200f, -1082130432, &(Local_15.f_9[3]), -1082130432) || func_233(&(Local_15[4]), 200f, -1082130432, &(Local_15.f_9[4]), -1082130432))))
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	func_150(&Local_274, 64);
	return 1;
}

void func_146(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	func_159(-1, 0, 0, 0, 0);
	if (bParam1)
	{
		func_195(240f, 1, 0);
		func_188(120, 0, 1);
	}
	(Global_40.f_9632[iParam0 /*4*/])->f_1++;
	Var2 = { func_163(85200619) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		(Global_40.f_9632[iParam0 /*4*/])->f_3 = (iVar1 + func_313(iParam0, 1));
	}
	func_166(0, 13);
}

void func_147()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			PED::_0x7DE9692C6F64CFE8(&(Local_15[iVar0]), false, 0, 0);
			PED::SET_PED_COMBAT_RANGE(&(Local_15[iVar0]), 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_211(&(Local_15[iVar0]), &iVar1, 0f, 0.2f, 1, 1);
			func_302(&(Local_15[iVar0]), Local_15.f_22[iVar0], 831283580, 0, 0, 0);
			if (!bVar2 && func_198(0f, 1, &(Local_15[iVar0]), 1))
			{
				func_181(&(Local_15[iVar0]), Global_35, "RE_HAT_RKR_V1_BYPASS", 1117782016, 0, -500314840, 0, 0);
				bVar2 = true;
			}
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_146(Local_15.f_151, 1);
}

void func_148()
{
	int iVar0;
	int iVar1;
	float fVar2;

	fVar2 = 4f;
	if (func_61(&(Local_15[0]), 0, 1))
	{
		PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), false, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			if (PED::IS_PED_IN_COVER(&(Local_15[iVar0]), 0, 0) || func_233(&(Local_15[iVar0]), 200f, -1082130432, -1082130432, -1082130432))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_211(&(Local_15[iVar0]), &iVar1, fVar2, 0, 1, 1);
				fVar2 = (fVar2 + 0.5f);
			}
		}
		iVar0++;
	}
	AUDIO::_0x05D6195FB4D428F4(-1233557377);
}

void func_149()
{
	func_40(Local_274.f_12[1 /*3*/], 1);
	func_138(&Local_15, 0);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)
{
	uParam0->f_9 = iParam1;
}

int func_152()
{
	if (!func_314(Global_35, &(Local_274.f_40[2]), 1, 0))
	{
		if (func_314(Global_35, &(Local_274.f_40[1]), 1, 0))
		{
			func_315(&Local_15, 7);
			return 1;
		}
	}
	if (func_316(79))
	{
		func_315(&Local_15, 3);
		return 1;
	}
	if (func_317(&Local_15))
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	return 1;
}

int func_154()
{
	float fVar0;

	fVar0 = func_202(&(Local_15[0]), Global_36, 1);
	if (fVar0 < 60f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(Local_15[0]), Global_35, 17))
	{
		return 1;
	}
	else if (fVar0 < 75f)
	{
		if (!func_173(&Local_274, 1048576))
		{
			if (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 5f)
			{
				PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), false, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(Local_15[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_181(&(Local_15[0]), Global_35, "RE_HAT_RKR_V1_TARGETSPOT_INT", 1117782016, 0, 1744022339, 1, 0);
				func_200(&Local_274, 1048576);
			}
		}
	}
	return 0;
}

void func_155()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	int iVar9;
	char* sVar10;

	vVar1 = { func_318(Global_35, 1.5f) };
	Local_274.f_110 = func_319(0);
	iVar4 = func_320(&(Local_15[0]), vVar1, 1060437492);
	switch (iVar4)
	{
		case 0:
			Local_274.f_111 = "ALERT_FWD";
			break;
		case 1:
			Local_274.f_111 = "ALERT_BK";
			break;
		case 2:
			Local_274.f_111 = "ALERT_RT";
			break;
		case 3:
			Local_274.f_111 = "ALERT_LT";
			break;
	}
	vVar5 = { func_127(&Local_274, 0) };
	uVar8 = func_287(&Local_274, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_15[0]), vVar5, 3f, 1, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[0]), 51, true);
	PED::_0x7DE9692C6F64CFE8(&(Local_15[0]), false, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	func_321(0, Global_35, 1500);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 2f, -1, 2f, true, 40000f);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar5, 1500, 1, 0, 0, 0, &(Local_274.f_46[0]), 1, 0, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	func_211(&(Local_15[0]), &iVar0, 0, 0, 1, 1);
	sVar10 = "TAUNT_GEN_NEUTRAL";
	iVar9 = 4;
	if (Local_15.f_227)
	{
		sVar10 = "RE_HAT_RKR_V1_TARGETSPOT_FEUD";
		iVar9 = 0;
	}
	func_181(&(Local_15[0]), Global_35, sVar10, 1117782016, iVar9, -500314840, 0, 0);
	func_200(&Local_274, 16384);
	func_40(Local_274.f_12[0 /*3*/], 0);
	func_40(Local_274.f_12[3 /*3*/], 0);
	func_40(Local_274.f_12[4 /*3*/], 0);
	func_40(Local_274.f_12[5 /*3*/], 0);
	func_25(&Local_15, 1);
	func_32(&Local_15, 1);
}

void func_156()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	if (!func_157(&Local_274, 16))
	{
		if (func_173(&Local_274, 16384))
		{
			if (!func_173(&Local_274, 2097152))
			{
				if (func_198(0f, 1, &(Local_15[0]), 1))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(&(Local_15[0])) && !ENTITY::IS_ENTITY_OCCLUDED(&(Local_15[0])))
					{
						if (func_198(0f, 1, Global_35, 1))
						{
							if (func_181(Global_35, 0, "RE_HAT_RKR_VI_ILO_POS", 1117782016, 0, 1744022339, 0, 0))
							{
								func_200(&Local_274, 2097152);
							}
						}
					}
				}
			}
		}
	}
	if ((func_157(&Local_274, 8) || func_322()) && !func_157(&Local_274, 512))
	{
		if (!func_157(&Local_274, 8))
		{
			func_323();
			func_324(&Local_274, 0);
			if (func_61(&(Local_15[4]), 0, 0))
			{
				func_181(&(Local_15[4]), Global_35, "RE_HAT_RKR_V1_FIRE_CART", 1117782016, 0, 291934926, 0, 0);
			}
			else if (func_61(&(Local_15[3]), 0, 0))
			{
				func_181(&(Local_15[3]), Global_35, "RE_HAT_RKR_V1_FIRE_CART", 1117782016, 0, 291934926, 0, 0);
			}
			func_325(&Local_274, 0, "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X", 1);
			func_40(Local_274.f_12[6 /*3*/], 0);
			func_150(&Local_274, 8);
		}
		if (!func_157(&Local_274, 128))
		{
			if (func_47(Local_274.f_12[6 /*3*/], 1f) || (ENTITY::IS_ENTITY_ON_SCREEN(&(Local_15.f_49[0])) && !ENTITY::IS_ENTITY_OCCLUDED(&(Local_15.f_49[0]))))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[0])) && !ENTITY::IS_ENTITY_DEAD(&(Local_15.f_49[0])))
				{
					FIRE::START_ENTITY_FIRE(&(Local_15.f_49[0]), 1f, -1, 14);
				}
				func_150(&Local_274, 128);
			}
		}
		func_326();
		if (func_157(&Local_274, 16) && func_327(Global_35, func_282(&Local_274, 0), 5f, 1, 1))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (func_61(iVar0, 0, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
				TASK::TASK_HORSE_ACTION(iVar0, 4, &(Local_15.f_49[0]), 0);
			}
		}
		if (!func_173(&Local_274, 8388608))
		{
			if (func_157(&Local_274, 16))
			{
				if (MISC::GET_GAME_TIMER() >= Local_274.f_119 + 700)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2462.892f, 1318.5f, 109.6284f, true) < 20f)
					{
						if (!func_328())
						{
							sVar1 = "GENERIC_SHOCKED_HIGH";
							iVar2 = 3;
						}
						else
						{
							sVar1 = "SHOT_RESPONSE_SELF";
							iVar2 = 3;
						}
						if (func_181(Global_35, Global_35, sVar1, 1117782016, iVar2, -500314840, 0, 1))
						{
							func_200(&Local_274, 8388608);
						}
					}
					else
					{
						func_200(&Local_274, 8388608);
					}
				}
			}
		}
	}
}

bool func_157(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_158(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

void func_159(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_329() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_330(iVar1) && !func_331(iVar1, iParam2)) && (!bParam3 || !func_332(iVar1))) && (!bParam4 || !func_333(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_334(iVar0);
			}
		}
		iVar0++;
	}
}

void func_160()
{
	if (!func_330(&Global_1327479))
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
	func_335(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_161()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_336(iVar0, 128))
		{
			func_337(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_162()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_336(iVar0, 128) && func_336(iVar0, 1))
		{
			func_337(iVar0, 4096);
		}
		iVar0++;
	}
}

struct<2> func_163(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_164(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_165(var uParam0)
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
			func_338(uParam0[iVar2], &iVar0);
			func_339(uParam0[iVar2], (iVar0 + iVar1));
		}
		iVar2++;
	}
	switch (uParam0->f_181)
	{
		case 0:
			func_340(joaat("g_m_m_uniduster_01"));
			func_340(joaat("g_m_m_uniduster_03"));
			break;
		case 2:
			func_340(joaat("g_m_o_uniexconfeds_01"));
			func_340(joaat("g_m_y_uniexconfeds_01"));
			break;
		case 1:
			func_340(joaat("g_m_m_uniinbred_01"));
			break;
		case 3:
			func_340(joaat("g_m_m_unimountainmen_01"));
			break;
		case 4:
			func_340(joaat("g_m_m_uniranchers_01"));
			break;
		case 5:
			func_340(joaat("g_m_m_unibanditos_01"));
			break;
	}
	func_22(uParam0, 128);
}

void func_166(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_341(&Global_0, 8);
	}
	if (!func_342() || func_343() != -1)
	{
		return;
	}
	func_341(&Global_0, 1);
}

void func_167(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_106[iParam1] = (uParam0->f_106[iParam1] || iParam2);
}

void func_168(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_169(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (func_61(uParam0[iVar0], 0, 0))
		{
			if (!func_135(uParam0, iVar0, 512))
			{
				if (PED::IS_PED_HOGTIED(uParam0[iVar0]))
				{
					TASK::TASK_COMBAT_PED(uParam0[iVar0], Global_35, 0, 0);
					PED::SET_PED_KEEP_TASK(uParam0[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0[iVar0], false);
					func_306(uParam0[iVar0]);
					func_239(uParam0, iVar0, 512);
				}
			}
			else if (!PED::IS_PED_HOGTIED(uParam0[iVar0]))
			{
				func_344(uParam0, iVar0, 512);
			}
		}
		iVar0++;
	}
}

void func_170(var uParam0, float fParam1)
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

Vector3 func_171(var uParam0)
{
	if (func_157(uParam0, 1))
	{
		return func_292(0, 11);
	}
	else
	{
		return func_292(1, 11);
	}
	return 0f, 0f, 0f;
}

void func_172(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, bool bParam8)
{
	int iVar0;

	if (!func_30(uParam0, 32))
	{
		if (!func_345(Global_35))
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
					func_211(uParam0->f_56, &iVar0, 0, 0, 1, 1);
				}
				func_22(uParam0, 32);
			}
		}
	}
}

bool func_173(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_174()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;

	if (func_47(Local_274.f_12[4 /*3*/], 6f) && func_198(-2f, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (func_61(&(Local_15[iVar0]), 0, 1) && func_198(0f, 1, &(Local_15[iVar0]), 1))
			{
				iVar1 = func_129(iVar0);
				if (PED::_0x285D36C5C72B0569(&(Local_15[iVar0])) < 0.5f)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, &(Local_15[iVar0]), 1, 1))
					{
						iVar2 = func_346(iVar1);
						sVar4 = func_347(iVar1);
						if (!func_173(&Local_274, iVar2))
						{
							if (func_181(&(Local_15[iVar0]), Global_35, sVar4, 1117782016, 0, 1744022339, 0, 0))
							{
								func_200(&Local_274, iVar2);
								return;
							}
						}
					}
					else if (func_348(&Local_15) > 1)
					{
						iVar3 = func_349(iVar1);
						sVar5 = func_350(iVar1);
						if (!func_173(&Local_274, iVar3))
						{
							if (func_181(&(Local_15[iVar0]), Global_35, sVar5, 1117782016, 0, 1744022339, 0, 0))
							{
								func_200(&Local_274, iVar3);
								return;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_175()
{
	int iVar0;

	if (!func_173(&Local_274, 8192))
	{
		if (func_182(&Local_15) < 5)
		{
			if (func_198(-5f, 1, 0, 0))
			{
				iVar0 = func_351(&Local_15, 0, 4, 1);
				if (iVar0 >= 0)
				{
					if (func_181(&(Local_15[iVar0]), Global_35, "RE_HAT_RKR_V1_MAN_DOWN", 1117782016, 0, 1744022339, 0, 0))
					{
						func_200(&Local_274, 8192);
					}
				}
			}
		}
	}
}

void func_176()
{
	char* sVar0;

	switch (Local_274.f_11)
	{
		case 0:
			if (func_182(&Local_15) < Local_274.f_122)
			{
				Local_274.f_11 = 1;
				Local_274.f_120 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(700, 1100));
			}
			break;
		case 1:
			if (((MISC::GET_GAME_TIMER() >= Local_274.f_120 && Local_274.f_121 < 4) && func_182(&Local_15) > 0) && func_198(0f, 1, Global_35, 0))
			{
				if (Local_274.f_121 == 0 && func_157(&Local_274, 512))
				{
					Local_274.f_121 = 1;
				}
				switch (Local_274.f_121)
				{
					case 0:
						sVar0 = "RE_HAT_RKR_V1_KILL_A";
						break;
					case 1:
						sVar0 = "RE_HAT_RKR_V1_KILL_B";
						break;
					case 2:
						sVar0 = "RE_HAT_RKR_V1_KILL_C";
						break;
					case 3:
						sVar0 = "RE_HAT_RKR_V1_KILL_D";
						break;
				}
				if (func_181(Global_35, 0, sVar0, 1117782016, 0, 1744022339, 0, 0))
				{
					Local_274.f_120 = MISC::GET_GAME_TIMER() + 7000;
					Local_274.f_121++;
					Local_274.f_11 = 2;
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= Local_274.f_120)
			{
				Local_274.f_11 = 0;
				Local_274.f_122 = func_182(&Local_15);
			}
			break;
	}
}

void func_177()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	if (func_47(Local_274.f_12[5 /*3*/], 8f) && func_198(0, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (func_61(&(Local_15[iVar0]), 0, 1) && func_198(0f, 1, &(Local_15[iVar0]), 1))
			{
				iVar1 = func_129(iVar0);
				iVar2 = func_352(iVar1);
				iVar3 = func_352(iVar1);
				if (!func_173(&Local_274, iVar2))
				{
					sVar4 = func_353(&Local_15, iVar1);
					if (func_181(&(Local_15[iVar0]), Global_35, sVar4, 1117782016, 0, 1744022339, 0, 0))
					{
						func_200(&Local_274, iVar2);
						return;
					}
				}
				else if (!func_173(&Local_274, iVar3))
				{
					sVar4 = func_354(&Local_15, iVar1);
					if (func_181(&(Local_15[iVar0]), Global_35, sVar4, 1117782016, 0, 1744022339, 0, 0))
					{
						func_200(&Local_274, iVar3);
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_178(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

int func_179()
{
	int iVar0;

	iVar0 = func_182(&Local_15);
	if (iVar0 <= 2 && func_47(Local_274.f_12[1 /*3*/], 15f))
	{
		return 1;
	}
	if (iVar0 <= 3 && func_47(Local_274.f_12[1 /*3*/], 30f))
	{
		return 1;
	}
	return 0;
}

int func_180(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 999999.9f;
	iVar3 = -1;
	iVar2 = iParam1;
	while (iVar2 <= iParam2)
	{
		if (func_61(uParam0[iVar2], 0, 0))
		{
			fVar1 = &uParam0->f_9[iVar2];
			if (fVar1 < fVar0 && (!bParam3 || func_198(0f, 1, uParam0[iVar2], 1)))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_181(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	return func_355(iParam0, iParam1, sParam2, "", fParam3, iParam4, 0, 0, 1, 1, 1, iParam5, bParam6, bParam7, 0);
}

int func_182(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (func_61(uParam0[iVar1], 0, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_183()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_61(&(Local_15[iVar0]), 0, 1))
		{
			func_356(iVar0);
		}
		iVar0++;
	}
	func_357();
}

void func_184(int iParam0, bool bParam1)
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
		Global_40.f_9632.f_192 = func_358();
	}
}

void func_185(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_18(Global_1393447, 65536))
	{
		func_19(Global_1393447, 65536);
		func_159(-1, 0, 0, 0, 0);
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
		iVar0 = func_359(iParam0);
		iVar1 = func_360(iParam0);
		if (func_87(iVar1, 0))
		{
			switch (iVar1)
			{
				case 0:
				case 2:
					func_361(iVar1);
					break;
			}
		}
		else
		{
			iVar2 = func_362();
			switch (iVar2)
			{
				case 0:
				case 2:
					func_363(0, iVar2);
					break;
			}
		}
		if (func_192(iVar0, 1))
		{
			func_364();
		}
		else if (func_192(iVar0, 2))
		{
			func_365(0);
		}
		func_366(iParam0);
		func_367(iParam0);
	}
}

void func_186(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_187(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_188(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_368(iParam0, iParam1, bParam2);
}

void func_189(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

int func_190()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_191()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_331(iVar0, 16777216))
		{
			if (!func_369(iVar0))
			{
				func_370(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_192(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_193(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_371(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_372(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_373(iVar0) < func_374(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_375(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_376(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_376(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_376(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_376(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_376(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_376(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_376(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_195(float fParam0, bool bParam1, bool bParam2)
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

int func_196(int iParam0)
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

int func_197(int iParam0)
{
	float fVar0;

	if (func_136(&Local_15, iParam0, 32))
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
	if (!func_136(&Local_15, iParam0, 64))
	{
		fVar0 = func_206(&(Local_15.f_247));
		if (fVar0 - 9f) > IntToFloat(iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_198(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_377(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_378(fParam0))
	{
		return 0;
	}
	return 1;
}

bool func_199(int iParam0, int iParam1)
{
	if (!func_87(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (iParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

void func_200(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_201(var uParam0)
{
	func_379(uParam0, 0f);
}

float func_202(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_203(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_204()
{
	return 1;
}

void func_205(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_206(var uParam0)
{
	if (!func_60(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_293(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

void func_207(int iParam0, bool bParam1)
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
	if (!func_380(iParam0))
	{
		return;
	}
	iVar0 = func_381(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_382(iVar0);
	func_383(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_384(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_385(iVar0))
		{
			return;
		}
	}
	func_386(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_343() == -1)
	{
		if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

int func_208(int iParam0)
{
	if (func_135(&Local_15, iParam0, 2))
	{
		return 0;
	}
	if (func_135(&Local_15, iParam0, 128))
	{
		return 0;
	}
	if (func_135(&Local_15, iParam0, 4))
	{
		return 1;
	}
	if (func_387(&Local_15, &(Local_15[iParam0])))
	{
		return 1;
	}
	if (!func_135(&Local_15, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_209(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

int func_210(int iParam0)
{
	if (func_388(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_211(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_212(int iParam0)
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

int func_213(int iParam0, int iParam1)
{
	if (func_136(&Local_15, iParam0, 2))
	{
		return 0;
	}
	if (func_136(&Local_15, iParam0, 4))
	{
		return 1;
	}
	if (func_389(&(Local_15.f_40[iParam0]), iParam1))
	{
		return 1;
	}
	if (func_387(&Local_15, &(Local_15.f_40[iParam0])))
	{
		return 1;
	}
	if (!func_136(&Local_15, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	float fVar0;

	if (func_256(32768))
	{
		fVar0 = 120f;
	}
	else
	{
		fVar0 = 80f;
	}
	if (func_390(&(Local_15.f_84[iParam0]), fVar0))
	{
		return 0;
	}
	if (func_202(&(Local_15.f_84[iParam0]), Global_36, 1) < 10f)
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0)
{
	if (func_240(&Local_15, iParam0, 2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, &(Local_15.f_49[iParam0]), true))
	{
		return 0;
	}
	if (func_240(&Local_15, iParam0, 4))
	{
		return 1;
	}
	if (func_391(&Local_15, &(Local_15.f_49[iParam0])))
	{
		return 1;
	}
	if (!func_240(&Local_15, iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_216(var uParam0, int iParam1)
{
	if (func_390(iParam1, 1114636288) || func_392(iParam1, 1, 1) <= 30f)
	{
		return 0;
	}
	return 1;
}

void func_217(int iParam0)
{
}

float func_218(int iParam0)
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

void func_219(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_393(vVar0, vVar3, 0) };
	vVar9 = { func_394(vVar0, vVar3, 0) };
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, 0);
	func_395(uParam0->f_209, fParam1, 5);
	func_396(uParam0);
}

void func_220(vector3 vParam0, int iParam3)
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
			if (func_397(vVar2, vParam0, 2f, 1))
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

int func_221(int iParam0)
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

int func_222(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = { func_163(85200619) };
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

bool func_223(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_224(int iParam0, int iParam1)
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
	if (func_398(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_225(int iParam0)
{
	if (((func_226(iParam0, 1) && func_226(iParam0, 2)) && func_226(iParam0, 8)) && func_226(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_226(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_227()
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

int func_228(int iParam0)
{
	if (!func_231(iParam0))
	{
		return -1;
	}
	return func_400(func_399(iParam0));
}

bool func_229(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_230(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_231(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_232(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_401(vVar0, vParam1);
}

int func_233(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_202(iParam0, Global_36, 1);
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

int func_234()
{
	return Global_1894899->f_2;
}

int func_235()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_402(16) && !func_402(21))
	{
		return 1;
	}
	return 0;
}

int func_236()
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

bool func_237()
{
	return (Global_1894899 & 1 != 0 && func_234() != -1);
}

int func_238(int iParam0)
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

void func_239(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (uParam0->f_97[iParam1] || iParam2);
}

bool func_240(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_115[iParam1] && iParam2) != 0;
}

int func_241(int iParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = func_403(iParam0, Global_35, 1, 1);
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

void func_242(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_115[iParam1] = (uParam0->f_115[iParam1] || iParam2);
}

float func_243(var uParam0)
{
	return uParam0->f_24;
}

void func_244(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_245(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_253(uParam0, 1);
	}
	else
	{
		func_252(uParam0, 1);
	}
}

void func_246(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 16384);
	}
	else
	{
		func_253(&(uParam0->f_1), 16384);
	}
}

void func_247(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 2048);
	}
	else
	{
		func_253(&(uParam0->f_1), 2048);
	}
}

void func_248(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_253(uParam0, 16);
	}
	else
	{
		func_252(uParam0, 67108864);
		func_252(uParam0, 16);
	}
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 128);
	}
	else
	{
		func_253(&(uParam0->f_1), 128);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_253(uParam0, 256);
	}
	else
	{
		func_252(uParam0, 256);
	}
}

void func_251(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_253(uParam0, 268435456);
	}
	else
	{
		func_252(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_253(uParam0, 1073741824);
	}
	else
	{
		func_252(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_253(uParam0, 536870912);
	}
	else
	{
		func_252(uParam0, 536870912);
	}
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_254()
{
	func_404();
	Local_274.f_40[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2456.964f, 1316.604f, 110.885f, 0f, 0f, 0f, 16f, 16f, 16f, "volStayout");
	Local_274.f_40[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volWagonNavBlock");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[4]), 2458.075f, 1323.362f, 112.1701f, 0f, 0f, 7.999999f, 7.207866f, 2.45895f, 7.429438f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[4]), 2458.125f, 1322.999f, 112.1701f, 0f, 0f, -15f, 7.207866f, 3f, 7.429438f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[4]), 2452.74f, 1322.994f, 112.1701f, 0f, 0f, 46f, 8.032266f, 2.368714f, 7.429438f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[4]), 2456.548f, 1321.582f, 112.1701f, 0f, 0f, -15f, 10.89017f, 3f, 7.429438f);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(&(Local_274.f_40[4]), 7);
	if (func_157(&Local_274, 1))
	{
		Local_274.f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2459.262f, 1301f, 119.2499f, 0f, 0f, 177.1445f, 52.02184f, 18.32374f, 21.75352f, "volWagonTrigger");
	}
	else
	{
		Local_274.f_40[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2472.144f, 1330.007f, 115.005f, 0f, 0f, 163.3511f, 82.04939f, 36f, 21.75352f, "volWagonTrigger");
	}
}

void func_255(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4, float fParam5, int iParam6)
{
	uParam0->f_5 = iParam1;
	uParam0->f_21 = fParam2;
	uParam0->f_22 = fParam3;
	uParam0->f_23 = iParam4;
	uParam0->f_24 = fParam5;
	uParam0->f_17 = iParam6;
}

int func_256(int iParam0)
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
	iVar0 = func_405(func_358());
	if (func_192(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_192(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

void func_257(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_192(iParam1, 1))
		{
			func_22(uParam0, 262144);
		}
		if (func_192(iParam1, 2))
		{
			func_22(uParam0, 524288);
		}
	}
	else
	{
		if (func_192(iParam1, 1))
		{
			func_45(uParam0, 262144);
		}
		if (func_192(iParam1, 2))
		{
			func_45(uParam0, 524288);
		}
	}
}

void func_258(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
							func_406(&Var0, 180.6557f, 75.5711f, 98.7111f, 307.9777f);
							break;
						case 1:
							func_406(&Var0, -124.9678f, 182.499f, 92.7486f, 323.5033f);
							break;
						case 2:
							func_406(&Var0, -143.1968f, 392.7447f, 95.6412f, 26.7895f);
							break;
						case 3:
							func_406(&Var0, -175.487f, -208.2044f, 87.9832f, 155.3853f);
							break;
						case 4:
							func_406(&Var0, 810.023f, 376.8716f, 115.1321f, 278.0894f);
							break;
					}
					break;
				case 1:
				case 2:
				case 36:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -78.546f, 574.7642f, 117.1554f, 285.065f);
							break;
						case 1:
							func_406(&Var0, 52.8403f, 228.5046f, 108.3697f, 1.1595f);
							break;
					}
					break;
				case 3:
				case 4:
				case 38:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -98.0465f, 227.8637f, 99.6174f, 342f);
							break;
					}
					break;
				case 5:
				case 35:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -1114.856f, 73.738f, 53.0233f, 354.9799f);
							break;
					}
					break;
				case 6:
				case 42:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -566.0319f, 466.1427f, 98.0826f, 133.627f);
							break;
						case 1:
							func_406(&Var0, 731.3024f, -567.4277f, 75.8176f, 96.4522f);
							break;
						case 2:
							func_406(&Var0, 83.4469f, 582.1075f, 135.0757f, 264.5214f);
							break;
					}
					break;
				case 7:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
					}
					break;
				case 41:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -1771.38f, 128.1271f, 153.5691f, 181.1798f);
							break;
						case 1:
							func_406(&Var0, 831.6912f, -584.7949f, 78.2731f, 202.9779f);
							break;
					}
					break;
				case 8:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 40:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, -437.7152f, -378.8148f, 85.5442f, 56.3376f);
							break;
					}
					break;
				case 9:
				case 10:
				case 37:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, 202.3087f, 137.861f, 98.3938f, 326.3648f);
							break;
						case 1:
							func_406(&Var0, -372.0885f, -36.569f, 41.6905f, 348.5297f);
							break;
						case 2:
							func_406(&Var0, -927.3195f, -351.4889f, 48.6764f, 122.086f);
							break;
						case 3:
							func_406(&Var0, -1089.385f, 29.2608f, 55.1327f, 104.0236f);
							break;
					}
					break;
				case 11:
					switch (iParam4)
					{
						case 0:
							func_406(&Var0, 1561.633f, -654.6262f, 46.2574f, 321.6371f);
							break;
						case 1:
							func_406(&Var0, 954.459f, -1251.211f, 54.8197f, 43.8895f);
							Jump @1377; //curOff = 1258
							func_406(&Var0, 1528.073f, -1412.362f, 65.0164f, 100.1078f);
							Jump @1377; //curOff = 1287
							func_406(&Var0, 1485.599f, -988.1472f, 49.9976f, 203.8493f);
							Jump @1377; //curOff = 1316
							func_406(&Var0, 2060.011f, -1359.194f, 41.5979f, 309.696f);
							Jump @1377; //curOff = 1345
							func_406(&Var0, 1347.459f, -1779.138f, 68.0518f, 13.8827f);
							Jump @2998; //curOff = 1377
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 1486.386f, -863.9506f, 49.1165f, 40.9143f);
									break;
							}
							Jump @2998; //curOff = 1423
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 1751.006f, -792.3771f, 40.7652f, 45.2804f);
									break;
							}
							Jump @2998; //curOff = 1469
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 918.9561f, -1061.409f, 54.6744f, 191.2117f);
									break;
								case 1:
									func_406(&Var0, 1486.383f, -942.4707f, 47.8906f, 181.1513f);
									break;
							}
							Jump @2998; //curOff = 1550
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 1561.589f, -2121.429f, 44.3306f, 273.483f);
									break;
								case 1:
									func_406(&Var0, 1391.634f, -2269.641f, 44.9803f, 294.7664f);
									break;
								case 2:
									func_406(&Var0, 2067.27f, -1250.361f, 42.8864f, 257.827f);
									break;
							}
							Jump @2998; //curOff = 1666
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 1173.9f, -909.8f, 66.9f, -57.4f);
									break;
								case 1:
									func_406(&Var0, 878.2368f, -914.2035f, 54.1948f, 270.879f);
									break;
							}
							Jump @2998; //curOff = 1747
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2069.093f, -1241.536f, 41.2556f, 176.86f);
									break;
								case 1:
									func_406(&Var0, 2081.443f, -899.7972f, 41.1731f, 260.946f);
									break;
								case 2:
									func_406(&Var0, 1212.386f, -1591.315f, 56.0669f, 23.4687f);
									break;
								case 3:
									func_406(&Var0, 1506.064f, -905.8009f, 47.8961f, 165.3073f);
									break;
								case 4:
									func_406(&Var0, 1606.995f, -1545.489f, 59.2865f, 177.0083f);
									break;
							}
							Jump @2998; //curOff = 1933
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
									break;
							}
							Jump @2998; //curOff = 1979
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2410.232f, 1140.23f, 97.4886f, 180.3519f);
									break;
							}
							Jump @2998; //curOff = 2025
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2449.325f, 1573.939f, 85.8194f, 39.9471f);
									break;
								case 1:
									func_406(&Var0, 2584.913f, 1633.828f, 97.7316f, 8.1257f);
									break;
								case 2:
									func_406(&Var0, 2730.857f, 1311.648f, 92.9221f, 149.1053f);
									break;
								case 3:
									func_406(&Var0, 2794.002f, 1031.168f, 59.517f, 188.3449f);
									break;
							}
							Jump @2998; //curOff = 2176
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2430.674f, 1253.279f, 108.2854f, 292.6725f);
									break;
							}
							Jump @2998; //curOff = 2222
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2659.633f, 897.6414f, 88.4611f, 203.4193f);
									break;
							}
							Jump @2998; //curOff = 2268
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2709.737f, 473.069f, 65.8412f, 252.6725f);
									break;
							}
							Jump @2998; //curOff = 2314
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -2313.103f, -1513.598f, 140.2823f, 15.1824f);
									break;
							}
							Jump @2998; //curOff = 2360
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -1434.349f, -1281.048f, 79.4382f, 38.4403f);
									break;
							}
							Jump @2998; //curOff = 2406
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -1304.657f, -1086.787f, 72.7056f, 19.326f);
									break;
							}
							Jump @2998; //curOff = 2452
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -1451.386f, -1256.971f, 77.9939f, 246.5365f);
									break;
							}
							Jump @2998; //curOff = 2498
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -1938.231f, -1737.649f, 121.0378f, 54.6957f);
									break;
								case 1:
									func_406(&Var0, -2237.81f, -1236.479f, 135.9782f, 291.2003f);
									break;
							}
							Jump @2998; //curOff = 2579
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -2215.869f, -408.5112f, 163.5815f, 101.2651f);
									break;
							}
							Jump @2998; //curOff = 2625
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -3476.859f, -2618.098f, -13.6175f, -100.63f);
									break;
							}
							Jump @2998; //curOff = 2671
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -5102.887f, -2937.184f, 2.3186f, 58.5231f);
									break;
							}
							Jump @2998; //curOff = 2717
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, -3772.229f, -2818.31f, -16.4697f, 123.7911f);
									break;
								case 1:
									func_406(&Var0, -3998.259f, -2362.783f, -9.1375f, 73.6187f);
									break;
							}
							Jump @2998; //curOff = 2798
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 1972.732f, 1695.837f, 162.568f, 114.1732f);
									break;
							}
							Jump @2998; //curOff = 2844
							switch (iParam4)
							{
								case 0:
									func_406(&Var0, 2242.927f, 732.5889f, 91.0723f, 263.9706f);
									break;
								case 1:
									func_406(&Var0, 2698.555f, 183.9842f, 52.7268f, 12.5536f);
									break;
								case 2:
									func_406(&Var0, 2012.363f, 450.9774f, 114.9433f, 51.6697f);
									break;
								case 3:
									func_406(&Var0, 2870.96f, 831.843f, 48.2579f, 28.2762f);
									break;
							}
							Jump @6225; //curOff = 2998
							switch (iParam0)
							{
								case 0:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 334.8338f, 220.554f, 101.8269f, 119.7537f);
											break;
										case 1:
											func_406(&Var0, -113.9271f, 443.0494f, 111.7579f, 219.7514f);
											break;
										case 2:
											func_406(&Var0, -298.4487f, 637.9625f, 111.069f, 190.7615f);
											break;
										case 3:
											func_406(&Var0, -379.536f, -313.1479f, 87.3478f, 269.676f);
											break;
										case 4:
											func_406(&Var0, 1058.255f, 395.0368f, 100.4976f, 78.4296f);
											break;
									}
									break;
								case 1:
								case 2:
								case 36:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 153.7973f, 524.9196f, 136.8577f, 48.6442f);
											break;
										case 1:
											func_406(&Var0, 206.1301f, 463.9098f, 121.7605f, 105.0337f);
											break;
									}
									break;
								case 3:
								case 4:
								case 38:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -169.289f, 450.9006f, 96.4484f, 199.7628f);
											break;
									}
									break;
								case 5:
								case 35:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -1093.884f, 187.3798f, 59.2496f, 162.9302f);
											break;
									}
									break;
								case 6:
								case 42:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -650.8867f, 350.328f, 87.9592f, 308.87f);
											break;
										case 1:
											func_406(&Var0, 581.8732f, -498.1398f, 77.1145f, 214.5317f);
											break;
										case 2:
											func_406(&Var0, 195.9423f, 643.7529f, 133.8094f, 123.0221f);
											break;
									}
									break;
								case 7:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
											break;
									}
									break;
								case 41:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -1720.367f, -58.8535f, 175.2912f, 20.2253f);
											break;
										case 1:
											func_406(&Var0, 816.4929f, -791.5338f, 57.0665f, 358.0346f);
											break;
									}
									break;
								case 8:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
											break;
									}
									break;
								case 40:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -602.5374f, -246.7336f, 40.84f, 224.9445f);
											break;
									}
									break;
								case 9:
								case 10:
								case 37:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 488.6012f, 346.341f, 104.38f, 132.2152f);
											break;
										case 1:
											func_406(&Var0, -491.0948f, 240.2662f, 42.8778f, 245.3544f);
											break;
										case 2:
											func_406(&Var0, -1063.855f, -573.8351f, 81.1675f, 22.0417f);
											break;
										case 3:
											func_406(&Var0, -1383.4f, -131.3f, 94.2f, 2.2213f);
											break;
									}
									break;
								case 11:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 1721.41f, -764.9014f, 41.3985f, 48.7414f);
											break;
										case 1:
											func_406(&Var0, 917.1657f, -1057.089f, 55.351f, 197.7367f);
											break;
										case 2:
											func_406(&Var0, 1367.119f, -1379.669f, 79.039f, 234.1533f);
											break;
										case 3:
											func_406(&Var0, 1492.79f, -1122.532f, 56.3596f, 8.428f);
											break;
										case 4:
											func_406(&Var0, 2246.185f, -1359.823f, 44.2797f, 67.8845f);
											break;
										case 5:
											func_406(&Var0, 1289.32f, -1632.029f, 65.404f, 182.4022f);
											break;
									}
									break;
								case 12:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 1583.548f, -629.852f, 46.1712f, 146.2081f);
											break;
									}
									break;
								case 15:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 1582.927f, -623.4384f, 46.2721f, 218.2033f);
											break;
									}
									break;
								case 13:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 947.2817f, -1236.62f, 53.763f, 23.4717f);
											break;
										case 1:
											func_406(&Var0, 1508.104f, -1149.061f, 53.7777f, 48.8161f);
											break;
									}
									break;
								case 14:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 1861.568f, -1978.116f, 43.699f, 111.3814f);
											break;
										case 1:
											func_406(&Var0, 1506.446f, -2206.457f, 42.6941f, 158.0186f);
											break;
										case 2:
											func_406(&Var0, 2273.229f, -1369.996f, 45.7006f, 80.9983f);
											break;
									}
									break;
								case 16:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 1346.7f, -858.3f, 72.7f, 88.6f);
											break;
										case 1:
											func_406(&Var0, 1107.901f, -916.9768f, 66.9322f, 90.5837f);
											break;
									}
									break;
								case 17:
								case 39:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2264.292f, -1366.995f, 44.3097f, 79.8327f);
											break;
										case 1:
											func_406(&Var0, 2264.248f, -1037.55f, 42.1479f, 54.3753f);
											break;
										case 2:
											func_406(&Var0, 1091.079f, -1431.687f, 54.6637f, 223.0478f);
											break;
										case 3:
											func_406(&Var0, 1493.179f, -1116.514f, 55.4248f, 352.523f);
											break;
										case 4:
											func_406(&Var0, 1753.022f, -1638.871f, 48.5096f, 34.1859f);
											break;
									}
									break;
								case 18:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
											break;
									}
									break;
								case 19:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2473.654f, 994.7974f, 91.3992f, 42.075f);
											break;
									}
									break;
								case 21:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2299.518f, 1759.59f, 107.9513f, 195.5682f);
											break;
										case 1:
											func_406(&Var0, 2705.534f, 1911.673f, 113.9124f, 141.4947f);
											break;
										case 2:
											func_406(&Var0, 2530.082f, 1242.029f, 148.8438f, 338.4772f);
											break;
										case 3:
											func_406(&Var0, 2848.581f, 689.1435f, 64.6365f, 0.9953f);
											break;
									}
									break;
								case 20:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2508.16f, 1404.184f, 95.79f, 124.3386f);
											break;
									}
									break;
								case 22:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2799.991f, 890.5291f, 63.6047f, 152.4149f);
											break;
									}
									break;
								case 23:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2921.223f, 414.4291f, 48.478f, 74.3386f);
											break;
									}
									break;
								case 24:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -2409.259f, -1475.456f, 147.1943f, 267.4513f);
											break;
									}
									break;
								case 25:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -1682.643f, -1246.672f, 84.8961f, 286.9227f);
											break;
									}
									break;
								case 28:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -1154.178f, -1214.848f, 68.3049f, 89.9786f);
											break;
									}
									break;
								case 27:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -2231.266f, -1599.062f, 145.9509f, 251.4796f);
											break;
										case 1:
											func_406(&Var0, -2091.402f, -1125.535f, 119.3745f, 117.3666f);
											break;
									}
									break;
								case 26:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -1563.969f, -868.5887f, 86.2286f, 229.2799f);
											break;
									}
									break;
								case 29:
								case 30:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -2295.963f, -328.9082f, 154.6866f, 183.9384f);
											break;
									}
									break;
								case 31:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -3161.003f, -2610.719f, 9.9647f, 66.5f);
											break;
									}
									break;
								case 32:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -5379.7f, -2940.985f, 1.6323f, 255.6953f);
											break;
									}
									break;
								case 33:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -3982.679f, -3068.613f, -13.872f, 331.3266f);
											break;
										case 1:
											func_406(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
											break;
									}
									break;
								case 34:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 1819.118f, 1593.633f, 168.2121f, 313.8806f);
											break;
									}
									break;
								case 43:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 2482.688f, 729.5152f, 72.2941f, 117.0933f);
											break;
										case 1:
											func_406(&Var0, 2585.403f, 338.2195f, 69.6483f, 220.6653f);
											break;
										case 2:
											func_406(&Var0, 1805.624f, 550.4319f, 105.9446f, 233.3962f);
											break;
										case 3:
											func_406(&Var0, 2793.57f, 1038.077f, 58.5925f, 188.5771f);
											break;
									}
									break;
							}
							Jump @6225; //curOff = 5957
							switch (iParam0)
							{
								case 13:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, 997.1635f, -1186.04f, 64.0811f, 75.3782f);
											break;
										case 1:
											func_406(&Var0, 1391.092f, -1081.252f, 70.8405f, 284.1285f);
											break;
									}
									break;
								case 33:
									switch (iParam4)
									{
										case 0:
											func_406(&Var0, -3729.811f, -3131.73f, -5.6609f, 79.6603f);
											break;
										case 1:
											func_406(&Var0, -4305.049f, -2429.822f, 8.652f, 358.5998f);
											break;
									}
									break;
								case 0:
									switch (iParam4)
									{
										case 1:
											func_406(&Var0, 54.6531f, 217.5979f, 107.1034f, 40.7729f);
											break;
									}
									break;
							}
							Jump @6225; //curOff = 6194
							*uParam2 = { 0f, 0f, 0f };
							*uParam3 = 0f;
							Jump @6225; //curOff = 6208
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

int func_259(int iParam0)
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

int func_260(bool bParam0, var uParam1, var uParam2)
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

void func_261(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_237))
	{
		func_407(&(uParam0->f_237), uParam0->f_209, uParam0->f_151);
	}
	func_408(uParam0->f_237, "ambush_restriction", 1, 0, 512, 0, -1082130432);
	vVar0 = { uParam0->f_209 + Vector(-40f, -fParam1, -fParam1) };
	vVar3 = { uParam0->f_209 + Vector(40f, fParam1, fParam1) };
	vVar6 = { func_393(vVar0, vVar3, 0) };
	vVar9 = { func_394(vVar0, vVar3, 0) };
	if (func_409(uParam0->f_151))
	{
		iVar12 = func_410(uParam0);
		func_411(uParam0->f_209, fParam1, 0, 0, iVar12);
	}
	PED::SET_PED_NON_CREATION_AREA(vVar6, vVar9);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar6, vVar9, false, 1);
	FIRE::STOP_FIRE_IN_RANGE(uParam0->f_209, fParam1);
	func_412(uParam0->f_209, fParam1, 0);
}

void func_262(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_252(&uParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(uParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

var func_263(int iParam0, int iParam1)
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

int func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_413(iParam0);
	if ((func_192(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_414())
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
					if (func_414())
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
					if (func_414())
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
					if (func_414())
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
					if (func_414())
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

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1268180497;
	iVar1 = func_413(iParam0);
	if ((func_192(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_414())
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
					if (func_414())
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
					if (func_414())
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
					if (func_414())
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
					if (func_414())
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

void func_266()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_319(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar1);
		}
		iVar0++;
	}
}

void func_267(var uParam0)
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

void func_268(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_217)
	{
		iVar0 = func_98(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

void func_269()
{
	AUDIO::PREPARE_MUSIC_EVENT("REHAT_START");
	AUDIO::PREPARE_MUSIC_EVENT("REHAT_END");
}

Vector3 func_270(var uParam0)
{
	if (func_157(uParam0, 1))
	{
		return func_292(0, 12);
	}
	else
	{
		return func_292(1, 12);
	}
	return 0f, 0f, 0f;
}

void func_271(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_415(uParam0, iVar0, 0, 1);
		iVar0++;
	}
}

int func_272(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!func_416(uParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_273(var uParam0)
{
	func_417(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X");
	func_417(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_B_WAGON05X");
}

int func_274()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_319(iVar0);
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

int func_275(var uParam0)
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

int func_276(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_217)
	{
		uVar0 = func_98(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(func_98(iVar1)))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_277(var uParam0)
{
	if (!func_418(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_A_WAGON05X"))
	{
		return 0;
	}
	if (!func_418(uParam0, 0, "PBL_MURFREE_AMBUSH_WAGON_B_WAGON05X"))
	{
		return 0;
	}
	return 1;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1829754305;
		case 1:
			return -383920487;
		case 2:
			return -1268552411;
		case 3:
			return -1637957348;
		case 4:
			return 1729811093;
		default:
			break;
	}
	return func_94();
}

Vector3 func_279(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 4);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 4);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_280(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 4);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 4);
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
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(0, 3);
			case 1:
				return func_292(0, 10);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(1, 3);
			case 1:
				return func_292(1, 9);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

float func_283(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 3);
			case 1:
				return func_419(0, 10);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 3);
			case 1:
				return func_419(1, 9);
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
		if (func_420(iParam1))
		{
			func_421(iParam0, 41788943);
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
			func_422(iParam0, 0, 1);
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
			func_423(iParam0, 0);
			bVar0 = true;
		}
		func_424(iParam0, iParam2);
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

float func_286(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 0);
			case 1:
				return func_419(0, 1);
			case 2:
				return func_419(0, 2);
			case 3:
				return func_419(0, 6);
			case 4:
				return func_419(0, 7);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 0);
			case 1:
				return func_419(1, 1);
			case 2:
				return func_419(1, 2);
			case 3:
				return func_419(1, 6);
			case 4:
				return func_419(1, 7);
			default:
				break;
		}
	}
	return 0f;
}

float func_287(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_419(0, 5);
			case 3:
				return func_419(0, 8);
			case 4:
				return func_419(0, 9);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_419(1, 5);
			case 3:
				return func_419(1, 8);
			case 4:
				return func_419(1, 10);
			default:
				break;
		}
	}
	return 0f;
}

int func_288(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				return 1;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 2:
			case 4:
				return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
	}
	return 0;
}

bool func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_425(iParam3, 1);
	bVar1 = func_425(iParam3, 2);
	bVar2 = !func_425(iParam3, 4);
	bVar3 = func_425(iParam3, 8);
	bVar4 = !func_425(iParam3, 16);
	bVar5 = func_425(iParam3, 32);
	bVar6 = func_425(iParam3, 64);
	return func_426(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	switch (iParam1)
	{
		case 0:
			iVar0 = joaat("weapon_shotgun_doublebarrel");
			break;
		case 1:
			iVar0 = joaat("weapon_melee_torch");
			break;
	}
	iVar2 = 0;
	WEAPON::GET_MAX_AMMO(iParam0, &iVar2, iVar0);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	bVar3 = func_192(iParam2, 2);
	bVar4 = func_192(iParam2, 4);
	bVar5 = func_192(iParam2, 8);
	bVar6 = func_192(iParam2, 1);
	bVar7 = func_192(iParam2, 16);
	func_427(iParam0, &iVar0, &fVar8);
	bVar1 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iVar2, bVar3, bVar4, iParam3, bVar5, 0.5f, 1f, 752097756, bVar6, fVar8, false);
	if (func_428(bVar1))
	{
		WEAPON::SET_PED_INFINITE_AMMO(iParam0, bVar7, bVar1);
	}
	return bVar1;
}

Vector3 func_292(int iParam0, int iParam1)
{
	return func_429(iParam0, iParam1);
}

bool func_293(var uParam0)
{
	return func_223(*uParam0, 2);
}

void func_294(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (func_293(uParam0))
	{
		uParam0->f_1 = (func_24() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_430(uParam0, 2);
	}
}

void func_295(var uParam0, int iParam1)
{
	uParam0->f_17 = (uParam0->f_17 || iParam1);
}

void func_296(var uParam0)
{
	if (!func_60(uParam0))
	{
	}
	if (!func_293(uParam0))
	{
		uParam0->f_2 = (func_24() - uParam0->f_1);
		func_431(uParam0, 2);
	}
}

int func_297(int iParam0)
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

int func_298(var uParam0)
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

int func_299(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
				if (bVar3 || (!bParam2 || func_432(iVar0)))
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
				else if (!func_433(iVar0, 1041577989))
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

int func_300(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_398(*uParam1, 128))
	{
		if (!func_433(iParam0, 1245594896))
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
	if (func_398(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_432(iVar2))
			{
				return 0;
			}
			if (!func_433(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_434(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_398(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_192(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_0x4C8B59171957BCF7(iParam0)));
			func_435(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_398(*uParam1, 4))
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
	if (func_398(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_432(iVar2))
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
		if (!func_192(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_192(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_192(iParam2, 8192))
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
		if (func_398(*uParam1, 2336))
		{
			if (!func_432(iVar2))
			{
			}
			if (func_436(iVar2, *uParam1))
			{
				func_437(uParam1, 32);
				func_437(uParam1, 256);
				func_437(uParam1, 2048);
				func_435(uParam1, 512);
				func_435(uParam1, 1024);
				func_435(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_398(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_432(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_437(uParam1, 64);
			}
		}
		if (func_192(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_192(iParam2, 1024))) || func_192(iParam2, 8)) && !func_398(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_435(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_192(iParam2, 4096)) && !func_398(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_435(uParam1, 2048);
			func_435(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_192(iParam2, 32)) && !func_398(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_435(uParam1, 256);
			func_435(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_435(uParam1, 64);
		}
		else if (!func_192(iParam2, 1))
		{
			if (!func_192(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_434(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_398(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_435(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_435(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_192(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_435(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_192(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_435(uParam1, 8);
	}
	return 0;
}

int func_301(int iParam0, bool bParam1)
{
	if (((((func_433(iParam0, 780511057) || func_433(iParam0, -219932022)) || func_433(iParam0, 1120685857)) || func_433(iParam0, -2117564886)) || func_433(iParam0, 655999185)) || func_433(iParam0, 1345172471))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_433(iParam0, -653332088) || func_433(iParam0, 167901368))
		{
			return 1;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_302(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

int func_303()
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(&(Local_15[0])))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COVER(&(Local_15[0]), 0, 0))
	{
		return 1;
	}
	if (func_301(&(Local_15[0]), 0))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_305(int iParam0)
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

void func_306(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

bool func_307(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_2[iParam1] && iParam2) != 0;
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2[iParam1] = (uParam0->f_2[iParam1] || iParam2);
}

void func_309(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = func_438(uParam0->f_181, iParam2, bParam3);
	if (iVar0 != 0)
	{
		WEAPON::_0x899A04AFCC725D04(iParam1, iVar0);
	}
	else if (bParam3)
	{
		func_290(iParam1, iParam2, -1, 1, 0, 1056964608, 1065353216, 0);
	}
	else
	{
		func_290(iParam1, iParam2, -1, 0, 0, 1056964608, 1065353216, 0);
	}
}

int func_310(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_439(uParam2, 1, iVar0);
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
			if (func_440(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_442(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_443(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_444(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_89(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_445(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_446(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_447(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_448(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_448(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_449(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_450(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_451(uParam2, 4000))
				{
					if ((func_452(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_453(uParam2, iParam0)) && func_454(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_452(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_453(uParam2, iParam0)) && func_454(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_455(iParam0, Global_1935630->f_41))
							{
								func_456();
								*uParam3 = 2;
								func_441(iParam0, uParam2, *uParam3);
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
						if (func_455(iParam0, Global_1935630->f_41))
						{
							func_456();
							*uParam3 = 2;
							func_441(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_457(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_190() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_456();
						*uParam3 = 2;
						func_441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_458())
					{
						if (func_455(iParam0, Global_1935630->f_42))
						{
							func_456();
							*uParam3 = 2;
							func_441(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_459(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_460(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_461(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_462(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_463(uParam2, 4000))
				{
					if (func_464(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_465(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_466(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_311(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

int func_312()
{
	if (func_467(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_468())
		{
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0, int iParam1)
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

bool func_314(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_315(var uParam0, int iParam1)
{
}

int func_316(int iParam0)
{
	int iVar0;

	if (func_469(iParam0) != 3)
	{
		return 0;
	}
	iVar0 = func_470(iParam0);
	if (!func_231(iVar0))
	{
		return 0;
	}
	return func_471(iVar0);
}

int func_317(var uParam0)
{
	switch (uParam0->f_224)
	{
		case 0:
			if (func_472(uParam0))
			{
				func_315(uParam0, 1);
				return 1;
			}
			break;
		case 1:
			if (func_473(uParam0))
			{
				func_315(uParam0, 2);
				return 1;
			}
			break;
		case 2:
			if (func_474(uParam0))
			{
				func_315(uParam0, 3);
				return 1;
			}
			break;
		case 3:
			if (func_475(uParam0))
			{
				func_315(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			if (func_476(uParam0))
			{
				func_315(uParam0, 5);
				return 1;
			}
			break;
		case 5:
			if (func_477(uParam0))
			{
				func_315(uParam0, 6);
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

Vector3 func_318(int iParam0, float fParam1)
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
	func_478(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

char* func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@harassment_attack";
		default:
			break;
	}
	return "";
}

int func_320(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_479(vVar3, vVar6);
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
	if (func_480(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_321(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

int func_322()
{
	vector3 vVar0;

	if (func_314(Global_35, &(Local_274.f_40[3]), 1, 0))
	{
		return 1;
	}
	if (func_47(Local_274.f_12[0 /*3*/], 6f))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(Local_15.f_49[0]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if (vVar0.y > 0f)
		{
			return 1;
		}
		else
		{
			func_150(&Local_274, 512);
		}
	}
	return 0;
}

void func_323()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = 3;
	while (iVar4 <= 4)
	{
		if (func_61(&(Local_15[iVar4]), 0, 1))
		{
			vVar0 = { func_127(&Local_274, iVar4) };
			if (!func_69(vVar0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_15[iVar4]), 51, true);
				func_481(&(Local_15[iVar4]), vVar0, 3f, 1, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_211(&(Local_15[iVar4]), &iVar3, 0, 0, 1, 1);
		}
		iVar4++;
	}
}

void func_324(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(uParam0->f_57[iParam1])))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(&(uParam0->f_57[iParam1]));
}

void func_325(var uParam0, int iParam1, char[4] cParam2, bool bParam3)
{
	func_483(&(uParam0->f_57[iParam1]), cParam2, bParam3, func_482(uParam0, iParam1));
}

void func_326()
{
	vector3 vVar0;
	vector3 vVar6;
	vector3 vVar9;

	if (func_157(&Local_274, 16))
	{
		return;
	}
	vVar0 = { func_282(&Local_274, 0) };
	if (func_202(&(Local_15.f_49[0]), vVar0, 0) > 6f)
	{
		func_40(Local_274.f_12[2 /*3*/], 0);
		if (!func_47(Local_274.f_12[2 /*3*/], 7f))
		{
		}
	}
	if (func_60(Local_274.f_12[2 /*3*/]))
	{
		if (!func_157(&Local_274, 16))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(&(Local_15.f_49[0])))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_15.f_49[0])))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(Local_15.f_49[0])))
					{
						if (!func_297(&(Local_15.f_182[3])))
						{
							Local_15.f_56 = PED::GET_MOUNT(Global_35);
							if (func_61(Local_15.f_56, 0, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_56, true);
								TASK::TASK_HORSE_ACTION(Local_15.f_56, 4, &(Local_15.f_49[0]), 0);
								if (func_202(&(Local_15.f_49[0]), Global_36, 1) > 14f)
								{
									func_295(&(Local_15.f_182), 4);
								}
								else
								{
									func_295(&(Local_15.f_182), 16);
								}
							}
						}
						if (func_61(Local_15.f_56, 0, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, true);
						}
						vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_15.f_49[0]), 0f, 1f, 0f) };
						vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_15.f_49[0]), 0f, 2f, 0f) };
						FIRE::ADD_EXPLOSION(vVar6, 2, 0.9f, 0, 0, 1f);
						FIRE::ADD_EXPLOSION(vVar9, 7, 0.9f, 0, 0, 1f);
						func_102(&vVar9, 1, 10, 0);
						FIRE::START_SCRIPT_FIRE(vVar9, 14, 14f, true, 0, -1f, 0);
						FIRE::ADD_EXPLOSION(2462.892f, 1318.5f, 109.6284f, 2, 0.5f, 0, 0, 1f);
						FIRE::START_SCRIPT_FIRE(2462.892f, 1318.5f, 109.6284f, 12, 12f, true, 0, -1f, 0);
						AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_WAGON_WOOD_BIG", vVar6);
						Local_274.f_119 = MISC::GET_GAME_TIMER();
						Local_274.f_117 = func_484(Local_274.f_12[2 /*3*/]);
						VEHICLE::DELETE_VEHICLE(Local_15.f_49[0]);
					}
				}
				func_150(&Local_274, 16);
			}
		}
		else if (func_47(Local_274.f_12[2 /*3*/], (Local_274.f_117 + 2f)))
		{
			if (func_61(Local_15.f_56, 0, 1))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
			}
		}
	}
}

int func_327(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_401(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	if (func_343() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_329()
{
	return Global_1310750->f_16037;
}

bool func_330(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_331(int iParam0, int iParam1)
{
	if (!func_330(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_332(int iParam0)
{
	if (!func_330(iParam0))
	{
		return 0;
	}
	if (func_485(64) && func_486(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_333(int iParam0)
{
	if (!func_330(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_334(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_330(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_487(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_335(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_336(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_337(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_338(int iParam0, int iParam1)
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

bool func_339(int iParam0, int iParam1)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_488(iParam0);
		return func_489(iParam0, 2084597891, iParam1, uVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_340(int iParam0)
{
}

void func_341(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_342()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_343()
{
	return Global_1572887->f_12;
}

void func_344(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_97[iParam1] = (&uParam0->f_97[iParam1] - (uParam0->f_97[iParam1] && iParam2));
}

bool func_345(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 16;
		case 2:
			return 32;
		default:
			break;
	}
	return 0;
}

char* func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HAT_RKR_V1_PED1_HIT";
		case 1:
			return "RE_HAT_RKR_V1_PED2_HIT";
		case 2:
			return "RE_HAT_RKR_V1_PED3_HIT";
		default:
			break;
	}
	return "";
}

int func_348(var uParam0)
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

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 0;
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HAT_RKR_V1_PED1_MISS";
		case 1:
			return "RE_HAT_RKR_V1_PED2_MISS";
		case 2:
			return "RE_HAT_RKR_V1_PED3_MISS";
		default:
			break;
	}
	return "";
}

int func_351(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0[8];
	int iVar9;
	int iVar10;
	int iVar11;

	iVar9 = iParam1;
	while (iVar9 <= iParam2)
	{
		if (func_61(uParam0[iVar9], 0, 0))
		{
			if (!bParam3 || func_198(0f, 1, uParam0[iVar9], 1))
			{
				iVar0[iVar10] = iVar9;
				iVar10++;
			}
		}
		iVar9++;
	}
	iVar11 = -1;
	if (iVar10 >= 1)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar10);
	}
	else
	{
		return iVar11;
	}
	return &(iVar0[iVar11]);
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 64;
		case 1:
			return 256;
		case 2:
			return 1024;
		default:
			break;
	}
	return 0;
}

char* func_353(var uParam0, int iParam1)
{
	bool bVar0;

	bVar0 = uParam0->f_227;
	switch (iParam1)
	{
		case 0:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED1_HARASS_A";
			}
			return "RE_HAT_RKR_V1_PED1_HARASS_FEUD_A";
		case 1:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED2_HARASS_A";
			}
			return "RE_HAT_RKR_V1_PED2_HARASS_FEUD";
		case 2:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED3_HARASS_A";
			}
			return "RE_HAT_RKR_V1_PED3_HARASS_FEUD_A";
	}
	return "";
}

char* func_354(var uParam0, int iParam1)
{
	bool bVar0;

	bVar0 = uParam0->f_227;
	switch (iParam1)
	{
		case 0:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED1_HARASS_B";
			}
			return "RE_HAT_RKR_V1_PED1_HARASS_FEUD_B";
		case 1:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED2_HARASS_B";
			}
			return "RE_HAT_RKR_V1_PED2_HARASS_FEUD_B";
		case 2:
			if (!bVar0)
			{
				return "RE_HAT_RKR_V1_PED3_HARASS_B";
			}
			return "RE_HAT_RKR_V1_PED3_HARASS_FEUD_B";
		default:
			break;
	}
	return "";
}

bool func_355(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_490(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_356(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	if (&Local_274.f_59[iParam0 /*10*/] < 6)
	{
		iVar0 = func_491(&(Local_15[iParam0]), 0, 1, 0);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(Local_15[iParam0]), Global_35, 3, 4096, -1082130432, -1, 0);
			func_203(Local_15.f_22[iParam0]);
			iVar1 = MAP::GET_BLIP_FROM_ENTITY(&(Local_15[iParam0]));
			func_203(&iVar1);
			PED::SET_PED_KEEP_TASK(&(Local_15[iParam0]), true);
			func_492(iParam0, 6);
		}
	}
	(Local_274.f_59[iParam0 /*10*/])->f_4 = &Local_15.f_9[iParam0];
	if ((Local_274.f_59[iParam0 /*10*/])->f_4 > 110f)
	{
		if (!func_233(&(Local_15[iParam0]), 140f, -1082130432, -1082130432, -1082130432))
		{
			func_493(Local_15[iParam0], 0);
			return;
		}
	}
	if (!(Local_274.f_59[iParam0 /*10*/])->f_9)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Local_15[iParam0]), false, true), func_494(&Local_274, iParam0)) < 4f)
		{
			(Local_274.f_59[iParam0 /*10*/])->f_9 = 1;
		}
	}
	switch (&Local_274.f_59[iParam0 /*10*/])
	{
		case 0:
			if (!func_60(&((Local_274.f_59[iParam0 /*10*/])->f_1)))
			{
				func_495(&((Local_274.f_59[iParam0 /*10*/])->f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f), 0);
			}
			if (func_47(&((Local_274.f_59[iParam0 /*10*/])->f_1), 1.5f))
			{
				iVar2 = func_496(&(Local_15[iParam0]), 0);
				if (func_467(iVar2) && WEAPON::_0x705BE297EEBDB95D(iVar2))
				{
					PED::_0x58F7DB5BD8FA2288(&(Local_15[iParam0]));
					(Local_274.f_59[iParam0 /*10*/])->f_6 = { ENTITY::GET_ENTITY_COORDS(&(Local_15[iParam0]), false, false) };
					if (!(Local_274.f_59[iParam0 /*10*/])->f_9)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(&(Local_15[iParam0]), func_494(&Local_274, iParam0), 2f, -1, 4f, true, 40000f);
					}
					func_492(iParam0, 1);
				}
			}
			break;
		case 1:
			if ((func_433(&(Local_15[iParam0]), 518218985) || func_433(&(Local_15[iParam0]), 713668775)) || !func_433(&(Local_15[iParam0]), 1435919172))
			{
				func_492(iParam0, 3);
			}
			else if (func_433(&(Local_15[iParam0]), 780511057))
			{
				if (Local_274.f_59[iParam0 /*10*/])->f_4 > (17f + 2f)
				{
					func_201(&((Local_274.f_59[iParam0 /*10*/])->f_1));
					TASK::CLEAR_PED_TASKS(&(Local_15[iParam0]), 1, 0);
					func_203(Local_15.f_22[iParam0]);
					if (!(Local_274.f_59[iParam0 /*10*/])->f_9)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(&(Local_15[iParam0]), func_494(&Local_274, iParam0), 2f, -1, 5f, true, 40000f);
					}
					else
					{
						func_492(iParam0, 3);
						return;
					}
					func_492(iParam0, 2);
				}
			}
			break;
		case 2:
			if (func_484(&((Local_274.f_59[iParam0 /*10*/])->f_1)) > 3f || !func_433(&(Local_15[iParam0]), 1435919172))
			{
				func_201(&((Local_274.f_59[iParam0 /*10*/])->f_1));
				func_492(iParam0, 3);
			}
			break;
		case 3:
			if (func_497(&(Local_15[iParam0]), Local_274.f_59[iParam0 /*10*/]))
			{
				func_302(&(Local_15[iParam0]), Local_15.f_22[iParam0], 831283580, 0, 0, 0);
				iVar2 = func_496(&(Local_15[iParam0]), 0);
				if (func_467(iVar2) && WEAPON::_0x705BE297EEBDB95D(iVar2))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_15[iParam0]), ENTITY::GET_ENTITY_COORDS(&(Local_15[iParam0]), true, false), 7f, 0, 0, 0);
				}
				else
				{
					func_306(&(Local_15[iParam0]));
				}
				TASK::TASK_COMBAT_PED(&(Local_15[iParam0]), Global_35, 0, 0);
				func_201(&((Local_274.f_59[iParam0 /*10*/])->f_1));
				(Local_274.f_59[iParam0 /*10*/])->f_5 = MISC::GET_RANDOM_INT_IN_RANGE(4, 9);
				if ((Local_274.f_59[iParam0 /*10*/])->f_9)
				{
					func_492(iParam0, 5);
				}
				else
				{
					func_492(iParam0, 4);
				}
			}
			else if ((Local_274.f_59[iParam0 /*10*/])->f_9)
			{
				if (!func_433(&(Local_15[iParam0]), 1910705116))
				{
					vVar3 = { func_494(&Local_274, iParam0) };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(&(Local_15[iParam0]), vVar3, 7f, 0, 0, 0);
					TASK::TASK_SEEK_COVER_FROM_PED(&(Local_15[iParam0]), Global_35, -1, 1, 0, 1);
				}
			}
			break;
		case 4:
			if (func_484(&((Local_274.f_59[iParam0 /*10*/])->f_1)) > BUILTIN::TO_FLOAT((Local_274.f_59[iParam0 /*10*/])->f_5))
			{
				func_492(iParam0, 1);
			}
			break;
		case 5:
			if (!func_497(&(Local_15[iParam0]), Local_274.f_59[iParam0 /*10*/]))
			{
				func_492(iParam0, 3);
			}
			break;
		case 6:
			func_203(Local_15.f_22[iParam0]);
			break;
	}
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (func_47(Local_274.f_12[8 /*3*/], 7f) && func_198(0, 1, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (func_61(&(Local_15[iVar0]), 0, 0))
			{
				if (!PED::IS_PED_IN_COMBAT(&(Local_15[iVar0]), 0))
				{
				}
				else
				{
					iVar1 = func_129(iVar0);
					iVar2 = func_498(iVar1);
					if (iVar2 == 0)
					{
					}
					else if (!func_198(0f, 1, &(Local_15[iVar0]), 1))
					{
						sVar3 = "RE_HAT_RKR_V1_FLEE";
						if (!func_173(&Local_274, iVar2))
						{
							if (func_181(&(Local_15[iVar0]), Global_35, sVar3, 1117782016, 0, 1744022339, 0, 0))
							{
								func_200(&Local_274, iVar2);
								return;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_358()
{
	return &Global_1899515;
}

int func_359(int iParam0)
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

int func_360(int iParam0)
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

void func_361(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	func_363(func_499(iParam0) + 1, iParam0);
}

var func_362()
{
	return Global_1393447->f_51;
}

void func_363(int iParam0, int iParam1)
{
	Global_40.f_9632.f_184[iParam1] = iParam0;
}

void func_364()
{
	func_365(Global_40.f_9632.f_196 + 1);
}

void func_365(int iParam0)
{
	Global_40.f_9632.f_196 = iParam0;
}

void func_366(int iParam0)
{
	func_500(iParam0, 0);
	Global_40.f_9632[iParam0 /*4*/] = &Global_40.f_9632[iParam0 /*4*/] + 1;
	if (&Global_40.f_9632[iParam0 /*4*/] > (Global_40.f_9632[iParam0 /*4*/])->f_1)
	{
		(Global_40.f_9632[iParam0 /*4*/])->f_1++;
	}
	func_166(0, 13);
}

void func_367(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_501(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_502(iVar1);
		func_500(iVar1, bVar0);
	}
	iVar1 = func_503(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_502(iVar1);
		func_500(iVar1, bVar0);
	}
	iVar1 = func_504(iParam0);
	if (iVar1 > -1)
	{
		bVar0 = func_502(iVar1);
		func_500(iVar1, bVar0);
	}
}

void func_368(int iParam0, int iParam1, bool bParam2)
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

int func_369(int iParam0)
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

void func_370(int iParam0, int iParam1)
{
	if (!func_330(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_371(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_372(int iParam0)
{
	if (!func_330(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_373(int iParam0)
{
	if (func_330(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_374(int iParam0)
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

void func_375(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
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
	func_376(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_505(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_343() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_377(int iParam0, int iParam1)
{
	if (func_61(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_378(float fParam0)
{
	if (func_506(1))
	{
		return 1;
	}
	if (func_60(&uLocal_0) && !func_507(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

void func_379(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_431(uParam0, 1);
	func_430(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_380(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_381(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_381(int iParam0)
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

void func_382(int iParam0)
{
	iParam0 = func_508(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_509(iParam0, 32);
	func_510();
}

void func_383(int iParam0)
{
	int iVar0;

	iParam0 = func_508(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_384(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_386(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_386(iParam0);
	}
}

int func_384(int iParam0)
{
	iParam0 = func_508(iParam0);
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

int func_385(int iParam0)
{
	iParam0 = func_508(iParam0);
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

void func_386(int iParam0)
{
	iParam0 = func_508(iParam0);
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

int func_387(var uParam0, int iParam1)
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
		if (func_233(iParam1, 200f, (30f * 3f), -1082130432, -1082130432))
		{
			return 0;
		}
	}
	else if (func_233(iParam1, 200f, 30f, -1082130432, -1082130432))
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

int func_388(int iParam0, int iParam1)
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

int func_389(int iParam0, var uParam1)
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

int func_390(int iParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_511(Global_35, iParam0, 0, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_391(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	if (func_241(iParam1, 120f, 30f))
	{
		return 0;
	}
	return 1;
}

float func_392(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_403(Global_35, iParam0, bParam1, iParam2);
}

Vector3 func_393(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_394(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_395(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_393(vVar0, vVar3, 0f) };
	vVar9 = { func_394(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_396(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_238))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_238);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_238);
	}
}

int func_397(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_398(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_399(int iParam0)
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

int func_400(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_401(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_402(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_512(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

float func_403(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_404()
{
	Local_15.f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2492.525f, 1326.504f, 112.8341f, 0f, 0f, 0f, 115f, 115f, 60f, "volRestriction");
	if (func_157(&Local_274, 1))
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2457.021f, 1286.51f, 113.0949f, 0f, 0f, 176.103f, 27.99959f, 29.33381f, 21.75352f, "volSlow");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2459.705f, 1302.5f, 113.0949f, 0f, 0f, 176.103f, 23.1424f, 31.78185f, 21.75352f, "volSlowest");
		Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2460.924f, 1311.921f, 114.766f, 0f, 0f, 169.587f, 25.40157f, 13.78471f, 18.39195f, "volHalt");
		Local_274.f_40[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2400.765f, 1377.892f, 114.9305f, 0f, 0f, 1.714838f, 39.24844f, 157.5462f, 70f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2587.63f, 1276.317f, 142.0203f, 0f, 0f, 0f, 182.7343f, 157.5462f, 70f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2381.018f, 1410.74f, 114.9305f, 0f, 0f, 37.90908f, 39.24844f, 157.5462f, 70f);
		Local_274.f_40[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[2]), 2428.901f, 1298.858f, 113.0949f, 0f, 0f, 176.103f, 31.07556f, 29.33381f, 21.75352f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[2]), 2486.936f, 1295.453f, 113.0949f, 0f, 0f, 178.8907f, 47.45874f, 29.33381f, 40.8321f);
	}
	else
	{
		Local_15.f_182[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2473.756f, 1350.215f, 113.095f, 0f, 0f, -17.68838f, 27.99959f, 45.84734f, 21.75352f, "volSlow");
		Local_15.f_182[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2467.397f, 1335.515f, 113.095f, 0f, 0f, -17.68835f, 23.1424f, 19.208f, 21.754f, "volSlowest");
		Local_15.f_182[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2464.553f, 1325.918f, 114.766f, 0f, 0f, -17.68835f, 25.40157f, 13.78471f, 18.39195f, "volHalt");
		Local_274.f_40[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volKill");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2514.571f, 1343.123f, 105.17f, 0f, 0f, 72.00601f, 50.78923f, 24.96425f, 88.18785f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2514.04f, 1309.079f, 105.17f, 0f, 0f, -16.98194f, 73.95107f, 41.84537f, 88.18785f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2356.076f, 1384.272f, 114.9305f, 0f, 0f, -15.26062f, 182.7343f, 69.26556f, 70f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2554.055f, 1308.327f, 105.17f, 0f, 0f, -40.71945f, 146.7324f, 41.84537f, 88.18785f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2562.063f, 1279.651f, 105.17f, 0f, 0f, 0.487701f, 178.0995f, 41.84537f, 88.18785f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[1]), 2513.121f, 1370.857f, 107.9369f, 0f, 0f, 0f, 17.82559f, 16.58573f, 20.20379f);
		Local_274.f_40[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBypass");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[2]), 2452.498f, 1352.808f, 113.0949f, 0f, 0f, -15.32807f, 27.99959f, 49.82644f, 21.75352f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(Local_274.f_40[2]), 2497.728f, 1340.411f, 113.0949f, 0f, 0f, -18.58124f, 27.99959f, 49.82644f, 21.75352f);
	}
}

int func_405(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_406(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

void func_407(var uParam0, vector3 vParam1, int iParam4)
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

int func_408(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_513(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_409(int iParam0)
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

int func_410(var uParam0)
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

void func_411(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_393(vVar0, vVar3, 0f) };
	vVar9 = { func_394(vVar0, vVar3, 0f) };
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

void func_412(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_413(int iParam0)
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

int func_414()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_415(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char* sVar0;

	sVar0 = func_482(uParam0, iParam1);
	if (bParam3)
	{
		uParam0->f_57[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(uParam0->f_57[iParam1]), 1, 0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_57[iParam1]));
}

int func_416(var uParam0, int iParam1)
{
	var uVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(uParam0->f_57[iParam1])))
	{
		return 0;
	}
	uVar0 = func_482(uParam0, iParam1);
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(&(uParam0->f_57[iParam1]), 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_417(var uParam0, int iParam1, char[4] cParam2)
{
	func_514(&(uParam0->f_57[iParam1]), cParam2, func_482(uParam0, iParam1));
}

int func_418(var uParam0, int iParam1, char[4] cParam2)
{
	if (func_515(&(uParam0->f_57[iParam1]), cParam2, func_482(uParam0, iParam1)))
	{
		return 1;
	}
	return 0;
}

float func_419(int iParam0, int iParam1)
{
	return func_516(iParam0, iParam1);
}

int func_420(int iParam0)
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

void func_421(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_517(iParam0, iParam1))
		{
			if (func_518(iParam0, iParam1))
			{
				if (func_519(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_520(iParam0);
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

void func_422(int iParam0, int iParam1, bool bParam2)
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

void func_423(int iParam0, bool bParam1)
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

void func_424(int iParam0, int iParam1)
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

bool func_425(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_426(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_467(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_467(iVar4) && iVar4 != bVar0)
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
	if (func_343() == -1 && !func_305(bVar0))
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
				if (func_305(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_467(bVar0))
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
		func_521(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_427(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_428(bVar0))
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

void func_427(int iParam0, int iParam1, float fParam2)
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

bool func_428(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

Vector3 func_429(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2463.034f, 1328.964f, 109.1976f;
				case 1:
					return 2472.084f, 1306.524f, 112.2193f;
				case 2:
					return 2471.329f, 1322.675f, 108.8796f;
				case 3:
					return 2456.952f, 1317.325f, 110.8401f;
				case 4:
					return 2501.48f, 1302.963f, 116.2009f;
				case 5:
					return 2478.368f, 1341.78f, 107.2861f;
				case 6:
					return 2507.977f, 1300.69f, 118.3496f;
				case 7:
					return 2508.309f, 1304.136f, 117.4963f;
				case 8:
					return 2478.375f, 1331.497f, 108.0165f;
				case 9:
					return 2473.911f, 1311.052f, 110.9773f;
				case 10:
					return 2456.424f, 1315.174f, 110.9285f;
				case 11:
					return 2461.717f, 1295.821f, 110.3482f;
				case 12:
					return 2462.589f, 1317.774f, 109.2215f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2455.27f, 1306.802f, 110.5666f;
				case 1:
					return 2467.884f, 1302.952f, 112.2522f;
				case 2:
					return 2447.373f, 1315.445f, 112.7474f;
				case 3:
					return 2456.281f, 1314.79f, 110.9452f;
				case 4:
					return 2501.65f, 1303.072f, 116.1943f;
				case 5:
					return 2463.151f, 1289.377f, 110.9123f;
				case 6:
					return 2508.003f, 1300.712f, 118.3468f;
				case 7:
					return 2508.38f, 1304.043f, 117.5046f;
				case 8:
					return 2472.829f, 1306.876f, 112.1792f;
				case 9:
					return 2455.892f, 1312.726f, 110.9843f;
				case 10:
					return 2471.196f, 1298.955f, 113.766f;
				case 11:
					return 2474.535f, 1336.529f, 107.6026f;
				case 12:
					return 2462.589f, 1317.774f, 109.2215f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2474.994f, 1304.45f, 113.0684f;
				case 1:
					return 2487.254f, 1314.661f, 111.1622f;
				case 2:
					return 2504.381f, 1306.983f, 116.5323f;
				case 3:
					return 2510.563f, 1282.958f, 127.5484f;
				case 4:
					return 2507.318f, 1285.889f, 125.3397f;
				case 5:
					return 2517.399f, 1285.432f, 127.4426f;
				case 6:
					return 2526.859f, 1286.896f, 129.0327f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2475.309f, 1314.214f, 110.1211f;
				case 1:
					return 2496.814f, 1286.439f, 122.367f;
				case 2:
					return 2490.203f, 1287.141f, 121.1662f;
				case 3:
					return 2501.823f, 1293.296f, 120.2847f;
				case 4:
					return 2510.48f, 1282.907f, 127.5636f;
				case 5:
					return 2494.243f, 1291.316f, 119.5412f;
				case 6:
					return 2479.11f, 1295.791f, 116.398f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_430(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_431(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_432(int iParam0)
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
	if (func_433(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0, int iParam1)
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

bool func_434(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_480(vVar0, vVar3, vParam1);
}

void func_435(var uParam0, int iParam1)
{
	func_522(uParam0, iParam1);
}

int func_436(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_433(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_398(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_398(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_398(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_437(var uParam0, int iParam1)
{
	func_523(uParam0, iParam1);
}

int func_438(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			break;
		case 2:
			break;
		case 1:
			iVar0 = func_524(iParam1, bParam2);
			break;
		case 4:
			break;
		case 3:
			break;
		case 5:
			iVar0 = func_525(iParam1, bParam2);
			break;
	}
	return iVar0;
}

void func_439(var uParam0, bool bParam1, int iParam2)
{
	func_526(iParam2);
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
		uParam0->f_13 = func_527(0);
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
							func_253(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_528(1))
						{
							func_253(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_528(1) || *uParam0 & 8192 != 0))
				{
					func_252(uParam0, 33554432);
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
			if (func_529(uParam0))
			{
				uParam0->f_15 = func_190();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_190() - uParam0->f_15) > 500)
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
	func_530(uParam0);
}

int func_440(int iParam0, var uParam1)
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
			if (!func_531(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_532(iParam0, iVar2) <= func_533(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_441(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_534(iParam2, 1, 1, 1, 0))
	{
		func_253(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_535(uParam1, 1);
	func_536();
}

int func_442(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_537(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_538(uParam1);
			if (func_539(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_540(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_535(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_535(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_443(int iParam0, int iParam1, var uParam2)
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
	if (func_541(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_538(uParam2);
		if (func_539(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_540(uParam2)
				{
					func_535(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_444(int iParam0, var uParam1)
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
	if (func_531(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_540(uParam1)
		{
			fVar3 = func_538(uParam1);
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

int func_445(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_190();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_446(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_542(uParam2);
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
			if (func_454(uParam2, iParam1))
			{
				func_535(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_447(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_543(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_454(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_535(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_448(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_544(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_535(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_535(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_545(iParam1, vVar0, vVar4))
					{
						func_535(uParam2, 1);
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
					func_535(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_545(iParam1, vVar0, vVar7))
					{
						func_535(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_449(int iParam0, var uParam1)
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
		if (!func_531(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_546(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_547(&(Global_1935630->f_34[iVar0])))
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
			if (func_548(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_549(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_550(uParam1, iParam0, fVar1, iVar0))
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

int func_450(int iParam0, var uParam1)
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

int func_451(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_190();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_551(iVar0, &iVar2))
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
	if (func_552(iVar0, iParam0))
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

int func_453(var uParam0, int iParam1)
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

int func_454(var uParam0, int iParam1)
{
	if (func_553(uParam0))
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

int func_455(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_403(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_456()
{
}

int func_457(var uParam0, int iParam1)
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
		if (func_554(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_190();
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
						if (func_202(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_190();
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

int func_458()
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
	if ((func_190() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_459(var uParam0, int iParam1)
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
	fVar0 = func_533(uParam0);
	if (uParam0->f_12 > func_243(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_555(iParam1);
	iVar1 = func_556(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_460(int iParam0, int iParam1, var uParam2)
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
	return func_557(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_461(int iParam0, var uParam1)
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
		if (func_558(iParam0, uParam1, 1))
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
					if (!func_559(uParam1, iParam0))
					{
						if (func_202(iVar4, Global_36, 1) < 7f)
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

int func_462(int iParam0, var uParam1)
{
	if (!func_560(0))
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

int func_463(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_190();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_464(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_465(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_190();
	}
	else if (func_190() - uParam1->f_4) > func_561(uParam1)
	{
		return func_562(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_466(var uParam0, int iParam1)
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

bool func_467(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_468()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_469(int iParam0)
{
	if (!func_563(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

var func_470(int iParam0)
{
	if (!func_238(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

bool func_471(int iParam0)
{
	int iVar0;

	iVar0 = func_564(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_472(var uParam0)
{
	if ((Global_1935630->f_26 || PED::_0x5407B7288D0478B7(Global_35, 16384) > 0) || func_89(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_473(var uParam0)
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

int func_474(var uParam0)
{
	if (func_565(50))
	{
		if (func_566(uParam0->f_209, 1, 8, 0))
		{
			return 1;
		}
	}
	if (func_567())
	{
		return 1;
	}
	if (Global_1430231->f_4)
	{
		func_568(21);
		return 1;
	}
	if (func_192(Global_1392581->f_3, 4) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		func_568(22);
		return 1;
	}
	return 0;
}

int func_475(var uParam0)
{
	if (!func_30(uParam0, 262144))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_569(uParam0, 60f, uParam0->f_239))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_476(var uParam0)
{
	if (!func_30(uParam0, 524288))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_570(uParam0, 60f, uParam0->f_239))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_477(var uParam0)
{
	if (!func_56(uParam0->f_151))
	{
		if (uParam0->f_20 < 60f)
		{
			if (func_571(uParam0->f_151, uParam0->f_221))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_478(vector3 vParam0)
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

float func_479(vector3 vParam0, vector3 vParam3)
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

bool func_480(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_481(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam6);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam1, fParam4, iParam5, bParam6, 0);
	}
}

char* func_482(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return "scenario@randomevent@harassment_attack@harass_attack_front";
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "scenario@randomevent@harassment_attack@harass_attack_front";
			default:
				break;
		}
	}
	return "INVALID ANIM SCENE";
}

void func_483(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, bParam2);
}

float func_484(var uParam0)
{
	if (!func_60(uParam0))
	{
		return 0f;
	}
	if (func_293(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

bool func_485(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_486(int iParam0)
{
	return func_331(iParam0, Global_1310750->f_16072 | 64);
}

void func_487(int iParam0)
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

int func_488(int iParam0)
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

var func_489(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_490(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_237())
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
				if (func_392(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_403(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_201(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_572(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_574(func_573(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_491(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_492(int iParam0, int iParam1)
{
	Local_274.f_59[iParam0 /*10*/] = iParam1;
}

void func_493(int* iParam0, bool bParam1)
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

Vector3 func_494(var uParam0, int iParam1)
{
	if (func_157(uParam0, 1))
	{
		switch (iParam1)
		{
			case 0:
				return func_292(2, 2);
			case 1:
				return func_292(2, 3);
			case 2:
				return func_292(2, 5);
			case 3:
				return func_292(2, 4);
			case 4:
				return func_292(2, 6);
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return func_292(3, 1);
			case 1:
				return func_292(3, 2);
			case 2:
				return func_292(3, 3);
			case 3:
				return func_292(3, 4);
			case 4:
				return func_292(3, 5);
			default:
				break;
		}
	}
	return 0f, 0f, 0f;
}

void func_495(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_60(uParam0))
	{
		func_379(uParam0, fParam1);
	}
}

int func_496(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_497(int iParam0, var uParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = func_202(iParam0, uParam1->f_6, 1);
	if (func_446(Global_35, iParam0, &(Local_15.f_152)))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		return 1;
	}
	if (fVar0 < 12f)
	{
		return 0;
	}
	iVar1 = func_496(iParam0, 0);
	if (func_467(iVar1) && WEAPON::_0x705BE297EEBDB95D(iVar1))
	{
		if (uParam1->f_9)
		{
			if (uParam1->f_4 < 40f)
			{
				return 1;
			}
		}
		else if (uParam1->f_4 < 17f)
		{
			return 1;
		}
	}
	else if (uParam1->f_4 < 6f)
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 131072;
		case 1:
			return 262144;
		case 2:
			return 524288;
		default:
			break;
	}
	return 0;
}

int func_499(int iParam0)
{
	return &(Global_40.f_9632.f_184[iParam0]);
}

void func_500(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;

	Var2 = { func_163(85200619) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		uVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		(Global_40.f_9632[iParam0 /*4*/])->f_3 = uVar1;
		if (bParam1)
		{
			iVar4 = func_313(iParam0, 0);
			iVar4 = BUILTIN::FLOOR((0.666f * IntToFloat(iVar4)));
			(Global_40.f_9632[iParam0 /*4*/])->f_3 = ((Global_40.f_9632[iParam0 /*4*/])->f_3 + iVar4);
		}
		else
		{
			(Global_40.f_9632[iParam0 /*4*/])->f_3 = ((Global_40.f_9632[iParam0 /*4*/])->f_3 + func_313(iParam0, 0));
		}
	}
}

int func_501(int iParam0)
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

int func_502(int iParam0)
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

int func_503(int iParam0)
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

int func_504(int iParam0)
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

int func_505(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

bool func_506(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_507(var uParam0, float fParam1)
{
	if (func_47(uParam0, fParam1))
	{
		func_205(uParam0);
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_509(int iParam0, int iParam1)
{
	iParam0 = func_508(iParam0);
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

void func_510()
{
	if (func_575(0))
	{
		func_576(0);
	}
	if (func_575(1))
	{
		func_576(1);
	}
	if (func_575(5))
	{
		func_576(5);
	}
	if (func_575(6))
	{
		func_577(6);
	}
}

bool func_511(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_578(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_579(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_512(int iParam0, bool bParam1)
{
	switch (func_564(iParam0))
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

int func_513(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
		if (func_580(vParam0))
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
	func_581(iVar0, bParam8);
	return iVar0;
}

void func_514(int iParam0, char* sParam1, var uParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(iParam0, sParam1) || ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
}

bool func_515(int iParam0, char* sParam1, var uParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	return ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
}

float func_516(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 178.5289f;
				case 1:
					return 102.61f;
				case 2:
					return 156.79f;
				case 3:
					return 237.74f;
				case 4:
					return 68.9358f;
				case 5:
					return 167.9548f;
				case 6:
					return 77.4126f;
				case 7:
					return 79.0647f;
				case 8:
					return 140.9829f;
				case 9:
					return 88.9829f;
				case 10:
					return 266.2154f;
				case 11:
					return 180.899f;
				case 12:
					return 292.3064f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -43.4711f;
				case 1:
					return 6.61f;
				case 2:
					return 294.79f;
				case 3:
					return 237.74f;
				case 4:
					return 69.25f;
				case 5:
					return 13.6581f;
				case 6:
					return 78.6927f;
				case 7:
					return 74.6927f;
				case 8:
					return 28.6927f;
				case 9:
					return 254.2154f;
				case 10:
					return 4.7479f;
				case 11:
					return 332.899f;
				case 12:
					return 292.3064f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 92.4426f;
				case 1:
					return 81.7418f;
				case 2:
					return 63.2589f;
				case 3:
					return 41.2589f;
				case 4:
					return 27.2589f;
				case 5:
					return 21.2589f;
				case 6:
					return 19.2589f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 16.4809f;
				case 1:
					return 14.3403f;
				case 2:
					return 24.3403f;
				case 3:
					return 28.3403f;
				case 4:
					return 28.3403f;
				case 5:
					return 30.3403f;
				case 6:
					return 13.1274f;
			}
			break;
	}
	return 0f;
}

bool func_517(int iParam0, int iParam1)
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

int func_518(int iParam0, int iParam1)
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

bool func_519(int iParam0, int iParam1)
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
	if (!func_517(iParam0, iVar0))
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

void func_520(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_521(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_582(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_583((375 + iVar28), 1);
			if (func_584(iParam0, &Var0, iVar5, 0))
			{
				if (func_585(iParam0, &Var6, iVar5))
				{
					Var29 = { func_586(iParam0, Var0, iVar5, 0) };
					func_587(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_588(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_589(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_590(iParam0, iParam1);
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

void func_522(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_523(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_524(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	switch (iParam0)
	{
		case 860033945:
			bVar1 = func_305(joaat("weapon_shotgun_doublebarrel"));
			bVar2 = func_305(joaat("weapon_shotgun_sawedoff"));
			if (!bVar1 && bVar2)
			{
				iParam0 = joaat("weapon_shotgun_sawedoff");
			}
			else if (bVar1 && !bVar2)
			{
				iParam0 = joaat("weapon_shotgun_doublebarrel");
			}
			else
			{
				iParam0 = joaat("weapon_shotgun_doublebarrel");
			}
			break;
		case -1101297303:
			iParam0 = joaat("weapon_revolver_cattleman");
			break;
	}
	switch (iParam0)
	{
		case joaat("weapon_shotgun_doublebarrel"):
			if (bParam1)
			{
				iVar0 = 706668430;
			}
			else
			{
				iVar0 = 993304958;
			}
			break;
		case joaat("weapon_shotgun_sawedoff"):
			if (bParam1)
			{
				iVar0 = 666997742;
			}
			else
			{
				iVar0 = 1472661451;
			}
			break;
		case joaat("weapon_revolver_cattleman"):
			if (bParam1)
			{
				iVar0 = 1568939990;
			}
			else
			{
				iVar0 = -2130489351;
			}
			break;
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case -2130489351:
				iVar0 = 1568939990;
				break;
		}
	}
	return iVar0;
}

int func_525(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = 0;
	switch (iParam0)
	{
		case -594562071:
			if (!func_305(joaat("weapon_repeater_henry")))
			{
				iParam0 = joaat("weapon_repeater_carbine");
			}
			else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				iParam0 = joaat("weapon_repeater_henry");
			}
			else
			{
				iParam0 = joaat("weapon_repeater_carbine");
			}
			break;
		case -1101297303:
			bVar2 = func_591(joaat("weapon_revolver_doubleaction"));
			bVar3 = func_591(joaat("weapon_revolver_schofield"));
			if (!bVar2 && !bVar3)
			{
				iParam0 = joaat("weapon_revolver_cattleman");
			}
			else if (!bVar2)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
				{
					iParam0 = joaat("weapon_revolver_schofield");
				}
				else
				{
					iParam0 = joaat("weapon_revolver_cattleman");
				}
			}
			else if (!bVar3)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
				{
					iParam0 = joaat("weapon_revolver_doubleaction");
				}
				else
				{
					iParam0 = joaat("weapon_revolver_cattleman");
				}
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar0 < 33)
				{
					iParam0 = joaat("weapon_revolver_schofield");
				}
				else if (iVar0 < 67)
				{
					iParam0 = joaat("weapon_revolver_doubleaction");
				}
				else
				{
					iParam0 = joaat("weapon_revolver_cattleman");
				}
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("weapon_repeater_carbine"):
			if (!bParam1)
			{
				iVar1 = -1803831742;
			}
			else
			{
				iVar1 = 1151959390;
			}
			break;
		case joaat("weapon_repeater_henry"):
			if (!bParam1)
			{
				iVar1 = -975773155;
			}
			else
			{
				iVar1 = 1943142735;
			}
			break;
		case joaat("weapon_revolver_schofield"):
			if (!bParam1)
			{
				iVar1 = 75445266;
			}
			else
			{
				iVar1 = -525293038;
			}
			break;
		case joaat("weapon_revolver_doubleaction"):
			if (!bParam1)
			{
				iVar1 = -317201336;
			}
			else
			{
				iVar1 = -1610312847;
			}
			break;
		case joaat("weapon_revolver_cattleman"):
			if (!bParam1)
			{
				iVar1 = 1366755867;
			}
			else
			{
				iVar1 = 886870984;
			}
			break;
	}
	return iVar1;
}

void func_526(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_592();
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
			func_593(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_527(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_528(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_594(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_529(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_343() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_595(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_595(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_556(iVar0) == -1)
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

void func_530(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_596(uParam0);
	}
}

int func_531(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_556(iParam2);
	}
	else
	{
		iVar1 = func_555(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_556(iParam0);
	}
	else
	{
		iVar0 = func_555(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_192(*uParam1, 8388608))
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

float func_532(int iParam0, int iParam1)
{
	return func_403(iParam0, iParam1, 1, 1);
}

float func_533(var uParam0)
{
	return uParam0->f_26;
}

int func_534(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_535(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_253(uParam0, 134217728);
	}
	else
	{
		func_252(uParam0, 134217728);
	}
}

void func_536()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_537(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_403(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_496(iVar0, 0)))
		{
			if (func_597(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_538(var uParam0)
{
	return uParam0->f_17;
}

int func_539(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_192(*uParam0, 4194304))
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

int func_540(var uParam0)
{
	return uParam0->f_18;
}

int func_541(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_496(iVar0, 0)))
		{
			if (func_598(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_542(var uParam0)
{
	return uParam0->f_23;
}

int func_543(var uParam0)
{
	return uParam0->f_21;
}

int func_544(var uParam0)
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

int func_545(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_599(iParam0, vParam4, 0.5f))
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

int func_546(int iParam0)
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
	if (func_600(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_547(int iParam0)
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

int func_548(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_601(iParam1))
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

int func_549(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_601(iParam1))
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

int func_550(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_601(iParam1))
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

int func_551(int iParam0, var uParam1)
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

int func_552(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_304(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_553(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_554(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_202(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_555(int iParam0)
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

int func_556(int iParam0)
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

int func_557(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_551(Global_35, &iVar1))
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
		fVar2 = func_403(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_403(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_558(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_594(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_559(uParam1, iVar0))
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
				if (!bParam2 || !func_559(uParam1, iVar1))
				{
					if (func_202(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_559(var uParam0, int iParam1)
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

int func_560(int iParam0)
{
	if (func_328())
	{
		return 0;
	}
	return func_512(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_561(var uParam0)
{
	return uParam0->f_20;
}

int func_562(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_563(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_564(int iParam0)
{
	if (!func_231(iParam0))
	{
		return -1;
	}
	return func_602(iParam0);
}

bool func_565(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_48;
}

int func_566(vector3 vParam0, int iParam3, int iParam4, int iParam5)
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

bool func_567()
{
	return Global_1310750->f_16077 != 0;
}

void func_568(int iParam0)
{
	Global_1393447->f_1 = iParam0;
}

bool func_569(var uParam0, float fParam1, int iParam2)
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
	return func_603(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584, uVar6, iParam2);
}

int func_570(var uParam0, float fParam1, int iParam2)
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
		iVar18 = func_604(&uVar0, &uVar6, 5, iParam2);
	}
	else
	{
		iVar18 = func_605(&uVar0, &uVar6, 5, uParam0->f_209, fParam1);
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
					if (func_397(vVar21, vVar24, 5f, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(iVar27, uParam0->f_209, 40f))
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

int func_571(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;

	vVar2 = { func_607(func_606()) };
	fVar5 = 120f;
	fVar5 = (fVar5 * fVar5);
	if (func_401(Global_36, vVar2) < 40000f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_608(iVar0))
		{
			fVar6 = func_609(iVar0);
			if (fVar6 <= 10000f && fVar6 > 0f)
			{
				iVar1 = func_610(iVar0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					return 0;
				}
				if (func_401(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), vVar2) > fVar5)
				{
					fVar7 = func_232(iVar1, Global_36, 1);
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

int func_572(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_573(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
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
	return func_611(iParam0, &Var0);
}

int func_574(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_575(int iParam0)
{
	iParam0 = func_508(iParam0);
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

void func_576(int iParam0)
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
	iVar0 = func_612(iParam0);
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
	if (func_613(iParam0, 64))
	{
		func_577(iParam0);
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
	uVar3 = func_614(42);
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
				func_615(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_577(iParam0);
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
		if (func_616(1) < 1)
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
		func_617(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_613(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_618(iParam0);
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
	fVar15 = func_619(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_620(iParam0))
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
		func_621(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_622(((*Global_1900383)[iParam0 /*45*/])->f_26);
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
	if (func_623(iVar0) && !bVar9)
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
	iVar21 = func_616(iParam0);
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

void func_577(int iParam0)
{
	iParam0 = func_508(iParam0);
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

bool func_578(int iParam0, int iParam1, float fParam2)
{
	return func_599(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_579(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_580(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_581(int iParam0, bool bParam1)
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

struct<5> func_582(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_624(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_625(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_586(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_626(bParam1) };
			if (iParam2 && func_627(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_584(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_584(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_585(iParam0, &Var5, 1728382685))
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
			Var0 = { func_628(bParam1) };
			switch (func_629(iParam0))
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
			if (func_630(iParam0, -1823706425))
			{
				Var0 = { func_586(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, -1838434463);
			}
			else if (func_630(iParam0, -1483207246))
			{
				Var0 = { func_586(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_631(Var0, &Var27, bParam1, 0))
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

int func_583(int iParam0, int iParam1)
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

bool func_584(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_632(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_585(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_633(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_586(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_634(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_635(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_587(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_636(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_631(*uParam1, &Var0, bParam6, 0))
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
	if (!func_588(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_635(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_588(bool bParam0)
{
	if (func_343() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_635(bParam0));
}

int func_589(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_637(iParam0))
	{
		return 0;
	}
	if (!func_588(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_590(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_638(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_591(int iParam0)
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

int func_592()
{
	if (func_639())
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

void func_593(var uParam0, var uParam1)
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

int func_594(bool bParam0, var uParam1, var uParam2)
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

int func_595(var uParam0)
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

void func_596(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_252(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Global_1935630->f_34[iVar0])))
				{
					func_253(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_597(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_598(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_598(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_599(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_600(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_601(int iParam0)
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

int func_602(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_603(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, float fParam7, var uParam8, int iParam9)
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
		iVar12 = func_641(&iVar0, iParam0, iParam9, iVar0);
	}
	else
	{
		iVar12 = func_642(&iVar0, iParam0, iVar0, vParam1, fParam4);
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
					if (func_397(vVar6, vVar9, fParam7, 0))
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

int func_604(var uParam0, var uParam1, int iParam2, int iParam3)
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
				if (func_643(iVar2))
				{
					if (!func_389(iVar2, uParam1))
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

var func_605(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_604(uParam0, uParam1, iParam2, iVar0);
	func_644(iVar0);
	return uVar1;
}

int func_606()
{
	return Global_40.f_4283;
}

Vector3 func_607(int iParam0)
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
			return func_645();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_608(int iParam0)
{
	if (func_646(iParam0))
	{
		if (func_224(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_609(int iParam0)
{
	if (!func_647(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

int func_610(int iParam0)
{
	if (func_646(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

var func_611(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_612(int iParam0)
{
	iParam0 = func_508(iParam0);
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

bool func_613(int iParam0, int iParam1)
{
	iParam0 = func_508(iParam0);
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

int func_614(int iParam0)
{
	if (!func_648(iParam0))
	{
		return 0;
	}
	return func_649(iParam0);
}

void func_615(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_651(func_650(255), 109029619));
	}
	else if (func_652())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_328();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_616(int iParam0)
{
	iParam0 = func_508(iParam0);
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

void func_617(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_651(func_650(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_652())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_328())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_618(int iParam0)
{
	iParam0 = func_508(iParam0);
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

float func_619(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_620(int iParam0)
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

	iParam0 = func_508(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_653(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_616(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_616(iParam0) + 1;
	fVar6 = func_654(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_655(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_621(int iParam0)
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

void func_622(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

int func_623(int iParam0)
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

struct<4> func_624(bool bParam0)
{
	return func_586(1328661203, func_656(), -1591664384, bParam0);
}

int func_625(int iParam0)
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

struct<4> func_626(bool bParam0)
{
	int iVar0;

	iVar0 = func_635(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224214))
		{
			*Global_1224214 = { func_586(923904168, func_624(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224222))
		{
			*Global_1224222 = { func_586(923904168, func_624(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_586(923904168, func_624(bParam0), -740156546, 0);
}

int func_627(int iParam0, bool bParam1)
{
	if (func_629(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_657(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_628(bool bParam0)
{
	int iVar0;

	iVar0 = func_635(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224218))
		{
			*Global_1224218 = { func_586(271701509, func_624(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_586(271701509, func_624(bParam0), 12999093, 0);
}

int func_629(int iParam0)
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

int func_630(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_629(iParam0);
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

int func_631(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_635(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_632(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_634(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_586(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_635(bParam6), &Var0, 0);
	return uVar4;
}

int func_633(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_635(0);
	*uParam1 = { func_586(iParam0, func_626(0), iParam3, 0) };
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

int func_634(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_635(bool bParam0)
{
	if (func_343() == -1)
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

int func_636(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_637(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_638(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_639()
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

int func_640(int iParam0)
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

int func_641(var uParam0, var uParam1, int iParam2, int iParam3)
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
			if (!func_658(iVar3, uParam1))
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

var func_642(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_641(iParam0, uParam1, iVar0, iParam2);
	func_644(iVar0);
	return uVar1;
}

bool func_643(int iParam0)
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

void func_644(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

Vector3 func_645()
{
	if (func_402(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_402(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_646(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_647(int iParam0)
{
	return iParam0 > -1;
}

int func_648(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_649(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

char* func_650(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_659(37, iParam0))
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
	if (func_659(37, iParam0))
	{
		return HUD::GET_TEXT_SUBSTRING_2(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_651(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_660(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_652()
{
	if (func_343() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0)
{
	iParam0 = func_508(iParam0);
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

float func_654(int iParam0)
{
	iParam0 = func_508(iParam0);
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

float func_655(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_656()
{
	struct<4> Var0;

	return Var0;
}

int func_657(int iParam0, bool bParam1)
{
	if (func_637(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_635(bParam1), iParam0, 0);
}

int func_658(int iParam0, var uParam1)
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

int func_659(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_661(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_662())
	{
		return func_661(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_661(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_660(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_661(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_662()
{
	return Global_1109400->f_244;
}

