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
	struct<2> Local_14 = { 0, 0 } ;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<2> Local_18 = { 0, 0 } ;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<2> Local_22 = { 0, 0 } ;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	struct<21> Local_33[11];
	struct<17> Local_265[3];
	struct<17> Local_317[3];
	struct<193> Local_369 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_562 = 0;
	struct<32> Local_563[14];
	struct<32> Local_1012[3];
	int iLocal_1109 = 0;
	int iLocal_1110 = 0;
	bool bLocal_1111 = false;
	int iLocal_1112 = 0;
	vector3 vLocal_1113 = { 0f, 0f, 0f };
	vector3 vLocal_1116 = { 0f, 0f, 0f };
	vector3 vLocal_1119 = { 0f, 0f, 0f };
	vector3 vLocal_1122 = { 0f, 0f, 0f };
	vector3 vLocal_1125 = { 0f, 0f, 0f };
	vector3 vLocal_1128 = { 0f, 0f, 0f };
	vector3 vLocal_1131 = { 0f, 0f, 0f };
	vector3 vLocal_1134 = { 0f, 0f, 0f };
	vector3 vLocal_1137 = { 0f, 0f, 0f };
	vector3 vLocal_1140 = { 0f, 0f, 0f };
	float fLocal_1143 = 0f;
	float fLocal_1144 = 0f;
	char* sLocal_1145[34] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	struct<6> Local_1182 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	struct<2> Local_1190[10];
	var uLocal_1211 = 10;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	struct<22> Local_1222 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_1244 = 3;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	char[] cLocal_1247[8] = 0;
	var uLocal_1248[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1263[3] = { 0, 0, 0 };
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1284 = 0;
	int iLocal_1285[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	int iLocal_1298 = 0;
	var uLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	int iLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = -1;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 1097859072;
	var uLocal_1322 = 1000;
	var uLocal_1323 = 1067450368;
	var uLocal_1324 = 5000;
	var uLocal_1325 = 42;
	var uLocal_1326 = 1103626240;
	var uLocal_1327 = 1077936128;
	var uLocal_1328 = 1106247680;
	var uLocal_1329 = 1103101952;
	var uLocal_1330 = 1097859072;
	var uLocal_1331 = 1103626240;
	int iLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	bool bLocal_1366 = false;
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
	bool bLocal_1369 = false;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	bool bLocal_1374 = false;
	int iLocal_1375 = 0;
	int iLocal_1376 = 0;
	int iLocal_1377 = 0;
	int iLocal_1378 = 0;
	bool bLocal_1379 = false;
	bool bLocal_1380 = false;
	int iLocal_1381 = 0;
	int iLocal_1382 = 0;
	int iLocal_1383 = 0;
	int iLocal_1384 = 0;
	int iLocal_1385 = 0;
	int iLocal_1386 = 0;
	int iLocal_1387 = 0;
	int iLocal_1388 = 0;
	int iLocal_1389 = 0;
	int iLocal_1390 = 0;
	int iLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	int iLocal_1394 = 0;
	int iLocal_1395 = 0;
	int iLocal_1396 = 0;
	int iLocal_1397 = 0;
	int iLocal_1398 = 0;
	bool bLocal_1399 = false;
	int iLocal_1400 = 0;
	int iLocal_1401 = 0;
	int iLocal_1402 = 0;
	int iLocal_1403 = 0;
	bool bLocal_1404 = false;
	int iLocal_1405 = 0;
	int iLocal_1406 = 0;
	int iLocal_1407 = 0;
	int iLocal_1408 = 0;
	int iLocal_1409 = 0;
	int iLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	int iLocal_1413 = 0;
	int iLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	float fLocal_1425 = 0f;
	float fLocal_1426 = 0f;
	float fLocal_1427 = 0f;
	float fLocal_1428 = 0f;
	float fLocal_1429 = 0f;
	float fLocal_1430 = 0f;
	var uLocal_1431 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_26 = 1172597346;
	iLocal_1180 = joaat("wagon05x");
	iLocal_1181 = joaat("p_crate03x");
	cLocal_1247 = "TRAIN_HOLDUP";
	iLocal_1414 = 3;
	iLocal_1424 = -486697517;
	fLocal_1427 = 5f;
	fLocal_1429 = 30625f;
	fLocal_1430 = 2f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_1409 = 1;
	}
	if (!iLocal_1409)
	{
		Local_369.f_3 = func_1(&vScriptParam_0);
		Local_369.f_161 = func_2(vScriptParam_0.z, 2);
		uLocal_1299 = uLocal_1299;
		func_3(&Local_369, 1);
		func_4(&(Local_369.f_5), 0);
		func_5(&(Local_369.f_5), 1);
		func_6(&(Local_369.f_5), 1);
		func_7(&(Local_369.f_5), 1);
		func_8(&(Local_369.f_5), 1);
		func_9(&(Local_369.f_5), 1);
		func_10(&(Local_369.f_5), 1);
		func_11(&(Local_369.f_5), 1);
		func_12(&(Local_369.f_5), 1);
		func_13(&(Local_369.f_5), 1);
		func_14(&(Local_369.f_5), 1);
		func_15(&(Local_369.f_5), 5f);
		func_16(&(Local_369.f_5), 6000);
		func_17(&(Local_369.f_5), 30);
		func_4(&uLocal_1304, 0);
		func_18(&uLocal_1304, 0);
		func_19(&uLocal_1304, 1);
		if (iLocal_1109 == 0)
		{
			func_20(&uLocal_1304, 14f);
		}
		else
		{
			func_20(&uLocal_1304, 20f);
		}
		func_21();
		func_22();
		func_23();
		func_24();
	}
	while (true)
	{
		func_26(iLocal_1409, 3058/*func_25*/, 0);
		if (iLocal_1409)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1302)
			{
				case 0:
					if (func_27())
					{
						iLocal_1302 = 1;
					}
					break;
				case 1:
					if (func_28(&Local_369, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_29(&Local_369, &iLocal_32, &(Local_369.f_51.f_4));
						if (Local_369.f_161)
						{
							func_30(0);
							iLocal_1110 = 1;
						}
						else if (func_31())
						{
							func_25();
						}
						func_32();
						func_33();
						func_34();
						if (iLocal_1109 != 0)
						{
						}
						else
						{
							iLocal_1422 = GRAPHICS::CREATE_TRACKED_POINT();
							iLocal_1423 = GRAPHICS::CREATE_TRACKED_POINT();
							GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1422, vLocal_1140, 8f);
							GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1423, vLocal_1137, 8f);
						}
						iLocal_1302 = 2;
					}
					else if (Local_369.f_160)
					{
						func_25();
					}
					break;
				case 2:
					if (iLocal_1410)
					{
						if (VEHICLE::_0xBD3C4A2ED509205E(&(iLocal_1285[0])))
						{
							VEHICLE::_0x2BB2B5BCF0DF8008(&(iLocal_1285[0]), 1);
							VEHICLE::_0x07E2E21E799080A0(&(iLocal_1285[0]), 1);
							if (iLocal_1109 != 0)
							{
								func_35(&(iLocal_1285[0]), -577630801, 1);
							}
							else
							{
								func_35(&(iLocal_1285[0]), -1464742217, 1);
								func_36(&uLocal_1354);
							}
							VEHICLE::SET_TRAIN_SPEED(&(iLocal_1285[0]), 0f);
							VEHICLE::SET_TRAIN_CRUISE_SPEED(&(iLocal_1285[0]), 0f);
							VEHICLE::_0x4182C037AA1F0091(&(iLocal_1285[0]), 0);
							func_37(&iLocal_1285);
							if (func_38(vLocal_27))
							{
								if (func_39(&(iLocal_1285[2]), Global_35))
								{
									bLocal_1111 = false;
								}
								else
								{
									bLocal_1111 = true;
								}
							}
							func_30(0);
							iLocal_1110 = 1;
							Local_22.f_1 = &iLocal_1285[2];
							Local_14.f_1 = &iLocal_1285[4];
							Local_18.f_1 = &iLocal_1285[5];
							func_40();
							func_41();
							if (!func_38(vLocal_1125))
							{
								iLocal_1296 = func_42(vLocal_1119, vLocal_1122, vLocal_1125, fLocal_1144, 0, 0, 1);
							}
							if (iLocal_1109 != 1)
							{
							}
							else
							{
								iLocal_1292 = VEHICLE::CREATE_VEHICLE(iLocal_1180, vLocal_1128, fLocal_1143, true, true, false, false);
								PROPSET::_CREATE_PROPSET_4(iLocal_1424, 0f, 0f, 0f, iLocal_1292, 0f, true, 1, false);
								PROPSET::_0xC0F0417A90402742(iLocal_1292, iLocal_26);
								func_43(iLocal_1292);
								iLocal_1295 = OBJECT::CREATE_OBJECT(iLocal_1181, Local_369.f_51 + Vector(0f, 5f, 5f), true, true, false, false, true);
							}
							iLocal_1302 = 3;
						}
					}
					else
					{
						if (iLocal_1109 == 0 && !Local_369.f_161)
						{
							iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(iLocal_1422);
							iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(iLocal_1423);
							if (iVar0 == -1 || iVar1 == -1)
							{
							}
							else
							{
								if (iVar0 > 0 || iVar1 > 0)
								{
									func_25();
								}
								func_44();
								Jump @1725; //curOff = 1025
								if (!func_45())
								{
								}
								else
								{
									if (iLocal_1109 == 0)
									{
										if (func_46(&(iLocal_1285[0]), -1464742217))
										{
											if (func_47())
											{
												PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[0]), 347, true);
												func_48();
												iVar2 = 9;
												while (iVar2 <= 11)
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(&(uLocal_1248[iVar2]), ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[iVar2]), true, false), 2f, -1, 0, 0, 1, 0);
													iVar2++;
												}
												PED::_0x5C3C55EAAD19915F(&(uLocal_1248[3]), "Default_Panic");
												PED::_0x5C3C55EAAD19915F(&(uLocal_1248[4]), "Default_Panic");
												iLocal_1302 = 4;
											}
										}
									}
									else if (func_49())
									{
										PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[2]), 347, true);
										func_48();
										iLocal_1302 = 4;
									}
									Jump @1725; //curOff = 1201
									if (!func_50(&Local_369, &uLocal_1248, iLocal_1109, 0, 0, 0, 1, 0))
									{
										func_25();
									}
									if (!Local_369.f_46)
									{
										if (func_51() || func_52(&uLocal_1263, &(Local_369.f_5), &iLocal_1332, &uLocal_1417, 0, 2, 1))
										{
											if (iLocal_1332 != 65536)
											{
												func_53(0, 1, 0);
											}
											else if (iLocal_1301 >= 3)
											{
												func_53(0, 0, 0);
												if (iLocal_1109 == 0)
												{
													func_54(&(uLocal_1248[2]), Global_35, &(sLocal_1145[16]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												}
												else
												{
													func_54(&(uLocal_1248[4]), Global_35, &(sLocal_1145[16]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												}
											}
											else
											{
												func_55();
											}
											func_56();
										}
										if (func_57())
										{
											func_53(0, 1, 0);
										}
									}
									if (iLocal_1109 != 0)
									{
									}
									else
									{
										if (func_58(&(uLocal_1248[8]), 0, &(Local_369.f_5), &iLocal_1332, 1, 0) && !iLocal_1377)
										{
											if (iLocal_1332 != 65536 && iLocal_1332 != 256)
											{
												iLocal_1377 = 1;
												func_54(&(uLocal_1248[8]), Global_35, &(sLocal_1145[17]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												func_59(&(uLocal_1248[8]));
											}
										}
										if (func_58(&(uLocal_1248[7]), 0, &(Local_369.f_5), &iLocal_1332, 1, 0) && !iLocal_1378)
										{
											if (iLocal_1332 != 65536 && iLocal_1332 != 256)
											{
												iLocal_1378 = 1;
												func_54(&(uLocal_1248[7]), Global_35, &(sLocal_1145[18]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												func_59(&(uLocal_1248[7]));
											}
										}
									}
									func_60();
									if (func_61())
									{
										Local_369.f_50 = 1;
										func_25();
									}
									if (func_62(&Local_369, &uLocal_1248, iLocal_1301 >= 3, 0, iLocal_1301 < 3, 1, 1, 1, 0, 0, 0, 0, 0))
									{
										Local_369.f_50 = 1;
										iLocal_1409 = 1;
									}
								}
							}
							BUILTIN::WAIT(Local_369.f_158);
						}
					}
			}
		}
	}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(var uParam0, bool bParam1)
{
	func_63(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_64("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_4(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_18(uParam0, 1);
		func_65(uParam0, 1);
		func_8(uParam0, 1);
		func_66(uParam0, 1);
		func_67(uParam0, 1);
		func_68(uParam0, 1);
		func_69(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_18(uParam0, 0);
		func_65(uParam0, 0);
		func_8(uParam0, 0);
		func_66(uParam0, 0);
		func_67(uParam0, 0);
		func_68(uParam0, 0);
		func_69(uParam0, 0);
	}
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 2);
	}
	else
	{
		func_71(&(uParam0->f_1), 2);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 2048);
	}
	else
	{
		func_71(&(uParam0->f_1), 2048);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 2);
	}
	else
	{
		func_70(uParam0, 2);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 16);
	}
	else
	{
		func_70(uParam0, 67108864);
		func_70(uParam0, 16);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 4);
	}
	else
	{
		func_71(&(uParam0->f_1), 4);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 16);
	}
	else
	{
		func_71(&(uParam0->f_1), 16);
	}
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 8);
	}
	else
	{
		func_71(&(uParam0->f_1), 8);
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 256);
	}
	else
	{
		func_71(&(uParam0->f_1), 256);
	}
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 1);
	}
	else
	{
		func_71(&(uParam0->f_1), 1);
	}
}

void func_14(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 1024);
	}
	else
	{
		func_71(&(uParam0->f_1), 1024);
	}
}

void func_15(var uParam0, float fParam1)
{
	uParam0->f_19 = fParam1;
}

void func_16(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_18(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 4);
	}
	else
	{
		func_70(uParam0, 4);
	}
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 131072);
	}
	else
	{
		func_71(&(uParam0->f_1), 131072);
	}
}

