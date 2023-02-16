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
	int iLocal_15 = 0;
	vector3 vLocal_16[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char[] cLocal_23[8] = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
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
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<341> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
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
	var uLocal_440 = -1;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	bool bLocal_443 = false;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	vector3 vLocal_448 = { 0f, 0f, 0f };
	float fLocal_451 = 0f;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	vector3 vLocal_455[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	char* sLocal_464 = NULL;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	vector3 vLocal_467 = { 0f, 0f, 0f };
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	vector3 vLocal_472 = { 0f, 0f, 0f };
	float fLocal_475 = 0f;
	int iLocal_476 = 0;
	vector3 vLocal_477 = { 0f, 0f, 0f };
	float fLocal_480 = 0f;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	vector3 vLocal_484 = { 0f, 0f, 0f };
	float fLocal_487 = 0f;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	vector3 vLocal_490 = { 0f, 0f, 0f };
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	vector3 vLocal_495 = { 0f, 0f, 0f };
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	vector3 vLocal_500 = { 0f, 0f, 0f };
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	vector3 vLocal_507 = { 0f, 0f, 0f };
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	vector3 vLocal_512 = { 0f, 0f, 0f };
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	vector3 vLocal_517 = { 0f, 0f, 0f };
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	vector3 vLocal_522 = { 0f, 0f, 0f };
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	vector3 vLocal_527 = { 0f, 0f, 0f };
	int iLocal_530 = 0;
	vector3 vLocal_531 = { 0f, 0f, 0f };
	int iLocal_534 = 0;
	vector3 vLocal_535 = { 0f, 0f, 0f };
	int iLocal_538 = 0;
	vector3 vLocal_539 = { 0f, 0f, 0f };
	int iLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	int iLocal_546 = 0;
	bool bLocal_547 = false;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557[4] = { 0, 0, 0, 0 };
	int iLocal_562[3] = { 0, 0, 0 };
	int iLocal_566[3] = { 0, 0, 0 };
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	vector3 vLocal_580 = { 0f, 0f, 0f };
	vector3 vLocal_583 = { 0f, 0f, 0f };
	vector3 vLocal_586 = { 0f, 0f, 0f };
	vector3 vLocal_589 = { 0f, 0f, 0f };
	struct<9> Local_592[4];
	struct<9> Local_629[3];
	struct<6> Local_657[3];
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = -1;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 1097859072;
	var uLocal_694 = 1000;
	var uLocal_695 = 1067450368;
	var uLocal_696 = 5000;
	var uLocal_697 = 42;
	var uLocal_698 = 1103626240;
	var uLocal_699 = 1077936128;
	var uLocal_700 = 1106247680;
	var uLocal_701 = 1103101952;
	var uLocal_702 = 1097859072;
	var uLocal_703 = 1103626240;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = -1;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 1097859072;
	var uLocal_723 = 1000;
	var uLocal_724 = 1067450368;
	var uLocal_725 = 5000;
	var uLocal_726 = 42;
	var uLocal_727 = 1103626240;
	var uLocal_728 = 1077936128;
	var uLocal_729 = 1106247680;
	var uLocal_730 = 1103101952;
	var uLocal_731 = 1097859072;
	var uLocal_732 = 1103626240;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	bool bLocal_739 = false;
	vector3 vLocal_740 = { 0f, 0f, 0f };
	float fLocal_743 = 0f;
	vector3 vLocal_744 = { 0f, 0f, 0f };
	float fLocal_747 = 0f;
	struct<17> Local_748[2];
	int iLocal_783 = 0;
	var uLocal_784 = -1;
	var uLocal_785 = 0;
	var uLocal_786 = -1;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = -1;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 1073741824;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 1;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	bool bLocal_806 = false;
	bool bLocal_807 = false;
	int iLocal_808 = 0;
	bool bLocal_809 = false;
	int iLocal_810 = 0;
	bool bLocal_811 = false;
	bool bLocal_812 = false;
	int iLocal_813[3] = { 0, 0, 0 };
	bool bLocal_817 = false;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	int iLocal_827 = 0;
	vector3 vLocal_828 = { 0f, 0f, 0f };
	int iLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	int iLocal_835 = 0;
	char* sLocal_836[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_841[4] = { NULL, NULL, NULL, NULL };
	int iLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	float fLocal_850 = 0f;
	struct<41> Local_851[4];
	struct<41> Local_1016[2];
	struct<37> Local_1099 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0 } ;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	struct<41> Local_1140[3];
	int iLocal_1264[3] = { 0, 0, 0 };
	int iLocal_1268 = 0;
	bool bLocal_1269 = false;
	bool bLocal_1270 = false;
	int iLocal_1271 = 0;
	int iLocal_1272 = 0;
	int iLocal_1273 = 0;
	int iLocal_1274[4] = { 0, 0, 0, 0 };
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	vector3 vLocal_1284[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_1294 = 0f;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	int iLocal_1298 = 0;
	int iLocal_1299[3] = { 0, 0, 0 };
	int iLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	vector3 vLocal_1321 = { 0f, 0f, 0f };
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_23 = "NULL";
	iLocal_36 = 1;
	iLocal_37 = -1;
	iLocal_58 = joaat("g_m_m_unibanditos_01");
	iLocal_445 = 1;
	iLocal_447 = joaat("u_m_m_bht_banditomine");
	vLocal_448 = { -5979.496f, -3163.882f, -27.6213f };
	fLocal_451 = 267.2557f;
	sLocal_464 = "TARGET";
	iLocal_466 = -1179266405;
	vLocal_467 = { -5980.202f, -3218.469f, -22.28947f };
	iLocal_471 = 2116996193;
	vLocal_472 = { -5969.639f, -3234.909f, -22.6345f };
	fLocal_475 = 38f;
	vLocal_477 = { -5971.27f, -3220.51f, -22.65f };
	fLocal_480 = 38f;
	iLocal_483 = -892610253;
	vLocal_484 = { -5980.617f, -3227.624f, -22.597f };
	fLocal_487 = -36.04f;
	iLocal_489 = joaat("p_chair02x");
	vLocal_490 = { -5981.851f, -3221.841f, -21.631f };
	iLocal_494 = joaat("p_chair24x");
	vLocal_495 = { -5982.146f, -3220.777f, -22.206f };
	iLocal_499 = -1124798335;
	vLocal_500 = { -5978.983f, -3226.345f, -21.4463f };
	iLocal_504 = -1124798335;
	iLocal_506 = joaat("p_bottlejd01x");
	vLocal_507 = { -5982.459f, -3223.606f, -22.216f };
	iLocal_511 = joaat("p_bottlejd01x");
	vLocal_512 = { -5980.788f, -3219.99f, -22.246f };
	iLocal_516 = joaat("w_repeater_carbine01");
	vLocal_517 = { -5982.367f, -3222.619f, -22.228f };
	iLocal_521 = joaat("w_repeater_carbine01");
	vLocal_522 = { -5982.892f, -3219.436f, -22.174f };
	iLocal_526 = joaat("p_lantern05x");
	vLocal_527 = { -5961.67f, -3177.02f, -23.92f };
	vLocal_531 = { -5982.46f, -3163.49f, -24.23f };
	vLocal_535 = { -5978.83f, -3162.27f, -25.75f };
	vLocal_539 = { -5966.37f, -3203.79f, -20.45f };
	bLocal_547 = true;
	iLocal_552 = 40;
	vLocal_580 = { -5969.74f, -3226.21f, -28.64f };
	vLocal_583 = { -5991.44f, -3219.52f, -13.92f };
	vLocal_586 = { -5979.02f, -3225.82f, -26.61f };
	vLocal_589 = { -5978.97f, -3203.72f, -10.78f };
	vLocal_740 = { -5930.893f, -3241.162f, -22.0747f };
	fLocal_743 = 114.51f;
	vLocal_744 = { -5526.026f, -2922.074f, -3.1708f };
	fLocal_747 = 114.5885f;
	iLocal_804 = -1;
	iLocal_808 = 1;
	vLocal_828 = { -5965.169f, -3204.969f, -21.426f };
	iLocal_1268 = 1593035738;
	fLocal_1294 = 270f;
	vLocal_1321 = { -5963.701f, -3200.572f, -22.5253f };
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		func_1(&(Var0.f_172), 4096);
	}
	else
	{
		func_2(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (func_6(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					func_8(&Var0);
					break;
				case 1:
					func_9(&Var0);
					break;
				case 3:
					func_10(&Var0);
					break;
				case 4:
					func_11(&Var0);
					break;
				case 2:
					func_12(&Var0);
					break;
				case 5:
					func_13(&Var0);
					break;
				case 6:
					func_14(&Var0);
					break;
				case 7:
					func_15(&Var0);
					break;
				case 8:
					func_16(&Var0);
					break;
				case 9:
					func_17(&Var0, 0);
					break;
				case 10:
					func_18(&Var0);
					break;
				case 11:
					if (Var0.f_174 == func_19())
					{
						func_20();
						func_21();
					}
					func_22(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_3(var uParam0)
{
	int iVar0;

	if (&Global_1879534 == 1)
	{
		func_23(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_6(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_24(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		func_25(uParam0);
	}
	func_26(&(uParam0->f_753));
	func_22(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (uParam0->f_174 == func_19())
	{
		bVar0 = true;
	}
	else if (func_27(uParam0))
	{
		bVar0 = true;
		func_28(uParam0, 128);
	}
	if (bVar0)
	{
		func_28(uParam0, 64);
		if (func_29())
		{
			func_28(uParam0, 128);
		}
		func_30(0, 0);
	}
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_32(uParam0, 64))
	{
		func_33(uParam0->f_174, 1);
		func_34(uParam0->f_174, 1);
	}
	func_35(uParam0->f_174);
	func_36(uParam0);
	func_37(uParam0);
	func_38(uParam0, 0, 0, 0, -1, -1, 0);
	func_39(uParam0, 0, 0, 0, -1, -1, 0);
	func_40(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_41(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_42(uParam0);
	func_43(uParam0, 1);
	iVar1 = func_44(uParam0);
	if (!func_6(uParam0->f_172, 8388608) && func_45(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_45(uParam0))
		{
			func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_48();
	func_49(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	struct<4> Var1;

	if (func_6(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_50())
	{
		func_1(&(uParam0->f_172), 16777216);
		if (!func_6(uParam0->f_172, 8))
		{
			func_51(uParam0, 14);
		}
		return;
	}
	else if (func_52())
	{
		func_1(&(uParam0->f_172), 33554432);
		if (!func_6(uParam0->f_172, 8))
		{
			func_51(uParam0, 15);
		}
		return;
	}
	if (func_53(uParam0))
	{
		return;
	}
	func_2(&(uParam0->f_172), 64);
	func_2(&(uParam0->f_172), 128);
	if (func_6(uParam0->f_172, 67108864))
	{
		func_54(1);
		func_2(&(uParam0->f_172), 67108864);
	}
	func_55(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_6(uParam0->f_172, 4096))
	{
		iVar0 = func_56(0);
		if (!func_57(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_2(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_6(uParam0->f_172, 8) && func_58())
	{
		if (uParam0->f_174 != 59 || !func_59(97))
		{
			if (uParam0->f_174 != 155 || !func_59(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (func_32(uParam0, 32))
			{
				if (!func_32(uParam0, 64))
				{
					if (!func_60(32768))
					{
						Var1 = { func_61(0) };
						if (func_62(&Var1))
						{
							func_63(uParam0, 32);
						}
					}
					else
					{
						func_63(uParam0, 32);
					}
				}
				else
				{
					func_63(uParam0, 32);
				}
			}
			if (func_64(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_49(uParam0, 9);
					return;
				}
			}
			else if (func_65(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_49(uParam0, 8);
					return;
				}
			}
			if (!func_6(uParam0->f_172, 131072))
			{
				if (!Global_1935630->f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_6(uParam0->f_172, 268435456))
			{
				func_66();
			}
			if (!func_6(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_6(uParam0->f_172, 1073741824))
			{
				func_67(1, 0);
			}
			func_68(uParam0);
		}
		else if (!func_32(uParam0, 64) && !func_27(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_69(uParam0->f_174), Global_36);
			if (func_70(uParam0))
			{
				if (func_71(uParam0) == 2 || func_71(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				func_49(uParam0, 10);
				return;
			}
			else
			{
				func_73(uParam0);
			}
			func_74(uParam0);
		}
	}
	func_75(uParam0);
	if (func_6(uParam0->f_172, 32))
	{
		func_77(uParam0, func_76(uParam0));
	}
	else if (func_6(uParam0->f_172, 8))
	{
		if (func_78(uParam0))
		{
		}
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if (func_6(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!func_79(&(uParam0->f_2597)))
		{
			func_80(&(uParam0->f_2597), 0);
		}
		func_81(uParam0);
		if (func_82(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_25(uParam0);
			}
			else
			{
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_8(var uParam0)
{
	if (!func_83(64))
	{
		return;
	}
	if (func_84())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_27(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 8192))
	{
		func_49(uParam0, 1);
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (func_32(uParam0, 64))
		{
			func_86(uParam0);
			func_49(uParam0, 2);
			func_78(uParam0);
		}
		else if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_49(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			func_49(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;

	if (!func_79(&(uParam0->f_2585)) || IntToFloat(func_82(&(uParam0->f_2585))) > func_88(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		iVar0 = func_89(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				func_78(uParam0);
			}
			func_49(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;

	if (!func_83(64))
	{
		return;
	}
	if (func_84())
	{
		return;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = func_93(uParam0);
		if (iVar0 == 5)
		{
			func_94(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			func_94(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (func_27(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_78(uParam0);
		func_49(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!func_6(uParam0->f_172, 8192))
	{
		return;
	}
	func_49(uParam0, func_96(uParam0, func_95(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::RESET_ADAPTATION(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		func_97(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		func_49(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;

	func_99(uParam0);
	if (func_100(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			func_102(uParam0, 1);
			iVar0 = func_103(uParam0);
			func_49(uParam0, iVar0);
		}
	}
	else
	{
		func_2(&(uParam0->f_172), 16);
		func_102(uParam0, 0);
		iVar0 = func_103(uParam0);
		func_49(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;

	if (func_104(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 262144))
	{
		func_106(uParam0, func_105(uParam0));
	}
	iVar0 = func_107(uParam0);
	if (iVar0 == 5)
	{
		func_94(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		func_94(uParam0, 7);
		func_14(uParam0);
	}
	func_49(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;

	if (uParam0->f_177 != 8)
	{
		func_49(uParam0, 8);
	}
	if (func_6(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(1) == 1)
		{
			return;
		}
	}
	if (func_71(uParam0) != 0)
	{
		func_51(uParam0, 0);
		if (func_108(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_112(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::STATSTRACKER_IS_INITIALIZED(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_113();
			func_114(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_115(uParam0->f_174, 1);
		func_116(uParam0);
		func_118(func_117(), 0);
		if (func_6(uParam0->f_172, 8))
		{
			func_119(uParam0, 0, 1);
			if (func_120(uParam0->f_174, 128))
			{
				func_121(uParam0->f_174, 128);
			}
		}
		func_122(uParam0);
		if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
		{
			if (func_6(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				func_48();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_123(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_124();
				func_125(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_126(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_127();
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_6(uParam0->f_172, 8))
			{
				iVar4 = func_95(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_109(func_129(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_71(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_130(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					func_20();
					func_21();
				}
			}
		}
	}
	if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
	{
		if (func_27(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_131();
			func_132(0);
		}
		else if (func_6(uParam0->f_172, 32768))
		{
			func_133(1, 1);
			func_1(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_6(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_134(1);
		func_135();
		func_136(6);
		func_137(4096);
	}
	func_72(uParam0);
	if (func_6(uParam0->f_172, 32768) || func_27(uParam0))
	{
		func_22(uParam0);
	}
	func_49(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	func_49(uParam0, 9);
	if (func_71(uParam0) != 1)
	{
		func_51(uParam0, 1);
		if (func_120(uParam0->f_174, 128))
		{
			func_121(uParam0->f_174, 128);
		}
		func_138(uParam0);
	}
	if (func_6(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_115(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == func_19())
		{
			func_20();
			func_21();
		}
	}
	else
	{
		bVar0 = false;
		if (func_6(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || func_6(uParam0->f_172, 134217728))
		{
			if (!func_79(&(uParam0->f_2597)))
			{
				func_80(&(uParam0->f_2597), 0);
			}
			func_81(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_6(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					func_139(1, 1);
					return;
				}
				else
				{
					func_1(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_2(&(uParam0->f_172), 134217728);
			}
			else if (func_82(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_2(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (func_6(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (func_6(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (func_6(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		func_141(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, iVar3, &(uParam0->f_2578), func_140(uParam0), 0, bVar0);
	}
	if (func_6(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_48();
		func_125(Global_1935630, 8);
	}
	if (func_142(&(uParam0->f_2605)))
	{
		func_143(uParam0);
	}
	func_144(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	bParam1 = true;
	if (func_6(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
	}
	else
	{
		func_49(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_69(uParam0->f_174), Global_36);
		func_145(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_146(64, 1, 1))
	{
		iVar1 = func_56(0);
		if (func_57(iVar1))
		{
			func_25(uParam0);
			func_22(uParam0);
			return;
		}
	}
	if (func_147(uParam0) && func_148())
	{
		func_25(uParam0);
		func_22(uParam0);
	}
	else if (!func_79(&(uParam0->f_2585)) || IntToFloat(func_82(&(uParam0->f_2585))) > func_149(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
		{
			func_49(uParam0, 11);
		}
	}
}

int func_19()
{
	return func_152(func_151());
}

void func_20()
{
	int iVar0;

	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_21()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_153(0);
	func_154(0);
	func_155(0);
	func_156(0);
	func_157(0);
	func_158(1f);
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_159(uParam0);
	func_160(uParam0->f_751);
	func_161(uParam0);
	func_162(uParam0);
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_166(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_167(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_168(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_71(uParam0) == 2)
	{
		func_23(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_169(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_170(uParam0);
	func_171(uParam0);
	if (func_71(uParam0) == 0)
	{
		func_172(uParam0->f_174);
	}
	if (func_71(uParam0) == 2 || func_71(uParam0) == 12)
	{
		func_173(uParam0->f_174);
	}
	if (func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_175(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_102(uParam0, 0);
	if (func_6(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_177(uParam0->f_174, 0);
	}
	if (func_71(uParam0) == 12)
	{
		func_115(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_56(0) == Global_1888801[16 /*35*/])
		{
			func_178(uParam0->f_174, 8192);
		}
	}
	func_179(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_180(uParam0);
	func_48();
	func_181(0);
	func_181(1);
	func_182(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_23(int* iParam0)
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

void func_24(var uParam0, int iParam1)
{
}

void func_25(var uParam0)
{
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2));
				if (func_183(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), 0, 1);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	if (func_60(32768) && func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_29()
{
	return Global_1572864->f_13;
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

bool func_31(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_33(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_21 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_22 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_184(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_36(var uParam0)
{
	func_185(uParam0, 7);
	func_186(uParam0, 15);
	func_187();
	func_188();
	sLocal_836[0] = "RBT23_RAGE1A";
	sLocal_836[1] = "RBT23_RAGE2A";
	sLocal_836[2] = "RBT23_RAGE3A";
	sLocal_836[3] = "RBT23_RAGE4A";
	sLocal_841[0] = "RBT23_HIT1";
	sLocal_841[1] = "RBT23_HIT2";
	sLocal_841[2] = "RBT23_HIT3";
	sLocal_841[3] = "RBT23_Shush";
	func_189(&uLocal_676);
	func_190(&uLocal_676, 1);
	func_191(&uLocal_676, 1);
	func_192(&uLocal_676, 1);
	func_193(&uLocal_676, 1);
	func_194(&uLocal_676, 1);
	func_195(&uLocal_676, 1);
	func_196(&uLocal_676, 1);
	func_197(&uLocal_705, 1);
	func_194(&uLocal_705, 1);
	func_196(&uLocal_705, 1);
	iLocal_1274[0] = 0;
	iLocal_1274[1] = 0;
	iLocal_1274[2] = 0;
	iLocal_1274[3] = 0;
	iLocal_813[0] = 0;
	iLocal_813[1] = 0;
	iLocal_813[2] = 0;
	iLocal_1299[0] = 0;
	iLocal_1299[1] = 0;
	iLocal_1299[2] = 0;
	(Local_851[0 /*41*/])->f_1 = 710008452;
	(Local_851[0 /*41*/])->f_3 = { -5979.902f, -3219.765f, -22.3223f };
	(Local_851[0 /*41*/])->f_6 = 274.0349f;
	(Local_851[0 /*41*/])->f_7 = "BANDITO_PED5";
	(Local_851[0 /*41*/])->f_9 = 100;
	(Local_851[0 /*41*/])->f_10 = "BANDITO_B";
	(Local_851[0 /*41*/])->f_36 = joaat("weapon_repeater_carbine");
	(Local_851[0 /*41*/])->f_38 = { -5968.19f, -3212.43f, -22.54f };
	(Local_851[1 /*41*/])->f_1 = -1427175664;
	(Local_851[1 /*41*/])->f_3 = { -5968.39f, -3212.3f, -22.51f };
	(Local_851[1 /*41*/])->f_6 = 278.3235f;
	(Local_851[1 /*41*/])->f_7 = "BANDITO_PED2";
	(Local_851[1 /*41*/])->f_9 = 500;
	(Local_851[1 /*41*/])->f_10 = "BANDITO_C";
	(Local_851[1 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	(Local_851[1 /*41*/])->f_38 = { -5967.86f, -3231.22f, -22.64f };
	(Local_851[2 /*41*/])->f_1 = -104423980;
	(Local_851[2 /*41*/])->f_3 = { -5979.447f, -3225.211f, -22.5006f };
	(Local_851[2 /*41*/])->f_6 = 261.7957f;
	(Local_851[2 /*41*/])->f_7 = "BANDITO_PED6";
	(Local_851[2 /*41*/])->f_9 = 800;
	(Local_851[2 /*41*/])->f_10 = "BANDITO_A";
	(Local_851[2 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	(Local_851[2 /*41*/])->f_38 = { -5977.92f, -3236.97f, -22.57f };
	(Local_851[3 /*41*/])->f_1 = 1601358025;
	(Local_851[3 /*41*/])->f_3 = { -5978.985f, -3218.045f, -22.4159f };
	(Local_851[3 /*41*/])->f_6 = 277.1082f;
	(Local_851[3 /*41*/])->f_7 = "BANDITO_PED3";
	(Local_851[3 /*41*/])->f_9 = 1200;
	(Local_851[3 /*41*/])->f_10 = "BANDITO_D";
	(Local_851[3 /*41*/])->f_36 = joaat("weapon_repeater_carbine");
	(Local_851[3 /*41*/])->f_38 = { -5984.41f, -3212.32f, -20f };
	(Local_1016[0 /*41*/])->f_1 = -1253154414;
	(Local_1016[0 /*41*/])->f_3 = { -5958.655f, -3181.701f, -23.34869f };
	(Local_1016[0 /*41*/])->f_6 = 140.2351f;
	(Local_1016[0 /*41*/])->f_8 = 0;
	(Local_1016[0 /*41*/])->f_9 = 115;
	(Local_1016[0 /*41*/])->f_10 = "BANDITO_E";
	(Local_1016[0 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	(Local_1016[0 /*41*/])->f_7 = "BANDITO_PED1";
	*(vLocal_455[0 /*3*/]) = { -5962.592f, -3176.119f, -24.0807f };
	(Local_1016[1 /*41*/])->f_1 = -1280549298;
	(Local_1016[1 /*41*/])->f_3 = { -5955.668f, -3181.073f, -23.3022f };
	(Local_1016[1 /*41*/])->f_6 = 123.2135f;
	(Local_1016[1 /*41*/])->f_8 = 0;
	(Local_1016[1 /*41*/])->f_9 = 235;
	(Local_1016[1 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	*(vLocal_455[1 /*3*/]) = { -5955.668f, -3181.073f, -23.3022f };
	Local_1099.f_1 = 1259241107;
	Local_1099.f_3 = { -5962.91f, -3173.94f, -24.29f };
	Local_1099.f_6 = 211.2063f;
	Local_1099.f_8 = 0;
	Local_1099.f_9 = 235;
	Local_1099.f_36 = joaat("weapon_repeater_carbine");
	(Local_1140[0 /*41*/])->f_1 = -1642564421;
	(Local_1140[0 /*41*/])->f_3 = { -5970.521f, -3189.062f, -9.414f };
	(Local_1140[0 /*41*/])->f_6 = 225.8811f;
	(Local_1140[0 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	(Local_1140[0 /*41*/])->f_7 = "BANDITO_PED6";
	*(vLocal_1284[0 /*3*/]) = { -5975.492f, -3197.922f, -11.1665f };
	(Local_1140[1 /*41*/])->f_1 = -1892362508;
	(Local_1140[1 /*41*/])->f_3 = { -5962.515f, -3186.021f, -8.17629f };
	(Local_1140[1 /*41*/])->f_6 = 270.2936f;
	(Local_1140[1 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	*(vLocal_1284[1 /*3*/]) = { -5966.699f, -3200.27f, -10.2943f };
	(Local_1140[2 /*41*/])->f_1 = 2095788641;
	(Local_1140[2 /*41*/])->f_3 = { -5952.971f, -3192.26f, -8.8836f };
	(Local_1140[2 /*41*/])->f_6 = 159.0619f;
	(Local_1140[2 /*41*/])->f_36 = joaat("weapon_revolver_cattleman");
	*(vLocal_1284[2 /*3*/]) = { -5956.468f, -3203.458f, -10.3411f };
	*(Local_592[0 /*9*/]) = { -5963.073f, -3175.305f, -24.1142f };
	(Local_592[0 /*9*/])->f_3 = { 0f, 0f, 142.7489f };
	(Local_592[0 /*9*/])->f_6 = { 1.934955f, 1.423457f, 3.265989f };
	*(Local_592[1 /*9*/]) = { -5955.668f, -3181.073f, -23.3022f };
	(Local_592[1 /*9*/])->f_3 = { 0f, 0f, 32.23284f };
	(Local_592[1 /*9*/])->f_6 = { 1.934955f, 1.423457f, 3.385317f };
	*(Local_592[2 /*9*/]) = { -5968.641f, -3168.384f, -25.9197f };
	(Local_592[2 /*9*/])->f_3 = { 0f, 0f, -23.37213f };
	(Local_592[2 /*9*/])->f_6 = { 2.225618f, 1.684003f, 2.940384f };
	*(Local_592[3 /*9*/]) = { -5961.443f, -3178.078f, -22.61258f };
	(Local_592[3 /*9*/])->f_3 = { -9.908773f, 0.187808f, 32.55581f };
	(Local_592[3 /*9*/])->f_6 = { 7.174339f, 13.42854f, 5.198833f };
	*(Local_629[0 /*9*/]) = { -5978.177f, -3195.329f, -10.34726f };
	(Local_629[0 /*9*/])->f_3 = { 0f, 0f, 16.66485f };
	(Local_629[0 /*9*/])->f_6 = { 6.450672f, 3.982966f, 4.365438f };
	*(Local_629[1 /*9*/]) = { -5964.354f, -3196.015f, -9.63243f };
	(Local_629[1 /*9*/])->f_3 = { 0f, 0f, -0.822623f };
	(Local_629[1 /*9*/])->f_6 = { 7.685209f, 4.442951f, 2.441645f };
	*(Local_629[2 /*9*/]) = { -5952.272f, -3204.74f, -10.19545f };
	(Local_629[2 /*9*/])->f_3 = { 0f, 0f, -62.33933f };
	(Local_629[2 /*9*/])->f_6 = { 7.74975f, 4.231377f, 3.697152f };
	*(Local_657[0 /*6*/]) = { -5962.466f, -3176.566f, -23.9815f };
	(Local_657[0 /*6*/])->f_3 = 155.9396f;
	(Local_657[0 /*6*/])->f_4 = 1;
	(Local_657[0 /*6*/])->f_5 = 2;
	*(Local_657[1 /*6*/]) = { -5955.673f, -3181.042f, -23.3456f };
	(Local_657[1 /*6*/])->f_3 = 197.8866f;
	(Local_657[1 /*6*/])->f_4 = 0;
	(Local_657[1 /*6*/])->f_5 = 2;
	*(Local_657[2 /*6*/]) = { -5970.366f, -3202.988f, -20.5022f };
	(Local_657[2 /*6*/])->f_3 = 167.728f;
	(Local_657[2 /*6*/])->f_4 = 0;
	(Local_657[2 /*6*/])->f_5 = 0;
	func_198(uParam0, 150f);
	func_199(uParam0, 100f);
	func_200(vLocal_467, 100f, 0, 0, 5);
}

void func_37(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_748);
	}
}

void func_38(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		if (uParam0->f_741 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopMoveRestrict", 64);
		vVar8 = { uParam0->f_741, uParam0->f_741, uParam0->f_741 };
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_69(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		if (uParam0->f_742 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopSpawnRestrict", 64);
		vVar8 = { uParam0->f_742, uParam0->f_742, uParam0->f_742 };
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_69(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_40(var uParam0)
{
	func_201(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_202(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_203(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	(uParam0->f_41[iVar0 /*3*/])->f_2 = ((uParam0->f_41[iVar0 /*3*/])->f_2 || iParam2);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

void func_42(var uParam0)
{
	func_204(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(-2146271366);
	HUD::TEXT_BLOCK_REQUEST("BHCR");
	func_41(uParam0, iLocal_447, 3);
	func_41(uParam0, iLocal_58, 3);
	func_41(uParam0, iLocal_483, 3);
	func_41(uParam0, iLocal_466, 3);
	func_41(uParam0, iLocal_499, 3);
	func_41(uParam0, iLocal_489, 3);
	func_41(uParam0, iLocal_494, 3);
	func_41(uParam0, iLocal_506, 3);
	func_41(uParam0, iLocal_511, 3);
	func_41(uParam0, iLocal_516, 3);
	func_41(uParam0, iLocal_521, 3);
	func_41(uParam0, iLocal_471, 3);
	func_41(uParam0, iLocal_526, 3);
	func_41(uParam0, iLocal_1268, 2);
}

void func_43(var uParam0, int iParam1)
{
	if (func_205(uParam0) == iParam1)
	{
		return;
	}
	func_206(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_2(&(uParam0->f_172), 8192);
}

int func_44(var uParam0)
{
	return 0;
}

int func_45(var uParam0)
{
	if (func_32(uParam0, 64))
	{
		return 0;
	}
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_207(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_48()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_94(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_50()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 1;
	}
	else if (Global_1935630->f_12)
	{
		return 1;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return 1;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_52()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (func_208(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return 1;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((func_57(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_6(uParam0->f_172, 8)) && (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_60(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_54(bool bParam0)
{
	func_209(bParam0);
	func_210(bParam0);
}

void func_55(var uParam0)
{
	if (func_6(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_211(uParam0, uParam0->f_168))
	{
		func_1(&(uParam0->f_172), 8192);
	}
}

int func_56(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_57(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_58()
{
	int iVar0;

	iVar0 = func_56(0);
	if ((func_57(iVar0) && func_110(iVar0) == 8) && func_31(((*Global_1347702)[func_111(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_212() != -1)
	{
		return 0;
	}
	if (!func_213(iParam0))
	{
		return 0;
	}
	return func_174(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_60(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_61(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { -5930.956f, -3241.229f, -22.08196f };
			Var0.f_3 = 126.2467f;
			break;
		case 1:
			Var0 = { -5963.527f, -3195.785f, -22.6112f };
			Var0.f_3 = 150.4175f;
			break;
		case 2:
			Var0 = { func_214(115) };
			Var0.f_3 = 359.7829f;
			break;
		case 3:
			Var0 = { func_214(115) };
			Var0.f_3 = 203.6745f;
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

bool func_62(var uParam0)
{
	return func_215(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (iLocal_53 < 4)
	{
		if (!func_216(Global_35, vLocal_467, 150f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "RBT23_LEFT_BEHIND_ALIVE", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_FAIL");
			return 1;
		}
		else if (!func_216(Global_35, vLocal_467, 100f, 1, 1) && !iLocal_444)
		{
			func_126(uParam0, "RBT23_RETURN", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			iLocal_444 = 1;
		}
		else if (func_216(Global_35, vLocal_467, 80f, 1, 1) && iLocal_444)
		{
			func_217(&Local_59, 2, 0);
			iLocal_444 = 0;
		}
	}
	else if (iLocal_53 >= 4)
	{
		if (func_218(&Local_59, 1120403456, 1125515264))
		{
			switch (Local_59.f_64)
			{
				case 3:
					StringCopy(&(uParam0->f_2578), "RBT23_CORTEZ_ESCAPED", 24);
					break;
				case 1:
					StringCopy(&(uParam0->f_2578), "RBT23_LEFT_BEHIND_ALIVE", 24);
					break;
				case 2:
					StringCopy(&(uParam0->f_2578), "RBT23_LEFT_BEHIND_DEAD", 24);
					break;
				case 4:
					StringCopy(&(uParam0->f_2578), "RBT23_DEAD_BODY_LOST", 24);
					break;
				case 5:
					StringCopy(&(uParam0->f_2578), "RBT23_WANTED", 24);
					break;
				case 6:
					StringCopy(&(uParam0->f_2578), "RBT23_ATTACKED_SHERIFF", 24);
					break;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_FAIL");
			return 1;
		}
	}
	return 0;
}

int func_65(var uParam0)
{
	return 0;
}

void func_66()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_67(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

void func_68(var uParam0)
{
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;

	if (!func_213(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_219(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_83(64))
	{
		return 0;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_84())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_146(0, 1, 0))
	{
		iVar0 = func_56(0);
		if (func_57(iVar0) && func_220(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_221(uParam0->f_174))
	{
		func_51(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_51(uParam0, 2);
			return 1;
		}
	}
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_207(uParam0->f_174))
	{
		func_222(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_223(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_224(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_225(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_224(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_178(uParam0->f_174, 2048);
			func_51(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_226();
			if (!func_227(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_51(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_51(uParam0, 8);
		return 1;
	}
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_228(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_229(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_230(uParam0) || func_231(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_232(uParam0) && func_233(uParam0->f_743))
	{
		func_178(uParam0->f_174, 8192);
		func_51(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_71(var uParam0)
{
	return uParam0->f_175;
}

void func_72(var uParam0)
{
	bool bVar0;

	func_234();
	func_235(uParam0);
	if (func_6(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (func_71(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (func_32(uParam0, 128) && func_29())
		{
			func_156(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (func_71(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_124();
			if (func_71(uParam0) == 1)
			{
				func_236(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_237(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_238(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_71(uParam0) == 3)
	{
		func_239(uParam0->f_174);
	}
	else if (func_71(uParam0) == 2)
	{
	}
	else if (!func_167(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_115(uParam0->f_174, 0);
	}
	func_173(uParam0->f_174);
	if (func_71(uParam0) == 0)
	{
		func_172(uParam0->f_174);
		func_240(uParam0);
	}
	func_161(uParam0);
	func_241(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_242(&(uParam0->f_2585));
	func_243(uParam0);
}

void func_73(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { func_69(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_244(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_245(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_246(uParam0->f_174, fVar3);
		func_247(uParam0->f_174, vVar0, fVar3);
		func_248(uParam0->f_174);
		func_249(uParam0->f_174);
	}
}

void func_74(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	if (func_32(uParam0, 64))
	{
		return;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if ((func_6(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_45(uParam0))
		{
			func_2(&(uParam0->f_172), 256);
			func_160(uParam0->f_751);
			func_250(uParam0);
		}
		else
		{
			func_251(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_252() };
				Var8 = { func_253(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_254(&(uParam0->f_206));
					func_255(&(uParam0->f_206), &cVar0);
				}
			}
			func_1(&(uParam0->f_172), 256);
		}
	}
}

void func_75(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!func_6(uParam0->f_172, 16))
	{
		return;
	}
	if (func_256(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_257(uParam0);
	if (!bVar0)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (func_100(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_27(uParam0))
			{
				bVar1 = false;
			}
			else if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_258(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_259(uParam0);
				func_1(&(uParam0->f_172), 1);
			}
		}
		else if (func_6(uParam0->f_172, 1))
		{
			func_2(&(uParam0->f_172), 1);
		}
	}
	else if (!func_6(uParam0->f_172, 1))
	{
		func_1(&(uParam0->f_172), 1);
	}
}

int func_76(var uParam0)
{
	return uParam0->f_169;
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_6(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (func_260(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_261(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_262(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_263(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_264(uParam0->f_2605[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_786 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_786)
		{
			if (func_260(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_265(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_266(uParam0->f_2605.f_241[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_787 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_787)
		{
			if (func_260(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_265(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_267(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_260(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_268(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_78(var uParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_269(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_270(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_271(uParam0);
	}
}

void func_81(var uParam0)
{
}

int func_82(var uParam0)
{
	if (!func_79(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_272(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_273() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_83(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_84()
{
	return func_90(&Global_1935630, 4096);
}

int func_85(var uParam0)
{
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_274(uParam0) && func_275(uParam0))
	{
		func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_86(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
		{
			func_278(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
			{
				func_279(uParam0->f_174);
				func_280(uParam0->f_174);
			}
		}
		else
		{
			func_281(Global_1347702[uParam0->f_174 /*49*/]);
			func_279(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_276(uParam0->f_174), func_277(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_276(uParam0->f_174), func_277(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_282(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_283(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_284(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_285(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_32(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_115(uParam0->f_174, 0);
	}
	func_286(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_287(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_237(1);
	func_241(1);
	func_288();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_289(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_290(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_45(uParam0))
	{
		func_1(&(uParam0->f_172), 256);
	}
	if (func_6(uParam0->f_172, 8388608) || !func_6(uParam0->f_172, 256))
	{
		func_43(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	HUD::SET_MISSION_NAME(true, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_291(uParam0);
	if (uParam0->f_174 != func_19())
	{
		if (!func_60(32768))
		{
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
			{
				func_28(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (func_292(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_293(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
}

float func_88(var uParam0)
{
	return 1000f;
}

int func_89(var uParam0)
{
	return 3;
}

bool func_90(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_91(var uParam0)
{
}

int func_92(var uParam0)
{
	bool bVar0;

	if (func_27(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_6(uParam0->f_172, 4096) || func_58())
	{
		bVar0 = true;
	}
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_106(uParam0, bVar0);
		if (func_6(uParam0->f_172, 524288))
		{
			return 1;
		}
		else if (func_6(uParam0->f_172, 1048576))
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
		if (bVar0)
		{
			return 0;
		}
		if (uParam0->f_171 != 0 || func_294(uParam0))
		{
			if (func_295(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(var uParam0)
{
	return 7;
}

void func_94(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_95(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return func_296();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = iParam1;
	iVar2 = 0;
	switch (iVar0)
	{
		case 0:
			if (func_297(&uLocal_733))
			{
				if (func_298(uParam0->f_174, 2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_738))
					{
						func_299(&iLocal_738, vLocal_740, fLocal_743, 1, 1, 1, 1);
						return 2;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_738, 1, 0);
						ENTITY::_0x9587913B9E772D29(iLocal_738, 0);
						PED::_SET_PED_ON_MOUNT(Global_35, iLocal_738, -1, true);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_738, vLocal_740, fLocal_743, 1, 0, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_738, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
					}
				}
				func_300(uParam0->f_174);
				func_301(uParam0);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					(Local_851[iVar2 /*41*/])->f_2 = MAP::BLIP_ADD_FOR_ENTITY(831283580, &(Local_851[iVar2 /*41*/]));
					MAP::BLIP_ADD_MODIFIER((Local_851[iVar2 /*41*/])->f_2, -1118229366);
					iVar2++;
				}
				iLocal_26 = 1;
				bLocal_27 = false;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_302(uParam0, 0);
				func_293(uParam0, func_61(0), func_61(1), 0, 1, 0);
				func_23(&iLocal_446);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_738))
				{
					if (PED::IS_PED_READY_TO_RENDER(iLocal_738))
					{
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 7;
					}
				}
				else
				{
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					return 7;
				}
			}
			break;
		case 1:
			iLocal_28 = 1;
			bLocal_1270 = false;
			if (func_297(&uLocal_733))
			{
				if (func_303(uParam0))
				{
					func_304(uParam0, &iVar1);
					TASK::_0xFF745B0346E19E2C(iVar1);
					if (TASK::_0xB8F52A3F84A7CC59(iVar1))
					{
						ENTITY::_0x9587913B9E772D29(iLocal_446, 0);
						ENTITY::_0x203BEFFDBE12E96A(iLocal_446, -5963.522f, -3196.811f, -22.59114f, -118.88f, 1, 0, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_446, true, true);
						TASK::_0xF0B4F759F35CC7F5(iLocal_446, iVar1, 0, 0, 0);
						if (ENTITY::IS_ENTITY_DEAD(iLocal_446))
						{
							func_305(9);
						}
						else
						{
							func_305(7);
						}
						func_306(4);
						func_293(uParam0, func_61(1), func_61(2), 1, 2, 0);
						AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
						bLocal_812 = true;
						func_302(uParam0, 0);
						if (func_298(uParam0->f_174, 2))
						{
							if (ENTITY::IS_ENTITY_DEAD(iLocal_738))
							{
								func_299(&iLocal_738, vLocal_740, fLocal_743, 1, 1, 1, 1);
								return 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_738, 1, 0);
								ENTITY::_0x9587913B9E772D29(iLocal_738, 0);
								ENTITY::_0x203BEFFDBE12E96A(iLocal_738, vLocal_740, fLocal_743, 1, 0, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_738, true, false);
								TASK::TASK_STAND_STILL(iLocal_738, -1);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						return 7;
					}
				}
			}
			break;
		case 2:
			if (func_297(&uLocal_733))
			{
				if (func_303(uParam0))
				{
					func_304(uParam0, &iVar1);
					TASK::_0xFF745B0346E19E2C(iVar1);
					if (TASK::_0xB8F52A3F84A7CC59(iVar1))
					{
						if (func_298(uParam0->f_174, 2))
						{
							if (ENTITY::IS_ENTITY_DEAD(iLocal_738))
							{
								func_299(&iLocal_738, vLocal_744, fLocal_747, 1, 1, 1, 1);
								return 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_738, 1, 0);
								ENTITY::_0x9587913B9E772D29(iLocal_738, 0);
								ENTITY::_0x203BEFFDBE12E96A(iLocal_738, vLocal_744, fLocal_747, 1, 0, 1);
								iVar3 = TASK::_0xF533D68FF970D190(vLocal_744, -1805387726, 3f, 0, 0);
								if (TASK::DOES_SCENARIO_POINT_EXIST(iVar3) && !func_307(iLocal_738, iVar3))
								{
									PHYSICS::_0x06AADE17334F7A40(iLocal_738, vLocal_744);
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_446))
						{
							if (PED::_0x09B83E68DE004CD4(iLocal_446) == 0)
							{
								if (!func_308(iLocal_446, -2108652971))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_446, Global_36, false, false, true, true);
									TASK::_0xF0B4F759F35CC7F5(iLocal_446, iVar1, Global_35, 0, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_446, true, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
								}
							}
							if (PED::_0x09B83E68DE004CD4(iLocal_446) == Global_35)
							{
								func_306(4);
								func_293(uParam0, func_61(2), func_61(3), 2, 3, 0);
								bLocal_812 = true;
								iLocal_819 = 1;
								iLocal_820 = 1;
								func_302(uParam0, 0);
								if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								return 7;
							}
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_446, Global_36, false, false, true, true);
							TASK::_0xF0B4F759F35CC7F5(iLocal_446, iVar1, Global_35, 0, 0);
							func_306(4);
							AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
							func_293(uParam0, func_61(2), func_61(3), 2, 3, 0);
							bLocal_812 = true;
							iLocal_819 = 1;
							iLocal_820 = 1;
							func_302(uParam0, 0);
							if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							return 7;
						}
					}
				}
			}
			break;
		case 3:
			if (func_297(&uLocal_733))
			{
				if (func_303(uParam0))
				{
					func_304(uParam0, &iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_446))
					{
						func_309(iLocal_447, Local_59.f_300, 0);
						func_310(115, iLocal_447);
						func_23(&iLocal_446);
						func_311(iLocal_447, Local_59.f_300, Local_59.f_299);
						func_312(Global_40.f_9074.f_3, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_446, func_313(115), false, false, true, true);
						func_312(Global_40.f_9074.f_4, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					if (func_298(uParam0->f_174, 2))
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_738))
						{
							func_299(&iLocal_738, vLocal_744, fLocal_747, 1, 1, 1, 1);
							return 2;
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_738, 1, 0);
							ENTITY::_0x203BEFFDBE12E96A(iLocal_738, vLocal_744, fLocal_747, 1, 0, 1);
							iVar4 = TASK::_0xF533D68FF970D190(vLocal_744, -1805387726, 3f, 0, 0);
							if (TASK::DOES_SCENARIO_POINT_EXIST(iVar4) && !func_307(iLocal_738, iVar4))
							{
								PHYSICS::_0x06AADE17334F7A40(iLocal_738, vLocal_744);
							}
						}
					}
					return 8;
				}
			}
			break;
		default:
			return 7;
	}
	return 2;
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_146(0, 0, 1) || iParam0)
	{
		iVar0 = func_314();
		iVar1 = func_315(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_316(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_316(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

int func_98(var uParam0)
{
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!func_6(uParam0->f_172, 1))
		{
			return 0;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return 0;
		}
		MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
		return 1;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if (!func_317(uParam0))
		{
			if ((func_6(uParam0->f_172, 8192) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
			{
				if (func_6(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					func_43(uParam0, 2);
					if (!func_6(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_106(uParam0, 0);
		if (!func_6(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_318();
		func_319(uParam0);
		if (!func_320(uParam0))
		{
			return 0;
		}
	}
	if (!func_6(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_99(var uParam0)
{
	if (func_6(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_100(&(uParam0->f_2575)))
	{
		func_321(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_322(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_293(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_323(Global_35))
		{
			if (func_324())
			{
				func_325(42, 1);
			}
		}
	}
	MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_1(&(uParam0->f_172), 2048);
}

int func_100(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_101(var uParam0)
{
	struct<4> Var0;

	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_326(Var0, &(uParam0->f_206), uParam0);
}

void func_102(var uParam0, bool bParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
	{
		if (!ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_206.f_348, 0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_206.f_348, 0))
			{
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, 1, 0))
			{
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_206.f_348, 1))
			{
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206.f_348);
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	func_2(&(uParam0->f_172), 1);
	func_2(&(uParam0->f_172), 16);
	func_2(&(uParam0->f_172), 2048);
	if (func_100(&(uParam0->f_2575)))
	{
		func_327(&(uParam0->f_206));
	}
	func_328(&(uParam0->f_206));
	func_329(uParam0);
}

int func_103(var uParam0)
{
	return 8;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_317(uParam0))
		{
			if (func_6(uParam0->f_172, 512) && func_6(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!func_6(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_293(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return 0;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	return 0;
}

void func_106(var uParam0, bool bParam1)
{
	if (!func_6(uParam0->f_172, 262144))
	{
		return;
	}
	if (func_6(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		func_2(&(uParam0->f_172), 262144);
		return;
	}
	if (!func_6(uParam0->f_172, 1048576))
	{
		if (func_330(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_331(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	if (!bLocal_27 && iLocal_15 == 10)
	{
		iLocal_15 = 3;
	}
	func_188();
	func_332();
	func_333();
	func_334();
	func_335();
	func_336();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_446))
	{
		func_337(uParam0);
		if (func_338(iLocal_446, 0))
		{
			PED::SET_PED_RESET_FLAG(iLocal_446, 25, true);
		}
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 2048, 0, -1, -1);
	CAM::_0xC252C0CC969AF79A(1);
	if (!func_298(uParam0->f_174, 2))
	{
		func_301(uParam0);
	}
	switch (iLocal_53)
	{
		case 0:
			func_339(uParam0);
			func_340();
			func_341(uParam0);
			func_342();
			if (func_343(uParam0))
			{
				func_344(&(vLocal_16[0 /*3*/]), cLocal_23);
				func_345();
				func_346();
				if (bLocal_30)
				{
					iLocal_54 = 3;
					iLocal_805 = 1;
					func_341(uParam0);
					func_306(2);
				}
				else
				{
					func_306(1);
				}
			}
			break;
		case 1:
			func_341(uParam0);
			func_347();
			func_348();
			func_349();
			func_350();
			if (func_351())
			{
				func_352(0, 0);
				iLocal_54 = 3;
				iLocal_805 = 1;
				func_341(uParam0);
				func_306(2);
			}
			else if (iLocal_804 == 0 || iLocal_804 == 1)
			{
				if (!func_353("RBT23_ILOASK_J") && !func_353("RBT23_ILOTHR_J"))
				{
					func_306(2);
				}
			}
			else if ((uLocal_32 && !func_353("RBT23_1st_Warn")) && !func_353("RBT23_IG2_WARN"))
			{
				if (!iLocal_821)
				{
					if (!func_79(&uLocal_824))
					{
						func_80(&uLocal_824, 0);
					}
					else if (func_354(&uLocal_824) > 3f)
					{
						func_355(uParam0, "RBT23_Last_Warn", 0);
						iLocal_821 = 1;
					}
				}
				else if (!func_353("RBT23_Last_Warn"))
				{
					iLocal_54 = 3;
					iLocal_805 = 1;
					func_341(uParam0);
					func_306(2);
				}
			}
			break;
		case 2:
			func_347();
			func_356();
			func_348();
			func_357();
			func_358();
			func_359(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1099))
			{
				func_303(uParam0);
			}
			func_360(uParam0);
			if (func_361())
			{
				if (func_362() && iLocal_452)
				{
					func_306(3);
				}
			}
			break;
		case 3:
			func_357();
			func_360(uParam0);
			if (func_363(uParam0))
			{
				func_306(4);
			}
			if (!bLocal_1269)
			{
				if (func_364())
				{
					func_365(uParam0);
				}
			}
			break;
		case 4:
			func_366(uParam0);
			if (!bLocal_1269)
			{
				if (func_364())
				{
					func_365(uParam0);
				}
			}
			if (bLocal_1269 && !bLocal_807)
			{
				if (func_367())
				{
					func_368(uParam0);
				}
			}
			if (bLocal_807 && !bLocal_1270)
			{
				func_369();
			}
			if (bLocal_1270)
			{
				func_370();
			}
			func_371(uParam0);
			if (func_372(uParam0))
			{
				func_306(5);
			}
			break;
		case 5:
			if (func_373(&Local_59))
			{
				func_374();
				return 8;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_375(iParam0) == 0;
}

int func_109(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_110(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_377(func_376(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_378(func_376(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_379(func_376(iParam0));
}

void func_113()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_114(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_115(int iParam0, int iParam1)
{
	if (!func_213(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_380(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_381(iParam0);
		if ((!func_228(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_382(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_383(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_384(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_385(iParam0))
	{
		return;
	}
	bVar0 = func_386(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_387(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_389(iParam0, func_388());
			func_390(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_391(iParam0, 67108864);
		func_389(iParam0, -15);
	}
	func_392(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_393(0))
	{
		if (func_394(0))
		{
			func_395(0);
		}
	}
	if (func_393(1))
	{
		if (func_394(1))
		{
			func_395(1);
		}
	}
}

bool func_120(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_121(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_122(var uParam0)
{
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_110(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_111(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_213(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_236(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_396(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_396(1);
		}
		else if (iVar3 == 61)
		{
			func_396(0);
		}
		else if (iVar3 == 83)
		{
			func_396(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_213(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_397(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_398(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_126(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;

	func_399(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_400(sParam1))
	{
		func_401(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_127()
{
	return Global_1572864->f_15;
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;

	if (!func_213(iParam0))
	{
		return;
	}
	if (func_402())
	{
		func_278(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_60(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_402())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_403(iParam0, 0, iParam3);
	if (func_213(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_404(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_405(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_406(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_407();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_408(iParam0);
			}
			bParam5 = false;
			uVar0 = func_409(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_60(32768))
	{
		func_410(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_411(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_412(iParam0);
}

int func_129(int iParam0)
{
	if (!func_213(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_413(iParam0);
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

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_137(4112);
	func_136(6);
	vVar2 = { func_414(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_415(vVar2, uVar1, uVar0, 0);
	func_416(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_212() != -1)
	{
		return;
	}
	func_137(32);
	if (iParam0 == 0)
	{
		func_137(16);
	}
	else if (iParam0 == 1)
	{
		func_137(8);
	}
	func_417();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_212() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_418(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_60(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_388();
	}
}

void func_134(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_135()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_419(Var10, 0);
}

void func_136(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_137(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_138(var uParam0)
{
	if (!func_338(Global_35, 0))
	{
		func_403(uParam0->f_174, 0, 0);
		((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	}
}

void func_139(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		func_420(0);
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_0x9A92C06ACBAF9731();
	}
}

int func_140(var uParam0)
{
	if (func_60(32768))
	{
		return 0;
	}
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728))
	{
		return 1;
	}
	return 0;
}

void func_141(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_421(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_422(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_422(&(Global_1347343->f_11), 16384);
	}
	if (func_423() >= 2)
	{
		if (!func_421(Global_1347343->f_11, 16384))
		{
			func_422(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_285(Global_1935630, 2048);
	func_424(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_425(1, &(uParam0->f_2605.f_482));
}

void func_144(int iParam0)
{
	int iVar0;

	if (!func_57(iParam0))
	{
		return;
	}
	if (iParam0 != func_56(0))
	{
		return;
	}
	if (func_109(iParam0) == 0)
	{
	}
	iVar0 = func_110(iParam0);
	if (func_426(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_427(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_428(iParam0);
	func_210(1);
	func_429(0);
	func_430(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_431(1);
			func_432(15, 0, 1);
			break;
		case 4:
			func_432(10, 0, 1);
			break;
		case 8:
			func_432(10, 0, 1);
			break;
		case 9:
			func_432(10, 0, 1);
			break;
		case 2:
			func_432(10, 0, 1);
			break;
		case 6:
			func_432(10, 0, 1);
			break;
		case 5:
			func_432(10, 0, 1);
			break;
	}
	func_433(1);
}

void func_145(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	char* sVar1;

	if (!bParam1)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 == 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		fParam2 = BUILTIN::VDIST2(Global_36, func_434(iParam0));
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 512 != 0)
	{
		if (fParam2 > 225f)
		{
			iVar0 = _NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(1);
			if (iVar0 != ((*Global_1347702)[iParam0 /*49*/])->f_39)
			{
				_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_39, 0);
			}
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_435())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_436(sVar1, 10000, 0, 0, 0, 1);
		}
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_146(int iParam0, bool bParam1, int iParam2)
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
		if (func_437())
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
		iVar0 = func_111(&(Global_1898164->f_1[0 /*5*/]));
		if (func_213(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_57(&(Global_1898164->f_1[0 /*5*/])))
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

int func_147(var uParam0)
{
	return 1;
}

int func_148()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return 0;
}

float func_149(var uParam0)
{
	return func_438(&Local_59);
}

int func_150(var uParam0)
{
	switch (func_71(uParam0))
	{
		case 0:
			if (func_439(&Local_59))
			{
				if (!func_440(Local_59.f_67))
				{
					func_309(iLocal_447, Local_59.f_300, 0);
					func_310(Local_59.f_300, ENTITY::GET_ENTITY_MODEL(Local_59.f_67));
				}
				func_23(&iLocal_446);
				return 1;
			}
			break;
		case 1:
			return 1;
		default:
			return 1;
	}
	return 0;
}

int func_151()
{
	return Global_1572864->f_8;
}

int func_152(int iParam0)
{
	if (func_110(iParam0) == 8)
	{
		return func_111(iParam0);
	}
	return -1;
}

void func_153(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_154(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_155(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_157(1);
	}
}

void func_156(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_157(0);
	}
}

void func_157(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_158(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_159(var uParam0)
{
	func_441(uParam0);
	HUD::_TEXT_BLOCK_DELETE("BHCR");
	func_442(&Local_59, 1);
	func_443(vLocal_467, 100f, 5);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_465))
	{
		func_444(&iLocal_465, 0, 1, 1);
		GRAPHICS::_0xAE7BF7CA9E4BA48D(uLocal_553);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_470))
	{
		func_444(&iLocal_470, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_476))
	{
		func_444(&iLocal_476, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_488))
	{
		func_444(&iLocal_488, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_493))
	{
		func_444(&iLocal_493, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_498))
	{
		func_444(&iLocal_498, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_503))
	{
		func_444(&iLocal_503, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_515))
	{
		func_444(&iLocal_515, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_520))
	{
		func_444(&iLocal_520, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_505))
	{
		func_444(&iLocal_505, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		func_444(&iLocal_510, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_525))
	{
		func_444(&iLocal_525, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_530))
	{
		func_444(&iLocal_530, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		func_444(&iLocal_534, 0, 1, 1);
	}
	if (iLocal_481 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_481);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_738))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 217, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 77, false);
		PED::_0x2EB75FB86C41F026(iLocal_738, 3, 1);
		PED::_0x2EB75FB86C41F026(iLocal_738, 1, 1);
		PED::_0x2EB75FB86C41F026(iLocal_738, 7, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_738, 512, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_738, false);
	}
}

void func_160(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_161(var uParam0)
{
	if (uParam0->f_171 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		MAP::DISPLAY_RADAR(true);
	}
	uParam0->f_171 = 0;
	uParam0->f_747 = 0;
	func_242(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_445(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_446(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
}

int func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_22));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	return 1;
}

void func_164(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_165(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_166(int iParam0)
{
	switch (func_212())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_167(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_168(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!func_447(iParam0))
	{
		return;
	}
	if (!func_448(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_449(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_450(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_451(iParam0, 0);
	func_452(iParam0);
}

void func_169(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_170(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2603))
	{
		POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2603);
		VOLUME::DELETE_VOLUME(uParam0->f_2603);
	}
}

void func_171(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2604))
	{
		POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2604);
		VOLUME::DELETE_VOLUME(uParam0->f_2604);
	}
}

void func_172(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_453(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::DELETE_VOLUME(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_454(iParam0, &iVar1, &iVar0))
	{
		if (func_455(iVar1, iVar0, 1))
		{
			func_456(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_375(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_57(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_174(iParam0) && !func_282(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_109(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_174(iParam0))
	{
		iParam2 = -1;
	}
	if (func_426(iParam0) == 3 || (func_426(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_427(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_457(iParam0);
			if (iVar0 != -1)
			{
				func_458(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_459();
				if (iVar0 != -1)
				{
					func_458(0);
				}
			}
		}
	}
	func_430(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_210(1);
		func_429(0);
		func_433(1);
	}
	func_460(iParam0, 1);
	func_428(iParam0);
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_47(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_176(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_213(iParam0))
	{
		return;
	}
	func_461(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_461(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_222(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_213(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_180(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_462(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_463(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_464((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_465(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_413(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_466(iParam0, 32);
	func_467();
}

void func_182(bool bParam0)
{
	Global_1956582 = bParam0;
	if (bParam0)
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(0, 0);
	}
	else
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(1, 0);
	}
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_184(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_117();
	if (func_385(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_468(vParam0, bParam3);
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_187()
{
	(vLocal_16[0 /*3*/])->f_1 = "script@proc@bountyhunting@banditomine@banditomine_main";
	(vLocal_16[1 /*3*/])->f_1 = "script@proc@bountyhunting@banditomine@target";
}

void func_188()
{
	switch (iLocal_15)
	{
		case 0:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(vLocal_16[0 /*3*/])))
			{
				vLocal_16[0 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE((vLocal_16[0 /*3*/])->f_1, 0, "PB_ALL", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(vLocal_16[0 /*3*/]));
				iLocal_15 = 1;
			}
			break;
		case 1:
			if (iLocal_26)
			{
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(vLocal_16[0 /*3*/]), 1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[2 /*41*/])->f_10, &(Local_851[2 /*41*/]), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[0 /*41*/])->f_10, &(Local_851[0 /*41*/]), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[1 /*41*/])->f_10, &(Local_851[1 /*41*/]), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[3 /*41*/])->f_10, &(Local_851[3 /*41*/]), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_1016[0 /*41*/])->f_10, &(Local_1016[0 /*41*/]), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "CHAIR_C", iLocal_488, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "CHAIR_D", iLocal_493, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "RIFLE_D", iLocal_520, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "RIFLE_B", iLocal_515, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "BOOTLE_A", iLocal_505, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "BOOTLE_B", iLocal_510, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "CRATE", iLocal_498, 0);
					ANIMSCENE::START_ANIM_SCENE(&(vLocal_16[0 /*3*/]));
					iLocal_15 = 2;
				}
			}
			break;
		case 2:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_BLOWUP_V1");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_BLOWUP_V2");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_BRKOUT_FRONT");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_BRKOUT_LEFT");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_TELLOFF");
			iLocal_15 = 3;
			break;
		case 3:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_BR_ASK");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_BR_THREAT");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_FL_ASK");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_FL_THREAT");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_FR_ASK");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_FR_THREAT");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_FRONT_ASK");
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(vLocal_16[0 /*3*/]), "PB_ILO_FRONT_THREAT");
			iLocal_15 = 10;
			bLocal_27 = true;
			break;
		case 5:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(vLocal_16[1 /*3*/])))
			{
				vLocal_16[1 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE((vLocal_16[1 /*3*/])->f_1, 0, "PB_FALL", false, true);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(vLocal_16[1 /*3*/]));
				iLocal_15 = 6;
			}
			break;
		case 6:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(&(vLocal_16[1 /*3*/]), 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(vLocal_16[1 /*3*/]), sLocal_464, iLocal_446, 0);
				ANIMSCENE::START_ANIM_SCENE(&(vLocal_16[1 /*3*/]));
				iLocal_15 = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_189(var uParam0)
{
	func_469(uParam0, 0);
	func_470(uParam0, 0);
	func_192(uParam0, 1);
	func_471(uParam0, 1);
	func_472(uParam0, 0);
	func_473(uParam0, 1);
	func_474(uParam0, 1, 1, 1);
}

void func_190(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_475(&(uParam0->f_1), 2);
	}
	else
	{
		func_476(&(uParam0->f_1), 2);
	}
}

void func_191(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_475(&(uParam0->f_1), 16);
	}
	else
	{
		func_476(&(uParam0->f_1), 16);
	}
}

void func_192(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_475(&(uParam0->f_1), 256);
	}
	else
	{
		func_476(&(uParam0->f_1), 256);
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_475(&(uParam0->f_1), 8);
	}
	else
	{
		func_476(&(uParam0->f_1), 8);
	}
}

void func_194(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_476(uParam0, 4);
	}
	else
	{
		func_475(uParam0, 4);
	}
}

void func_195(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_475(&(uParam0->f_1), 1);
	}
	else
	{
		func_476(&(uParam0->f_1), 1);
	}
}

void func_196(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_476(uParam0, 512);
	}
	else
	{
		func_475(uParam0, 512);
	}
}

void func_197(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_475(&(uParam0->f_1), 131072);
	}
	else
	{
		func_476(&(uParam0->f_1), 131072);
	}
}

void func_198(var uParam0, float fParam1)
{
	uParam0->f_741 = fParam1;
}

void func_199(var uParam0, float fParam1)
{
	uParam0->f_742 = fParam1;
}

void func_200(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_477(vVar0, vVar3, 0f) };
	vVar9 = { func_478(vVar0, vVar3, 0f) };
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

void func_201(var uParam0)
{
	func_189(uParam0);
	func_479(uParam0, 1);
	func_190(uParam0, 1);
	func_192(uParam0, 1);
	func_195(uParam0, 1);
	func_193(uParam0, 1);
	func_469(uParam0, 1);
	func_191(uParam0, 1);
	func_470(uParam0, 0);
}

int func_202(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam0[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_203(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_480((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_204(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_445(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			StringCopy(&(uParam0->f_2573), sParam1, 16);
		}
		else
		{
			uParam0->f_2573 = { func_446(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

int func_205(var uParam0)
{
	return uParam0->f_168;
}

void func_206(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_481((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_482((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_481((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_462(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_481((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_482((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_481((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_463(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_481(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_482(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_481(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_464((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_481((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_482((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_481((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_465(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_207(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_483(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_208(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;

	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE(1433015236))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*uParam0 = func_484(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

void func_209(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_285(Global_1935630, 4194304);
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

int func_211(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_480(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_481((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_485(uParam0->f_41[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_486(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_481((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_487(uParam0->f_117[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (func_488((*uParam0)[iVar1 /*3*/]))
		{
			if (func_481(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_489((*uParam0)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_490(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_481((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_491(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_492(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_493(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_494(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!func_6(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_212()
{
	return Global_1572887->f_12;
}

bool func_213(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

Vector3 func_214(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2923.161f, 1302.759f, 43.3501f;
		case 5:
			return 2528.41f, -1308.88f, 48.19f;
		case 105:
			return 1354.65f, -1315.54f, 75.75f;
		case 26:
			return -1799.43f, -356.2149f, 162.9841f;
		case 76:
			return -271.9088f, 791.6821f, 117.6676f;
		case 38:
			return -773.3978f, -1253.848f, 42.4872f;
		case 115:
			return -5525.97f, -2941.024f, -2.8331f;
	}
	return 0f, 0f, 0f;
}

int func_215(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_133(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_495(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_496(0, 0);
		if (func_497(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_498(1, 0);
		}
	}
	else
	{
		func_498(1, 0);
	}
	func_154(0);
	func_499(0, vParam0, uParam3);
	return 1;
}

int func_216(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_500(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_217(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	if (bParam2)
	{
		if (func_501(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_502(uParam0->f_65))
			{
				sVar0 = "BNTY_O_FLCTA";
			}
			else if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_LCTEA";
			}
			else
			{
				sVar0 = "BNTY_O_LCTED";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_501(uParam0->f_329, 1048576))
			{
				return;
			}
			if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_CTREA";
			}
			else
			{
				sVar0 = "BNTY_O_CTRED";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_501(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_440(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_501(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_440(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_501(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_440(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), func_505(uParam0->f_300));
			if (bParam2)
			{
				func_506(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_501(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_338(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_503(uParam0, bParam2, sVar0, func_505(uParam0->f_300), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, func_505(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_440(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_507(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_503(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_504(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_508(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_503(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_401(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_508(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_503(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_401(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_503(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_401(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_509(&(uParam0->f_330), iParam1);
	}
}

int func_218(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_501(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_382(&(uParam0->f_68));
			return 1;
		}
		return 0;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_440(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_382(&(uParam0->f_68));
				return 1;
			}
			if (!func_79(&(uParam0->f_321)))
			{
				if (func_510(uParam0->f_67))
				{
					func_271(&(uParam0->f_321));
				}
			}
			else if ((!func_510(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				func_242(&(uParam0->f_321));
			}
			else if (func_511(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_382(&(uParam0->f_68));
				return 1;
			}
		}
		else if (!func_79(&(uParam0->f_321)))
		{
			if (func_510(uParam0->f_67))
			{
				func_271(&(uParam0->f_321));
			}
		}
		else if ((!func_510(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			func_242(&(uParam0->f_321));
		}
		else if (func_511(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_382(&(uParam0->f_68));
			return 1;
		}
	}
	fVar0 = func_512(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_440(uParam0->f_67))
			{
				uParam0->f_64 = 2;
			}
			else if (!PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				uParam0->f_64 = 3;
			}
			else
			{
				uParam0->f_64 = 1;
			}
			return 1;
		}
		else if (fVar0 > fParam1)
		{
			if (!func_501(uParam0->f_329, 16))
			{
				func_217(uParam0, 256, 1);
				func_509(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_501(uParam0->f_329, 16))
			{
				func_513(&(uParam0->f_329), 16);
				if (func_440(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_217(uParam0, 16, 0);
				}
				else
				{
					func_217(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_228(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_338(uParam0->f_69, 0))
		{
			if (func_514(uParam0))
			{
				if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), 2140177766, 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 5;
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), -683250308, 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 6;
				}
				return 1;
			}
		}
		else
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), 2006449383, 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_64 = 6;
			return 1;
		}
	}
	if (uParam0->f_63 == 7 || uParam0->f_63 == 8)
	{
		fVar1 = func_516(Global_35, func_515(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar1 > 35f)
		{
			if (!func_501(uParam0->f_329, 131072))
			{
				func_509(&(uParam0->f_329), 131072);
				func_217(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_501(uParam0->f_329, 131072))
			{
				func_513(&(uParam0->f_329), 131072);
				func_217(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_516(Global_35, func_515(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar2 > 55f)
		{
			if (!func_501(uParam0->f_329, 33554432))
			{
				func_509(&(uParam0->f_329), 33554432);
				func_217(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_501(uParam0->f_329, 33554432))
			{
				func_513(&(uParam0->f_329), 33554432);
				func_217(uParam0, 2048, 0);
			}
		}
	}
	return 0;
}

int func_219(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_517(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_220(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_518(0);
	if (iVar0 == 11)
	{
		iVar1 = func_519(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_520(Global_40.f_4283);
				if (func_385(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_521(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_385(Global_1894899->f_2) && Global_1894899->f_2 == func_520(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_522(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_523(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_523(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_523(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_523(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_523(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_524(2) && !func_523(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_523(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_527(func_525(65536), 0, 3, func_526(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_517(iVar1);
			if (!func_501(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_523(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_523(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_523(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_523(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_523(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_523(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_523(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_517(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_523(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_523(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_528(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_529(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_523(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_530(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_531() <= 160)
			{
				return 1;
			}
			else
			{
				func_532(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_533(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_282(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_282(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_534(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_282(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < &Global_1898438)
		{
			return 1;
		}
		else if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
		{
			return 1;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_535())
		{
			if (func_401("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_222(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_536(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_282(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_282(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_223(int iParam0)
{
	if (iParam0 == 11 || iParam0 == 153)
	{
		return 26;
	}
	else if (iParam0 == 12 || iParam0 == 16)
	{
		return 5;
	}
	else if ((iParam0 == 13 || iParam0 == 154) || iParam0 == 15)
	{
		return 105;
	}
	else if (iParam0 == 14 || iParam0 == 135)
	{
		return 76;
	}
	else if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 155)
	{
		return 38;
	}
	else if (iParam0 == 19 || iParam0 == 20)
	{
		return 115;
	}
	return -1;
}

int func_224(int iParam0)
{
	if (!func_385(iParam0))
	{
		return 0;
	}
	return func_386(iParam0, 33554432);
}

int func_225(int iParam0)
{
	if (!func_385(iParam0))
	{
		return 0;
	}
	return func_386(iParam0, 67108864);
}

var func_226()
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

bool func_227(int iParam0, int iParam1)
{
	return func_537(iParam0, iParam1);
}

int func_228(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_538(iParam0, bParam1, iParam2, iParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_ARE_WITNESSES_PENDING(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 32768 != 0)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] > -1 && &((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] < 27)
		{
			if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != 0)
			{
				if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != ((*Global_1347702)[iParam0 /*49*/])->f_15)
				{
					return 0;
				}
			}
			else if (func_539(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_448(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_540(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_541(func_449(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_230(var uParam0)
{
	return 0;
}

int func_231(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_22);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (fParam1 > (100f * 100f))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 > 3)
	{
		iVar1 = 3;
	}
	while (iVar2 <= iVar1)
	{
		iVar3 = ((*Global_1347702)[iParam0 /*49*/])->f_23;
		iVar10 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, ((*Global_1347702)[iParam0 /*49*/])->f_22);
		iVar4 = iVar10;
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = iVar4;
				iVar11 = EVENT::_0xAD17A18215DD23D6(iVar5, 1, 0);
				if (iVar11 > 0 && iVar11 <= 2000)
				{
					iVar12 = EVENT::_EVENT_GET_RECENT_EVENT(iVar5, 1, 0);
					if (iVar12 != -587661767 || Global_1935630->f_44 != joaat("weapon_lasso"))
					{
						return 1;
					}
				}
				if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, joaat("weapon_thrown_dynamite"), 10f, true) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, joaat("weapon_thrown_molotov"), 10f, true))
				{
					return 1;
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = iVar4;
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6, Global_35, 1, 1))
				{
					return 1;
				}
			}
		}
		iVar2++;
		((*Global_1347702)[iParam0 /*49*/])->f_23++;
		if (((*Global_1347702)[iParam0 /*49*/])->f_23 >= iVar0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
		}
	}
	if (Global_1945917->f_6 >= 0 && (MISC::GET_GAME_TIMER() - Global_1945917->f_6) <= 1000)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_1945917->f_1) && ENTITY::IS_ENTITY_A_PED(Global_1945917->f_1)) && ITEMSET::IS_IN_ITEMSET(Global_1945917->f_1, ((*Global_1347702)[iParam0 /*49*/])->f_22))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(var uParam0)
{
	return 0;
}

int func_233(float fParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_447(iVar0) && func_448(iVar0))
		{
			func_542(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_235(var uParam0)
{
}

void func_236(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_277(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_277(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_277(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_277(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_237(int iParam0)
{
	Global_36579 = iParam0;
}

void func_238(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_239(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_245(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_543(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_240(var uParam0)
{
	if (func_544(uParam0->f_174))
	{
		func_545(262144, 5, 0, 1);
		func_546(720f, 1, 0);
	}
}

void func_241(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_242(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_71(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_750 = uParam0->f_748;
		}
	}
	if (uParam0->f_750 >= 0)
	{
		iVar1 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
		if (uParam0->f_750 < iVar1)
		{
			iVar2 = (iVar1 - uParam0->f_750);
			PED::_UNRESERVE_AMBIENT_PEDS(iVar2);
		}
		else if (uParam0->f_750 > PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED())
		{
			PED::_RESERVE_AMBIENT_PEDS(uParam0->f_750);
		}
	}
	uParam0->f_748 = -1;
	uParam0->f_749 = -1;
}

float func_244(int iParam0)
{
	float fVar0;

	if (((*Global_1347702)[iParam0 /*49*/])->f_16 > 250f)
	{
		fVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_16;
	}
	else
	{
		fVar0 = 250f;
	}
	return fVar0;
}

void func_245(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_213(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_146(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_60(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_547(iParam0);
	if (!bParam5 && func_548(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_434(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_549(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_543(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_212() == -1)
	{
		func_550(iParam0);
		iVar0 = func_520(Global_40.f_4283);
		if (func_385(iVar0) && func_551(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_552(iVar0);
		}
		if (func_553(iParam0, iVar1, iVar0))
		{
			func_554(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_548(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_555(iParam0))
		{
			if (iParam0 == 97)
			{
				func_325(185, 0);
			}
			else
			{
				func_325(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_436(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_278(iParam0, 2);
	}
}

void func_246(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::BLIP_REMOVE_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_247(int iParam0, vector3 vParam1, float fParam4)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 < 0f)
	{
		func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_556(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_245(iParam0, vParam1, 1, 0);
	}
}

void func_248(int iParam0)
{
	if (func_557(179))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return;
	}
	else if (func_548(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_558())
	{
		func_559(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_249(int iParam0)
{
	if (func_557(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_548(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_558())
	{
		func_559(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_250(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_251(var uParam0)
{
	struct<8> Var0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_751, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		Var0 = { func_560(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_252()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_253(var uParam0)
{
	return uParam0->f_350;
}

void func_254(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_561(uParam0) };
	func_562(uParam0, &Var0);
}

void func_255(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_366[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_350 };
			*(uParam0->f_366[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_562(uParam0, sParam1);
	func_563(uParam0, 2097152, 1);
	func_564(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_256(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_565(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_415++;
		if (uParam0->f_415 < 10)
		{
			return (func_566(uParam0, 256) && !func_566(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_567(uParam0, sParam1);
	if (!func_566(uParam0, 64))
	{
		if (!func_256(func_568(uParam0)))
		{
			func_564(uParam0, 64);
		}
		else
		{
			vVar0 = { func_569(uParam0) };
			if (!func_256(vVar0))
			{
				func_570(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_516(Global_35, func_568(uParam0), 1);
	if (func_566(uParam0, 128) || func_566(uParam0, 256))
	{
		if ((fVar3 >= func_571(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_572();
				uParam0->f_433 = 0;
			}
			func_573(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_327(uParam0);
			func_563(uParam0, 128, 1);
			func_563(uParam0, 256, 1);
			func_563(uParam0, 4096, 1);
			func_563(uParam0, 32768, 1);
			func_563(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_574(uParam0) || bParam2)
	{
		if (!func_566(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_574(uParam0) >= func_571(uParam0))
				{
				}
				Var4 = { func_253(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_575(uParam0);
				}
				Var4 = { func_253(uParam0) };
				iVar12 = 256;
				if (!func_566(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_576(uParam0, 0, 0, 0, 0);
				func_564(uParam0, 128);
			}
		}
	}
	if (func_566(uParam0, 128))
	{
		if (func_566(uParam0, 256) && !func_566(uParam0, 4194304))
		{
			return 1;
		}
		func_577(uParam0);
		if (!uParam0->f_433)
		{
			if (func_578())
			{
				func_579(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_561(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_366[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_366[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_366[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_566(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_348, &Var15))
				{
					if (!func_566(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_348, &Var15) && !ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_348, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15);
						}
						func_564(uParam0, 16777216);
					}
					if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_564(uParam0, 256);
			func_563(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_259(var uParam0)
{
}

bool func_260(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_261(var uParam0, char* sParam1, int iParam2)
{
	if (func_260(sParam1, 2))
	{
		return 0;
	}
	if (func_260(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_580(sParam1) == 9 || func_580(sParam1) == 12) || func_580(sParam1) == 13)
	{
		if (!func_260(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_581(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_582(uParam0, func_580(sParam1));
	}
	return 0;
}

void func_262(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_581(sParam0, 1);
}

int func_263(var uParam0, char* sParam1, int iParam2)
{
	if (!func_260(sParam1, 1))
	{
		return 0;
	}
	if (func_260(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_583(sParam1) == 9 || func_583(sParam1) == 12) || func_583(sParam1) == 13)
	{
		if (!func_260(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_581(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_582(uParam0, func_583(sParam1));
	}
	return 0;
}

void func_264(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_581(sParam0, 2);
}

int func_265(var uParam0, char* sParam1, int iParam2)
{
	if (func_260(sParam1, 1))
	{
		return 0;
	}
	if (func_580(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_580(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_584(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_580(sParam1) == 9 || func_580(sParam1) == 12) || func_580(sParam1) == 13) && func_260(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_580(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_331(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_260(sParam1, 8))
			{
				func_581(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_266(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_581(sParam0, 1);
}

int func_267(char* sParam0, bool bParam1)
{
	if (func_260(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_581(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_581(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_581(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_581(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_581(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_581(sParam0, 1);
		return 1;
	}
	func_581(sParam0, 1);
	return 0;
}

void func_268(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_260(uParam0->f_482[iVar0 /*16*/], 1048576) && func_260(uParam0->f_482[iVar0 /*16*/], 4)) && !func_260(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_269(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!bParam4 && !uParam0->f_782)
	{
		if (!func_585(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_783)
	{
		iVar20 = uParam0->f_790;
		while (iVar20 <= (uParam0->f_789 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			if (func_586(uParam0, 0))
			{
				if (func_587(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_588(uParam0, 1, &iVar0))
					{
					}
					if (func_589(uParam0, 3, &cVar2))
					{
					}
					if (func_588(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_588(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_588(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_588(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_588(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_590(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_581((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_581(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_581(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_260(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_590(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_581(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
							uParam0->f_788++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_790 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_783 = 1;
	}
	if (!func_142(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_586(uParam0, 12))
			{
				if (func_588(uParam0, 13, &iVar0))
				{
				}
				if (func_588(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_772[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_792 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_781 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	uParam0->f_783 = 0;
	uParam0->f_784 = 1;
	if (!bParam4)
	{
		func_591(uParam0);
	}
	return 1;
}

bool func_270(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_271(var uParam0)
{
	func_592(uParam0, 0f);
}

bool func_272(var uParam0)
{
	return func_270(*uParam0, 2);
}

int func_273()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_274(var uParam0)
{
	vector3 vVar0;

	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		STREAMING::REQUEST_MODEL(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28))
		{
			return 0;
		}
		vVar0 = { func_69(uParam0->f_174) };
		func_593(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_594(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_594(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43) && !PED::IS_PED_INJURED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_275(var uParam0)
{
	int iVar0;

	if (!HUD::TEXT_BLOCK_IS_LOADED("BHCR"))
	{
		return 0;
	}
	if (!bLocal_443)
	{
		func_595(&Local_59);
		bLocal_443 = true;
	}
	if (!func_298(uParam0->f_174, 2))
	{
		func_301(uParam0);
	}
	iVar0 = func_95(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_465))
	{
		iLocal_465 = OBJECT::CREATE_OBJECT(iLocal_466, vLocal_467, true, true, false, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_465, 0);
		uLocal_553 = GRAPHICS::SET_GRASS_CULL_SPHERE(vLocal_467, 1f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_470))
	{
		iLocal_470 = OBJECT::CREATE_OBJECT(iLocal_471, vLocal_472, true, true, false, false, true);
		ENTITY::_0x203BEFFDBE12E96A(iLocal_470, vLocal_472, fLocal_475, 1, 0, 1);
		ENTITY::_0x9587913B9E772D29(iLocal_470, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_476))
	{
		iLocal_476 = OBJECT::CREATE_OBJECT(iLocal_471, vLocal_477, true, true, false, false, true);
		ENTITY::_0x203BEFFDBE12E96A(iLocal_476, vLocal_477, fLocal_480, 1, 0, 1);
		ENTITY::_0x9587913B9E772D29(iLocal_476, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_498))
	{
		iLocal_498 = OBJECT::CREATE_OBJECT(iLocal_499, vLocal_500, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_482))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vLocal_484, 5f, iLocal_483, false))
		{
			if (iLocal_481 == 0)
			{
				iLocal_481 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iLocal_483, vLocal_484, 11);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_481))
			{
				iLocal_482 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_481));
				ENTITY::_0x203BEFFDBE12E96A(iLocal_482, vLocal_484, fLocal_487, 1, 0, 1);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_505))
	{
		iLocal_505 = OBJECT::CREATE_OBJECT(iLocal_506, vLocal_507, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		iLocal_510 = OBJECT::CREATE_OBJECT(iLocal_511, vLocal_512, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_515))
	{
		iLocal_515 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_repeater_carbine"), -1, vLocal_517, 1, 1065353216);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_520))
	{
		iLocal_520 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_repeater_carbine"), -1, vLocal_522, 1, 1065353216);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_525))
	{
		iLocal_525 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_527, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_525, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_530))
	{
		iLocal_530 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_531, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_530, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		iLocal_534 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_535, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_534, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_538))
	{
		iLocal_538 = OBJECT::CREATE_OBJECT(iLocal_526, vLocal_539, true, true, false, false, true);
		ENTITY::_0xEBDC12861D079ABA(iLocal_538, 1);
	}
	func_302(uParam0, 0);
	if (iVar0 < 1)
	{
		if (iLocal_1279 < 4)
		{
			func_596(uParam0);
		}
		else if (iLocal_1280 < 2)
		{
			func_597(uParam0);
		}
		else if (iLocal_1280 >= 2)
		{
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_488))
	{
		iLocal_488 = OBJECT::CREATE_OBJECT(iLocal_489, vLocal_490, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_493))
	{
		iLocal_493 = OBJECT::CREATE_OBJECT(iLocal_494, vLocal_495, true, true, false, false, true);
	}
	func_598();
	if (iVar0 >= 1)
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_277(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_278(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_279(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	uVar10 = func_599(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_276(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_277(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_277(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_277(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_277(iParam0)))
	{
		func_278(iParam0, 4);
	}
}

void func_280(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];

	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&Var1, "PSTR_O_", 16);
		StringConCat(&Var1, &cVar0, 16);
		cVar3 = func_600(0, &Var1, 0, 0, -1, -1);
		func_601(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_281(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_213(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_236(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

int func_282(int iParam0)
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
		iVar0 = func_426(iParam0);
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

void func_283(int iParam0, bool bParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_110(iParam0), func_111(iParam0), func_112(iParam0), func_109(iParam0), Global_36);
		}
	}
	func_430(iParam0, 1);
	bParam1 = bParam1;
}

void func_284(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_282(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	if (bParam1)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_602(func_111(iParam0));
			}
			if (func_212() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_603(iParam0);
	if (!func_57(func_56(0)))
	{
		func_430(iParam0, 3);
		func_210(bParam2);
		if (func_212() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_429(1);
		}
		func_604(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_605(&Global_0, 1024);
		}
		if (func_212() == -1)
		{
			func_606(&(Global_1347343->f_11), 536870912);
			func_607(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_608(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_609(0);
			}
		}
		if (func_212() == -1)
		{
			iVar1 = func_457(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_459();
				switch (iVar1)
				{
					case 0:
						func_610(0);
						break;
					case 1:
						func_610(1);
						break;
					case 2:
						func_610(2);
						break;
					case 3:
						func_610(3);
						break;
					case 4:
						func_610(4);
						break;
					case 5:
						func_610(5);
						break;
					case 6:
						func_610(5);
						break;
					case 7:
						func_610(7);
						break;
					case 8:
						func_610(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_111(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_610(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_111(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_610(11);
						break;
					default:
						iVar1 = func_459();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_611(0);
									break;
								case 1:
									func_611(1);
									break;
								case 2:
									func_611(2);
									break;
								case 3:
									func_611(3);
									break;
								case 4:
									func_611(4);
									break;
								case 5:
									func_611(5);
									break;
								case 6:
									func_611(5);
									break;
								case 7:
									func_611(7);
									break;
								case 8:
									func_611(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_433(1);
	}
	else
	{
		func_604(iParam0, -1);
		func_430(iParam0, 4);
	}
	func_460(iParam0, 0);
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_286(var uParam0)
{
	int iVar0;

	if (uParam0->f_749 == -1)
	{
		if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_749 = 15;
		}
	}
	if (uParam0->f_749 >= 0)
	{
		if (uParam0->f_749 < PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED())
		{
			iVar0 = (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() - uParam0->f_749);
			PED::_UNRESERVE_AMBIENT_PEDS(iVar0);
		}
		else if (uParam0->f_749 > PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED())
		{
			PED::_RESERVE_AMBIENT_PEDS(uParam0->f_749);
		}
	}
	uParam0->f_748 = -1;
}

void func_287(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (_NAMESPACE48::IS_PERSISTENT_CHARACTER_VALID(_NAMESPACE48::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3)))
					{
						_NAMESPACE48::FORCE_DESPAWN_PERSCHAR(_NAMESPACE48::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, 0, 0);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_288()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_447(iVar0))
		{
			func_542(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_289(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_523(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_523(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_612(joaat("weapon_revolver_cattleman")))
			{
				func_613(joaat("weapon_revolver_cattleman"));
			}
			func_614(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("weapon_revolver_cattleman"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, 0, 0f);
	func_615(0f);
	Global_1935436->f_11 = 1;
	if (func_402())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_616();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_291(var uParam0)
{
}

int func_292(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_293(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_617(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_618(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_296() == iParam9 && func_619() == iParam10) && !func_620(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_296() != iParam9 && !func_620(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_621(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

int func_294(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (bLocal_443)
	{
		func_622(&Local_59, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18, 0, 0);
	}
	iLocal_26 = 1;
	func_333();
	func_598();
	func_188();
	func_339(uParam0);
	func_340();
	func_342();
	if (func_516(Global_35, vLocal_467, 1) > 125f)
	{
		if (!iLocal_35)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[0 /*41*/]), true);
			ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[1 /*41*/]), true);
			ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[2 /*41*/]), true);
			ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[3 /*41*/]), true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_482, true);
			iLocal_35 = 1;
		}
		return 0;
	}
	else if (iLocal_35)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[0 /*41*/]), false);
		ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[1 /*41*/]), false);
		ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[2 /*41*/]), false);
		ENTITY::SET_ENTITY_INVINCIBLE(&(Local_851[3 /*41*/]), false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_482, false);
		iLocal_35 = 0;
	}
	if (func_343(uParam0))
	{
		func_344(&(vLocal_16[0 /*3*/]), cLocal_23);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		func_302(uParam0, 0);
		func_345();
		iVar0 = 0;
		while (iVar0 < 4)
		{
			(Local_851[iVar0 /*41*/])->f_2 = MAP::BLIP_ADD_FOR_ENTITY(831283580, &(Local_851[iVar0 /*41*/]));
			iVar0++;
		}
		func_306(2);
		return 1;
	}
	else if (func_623(Global_36, vLocal_467, 40f, 1))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			(Local_851[iVar0 /*41*/])->f_2 = MAP::BLIP_ADD_FOR_ENTITY(831283580, &(Local_851[iVar0 /*41*/]));
			MAP::BLIP_ADD_MODIFIER((Local_851[iVar0 /*41*/])->f_2, -1118229366);
			iVar0++;
		}
		func_302(uParam0, 0);
		return 1;
	}
	return 0;
}

int func_295(var uParam0)
{
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_161(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_624(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_624(0, 1, 1, 1);
			if (func_625(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_296()
{
	return Global_1572864->f_9;
}

int func_297(var uParam0)
{
	if (!func_79(uParam0))
	{
		func_80(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
	{
		return 1;
	}
	if (func_511(uParam0) > 15f)
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_517(((*Global_1347702)[iParam0 /*49*/])->f_15);
	if (func_501(iVar0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_299(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;

	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = func_626(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!func_338(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_300(int iParam0)
{
	func_627(((*Global_1347702)[iParam0 /*49*/])->f_15, 0);
}

void func_301(var uParam0)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_628(uParam0->f_174, 2);
	}
}

void func_302(var uParam0, bool bParam1)
{
	if (func_629())
	{
		func_630(uParam0, Global_35, "JOHN", bParam1);
	}
	else
	{
		func_630(uParam0, Global_35, "ARTHUR", bParam1);
	}
}

int func_303(var uParam0)
{
	int iVar0;

	if (iLocal_452)
	{
		return 1;
	}
	if (((((ENTITY::IS_ENTITY_DEAD(&(Local_851[0 /*41*/])) && ENTITY::IS_ENTITY_DEAD(&(Local_851[1 /*41*/]))) && ENTITY::IS_ENTITY_DEAD(&(Local_851[2 /*41*/]))) && ENTITY::IS_ENTITY_DEAD(&(Local_851[3 /*41*/]))) || func_216(Global_35, vLocal_828, 5f, 1, 1)) || ENTITY::DOES_ENTITY_EXIST(iLocal_446))
	{
		iVar0 = func_95(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_446))
		{
			iLocal_446 = func_631(iLocal_447, vLocal_448, fLocal_451, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_446, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_446, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_446, 1269650476);
			func_614(iLocal_446, joaat("weapon_revolver_cattleman"), 0, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_632(iLocal_446, 1);
			func_633(uParam0);
			func_630(uParam0, iLocal_446, "RBH_TARGET23", 0);
			func_634(&Local_59, iLocal_446, "RBH_TARGET23");
			if (iVar0 < 3)
			{
				func_635(&Local_59);
			}
			func_217(&Local_59, 4, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 6, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 146, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 305, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 306, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 388, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 132, true);
		}
		else if (iVar0 >= 1)
		{
			iLocal_452 = 1;
		}
		else
		{
			func_636();
		}
	}
	return 0;
}

void func_304(var uParam0, int iParam1)
{
	if (func_298(uParam0->f_174, 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_446))
	{
		CAM::_0x5B637D6F3B67716A(iLocal_446);
		iLocal_462 = 1;
		func_637(iLocal_446, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_446))
	{
		*iParam1 = -2146271366;
	}
	else
	{
		*iParam1 = 1361896662;
	}
}

void func_305(int iParam0)
{
	if (iLocal_55 != iParam0)
	{
		iLocal_55 = iParam0;
	}
}

void func_306(int iParam0)
{
	iLocal_53 = iParam0;
}

bool func_307(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam1))
	{
		return false;
	}
	return PED::IS_PED_USING_THIS_SCENARIO(iParam0, iParam1);
}

int func_308(int iParam0, int iParam1)
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

void func_309(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_638(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if ((Global_40.f_9829[iVar0 /*4*/])->f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				func_639(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_640(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_639(iVar3, iParam0, iParam1, 0);
}

int func_310(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar3 /*4*/] == iParam0)
		{
			iVar2++;
			if ((Global_40.f_9829[iVar3 /*4*/])->f_1 == iParam1)
			{
			}
			else
			{
				iVar3++;
			}
			if (iVar2 == -1)
			{
				return 0;
			}
			iVar0 = func_641(iParam0, iVar2);
			iVar1 = func_642(iParam0, iVar2);
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, iParam1);
			func_643(iVar1, 0);
			if (func_644(iVar1, 0, 0, 0, 0, 0))
			{
				return func_645(iVar1);
			}
			return 0;
		}
	}

void func_311(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0 /*4*/] == iParam1 && (Global_40.f_9829[iVar0 /*4*/])->f_1 == iParam0)
		{
			(Global_40.f_9829[iVar0 /*4*/])->f_3 = uParam2;
		}
		iVar0++;
	}
}

void func_312(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_646(iParam0, sParam4, iParam5);
	}
	func_647(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_313(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2908.76f, 1304.58f, 43.91f;
		case 5:
			return 2483.26f, -1303.78f, 48.88f;
		case 105:
			return 1362.846f, -1294.084f, 75.7035f;
		case 26:
			return -1808.76f, -342.45f, 163.81f;
		case 76:
			return -277.76f, 816.93f, 118.15f;
		case 38:
			return -768.61f, -1277.13f, 42.56f;
		case 115:
			return -5533.509f, -2932.444f, -2.8992f;
	}
	return 0f, 0f, 0f;
}

int func_314()
{
	int iVar0;

	iVar0 = func_531();
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

int func_315(int iParam0)
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

float func_316(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_317(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_648(uParam0))
		{
			return 0;
		}
		func_222(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_251(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_624(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_318()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1938056823, false);
}

void func_319(var uParam0)
{
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
}

int func_320(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_649(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_321(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_183(uParam1, 32768))
	{
		Var0 = { func_561(uParam0) };
		func_255(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_564(uParam0, 268435456);
			if (func_256(uParam0->f_409))
			{
				uParam0->f_409 = { func_650(uParam1, uParam1->f_1580) };
			}
			if (func_256(uParam0->f_406))
			{
				uParam0->f_406 = { func_650(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_651(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_564(uParam0, 67108864);
		func_652(uParam1, 524288);
	}
	if (func_653(uParam1, 128))
	{
		func_564(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_654(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_651(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_322(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_655(uParam0->f_174)}, 8);
		func_656(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_657();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_324()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_658();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, 0);
	func_659(-1);
	func_660(3);
	return 1;
}

void func_325(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_661(iParam0, &iVar0, &iVar1);
	if (!func_662(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_663(iVar0, iVar1);
}

int func_326(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_567(uParam4, &sParam0);
	if (func_566(uParam4, 2) && !func_566(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_664(uParam4) != 1)
	{
		func_665(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_664(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_666(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
				{
					func_667(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_668(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_669(uParam5);
				}
				func_667(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_566(uParam4, 134217728))
				{
				}
				else
				{
					func_254(uParam4);
				}
				func_271(&(uParam4->f_1));
				func_667(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_577(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_511(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_667(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_258(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_667(uParam4, 4);
					}
					else if (!func_256(func_568(uParam4)) && !func_216(Global_35, func_568(uParam4), 100f, 1, 1))
					{
						func_670(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_568(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_511(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_667(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_671(1, 0);
					func_666(uParam4, &sParam0, uParam5);
					func_667(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_511(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_667(uParam4, 4);
			}
			break;
		case 3:
			func_672(uParam4);
			if (func_668(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_669(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348) || func_566(uParam4, 512)))
			{
				if (!func_566(uParam4, 1024) && func_673(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_566(uParam4, 512))
				{
					func_271(&(uParam4->f_1));
					func_564(uParam4, 512);
					func_667(uParam4, 4);
				}
				else if (func_566(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_665(uParam4);
			}
			if (func_566(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_674(uParam4) - func_675(uParam4)))) <= 2f)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
					{
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
					}
				}
				if (func_676(uParam4, Global_35, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_675(uParam4) > 5000)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
			}
			if (func_677(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				func_678(uParam4);
				func_679(uParam4);
				return 1;
			}
			else
			{
				if (func_566(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_271(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
						func_564(uParam4, 512);
						func_563(uParam4, 67108864, 1);
						func_667(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_566(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_675(uParam4) <= 5000) && func_675(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_566(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_680(&(uParam4->f_405), 0);
					func_564(uParam4, 536870912);
				}
				if (func_675(uParam4) >= 5000 && func_675(uParam4) <= (func_674(uParam4) - 5000))
				{
					func_681();
				}
			}
			break;
		case 6:
			if (func_677(uParam4))
			{
				func_678(uParam4);
				func_679(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_566(uParam4, 524288))
			{
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						func_564(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 1);
						if (_NAMESPACE71::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (func_682(uParam5))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_667(uParam4, 3);
					}
					else if (func_511(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_667(uParam4, 3);
					}
				}
				if (func_664(uParam4) == 3)
				{
					if (func_566(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_667(uParam4, 4);
			break;
	}
	return 0;
}

void func_327(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_566(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_683(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_566(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_563(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_563(uParam0, 16, 1);
}

void func_328(int* iParam0)
{
	struct<367> Var0;

	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_329(var uParam0)
{
	func_684(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

int func_330(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_183(uParam0, 32768))
	{
		return 1;
	}
	if (func_685(uParam0) >= 3)
	{
		uParam0->f_1792 = func_538(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630->f_40))
			{
				uParam0->f_1794 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_686(uParam0);
	}
	if (func_685(uParam0) < 10)
	{
		if (func_685(uParam0) == 3)
		{
			func_687(uParam0, iParam5, bParam6);
		}
		else if (func_685(uParam0) > 3)
		{
			if (func_688(uParam0) == 0)
			{
				if (!func_183(uParam0, 524288))
				{
					func_689(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_690(uParam0, 4);
					func_691(uParam0, 10);
					func_692(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_183(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_654(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			func_693(0);
			func_694();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_654(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_695(uParam0, uParam0->f_1580))
				{
					if (func_696(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_697(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_697(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_698(uParam0);
			}
		}
	}
	bVar0 = func_699(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_183(uParam0, 268435456) && bVar1) && !func_183(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[uParam0->f_1580 /*41*/])->f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					iVar2 = 1;
				}
			}
			if (!bVar3 || iVar2)
			{
				func_700(uParam0, 131072);
				func_700(uParam0, 268435456);
			}
		}
		if (func_653(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_654(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::GET_LETTER_BOX_RATIO() > 0f || func_688(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_685(uParam0) == 3 || func_183(uParam0, 131072))
	{
		func_701(uParam0);
		if (!func_183(uParam0, 262144))
		{
			if ((bVar0 && func_183(uParam0, 65536)) || func_183(uParam0, 131072))
			{
				func_700(uParam0, 32768);
				func_690(uParam0, 4);
				func_691(uParam0, 10);
				uParam0->f_1665 = 1;
				func_692(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_685(uParam0) >= 3)
	{
		func_702(uParam0, iParam5);
		func_703(uParam0);
		if (!func_704(uParam0, 1))
		{
			func_705(uParam0);
		}
		func_706(uParam0);
	}
	switch (func_685(uParam0))
	{
		case 0:
			func_707(uParam0, Param1, iParam5);
			break;
		case 1:
			func_708(uParam0);
			break;
		case 2:
			func_709(uParam0);
			break;
		case 3:
			if (func_331(uParam0))
			{
				func_710(2);
				func_697(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_271(&(uParam0->f_1768));
				func_690(uParam0, 1);
				func_711();
				func_691(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_183(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_685(uParam0) == 5)
			{
				if (func_712(uParam0))
				{
					func_690(uParam0, 2);
					func_691(uParam0, 6);
				}
			}
			if (func_685(uParam0) == 6)
			{
				if (func_713(uParam0))
				{
					func_690(uParam0, 3);
					func_691(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_354(&(uParam0->f_1768)) >= 15f)
			{
				if (func_714(uParam0, iParam5))
				{
					if (func_715(uParam0))
					{
						uParam0->f_1581 = func_716(uParam0);
						func_271(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_DISABLE_HUD_CONTEXT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_690(uParam0, 6);
						func_691(uParam0, 9);
					}
					else
					{
						func_690(uParam0, 4);
						func_691(uParam0, 10);
						func_692(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_714(uParam0, iParam5))
			{
				func_692(uParam0, iParam5);
				func_691(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_331(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

void func_332()
{
	switch (iLocal_56)
	{
		case 0:
			if ((((Local_851[0 /*41*/])->f_8 >= 5 || (Local_851[1 /*41*/])->f_8 >= 5) || (Local_851[2 /*41*/])->f_8 >= 5) || (Local_851[3 /*41*/])->f_8 >= 5)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_START"))
				{
					iLocal_56 = 1;
				}
			}
			break;
		case 1:
			if (func_717(1, 1, 1, 1, 0) >= 8)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_STOP"))
				{
					iLocal_56 = 2;
				}
			}
			break;
		case 2:
			if (bLocal_1270)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_START"))
				{
					iLocal_56 = 3;
				}
			}
			break;
		case 3:
			if (func_717(1, 1, 1, 0, 1) >= 10)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RBT23_BANDITO_MINE_STOP"))
				{
					iLocal_56 = 4;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_333()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_738))
	{
		func_299(&iLocal_738, vLocal_740, fLocal_743, 0, 0, 1, 1);
	}
	else if (!bLocal_739)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 217, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_738, 77, true);
		PED::_0x2EB75FB86C41F026(iLocal_738, 3, 0);
		PED::_0x2EB75FB86C41F026(iLocal_738, 1, 0);
		PED::_0x2EB75FB86C41F026(iLocal_738, 7, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_738, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_738, 512, true);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iLocal_738, 0);
		bLocal_739 = true;
	}
	if (bLocal_739)
	{
		PED::SET_PED_RESET_FLAG(iLocal_738, 53, true);
		PED::SET_PED_RESET_FLAG(iLocal_738, 49, true);
	}
}

void func_334()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_851[iVar0 /*41*/])) && (Local_851[iVar0 /*41*/])->f_8 < 10)
		{
			if (PED::IS_PED_DEAD_OR_DYING(&(Local_851[iVar0 /*41*/]), true) || PED::IS_PED_FATALLY_INJURED(&(Local_851[iVar0 /*41*/])))
			{
				(Local_851[iVar0 /*41*/])->f_8 = 10;
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[iVar0 /*41*/])->f_10, &(Local_851[iVar0 /*41*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1099) && Local_1099.f_8 < 10)
	{
		if (PED::IS_PED_DEAD_OR_DYING(Local_1099, true) || PED::IS_PED_FATALLY_INJURED(Local_1099))
		{
			Local_1099.f_8 = 10;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_1016[iVar0 /*41*/])) && (Local_1016[iVar0 /*41*/])->f_8 < 10)
		{
			if (PED::IS_PED_DEAD_OR_DYING(&(Local_1016[iVar0 /*41*/]), true) || PED::IS_PED_FATALLY_INJURED(&(Local_1016[iVar0 /*41*/])))
			{
				(Local_1016[iVar0 /*41*/])->f_8 = 10;
				if (iVar0 == 0)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), "BANDITO_E", &(Local_1016[iVar0 /*41*/]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_1140[iVar0 /*41*/])) && (Local_1140[iVar0 /*41*/])->f_8 < 10)
		{
			if (PED::IS_PED_DEAD_OR_DYING(&(Local_1140[iVar0 /*41*/]), true) || PED::IS_PED_FATALLY_INJURED(&(Local_1140[iVar0 /*41*/])))
			{
				(Local_1140[iVar0 /*41*/])->f_8 = 10;
			}
		}
		iVar0++;
	}
}

void func_335()
{
	if (!MAP::DOES_BLIP_EXIST(Local_59.f_66))
	{
		return;
	}
	if (iLocal_445)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			MAP::BLIP_REMOVE_MODIFIER(Local_59.f_66, -1878373110);
			iLocal_445 = 0;
		}
	}
	else if (func_718(Global_35))
	{
		MAP::BLIP_ADD_MODIFIER(Local_59.f_66, -1878373110);
		iLocal_445 = 1;
	}
}

void func_336()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_851[iVar0 /*41*/])) && (Local_851[iVar0 /*41*/])->f_8 >= 5)
		{
			if (func_719(&(Local_851[iVar0 /*41*/]), -1118229366, 1))
			{
			}
		}
		iVar0++;
	}
}

void func_337(var uParam0)
{
	func_720(uParam0);
	if (!func_298(uParam0->f_174, 1))
	{
		if (iLocal_463 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_446))
			{
				iLocal_463++;
			}
		}
		else if (iLocal_463 == 1)
		{
			iLocal_463++;
		}
		else if (iLocal_463 == 2)
		{
			if (!iLocal_462)
			{
				func_628(uParam0->f_174, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("PRBTY_RIDE_DEAD");
				CAM::_0xE3639DB78B3B5400(iLocal_446);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_446, true);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_446, 0, 0);
				func_305(9);
				iLocal_462 = 0;
			}
		}
	}
	if (iLocal_55 != 7 && iLocal_55 != 9)
	{
		if (func_721(iLocal_446))
		{
			if (func_353("RBT23_RELEASED"))
			{
				func_722("RBT23_RELEASED", 0, 0);
			}
		}
		if (func_723(iLocal_446))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_446, 453, true);
			func_305(7);
		}
	}
	if ((((bLocal_812 == 1 && iLocal_55 != 9) && iLocal_55 != 5) && iLocal_55 != 6) && !func_721(iLocal_446))
	{
		if (func_355(uParam0, "RBT23_CUTFREEJ", 0))
		{
			func_305(5);
			iLocal_835 = 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			break;
		case 5:
			if (!func_308(iLocal_446, 518218985))
			{
				TASK::CLEAR_PED_TASKS(iLocal_446, 1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_446, Global_35, 3, 0, -1082130432, -1, 0);
			}
			func_305(6);
			break;
		case 6:
			func_724(uParam0);
			break;
		case 7:
			if (func_725(iLocal_446, 1))
			{
				func_726(uParam0);
			}
			else if (!PED::IS_PED_HOGTIED(iLocal_446))
			{
				if (!func_308(iLocal_446, 518218985))
				{
					TASK::CLEAR_PED_TASKS(iLocal_446, 1, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_446, Global_35, 3, 0, -1082130432, -1, 0);
				}
				func_305(8);
			}
			if (iLocal_53 < 4)
			{
				func_306(4);
			}
			break;
		case 8:
			break;
		case 9:
			if (iLocal_53 < 4)
			{
				func_362();
				func_306(4);
			}
			break;
	}
}

int func_338(int iParam0, int iParam1)
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
	if (func_501(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_339(var uParam0)
{
	if (iLocal_827 < 1 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_1", 1))
	{
		iLocal_827 = 0;
	}
	else if (iLocal_827 < 2 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "BREAK_CONVO_1", 1))
	{
		iLocal_827 = 1;
	}
	else if (iLocal_827 < 3 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_1", 1))
	{
		iLocal_827 = 2;
	}
	else if (iLocal_827 < 4 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_2", 1))
	{
		iLocal_827 = 3;
	}
	else if (iLocal_827 < 5 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "BREAK_CONVO_2", 1))
	{
		iLocal_827 = 4;
	}
	else if (iLocal_827 < 6 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_2", 1))
	{
		iLocal_827 = 5;
	}
	else if (iLocal_827 < 7 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_3", 1))
	{
		iLocal_827 = 6;
	}
	else if (iLocal_827 < 8 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_3", 1))
	{
		iLocal_827 = 7;
	}
	else if (iLocal_827 < 9 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF", 1))
	{
		iLocal_827 = 8;
	}
	else if (iLocal_827 < 10 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF_POST_1", 1))
	{
		iLocal_827 = 9;
	}
	else if (iLocal_827 < 11 && ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF_POST_2", 1))
	{
		iLocal_827 = 10;
	}
	if (iLocal_827 > 8)
	{
		if (!iLocal_1325)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -5977.234f, -3243.004f, -23.14962f, -5964.408f, -3201.771f, -14.14777f, 29.75f, false, true, 0))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(&(Local_1016[0 /*41*/]), 0f, 0f, 0f, true, 1000, 1500, 1500, 0);
				iLocal_1325 = 1;
			}
		}
	}
	switch (iLocal_827)
	{
		case 0:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_1", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_HCNV1", 0);
					iLocal_827++;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "BREAK_CONVO_1", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_BRK1", 0);
					iLocal_827++;
				}
				bLocal_547 = true;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_1", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_MCNV1", 0);
					iLocal_827++;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_2", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_HCNV2", 0);
					iLocal_827++;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "BREAK_CONVO_2", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_BRK2", 0);
					iLocal_827++;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_2", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_MCNV2", 0);
					iLocal_827++;
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_3", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_HCNV3", 0);
					iLocal_827++;
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_3", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG1_MCNV3", 0);
					iLocal_827++;
				}
			}
			break;
		case 8:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF", 1))
			{
				iLocal_29 = 1;
				if (func_216(&(Local_1016[0 /*41*/]), vLocal_828, 1f, 1, 1))
				{
					MAP::BLIP_REMOVE_MODIFIER((Local_1016[0 /*41*/])->f_2, -1034486097);
					MAP::BLIP_ADD_MODIFIER((Local_1016[0 /*41*/])->f_2, -1118229366);
					func_352(0, 0);
					func_355(uParam0, "RBT23_IG2_TELL1", 0);
					iLocal_827++;
				}
			}
			break;
		case 9:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF_POST_1", 1))
			{
				if (!func_727())
				{
					func_355(uParam0, "RBT23_IG2_TELL2", 0);
					iLocal_827++;
				}
			}
			break;
		case 10:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF_POST_2", 1))
			{
				if (!func_727())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(vLocal_16[0 /*3*/]), "LOOP_BOOL", false, false);
					func_355(uParam0, "RBT23_IG2_TELL4", 0);
					iLocal_827++;
				}
			}
			else if (!func_353("RBT23_IG2_TELL2") && !iLocal_25)
			{
				func_355(uParam0, "RBT23_IG2_TELL3", 0);
				iLocal_25 = 1;
			}
			break;
	}
}

void func_340()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<15> Var9;

	vVar0 = { -5959f, -3219f, -15f };
	vVar3 = { -5959f, -3219f, -20f };
	vVar6 = { -5980.6f, -3221.7f, -22.2f };
	Var9.f_8 = -1082130432;
	Var9 = { vVar6 };
	Var9.f_3 = { vVar0 };
	Var9.f_7 = 0f;
	Var9.f_12 = 1;
	Var9.f_6 = joaat("weapon_rifle_springfield");
	Var9.f_13 = 0;
	Var9.f_14 = 1;
	if (iLocal_36 < 2)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_1", 1))
		{
			if (!func_79(&uLocal_41))
			{
				func_80(&uLocal_38, 0);
				func_80(&uLocal_41, 0);
			}
			else if (func_354(&uLocal_38) > 8.15f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				func_242(&uLocal_38);
			}
			else if (func_354(&uLocal_41) > 8.33f)
			{
				FIRE::ADD_OWNED_EXPLOSION(&(Local_851[1 /*41*/]), vVar0, 25, 1f, true, false, 1f);
				func_242(&uLocal_41);
				iLocal_36 = 2;
			}
		}
	}
	else if (iLocal_36 < 3)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_1", 1))
		{
			if (!func_79(&uLocal_41))
			{
				func_80(&uLocal_38, 0);
				func_80(&uLocal_41, 0);
			}
			else if (func_354(&uLocal_38) > 7f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				func_242(&uLocal_38);
			}
			else if (func_354(&uLocal_41) > 9.45f)
			{
				FIRE::ADD_OWNED_EXPLOSION(&(Local_851[1 /*41*/]), vVar3, 25, 1f, true, false, 1f);
				func_242(&uLocal_41);
				iLocal_36 = 3;
			}
		}
	}
	else if (iLocal_36 < 4)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_2", 1))
		{
			if (!func_79(&uLocal_41))
			{
				func_80(&uLocal_38, 0);
				func_80(&uLocal_41, 0);
			}
			else if (func_354(&uLocal_38) > 8f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				func_242(&uLocal_38);
			}
			else if (func_354(&uLocal_41) > 8.27f)
			{
				FIRE::ADD_OWNED_EXPLOSION(&(Local_851[1 /*41*/]), vVar0, 25, 1f, true, false, 1f);
				func_242(&uLocal_41);
				iLocal_36 = 4;
			}
		}
	}
	else if (iLocal_36 < 5)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_2", 1))
		{
			if (!func_79(&uLocal_41))
			{
				func_80(&uLocal_38, 0);
				func_80(&uLocal_41, 0);
			}
			else if (func_354(&uLocal_38) > 6.97f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				func_242(&uLocal_38);
			}
			else if (func_354(&uLocal_41) > 10.5f)
			{
				FIRE::ADD_OWNED_EXPLOSION(&(Local_851[1 /*41*/]), vVar3, 25, 1f, true, false, 1f);
				func_242(&uLocal_41);
				iLocal_36 = 5;
			}
		}
	}
	else if (iLocal_36 < 6)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "CONVO_3", 1))
		{
			if (!func_79(&uLocal_41))
			{
				func_80(&uLocal_38, 0);
				func_80(&uLocal_41, 0);
			}
			else if (func_354(&uLocal_38) > 8.6f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				func_242(&uLocal_38);
			}
			else if (func_354(&uLocal_41) > 8.83f)
			{
				FIRE::ADD_OWNED_EXPLOSION(&(Local_851[1 /*41*/]), vVar0, 25, 1f, true, false, 1f);
				func_242(&uLocal_41);
				iLocal_36 = 6;
			}
		}
	}
	else if (iLocal_36 < 7)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "MISS_CONVO_3", 1))
		{
			if (!func_79(&uLocal_41))
			{
				func_80(&uLocal_38, 0);
				func_80(&uLocal_41, 0);
			}
			else if (func_354(&uLocal_38) > 8.1f)
			{
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var9);
				func_242(&uLocal_38);
			}
			else if (func_354(&uLocal_41) > 9.5f)
			{
				FIRE::ADD_OWNED_EXPLOSION(&(Local_851[1 /*41*/]), vVar3, 25, 1f, true, false, 1f);
				func_242(&uLocal_41);
				iLocal_36 = 7;
			}
		}
	}
}

void func_341(var uParam0)
{
	switch (iLocal_54)
	{
		case 0:
			func_728(Local_748[0 /*17*/], "INTERACT_QUESTION", 0, -163964935, 0, 0, 0, 1, 0);
			func_728(Local_748[1 /*17*/], "INTERACT_THREATEN", 0, 648122183, 0, 0, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(&(Local_851[1 /*41*/]), 130, false);
			PED::SET_PED_CONFIG_FLAG(&(Local_851[1 /*41*/]), 297, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_851[1 /*41*/]), 178, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_851[1 /*41*/]), 317, true);
			PED::SET_PED_CONFIG_FLAG(&(Local_851[1 /*41*/]), 277, false);
			iLocal_54 = 1;
			break;
		case 1:
			if (iLocal_804 == -1)
			{
				iLocal_804 = func_729(Local_851[1 /*41*/], &iLocal_783, 23f, &Local_748, 0, 3, 0, "RBT23_ILO", 8193, 0, 0, 2, -1082130432);
				if (iLocal_804 == 0 || iLocal_804 == 1)
				{
					func_352(1, 0);
					if (iLocal_804 == 0)
					{
						func_355(uParam0, "RBT23_ILOASK_J", 0);
					}
					else if (iLocal_804 == 1)
					{
						func_355(uParam0, "RBT23_ILOTHR_J", 0);
					}
					func_730(Local_851[1 /*41*/]);
					func_731(&Local_748, 0, 0, 1, 0);
					if (!iLocal_454)
					{
						TASK::CLEAR_PED_TASKS(&(Local_1016[0 /*41*/]), 1, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(&(Local_1016[0 /*41*/]), *(vLocal_455[0 /*3*/]), 1.5f, 20000, 0.25f, false, 40000f);
						iLocal_454 = 1;
					}
					iLocal_54 = 2;
				}
				else
				{
					iLocal_804 = -1;
				}
			}
			break;
		case 2:
			if (!func_727() && !iLocal_805)
			{
				iLocal_805 = 1;
			}
			break;
		case 3:
			func_730(Local_851[1 /*41*/]);
			func_731(&Local_748, 0, 0, 1, 0);
			if (!iLocal_805)
			{
				iLocal_54 = 0;
			}
			break;
	}
}

void func_342()
{
	int iVar0;

	iVar0 = 0;
	if (!iLocal_24)
	{
		iLocal_24 = ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF", 1);
	}
	else if (!ANIMSCENE::_0x8D81E7824B7753F7(&(vLocal_16[0 /*3*/]), "TELLOFF", 1) && !func_353("RBT23_IG2_WARN"))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if ((Local_1016[iVar0 /*41*/])->f_8 < 2)
			{
				TASK::TASK_GO_TO_COORD_ANY_MEANS(&(Local_1016[iVar0 /*41*/]), *(vLocal_455[iVar0 /*3*/]), 1f, 0, false, 524419, -1f);
				(Local_1016[iVar0 /*41*/])->f_8 = 2;
			}
			iVar0++;
		}
		MAP::BLIP_ADD_MODIFIER((Local_1016[0 /*41*/])->f_2, -1034486097);
		MAP::BLIP_REMOVE_MODIFIER((Local_1016[0 /*41*/])->f_2, -1118229366);
		iLocal_24 = 0;
	}
}

int func_343(var uParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = -1;
	func_732();
	fVar1 = func_733(&(Local_851[1 /*41*/]), Global_35, 1);
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_554))
	{
		iLocal_554 = VOLUME::_CREATE_VOLUME_CYLINDER(-5961.937f, -3202.078f, -20.938f, 0f, 0f, -123.947f, 6.447f, 5.393f, 1.953f);
	}
	if (func_734(Global_35, iLocal_554, 0, 1))
	{
		cLocal_23 = "PB_BRKOUT_FRONT";
		func_352(0, 0);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			func_355(uParam0, "RBT23_BAN2_SEE", 0);
		}
		else if (iVar0 == 1)
		{
			func_355(uParam0, "RBT23_BAN5_SEE", 0);
		}
		else if (iVar0 == 2)
		{
			func_355(uParam0, "RBT23_BAN6_SEE", 0);
		}
		else if (iVar0 == 3)
		{
			func_355(uParam0, "RBT23_BAN3_SEE", 0);
		}
		bLocal_30 = true;
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(vLocal_500, 2f, true))
	{
		if (fVar1 > 330f || fVar1 < 90f)
		{
			cLocal_23 = "PB_BLOWUP_V1";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			cLocal_23 = "PB_ILO_BR_THREAT";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			cLocal_23 = "PB_ILO_FR_THREAT";
		}
		else
		{
			cLocal_23 = "PB_BLOWUP_V2";
		}
		func_352(0, 0);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			func_355(uParam0, "RBT23_BAN2_SHOT", 0);
		}
		else if (iVar0 == 1)
		{
			func_355(uParam0, "RBT23_BAN5_SHOT", 0);
		}
		else if (iVar0 == 2)
		{
			func_355(uParam0, "RBT23_BAN6_SHOT", 0);
		}
		else if (iVar0 == 3)
		{
			func_355(uParam0, "RBT23_BAN3_SHOT", 0);
		}
		bLocal_30 = true;
		return 1;
	}
	else if (func_735())
	{
		if (fVar1 > 330f || fVar1 < 90f)
		{
			cLocal_23 = "PB_BRKOUT_LEFT";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			cLocal_23 = "PB_ILO_BR_THREAT";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			cLocal_23 = "PB_ILO_FR_THREAT";
		}
		else
		{
			cLocal_23 = "PB_BRKOUT_FRONT";
		}
		func_352(0, 0);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iVar0 == 0)
		{
			func_355(uParam0, "RBT23_BAN2_SHOT", 0);
		}
		else if (iVar0 == 1)
		{
			func_355(uParam0, "RBT23_BAN5_SHOT", 0);
		}
		else if (iVar0 == 2)
		{
			func_355(uParam0, "RBT23_BAN6_SHOT", 0);
		}
		else if (iVar0 == 3)
		{
			func_355(uParam0, "RBT23_BAN3_SHOT", 0);
		}
		bLocal_30 = true;
		return 1;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_555))
		{
			iLocal_555 = VOLUME::_0xB3FB80A32BAE3065(-5969.858f, -3211.56f, -22.371f, 0.521f, -13.213f, 31.798f, 27.542f, 20.266f, 18.188f);
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_556))
		{
			iLocal_556 = VOLUME::_CREATE_VOLUME_CYLINDER(-5972.426f, -3211.742f, -21.558f, 0f, 0f, -34.344f, 18.472f, 32.037f, 3.909f);
		}
		iLocal_1279++;
		if (iLocal_1279 > 4)
		{
			iLocal_1279 = 0;
		}
		if (iLocal_1279 < 4)
		{
			if (((func_736(Global_35, &(Local_851[iLocal_1279 /*41*/]), 9f, 1) && func_737(&(Local_851[iLocal_1279 /*41*/]), &uLocal_705)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(Local_851[iLocal_1279 /*41*/]), Global_35, 17)) || (func_738(&(Local_851[iLocal_1279 /*41*/]), &uLocal_705) && func_734(Global_35, iLocal_555, 0, 1)))
			{
				if (fVar1 > 330f || fVar1 < 90f)
				{
					cLocal_23 = "PB_ILO_FL_ASK";
				}
				else if (fVar1 > 90f && fVar1 < 201f)
				{
					cLocal_23 = "PB_ILO_BR_ASK";
				}
				else if (fVar1 > 200f && fVar1 < 248f)
				{
					cLocal_23 = "PB_ILO_FR_ASK";
				}
				else
				{
					cLocal_23 = "PB_ILO_FRONT_ASK";
				}
				if (!func_79(&uLocal_548))
				{
					func_80(&uLocal_548, 0);
				}
				if (iLocal_37 < 0)
				{
					iLocal_37 = iLocal_1279;
				}
				func_352(0, 0);
				uLocal_32 = func_355(uParam0, "RBT23_1st_Warn", 0);
				return 1;
			}
		}
		else if ((func_734(Global_35, iLocal_556, 0, 1) && func_736(Global_35, &(Local_1016[0 /*41*/]), 40f, 1)) && func_738(&(Local_1016[0 /*41*/]), &uLocal_705))
		{
			if (fVar1 > 330f || fVar1 < 90f)
			{
				cLocal_23 = "PB_ILO_FL_ASK";
			}
			else if (fVar1 > 90f && fVar1 < 201f)
			{
				cLocal_23 = "PB_ILO_BR_ASK";
			}
			else if (fVar1 > 200f && fVar1 < 248f)
			{
				cLocal_23 = "PB_ILO_FR_ASK";
			}
			else
			{
				cLocal_23 = "PB_ILO_FRONT_ASK";
			}
			if (!func_79(&uLocal_548))
			{
				func_80(&uLocal_548, 0);
			}
			if (iLocal_37 < 0)
			{
				iLocal_37 = iLocal_1279;
			}
			func_352(0, 0);
			uLocal_32 = func_355(uParam0, "RBT23_IG2_WARN", 0);
			return 1;
		}
	}
	if (iLocal_804 == 0)
	{
		if (fVar1 > 330f || fVar1 < 91f)
		{
			cLocal_23 = "PB_ILO_FL_ASK";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			cLocal_23 = "PB_ILO_BR_ASK";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			cLocal_23 = "PB_ILO_FR_ASK";
		}
		else
		{
			cLocal_23 = "PB_ILO_FRONT_ASK";
		}
		return 1;
	}
	else if (iLocal_804 == 1)
	{
		if (fVar1 > 330f || fVar1 < 91f)
		{
			cLocal_23 = "PB_ILO_FL_THREAT";
		}
		else if (fVar1 > 90f && fVar1 < 201f)
		{
			cLocal_23 = "PB_ILO_BR_THREAT";
		}
		else if (fVar1 > 200f && fVar1 < 248f)
		{
			cLocal_23 = "PB_ILO_FR_THREAT";
		}
		else
		{
			cLocal_23 = "PB_ILO_FRONT_THREAT";
		}
		return 1;
	}
	return 0;
}

void func_344(int iParam0, char* sParam1)
{
	if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		}
	}
}

void func_345()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_498))
	{
		func_444(&iLocal_498, 0, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_498) && !ENTITY::DOES_ENTITY_EXIST(iLocal_503))
	{
		iLocal_503 = OBJECT::CREATE_OBJECT(iLocal_504, vLocal_500, true, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_503, -102.6f);
	}
}

void func_346()
{
	if (!iLocal_831)
	{
		TASK::CLEAR_PED_TASKS(&(Local_1016[0 /*41*/]), 1, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(&(Local_1016[0 /*41*/]), *(vLocal_455[0 /*3*/]), 1.5f, 20000, 0.25f, false, 40000f);
		MAP::BLIP_ADD_MODIFIER((Local_1016[0 /*41*/])->f_2, -1034486097);
		MAP::BLIP_REMOVE_MODIFIER((Local_1016[0 /*41*/])->f_2, -1118229366);
		iLocal_831 = 1;
	}
}

void func_347()
{
	if (iLocal_31)
	{
		return;
	}
	if (((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_BR_ASK") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_FL_ASK")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_FR_ASK")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_FRONT_ASK"))
	{
		if (func_739(&(vLocal_16[0 /*3*/]), 14.5f, -1082130432))
		{
			if ((Local_851[3 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[3 /*41*/])->f_10, &(Local_851[3 /*41*/]));
				(Local_851[3 /*41*/])->f_8 = 5;
			}
			iLocal_31 = 1;
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 12.2f, -1082130432))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(&(vLocal_16[0 /*3*/]), 1.5f);
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 11.9f, -1082130432))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(&(vLocal_16[0 /*3*/]), 3.5f);
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 11.8f, -1082130432))
		{
			if ((Local_851[1 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[1 /*41*/])->f_10, &(Local_851[1 /*41*/]));
				(Local_851[1 /*41*/])->f_8 = 5;
			}
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 9f, -1082130432))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(&(vLocal_16[0 /*3*/]), 1.5f);
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 2.9f, -1082130432))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(&(vLocal_16[0 /*3*/]), 3.5f);
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 2.8f, -1082130432))
		{
			if ((Local_851[2 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[2 /*41*/])->f_10, &(Local_851[2 /*41*/]));
				(Local_851[2 /*41*/])->f_8 = 5;
			}
			if ((Local_851[0 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[0 /*41*/])->f_10, &(Local_851[0 /*41*/]));
				(Local_851[0 /*41*/])->f_8 = 5;
			}
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 0.9f, -1082130432))
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(&(vLocal_16[0 /*3*/]), 1.5f);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_RATE(&(vLocal_16[0 /*3*/]), 3.35f);
		}
	}
	if (((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_BR_THREAT") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_FL_THREAT")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_FR_THREAT")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(vLocal_16[0 /*3*/]), "PB_ILO_FRONT_THREAT"))
	{
		if (func_739(&(vLocal_16[0 /*3*/]), 2.9f, -1082130432))
		{
			if ((Local_851[3 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[3 /*41*/])->f_10, &(Local_851[3 /*41*/]));
				(Local_851[3 /*41*/])->f_8 = 5;
			}
			iLocal_31 = 1;
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 2.2f, -1082130432))
		{
			if ((Local_851[0 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[0 /*41*/])->f_10, &(Local_851[0 /*41*/]));
				(Local_851[0 /*41*/])->f_8 = 5;
			}
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 2.3f, -1082130432))
		{
			if ((Local_851[2 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[2 /*41*/])->f_10, &(Local_851[2 /*41*/]));
				(Local_851[2 /*41*/])->f_8 = 5;
			}
		}
		else if (func_739(&(vLocal_16[0 /*3*/]), 1.9f, -1082130432))
		{
			if ((Local_851[1 /*41*/])->f_8 < 5)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(vLocal_16[0 /*3*/]), (Local_851[1 /*41*/])->f_10, &(Local_851[1 /*41*/]));
				(Local_851[1 /*41*/])->f_8 = 5;
			}
		}
	}
}

void func_348()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_505))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(&(vLocal_16[0 /*3*/]), "BOOTLE_A"))
		{
			func_444(&iLocal_505, 0, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_510))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(&(vLocal_16[0 /*3*/]), "BOOTLE_B"))
		{
			func_444(&iLocal_510, 0, 1, 1);
		}
	}
}

void func_349()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((Local_851[iVar0 /*41*/])->f_8 < 10)
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(&(Local_851[iVar0 /*41*/]), &((Local_851[iVar0 /*41*/])->f_11));
		}
		iVar0++;
	}
}

int func_350()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_719(&(Local_851[iVar1 /*41*/]), -1118229366, 1);
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(Local_851[0 /*41*/])) && (Local_851[0 /*41*/])->f_8 < 6)
	{
		if (A