void func_20(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_21()
{
	iLocal_32 = func_72(Global_36);
	switch (iLocal_32)
	{
		case 9:
		case 13:
		case 14:
		case 15:
			iLocal_1109 = 0;
			break;
		case 0:
		case 11:
			iLocal_1109 = 1;
			break;
	}
}

void func_22()
{
	if (iLocal_1109 == 0)
	{
		Local_1182.f_4 = "script@beat@wilderness@trainholdup@odriscoll";
	}
	else if (iLocal_1109 == 1)
	{
		Local_1182.f_4 = "script@beat@wilderness@trainholdup@lemoyneboxcar";
		Local_1182.f_5 = "script@beat@wilderness@trainholdup@lemoynepasscar";
	}
}

void func_23()
{
	int iVar0;
	int iVar1;

	if (iLocal_1109 == 0)
	{
		Local_1190[0 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		(Local_1190[0 /*2*/])->f_1 = "BREAKOUT_CRIM01";
		Local_1190[1 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		(Local_1190[1 /*2*/])->f_1 = "BREAKOUT_VIC01";
		Local_1190[2 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		(Local_1190[2 /*2*/])->f_1 = "BREAKOUT_VIC02";
		Local_1190[3 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		(Local_1190[3 /*2*/])->f_1 = "BREAKOUT_VIC03";
		Local_1190[4 /*2*/] = "script_re@TRAIN_HOLDUP@ODRISCOLL";
		(Local_1190[4 /*2*/])->f_1 = "BREAKOUT_VIC04";
		Local_1190[5 /*2*/] = "script_re@TRAIN_HOLDUP@IDLE";
		(Local_1190[5 /*2*/])->f_1 = "IDLE";
		Local_1190[6 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		(Local_1190[6 /*2*/])->f_1 = "DEAD_01";
		Local_1190[7 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		(Local_1190[7 /*2*/])->f_1 = "DEAD_02";
		Local_1190[8 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		(Local_1190[8 /*2*/])->f_1 = "DEAD_03";
		Local_1190[9 /*2*/] = "script_re@TRAIN_HOLDUP@DEAD";
		(Local_1190[9 /*2*/])->f_1 = "DEAD_04";
		iVar0 = 0;
		while (iVar0 < 10)
		{
			func_73(&(Local_1190[iVar0 /*2*/]), &uLocal_1211);
			iVar0++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		Local_1190[0 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		(Local_1190[0 /*2*/])->f_1 = "BREAKOUT_VIC01";
		Local_1190[1 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		(Local_1190[1 /*2*/])->f_1 = "BREAKOUT_VIC02";
		Local_1190[2 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		(Local_1190[2 /*2*/])->f_1 = "BREAKOUT_VIC03";
		Local_1190[3 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		(Local_1190[3 /*2*/])->f_1 = "BREAKOUT_VIC04";
		Local_1190[4 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		(Local_1190[4 /*2*/])->f_1 = "BREAKOUT_VIC05";
		Local_1190[5 /*2*/] = "script_re@TRAIN_HOLDUP@LEMOYNE";
		(Local_1190[5 /*2*/])->f_1 = "BREAKOUT_VIC06";
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_73(&(Local_1190[iVar1 /*2*/]), &uLocal_1211);
			iVar1++;
		}
	}
}

void func_24()
{
	Local_1222.f_4 = 21030;
	Local_1222.f_3 = Global_35;
	Local_1222.f_8 = 4;
	Local_1222.f_19 = 4;
	Local_1222.f_21 = 4;
	Local_1222.f_17 = 0;
	Local_1222.f_18 = 0;
	Local_1222.f_7 = 4000;
	func_74(&(Local_1222.f_5), 1);
}

void func_25()
{
	int iVar0;

	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(iLocal_1422))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1422);
	}
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(iLocal_1423))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1423);
	}
	if (iLocal_1409 && iLocal_1301 <= 2)
	{
		func_75();
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1297))
	{
		TASK::_0xEEE4829304F93EEE(iLocal_1297, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1295);
	}
	if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_1296))
	{
		func_76(&iLocal_1296, vLocal_1119, vLocal_1122, 0, 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_1293))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1293);
		VOLUME::DELETE_VOLUME(iLocal_1293);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1182))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1182);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1182.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1182.f_1);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_1411);
	if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_1285[0])))
	{
		if (Local_369.f_161 && iLocal_1409)
		{
			VEHICLE::DELETE_MISSION_TRAIN(iLocal_1285[0]);
		}
		else
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(iLocal_1285[0], true);
		}
	}
	if (iLocal_1109 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[8])))
		{
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[8]), 133, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[7])))
		{
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[7]), 133, false);
		}
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_77(uLocal_1248[iVar0], 1, 1, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_77(uLocal_1263[iVar0], 1, 1, 1);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1292))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1292);
	}
	func_78(&Local_369, &uLocal_1248, &iLocal_1269, iLocal_1109, iLocal_32, Local_369.f_51.f_4, 0, 1, 0, 1);
	if (iLocal_1110)
	{
		func_30(1);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_26(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_79(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_27()
{
	switch (iLocal_1300)
	{
		case 0:
			if (func_80(&Local_369))
			{
				func_81(&bLocal_1366);
				func_82();
				func_83(&Local_563);
				func_83(&Local_1012);
				func_84(-258459266, 15, 0, 0);
				if (iLocal_1109 == 0)
				{
					func_85(-1464742217);
				}
				else
				{
					func_85(-577630801);
					STREAMING::REQUEST_MODEL(iLocal_1180, false);
					STREAMING::REQUEST_MODEL(iLocal_1181, false);
					PROPSET::_REQUEST_PROPSET_2(iLocal_1424);
				}
				iLocal_1300 = 1;
			}
			break;
		case 1:
			if (!func_86(&uLocal_1299, cLocal_1247))
			{
				return 0;
			}
			if (iLocal_1109 == 0 && !func_87(&uLocal_1211))
			{
				return 0;
			}
			if (!func_88(&Local_563))
			{
				return 0;
			}
			if (iLocal_1109 == 0)
			{
				if (!func_85(-1464742217))
				{
					return 0;
				}
			}
			else if (!func_85(-577630801))
			{
				return 0;
			}
			if (!func_89())
			{
				return 0;
			}
			if (iLocal_1109 == 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_1180))
				{
					return 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_1181))
				{
					return 0;
				}
				if (!PROPSET::_HAS_PROPSET_LOADED_2(iLocal_1424))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

int func_28(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_90(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_91(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_92(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_93(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_94(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_29(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 3:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 4:
			*iParam1 = 13;
			*uParam2 = 0;
			break;
		case 5:
			*iParam1 = 14;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
	}
}

void func_30(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_95(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar0 /*373*/])->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar1 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar1 /*373*/])->f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_96() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

int func_31()
{
	int iVar0;

	iVar0 = func_98(func_97(&Local_369), 0);
	if (func_99(iVar0))
	{
		if (func_100(iVar0, func_97(&Local_369)) <= 400f)
		{
			return 1;
		}
	}
	return 0;
}

void func_32()
{
	vector3 vVar0;

	if (iLocal_1109 != 1)
	{
		return;
	}
	if (Local_369.f_51.f_4 == 0)
	{
		vLocal_27 = { -5.58838f, -3.12366f, 0.13289f };
		vVar0 = { Local_369.f_51 + vLocal_27 };
		bLocal_1111 = func_101(Local_369.f_51, vVar0, Global_36);
	}
}

void func_33()
{
	switch (iLocal_1109)
	{
		case 0:
			iLocal_1112 = 1;
			break;
		case 1:
			if (Local_369.f_51.f_4 == 0)
			{
				if (bLocal_1111)
				{
					iLocal_1112 = 0;
				}
				else
				{
					iLocal_1112 = 1;
				}
			}
			else
			{
				iLocal_1112 = 0;
			}
			break;
	}
}

void func_34()
{
	switch (iLocal_1109)
	{
		case 0:
			switch (iLocal_32)
			{
				case 9:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							vLocal_1137 = { 4.8876f, 274.645f, 109.737f };
							vLocal_1140 = { -26.18865f, 337.4812f, 111.4442f };
							break;
						case 1:
							vLocal_1137 = { 158.3745f, 585.1412f, 117.661f };
							vLocal_1140 = { 216.3839f, 547.7601f, 115.1547f };
							break;
					}
					break;
				case 15:
					vLocal_1137 = { -3894.651f, -2846.547f, -15.3585f };
					vLocal_1140 = { -3822.221f, -2827.164f, -15.24293f };
					break;
				case 14:
					vLocal_1137 = { -5100.704f, -3179.039f, -15.6474f };
					vLocal_1140 = { -5153.097f, -3230.809f, -16.53261f };
					break;
				case 13:
					vLocal_1137 = { -5025.307f, -2638.411f, -12.8459f };
					vLocal_1140 = { -5025.589f, -2714.07f, -13.23042f };
					break;
			}
			break;
		case 1:
			switch (iLocal_32)
			{
				case 0:
				case 11:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							if (bLocal_1111)
							{
								vLocal_1137 = { 1909.839f, -1641.892f, 42.18f };
							}
							else
							{
								vLocal_1137 = { 1874.915f, -1655.65f, 43.1169f };
							}
							break;
						case 1:
							vLocal_1137 = { 1056.348f, -1083.965f, 65.7937f };
							break;
					}
					break;
			}
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
		{
			iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				ENTITY::_0x6C31B06E91518269(iVar1, iParam2);
			}
			iVar0++;
		}
	}
}

void func_36(var uParam0)
{
	func_102(uParam0, 0f);
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0[0]))
		{
		}
		iVar1 = 1;
		while (iVar1 <= (*uParam0 - 1))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(uParam0[0], iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				(*uParam0)[iVar1] = iVar0;
			}
			else
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return *uParam0;
}

int func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_39(int iParam0, int iParam1)
{
	return func_103(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
}

void func_40()
{
	switch (iLocal_1109)
	{
		case 0:
			switch (iLocal_32)
			{
				case 9:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							vLocal_1119 = { -22.23425f, 268.5887f, 108.6608f };
							vLocal_1122 = { 88.89289f, 199.8596f, 108.0461f };
							vLocal_1125 = { -101.9153f, 419.74f, 113.1078f };
							fLocal_1144 = 60f;
							(Local_563[0 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[1 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[3 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[4 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[5 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[6 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[9 /*32*/])->f_6 = { func_104(0, 0) };
							(Local_563[9 /*32*/])->f_9 = func_105(0, 0);
							(Local_563[10 /*32*/])->f_6 = { func_104(0, 1) };
							(Local_563[11 /*32*/])->f_6 = { func_104(0, 2) };
							vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
							if (bLocal_1111)
							{
								bLocal_31 = true;
								(Local_563[2 /*32*/])->f_6 = { -10.7397f, 290.225f, 110.167f };
								(Local_563[2 /*32*/])->f_9 = 305.8544f;
								(Local_563[12 /*32*/])->f_6 = { -3.7953f, 281.686f, 109.817f };
								(Local_563[12 /*32*/])->f_9 = 30.7033f;
								(Local_563[13 /*32*/])->f_6 = { -15.1941f, 299.122f, 110.69f };
								(Local_563[13 /*32*/])->f_9 = 24.4774f;
								(Local_563[7 /*32*/])->f_6 = { func_106(0, 0) };
								(Local_563[7 /*32*/])->f_9 = func_107(0, 0);
								(Local_563[8 /*32*/])->f_6 = { func_108(0, 0) };
								(Local_563[8 /*32*/])->f_9 = func_109(0, 0);
								(Local_1012[0 /*32*/])->f_6 = { -18.0069f, 285.0654f, 111.3926f };
								(Local_1012[0 /*32*/])->f_18 = 8.55f;
								(Local_1012[1 /*32*/])->f_6 = { -21.1489f, 288.8005f, 111.6319f };
								(Local_1012[1 /*32*/])->f_18 = 49.26f;
								(Local_1012[2 /*32*/])->f_6 = { -20.6792f, 285.9579f, 111.5264f };
								(Local_1012[2 /*32*/])->f_18 = 68.01f;
							}
							else
							{
								bLocal_31 = true;
								(Local_563[2 /*32*/])->f_6 = { 5.4508f, 288.274f, 109.773f };
								(Local_563[2 /*32*/])->f_9 = 126.9169f;
								(Local_563[12 /*32*/])->f_6 = { 8.6077f, 278.745f, 109.292f };
								(Local_563[12 /*32*/])->f_9 = 38.0125f;
								(Local_563[13 /*32*/])->f_6 = { -0.2693f, 295.742f, 110.008f };
								(Local_563[13 /*32*/])->f_9 = 24.0854f;
								(Local_563[7 /*32*/])->f_6 = { func_106(0, 1) };
								(Local_563[7 /*32*/])->f_9 = func_107(0, 1);
								(Local_563[8 /*32*/])->f_6 = { func_108(0, 1) };
								(Local_563[8 /*32*/])->f_9 = func_109(0, 1);
								(Local_1012[0 /*32*/])->f_6 = { 8.3751f, 294.6622f, 111.9876f };
								(Local_1012[0 /*32*/])->f_18 = -2.9f;
								(Local_1012[1 /*32*/])->f_6 = { 8.9583f, 298.3959f, 112.644f };
								(Local_1012[1 /*32*/])->f_18 = 53.12f;
								(Local_1012[2 /*32*/])->f_6 = { 5.12f, 298.4978f, 112.2613f };
								(Local_1012[2 /*32*/])->f_18 = 29.79f;
							}
							break;
						case 1:
							bLocal_31 = true;
							(Local_563[0 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[1 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[3 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[4 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[5 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[6 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
							(Local_563[9 /*32*/])->f_6 = { func_104(0, 0) };
							(Local_563[9 /*32*/])->f_9 = func_105(0, 0);
							(Local_563[10 /*32*/])->f_6 = { func_104(0, 1) };
							(Local_563[11 /*32*/])->f_6 = { func_104(0, 2) };
							vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
							bLocal_1111 = true;
							(Local_563[2 /*32*/])->f_6 = { 189.4026f, 577.8849f, 117.1983f };
							(Local_563[2 /*32*/])->f_9 = 158.6718f;
							(Local_563[12 /*32*/])->f_6 = { 148.3183f, 594.5875f, 118.0151f };
							(Local_563[12 /*32*/])->f_9 = 228.9833f;
							(Local_563[13 /*32*/])->f_6 = { 160.9096f, 587.0486f, 117.5769f };
							(Local_563[13 /*32*/])->f_9 = 280.1174f;
							(Local_563[7 /*32*/])->f_6 = { func_106(0, 0) };
							(Local_563[7 /*32*/])->f_9 = func_107(0, 0);
							(Local_563[8 /*32*/])->f_6 = { func_108(0, 0) };
							(Local_563[8 /*32*/])->f_9 = func_109(0, 0);
							(Local_1012[0 /*32*/])->f_6 = { 181.2684f, 580.4357f, 118.7471f };
							(Local_1012[0 /*32*/])->f_18 = -77.48f;
							(Local_1012[1 /*32*/])->f_6 = { 183.5339f, 581.9477f, 118.5999f };
							(Local_1012[1 /*32*/])->f_18 = -123.53f;
							(Local_1012[2 /*32*/])->f_6 = { 185.0063f, 578.9863f, 118.4017f };
							(Local_1012[2 /*32*/])->f_18 = -89.38f;
							break;
					}
					break;
				case 15:
					vLocal_1119 = { -3824.969f, -2802.72f, -17.00114f };
					vLocal_1122 = { -3870.967f, -2890.896f, -16.78127f };
					vLocal_1125 = { -3838.878f, -2832.447f, -15.63361f };
					fLocal_1144 = 60f;
					(Local_563[0 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[1 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[3 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[4 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[5 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[6 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[9 /*32*/])->f_6 = { func_104(0, 0) };
					(Local_563[9 /*32*/])->f_9 = func_105(0, 0);
					(Local_563[10 /*32*/])->f_6 = { func_104(0, 1) };
					(Local_563[11 /*32*/])->f_6 = { func_104(0, 2) };
					if (bLocal_1111)
					{
						bLocal_31 = true;
						vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
						(Local_563[2 /*32*/])->f_6 = { -3871.339f, -2832.615f, -15.73324f };
						(Local_563[2 /*32*/])->f_9 = -159.4f;
						(Local_563[12 /*32*/])->f_6 = { -3883.883f, -2838.233f, -15.57545f };
						(Local_563[12 /*32*/])->f_9 = 30.7033f;
						(Local_563[13 /*32*/])->f_6 = { -3859.39f, -2830.15f, -15.62999f };
						(Local_563[13 /*32*/])->f_9 = 24.4774f;
						(Local_563[7 /*32*/])->f_6 = { func_106(0, 0) };
						(Local_563[7 /*32*/])->f_9 = func_107(0, 0);
						(Local_563[8 /*32*/])->f_6 = { func_108(0, 0) };
						(Local_563[8 /*32*/])->f_9 = func_109(0, 0);
						(Local_1012[0 /*32*/])->f_6 = { -3876.951f, -2829.671f, -15.2495f };
						(Local_1012[0 /*32*/])->f_18 = -45.69f;
						(Local_1012[1 /*32*/])->f_6 = { -3880.048f, -2831.679f, -15.1576f };
						(Local_1012[1 /*32*/])->f_18 = -38.49f;
						(Local_1012[2 /*32*/])->f_6 = { -3879.593f, -2829.111f, -15.3223f };
						(Local_1012[2 /*32*/])->f_18 = -64.21f;
					}
					else
					{
						bLocal_31 = true;
						vLocal_1113 = { -3838.43f, -2858.918f, -16.71762f };
						vLocal_1116 = { -2823.664f, -2993.229f, 70.31829f };
						(Local_563[2 /*32*/])->f_6 = { -3879.204f, -2848.889f, -15.84738f };
						(Local_563[2 /*32*/])->f_9 = 13.2f;
						(Local_563[12 /*32*/])->f_6 = { -3892.382f, -2848.434f, -15.41674f };
						(Local_563[12 /*32*/])->f_9 = 38.0125f;
						(Local_563[13 /*32*/])->f_6 = { -3863.656f, -2841.636f, -15.54263f };
						(Local_563[13 /*32*/])->f_9 = 24.0854f;
						(Local_563[7 /*32*/])->f_6 = { func_106(0, 1) };
						(Local_563[7 /*32*/])->f_9 = func_107(0, 1);
						(Local_563[8 /*32*/])->f_6 = { func_108(0, 1) };
						(Local_563[8 /*32*/])->f_9 = func_109(0, 1);
						(Local_1012[0 /*32*/])->f_6 = { -3874.228f, -2852.244f, -15.1037f };
						(Local_1012[0 /*32*/])->f_18 = -57.49f;
						(Local_1012[1 /*32*/])->f_6 = { -3868.626f, -2850.532f, -15.1142f };
						(Local_1012[1 /*32*/])->f_18 = -114.09f;
						(Local_1012[2 /*32*/])->f_6 = { -3871.036f, -2853.409f, -15.0711f };
						(Local_1012[2 /*32*/])->f_18 = -104.67f;
					}
					break;
				case 14:
					vLocal_1119 = { -5271.468f, -3285.091f, -15.916f };
					vLocal_1122 = { -5055.784f, -3094.546f, -18.8199f };
					vLocal_1125 = { -5153.211f, -3178.309f, -18.9399f };
					fLocal_1144 = 200f;
					(Local_563[0 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[1 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[3 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[4 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[5 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[6 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[9 /*32*/])->f_6 = { func_104(0, 0) };
					(Local_563[9 /*32*/])->f_9 = func_105(0, 0);
					(Local_563[10 /*32*/])->f_6 = { func_104(0, 1) };
					(Local_563[11 /*32*/])->f_6 = { func_104(0, 2) };
					vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
					if (bLocal_1111)
					{
						bLocal_31 = true;
						(Local_563[2 /*32*/])->f_6 = { -5112.59f, -3203.114f, -16.43013f };
						(Local_563[2 /*32*/])->f_9 = 45.4f;
						(Local_563[12 /*32*/])->f_6 = { -5099.354f, -3183.325f, -15.7153f };
						(Local_563[12 /*32*/])->f_9 = 30.7033f;
						(Local_563[13 /*32*/])->f_6 = { -5128.237f, -3214.17f, -16.5209f };
						(Local_563[13 /*32*/])->f_9 = 24.4774f;
						(Local_563[7 /*32*/])->f_6 = { func_106(0, 0) };
						(Local_563[7 /*32*/])->f_9 = func_107(0, 0);
						(Local_563[8 /*32*/])->f_6 = { func_108(0, 0) };
						(Local_563[8 /*32*/])->f_9 = func_109(0, 0);
						(Local_1012[0 /*32*/])->f_6 = { -5106.154f, -3197.026f, -16.4802f };
						(Local_1012[0 /*32*/])->f_18 = -45.69f;
						(Local_1012[1 /*32*/])->f_6 = { -5105.599f, -3200.847f, -16.4035f };
						(Local_1012[1 /*32*/])->f_18 = -38.49f;
						(Local_1012[2 /*32*/])->f_6 = { -5111.245f, -3205.606f, -16.6803f };
						(Local_1012[2 /*32*/])->f_18 = -64.21f;
					}
					else
					{
						bLocal_31 = true;
						(Local_563[2 /*32*/])->f_6 = { -5114.546f, -3185.393f, -16.09497f };
						(Local_563[2 /*32*/])->f_9 = 233.2f;
						(Local_563[12 /*32*/])->f_6 = { -5104.41f, -3178.683f, -15.7215f };
						(Local_563[12 /*32*/])->f_9 = 38.0125f;
						(Local_563[13 /*32*/])->f_6 = { -5132.622f, -3208.595f, -16.4846f };
						(Local_563[13 /*32*/])->f_9 = 24.0854f;
						(Local_563[7 /*32*/])->f_6 = { func_106(0, 1) };
						(Local_563[7 /*32*/])->f_9 = func_107(0, 1);
						(Local_563[8 /*32*/])->f_6 = { func_108(0, 1) };
						(Local_563[8 /*32*/])->f_9 = func_109(0, 1);
						(Local_1012[0 /*32*/])->f_6 = { -5119.385f, -3190.128f, -16.4131f };
						(Local_1012[0 /*32*/])->f_18 = 137.49f;
						(Local_1012[1 /*32*/])->f_6 = { -5119.327f, -3186.927f, -16.3683f };
						(Local_1012[1 /*32*/])->f_18 = 124.09f;
						(Local_1012[2 /*32*/])->f_6 = { -5113.213f, -3177.655f, -15.7867f };
						(Local_1012[2 /*32*/])->f_18 = 144.67f;
					}
					break;
				case 13:
					vLocal_1119 = { -4998.487f, -2724.98f, -11.42723f };
					vLocal_1122 = { -5052.787f, -2651.802f, -12.97349f };
					vLocal_1125 = { -5023.507f, -2697.831f, -11.99477f };
					fLocal_1144 = 200f;
					(Local_563[0 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[1 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[3 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[4 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[5 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[6 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
					(Local_563[9 /*32*/])->f_6 = { func_104(0, 0) };
					(Local_563[9 /*32*/])->f_9 = func_105(0, 0);
					(Local_563[10 /*32*/])->f_6 = { func_104(0, 1) };
					(Local_563[11 /*32*/])->f_6 = { func_104(0, 2) };
					vLocal_1116 = { -43.1844f, 1227.338f, 171.2785f };
					if (bLocal_1111)
					{
						bLocal_31 = true;
						(Local_563[2 /*32*/])->f_6 = { -5019.124f, -2668.299f, -13.05953f };
						(Local_563[2 /*32*/])->f_9 = 90.4f;
						(Local_563[12 /*32*/])->f_6 = { -5021.933f, -2641.929f, -12.95086f };
						(Local_563[12 /*32*/])->f_9 = 30.7033f;
						(Local_563[13 /*32*/])->f_6 = { -5021.803f, -2683.599f, -13.09692f };
						(Local_563[13 /*32*/])->f_9 = 24.4774f;
						(Local_563[7 /*32*/])->f_6 = { func_106(0, 0) };
						(Local_563[7 /*32*/])->f_9 = func_107(0, 0);
						(Local_563[8 /*32*/])->f_6 = { func_108(0, 0) };
						(Local_563[8 /*32*/])->f_9 = func_109(0, 0);
						(Local_1012[0 /*32*/])->f_6 = { -5018.246f, -2674.49f, -13.0278f };
						(Local_1012[0 /*32*/])->f_18 = -5.69f;
						(Local_1012[1 /*32*/])->f_6 = { -5016.112f, -2669.641f, -12.9718f };
						(Local_1012[1 /*32*/])->f_18 = 34.49f;
						(Local_1012[2 /*32*/])->f_6 = { -5012.745f, -2675.144f, -12.8842f };
						(Local_1012[2 /*32*/])->f_18 = 6.31f;
					}
					else
					{
						bLocal_31 = true;
						(Local_563[2 /*32*/])->f_6 = { -5032.279f, -2646.633f, -13.3179f };
						(Local_563[2 /*32*/])->f_9 = 273.2f;
						(Local_563[12 /*32*/])->f_6 = { -5028.25f, -2641.403f, -12.9765f };
						(Local_563[12 /*32*/])->f_9 = 38.0125f;
						(Local_563[13 /*32*/])->f_6 = { -5029.025f, -2684.366f, -13.098f };
						(Local_563[13 /*32*/])->f_9 = 24.0854f;
						(Local_563[7 /*32*/])->f_6 = { func_106(0, 1) };
						(Local_563[7 /*32*/])->f_9 = func_107(0, 1);
						(Local_563[8 /*32*/])->f_6 = { func_108(0, 1) };
						(Local_563[8 /*32*/])->f_9 = func_109(0, 1);
						(Local_1012[0 /*32*/])->f_6 = { -5037.902f, -2646.324f, -13.6562f };
						(Local_1012[0 /*32*/])->f_18 = 177.89f;
						(Local_1012[1 /*32*/])->f_6 = { -5038.977f, -2649.755f, -13.6431f };
						(Local_1012[1 /*32*/])->f_18 = -164.09f;
						(Local_1012[2 /*32*/])->f_6 = { -5042.921f, -2645.685f, -13.4425f };
						(Local_1012[2 /*32*/])->f_18 = -135.2f;
					}
					break;
			}
			break;
		case 1:
			(Local_563[0 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[1 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[2 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[3 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[5 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[6 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[7 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[8 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[9 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			(Local_563[10 /*32*/])->f_6 = { Local_369.f_51 + Vector(0f, 5f, 5f) };
			switch (iLocal_32)
			{
				case 0:
				case 11:
					switch (Local_369.f_51.f_4)
					{
						case 0:
							bLocal_31 = true;
							vLocal_1116 = { 2141.377f, -1302.146f, 41.68398f };
							vLocal_1128 = { 1843.454f, -1671.895f, 44.7006f };
							fLocal_1143 = -98.01f;
							if (bLocal_1111)
							{
								vLocal_1131 = { 1924.221f, -1641.241f, 41.58762f };
								vLocal_1134 = { 1903.284f, -1583.715f, 42.71379f };
								(Local_563[4 /*32*/])->f_6 = { 1871.378f, -1662.351f, 43.8739f };
								(Local_563[4 /*32*/])->f_9 = 15.3771f;
								(Local_563[13 /*32*/])->f_6 = { 1909.703f, -1646.869f, 43.1248f };
								(Local_563[13 /*32*/])->f_9 = 24.5139f;
								(Local_563[11 /*32*/])->f_6 = { 1900.934f, -1650.471f, 43.3729f };
								(Local_563[11 /*32*/])->f_9 = 190.545f;
								(Local_563[12 /*32*/])->f_6 = { 1865.06f, -1663.145f, 44.3252f };
								(Local_1012[0 /*32*/])->f_6 = { 1898.4f, -1662.144f, 43.1098f };
								(Local_1012[0 /*32*/])->f_18 = (129.23f + 180f);
								(Local_1012[1 /*32*/])->f_6 = { 1890.971f, -1665.205f, 43.2337f };
								(Local_1012[1 /*32*/])->f_18 = (144.43f + 180f);
								(Local_1012[2 /*32*/])->f_6 = { 1895.872f, -1665.977f, 42.9927f };
								(Local_1012[2 /*32*/])->f_18 = (89.38f + 180f);
							}
							else
							{
								vLocal_1131 = { 1890.692f, -1626.998f, 42.92651f };
								vLocal_1134 = { 1891.603f, -1600.298f, 43.08232f };
								(Local_563[4 /*32*/])->f_6 = { 1910.239f, -1635.109f, 42.9916f };
								(Local_563[4 /*32*/])->f_9 = -156.51f;
								(Local_563[13 /*32*/])->f_6 = { 1873.551f, -1652.01f, 43.0072f };
								(Local_563[13 /*32*/])->f_9 = 24.5139f;
								(Local_563[11 /*32*/])->f_6 = { 1882.713f, -1649.379f, 42.81778f };
								(Local_563[11 /*32*/])->f_9 = 190.545f;
								(Local_563[12 /*32*/])->f_6 = { 1917.991f, -1634.25f, 41.75762f };
								(Local_1012[0 /*32*/])->f_6 = { 1891.051f, -1636.112f, 43.6106f };
								(Local_1012[0 /*32*/])->f_18 = 137.5f;
								(Local_1012[1 /*32*/])->f_6 = { 1896.276f, -1632.239f, 43.4421f };
								(Local_1012[1 /*32*/])->f_18 = 83.94f;
								(Local_1012[2 /*32*/])->f_6 = { 1892.247f, -1632.045f, 43.6731f };
								(Local_1012[2 /*32*/])->f_18 = 115.73f;
							}
							break;
						case 1:
							bLocal_31 = true;
							bLocal_1111 = true;
							vLocal_1116 = { 2141.377f, -1302.146f, 41.68398f };
							vLocal_1128 = { 1036.304f, -1054.688f, 66.5585f };
							fLocal_1143 = 179.72f;
							vLocal_1131 = { 1027.183f, -1093.416f, 64.9603f };
							(Local_563[4 /*32*/])->f_6 = { 1032.645f, -1050.378f, 65.6749f };
							(Local_563[4 /*32*/])->f_9 = 289.4934f;
							(Local_563[13 /*32*/])->f_6 = { 1050.467f, -1080.295f, 65.7264f };
							(Local_563[13 /*32*/])->f_9 = 24.5139f;
							(Local_563[11 /*32*/])->f_6 = { 1033.123f, -1038.004f, 65.6573f };
							(Local_563[11 /*32*/])->f_9 = 190.545f;
							(Local_563[12 /*32*/])->f_6 = { 1036.159f, -1045.918f, 65.5726f };
							(Local_1012[0 /*32*/])->f_6 = { 1034.88f, -1070.718f, 66.813f };
							(Local_1012[0 /*32*/])->f_18 = -160.38f;
							(Local_1012[1 /*32*/])->f_6 = { 1030.864f, -1063.733f, 66.9216f };
							(Local_1012[1 /*32*/])->f_18 = -140.08f;
							(Local_1012[2 /*32*/])->f_6 = { 1031.119f, -1068.586f, 66.8589f };
							(Local_1012[2 /*32*/])->f_18 = 158.58f;
							break;
					}
					break;
			}
			break;
	}
}

void func_41()
{
	if (iLocal_1109 == 0)
	{
		if (bLocal_31)
		{
			Local_1182 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 64, "PBL_ACTION", false, true);
			Local_1182.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 0, "PBL_ACTION", false, true);
		}
		else
		{
			Local_1182 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 0, "PBL_ACTION", false, true);
			Local_1182.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 0, "PBL_ACTION", false, true);
		}
	}
	else
	{
		Local_1182 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_4, 64, "PBL_ACTION", false, true);
		Local_1182.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1182.f_5, 64, "PBL_ACTION", false, true);
	}
}

int func_42(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = { func_110(vParam0, vParam3, fParam10) };
	vVar4 = { func_111(vParam0, vParam3, fParam10) };
	func_112(vParam6, fParam9, 1, 0, 0, bParam11, bParam12);
	FIRE::STOP_FIRE_IN_RANGE(vParam6, fParam9);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	PATHFIND::SET_ROADS_IN_AREA(vVar1, vVar4, 0, 1, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, bParam11, 15);
	return iVar0;
}

void func_43(int iParam0)
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

void func_44()
{
	if (!Local_369.f_161)
	{
		if (func_113(Global_35, Local_369.f_51, 1) < 6400f)
		{
			func_25();
		}
	}
	if (iLocal_1109 == 0)
	{
		if (VEHICLE::_0xF05DFAF1ADFEF2CD(-1464742217, vLocal_1137, iLocal_1112, 1))
		{
			iLocal_1285[0] = VEHICLE::_0xC239DBD9A57D2A71(-1464742217, vLocal_1137, iLocal_1112, 0, 1, 0);
			iLocal_1410 = 1;
		}
		else
		{
			func_25();
		}
	}
	else if (VEHICLE::_0xF05DFAF1ADFEF2CD(-577630801, vLocal_1137, iLocal_1112, 1))
	{
		iLocal_1285[0] = VEHICLE::_0xC239DBD9A57D2A71(-577630801, vLocal_1137, iLocal_1112, 0, 1, 0);
		iLocal_1410 = 1;
	}
	else
	{
		func_25();
	}
}

int func_45()
{
	bool bVar0;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_1182, 1, 0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_1182, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1182);
		}
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_1182.f_1, 1, 0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_1182.f_1, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_1182.f_1);
		}
		return 0;
	}
	if (iLocal_1109 == 1)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1182.f_1, "PBL_BREAKOUT"))
		{
			bVar0 = true;
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1182.f_1, "PBL_BREAKOUT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1182.f_1, "PBL_BREAKOUT");
			}
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1182.f_1, "PBL_EXIT"))
		{
			bVar0 = true;
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1182.f_1, "PBL_EXIT"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1182.f_1, "PBL_EXIT");
			}
		}
		if (bVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
		{
			iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (ENTITY::_0xC2E71D7E0A7B4C89(iVar2))
				{
					iVar1 = 1;
				}
				else
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_47()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[iVar0])))
		{
			if (iVar0 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_1263[iVar0])))
				{
					uLocal_1263[iVar0] = func_114((Local_1012[iVar0 /*32*/])->f_1, Local_1012[iVar0 /*32*/], (Local_1012[iVar0 /*32*/])->f_6, (Local_1012[iVar0 /*32*/])->f_18, 1, 0, 1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[iVar0]), 284, true);
					PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[iVar0]), 358, true);
					return 0;
				}
				uLocal_1248[iVar0] = func_114((Local_563[iVar0 /*32*/])->f_1, Local_563[iVar0 /*32*/], (Local_563[iVar0 /*32*/])->f_6, (Local_563[iVar0 /*32*/])->f_9, 0, 0, 1, 0, 1);
			}
			else
			{
				uLocal_1248[iVar0] = func_114((Local_563[iVar0 /*32*/])->f_1, Local_563[iVar0 /*32*/], (Local_563[iVar0 /*32*/])->f_6, (Local_563[iVar0 /*32*/])->f_9, 0, 0, 1, 0, 1);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 317, false);
			}
			if (func_115(&(uLocal_1248[iVar0]), 0, 1))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_1248[iVar0]), true, true);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 148, true);
				func_116(&(uLocal_1248[iVar0]), 85);
				if (iVar0 < 3)
				{
					if (iLocal_30 == 0)
					{
						func_117(0, &(uLocal_1248[iVar0]));
					}
					else
					{
						func_117(5, &(uLocal_1248[iVar0]));
					}
					if (iVar0 == 2)
					{
						func_118(&(uLocal_1248[iVar0]), joaat("weapon_repeater_carbine"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[2]), 38, true);
					}
					else
					{
						func_118(&(uLocal_1248[iVar0]), joaat("weapon_revolver_cattleman"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (func_115(&(uLocal_1248[0]), 0, 1))
	{
		func_119(&(uLocal_1248[0]), &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[0]), 6, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[0]), true, 0f);
	}
	if (func_115(&(uLocal_1248[1]), 0, 1))
	{
		func_119(&(uLocal_1248[1]), &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[1]), 6, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[1]), true, 0f);
	}
	if (func_115(&(uLocal_1248[2]), 0, 1))
	{
		func_119(&(uLocal_1248[2]), &Local_369, 0);
		PED::SET_PED_HEARING_RANGE(&(uLocal_1248[2]), 14f);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[2]), 6, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[2]), true, 0f);
	}
	return 1;
}

void func_48()
{
	int iVar0;
	int iVar1;

	PED::ADD_RELATIONSHIP_GROUP("REL_TRAIN_HOLDUP", &iVar0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, 707888648);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, 707888648, iVar0);
	if (iLocal_1109 == 0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -1996978098, iVar0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iVar0, -1996978098);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, 1030835986);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar0, 1862763509);
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar1])))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_1248[iVar1]), iVar0);
			}
			iVar1++;
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 555364152, iVar0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iVar0, 555364152);
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar1])))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_1248[iVar1]), iVar0);
			}
			iVar1++;
		}
	}
}

int func_49()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[iVar0])))
		{
			if (iVar0 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_1263[iVar0])))
				{
					uLocal_1263[iVar0] = func_114((Local_1012[iVar0 /*32*/])->f_1, Local_1012[iVar0 /*32*/], (Local_1012[iVar0 /*32*/])->f_6, (Local_1012[iVar0 /*32*/])->f_18, 1, 0, 1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[iVar0]), 284, true);
					return 0;
				}
				uLocal_1248[iVar0] = func_114((Local_563[iVar0 /*32*/])->f_1, Local_563[iVar0 /*32*/], (Local_563[iVar0 /*32*/])->f_6, (Local_563[iVar0 /*32*/])->f_9, 0, 0, 1, 0, 1);
			}
			else
			{
				uLocal_1248[iVar0] = func_114((Local_563[iVar0 /*32*/])->f_1, Local_563[iVar0 /*32*/], (Local_563[iVar0 /*32*/])->f_6, (Local_563[iVar0 /*32*/])->f_9, 0, 0, 1, 0, 1);
			}
			if (func_115(&(uLocal_1248[iVar0]), 0, 1))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_1248[iVar0]), true, true);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 148, true);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 307, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[iVar0]), 54, true);
				if (iVar0 < 5)
				{
					func_117(2, &(uLocal_1248[iVar0]));
					PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[iVar0]), 0, false);
					if (iVar0 == 4 || iVar0 == 3)
					{
						func_118(&(uLocal_1248[iVar0]), joaat("weapon_repeater_carbine"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					else if (iVar0 != 1 && iVar0 != 0)
					{
						func_118(&(uLocal_1248[iVar0]), joaat("weapon_revolver_cattleman"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_1248[iVar0]), joaat("weapon_revolver_cattleman"), false, 0, false, false);
					}
					else
					{
						func_118(&(uLocal_1248[iVar0]), joaat("weapon_revolver_cattleman"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
						WEAPON::_0xFCCC886EDE3C63EC(&(uLocal_1248[iVar0]), 2, 1);
						TASK::TASK_SWAP_WEAPON(&(uLocal_1248[iVar0]), 1, 0, 0, 0);
					}
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 317, false);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (func_115(&(uLocal_1248[2]), 0, 1))
	{
		PED::SET_PED_HEARING_RANGE(&(uLocal_1248[2]), 14f);
		func_119(&(uLocal_1248[2]), &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[2]), 6, true);
		func_116(&(uLocal_1248[2]), 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[2]), true, 0f);
	}
	if (func_115(&(uLocal_1248[0]), 0, 1))
	{
		func_119(&(uLocal_1248[0]), &Local_369, 0);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[0]), 6, true);
		func_116(&(uLocal_1248[0]), 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[0]), true, 0f);
	}
	if (func_115(&(uLocal_1248[1]), 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[1]), 6, true);
		func_116(&(uLocal_1248[1]), 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[1]), true, 0f);
	}
	if (func_115(&(uLocal_1248[4]), 0, 1))
	{
		PED::SET_PED_HEARING_RANGE(&(uLocal_1248[4]), 14f);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[4]), 6, true);
		func_116(&(uLocal_1248[4]), 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[4]), true, 0f);
	}
	if (func_115(&(uLocal_1248[3]), 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[3]), 6, true);
		func_116(&(uLocal_1248[3]), 85);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_1248[3]), true, 0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1292))
	{
		func_119(iLocal_1292, &Local_369, 0);
	}
	return 1;
}

int func_50(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_120(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_121(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_122(&(uParam0->f_5));
			}
			func_71(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_123(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_125(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_126(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_127(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_92(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_128(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::IS_PED_HOGTIED(iVar2) || ((iParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_51()
{
	if (iLocal_1109 == 0)
	{
		if (func_52(&uLocal_1248, &(Local_369.f_5), &iLocal_1332, &uLocal_1416, 0, 6, 1))
		{
			return 1;
		}
	}
	else if ((func_52(&uLocal_1248, &(Local_369.f_5), &iLocal_1332, &uLocal_1416, 0, 10, 1) || PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_1292)) || func_129(Global_35, iLocal_1292, 0))
	{
		return 1;
	}
	return 0;
}

int func_52(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_130(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_58(uParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
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

void func_53(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Local_369.f_46 = 1;
	Local_369.f_44 = 1;
	func_131(Local_317[0 /*17*/], 0, 0);
	func_131(Local_317[1 /*17*/], 0, 0);
	if (iLocal_1109 == 0)
	{
		func_132();
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_1248[0]), 2);
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_1248[1]), 2);
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_1248[2]), 2);
		PED::SET_PED_COMBAT_RANGE(&(uLocal_1248[0]), 0);
		PED::SET_PED_COMBAT_RANGE(&(uLocal_1248[1]), 0);
		PED::SET_PED_COMBAT_RANGE(&(uLocal_1248[2]), 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[0]), 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[1]), 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[2]), 0, false);
		func_133(uLocal_1248[0], Local_33[0 /*21*/], &Local_265, 1, 1);
		func_134(0.1f, 0.2f);
		func_135(&(uLocal_1248[0]), 0);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[0]), 358, false);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[1]), 358, false);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[2]), 358, false);
		func_136(&(uLocal_1248[0]), iLocal_1269[0], 831283580, 580546400, 0, 0);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			func_133(uLocal_1248[iVar0], Local_33[iVar0 /*21*/], &Local_265, 1, 1);
			if (func_115(&(uLocal_1248[iVar0]), 0, 1))
			{
				func_135(&(uLocal_1248[iVar0]), 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[iVar0]), 54, true);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), &(uLocal_1248[iVar0]));
				TASK::TASK_COMBAT_PED(&(uLocal_1248[iVar0]), Global_35, 0, 0);
				if (!MAP::DOES_BLIP_EXIST(&(iLocal_1269[iVar0])))
				{
					func_136(&(uLocal_1248[iVar0]), iLocal_1269[iVar0], 831283580, 580546400, 0, 0);
				}
			}
			iVar0++;
		}
		if (func_115(&(uLocal_1248[2]), 0, 1))
		{
			if (bParam1)
			{
				if (bParam0)
				{
					func_54(&(uLocal_1248[2]), Global_35, &(sLocal_1145[14]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_54(&(uLocal_1248[2]), Global_35, &(sLocal_1145[11]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_1248[2]));
			PED::_0x802092B07E3B1EEA(&(uLocal_1248[2]), Global_36, 3);
		}
	}
	else if (iLocal_1109 == 1)
	{
		if (!(iLocal_1301 >= 3 && !func_138(Local_369.f_5.f_10)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1295, Local_1182))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, "CRATE", iLocal_1295);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_1295);
				}
			}
			iVar1 = -1;
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[0])))
			{
				func_133(uLocal_1248[0], Local_33[0 /*21*/], &Local_265, 1, 1);
				iVar1 = func_139(&(uLocal_1248[0]));
			}
			if (iVar1 != -1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, &(iLocal_1285[iVar1])))
				{
					TASK::_TASK_DISEMBARK_VEHICLE(0, &(iLocal_1285[iVar1]), 20000, 0, 1073741824, 1);
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				if (func_115(&(uLocal_1248[0]), 0, 1))
				{
					func_135(&(uLocal_1248[0]), 0);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[0]), iVar2);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				if (func_115(&(uLocal_1248[1]), 0, 1))
				{
					func_133(uLocal_1248[1], Local_33[1 /*21*/], &Local_265, 1, 1);
					func_135(&(uLocal_1248[1]), 0);
					TASK::TASK_COMBAT_PED(&(uLocal_1248[1]), Global_35, 0, 0);
					func_136(&(uLocal_1248[1]), iLocal_1269[1], 831283580, 580546400, 0, 0);
				}
			}
			else if (!bParam2)
			{
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (func_115(&(uLocal_1248[iVar0]), 0, 1))
					{
						func_133(uLocal_1248[iVar0], Local_33[iVar0 /*21*/], &Local_265, 1, 1);
						func_135(&(uLocal_1248[iVar0]), 0);
						PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 130, true);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						if (PED::IS_PED_IN_VEHICLE(&(uLocal_1248[iVar0]), iLocal_1292, false))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[iVar0]), 1, true);
						}
						TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						if (!AITRANSPORT::_0x619E63980BFC0096(&(uLocal_1248[iVar0]), iLocal_1292, 0))
						{
							TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_1248[iVar0]), iVar2, (IntToFloat(iVar0) * 0.3f), (IntToFloat(iVar0) * 0.3f));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1248[iVar0]), false);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						if (!MAP::DOES_BLIP_EXIST(&(iLocal_1269[iVar0])))
						{
							iLocal_1269[iVar0] = MAP::_0x23F74C2FDA6E7C61(831283580, &(uLocal_1248[iVar0]));
						}
					}
					iVar0++;
				}
			}
			iVar0 = 2;
			while (iVar0 <= 3)
			{
				if (func_115(&(uLocal_1248[iVar0]), 0, 1))
				{
					func_135(&(uLocal_1248[iVar0]), 0);
					func_133(uLocal_1248[iVar0], Local_33[iVar0 /*21*/], &Local_265, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[iVar0]), 54, true);
					TASK::TASK_COMBAT_PED(&(uLocal_1248[iVar0]), Global_35, 16384, 0);
					if (!MAP::DOES_BLIP_EXIST(&(iLocal_1269[iVar0])))
					{
						func_136(&(uLocal_1248[iVar0]), iLocal_1269[iVar0], 831283580, 580546400, 0, 0);
					}
				}
				iVar0++;
			}
			if (func_115(&(uLocal_1248[4]), 0, 1))
			{
				func_135(&(uLocal_1248[4]), 0);
				func_133(uLocal_1248[4], Local_33[4 /*21*/], &Local_265, 1, 1);
				if (bParam1)
				{
					if (bParam0)
					{
						func_54(&(uLocal_1248[4]), Global_35, &(sLocal_1145[14]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_54(&(uLocal_1248[4]), Global_35, &(sLocal_1145[11]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				PED::_0x802092B07E3B1EEA(&(uLocal_1248[4]), Global_36, 3);
				TASK::TASK_COMBAT_PED(&(uLocal_1248[4]), Global_35, 0, 0);
				func_136(&(uLocal_1248[4]), iLocal_1269[4], 831283580, 580546400, 0, 0);
			}
		}
		else
		{
			Local_369.f_46 = 0;
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	func_36(&uLocal_1351);
	func_140(0);
	func_141(4);
}

bool func_54(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_142(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_55()
{
	struct<16> Var0;
	int iVar17;
	int iVar18;

	if (iLocal_1109 == 1)
	{
		func_53(0, 1, 0);
		return;
	}
	Local_369.f_46 = 1;
	func_132();
	if (func_115(&(uLocal_1248[0]), 0, 1))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_1248[0]), 2);
		PED::SET_PED_COMBAT_RANGE(&(uLocal_1248[0]), 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[0]), 0, false);
		Var0 = Global_35;
		Var0.f_6 = 1;
		Var0.f_4 = 1500;
		Var0.f_15 = 1;
		WEAPON::_0x5230D3F6EE56CFE6(&(uLocal_1248[0]), 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar17);
		TASK::TASK_SHOOT_WITH_WEAPON(0, &Var0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar17);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[0]), iVar17);
		TASK::CLEAR_SEQUENCE_TASK(&iVar17);
	}
	if (func_115(&(uLocal_1248[1]), 0, 1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[1]), 54, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[1]), 0, false);
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_1248[1]), 2);
		PED::SET_PED_COMBAT_RANGE(&(uLocal_1248[1]), 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, 0, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_1248[1]), iLocal_1298, 0.5f, 0.9f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	}
	if (func_115(&(uLocal_1248[2]), 0, 1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[2]), 0, false);
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_1248[2]), 2);
		PED::SET_PED_COMBAT_RANGE(&(uLocal_1248[2]), 0);
		PED::_0x802092B07E3B1EEA(&(uLocal_1248[2]), Global_36, 3);
		TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_1248[2]));
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, 0, 1);
		TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, 0, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[2]), iLocal_1298);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
		if (bLocal_1366 && !func_143(&uLocal_1431))
		{
			func_54(&(uLocal_1248[2]), Global_35, &(sLocal_1145[10]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_54(&(uLocal_1248[2]), Global_35, &(sLocal_1145[11]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	iVar18 = 0;
	while (iVar18 <= 2)
	{
		func_133(uLocal_1248[iVar18], Local_33[iVar18 /*21*/], &Local_265, 1, 1);
		if (func_115(&(uLocal_1248[iVar18]), 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(&(iLocal_1269[iVar18])))
			{
				func_136(&(uLocal_1248[iVar18]), iLocal_1269[iVar18], 831283580, 580546400, 0, 0);
			}
		}
		iVar18++;
	}
	if (iLocal_1301 == 1)
	{
		func_144();
	}
	else
	{
		func_36(&uLocal_1351);
	}
	func_140(1);
	func_141(4);
}

void func_56()
{
	int iVar0;

	if (func_145())
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
	TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_369.f_51, 3, 0, -1f, -1, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_115(&(uLocal_1263[iVar0]), 0, 1))
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_1263[iVar0]), iLocal_1298, 0.3f, 0.6f);
		}
		iVar0++;
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
}

int func_57()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_146(Global_35, &(uLocal_1263[iVar0]), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_147(uParam2, 1, iVar0);
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
			if (func_148(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_149(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_150(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_151(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_152(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_153(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_149(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_154(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_155(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_149(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_156(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_149(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_157(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_157(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_149(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_158(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_159(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_160(uParam2, 4000))
				{
					if ((func_161(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_162(uParam2, iParam0)) && func_163(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_149(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_161(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_162(uParam2, iParam0)) && func_163(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_164(iParam0, Global_1935630->f_41))
							{
								func_165();
								*iParam3 = 2;
								func_149(iParam0, uParam2, *iParam3);
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
						if (func_164(iParam0, Global_1935630->f_41))
						{
							func_165();
							*iParam3 = 2;
							func_149(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_166(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_167() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_165();
						*iParam3 = 2;
						func_149(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_168())
					{
						if (func_164(iParam0, Global_1935630->f_42))
						{
							func_165();
							*iParam3 = 2;
							func_149(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_169(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_149(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_170(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_171(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_149(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_172(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_173(uParam2, 4000))
				{
					if (func_174(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_149(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_175(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_149(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_176(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_149(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_59(int iParam0)
{
	int iVar0;

	if (func_115(iParam0, 0, 1))
	{
		iVar0 = func_139(iParam0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		if (iVar0 != -1)
		{
			TASK::_TASK_DISEMBARK_VEHICLE(0, &(iLocal_1285[iVar0]), -1, 0, 1073741824, 1);
		}
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3, 256, 80f, -1, 0);
		TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1298);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	}
}

void func_60()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	float fVar12;

	func_177();
	if ((iLocal_1301 == 1 || iLocal_1301 == 4) || iLocal_1301 == 0)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		if (iLocal_1367 || iLocal_1368)
		{
			return;
		}
	}
	else if (iLocal_1301 >= 3)
	{
		return;
	}
	if (iLocal_1303 == 1)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		iLocal_1267 = &uLocal_1248[2];
		PED::SET_PED_RESET_FLAG(&(uLocal_1248[2]), 42, true);
		if (func_178(iLocal_1267) && func_179(iLocal_1267, &uLocal_1304, &iLocal_1332, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (func_180(iLocal_1267, &(uLocal_1263[iVar1]), 1) < func_180(Global_35, iLocal_1267, 1) && func_181(ENTITY::GET_ENTITY_COORDS(iLocal_1267, true, false), Global_36, ENTITY::GET_ENTITY_COORDS(&(uLocal_1263[iVar1]), true, false), 2f))
				{
					return;
				}
				iVar1++;
			}
			bVar0 = true;
		}
	}
	else if (iLocal_1109 == 1)
	{
		PED::SET_PED_RESET_FLAG(&(uLocal_1248[4]), 42, true);
		PED::SET_PED_RESET_FLAG(&(uLocal_1248[2]), 42, true);
		if (func_182() && func_183(&uLocal_1248, &uLocal_1304, &iLocal_1332, &uLocal_1418, 0, 4, 1))
		{
			if (func_180(Global_35, &(uLocal_1248[4]), 1) < func_180(Global_35, &(uLocal_1248[2]), 1))
			{
				if (!iLocal_1373)
				{
					if (func_184(&(uLocal_1248[4])))
					{
						return;
					}
					iLocal_1267 = &uLocal_1248[4];
					iLocal_1371 = 0;
					bVar0 = true;
				}
			}
			else if (!iLocal_1372)
			{
				if (func_184(&(uLocal_1248[2])))
				{
					return;
				}
				iLocal_1267 = &uLocal_1248[2];
				(Local_563[2 /*32*/])->f_6 = { ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[2]), true, false) };
				(Local_563[2 /*32*/])->f_9 = ENTITY::GET_ENTITY_HEADING(&(uLocal_1248[2]));
				bLocal_1369 = false;
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (!bLocal_1374)
		{
			bLocal_1374 = true;
			if (iLocal_1109 == 1)
			{
				func_68(&(Local_369.f_5), 1);
			}
			func_36(&uLocal_1333);
			if (bLocal_1366)
			{
				if (!func_185(&uLocal_1348))
				{
					func_36(&uLocal_1348);
				}
			}
			fLocal_1425 = func_186(Global_35, iLocal_1267, 0, 1);
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_1267, true, false) };
			vVar5 = { func_187(Global_36 - vVar2) };
			vVar8 = { vVar2 + vVar5 * Vector(4f, 4f, 4f) };
			func_188(&vVar8, 15, 10, 0);
			PED::_0x8ACC0506743A8A5C(iLocal_1267, -1962193144, 1, -1082130432);
			if (func_186(Global_35, iLocal_1267, 0, 1) < (4f + 1f))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_1267, 0))
				{
					PED::_0x802092B07E3B1EEA(iLocal_1267, Global_36, 3);
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_1267, Global_35, -1, 0, 1);
				}
				else
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_1267, Local_1182.f_1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182.f_1, func_189(2), &(uLocal_1248[2]));
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
					TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_Panic", 0.5f, 0, 4);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_1267, iLocal_1298);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
				}
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_1267, 0))
			{
				PED::_0x802092B07E3B1EEA(iLocal_1267, Global_36, 3);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, 0, 1);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar8, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1267, iLocal_1298);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, 0, 1);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar8, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1267, iLocal_1298);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
			}
			if (iLocal_1109 == 0)
			{
				func_136(&(uLocal_1248[2]), iLocal_1269[2], 831283580, 580546400, 0, 0);
				iVar11 = 3;
				while (iVar11 <= 6)
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(&(uLocal_1248[iVar11]), &Local_1222);
					iVar11++;
				}
			}
			else if (iLocal_1109 == 1)
			{
				if (iLocal_1267 == &uLocal_1248[4])
				{
					func_136(&(uLocal_1248[4]), iLocal_1269[4], 831283580, 580546400, 0, 0);
				}
				else if (iLocal_1267 == &uLocal_1248[2])
				{
					func_136(&(uLocal_1248[2]), iLocal_1269[2], 831283580, 580546400, 0, 0);
				}
				iVar11 = 5;
				while (iVar11 <= 10)
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(&(uLocal_1248[iVar11]), &Local_1222);
					iVar11++;
				}
			}
			func_190(Local_265[0 /*17*/], "RE_INTER_DEFUSE");
			func_131(Local_265[0 /*17*/], 1, 0);
			iLocal_1303 = 1;
		}
		else if (!bLocal_1379 && iLocal_1109 != 1)
		{
			if (!bLocal_1366)
			{
				fVar12 = func_191(Global_35, Local_369.f_51, 0);
				if (fVar12 > (fLocal_1425 + 5f))
				{
					return;
				}
			}
			func_55();
		}
	}
}

int func_61()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	struct<14> Var8;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;

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
	switch (iLocal_1301)
	{
		case 0:
			if (iLocal_1109 == 0)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1182))
				{
					vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(&(iLocal_1285[2]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(&(iLocal_1285[2]), "chassis_dummy")) };
					fVar3 = ENTITY::GET_ENTITY_HEADING(&(iLocal_1285[2]));
					func_188(&vVar0, 15, 10, 0);
					if (bLocal_1111)
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182, vVar0, 0f, 0f, fVar3, 2);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182, vVar0, 0f, 0f, (fVar3 + 180f), 2);
					}
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1182.f_1))
				{
					if (bLocal_1111)
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182.f_1, 0f, 0f, -0.1812f, 0f, 0f, 0f, 2);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182.f_1, 0f, 0f, -0.1812f, 0f, 0f, 180f, 2);
					}
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1182.f_1, &(iLocal_1285[2]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(&(iLocal_1285[2]), "chassis_dummy"));
				}
				if (func_115(&(uLocal_1248[2]), 0, 1))
				{
					func_204(&(uLocal_1248[2]), -258459266, -1, 0, 0, -1082130432);
					TASK::TASK_PLAY_ANIM(&(uLocal_1248[2]), &(Local_1190[5 /*2*/]), (Local_1190[5 /*2*/])->f_1, 1090519040, -1056964608, -1, 67108881, 0, 0, 2, 0, 0, 0);
				}
				iLocal_1293 = VOLUME::_0xB3FB80A32BAE3065(ENTITY::GET_ENTITY_COORDS(&(iLocal_1285[2]), true, false), 0f, 0f, 0f, 20f, 20f, 10f);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1293, 10208, 0, 0, -1, -1, 0);
			}
			else if (iLocal_1109 == 1)
			{
				if (func_115(&(uLocal_1248[4]), 0, 1))
				{
					func_204(&(uLocal_1248[4]), -258459266, -1, 0, 0, -1082130432);
				}
				VEHICLE::_0x762FDC4C19E5A981(&(iLocal_1285[3]), 0);
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1182))
				{
					vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(&(iLocal_1285[3]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(&(iLocal_1285[3]), "chassis_dummy")) };
					fVar7 = ENTITY::GET_ENTITY_HEADING(&(iLocal_1285[3]));
					func_188(&vVar4, 15, 10, 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182, vVar4, 0f, 0f, fVar7, 2);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1182.f_1))
				{
					vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(&(iLocal_1285[2]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(&(iLocal_1285[2]), "chassis_dummy")) };
					vVar4 = { vVar4 - Vector(-0.0882f, 0f, 0f) };
					fVar7 = ENTITY::GET_ENTITY_HEADING(&(iLocal_1285[2]));
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1182.f_1, vVar4, 0f, 0f, (fVar7 - 180f), 2);
				}
				iLocal_1293 = VOLUME::_0xB3FB80A32BAE3065(ENTITY::GET_ENTITY_COORDS(&(iLocal_1285[2]), true, false), 0f, 0f, 0f, 40f, 40f, 10f);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_1293, 10208, 0, 0, -1, -1, 0);
			}
			func_205();
			ANIMSCENE::START_ANIM_SCENE(Local_1182);
			ANIMSCENE::START_ANIM_SCENE(Local_1182.f_1);
			Var8.f_6 = -1082130432;
			Var8.f_7 = -1082130432;
			Var8.f_8 = -1082130432;
			Var8.f_9 = -1082130432;
			Var8.f_10 = -1082130432;
			Var8.f_11 = -1082130432;
			Var8.f_12 = -1;
			Var8.f_13 = -1;
			Var8 = -1215290486;
			Var8.f_8 = 80f;
			Var8.f_7 = 80f;
			Var8.f_9 = 40f;
			Var8.f_3 = { Local_369.f_51 };
			Var8.f_6 = 0f;
			iLocal_1411 = EVENT::_0xCA1315C33B9A2847(&Var8);
			if (iLocal_1109 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_1285[5])))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(&(iLocal_1285[5]), 0, false, true);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(&(iLocal_1285[5]), 1, false, true);
				}
			}
			else if (iLocal_1109 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_1285[3])))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(&(iLocal_1285[3]), 0, false, true);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(&(iLocal_1285[3]), 2, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1292))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_1292, 5, false, true);
				}
			}
			func_206();
			func_207(&uLocal_1339, 0);
			func_141(1);
			break;
		case 1:
			if (func_208(&Local_369, 1f, 60f, 55f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				if (iLocal_1109 == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182, "bool", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182.f_1, "bool", true, false);
					func_54(&(uLocal_1248[0]), 0, &(sLocal_1145[2]), 0, -1082130432, 0, 0, 0, 1, 0, 1, -500314840, 1, 0, 0);
					func_209(1515458263, &(uLocal_1248[0]), 1);
					Local_369.f_44 = 1;
					func_132();
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182, "Base_Bool", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182.f_1, "Base_Bool", true, false);
				}
				Local_369.f_45 = 1;
				AUDIO::_0x05D6195FB4D428F4(-1907382514);
				func_141(2);
			}
			else
			{
				func_210();
			}
			break;
		case 2:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (iLocal_1109 == 0)
			{
				func_211();
				func_212();
				if ((iLocal_1367 && iLocal_1368) && iLocal_1371)
				{
					func_213();
					iVar25 = func_214();
					if (!ENTITY::IS_ENTITY_DEAD(iVar25))
					{
						PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[0]), 358, false);
						PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[1]), 358, false);
						PED::SET_PED_CONFIG_FLAG(&(uLocal_1263[2]), 358, false);
						func_76(&iLocal_1296, vLocal_1119, vLocal_1122, 0, 0);
						func_68(&(Local_369.f_5), 1);
						iLocal_1284 = PED::CREATE_GROUP(0);
						PED::SET_PED_AS_GROUP_LEADER(iVar25, iLocal_1284, 0);
						PED::SET_GROUP_FORMATION(iLocal_1284, 10);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
						if (!func_38(vLocal_1113))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1113, 2.001f, -1, 3f, true, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_1116, 5f, 2.001f, 8192, 0);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_1116, 15f, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
						TASK::TASK_PERFORM_SEQUENCE(iVar25, iLocal_1298);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
						PED::SET_PED_KEEP_TASK(iVar25, true);
						iVar26 = 0;
						while (iVar26 <= 2)
						{
							if (&uLocal_1248[iVar26] != iVar25)
							{
								PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_1248[iVar26]), iLocal_1284);
								PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar26]), 279, true);
							}
							iVar26++;
						}
						if (iLocal_30 == 5)
						{
							func_16(&(Local_369.f_5), 0);
						}
						func_36(&uLocal_1336);
						func_141(3);
					}
				}
			}
			else if (iLocal_1109 == 1)
			{
				func_215();
				func_216();
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[1]), -994272606))
				{
					if (!func_217() && (bLocal_1374 || (func_182() && func_218(&uLocal_1248, &uLocal_1304, &iLocal_1332, 0, 4))))
					{
						if (!func_219(iLocal_1267, 0))
						{
							func_54(&(uLocal_1248[1]), 0, &(sLocal_1145[13]), 0, -1082130432, 2, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
						}
					}
					else
					{
						func_54(&(uLocal_1248[1]), 0, &(sLocal_1145[12]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_220();
				func_221();
				func_222();
				if ((((iLocal_1367 && iLocal_1368) && bLocal_1369) && iLocal_1370) && iLocal_1371)
				{
					func_213();
					iVar27 = func_223();
					if (!ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						if (!iLocal_1381)
						{
							func_224();
						}
						else if (func_225(&uLocal_1336, 1.5f))
						{
							func_226();
							iLocal_1284 = PED::CREATE_GROUP(0);
							PED::SET_PED_AS_GROUP_LEADER(iVar27, iLocal_1284, 0);
							iVar28 = 2;
							while (iVar28 <= 4)
							{
								if (&uLocal_1248[iVar28] != iVar27)
								{
									PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_1248[iVar28]), iLocal_1284);
									PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar28]), 279, true);
								}
								iVar28++;
							}
							PED::SET_GROUP_FORMATION(iLocal_1284, 10);
							func_227(iLocal_1269[2]);
							func_227(iLocal_1269[4]);
							if (PED::IS_SCENARIO_BLOCKING_AREA_VALID(iLocal_1296))
							{
								func_76(&iLocal_1296, vLocal_1119, vLocal_1122, 0, 0);
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
							if (!func_38(vLocal_1131))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, false, 40000f);
							}
							if (!func_38(vLocal_1134))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, false, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_1116, 5f, 1.75f, 12800, 0);
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_1116, 15f, 0, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(iVar27, iLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
							PED::SET_PED_KEEP_TASK(iVar27, true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
							if (!func_38(vLocal_1131))
							{
								TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1131, 6f, 12f, 524419);
							}
							if (!func_38(vLocal_1134))
							{
								TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1134, 7f, 12f, 524311);
							}
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_1292, vLocal_1116, 7f, 524483, 3, 10f, 4f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[0]), iLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
							func_68(&(Local_369.f_5), 0);
							func_228();
							func_36(&uLocal_1336);
							func_141(3);
						}
					}
				}
			}
			break;
		case 4:
			if (!func_185(&uLocal_1363))
			{
				func_36(&uLocal_1363);
			}
			else if (iLocal_1421 < 2)
			{
				if (func_225(&uLocal_1363, fLocal_1430))
				{
					if (iLocal_1109 == 0)
					{
						if (func_54(&(uLocal_1248[(3 + iLocal_1421)]), 0, "PANIC_COMMUNICATE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_1421++;
							fLocal_1430 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
							func_36(&uLocal_1363);
						}
					}
					else if (func_54(&(uLocal_1248[(5 + iLocal_1421)]), 0, "PANIC_COMMUNICATE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_1421++;
						fLocal_1430 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
						func_36(&uLocal_1363);
					}
				}
			}
			if (iLocal_1109 == 0)
			{
				if (!iLocal_1396)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_1248[2]));
					}
					iLocal_1396 = 1;
				}
				func_229();
				iVar29 = 0;
				while (iVar29 <= 2)
				{
					if (func_115(&(uLocal_1248[iVar29]), 0, 1))
					{
						if (!MAP::DOES_BLIP_EXIST(&(iLocal_1269[iVar29])))
						{
							if (PED::IS_PED_IN_COMBAT(&(uLocal_1248[iVar29]), Global_35))
							{
								func_136(&(uLocal_1248[iVar29]), iLocal_1269[iVar29], 831283580, 580546400, 0, 0);
							}
						}
						if (func_230(Global_35, &(iLocal_1285[0]), -1464742217) && func_180(&(uLocal_1248[iVar29]), &(iLocal_1285[0]), 1) > 10000f)
						{
							func_231();
							AUDIO::_0x05D6195FB4D428F4(334660039);
							func_232();
							func_141(6);
						}
						bVar30 = true;
					}
					else
					{
						func_227(iLocal_1269[iVar29]);
					}
					iVar29++;
				}
			}
			else if (iLocal_1109 == 1)
			{
				iVar29 = 0;
				while (iVar29 <= 4)
				{
					if (func_115(&(uLocal_1248[iVar29]), 0, 1))
					{
						if (!MAP::DOES_BLIP_EXIST(&(iLocal_1269[iVar29])))
						{
							if (PED::IS_PED_IN_COMBAT(&(uLocal_1248[iVar29]), Global_35))
							{
								func_136(&(uLocal_1248[iVar29]), iLocal_1269[iVar29], 831283580, 580546400, 0, 0);
							}
						}
						if (func_230(Global_35, &(iLocal_1285[0]), -577630801) && func_180(&(uLocal_1248[iVar29]), &(iLocal_1285[0]), 1) > 10000f)
						{
							func_231();
							AUDIO::_0x05D6195FB4D428F4(334660039);
							func_232();
							func_141(6);
						}
						bVar30 = true;
					}
					else
					{
						func_227(iLocal_1269[iVar29]);
					}
					iVar29++;
				}
			}
			if (bVar30)
			{
			}
			else
			{
				func_56();
				func_36(&uLocal_1342);
				AUDIO::_0x05D6195FB4D428F4(334660039);
				if (!bLocal_1399)
				{
					if (!(iLocal_1109 == 0 && !ENTITY::DOES_ENTITY_EXIST(func_233())) && !iLocal_1405)
					{
						func_234(13, 0, 0, 0, &(uLocal_1248[3]), 0, 1065353216, 0);
					}
				}
				func_141(6);
				Jump @3865; //curOff = 3019
				if (iLocal_1109 == 0)
				{
					func_213();
					func_212();
					if (!func_235(50f))
					{
						func_140(0);
						AUDIO::_0x05D6195FB4D428F4(334660039);
						func_141(5);
					}
				}
				else if (iLocal_1109 == 1)
				{
					func_215();
					func_236();
					func_213();
					if (func_225(&uLocal_1336, 5f) && !func_237())
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1182.f_1, "Cower_Bool", true, false);
						func_20(&uLocal_1304, 15f);
						func_18(&uLocal_1304, 0);
						func_232();
						func_141(5);
						iLocal_1405 = 1;
					}
				}
				Jump @3865; //curOff = 3161
				func_236();
				func_238();
				if (iLocal_1109 == 0)
				{
					if (iLocal_1109 == 0)
					{
						if (!iLocal_1397 && (ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[8])) || func_239(&(uLocal_1248[8]), &(iLocal_1285[4]))))
						{
							PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[8]), 133, false);
							iLocal_1397 = 1;
						}
						if (!iLocal_1398 && (ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[7])) || func_239(&(uLocal_1248[7]), &(iLocal_1285[5]))))
						{
							PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[7]), 133, false);
							iLocal_1398 = 1;
						}
						if (iLocal_1397 && iLocal_1398)
						{
							func_141(6);
						}
					}
				}
				else if (iLocal_1109 == 1)
				{
					func_240();
					func_241();
					func_213();
					if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(Local_1182.f_1, 0))
					{
						func_141(6);
					}
				}
				Jump @3865; //curOff = 3370
				func_236();
				func_241();
				func_238();
				if (iLocal_1109 == 0)
				{
					func_229();
					if (!iLocal_1397 && (ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[8])) || func_239(&(uLocal_1248[8]), &(iLocal_1285[4]))))
					{
						PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[8]), 133, false);
						iLocal_1397 = 1;
					}
					if (!iLocal_1398 && (ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[7])) || func_239(&(uLocal_1248[7]), &(iLocal_1285[5]))))
					{
						PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[7]), 133, false);
						iLocal_1398 = 1;
					}
				}
				if (!iLocal_1386 && !bLocal_1399)
				{
					if (func_225(&uLocal_1342, 2.8f) && func_242(-3f, 1, 0, 0))
					{
						iVar31 = func_243();
						if (!PED::_0x5102307CE88798EB(iVar31))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar31);
						}
						if (PED::IS_TRACKED_PED_VISIBLE(iVar31))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar31) && func_186(Global_35, iVar31, 1, 1) < 30f)
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar32);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 524288, -1082130432, -1, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar32);
								TASK::TASK_PERFORM_SEQUENCE(iVar31, iVar32);
								TASK::CLEAR_SEQUENCE_TASK(&iVar32);
								if (iLocal_1109 == 0 && (iVar31 == &uLocal_1248[3] || iVar31 == &uLocal_1248[5]))
								{
									func_54(iVar31, Global_35, &(sLocal_1145[21]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else
								{
									func_54(iVar31, Global_35, "RELIEVED_REACT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_1386 = 1;
							}
						}
					}
				}
				func_244();
				if (func_180(Global_35, &(iLocal_1285[0]), 0) > 22500f && !func_245(120f))
				{
					return 1;
				}
			}
			return 0;
		}

int func_62(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_246())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_247(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_92(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_92(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_92(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_248(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_248(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

void func_63(var uParam0)
{
	func_249(uParam0, 0);
	func_6(uParam0, 0);
	func_12(uParam0, 1);
	func_8(uParam0, 1);
	func_250(uParam0, 0);
	func_251(uParam0, 1);
	func_252(uParam0, 1, 1, 1);
}

var func_64(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_253(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_254(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_253(sVar0, iParam1, 0, 0, 1, 1);
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 8);
	}
	else
	{
		func_70(uParam0, 8);
	}
}

void func_66(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 32);
	}
	else
	{
		func_70(uParam0, 32);
	}
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 64);
	}
	else
	{
		func_70(uParam0, 64);
	}
}

void func_68(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 1024);
	}
	else
	{
		func_70(uParam0, 1024);
	}
}

void func_69(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 1048576);
	}
	else
	{
		func_70(uParam0, 1048576);
	}
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_72(vector3 vParam0)
{
	return func_255(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_73(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0]))
		{
			(*uParam1)[iVar0] = uParam0;
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0]);
			return;
		}
		iVar0++;
	}
}

void func_74(var uParam0, int iParam1)
{
	func_256(uParam0, iParam1);
}

void func_75()
{
	int iVar0;
	int iVar1;

	if (iLocal_1109 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (iVar0 < 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[iVar0]), 20000, -1, 1.5f, 1, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 8192, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[iVar0]), iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
			}
			else
			{
				func_257(&(uLocal_1248[iVar0]), 0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[0])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_1292, 20000, -1, 2f, 1, 0);
			if (!func_38(vLocal_1131))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1131, 6f, 12f, 524419);
			}
			if (!func_38(vLocal_1134))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT(0, iLocal_1292, vLocal_1134, 7f, 12f, 524311);
			}
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_1292, vLocal_1116, 7f, 524483, 3, 10f, 4f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[0]), iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[1])))
		{
			TASK::TASK_ENTER_VEHICLE(&(uLocal_1248[1]), iLocal_1292, 10000, -2, 2f, 513, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[0]), -1, -1, 1.5f, 1, 0, 0);
			if (!func_38(vLocal_1131))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, false, 40000f);
			}
			if (!func_38(vLocal_1134))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, false, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[2]), iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[3])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[2]), -1, -1, 1.5f, 1, 0, 0);
			if (!func_38(vLocal_1131))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, false, 40000f);
			}
			if (!func_38(vLocal_1134))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, false, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[3]), iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[4])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[1]), -1, -1, 2f, 1, 0, 0);
			if (!func_38(vLocal_1131))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1131, 1.75f, 20000, 0.25f, false, 40000f);
			}
			if (!func_38(vLocal_1134))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1134, 1.75f, 20000, 0.25f, false, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[4]), iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			func_257(&(uLocal_1248[iVar0]), 0, 0);
			iVar0++;
		}
	}
}

void func_76(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;

	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { func_110(vParam1, vParam4, fParam7) };
	vVar3 = { func_111(vParam1, vParam4, fParam7) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 0, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*iParam0, bParam8);
}

void func_77(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_78(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_258(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_259(uParam0->f_3, 524288);
		}
	}
	if (func_115(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_115(uParam1[iVar0], 0, 0))
			{
				func_260(uParam1[iVar0], bVar3);
				if (func_261(uParam0, (*uParam1)[iVar0]))
				{
					func_262((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_115(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], false, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], false, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_264(uParam1[iVar0], 1073741824, func_263(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_265(uParam0);
	}
	func_266(uParam0);
	if (!uParam0->f_186)
	{
		func_120(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_267(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_268(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

int func_79(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_269(iVar0))
	{
		return 0;
	}
	if (func_270(iVar0, 1) || func_270(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_271(uParam0->f_3);
	iVar1 = func_272(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_RESERVE_AMBIENT_PEDS(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_81(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_1109 == 0)
	{
		if ((iLocal_32 == 15 || iLocal_32 == 14) || iLocal_32 == 13)
		{
			iLocal_30 = 5;
			(Local_563[0 /*32*/])->f_1 = joaat("g_m_m_unibanditos_01");
			(Local_563[0 /*32*/])->f_3 = -1140223483;
			(Local_563[1 /*32*/])->f_1 = joaat("g_m_m_unibanditos_01");
			(Local_563[1 /*32*/])->f_3 = 786364334;
			(Local_563[2 /*32*/])->f_1 = joaat("g_m_m_unibanditos_01");
			(Local_563[2 /*32*/])->f_3 = 546888482;
			StringCopy(&((Local_563[0 /*32*/])->f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
			StringCopy(&((Local_563[1 /*32*/])->f_23), "1023_G_M_M_UniBanditos_01_WHITE_01", 64);
			StringCopy(&((Local_563[2 /*32*/])->f_23), "0135_G_M_M_UniCriminals_01_HISPANIC_02", 64);
			(Local_563[3 /*32*/])->f_1 = -1182404303;
			(Local_563[3 /*32*/])->f_3 = -1380599125;
			(Local_563[4 /*32*/])->f_1 = -1182404303;
			(Local_563[4 /*32*/])->f_3 = -1610932426;
			(Local_563[5 /*32*/])->f_1 = -1182404303;
			(Local_563[5 /*32*/])->f_3 = -2139824094;
			(Local_563[6 /*32*/])->f_1 = -1182404303;
			(Local_563[6 /*32*/])->f_3 = 1924351135;
			StringCopy(&((Local_563[3 /*32*/])->f_23), "1032_S_M_M_CoachTaxiDriver_01_WHITE_04", 64);
			StringCopy(&((Local_563[4 /*32*/])->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&((Local_563[5 /*32*/])->f_23), "1032_S_M_M_CoachTaxiDriver_01_WHITE_04", 64);
			StringCopy(&((Local_563[6 /*32*/])->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&((Local_563[7 /*32*/])->f_23), "PC_TOWNSPERSON", 64);
			StringCopy(&((Local_563[8 /*32*/])->f_23), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
			(Local_563[7 /*32*/])->f_1 = 1066028917;
			(Local_563[7 /*32*/])->f_3 = -2146174609;
			(Local_563[8 /*32*/])->f_1 = -1182404303;
			(Local_563[8 /*32*/])->f_3 = 1250207451;
			(Local_563[9 /*32*/])->f_1 = -1182404303;
			(Local_563[9 /*32*/])->f_3 = -1251044040;
			(Local_563[10 /*32*/])->f_1 = -1182404303;
			(Local_563[10 /*32*/])->f_3 = 1835238691;
			(Local_563[11 /*32*/])->f_1 = -1182404303;
			(Local_563[11 /*32*/])->f_3 = -684566337;
			(Local_563[13 /*32*/])->f_1 = -1182404303;
			(Local_563[13 /*32*/])->f_3 = 1691538330;
			(Local_563[12 /*32*/])->f_1 = -1182404303;
			(Local_563[12 /*32*/])->f_3 = -492406189;
			(Local_1012[0 /*32*/])->f_1 = func_273(5, 0, 0);
			(Local_1012[1 /*32*/])->f_1 = func_273(5, 1, 0);
			(Local_1012[2 /*32*/])->f_1 = func_273(5, 2, 0);
		}
		else
		{
			iLocal_30 = 0;
			(Local_563[0 /*32*/])->f_1 = joaat("g_m_m_uniduster_01");
			(Local_563[0 /*32*/])->f_3 = -1140223483;
			(Local_563[1 /*32*/])->f_1 = joaat("g_m_m_uniduster_01");
			(Local_563[1 /*32*/])->f_3 = 786364334;
			(Local_563[2 /*32*/])->f_1 = joaat("g_m_m_uniduster_01");
			(Local_563[2 /*32*/])->f_3 = 546888482;
			StringCopy(&((Local_563[0 /*32*/])->f_23), "0357_G_M_M_UniDuster_02_WHITE_01", 64);
			StringCopy(&((Local_563[1 /*32*/])->f_23), "0361_G_M_M_UniDuster_03_WHITE_01", 64);
			StringCopy(&((Local_563[2 /*32*/])->f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			(Local_563[3 /*32*/])->f_1 = -1182404303;
			(Local_563[3 /*32*/])->f_3 = -929992610;
			(Local_563[4 /*32*/])->f_1 = -1182404303;
			(Local_563[4 /*32*/])->f_3 = -1161046829;
			(Local_563[5 /*32*/])->f_1 = -1182404303;
			(Local_563[5 /*32*/])->f_3 = -1390102139;
			(Local_563[6 /*32*/])->f_1 = -1182404303;
			(Local_563[6 /*32*/])->f_3 = -1654253048;
			StringCopy(&((Local_563[3 /*32*/])->f_23), "0418_A_M_M_SclRoughTravellers_01_WHITE_01", 64);
			StringCopy(&((Local_563[4 /*32*/])->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&((Local_563[5 /*32*/])->f_23), "0418_A_M_M_SclRoughTravellers_01_WHITE_01", 64);
			StringCopy(&((Local_563[6 /*32*/])->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
			StringCopy(&((Local_563[7 /*32*/])->f_23), "0738_S_F_M_MaPWorker_01_WHITE_03", 64);
			StringCopy(&((Local_563[8 /*32*/])->f_23), "0789_A_M_M_LowerSDTownfolk_02_BLACK_01", 64);
			(Local_563[7 /*32*/])->f_1 = 1066028917;
			(Local_563[7 /*32*/])->f_3 = 666290358;
			(Local_563[8 /*32*/])->f_1 = -1182404303;
			(Local_563[8 /*32*/])->f_3 = 1019382615;
			(Local_563[9 /*32*/])->f_1 = -1182404303;
			(Local_563[9 /*32*/])->f_3 = -1069831470;
			(Local_563[10 /*32*/])->f_1 = -1182404303;
			(Local_563[10 /*32*/])->f_3 = 264620465;
			(Local_563[11 /*32*/])->f_1 = -1182404303;
			(Local_563[11 /*32*/])->f_3 = -474320433;
			(Local_563[13 /*32*/])->f_1 = -1182404303;
			(Local_563[13 /*32*/])->f_3 = 1913056770;
			(Local_563[12 /*32*/])->f_1 = -1182404303;
			(Local_563[12 /*32*/])->f_3 = -788834563;
			(Local_1012[0 /*32*/])->f_1 = func_273(0, 0, 0);
			(Local_1012[1 /*32*/])->f_1 = func_273(0, 1, 0);
			(Local_1012[2 /*32*/])->f_1 = func_273(0, 2, 0);
		}
		iVar0 = 0;
		while (iVar0 < 14)
		{
			func_274(&((Local_563[iVar0 /*32*/])->f_22));
			iVar0++;
		}
	}
	else
	{
		iLocal_30 = 2;
		(Local_563[0 /*32*/])->f_1 = joaat("g_m_o_uniexconfeds_01");
		(Local_563[0 /*32*/])->f_3 = -1140223483;
		(Local_563[1 /*32*/])->f_1 = joaat("g_m_y_uniexconfeds_01");
		(Local_563[1 /*32*/])->f_3 = 786364334;
		(Local_563[2 /*32*/])->f_1 = joaat("g_m_y_uniexconfeds_01");
		(Local_563[2 /*32*/])->f_3 = 546888482;
		(Local_563[3 /*32*/])->f_1 = joaat("g_m_y_uniexconfeds_01");
		(Local_563[3 /*32*/])->f_3 = -209682190;
		(Local_563[4 /*32*/])->f_1 = joaat("g_m_y_uniexconfeds_01");
		(Local_563[4 /*32*/])->f_3 = 1695015943;
		StringCopy(&((Local_563[4 /*32*/])->f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
		StringCopy(&((Local_563[3 /*32*/])->f_23), "0179_G_M_Y_UniExConfeds_01_WHITE_03", 64);
		StringCopy(&((Local_563[0 /*32*/])->f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
		StringCopy(&((Local_563[1 /*32*/])->f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
		StringCopy(&((Local_563[2 /*32*/])->f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
		(Local_1012[0 /*32*/])->f_1 = func_273(2, 0, 0);
		(Local_1012[1 /*32*/])->f_1 = func_273(2, 1, 0);
		(Local_1012[2 /*32*/])->f_1 = func_273(2, 2, 0);
		(Local_563[5 /*32*/])->f_1 = -1182404303;
		(Local_563[5 /*32*/])->f_3 = -579908690;
		StringCopy(&((Local_563[5 /*32*/])->f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		(Local_563[6 /*32*/])->f_1 = -1182404303;
		(Local_563[6 /*32*/])->f_3 = -843731909;
		StringCopy(&((Local_563[6 /*32*/])->f_23), "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01", 64);
		(Local_563[7 /*32*/])->f_1 = -1182404303;
		(Local_563[7 /*32*/])->f_3 = 1996914394;
		StringCopy(&((Local_563[7 /*32*/])->f_23), "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01", 64);
		(Local_563[8 /*32*/])->f_1 = -1182404303;
		(Local_563[8 /*32*/])->f_3 = 1498104676;
		StringCopy(&((Local_563[8 /*32*/])->f_23), "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01", 64);
		(Local_563[9 /*32*/])->f_1 = -1182404303;
		(Local_563[9 /*32*/])->f_3 = -1804355148;
		StringCopy(&((Local_563[9 /*32*/])->f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		(Local_563[10 /*32*/])->f_1 = -1182404303;
		(Local_563[10 /*32*/])->f_3 = -2068964823;
		StringCopy(&((Local_563[10 /*32*/])->f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		(Local_563[11 /*32*/])->f_1 = -1182404303;
		(Local_563[11 /*32*/])->f_3 = 1921954230;
		(Local_563[12 /*32*/])->f_1 = -1182404303;
		(Local_563[12 /*32*/])->f_3 = 1672483833;
		(Local_563[13 /*32*/])->f_1 = -1182404303;
		(Local_563[13 /*32*/])->f_3 = -442025666;
		iVar1 = 0;
		while (iVar1 < 14)
		{
			func_274(&((Local_563[iVar1 /*32*/])->f_22));
			iVar1++;
		}
	}
	*uParam0 = func_275(iLocal_30, -1);
	if (*uParam0 && iLocal_30 != 0)
	{
		*uParam0 = 0;
	}
	func_276(&Local_369, iLocal_30);
}

void func_82()
{
	sLocal_1145[33] = "WARNING";
	if (iLocal_1109 == 0)
	{
		if (iLocal_30 == 0)
		{
			sLocal_1145[0] = "RE_TGH_MTN_V1_INTRO";
			sLocal_1145[1] = "RE_TGH_MTN_V1_DONT_KILL";
			sLocal_1145[2] = "RE_TGH_MTN_V1_GET_DOWN";
			sLocal_1145[3] = "RE_TGH_MTN_V1_ROBBING";
			sLocal_1145[4] = "RE_TGH_MTN_V1_BEG";
			sLocal_1145[5] = "RE_TGH_MTN_V1_KILL";
			sLocal_1145[6] = "RE_TGH_MTN_V1_AWAY";
			sLocal_1145[7] = "HEADS_UP_CONFRONT";
			sLocal_1145[8] = "RE_TGH_MTN_V1_AWAY_FEUD";
			sLocal_1145[11] = "RE_TGH_MTN_V1_ATTACK";
			sLocal_1145[15] = "RE_TGH_MTN_V1_RIDE_OFF";
			sLocal_1145[14] = "RE_TGH_MTN_V1_STOLE_TRAIN";
			sLocal_1145[16] = "RE_TGH_MTN_V1_FOLLOWING";
			sLocal_1145[10] = "RE_TGH_MTN_V1_ATTACK_FEUD";
			sLocal_1145[21] = "RE_TGH_MTN_V1_THANKYOU";
			sLocal_1145[27] = "RE_TGH_MTN_V1_HEADOUT";
			sLocal_1145[24] = "RE_TGH_MTN_V1_POST_A";
			sLocal_1145[25] = "RE_TGH_MTN_V1_POST_B";
			sLocal_1145[26] = "RE_TGH_MTN_V1_POST_C";
			sLocal_1145[28] = "RE_TGH_MTN_V1_PL_DEFUSE";
			sLocal_1145[29] = "RE_TGH_MTN_V1_PL_ANTAGONIZE_GANG";
			sLocal_1145[30] = "RE_TGH_MTN_V1_PL_INTERVENE";
			sLocal_1145[31] = "RE_TGH_MTN_V1_PL_GREET_VIC_POST";
			sLocal_1145[32] = "RE_TGH_MTN_V1_PL_ANTAGONIZE_VIC_POST";
			sLocal_1145[17] = "RE_TGH_MTN_V1_HIDING_AGGRO_M";
			sLocal_1145[18] = "RE_TGH_MTN_V1_HIDING_AGGRO_F";
			sLocal_1145[19] = "RE_TGH_MTN_V1_HIDING_NOTICE_M";
			sLocal_1145[20] = "RE_TGH_MTN_V1_HIDING_NOTICE_F";
		}
		else if (iLocal_30 == 5)
		{
			sLocal_1145[0] = "RE_TGH_CHS_V3_INTRO";
			sLocal_1145[1] = "RE_TGH_CHS_V3_DONT_KILL";
			sLocal_1145[2] = "RE_TGH_CHS_V3_GET_DOWN";
			sLocal_1145[3] = "RE_TGH_CHS_V3_ROBBING";
			sLocal_1145[4] = "RE_TGH_CHS_V3_BEG";
			sLocal_1145[5] = "RE_TGH_CHS_V3_KILL";
			sLocal_1145[6] = "RE_TGH_CHS_V3_AWAY";
			sLocal_1145[8] = "RE_TGH_CHS_V3_AWAY_FEUD";
			sLocal_1145[11] = "RE_TGH_CHS_V3_ATTACK";
			sLocal_1145[15] = "RE_TGH_CHS_V3_RIDE_OFF";
			sLocal_1145[14] = "RE_TGH_CHS_V3_STOLE_TRAIN";
			sLocal_1145[16] = "RE_TGH_CHS_V3_FOLLOWING";
			sLocal_1145[10] = "RE_TGH_CHS_V3_ATTACK_FEUD";
			sLocal_1145[21] = "RE_TGH_CHS_V3_THANKYOU";
			sLocal_1145[27] = "RE_TGH_CHS_V3_HEADOUT";
			sLocal_1145[24] = "RE_TGH_CHS_V3_POST_A";
			sLocal_1145[25] = "RE_TGH_CHS_V3_POST_B";
			sLocal_1145[26] = "RE_TGH_CHS_V3_POST_C";
			sLocal_1145[28] = "RE_TGH_CHS_V3_PL_DEFUSE";
			sLocal_1145[29] = "RE_TGH_CHS_V3_PL_ANTAGONIZE_GANG";
			sLocal_1145[30] = "RE_TGH_CHS_V3_PL_INTERVENE";
			sLocal_1145[31] = "RE_TGH_CHS_V3_PL_GREET_VIC_POST";
			sLocal_1145[32] = "RE_TGH_CHS_V3_PL_ANTAGONIZE_VIC_POST";
			sLocal_1145[17] = "RE_TGH_CHS_V3_HIDING_AGGRO_M";
			sLocal_1145[18] = "RE_TGH_CHS_V3_HIDING_AGGRO_F";
			sLocal_1145[19] = "RE_TGH_CHS_V3_HIDING_NOTICE_M";
			sLocal_1145[20] = "RE_TGH_CHS_V3_HIDING_NOTICE_F";
		}
	}
	else if (iLocal_1109 == 1)
	{
		sLocal_1145[6] = "RE_TGH_LMN_V2_AWAY";
		sLocal_1145[11] = "RE_TGH_LMN_V2_ATTACK";
		sLocal_1145[15] = "RE_TGH_LMN_V2_RIDE_OFF";
		sLocal_1145[14] = "RE_TGH_LMN_V2_STOLE_TRAIN";
		sLocal_1145[16] = "RE_TGH_LMN_V2_FOLLOWING";
		sLocal_1145[10] = "RE_TGH_LMN_V2_FEUD";
		sLocal_1145[9] = "RE_TGH_LMN_V2_WALK_OFF";
		sLocal_1145[12] = "RE_TGH_LMN_V2_WRAP_UP";
		sLocal_1145[13] = "CALLOUT_LETS_GET_OUTTA_HERE_MALE";
		sLocal_1145[21] = "RE_TGH_LMN_V2_THANKS";
		sLocal_1145[22] = "BLOCKED_GENERIC";
		sLocal_1145[23] = "RELIEVED_REACT";
		sLocal_1145[28] = "RE_TGH_LMN_V2_PL_DEFUSE";
		sLocal_1145[29] = "RE_TGH_LMN_V2_PL_ANTAGONIZE_GANG";
		sLocal_1145[30] = "RE_TGH_LMN_V2_PL_INTERVENE";
		sLocal_1145[31] = "RE_TGH_LMN_V2_PL_GREET_VIC_POST";
		sLocal_1145[32] = "RE_TGH_LMN_V2_PL_ANTAGONIZE_VIC_POST";
	}
}

void func_83(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_277(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_277(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_0x19A6BE7D9C6884D3(iParam0, iParam1, iParam2, iParam3);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar1);
		STREAMING::REQUEST_MODEL(iVar3, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

int func_86(var uParam0, char* sParam1)
{
	return 1;
}

int func_87(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_88(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_278((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_89()
{
	STREAMING::REQUEST_ANIM_DICT(func_279());
	STREAMING::REQUEST_ANIM_DICT(func_280());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_279()))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_280()))
	{
		return 0;
	}
	return 1;
}

int func_90(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_281(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_282(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_123(iParam0, 128))
			{
				if (!func_283(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_284(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_285(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_38(*uParam1))
				{
					return func_286(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_287(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_282(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_288(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_289(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_290(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_123(iParam0, 128))
			{
				if (!func_291(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_286(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_284(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_288(uParam1))
					{
						return func_286(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_292(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_282(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_286(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_64("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_64("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_91(var uParam0, int iParam1)
{
	if (func_92(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_294(iParam1, func_293(uParam0), &(uParam0->f_172)))
		{
			if (func_115(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_92(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_93(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_296(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_92(uParam0->f_3, 1) && !func_92(uParam0->f_3, 32))
	{
		func_296(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_92(uParam0->f_3, 2) && !func_92(uParam0->f_3, 32))
	{
		func_296(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_297(uParam0->f_171, 1);
	}
	if (func_92(uParam0->f_3, 1))
	{
		func_296(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_298(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_94(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_95(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

int func_96()
{
	return Global_1572887->f_12;
}

Vector3 func_97(var uParam0)
{
	return uParam0->f_51;
}

int func_98(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_299(iVar0))
		{
			fVar3 = func_100(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_99(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

float func_100(int iParam0, vector3 vParam1)
{
	if (func_300(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

bool func_101(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_102(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_301() - fParam1);
	func_302(uParam0, 1);
	func_303(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_103(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_101(vVar0, vVar3, vParam1);
}

Vector3 func_104(int iParam0, int iParam1)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_304(), func_305(iParam0, iParam1));
}

float func_105(int iParam0, int iParam1)
{
	return (ENTITY::GET_ENTITY_HEADING(func_304()) + func_306(iParam0, iParam1));
}

Vector3 func_106(int iParam0, int iParam1)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_307(), func_308(iParam0, iParam1));
}

float func_107(int iParam0, int iParam1)
{
	return (ENTITY::GET_ENTITY_HEADING(func_307()) + func_309(iParam0, iParam1));
}

Vector3 func_108(int iParam0, int iParam1)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_310(), func_311(iParam0, iParam1));
}

float func_109(int iParam0, int iParam1)
{
	return (ENTITY::GET_ENTITY_HEADING(func_310()) + func_312(iParam0, iParam1));
}

Vector3 func_110(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_111(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_112(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

float func_113(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_248(vVar0, vParam1);
}

int func_114(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_313(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_314(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_315(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_315(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_316(iVar0))
		{
			func_317(iVar0, &(uParam1->f_23), 0);
		}
		if (func_316(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_318(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_319(&(uParam1->f_22)));
			func_257(iVar0, func_320(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_321(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_322(&(uParam1->f_22)))
		{
			func_323(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_324(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_325(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_316(iVar0))
		{
			func_327(iVar0, !func_326(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_328(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_329(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_329(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_115(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_330(iParam0, iParam1);
}

var func_116(var uParam0, int iParam1)
{
	return AUDIO::_0xDF947FE0D551684E(uParam0, func_331(iParam1));
}

void func_117(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	if (!func_115(iParam1, 0, 0))
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

bool func_118(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_332(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_332(iVar4) && iVar4 != bVar0)
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
	if (func_96() == -1 && !func_333(bVar0))
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
				if (func_333(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_332(bVar0))
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
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_334(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_335(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_336(bVar0))
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

int func_119(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_337(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_120(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_97(uParam0) };
	iVar3 = func_267(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_121(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_122(var uParam0)
{
	func_12(uParam0, 1);
	func_17(uParam0, 20);
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_124(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_295(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_338())
	{
		func_339(1);
	}
	func_340(iParam2, uParam0->f_43);
	func_341(iParam2, 0, 0, 0, 0);
	if (func_342(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_258(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_343(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_125(var uParam0)
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

void func_126(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_344())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_123(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_125(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_345(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_346(uParam0, bVar0);
		func_347(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_348(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_125(&(uParam0->f_121));
		}
	}
}

int func_127(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_92(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_349())
			{
				fVar0 = 15f;
			}
		}
		if (func_350(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_153(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_350(uParam2, fVar1))
		{
			if (!func_351(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_352(uParam2->f_3, 2) && func_353(2))
		{
			return 0;
		}
		if (func_92(iParam0, 4194304) || func_92(iParam0, 33554432))
		{
			if (func_354(1))
			{
				return 0;
			}
		}
	}
	if (func_355(Global_35))
	{
		return 0;
	}
	if (func_356(0, 1, 1) && !func_357(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_92(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_358(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_153(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_359())
		{
			return 0;
		}
		iVar2 = func_361(func_360());
		if (func_362(iVar2))
		{
			if (func_363(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_364(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_365(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_128(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_366(uParam0->f_51))
	{
		func_367(uParam0->f_51, 0);
		fVar0 = func_368(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_369());
		fVar1 = func_263(!func_92(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_371(iVar2, func_370(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

int func_129(int iParam0, int iParam1, bool bParam2)
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

int func_130(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_131(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_372(iParam0, 13))
	{
		func_373(iParam0, 0);
	}
	else
	{
		func_374(iParam0, 0);
	}
	if (func_375(iParam0->f_6))
	{
		if (bParam2)
		{
			func_376(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_132()
{
	int iVar0;

	if (iLocal_1408 || iLocal_1109 == 1)
	{
		return;
	}
	iVar0 = 9;
	while (iVar0 <= 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])))
		{
			func_257(&(uLocal_1248[iVar0]), 1, 0);
		}
		iVar0++;
	}
}

void func_133(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_377(uParam0);
		func_378(iParam1, uParam2);
	}
	func_379(*uParam0, 1, bParam4);
}

void func_134(float fParam0, float fParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar18;

	if (func_115(&(uLocal_1248[0]), 0, 1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1248[0]), 54, true);
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[0]), -641223575))
		{
			iVar0 = func_380(0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
			TASK::TASK_PLAY_ANIM(0, &(Local_1190[iVar0 /*2*/]), (Local_1190[iVar0 /*2*/])->f_1, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[0]), iLocal_1298);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
		}
		else
		{
			Var1 = Global_35;
			Var1.f_6 = 1;
			Var1.f_4 = 1200;
			Var1.f_15 = 1;
			Var1.f_13 = 0;
			Var1.f_14 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(&(uLocal_1248[0]), 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar18);
			TASK::TASK_SHOOT_WITH_WEAPON(0, &Var1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar18);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[0]), iVar18);
			TASK::CLEAR_SEQUENCE_TASK(&iVar18);
		}
	}
}

void func_135(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_136(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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
		*iParam1 = MAP::_0x23F74C2FDA6E7C61(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
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

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Crim01";
		case 1:
			return "Crim02";
		case 3:
			return "Vic01";
		case 4:
			return "Vic02";
		case 5:
			return "Vic03";
		case 6:
			return "Vic04";
	}
	return "NULL";
}

int func_138(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 1;
	}
	if (iLocal_1109 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == &uLocal_1248[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (iParam0 == &uLocal_1248[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_1285[iVar0])))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam0, &(iLocal_1285[iVar0])))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_140(bool bParam0)
{
	int iVar0;

	if (iLocal_1109 == 0)
	{
		iVar0 = 7;
		while (iVar0 <= 8)
		{
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 133, true);
			if (bParam0)
			{
				func_381(iVar0, 1.5f, 2f, 4);
			}
			else
			{
				func_381(iVar0, (0.15f * IntToFloat(iVar0)), (0.2f * IntToFloat(iVar0)), 4);
			}
			iVar0++;
		}
	}
}

void func_141(int iParam0)
{
	iLocal_1301 = iParam0;
}

int func_142(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_349())
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
				if (func_382(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_186(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_36(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_383(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_385(func_384(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_143(var uParam0)
{
	if (-1829635046 == func_386(81053684))
	{
		if (func_387(uParam0))
		{
			return 1;
		}
	}
	else if (func_388(-525676072, uParam0))
	{
		if (func_387(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_1388)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		iVar0 = 3;
		while (iVar0 <= 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -641223575) && !ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -910600982))
				{
					iVar1 = func_380(iVar0);
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[iVar0]), -1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), &(uLocal_1248[iVar0]));
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
					TASK::TASK_PLAY_ANIM(0, &(Local_1190[iVar1 /*2*/]), (Local_1190[iVar1 /*2*/])->f_1, 1090519040, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
					if (func_39(&(uLocal_1248[iVar0]), Global_35))
					{
						TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), 20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), -20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[iVar0]), iLocal_1298);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
				}
				else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[iVar0]), -1))
				{
					if (PED::IS_PED_ON_SPECIFIC_VEHICLE(&(uLocal_1248[iVar0]), &(iLocal_1285[2])))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), &(uLocal_1248[iVar0]));
						func_381(iVar0, 0, 0.2f, 3);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -594513017))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), &(uLocal_1248[iVar0]));
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
						TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", 1.5f, 0, 4);
						if (func_39(&(uLocal_1248[iVar0]), Global_35))
						{
							TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), 20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
						}
						else
						{
							TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), -20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
						}
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
						TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[iVar0]), iLocal_1298);
						PED::_0x2208438012482A1A(&(uLocal_1248[iVar0]), false, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[0])))
						{
							TASK::_0x3923EC958249657D(&(uLocal_1248[iVar0]), &(uLocal_1248[0]), -1082130432);
						}
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[1])))
						{
							TASK::_0x3923EC958249657D(&(uLocal_1248[iVar0]), &(uLocal_1248[1]), -1082130432);
						}
						if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
						{
							TASK::_0x3923EC958249657D(&(uLocal_1248[iVar0]), &(uLocal_1248[2]), -1082130432);
						}
					}
				}
				else
				{
					if (func_39(&(uLocal_1248[iVar0]), Global_35))
					{
						TASK::_TASK_FLEE_FROM_COORD(&(uLocal_1248[iVar0]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), 20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_COORD(&(uLocal_1248[iVar0]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), -20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[0])))
					{
						TASK::_0x3923EC958249657D(&(uLocal_1248[iVar0]), &(uLocal_1248[0]), -1082130432);
					}
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[1])))
					{
						TASK::_0x3923EC958249657D(&(uLocal_1248[iVar0]), &(uLocal_1248[1]), -1082130432);
					}
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
					{
						TASK::_0x3923EC958249657D(&(uLocal_1248[iVar0]), &(uLocal_1248[2]), -1082130432);
					}
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -641223575))
				{
					iVar2 = func_389(iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
					TASK::TASK_PLAY_ANIM(0, &(Local_1190[iVar2 /*2*/]), (Local_1190[iVar2 /*2*/])->f_1, 1090519040, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3, 256, 80f, -1, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[iVar0]), iLocal_1298);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
				}
				else
				{
					func_381(iVar0, 0, 0, 3);
				}
			}
			iVar0++;
		}
	}
	iLocal_1388 = 1;
}

int func_145()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (PED::IS_PED_ON_MOUNT(&(uLocal_1248[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1, bool bParam2)
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

void func_147(var uParam0, bool bParam1, int iParam2)
{
	func_390(iParam2);
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
		uParam0->f_13 = func_391(0);
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
							func_71(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_354(1))
						{
							func_71(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_354(1) || *uParam0 & 8192 != 0))
				{
					func_70(uParam0, 33554432);
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
			if (func_392(uParam0))
			{
				uParam0->f_15 = func_167();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_167() - uParam0->f_15) > 500)
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
	func_393(uParam0);
}

int func_148(int iParam0, var uParam1)
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
			if (!func_394(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_395(iParam0, iVar2) <= func_396(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_149(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_397(iParam2, 1, 1, 1, 0))
	{
		func_71(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_398(uParam1, 1);
	func_399();
}

int func_150(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_400(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_401(uParam1);
			if (func_402(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_403(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_398(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_398(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_151(int iParam0, int iParam1, var uParam2)
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
	if (func_404(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_401(uParam2);
		if (func_402(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_403(uParam2)
				{
					func_398(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_152(int iParam0, var uParam1)
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
	if (func_394(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_403(uParam1)
		{
			fVar3 = func_401(uParam1);
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

int func_153(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_405(bParam1, iParam2, bParam3);
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
	if (LAW::_0xAD401C63158ACBAA(iParam0))
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

int func_154(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_406(uParam2);
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
			if (func_163(uParam2, iParam1))
			{
				func_398(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_156(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_407(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_163(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_398(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_157(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_408(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_398(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_398(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_409(iParam1, vVar0, vVar4))
					{
						func_398(uParam2, 1);
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
					func_398(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_409(iParam1, vVar0, vVar7))
					{
						func_398(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_158(int iParam0, var uParam1)
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
		if (!func_394(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_410(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_411(&(Global_1935630->f_34[iVar0])))
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
			if (func_412(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_413(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_414(uParam1, iParam0, fVar1, iVar0))
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

int func_159(int iParam0, var uParam1)
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

int func_160(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_415(iVar0, &iVar2))
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
	if (func_416(iVar0, iParam0))
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

int func_162(var uParam0, int iParam1)
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

int func_163(var uParam0, int iParam1)
{
	if (func_417(uParam0))
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

int func_164(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_186(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_165()
{
}

int func_166(var uParam0, int iParam1)
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
		if (func_418(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_167();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
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
						if (func_191(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_167();
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

int func_167()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_168()
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
	if ((func_167() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_169(var uParam0, int iParam1)
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
	fVar0 = func_396(uParam0);
	if (uParam0->f_12 > func_419(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_420(iParam1);
	iVar1 = func_421(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0, int iParam1, var uParam2)
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
	return func_422(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_171(int iParam0, var uParam1)
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
		if (func_423(iParam0, uParam1, 1))
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
					if (!func_424(uParam1, iParam0))
					{
						if (func_191(iVar4, Global_36, 1) < 7f)
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

int func_172(int iParam0, var uParam1)
{
	if (!func_425(0))
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

int func_173(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_174(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_175(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_167();
	}
	else if (func_167() - uParam1->f_4) > func_426(uParam1)
	{
		return func_427(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_176(var uParam0, int iParam1)
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

void func_177()
{
	int iVar0;
	float fVar1;

	if (iLocal_1303 == 1)
	{
		func_18(&uLocal_1304, 0);
		return;
	}
	if (iLocal_1109 == 0)
	{
		iVar0 = &uLocal_1248[2];
		fVar1 = &Local_369.f_98[2];
	}
	else if (iLocal_1109 == 1)
	{
		if (&Local_369.f_98[4] < &Local_369.f_98[2])
		{
			iVar0 = &uLocal_1248[4];
			fVar1 = &Local_369.f_98[4];
		}
		else
		{
			iVar0 = &uLocal_1248[2];
			fVar1 = &Local_369.f_98[2];
		}
	}
	if (iLocal_1109 == 1)
	{
		func_428(&uLocal_1304, iVar0, 30f, fVar1);
	}
	else
	{
		func_428(&uLocal_1304, iVar0, 30f, fVar1);
	}
}

int func_178(int iParam0)
{
	if (func_39(&(iLocal_1285[0]), Global_35) == func_39(&(iLocal_1285[0]), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_147(uParam1, 0, iVar0);
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
				if (func_160(uParam1, 4000))
				{
					if ((func_161(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_162(uParam1, iParam0)) && func_163(uParam1, iParam0))
					{
						func_165();
						*iParam2 = 2;
						func_149(iParam0, uParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_160(uParam1, 4000))
				{
					if ((func_161(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_162(uParam1, iParam0)) && func_163(uParam1, iParam0))
					{
						func_165();
						*iParam2 = 2;
						func_149(iParam0, uParam1, *iParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_164(iParam0, Global_1935630->f_41))
							{
								func_165();
								*iParam2 = 2;
								func_149(iParam0, uParam1, *iParam2);
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
						if (func_164(iParam0, Global_1935630->f_41))
						{
							func_165();
							*iParam2 = 2;
							func_149(iParam0, uParam1, *iParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_168())
					{
						if (func_164(iParam0, Global_1935630->f_42))
						{
							func_165();
							*iParam2 = 2;
							func_149(iParam0, uParam1, *iParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_154(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_155(Global_35, iParam0, uParam1))
					{
						func_165();
						*iParam2 = 4;
						func_149(iParam0, uParam1, *iParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_156(Global_35, iParam0, uParam1))
					{
						func_165();
						*iParam2 = 256;
						func_149(iParam0, uParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_429(iParam0, uParam1))
			{
				func_165();
				*iParam2 = 131072;
				func_149(iParam0, uParam1, *iParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_430(iParam0, uParam1))
			{
				func_165();
				*iParam2 = 262144;
				func_149(iParam0, uParam1, *iParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_180(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_248(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_181(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;

	fVar0 = BUILTIN::VMAG(vParam3 - vParam0);
	vVar1 = { vParam3 - vParam0 / Vector(fVar0, fVar0, fVar0) };
	vVar4 = { vParam0 - vParam6 };
	fVar7 = BUILTIN::VMAG(vVar4);
	if (fVar0 < (fVar7 - fParam9))
	{
		return 0;
	}
	fVar8 = (func_431(vVar4, vVar4) - (fParam9 * fParam9));
	if (fVar8 <= 0f)
	{
		return 1;
	}
	fVar9 = func_431(vVar4, vVar1);
	if (fVar9 > 0f)
	{
		return 0;
	}
	fVar10 = ((fVar9 * fVar9) - fVar8);
	if (fVar10 < 0f)
	{
		return 0;
	}
	return 1;
}

int func_182()
{
	if (func_178(&(uLocal_1248[4])) || func_178(&(uLocal_1248[2])))
	{
		return 1;
	}
	return 0;
}

int func_183(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_130(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_179(uParam0[*uParam3], uParam1, iParam2, 0))
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

bool func_184(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_185(var uParam0)
{
	return func_432(*uParam0, 1);
}

float func_186(int iParam0, int iParam1, bool bParam2, int iParam3)
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

Vector3 func_187(vector3 vParam0)
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

int func_188(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_433(*uParam0, 0f, 0f, 0f))
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

char* func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Lem_01";
		case 1:
			return "Lem_02";
		case 2:
			return "Lem03";
		case 3:
			return "Lem04";
		case 5:
			return "Vic01";
		case 6:
			return "Vic02";
		case 7:
			return "Vic03";
		case 8:
			return "Vic04";
		case 9:
			return "Vic05";
		case 10:
			return "Vic06";
	}
	return "NULL";
}

void func_190(int* iParam0, char* sParam1)
{
	if (func_375(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_434(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_374(iParam0, 1);
}

float func_191(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_192()
{
	if (Local_369.f_46)
	{
		return;
	}
	if (!iLocal_1375 && func_115(&(uLocal_1248[8]), 0, 1))
	{
		if (func_186(Global_35, &(uLocal_1248[8]), 0, 1) < 8f && PED::_0x7F9B9791D4CB71F6(&(uLocal_1248[8]), Global_35, 0, 0) == 1)
		{
			func_54(&(uLocal_1248[8]), Global_35, &(sLocal_1145[19]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1375 = 1;
		}
	}
	if (!iLocal_1376)
	{
		if (func_186(Global_35, &(uLocal_1248[7]), 0, 1) < 8f && PED::_0x7F9B9791D4CB71F6(&(uLocal_1248[7]), Global_35, 0, 0) == 1)
		{
			func_54(&(uLocal_1248[7]), Global_35, &(sLocal_1145[20]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1376 = 1;
		}
	}
}

void func_193()
{
	if (iLocal_1301 < 4)
	{
		if (func_129(Global_35, &(iLocal_1285[0]), 0))
		{
			func_53(1, 1, 0);
		}
	}
}

void func_194()
{
	if (iLocal_1109 == 0 && !iLocal_1396)
	{
		if (iLocal_1371 || bLocal_1374)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_1248[2]));
			iLocal_1396 = 1;
		}
	}
	switch (iLocal_1303)
	{
		case 0:
			break;
		case 1:
			if (((!bLocal_1379 && !Local_369.f_46) && func_180(Global_35, &(uLocal_1248[2]), 1) < 225f) && func_435(&uLocal_1348, 6f))
			{
				func_54(&(uLocal_1248[2]), Global_35, &(sLocal_1145[8]), 0, -1082130432, 0, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
			}
			func_436();
			break;
	}
}

void func_195()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[iVar0])) && !func_437(&(uLocal_1248[iVar0])))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -985869509))
			{
				func_438(&(uLocal_1248[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

void func_196()
{
	float fVar0;

	fVar0 = fLocal_1428;
	fLocal_1428 = func_113(Global_35, Local_369.f_51, 0);
	if (fLocal_1428 > fVar0)
	{
		bLocal_1379 = true;
	}
	else
	{
		bLocal_1379 = false;
	}
}

void func_197()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_369.f_46)
	{
		return;
	}
	if (iLocal_1301 != 4 && func_435(&uLocal_1345, 3.5f))
	{
		if (!(iLocal_1109 == 0 && !ENTITY::DOES_ENTITY_EXIST(func_233())))
		{
			func_234(11, 0, 0, 0, &(uLocal_1248[3]), 0, 1065353216, 0);
		}
		func_53(0, 1, 0);
	}
	if (iLocal_1394 && !iLocal_1395)
	{
		if (func_242(-3f, 1, 0, 0))
		{
			func_54(iLocal_1267, Global_35, &(sLocal_1145[33]), 0, -1082130432, func_439(), 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1395 = 1;
		}
	}
	if (iLocal_1109 == 1)
	{
		iVar2 = 0;
		iVar3 = 4;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		iVar0 = func_441(uLocal_1248[iVar1], Local_33[iVar1 /*21*/], 30f, &Local_265, &(Local_369.f_192), 0f, 1, 0, 0, func_440(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
		if (iVar0 != -1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == 1)
	{
		iVar1 = 0;
		if (iLocal_1109 == 1)
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				func_135(&(uLocal_1248[iVar1]), (100 + iVar1 * 30));
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1267))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_1267, Global_35, 4000, 0, 51, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1267, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			else if (func_180(Global_35, &(uLocal_1248[2]), 1) < func_180(Global_35, &(uLocal_1248[4]), 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
				{
					TASK::TASK_LOOK_AT_ENTITY(&(uLocal_1248[2]), Global_35, 4000, 0, 51, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1248[2]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[4])))
			{
				TASK::TASK_LOOK_AT_ENTITY(&(uLocal_1248[4]), Global_35, 4000, 0, 51, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1248[4]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 <= 6)
			{
				func_135(&(uLocal_1248[iVar1]), (100 + iVar1 * 30));
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(&(uLocal_1248[2]), 0))
				{
					PED::_0x802092B07E3B1EEA(&(uLocal_1248[2]), Global_36, 3);
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_1248[2]));
					TASK::TASK_AIM_AT_ENTITY(&(uLocal_1248[2]), Global_35, -1, 0, 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(&(uLocal_1248[2]), Global_35, 4000, 0, 51, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1248[2]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
			}
		}
		func_36(&uLocal_1345);
		func_442(&Local_265, 0, 0);
	}
	else if (iVar0 == 0)
	{
		iLocal_1394 = 1;
		func_36(&uLocal_1333);
		func_131(Local_265[0 /*17*/], 0, 0);
		func_131(Local_265[1 /*17*/], 1, 0);
	}
}

void func_198()
{
	if (func_435(&uLocal_1351, 2f))
	{
		bLocal_1404 = true;
		func_144();
	}
}

void func_199()
{
	int iVar0;

	if (func_185(&uLocal_1345) || iLocal_1301 == 4)
	{
		if (iLocal_1109 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_1248[iVar0]), 290, true);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_1248[iVar0]), 290, true);
				iVar0++;
			}
		}
	}
}

void func_200()
{
	if (iLocal_1406 && iLocal_1301 != 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
		{
			PED::SET_PED_RESET_FLAG(&(uLocal_1248[2]), 27, true);
		}
	}
	if (func_435(&uLocal_1357, 0.1f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
		{
			PED::REGISTER_TARGET(&(uLocal_1248[2]), Global_35, 1);
			TASK::TASK_COMBAT_HATED_TARGETS(&(uLocal_1248[2]), -1f);
			iLocal_1406 = 1;
			func_36(&uLocal_1360);
		}
	}
	if (func_435(&uLocal_1360, 5.5f))
	{
		if (iLocal_1301 != 4 && !ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[2])))
		{
			TASK::CLEAR_PED_TASKS(&(uLocal_1248[2]), 1, 0);
		}
	}
}

void func_201()
{
	int iVar0;
	int iVar1;

	if (iLocal_1408 || iLocal_1109 == 1)
	{
		return;
	}
	iVar1 = 1;
	iVar0 = 9;
	while (iVar0 <= 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])))
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(&(uLocal_1248[iVar0]), 0))
			{
				if (iVar0 == 9)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_1248[iVar0]), 0, 1);
					func_443(&(uLocal_1248[iVar0]), -1f);
					func_444(&(uLocal_1248[iVar0]), &(Local_1190[7 /*2*/]), (Local_1190[7 /*2*/])->f_1, 1148846080, -1065353216, 128, 0);
				}
				else if (iVar0 == 10)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_1248[iVar0]), 0, 1);
					func_443(&(uLocal_1248[iVar0]), -1f);
					func_444(&(uLocal_1248[iVar0]), &(Local_1190[6 /*2*/]), (Local_1190[6 /*2*/])->f_1, 1148846080, -1065353216, 128, 0);
				}
				else if (iVar0 == 11)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_1248[iVar0]), 0, 1);
					func_443(&(uLocal_1248[iVar0]), -1f);
					func_444(&(uLocal_1248[iVar0]), &(Local_1190[9 /*2*/]), (Local_1190[9 /*2*/])->f_1, 1148846080, -1065353216, 128, 0);
				}
			}
			else
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	iLocal_1408 = iVar1;
}

void func_202()
{
	int iVar0;

	if (bLocal_1399 || iLocal_1301 == 6)
	{
		return;
	}
	if (iLocal_1109 == 1)
	{
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			if (func_445(&(uLocal_1248[iVar0]), Global_35))
			{
				bLocal_1399 = true;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 3;
		while (iVar0 <= 6)
		{
			if (func_445(&(uLocal_1248[iVar0]), Global_35))
			{
				bLocal_1399 = true;
			}
			iVar0++;
		}
	}
}

void func_203()
{
	if (iLocal_1109 == 1)
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[3]), Local_1182.f_1) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[3]), -1181533807))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182.f_1, func_137(3), &(uLocal_1248[3]));
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_137(3), &(uLocal_1248[3]), 0);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[4]), Local_1182.f_1) && ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[4]), -1181533807))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182.f_1, func_137(4), &(uLocal_1248[4]));
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_137(4), &(uLocal_1248[4]), 0);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
}

void func_205()
{
	int iVar0;
	int iVar1;

	if (iLocal_1109 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (iVar0 != 2)
			{
				if (iVar0 == 3 || iVar0 == 4)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182.f_1, func_137(iVar0), &(uLocal_1248[iVar0]), 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), &(uLocal_1248[iVar0]), 0);
				}
			}
			iVar0++;
		}
		iVar0 = 9;
		while (iVar0 <= 13)
		{
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 38, true);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar0]), 223, true);
			if (iVar0 > 11)
			{
				func_446(&(uLocal_1248[iVar0]), 1, 1060320051, 0, 1);
			}
			func_438(&(uLocal_1248[iVar0]), 1, 0);
			iVar0++;
		}
		TASK::TASK_COWER(&(uLocal_1248[7]), -1, 0, 0);
		TASK::TASK_COWER(&(uLocal_1248[8]), -1, 0, 0);
		func_447(&(uLocal_1248[0]), 325);
		func_447(&(uLocal_1248[1]), 175);
		func_447(&(uLocal_1248[2]), 150);
		func_438(&(uLocal_1248[5]), 1, 0);
		func_438(&(uLocal_1248[6]), 1, 0);
		func_448(&(Local_369.f_5), &(uLocal_1248[0]), &(uLocal_1263[0]), 0);
		func_448(&(Local_369.f_5), &(uLocal_1248[1]), &(uLocal_1263[1]), 0);
		func_448(&(Local_369.f_5), &(uLocal_1248[2]), &(uLocal_1263[2]), 0);
	}
	else if (iLocal_1109 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_189(0), &(uLocal_1248[0]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, func_189(1), &(uLocal_1248[1]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, "Wagon", iLocal_1292, 0);
		VEHICLE::_0x6355602C02EDC6DF(iLocal_1292, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182, "CRATE", iLocal_1295, 0);
		}
		iVar1 = 2;
		while (iVar1 <= 10)
		{
			if (iVar1 != 4)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1182.f_1, func_189(iVar1), &(uLocal_1248[iVar1]), 0);
			}
			iVar1++;
		}
		iVar1 = 11;
		while (iVar1 <= 13)
		{
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar1]), 38, true);
			PED::SET_PED_CONFIG_FLAG(&(uLocal_1248[iVar1]), 223, true);
			ENTITY::_0x9587913B9E772D29(&(uLocal_1248[iVar1]), 0);
			func_446(&(uLocal_1248[iVar1]), 1, 1060320051, 0, 1);
			iVar1++;
		}
		func_448(&(Local_369.f_5), &(uLocal_1248[0]), &(uLocal_1263[0]), 0);
		func_448(&(Local_369.f_5), &(uLocal_1248[1]), &(uLocal_1263[1]), 0);
		func_448(&(Local_369.f_5), &(uLocal_1248[2]), &(uLocal_1263[2]), 0);
	}
}

void func_206()
{
	func_449(Local_265[0 /*17*/], "RE_INTER_POS", &(sLocal_1145[28]), -163964935, 0, 0, 0, 1, 0);
	func_449(Local_265[1 /*17*/], func_450(26), &(sLocal_1145[30]), 648122183, 0, 0, 0, 1, 0);
	func_449(Local_265[2 /*17*/], func_450(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_131(Local_265[0 /*17*/], 0, 0);
	func_131(Local_265[1 /*17*/], 1, 0);
	func_451(Local_265[2 /*17*/], 1);
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 || !func_185(uParam0))
	{
		func_36(uParam0);
	}
}

int func_208(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, int iParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_346(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_344())
	{
		bVar1 = true;
		fVar3 = func_263(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_347(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_347(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_348(&(uParam0->f_121), iParam4, fParam1))
		{
			func_125(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_267(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(iParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_125(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_267(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_209(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

void func_210()
{
	int iVar0;

	if (iLocal_1109 == 0)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 2;
	}
	if (iLocal_1413 < 4)
	{
		if (iLocal_1412 < iLocal_1414)
		{
			if (func_113(Global_35, Local_369.f_51, 1) < fLocal_1429)
			{
				func_124(&Local_369, &(Local_369.f_48), 64, &(Local_369.f_51.f_6));
				if (func_115(&(uLocal_1248[iVar0]), 0, 1) && func_225(&uLocal_1339, fLocal_1426))
				{
					if (!PED::IS_TRACKED_PED_VISIBLE(&(uLocal_1248[iVar0])))
					{
						PED::_0x4C57F27D1554E6B0(&(uLocal_1248[iVar0]), ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[iVar0]), true, false) + Vector(10f, 0f, 0f), 0, -1082130432, 0, 0f);
						func_452(&Local_369, &(uLocal_1248[iVar0]), 1066055203, 0, 1123024896, 0, -1, 1);
						func_36(&uLocal_1339);
						fLocal_1426 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 3.5f);
						iLocal_1412++;
					}
				}
			}
		}
		else if (func_225(&uLocal_1339, fLocal_1427))
		{
			iLocal_1413++;
			fLocal_1429 = (fLocal_1429 - 400f);
			iLocal_1412 = 0;
			iLocal_1414 = MISC::GET_RANDOM_INT_IN_RANGE(4, 5);
			func_36(&uLocal_1339);
			fLocal_1426 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 3.5f);
			fLocal_1427 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4.5f, 5.7f);
			if (!iLocal_1403)
			{
				func_453(536870912, 1, 0, 1);
				iLocal_1403 = 1;
			}
		}
	}
}

void func_211()
{
	if (iLocal_1301 == 4)
	{
		return;
	}
	if (!iLocal_1367 && func_115(&(uLocal_1248[0]), 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Crim01"))
		{
			if (iLocal_30 == 5)
			{
				func_68(&(Local_369.f_5), 1);
				func_16(&(Local_369.f_5), 0);
			}
			func_226();
			if (func_115(&(uLocal_1263[0]), 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[0]), &(uLocal_1263[0]), -1, -1, 2f, 1, 0, 0);
			}
			iLocal_1367 = 1;
		}
	}
	if (!iLocal_1368 && func_115(&(uLocal_1248[1]), 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Crim02"))
		{
			if (iLocal_30 == 5)
			{
				func_68(&(Local_369.f_5), 1);
				func_16(&(Local_369.f_5), 0);
			}
			func_226();
			if (func_115(&(uLocal_1263[1]), 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[1]), &(uLocal_1263[1]), -1, -1, 2f, 1, 0, 0);
			}
			iLocal_1368 = 1;
		}
	}
	if (!iLocal_1371 && func_115(&(uLocal_1248[2]), 0, 1))
	{
		if (iLocal_1367 || iLocal_1368)
		{
			if (iLocal_1303 == 1 && func_180(Global_35, &(uLocal_1248[2]), 1) < 225f)
			{
				func_55();
			}
			else
			{
				if (func_115(&(uLocal_1263[2]), 0, 1))
				{
					PED::_0x463803429297117C(&(uLocal_1248[2]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[2]), 0f, 1f, 0f), 0, 0);
					TASK::TASK_LOOK_AT_COORD(&(uLocal_1248[2]), ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[3]), true, false), 3000, 0, 51, 1);
					TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[2]), &(uLocal_1263[2]), -1, -1, 1.5f, 1, 0, 0);
				}
				func_227(iLocal_1269[2]);
				iLocal_1371 = 1;
			}
		}
	}
}

void func_212()
{
	if (iLocal_1367)
	{
		if (iLocal_1420 == 0)
		{
			if (func_242(0, 1, &(uLocal_1248[1]), 1))
			{
				func_54(&(uLocal_1248[1]), 0, &(sLocal_1145[24]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1420 = 25;
			}
		}
		else if (iLocal_1420 == 25)
		{
			if (func_242(0, 1, &(uLocal_1248[1]), 1))
			{
				func_54(&(uLocal_1248[0]), 0, &(sLocal_1145[25]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1420 = 26;
			}
		}
		else if (iLocal_1420 == 26)
		{
			if (func_242(0, 1, &(uLocal_1248[0]), 1))
			{
				func_54(&(uLocal_1248[1]), 0, &(sLocal_1145[26]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1420 = 27;
			}
		}
		else if (iLocal_1420 == 27)
		{
			if (func_242(0, 1, &(uLocal_1248[1]), 1))
			{
				func_54(&(uLocal_1248[1]), 0, &(sLocal_1145[27]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1420 = -1;
			}
		}
	}
}

void func_213()
{
	int iVar0;

	if (iLocal_1387)
	{
		return;
	}
	if (iLocal_1109 == 0)
	{
		iVar0 = &uLocal_1248[2];
	}
	else
	{
		iVar0 = &uLocal_1248[2];
	}
	if (func_454() && (!PED::IS_PED_ON_MOUNT(iVar0) || func_455(iVar0)))
	{
		if (func_456())
		{
			if (iLocal_1109 == 0)
			{
				if (iLocal_30 == 5)
				{
					func_55();
				}
				else
				{
					func_54(iVar0, Global_35, &(sLocal_1145[15]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_115(&(uLocal_1263[2]), 0, 1))
					{
						if (func_146(iVar0, &(uLocal_1263[2]), 0))
						{
							func_36(&uLocal_1357);
						}
						else
						{
							if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0))
							{
								PED::_0x802092B07E3B1EEA(iVar0, Global_36, 3);
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, 0, 1);
							TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[2]), -1, -1, 2f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_1298);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
						}
					}
					iLocal_1387 = 1;
				}
			}
			else if (!func_457())
			{
				func_54(iVar0, Global_35, "HEADS_UP_THREATEN", 0, -1082130432, 2, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
				iLocal_1387 = 1;
			}
		}
	}
}

int func_214()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_455(&(uLocal_1248[iVar0])))
		{
			return &(uLocal_1248[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_215()
{
	if (iLocal_1419 > 10)
	{
		iLocal_1419 = 0;
	}
	if (func_115(&(uLocal_1248[iLocal_1419]), 0, 1) && func_180(Global_35, &(uLocal_1248[iLocal_1419]), 1) < 1225f)
	{
		TASK::TASK_LOOK_AT_ENTITY(&(uLocal_1248[iLocal_1419]), Global_35, 500, 0, 51, 0);
	}
	iLocal_1419++;
}

void func_216()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;

	if (iLocal_1301 == 4)
	{
		return;
	}
	if (func_115(&(uLocal_1248[0]), 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Lem_01"))
		{
			TASK::TASK_ENTER_VEHICLE(&(uLocal_1248[0]), iLocal_1292, 20000, -1, 2f, 1, 0);
			iLocal_1367 = 1;
		}
	}
	if (func_115(&(uLocal_1248[1]), 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "Lem_02"))
		{
			TASK::TASK_ENTER_VEHICLE(&(uLocal_1248[1]), iLocal_1292, 10000, 0, 2f, 513, 0);
			iLocal_1368 = 1;
		}
	}
	if (func_115(&(uLocal_1248[2]), 0, 1))
	{
		if (!bLocal_1369 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[2]), -1))
		{
			if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(Local_1182, 0))
			{
				if (!func_185(&uLocal_1333) || (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[2]), -1) && func_225(&uLocal_1333, 5.5f)))
				{
					if (func_115(&(uLocal_1263[0]), 0, 1))
					{
						if (iLocal_1267 == &uLocal_1248[2])
						{
							PED::_0x1FA132CBCD7CB239(&(uLocal_1248[2]), -1962193144);
							PED::_0x8ACC0506743A8A5C(&(uLocal_1248[2]), 166028666, 1, -1082130432);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							vVar1 = { func_458(ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[2]), true, false), ENTITY::GET_ENTITY_COORDS(&(uLocal_1263[0]), true, false)) };
							vVar1 = { func_458(vVar1, ENTITY::GET_ENTITY_COORDS(&(uLocal_1263[0]), true, false)) };
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 1.5f, 0, 2f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
							TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[0]), -1, -1, 1.5f, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[2]), iVar0);
							iLocal_1372 = 1;
						}
						else
						{
							TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[2]), &(uLocal_1263[0]), -1, -1, 2f, 1, 0, 0);
							func_227(iLocal_1269[2]);
						}
						bLocal_1369 = true;
					}
				}
			}
		}
		else if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182.f_1, "Lem03"))
		{
			if (func_115(&(uLocal_1263[0]), 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[2]), &(uLocal_1263[0]), -1, -1, 2f, 1, 0, 0);
				bLocal_1369 = true;
			}
		}
	}
	if (func_115(&(uLocal_1248[3]), 0, 1))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182.f_1, "Lem04"))
		{
			if (func_115(&(uLocal_1263[2]), 0, 1))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[3]), &(uLocal_1263[2]), -1, -1, 2f, 1, 0, 0);
				iLocal_1370 = 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1295))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182, "CRATE"))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1295, iLocal_1292, -1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1292, ENTITY::GET_ENTITY_COORDS(iLocal_1295, false, false)), ENTITY::GET_ENTITY_ROTATION(iLocal_1295, 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_1292, 2), 1, 1, 0, 0, 2, 1, 1, 0);
		}
	}
	if (!iLocal_1371 && func_115(&(uLocal_1248[4]), 0, 1))
	{
		if (bLocal_1369)
		{
			if ((!func_185(&uLocal_1333) || (iLocal_1267 == &uLocal_1248[4] && func_225(&uLocal_1333, 5.5f))) || iLocal_1372)
			{
				if (func_115(&(uLocal_1263[1]), 0, 1))
				{
					if (iLocal_1267 == &uLocal_1248[4])
					{
						PED::_0x1FA132CBCD7CB239(&(uLocal_1248[4]), -1962193144);
						PED::_0x8ACC0506743A8A5C(&(uLocal_1248[4]), 166028666, 1, -1082130432);
						func_459(&uLocal_1333);
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						vVar5 = { func_458(ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[4]), true, false), func_458(ENTITY::GET_ENTITY_COORDS(&(uLocal_1248[4]), true, false), ENTITY::GET_ENTITY_COORDS(&(uLocal_1263[1]), true, false))) };
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar5, Global_35, 2f, 0, 2f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
						TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_1263[1]), -1, -1, 2f, 1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar4);
						TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[4]), iVar4);
						iLocal_1373 = 1;
					}
					else
					{
						TASK::TASK_MOUNT_ANIMAL(&(uLocal_1248[4]), &(uLocal_1263[1]), -1, -1, 2f, 1, 0, 0);
						func_227(iLocal_1269[4]);
					}
				}
				func_227(iLocal_1269[4]);
				iLocal_1371 = 1;
			}
		}
	}
}

int func_217()
{
	int iVar0;

	if (bLocal_1380)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1267))
		{
			iVar0 = AUDIO::_0x4A98E228A936DBCC(iLocal_1267);
			if (iVar0 == MISC::GET_HASH_KEY(&(sLocal_1145[6])) || iVar0 == -600169761)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= *uParam0)
	{
		iParam4 = (*uParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_179(uParam0[iVar0], uParam1, iParam2, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	if (func_115(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

void func_220()
{
	struct<16> Var0;

	if (iLocal_1400)
	{
		return;
	}
	if (func_115(&(uLocal_1248[3]), 0, 1) && PED::IS_PED_ON_MOUNT(&(uLocal_1248[3])))
	{
		if (func_180(Global_35, &(uLocal_1248[3]), 1) < 1600f)
		{
			Var0 = Global_35;
			Var0.f_6 = 1;
			Var0.f_4 = 8200;
			Var0.f_15 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(&(uLocal_1248[3]), 0);
			TASK::TASK_SHOOT_WITH_WEAPON(&(uLocal_1248[3]), &Var0);
			iLocal_1400 = 1;
		}
	}
}

void func_221()
{
	struct<16> Var0;

	if (iLocal_1401)
	{
		return;
	}
	if (func_115(&(uLocal_1248[2]), 0, 1) && PED::IS_PED_ON_MOUNT(&(uLocal_1248[2])))
	{
		if (func_180(Global_35, &(uLocal_1248[2]), 1) < 1600f)
		{
			Var0 = Global_35;
			Var0.f_6 = 1;
			Var0.f_4 = 7000;
			Var0.f_15 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(&(uLocal_1248[2]), 0);
			TASK::TASK_SHOOT_WITH_WEAPON(&(uLocal_1248[2]), &Var0);
			iLocal_1401 = 1;
		}
	}
}

void func_222()
{
	struct<16> Var0;

	if (iLocal_1402)
	{
		return;
	}
	if (func_115(&(uLocal_1248[1]), 0, 1) && func_129(&(uLocal_1248[1]), iLocal_1292, 0))
	{
		if (func_180(Global_35, &(uLocal_1248[1]), 1) < 1600f)
		{
			Var0 = Global_35;
			Var0.f_6 = 1;
			Var0.f_4 = 15000;
			Var0.f_15 = 1;
			WEAPON::_0x5230D3F6EE56CFE6(&(uLocal_1248[1]), 0);
			TASK::TASK_SHOOT_WITH_WEAPON(&(uLocal_1248[1]), &Var0);
			iLocal_1402 = 1;
		}
	}
}

int func_223()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_455(&(uLocal_1248[iVar0])))
		{
			return &(uLocal_1248[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_224()
{
	if (iLocal_1381)
	{
		return;
	}
	if (func_455(&(uLocal_1248[2])) && func_454())
	{
		if (func_54(&(uLocal_1248[2]), 0, &(sLocal_1145[15]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
		{
			iLocal_1381 = 1;
			func_36(&uLocal_1336);
		}
	}
}

int func_225(var uParam0, float fParam1)
{
	if (!func_185(uParam0))
	{
		return 0;
	}
	if (func_460(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_226()
{
	var uVar0;
	float fVar1;
	int iVar2;

	func_449(Local_265[1 /*17*/], "RE_INTER_ANTAGONIZE", &(sLocal_1145[29]), 648122183, 0, 0, 0, 0, 0);
	if (iLocal_1109 == 1)
	{
		fVar1 = 4900f;
	}
	else
	{
		fVar1 = 2500f;
		iVar2 = 1;
	}
	if (func_113(Global_35, Local_369.f_51, 0) < fVar1 || func_461(Global_35, &uLocal_1248, &uVar0, fVar1))
	{
		if (iVar2 && !iLocal_1407)
		{
			if ((PED::IS_TRACKED_PED_VISIBLE(&(uLocal_1248[0])) || PED::IS_TRACKED_PED_VISIBLE(&(uLocal_1248[1]))) || PED::IS_TRACKED_PED_VISIBLE(&(uLocal_1248[2])))
			{
				func_234(2, 0, 0, "HONOR_EVENT_WATCHED_DEATH", &(uLocal_1248[3]), 0, 1065353216, 0);
				iLocal_1407 = 1;
			}
		}
		Local_369.f_44 = 1;
	}
}

void func_227(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_228()
{
	int iVar0;
	var uVar1[1];

	uVar1[0] = Global_35;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		PED::_0x34EDDD59364AD74A(&(uLocal_1248[iVar0]), &uVar1);
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;

	if (!bLocal_1404)
	{
		return;
	}
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[iVar0]), -1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -641223575) && !ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1248[iVar0]), -910600982))
			{
				iVar1 = func_380(iVar0);
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_1248[iVar0]), -1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1182, func_137(iVar0), &(uLocal_1248[iVar0]));
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
				TASK::TASK_PLAY_ANIM(0, &(Local_1190[iVar1 /*2*/]), (Local_1190[iVar1 /*2*/])->f_1, 1090519040, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
				if (func_39(&(uLocal_1248[iVar0]), Global_35))
				{
					TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), 20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
				}
				else
				{
					TASK::_TASK_FLEE_FROM_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_1248[iVar0]), -20f, -5f, 0f), -1f, -1, 1280, 3f, 0);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1248[iVar0]), iLocal_1298);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
			}
		}
		iVar0++;
	}
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			iVar0 = 0;
			while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam2))
			{
				if (iVar1 == 0)
				{
					if (func_462(iParam0, iParam1, iVar0))
					{
						iVar1 = 1;
					}
				}
				iVar0++;
			}
		}
	}
	return iVar1;
}

void func_231()
{
	int iVar0;
	int iVar1;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 1000);
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 1, 4096, -1082130432, -1, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	if (iLocal_1109 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_1248[iVar1]), iVar0, (0.2f * IntToFloat(iVar1)), (0.2f * IntToFloat(iVar1)));
			func_227(iLocal_1269[iVar1]);
			iVar1++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_1248[iVar1]), iVar0, (0.2f * IntToFloat(iVar1)), (0.2f * IntToFloat(iVar1)));
			func_227(iLocal_1269[iVar1]);
			iVar1++;
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_232()
{
	func_449(Local_317[0 /*17*/], "RE_INTER_POS", &(sLocal_1145[31]), -163964935, 0, 0, 0, 1, 0);
	func_449(Local_317[1 /*17*/], "RE_INTER_ANTAGONIZE", &(sLocal_1145[32]), 648122183, 0, 0, 0, 1, 0);
	func_449(Local_317[2 /*17*/], func_450(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_131(Local_317[0 /*17*/], 1, 0);
	func_131(Local_317[1 /*17*/], 1, 0);
	func_451(Local_317[2 /*17*/], 1);
}

var func_233()
{
	var uVar0;
	int iVar1;

	iVar1 = 3;
	while (iVar1 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[iVar1])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar1])))
		{
			uVar0 = &uLocal_1248[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	return uVar0;
}

void func_234(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_96() != -1)
	{
		return;
	}
	if ((Global_36615 && func_463(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_464(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_465(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_466(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_465(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_235(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])) && func_191(&(uLocal_1248[iVar0]), Local_369.f_51, 0) < fParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_236()
{
	if (((iLocal_1389 || iLocal_1109 != 1) || Local_369.f_46) || iLocal_1301 < 3)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1292) && PED::IS_PED_IN_VEHICLE(&(uLocal_1248[0]), iLocal_1292, false))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1294))
		{
			func_467(&iLocal_1294, ENTITY::GET_ENTITY_COORDS(iLocal_1292, true, false), 0f, 0f, 0f, 4f, 5.75f, 5f);
			PED::_0x7C00CFC48A782DC0(iLocal_1294, iLocal_1292, 0f, 7.5f, 0f, 0f, 0f, 0f, 2, 1);
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1294, true, 0))
		{
			func_54(&(uLocal_1248[0]), Global_35, &(sLocal_1145[22]), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1389 = 1;
		}
	}
}

int func_237()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_113(&(uLocal_1248[iVar0]), Local_369.f_51, 1) < 400f)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iLocal_1390 && !iLocal_1392)
	{
		if (func_242(-3f, 1, 0, 0))
		{
			func_54(iLocal_1268, Global_35, "VICTIMIZED_REACT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1392 = 1;
		}
	}
	if (iLocal_1391 && !iLocal_1393)
	{
		if (func_242(-3f, 1, 0, 0))
		{
			func_54(iLocal_1268, Global_35, "RESPONSE_A", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1393 = 1;
		}
	}
	if (iLocal_1109 == 1)
	{
		iVar2 = 5;
		iVar3 = 10;
	}
	else
	{
		iVar2 = 3;
		iVar3 = 6;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		iVar0 = func_441(uLocal_1248[iVar1], Local_33[iVar1 /*21*/], 15f, &Local_317, &(Local_369.f_192), 1f, 1, 0, 0, func_440(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
		if (iVar0 != -1)
		{
			iLocal_1268 = &uLocal_1248[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == 1)
	{
		iLocal_1390 = 1;
		func_442(&Local_317, 0, 0);
		return;
	}
	else if (iVar0 == 0)
	{
		iLocal_1391 = 1;
		func_442(&Local_317, 0, 0);
		return;
	}
}

int func_239(int iParam0, var uParam1)
{
	if (PED::IS_PED_IN_ANY_TRAIN(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0, 1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_VEHICLE(iParam0, false))
	{
		return 0;
	}
	if (AITRANSPORT::_0x660639BC60157048(iParam0, uParam1))
	{
		return 0;
	}
	return 1;
}

void func_240()
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 <= 10)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1182.f_1, func_189(iVar0)))
		{
			if (!iLocal_1382 && func_242(0, 1, 0, 0))
			{
				func_54(&(uLocal_1248[iVar0]), 0, &(sLocal_1145[9]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1382 = 1;
			}
			if (func_115(&(uLocal_1248[iVar0]), 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(&(uLocal_1248[iVar0]), Local_369.f_51, 0, 524672, -1f, -1, 0);
			}
		}
		iVar0++;
	}
}

void func_241()
{
	if (iLocal_1109 == 1)
	{
		if (!iLocal_1383 && func_242(-3f, 1, 0, 0))
		{
			if (func_183(&uLocal_1248, &uLocal_1304, &iLocal_1332, &uLocal_1415, 5, 10, 1))
			{
				if (func_54(func_468(), Global_35, &(sLocal_1145[23]), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_1383 = 1;
				}
			}
		}
	}
}

int func_242(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_219(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_469(fParam0))
	{
		return 0;
	}
	return 1;
}

int func_243()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = 0;
	fVar2 = -1f;
	if (iLocal_1109 == 0)
	{
		iVar0 = 3;
		while (iVar0 <= 6)
		{
			if (func_115(&(uLocal_1248[iVar0]), 0, 1))
			{
				fVar3 = func_180(Global_35, &(uLocal_1248[iVar0]), 1);
				if (fVar3 < fVar2 || fVar2 == -1f)
				{
					fVar2 = fVar3;
					iVar1 = &uLocal_1248[iVar0];
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_1109 == 1)
	{
		iVar0 = 5;
		while (iVar0 <= 10)
		{
			if (func_115(&(uLocal_1248[iVar0]), 0, 1))
			{
				fVar3 = func_180(Global_35, &(uLocal_1248[iVar0]), 1);
				if (fVar3 < fVar2 || fVar2 == -1f)
				{
					fVar2 = fVar3;
					iVar1 = &uLocal_1248[iVar0];
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_244()
{
	if (func_225(&uLocal_1342, 4.5f) && func_242(0, 1, 0, 0))
	{
		if (!iLocal_1385)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[7])) && func_186(Global_35, &(uLocal_1248[7]), 1, 1) < 10f)
			{
				if (!PED::_0x5102307CE88798EB(&(uLocal_1248[7])))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(&(uLocal_1248[7]));
				}
				if (PED::IS_TRACKED_PED_VISIBLE(&(uLocal_1248[7])))
				{
					func_36(&uLocal_1342);
					func_54(&(uLocal_1248[7]), Global_35, "RELIEVED_REACT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1385 = 1;
				}
			}
		}
		if (!iLocal_1384)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[8])) && func_186(Global_35, &(uLocal_1248[8]), 1, 1) < 10f)
			{
				if (!PED::_0x5102307CE88798EB(&(uLocal_1248[8])))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(&(uLocal_1248[8]));
				}
				if (PED::IS_TRACKED_PED_VISIBLE(&(uLocal_1248[8])))
				{
					func_36(&uLocal_1342);
					func_54(&(uLocal_1248[8]), Global_35, "PLAYER_HELPED_TOWN", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1384 = 1;
				}
			}
		}
	}
}

int func_245(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar0])) && func_186(Global_35, &(uLocal_1248[iVar0]), 0, 1) < fParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_246()
{
	if (!func_470(Global_1395482->f_1))
	{
		return 0;
	}
	return func_471(Global_1395482->f_1, 32);
}

bool func_247(int iParam0)
{
	if (func_92(iParam0, 1))
	{
		return false;
	}
	return (1 == func_472(iParam0) || 2 == func_472(iParam0));
}

float func_248(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 16384);
	}
	else
	{
		func_71(&(uParam0->f_1), 16384);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(&(uParam0->f_1), 128);
	}
	else
	{
		func_71(&(uParam0->f_1), 128);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 256);
	}
	else
	{
		func_70(uParam0, 256);
	}
}

void func_252(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_71(uParam0, 268435456);
	}
	else
	{
		func_70(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_71(uParam0, 1073741824);
	}
	else
	{
		func_70(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_71(uParam0, 536870912);
	}
	else
	{
		func_70(uParam0, 536870912);
	}
}

var func_253(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_254(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_473(sParam1));
}

int func_255(int iParam0)
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

void func_256(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_257(int iParam0, bool bParam1, bool bParam2)
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

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_259(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

void func_260(int iParam0, bool bParam1)
{
	if (func_115(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_474(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_261(var uParam0, var uParam1)
{
	if (func_92(uParam0->f_3, 16777216))
	{
		if (func_475(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_262(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_263(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_264(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_115(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_263(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_476(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_265(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_477(uParam0->f_171);
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_478(uParam0);
	func_479(uParam0);
	func_480(uParam0);
	if (!func_481(uParam0))
	{
		if (VOLUME::IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_367(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_399();
	}
	if (!func_482(uParam0->f_3) && !func_92(uParam0->f_3, 256))
	{
		func_483(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_484(uParam0->f_173);
	func_484(uParam0->f_172);
}

void func_266(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_267(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_96() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_269(int iParam0)
{
	if (((func_270(iParam0, 1) && func_270(iParam0, 2)) && func_270(iParam0, 8)) && func_270(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_270(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_272(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_485(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_486(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_486(), iVar3);
		if (func_487(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_488(iParam0);
	if ((func_2(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_489())
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
					if (func_489())
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
					if (func_489())
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
					if (func_489())
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
					if (func_489())
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

void func_274(var uParam0)
{
	func_74(uParam0, 256);
}

bool func_275(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_490(iParam0, 1))
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
		iVar0 = func_491(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_276(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_277(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

int func_278(var uParam0)
{
	if (!func_492(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_492(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

char* func_279()
{
	return "SCRIPT_COMMON@DEAD@MALE";
}

char* func_280()
{
	return "SCRIPT_COMMON@DEAD@FEMALE";
}

Vector3 func_281(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_295(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_493(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_494(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_282(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_92(iParam0, 32))
	{
		if (func_495(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_496(Global_35, &(uParam1->f_12)) };
				if (!func_38(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_497(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_368(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_369());
		if (func_498(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_371(iVar0, func_370(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_371(iVar0, func_370(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_92(iParam0, 1))
		{
			func_499(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_500(iParam0);
}

int func_283(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_501(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_123(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_502(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_502(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_284(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_503(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_92(iParam0, 1))
			{
				if (func_123(iParam0, 2))
				{
				}
			}
			func_504(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_505(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_505(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_247(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_285(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*iParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_493(iParam1))
	{
		if (!func_506(iParam1, iVar0))
		{
			vVar4 = { func_281(iParam1, iVar0) };
			if (!func_38(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_290(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_507(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_38(vVar4))
	{
	}
	return vVar1;
}

int func_286(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_64("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_287(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_493(iParam0))
	{
		vVar1 = { func_281(iParam0, iVar0) };
		if (func_508(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_288(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_289(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_509(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_510(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_38(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_511(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_286(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_290(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_284(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_92(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_291(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*uParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_292(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_512(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_513(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_514(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_515(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_293(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_294(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

bool func_295(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_296(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_297(int iParam0, int iParam1)
{
	if (func_516(iParam0))
	{
		return;
	}
	if (func_517(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_298(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_70(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (func_99(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

float func_301()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_304()
{
	return Local_22.f_1;
}

Vector3 func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -0.0252f, 0.6023f, 1.0499f;
				case 1:
					return 1.3065f, -2.8402f, 1.0492f;
				case 2:
					return -1.3933f, 3.8568f, 1.0491f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 180.0955f;
				case 1:
					return 0f;
				case 2:
					return 0f;
			}
			break;
	}
	return 0f;
}

var func_307()
{
	return Local_18.f_1;
}

Vector3 func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1.0826f, -2.0441f, 1.0306f;
				case 1:
					return -1.0264f, 2.1553f, 1.0319f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 87.9355f;
				case 1:
					return -90.6245f;
			}
			break;
	}
	return 0f;
}

var func_310()
{
	return Local_14.f_1;
}

Vector3 func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0.0737f, -5.0265f, 0.9923f;
				case 1:
					return -1.2294f, -4.8264f, 0.9902f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -0.9764f;
				case 1:
					return -0.9764f;
			}
			break;
	}
	return 0f;
}

int func_313(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_518(&uParam1))
	{
		return 1;
	}
	if (!func_188(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_314(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_519(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_316(int iParam0)
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

void func_317(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_115(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_318(var uParam0)
{
	return func_325(*uParam0, 4);
}

bool func_319(var uParam0)
{
	return func_325(*uParam0, 64);
}

bool func_320(var uParam0)
{
	return func_325(*uParam0, 8);
}

bool func_321(var uParam0)
{
	return func_325(*uParam0, 128);
}

bool func_322(var uParam0)
{
	return func_325(*uParam0, 2048);
}

void func_323(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_324(var uParam0)
{
	return func_325(*uParam0, 1024);
}

bool func_325(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_326(var uParam0)
{
	return func_325(*uParam0, 256);
}

void func_327(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_328(var uParam0)
{
	return func_325(*uParam0, 512);
}

bool func_329(var uParam0)
{
	return func_325(*uParam0, 4096);
}

int func_330(int iParam0, int iParam1)
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
	if (func_325(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_325(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_331(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "AA";
		case 1:
			return "AA_2";
		case 2:
			return "AM";
		case 3:
			return "AM_2";
		case 4:
			return "AP";
		case 5:
			return "AMD";
		case 6:
			return "BR";
		case 7:
			return "BT";
		case 8:
			return "BA";
		case 9:
			return "BTR";
		case 10:
			return "CA";
		case 11:
			return "CR";
		case 12:
			return "CP";
		case 13:
			return "CR";
		case 14:
			return "CQ";
		case 15:
			return "CC";
		case 16:
			return "CW";
		case 17:
			return "DAA";
		case 18:
			return "DAB";
		case 19:
			return "DAS";
		case 20:
			return "DJ";
		case 21:
			return "DIB";
		case 22:
			return "DOMD";
		case 23:
			return "DM";
		case 24:
			return "DC";
		case 25:
			return "DD";
		case 26:
			return "DW";
		case 27:
			return "ES";
		case 28:
			return "EX";
		case 29:
			return "FLO";
		case 30:
			return "FOOTR";
		case 31:
			return "FO";
		case 32:
			return "GP";
		case 33:
			return "HAT";
		case 34:
			return "HR";
		case 35:
			return "HR_2";
		case 36:
			return "HU";
		case 37:
			return "IK";
		case 38:
			return "IR";
		case 39:
			return "IT";
		case 40:
			return "KV";
		case 41:
			return "KT";
		case 42:
			return "KT_V2";
		case 64:
			return "KD";
		case 65:
			return "KS";
		case 43:
			return "LRU";
		case 44:
			return "GELRC";
		case 45:
			return "LSF";
		case 46:
			return "LP";
		case 47:
			return "LDRUNK";
		case 48:
			return "LDRUNK_V1";
		case 49:
			return "LDRUNK_V1_2";
		case 50:
			return "LDRUNK_V2";
		case 51:
			return "LDRUNK_V2_2";
		case 52:
			return "LF";
		case 53:
			return "MC";
		case 54:
			return "MC_2";
		case 55:
			return "OR";
		case 56:
			return "OT";
		case 57:
			return "PAR";
		case 58:
			return "PT";
		case 59:
			return "PP";
		case 60:
			return "PISS";
		case 61:
			return "PCA";
		case 62:
			return "PO";
		case 63:
			return "PW";
		case 66:
			return "RL";
		case 67:
			return "RP";
		case 68:
			return "RD";
		case 69:
			return "FND_STD";
		case 70:
			return "SAM";
		case 71:
			return "SAF";
		case 72:
			return "SOFF";
		case 73:
			return "SS";
		case 74:
			return "SB";
		case 75:
			return "SB_2";
		case 76:
			return "STR";
		case 77:
			return "STF";
		case 78:
			return "TC";
		case 79:
			return "TB";
		case 80:
			return "TC";
		case 81:
			return "TOWNR";
		case 82:
			return "TOWNR_2";
		case 83:
			return "TWW";
		case 84:
			return "TA";
		case 85:
			return "TGH";
		case 86:
			return "TWO";
		case 87:
			return "TWO_2";
		case 88:
			return "TH";
		case 89:
			return "WT";
		case 90:
			return "WA";
		case 91:
			return "WC";
		case 92:
			return "W";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

bool func_332(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_333(int iParam0)
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

int func_334(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_520(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_521((375 + iVar28), 1);
			if (func_522(iParam0, &Var0, iVar5, 0))
			{
				if (func_523(iParam0, &Var6, iVar5))
				{
					Var29 = { func_524(iParam0, Var0, iVar5, 0) };
					func_525(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_526(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_527(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_528(iParam0, iParam1);
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

void func_335(int iParam0, int iParam1, float fParam2)
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

bool func_336(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_337(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_338()
{
	return &Global_1935436 == 2;
}

void func_339(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_340(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_92(iParam0, 2))
	{
		func_530(iParam0, func_529(iParam1));
	}
	else
	{
		func_532(iParam0, func_531());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_533(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_534(iParam0, 0);
	func_535(iParam0);
	func_536(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_92(iParam0, 16))
	{
		func_341(iParam0, 0, 0, 0, 0);
	}
}

void func_341(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_537() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_295(iVar1) && !func_92(iVar1, iParam2)) && (!bParam3 || !func_357(iVar1))) && (!bParam4 || !func_538(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_539(iVar0);
			}
		}
		iVar0++;
	}
}

int func_342(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_343(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_498(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_92(uParam0->f_3, 1073741824))
			{
				func_540(2, -1, 0, 0, 0);
			}
			else
			{
				func_540(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_540(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_541(1, uParam0->f_177))
				{
					func_542(16, uParam0->f_177);
					func_543(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_544(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_540(8, -1, 0, 0, 0);
	}
}

int func_344()
{
	if (func_332(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_545())
		{
			return 1;
		}
	}
	return 0;
}

bool func_345(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_346(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_92(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_92(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_92(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_92(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_92(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_92(uParam0->f_3, 1))
		{
		}
		else if (func_92(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_347(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_546(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
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
					if (iParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_547(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_301() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_348(var uParam0, int iParam1, float fParam2)
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
	func_125(uParam0);
	return 1;
}

bool func_349()
{
	return (Global_1894899 & 1 != 0 && func_360() != -1);
}

int func_350(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_351(int iParam0)
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
	iVar0 = func_549(func_548());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_352(int iParam0, int iParam1)
{
	return (func_342(iParam0) && iParam1) != 0;
}

int func_353(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_550(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_551(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_552(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_553(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_554(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_555(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_556(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_354(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_557(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
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

int func_356(int iParam0, bool bParam1, int iParam2)
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
		if (func_558())
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
		iVar0 = func_559(&(Global_1898164->f_1[0 /*5*/]));
		if (func_560(iVar0) && func_561(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_562(&(Global_1898164->f_1[0 /*5*/])))
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

int func_357(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	if (func_563(64) && func_564(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_358(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_565(iVar0) || func_566(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_359()
{
	return Global_1894899 & 4 != 0;
}

int func_360()
{
	return Global_1894899->f_2;
}

int func_361(int iParam0)
{
	if (!func_567(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_362(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_363(vector3 vParam0, int iParam3)
{
	if (!func_362(iParam3))
	{
		return 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_364(vector3 vParam0)
{
	float fVar0;

	if (func_38(vParam0))
	{
		return false;
	}
	fVar0 = func_263(func_349(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_365(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_36(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_36(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_185(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_225(uParam0, fParam2))
		{
			return 1;
		}
		if (func_185(uParam0))
		{
			func_459(uParam0);
		}
	}
	return 0;
}

bool func_366(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_367(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_38(vParam0))
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
			if (func_508(vVar2, vParam0, 2f, 1))
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

float func_368(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0f;
	}
	if (!func_568(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_369()
{
	return "unnamed";
}

char* func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_371(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_499(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

bool func_372(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_373(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_374(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_375(int iParam0)
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

void func_376(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_375(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_569(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_570(iVar0);
	*uParam0 = 0;
}

void func_377(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_378(int* iParam0, var uParam1)
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
	func_571(iParam0, uParam1, 1);
	func_572(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_379(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 6:
			return 4;
	}
	return 0;
}

void func_381(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iParam0])))
	{
		return;
	}
	if (iLocal_1109 == 1)
	{
		iVar0 = -577630801;
	}
	else
	{
		iVar0 = -1464742217;
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
	if (func_230(&(uLocal_1248[iParam0]), &(iLocal_1285[0]), iVar0))
	{
		TASK::_TASK_DISEMBARK_VEHICLE_2(0, 1073741824, 1);
	}
	TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_369.f_51, iParam3, 256, 80f, -1, 0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
	TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_1248[iParam0]), iLocal_1298, fParam1, fParam2);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
}

float func_382(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_186(Global_35, iParam0, bParam1, iParam2);
}

int func_383(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_384(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
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
	return func_573(iParam0, &Var0);
}

int func_385(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_386(int iParam0)
{
	int iVar0;

	iVar0 = func_575(func_574(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_387(var uParam0)
{
	if (func_388(81053684, uParam0))
	{
		return 1;
	}
	if (func_388(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_575(func_574(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_576(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		case 6:
			return 1;
		case 7:
			return 2;
		case 8:
			return 3;
		case 9:
			return 4;
		case 10:
			return 5;
	}
	return 0;
}

void func_390(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_577();
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
			func_578(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_391(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_392(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_96() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_579(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_579(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_421(iVar0) == -1)
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

void func_393(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_580(uParam0);
	}
}

int func_394(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_421(iParam2);
	}
	else
	{
		iVar1 = func_420(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_421(iParam0);
	}
	else
	{
		iVar0 = func_420(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_2(*uParam1, 8388608))
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

float func_395(int iParam0, int iParam1)
{
	return func_186(iParam0, iParam1, 1, 1);
}

float func_396(var uParam0)
{
	return uParam0->f_26;
}

int func_397(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_398(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(uParam0, 134217728);
	}
	else
	{
		func_70(uParam0, 134217728);
	}
}

void func_399()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_400(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_186(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_581(iVar0, 0)))
		{
			if (func_582(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_401(var uParam0)
{
	return uParam0->f_17;
}

int func_402(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_2(*uParam0, 4194304))
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

int func_403(var uParam0)
{
	return uParam0->f_18;
}

int func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_581(iVar0, 0)))
		{
			if (func_583(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_405(bool bParam0, var uParam1, var uParam2)
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

var func_406(var uParam0)
{
	return uParam0->f_23;
}

int func_407(var uParam0)
{
	return uParam0->f_21;
}

int func_408(var uParam0)
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

int func_409(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_584(iParam0, vParam4, 0.5f))
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

int func_410(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_585(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
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

int func_412(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_355(iParam1))
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

int func_413(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_355(iParam1))
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

int func_414(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_355(iParam1))
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

int func_415(int iParam0, var uParam1)
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

int func_416(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_586(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_417(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_418(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_191(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_419(var uParam0)
{
	return uParam0->f_24;
}

int func_420(int iParam0)
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

int func_421(int iParam0)
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

int func_422(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_415(Global_35, &iVar1))
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
		fVar2 = func_186(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_186(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_423(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_557(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_424(uParam1, iVar0))
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
				if (!bParam2 || !func_424(uParam1, iVar1))
				{
					if (func_191(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_424(var uParam0, int iParam1)
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

int func_425(int iParam0)
{
	if (func_587())
	{
		return 0;
	}
	return func_588(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_426(var uParam0)
{
	return uParam0->f_20;
}

int func_427(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_428(var uParam0, int iParam1, float fParam2, float fParam3)
{
	bool bVar0;

	if (fParam3 >= 0f)
	{
		if (fParam3 < fParam2)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = func_186(iParam1, Global_35, 1, 1) < fParam2;
	}
	if (bVar0)
	{
		if (!*uParam0 & 4 != 0)
		{
			func_18(uParam0, 1);
			return 1;
		}
	}
	else if (*uParam0 & 4 != 0)
	{
		func_18(uParam0, 0);
		return 1;
	}
	return 0;
}

int func_429(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_589(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_590(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_591())
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

int func_430(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_355(iParam0))
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

float func_431(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_432(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_433(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_434(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_375(iParam0))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

int func_435(var uParam0, float fParam1)
{
	if (func_225(uParam0, fParam1))
	{
		func_459(uParam0);
		return 1;
	}
	return 0;
}

void func_436()
{
	float fVar0;

	if (((iLocal_1371 && iLocal_1109 == 0) || Local_369.f_46) || func_185(&uLocal_1345))
	{
		return;
	}
	if (bLocal_1374)
	{
		if (!bLocal_1380)
		{
			if (iLocal_1109 == 1 && iLocal_1267 == &uLocal_1248[2])
			{
				if (func_225(&uLocal_1333, 0.8f))
				{
					func_54(iLocal_1267, Global_35, "HEADS_UP_THREATEN", 0, -1082130432, 1, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
					bLocal_1380 = true;
				}
			}
			else if (func_225(&uLocal_1333, 0.8f))
			{
				if (bLocal_1366)
				{
					func_54(iLocal_1267, Global_35, &(sLocal_1145[7]), 0, -1082130432, 2, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
				}
				else
				{
					func_54(iLocal_1267, Global_35, &(sLocal_1145[6]), 0, -1082130432, 0, 0, 0, 2, 1, 1, -1824788778, 1, 0, 0);
				}
				bLocal_1380 = true;
			}
		}
		if (func_592(iLocal_1267, -1758697641))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1267, 1f);
		}
		fVar0 = func_186(Global_35, iLocal_1267, 0, 1);
		if (fVar0 > (fLocal_1425 + 5f))
		{
			func_131(Local_317[1 /*17*/], 0, 0);
			func_593();
			iLocal_1303 = 0;
		}
		else if (func_435(&uLocal_1333, 18f) || (fVar0 < 1.5f && !func_594()))
		{
			if (!bLocal_1379)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1267))
				{
					PED::SET_PED_RESET_FLAG(iLocal_1267, 42, true);
				}
				if (!func_179(iLocal_1267, &uLocal_1304, &iLocal_1332, 0))
				{
					return;
				}
				if (!Local_369.f_46)
				{
					func_55();
				}
			}
		}
	}
}

bool func_437(var uParam0)
{
	return ENTITY::_0x8DE41E9902E85756(uParam0);
}

void func_438(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = func_595(iParam0);
		func_596(iVar0, ENTITY::_0xC346A546612C49A9(iParam0));
	}
	if (bParam1)
	{
		func_597(iParam0, 0);
	}
}

int func_439()
{
	if (iLocal_1109 == 1)
	{
		if (iLocal_1267 == &uLocal_1248[4])
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

int func_440(int iParam0, int iParam1, int iParam2)
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

var func_441(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_598(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_599(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_600(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_601(558))
				{
					func_602(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_442(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_131((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

void func_443(int iParam0, float fParam1)
{
	char* sVar0;
	vector3 vVar1;

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Ped_Throat_slash";
			break;
		case 1:
			sVar0 = "PD_Blood_face_right";
			break;
		case 2:
			sVar0 = "PD_Blood_face_left";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Savage_Fight_Knife_Chest";
			break;
		case 1:
			sVar0 = "PD_Savage_Fight_Arrow_Left_Shoulder";
			break;
		case 2:
			sVar0 = "PD_Savage_Fight_Axe_Back";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Fall_death";
			break;
		case 1:
			sVar0 = "PD_Blood_Soak_Left_Arm_Murder_for_Hire_Bump";
			break;
		case 2:
			sVar0 = "PD_Blood_Soak_Right_Arm_Murder_for_Hire_Bump";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= fParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		func_188(&vVar1, 50, 10, 0);
		GRAPHICS::_0xFA2ECC78A6014D4F(vVar1, 1);
	}
}

void func_444(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_603(iParam0, 1f, 0);
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, iParam3, iParam4, -1, 679940 | iParam5, 0, 0, iParam6, 0, 0, 0);
}

int func_445(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_446(int iParam0, bool bParam1, float fParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_444(iParam0, func_279(), func_604(MISC::GET_RANDOM_INT_IN_RANGE(0, 12)), 1148846080, -1065353216, iParam3, 0);
	}
	else
	{
		func_444(iParam0, func_280(), func_604(MISC::GET_RANDOM_INT_IN_RANGE(0, 12)), 1148846080, -1065353216, iParam3, 0);
	}
	if (bParam1)
	{
		func_443(iParam0, fParam2);
	}
}

bool func_447(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_605(iParam0);
		return func_606(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_448(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_607(uParam0, iParam1, iParam3);
	func_608(uParam0, iParam2, iParam3);
}

void func_449(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_375(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_609(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_434(iParam0->f_6, iParam0->f_5, 0);
			}
			func_610(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_190(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_450(int iParam0)
{
	if (func_611(iParam0))
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

void func_451(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_372(iParam0, 4))
		{
			func_376(&(iParam0->f_6), 1, 1);
			func_373(iParam0, 4);
		}
	}
	else if (func_372(iParam0, 4))
	{
		func_374(iParam0, 4);
		func_373(iParam0, 14);
	}
}

void func_452(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (!bParam7 || !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		fVar0 = func_612(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
		if ((!func_2(iParam3, 4) && !uParam0->f_182) && fVar0 >= fParam4)
		{
			func_613(uParam0, iParam1, 1);
		}
		else if (func_2(iParam3, 4) || (!func_2(iParam3, 2) || uParam0->f_182))
		{
			if (iParam2 != 0 && fVar0 >= fParam5)
			{
				if (iParam6 <= -1 || uParam0->f_180 < iParam6)
				{
					func_209(iParam2, iParam1, 1);
					if (!func_2(iParam3, 4))
					{
						if (func_2(iParam3, 1))
						{
							if (!uParam0->f_182)
							{
								uParam0->f_182 = 1;
							}
						}
					}
					if (iParam6 <= -1)
					{
						uParam0->f_180++;
					}
				}
			}
		}
	}
}

void func_453(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_498(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_482(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_614(iVar0) < func_615(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_533(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

int func_454()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(&(uLocal_1248[iVar0])) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uLocal_1248[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_455(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_456()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_1109 == 0)
	{
		iVar1 = 0;
		iVar2 = 2;
	}
	else
	{
		iVar1 = 0;
		iVar2 = 4;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (func_115(&(uLocal_1248[iVar0]), 0, 1) && func_616(&(uLocal_1248[iVar0]), Global_35, 1, 20f, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_457()
{
	if (((func_184(&(uLocal_1248[2])) && func_184(&(uLocal_1248[3]))) && func_184(&(uLocal_1248[4]))) && PED::IS_PED_IN_VEHICLE(&(uLocal_1248[0]), iLocal_1292, false))
	{
		if (func_178(&(uLocal_1248[0])))
		{
			if (bLocal_1374)
			{
				if (func_113(Global_35, Local_369.f_51, 1) < 900f && !bLocal_1379)
				{
					func_55();
					return 0;
				}
			}
		}
		if (func_115(&(uLocal_1248[1]), 0, 1) && !PED::IS_PED_IN_VEHICLE(&(uLocal_1248[1]), iLocal_1292, false))
		{
			PED::SET_PED_INTO_VEHICLE(&(uLocal_1248[1]), iLocal_1292, -2);
		}
		return 1;
	}
	return 0;
}

Vector3 func_458(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

void func_459(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_460(var uParam0)
{
	if (!func_185(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_617(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_301() - uParam0->f_1);
}

int func_461(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar0]) && iParam0 != uParam1[iVar0])
		{
			if (func_180(iParam0, uParam1[iVar0], 1) < fParam3)
			{
				*uParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_462(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(iParam1, iParam2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam0, iVar0);
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
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

int func_464(int iParam0)
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

void func_465(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_618();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_619(iParam0);
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
	if (func_620(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_587())
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
	iVar1 = func_618();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_622(iVar1);
		func_624(func_623(), 0, 4000);
		func_625(Global_40.f_11095.f_35);
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
		func_626(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_628(func_627(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_464(14))
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
					sParam4 = func_629(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_630(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_630(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_628(func_627(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_464(4))
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
					sParam4 = func_629(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_630(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_630(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_627(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_631(10, 1);
	}
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_467(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_369());
	}
}

int func_468()
{
	var uVar0;
	int iVar1;

	iVar1 = 5;
	while (iVar1 <= 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1248[iVar1])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_1248[iVar1])))
		{
			uVar0 = &uLocal_1248[iVar1];
		}
		else
		{
			iVar1++;
		}
	}
	return uVar0;
}

int func_469(float fParam0)
{
	if (func_632(1))
	{
		return 1;
	}
	if (func_185(&uLocal_0) && !func_435(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_470(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_471(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_472(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

char* func_473(char* sParam0)
{
	return sParam0;
}

int func_474(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && iParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
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

int func_475(int iParam0)
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

void func_476(int* iParam0)
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

void func_477(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_478(var uParam0)
{
	if (func_375(uParam0->f_162))
	{
		func_376(&(uParam0->f_162), 1, 1);
	}
	if (func_375(uParam0->f_163))
	{
		func_376(&(uParam0->f_163), 1, 1);
	}
	if (func_375(uParam0->f_164))
	{
		func_376(&(uParam0->f_164), 1, 1);
	}
	if (func_375(uParam0->f_165))
	{
		func_376(&(uParam0->f_165), 1, 1);
	}
}

void func_479(var uParam0)
{
	if (uParam0->f_170)
	{
		func_633();
	}
}

void func_480(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_634(32);
		func_483(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_481(var uParam0)
{
	if (func_635(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_636(uParam0->f_3);
		func_343(uParam0, 0, 1);
		func_637(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_638(0, 0);
		return 1;
	}
	return 0;
}

bool func_482(int iParam0)
{
	if (!func_295(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_472(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_96() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_484(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_485(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_639(&iVar1, -2147483648);
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

int func_486()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_487(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_96() != -1)
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

int func_488(int iParam0)
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

int func_489()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

bool func_490(int iParam0, int iParam1)
{
	if (!func_640(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (iParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_491(int iParam0)
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

int func_492(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_495(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			return 0;
		}

Vector3 func_496(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_38(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_497(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_64("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_498(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_499(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_38(vParam0))
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
		if (func_366(vParam0))
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
	func_641(iVar0, bParam8);
	return iVar0;
}

void func_500(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	func_642(iParam0);
}

void func_501(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_502(int iParam0)
{
	if (func_123(iParam0, 2))
	{
		return 200;
	}
	if (func_123(iParam0, 4))
	{
		return 70;
	}
	if (func_123(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_503(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_92(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_531() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_92(iParam0, 2);
		bVar1 = func_92(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_349())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_504(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}
	if (func_123(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_505(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam1 = 240f;
	}
	else
	{
		*uParam1 = 215f;
	}
	*uParam0 = 110f;
	if (func_123(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_123(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_506(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_494(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_507(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_38(vParam1))
	{
		return 0;
	}
	if (func_512(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_247(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_508(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_509(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_263(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_515(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_167();
			uParam4->f_2 = func_191(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_515(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_167();
		uParam4->f_2 = func_191(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_510(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_167() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_511(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_38(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_512(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_92(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_643(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_92(iParam0, 33554432))
	{
		if (func_644(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_513(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_123(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_92(iParam0, 1) && !func_92(iParam0, 2))
	{
		if (func_92(iParam0, 4096) || func_92(iParam0, 2048))
		{
			if (func_645(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_514(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_646())
	{
		return 0;
	}
	return 1;
}

bool func_515(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_431(vVar0, vParam0) > func_431(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_516(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_518(var uParam0)
{
	return func_325(*uParam0, 1);
}

void func_519(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_647(iParam1))
		{
			func_648(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
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
			func_649(iParam0, 0, 1);
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
			func_650(iParam0, 0);
			bVar0 = true;
		}
		func_651(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

struct<5> func_520(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_652(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_653(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_524(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_654(bParam1) };
			if (iParam2 && func_655(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_522(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_522(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_523(iParam0, &Var5, 1728382685))
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
			Var0 = { func_656(bParam1) };
			switch (func_576(iParam0))
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
			if (func_657(iParam0, -1823706425))
			{
				Var0 = { func_524(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_657(iParam0, -1483207246))
			{
				Var0 = { func_524(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_658(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_521(int iParam0, int iParam1)
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

bool func_522(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_659(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_523(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_660(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_524(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_661(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_662(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_525(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (func_663(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_658(*uParam1, &Var0, bParam6, 0))
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
	if (!func_526(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_662(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_526(bool bParam0)
{
	if (func_96() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_662(bParam0));
}

int func_527(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_664(iParam0))
	{
		return 0;
	}
	if (!func_526(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_130(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_529(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_665(1);
	}
	else
	{
		uVar0 = func_666(iParam0);
	}
	return uVar0;
}

void func_530(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_667(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_668(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

int func_531()
{
	return Global_1897952->f_41;
}

void func_532(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_123(iParam0, 8192))
	{
		iVar0 = func_668(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_533(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
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
	func_483(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_534(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_92(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_453(262144, iVar0, 0, 1);
		}
	}
	if (func_92(iParam0, 128))
	{
		func_453(128, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 524288))
	{
		func_453(524288, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 536870912))
	{
		func_453(536870912, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 4194304))
	{
		func_453(4194304, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 8388608))
	{
		func_453(8388608, iVar0, 0, 1);
	}
}

void func_535(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_536(bool bParam0)
{
	if (!bParam0 && func_669(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_537()
{
	return Global_1310750->f_16037;
}

int func_538(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_539(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_295(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_670(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_671(Global_1393447, 1);
	func_672();
	func_673();
	func_674((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_167() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_675();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_453(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_453(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_453(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_676(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_677(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_677((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_541(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_542(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_543(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_544(int iParam0)
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

bool func_545()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_546(var uParam0, float fParam1, float fParam2, var uParam3)
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

int func_547(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_546(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_301() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

int func_548()
{
	return &Global_1899515;
}

int func_549(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_551(int iParam0)
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

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_557(bool bParam0, var uParam1, var uParam2)
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

int func_558()
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

int func_559(int iParam0)
{
	if (!func_562(iParam0))
	{
		return -1;
	}
	return func_679(func_678(iParam0));
}

bool func_560(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_561(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_562(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_563(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_564(int iParam0)
{
	return func_92(iParam0, Global_1310750->f_16072 | 64);
}

int func_565(int iParam0)
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

int func_566(int iParam0)
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

bool func_567(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_568(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

int func_569(int iParam0)
{
	return iParam0;
}

void func_570(int iParam0)
{
	if (!func_680(iParam0))
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

void func_571(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_376(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_681(iParam0, 0);
		}
	}
}

void func_572(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_375(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_376(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

var func_573(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_574(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_682(iVar0);
}

int func_575(int iParam0, int iParam1)
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

int func_576(int iParam0)
{
	struct<2> Var0;

	if (!func_661(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_577()
{
	if (func_683())
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

void func_578(var uParam0, var uParam1)
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

int func_579(var uParam0)
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

void func_580(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_70(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::DOES_THREAD_OWN_THIS_ENTITY(&(Global_1935630->f_34[iVar0])))
				{
					func_71(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_581(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_582(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_583(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_583(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_584(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_585(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_586(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_587()
{
	if (func_96() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_588(int iParam0, bool bParam1)
{
	switch (func_684(iParam0))
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

float func_589(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_419(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_685(uParam0);
	}
	return func_419(uParam0);
}

float func_590(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_591()
{
	int iVar0;
	int iVar1;

	iVar0 = func_549(func_548());
	iVar1 = func_686(func_548());
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

int func_592(int iParam0, int iParam1)
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

void func_593()
{
	vector3 vVar0;
	float fVar3;

	if (iLocal_1109 == 1)
	{
		return;
	}
	if (func_115(iLocal_1267, 0, 1) && !func_687(iLocal_1267, -258459266))
	{
		if (iLocal_1109 == 0)
		{
			vVar0 = { (Local_563[2 /*32*/])->f_6 + Vector(1f, 0f, 0f) };
			fVar3 = (Local_563[2 /*32*/])->f_9;
			func_227(iLocal_1269[2]);
		}
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 1);
		TASK::CLEAR_PED_TASKS(iLocal_1267, 1, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_1298);
		func_688(0, -258459266, vVar0, fVar3, -1, 1, 0, 0, -1082130432);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_1298);
		TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1267, iLocal_1298, 0.8f, 0.8f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_1298);
	}
	if (!bLocal_1380)
	{
		bLocal_1374 = false;
	}
}

int func_594()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1267))
	{
		return 0;
	}
	if (((bLocal_1374 && iLocal_1303 == 1) && func_592(iLocal_1267, 242628503)) && TASK::GET_SEQUENCE_PROGRESS(iLocal_1267) == 0)
	{
		return 1;
	}
	return 0;
}

int func_595(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = func_689(iParam0);
	}
	return iVar0;
}

void func_596(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630->f_12)
	{
		iVar0 = func_690(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_691(iParam0))
			{
				iVar1 = 463;
			}
			uVar2 = func_692(iParam0);
			func_693(iVar1, uVar2, 1);
		}
	}
}

void func_597(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

void func_598(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_599(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_598(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_263(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_36(&(iParam1->f_13));
		}
		if (func_694(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_695(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_599(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_377(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_696(*uParam0, 1, 1);
						}
					}
					else if (func_697(iParam1, 22))
					{
						func_696(*uParam0, 0, 1);
					}
				}
				if (func_698(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_699(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_700(iParam8);
					if (func_701(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_702(uParam3);
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
					func_703(iParam1, uParam3, fVar8);
					if (func_704(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_572(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_705(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_698(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_706(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_701(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_699(uParam0, func_698(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_700(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_572(uParam3, 0, 0, 1, 1);
					}
					func_707(iParam1, 1);
				}
				func_703(iParam1, uParam3, fVar8);
				if (func_705(uParam0, iParam1, fParam4, bVar6))
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
			func_378(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_600(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_708(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		iVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_54(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_601(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_96() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_602(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_709(iParam0, &iVar0, &iVar1);
	if (!func_710(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_711(iVar0, iVar1);
}

void func_603(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_712(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

char* func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACEDOWN_01";
		case 1:
			return "FACEUP_01";
		case 2:
			return "FACEUP_02";
		case 3:
			return "FACEUP_03";
		case 4:
			return "FACEUP_04";
		case 5:
			return "FACEUP_05";
		case 6:
			return "FACEUP_06";
		case 7:
			return "FACEUP_07";
		case 8:
			return "ONSIDE_01";
		case 9:
			return "ONSIDE_02";
		case 10:
			return "ONSIDE_03";
		case 11:
			return "ONSIDE_04";
		default:
			break;
	}
	return func_713("[BEAT]", "GET_GENERIC_DEATH_ANIM_NAME_BY_INDEX: Invalid Index.");
}

int func_605(int iParam0)
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

var func_606(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_607(var uParam0, int iParam1, int iParam2)
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

void func_608(var uParam0, int iParam1, int iParam2)
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

void func_609(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_375(iParam0))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_610(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_375(iParam0))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	if (bParam1)
	{
		func_714(iParam0, 4);
		func_715(iVar0, 1);
		func_716(iVar0, 1);
	}
	else
	{
		func_717(iParam0, 4);
		func_716(iVar0, 0);
	}
}

int func_611(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

float func_612(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_613(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_182 || iParam2 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			uParam0->f_183 = MAP::_0x23F74C2FDA6E7C61(1260140857, iParam1);
			uParam0->f_182 = 1;
		}
	}
}

int func_614(int iParam0)
{
	if (func_295(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_615(int iParam0)
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

bool func_616(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_718(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_719(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_617(var uParam0)
{
	return func_432(*uParam0, 2);
}

int func_618()
{
	int iVar0;

	iVar0 = func_720();
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

int func_619(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_96() != -1)
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
	fVar1 = func_263(MISC::ABSF(fVar1) < 1f, func_263(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_620(int iParam0)
{
	if (!func_721(iParam0))
	{
		return 0;
	}
	return func_722(iParam0);
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

int func_622(int iParam0)
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

int func_623()
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

void func_624(int iParam0, bool bParam1, int iParam2)
{
	func_723((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_724(iParam0);
}

void func_625(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_725(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_626(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_726(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_727(iVar5, &iVar2, &iVar0))
			{
				if (!func_661(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_728(iVar2);
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
							if (func_653(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_618() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_618() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_729();
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

struct<2> func_627(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_628(var uParam0, var uParam1, int iParam2)
{
	STATS::STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_629(int iParam0)
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

var func_630(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_730(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_631(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_731(iParam0))
	{
		return 0;
	}
	if (!func_732())
	{
		return 0;
	}
	if (!func_733(iParam0, &iVar0, &iVar1))
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

bool func_632(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_633()
{
	func_734(23);
}

void func_634(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_635(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_636(int iParam0)
{
	int iVar0;

	iVar0 = func_735(iParam0);
	if (iVar0 != 0)
	{
		func_736(-1, 24, 0, iVar0);
	}
}

void func_637(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_628(func_627(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_92(iParam0, 2))
	{
		func_737(iParam0, func_529(iParam3));
	}
	if (func_92(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_531();
		}
		func_738(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_123(iParam0, 65536))
	{
		func_739(iParam0, iParam1);
		func_740(iParam0, func_281(iParam0, iParam1));
		func_634(128);
	}
	func_533(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_534(iParam0, 1);
	if (!bParam2)
	{
		func_634(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_741(524288);
	}
	if (func_742(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_742(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_638(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_743(&Global_0, 8);
	}
	if (!func_732() || func_96() != -1)
	{
		return;
	}
	func_743(&Global_0, 1);
}

void func_639(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_640(int iParam0, bool bParam1)
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

int func_641(int iParam0, bool bParam1)
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

void func_642(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_643(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_38(vParam0))
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

bool func_644(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_38(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_645(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_38(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_248(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_646()
{
	int iVar0;
	int iVar1;

	iVar0 = func_744(func_360());
	if (iVar0 == 8)
	{
		iVar1 = func_361(func_360());
		if (func_363(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_745(func_665(0)))
	{
		return 0;
	}
	if (func_746())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_647(int iParam0)
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

void func_648(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_747(iParam0, iParam1))
		{
			if (func_748(iParam0, iParam1))
			{
				if (func_749(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_750(iParam0);
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

void func_649(int iParam0, int iParam1, bool bParam2)
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

void func_650(int iParam0, bool bParam1)
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

void func_651(int iParam0, int iParam1)
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

struct<4> func_652(bool bParam0)
{
	return func_524(1328661203, func_751(), -1591664384, bParam0);
}

int func_653(int iParam0)
{
	vector3 vVar0;

	if (!func_661(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_654(bool bParam0)
{
	int iVar0;

	iVar0 = func_662(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224214))
		{
			*Global_1224214 = { func_524(923904168, func_652(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224222))
		{
			*Global_1224222 = { func_524(923904168, func_652(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_524(923904168, func_652(bParam0), -740156546, 0);
}

int func_655(int iParam0, bool bParam1)
{
	if (func_576(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_752(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_656(bool bParam0)
{
	int iVar0;

	iVar0 = func_662(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(Global_1224218))
		{
			*Global_1224218 = { func_524(271701509, func_652(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_524(271701509, func_652(bParam0), 12999093, 0);
}

int func_657(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_576(iParam0);
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

int func_658(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_662(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_659(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_661(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_524(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_662(bParam6), &Var0, 0);
	return uVar4;
}

int func_660(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_662(0);
	*uParam1 = { func_524(iParam0, func_654(0), iParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_661(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_662(bool bParam0)
{
	if (func_96() == -1)
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

int func_663(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_664(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_665(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_753(1, 0, 0);
	}
	else
	{
		iVar0 = func_360();
	}
	return func_666(iVar0);
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_667(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_668(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

bool func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_754(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_670(int iParam0)
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

void func_671(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_672()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_755(iVar0, 128))
		{
			func_756(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_673()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_755(iVar0, 128) && func_755(iVar0, 1))
		{
			func_756(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_674(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_675()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_92(iVar0, 16777216))
		{
			if (!func_757(iVar0))
			{
				func_758(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_676(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_483(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_483(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_483(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_483(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_483(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_483(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_483(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_677(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_301();
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

int func_678(int iParam0)
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

int func_679(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_680(int iParam0)
{
	return func_759(iParam0, 2);
}

void func_681(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_459(&(uParam0->f_18));
}

int func_682(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_760(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_683()
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

int func_684(int iParam0)
{
	if (!func_562(iParam0))
	{
		return -1;
	}
	return func_761(iParam0);
}

var func_685(var uParam0)
{
	return uParam0->f_25;
}

int func_686(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_687(int iParam0, int iParam1)
{
	return PED::_0x34D6AC1157C8226C(iParam0, iParam1);
}

void func_688(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0);
}

int func_689(int iParam0)
{
	return ENTITY::_0x964000D355219FC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
}

int func_690(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	if (!func_762(iParam0))
	{
		return 0;
	}
	Var1 = { func_763(iParam0) };
	if (STATS::STAT_ID_GET_INT(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_691(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_764(-1366121835, func_692(iParam0)) };
	return STATS::_STAT_ID_IS_VALID(&Var0);
}

int func_692(int iParam0)
{
	return iParam0;
}

void func_693(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_709(iParam0, &iVar0, &iVar1);
	if (!func_710(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_765(iParam0, 1024))
	{
		return;
	}
	func_711(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

int func_694(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_766(iParam0, uParam1))
		{
			if (!func_2(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_572(uParam2, 0, 0, 1, 0);
				func_71(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_2(uParam1->f_10, 1))
		{
			func_767(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_70(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_695(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_2(iParam4, 32);
		func_571(iParam1, uParam2, 0);
		iVar5 = func_768(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_572(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_697(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_697(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
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
				iParam6 = func_769(uParam0);
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
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_770(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_771(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_697(iParam1, 23))
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
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_696(*uParam0, 1, 1);
			}
			else
			{
				func_696(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_696(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_697(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_698(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_772(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_699(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_773(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_700(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_2(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_701(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_774(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_775(Global_35)) || func_776(Global_35)) || func_777(Global_35));
	fVar12 = -1f;
	if (func_185(&(iParam1->f_13)))
	{
		fVar12 = func_460(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_375(((*uParam4)[iVar0 /*17*/])->f_6);
		func_778(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_779(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_780(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_572(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_442(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_571(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_781(iParam1, fParam6, iParam1->f_9))
					{
						func_36(&(iParam1->f_18));
						if (bVar6)
						{
							func_442(uParam4, 0, 0);
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
		func_782(iParam1, fParam2);
	}
	return bVar5;
}

void func_702(var uParam0)
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

void func_703(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_783((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_782(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_704(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_784(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_785(iParam1, 0);
				func_571(iParam1, uParam2, func_697(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_705(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_36(&(iParam1->f_18));
			return 0;
		}
		else if (func_185(&(iParam1->f_18)))
		{
			func_459(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_185(&(iParam1->f_18)))
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
	return func_435(&(iParam1->f_18), fParam2);
	return 1;
}

void func_706(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_778(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_707(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_708(int* iParam0)
{
	if (func_697(iParam0, 0))
	{
		if (func_786(iParam0))
		{
			func_707(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_709(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_710(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_787(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_788(iParam0))
	{
		return 0;
	}
	if (func_789(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_765(iParam0, 1)) || func_790(32768))
	{
		if (!func_765(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_791())
	{
		return 0;
	}
	return 1;
}

void func_711(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

float func_712(float fParam0, float fParam1, float fParam2)
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

char* func_713(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

void func_714(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_715(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_759(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_716(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_717(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_718(int iParam0, int iParam1, float fParam2)
{
	return func_584(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_719(int iParam0, int iParam1, float fParam2, bool bParam3)
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

var func_720()
{
	return Global_40.f_11095.f_35;
}

int func_721(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_723(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_792(bParam1);
	}
}

void func_724(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_725(int iParam0)
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

int func_726(var uParam0)
{
	vector3 vVar0;

	if (!func_793(23, &vVar0))
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

int func_727(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_793(23, &Var0))
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

int func_728(int iParam0)
{
	return iParam0;
}

int func_729()
{
	int iVar0;

	iVar0 = func_618();
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

void func_730(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_731(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_732()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_733(int iParam0, var uParam1, var uParam2)
{
	if (!func_731(iParam0))
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

void func_734(int iParam0)
{
	int iVar0;

	if (func_96() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_330(func_794(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_794(iVar0), func_486(), 1))
			{
				func_795(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_736(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_796() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_796();
					}
					func_797(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_70(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_737(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_667(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_668(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_738(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_123(iParam0, 8192))
	{
		iVar0 = func_668(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_739(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_494(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_740(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_92(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_38(vParam1))
	{
		return;
	}
	if (!func_295(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_38(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_508(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_741(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_758(iVar0, iParam0);
		iVar0++;
	}
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_743(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_744(int iParam0)
{
	if (!func_567(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_745(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_746()
{
	return Global_1894899 & 2 != 0;
}

bool func_747(int iParam0, int iParam1)
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

int func_748(int iParam0, int iParam1)
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

bool func_749(int iParam0, int iParam1)
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
	if (!func_747(iParam0, iVar0))
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

void func_750(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_751()
{
	struct<4> Var0;

	return Var0;
}

int func_752(int iParam0, bool bParam1)
{
	if (func_664(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_662(bParam1), iParam0, 0);
}

int func_753(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(iParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_798(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_754(int iParam0, int iParam1)
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

bool func_755(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_756(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_757(int iParam0)
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

void func_758(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_759(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_760(int iParam0, int iParam1)
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

int func_761(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_799(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_762(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

struct<2> func_763(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_764(-212244724, func_692(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		Var0 = { func_764(-1366121835, func_692(iParam0)) };
	}
	return Var0;
}

struct<2> func_764(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

bool func_765(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

int func_766(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_800((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_767(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_783((*uParam0)[iVar0 /*17*/]))
		{
			func_373((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_768(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_801(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_375(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_373((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_769(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_475(*uParam0);
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

int func_770(var uParam0, int iParam1)
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

void func_771(int* iParam0, int* iParam1)
{
	if (!func_697(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_373(iParam1, 19);
			func_785(iParam0, 23);
			func_802(iParam1, 2);
		}
	}
}

int func_772(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_803(16))
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
					func_804(16);
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

void func_773(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_801(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_774(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_775(int iParam0)
{
	return (func_805(iParam0, 4) || func_805(iParam0, 5));
}

int func_776(int iParam0)
{
	return func_805(iParam0, 7);
}

int func_777(int iParam0)
{
	return func_805(iParam0, 6);
}

void func_778(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_783(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_801(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_779(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_806(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_807(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_610(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_610(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_808(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_780(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_809(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_810(iParam1, 1))
	{
		func_811(iParam1, 1);
		return 1;
	}
	return 0;
}

int func_781(int* iParam0, float fParam1, var uParam2)
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

void func_782(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_783(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_784(int iParam0)
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

void func_785(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_786(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_787(int iParam0, int iParam1)
{
	if (func_96() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_788(int iParam0)
{
	if (func_96() != -1)
	{
		if (func_765(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_765(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_789(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_765(iParam0, 65536) && !func_765(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_765(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_765(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_790(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_791()
{
	return Global_1905944->f_5694;
}

void func_792(bool bParam0)
{
	func_812(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_793(int iParam0, var uParam1)
{
	if (!func_813(iParam0))
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

int func_794(int iParam0)
{
	if (!func_814(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_795(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_815(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_796()
{
	return &Global_1899515;
}

void func_797(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_816(*uParam0);
	iVar1 = func_817(*uParam0);
	iVar2 = func_818(*uParam0);
	iVar3 = func_549(*uParam0);
	iVar4 = func_686(*uParam0);
	iVar5 = func_819(*uParam0);
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
	iVar6 = func_820(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_820(iVar1, iVar0);
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
	func_821(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_798(int iParam0)
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

int func_799(int iParam0)
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

int func_800(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_801(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_375(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_376(&(iParam1->f_6), 0, 1);
	}
	if (!func_375(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_783(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_822(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_375(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_808(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_823(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_824(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_609(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_823(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_610(iParam1->f_6, 0, 1);
				}
				else
				{
					func_610(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_802(int* iParam0, int iParam1)
{
	if (!func_372(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_373(iParam0, 14);
		}
	}
}

bool func_803(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_804(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_805(int iParam0, int iParam1)
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

bool func_806(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_807(int iParam0, int iParam1)
{
	if (iParam1 && !func_375(iParam0))
	{
		return false;
	}
	return !func_759(iParam0, 4);
}

void func_808(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_375(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	func_823(iParam0, 18, 0, 1);
	func_823(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_809(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_375(iParam0))
	{
		return false;
	}
	iVar0 = func_569(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_810(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_375(iParam0))
	{
		return false;
	}
	iVar0 = func_569(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_811(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_375(iParam0))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_812(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_813(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_814(int iParam0)
{
	return iParam0 > -1;
}

int func_815(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

var func_816(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_385(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_817(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_818(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_819(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_820(int iParam0, int iParam1)
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

void func_821(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_825(uParam0, iParam6);
	func_826(uParam0, iParam5);
	func_827(uParam0, iParam4);
	func_828(uParam0, iParam3);
	func_829(uParam0, iParam2);
	func_830(uParam0, iParam1);
}

int func_822(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
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
		if (func_759(iVar0, 2))
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
				func_831(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_823(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_375(iParam0))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_824(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_375(iParam0))
	{
		return;
	}
	iVar0 = func_569(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_825(var uParam0, int iParam1)
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

void func_826(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_827(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_817(*uParam0);
	iVar1 = func_816(*uParam0);
	if (iParam1 < 1 || iParam1 > func_820(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_828(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_829(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_830(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_831(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
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
	func_715(iParam0, 1);
	func_716(iParam0, 1);
	func_717(iParam0, 128);
}

