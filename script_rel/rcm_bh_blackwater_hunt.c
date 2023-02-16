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
	char[] cLocal_15[8] = 0;
	char[] cLocal_16[8] = 0;
	char[] cLocal_17[8] = 0;
	char[] cLocal_18[8] = 0;
	char[] cLocal_19[8] = 0;
	char[] cLocal_20[8] = 0;
	char[] cLocal_21[8] = 0;
	char[] cLocal_22[8] = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	vector3 vLocal_28 = { 0f, 0f, 0f };
	vector3 vLocal_31 = { 0f, 0f, 0f };
	vector3 vLocal_34 = { 0f, 0f, 0f };
	int iLocal_37 = 0;
	struct<347> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
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
	var uLocal_419 = -1;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	struct<17> Local_422 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	int iLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	struct<19> Local_460[3];
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	var uLocal_520[2] = { 0, 0 };
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_553[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_560[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_567[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = -1;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 1097859072;
	var uLocal_611 = 1000;
	var uLocal_612 = 1067450368;
	var uLocal_613 = 5000;
	var uLocal_614 = 42;
	var uLocal_615 = 1103626240;
	var uLocal_616 = 1077936128;
	var uLocal_617 = 1106247680;
	var uLocal_618 = 1103101952;
	var uLocal_619 = 1097859072;
	var uLocal_620 = 1103626240;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 1065353216;
	var uLocal_628 = 1119092736;
	var uLocal_629 = 1092616192;
	var uLocal_630 = 1085276160;
	struct<22> Local_631 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_653 = 3;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	int iLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	var uLocal_678 = -1;
	var uLocal_679 = 0;
	var uLocal_680 = -1;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = -1;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 1073741824;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 1;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	var uLocal_699 = -1;
	var uLocal_700 = 0;
	var uLocal_701 = -1;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = -1;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 1073741824;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 1;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	int iLocal_719 = 0;
	var uLocal_720 = -1;
	var uLocal_721 = 0;
	var uLocal_722 = -1;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = -1;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 1073741824;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 1;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	struct<17> Local_740[1];
	struct<17> Local_758[1];
	struct<17> Local_776[1];
	int iLocal_794[2] = { 0, 0 };
	int iLocal_797[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_826[3] = { NULL, NULL, NULL };
	int iLocal_830[3] = { 0, 0, 0 };
	var uLocal_834 = 0;
	float fLocal_835 = 0f;
	float fLocal_836 = 0f;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_15 = "bhblackwaterhunt_run01";
	cLocal_16 = "bhblackwaterhunt_run02";
	cLocal_17 = "bhblackwaterhunt_run03";
	cLocal_18 = "bhblackwaterhunt_plAssist1";
	cLocal_19 = "bhblackwaterhunt_plAssist3";
	cLocal_20 = "bhblackwaterhunt_plAssist4";
	cLocal_21 = "bhblackwaterhunt_plAssist6";
	cLocal_22 = "bhblackwaterhunt_plAssist7";
	iLocal_23 = joaat("u_m_m_bht_blackwaterhunt");
	iLocal_24 = joaat("a_m_m_blwlaborer_01");
	iLocal_25 = 2082832984;
	iLocal_26 = joaat("p_cratetools01x");
	iLocal_27 = joaat("a_c_cat_01");
	vLocal_28 = { -801.1692f, -1254.288f, 42.4531f };
	vLocal_31 = { -773.2948f, -1310.919f, 42.6567f };
	vLocal_34 = { -779.6465f, -1319.502f, 48.0019f };
	iLocal_676 = -1;
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
	func_185(uParam0, 8);
	func_186(uParam0, 8);
	sLocal_826[0] = "BCRI_FAIL";
	sLocal_826[1] = "RBT21_CHASE";
	sLocal_826[2] = "RBT21_CAUGHT";
	iLocal_567[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-769.0515f, -1229.272f, 42.6114f, 0f, 0f, 0f, 60f, 60f, 20f, "RBTG21_VOLUME_MISSION_TRIGGER_VOLUME_1");
	iLocal_567[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-799.8104f, -1254.234f, 42.4566f, 0f, 0f, 0f, 40f, 40f, 20f, "RBTG21_VOLUME_MISSION_TRIGGER_VOLUME_2");
	iLocal_567[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-832.7028f, -1272.323f, 42.5826f, 0f, 0f, 0f, 60f, 60f, 20f, "RBTG21_VOLUME_MISSION_TRIGGER_VOLUME_3");
	iLocal_567[3] = VOLUME::_0x10157BC3247FF3BA(-832.7028f, -1272.323f, 42.5826f, 0f, 0f, 0f, 25f, 25f, 25f, "RBTG21_VOLUME_WORKSITE_1_SEARCH_VOLUME");
	iLocal_567[4] = VOLUME::_0x10157BC3247FF3BA(-769.0515f, -1229.272f, 42.6114f, 0f, 0f, 0f, 25f, 25f, 25f, "RBTG21_VOLUME_WORKSITE_2_SEARCH_VOLUME");
	iLocal_567[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-766.509f, -1235.461f, 42.611f, 0f, 0f, 0f, 16.5f, 17f, 10f, "RBTG21_VOLUME_WORKSITE_2_SITE_VOLUME");
	iLocal_567[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-840.99f, -1275.92f, 44.021f, 0f, 0f, 0f, 3f, 2.5f, 4f, "RBTG21_VOLUME_QUESTION_ILO_1_VOLUME");
	iLocal_567[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-826.1313f, -1278.93f, 43.1645f, 0f, 0f, 0f, 2.5f, 2f, 4f, "RBTG21_VOLUME_QUESTION_ILO_2_VOLUME");
	iLocal_567[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-834.217f, -1277.457f, 42.856f, 0f, 0f, 0f, 7.9f, 7f, 5f, "RBTG21_VOLUME_INSIDE_SITE_VOLUME");
	iLocal_567[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-837.461f, -1277.375f, 42.421f, 0f, 0f, 0f, 5f, 7f, 5f, "RBTG21_VOLUME_ROUTE_1_VOLUME");
	iLocal_567[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-829.845f, -1278.54f, 42.617f, 0f, 0f, 0f, 5f, 5f, 5f, "RBTG21_VOLUME_ROUTE_2_VOLUME");
	iLocal_567[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.611f, -1281.21f, 43.792f, 0f, 0f, 0f, 16f, 2f, 3f, "RBTG21_VOLUME_ASSIST_ROUTE_3_VOLUME");
	iLocal_567[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-785.464f, -1308.959f, 43.891f, 0f, 0f, 0f, 12.5f, 2f, 3f, "RBTG21_VOLUME_ASSIST_ROUTE_4_VOLUME");
	iLocal_567[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-773.486f, -1329.567f, 44.021f, 0f, 0f, 0f, 4.2f, 2.5f, 5f, "RBTG21_VOLUME_PARKED_WAGON_VOLUME");
	iLocal_567[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-769.8123f, -1332.992f, 44.021f, 0f, 0f, 0f, 4f, 4f, 5f, "RBTG21_VOLUME_PARKED_CART_VOLUME");
	iLocal_567[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-834.161f, -1265.264f, 44.369f, 0f, 0f, 0f, 22f, 16f, 5f, "RBTG21_VOLUME_ROUTE_2_SHORTCUT_VOLUME");
	iLocal_567[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-777.65f, -1318.25f, 46.60209f, 0f, 0f, 0f, 26f, 20.5f, 8.5f, "RBTG21_VOLUME_CLEAR_WAGON_AREA_VOLUME");
	iLocal_567[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-827.2051f, -1275.43f, 44.416f, 0f, 0f, 0f, 36f, 25f, 5f, "RBTG21_VOLUME_WORKSITE_1_CLEAR_PEDS_VOLUME");
	iLocal_567[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-782.3961f, -1318.822f, 48.21954f, 0f, 0f, 0f, 17f, 3f, 5f, "RBTG21_VOLUME_BALCONY_VOLUME");
	iLocal_567[19] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RBTG21_VOLUME_STAIRCASE_VOLUME");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_567[19]), -774.7282f, -1320.474f, 48.22266f, 0f, 0f, 0f, 1.6f, 6f, 5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(&(iLocal_567[19]), -774.728f, -1325.769f, 45.79326f, 45f, 0f, 0f, 1.6f, 10f, 3.5f);
	iLocal_567[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-806.8643f, -1283.488f, 44.454f, 0f, 0f, 0f, 4f, 13f, 5f, "RBTG21_VOLUME_CLEAR_ROUTE_1_A_VOLUME");
	iLocal_567[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-792.8948f, -1307.16f, 44.694f, 0f, 0f, 0f, 4f, 11f, 5f, "RBTG21_VOLUME_CLEAR_ROUTE_1_B_VOLUME");
	iLocal_567[22] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-785.807f, -1318.924f, 44.076f, 0f, 0f, 0f, 9f, 3f, 3f, "RBTG21_VOLUME_ALLEY_VOLUME");
	iLocal_567[23] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-772.694f, -1319.932f, 43.516f, 0f, 0f, 0f, 5f, 2f, 2f, "RBTG21_VOLUME_BLOCK_DRUNKS_VOLUME");
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY_NO_ANIMALS", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SACK_OUT_CART_TARP", false);
	Local_631.f_3 = Global_35;
	Local_631.f_4 = 21030;
	Local_631.f_7 = -1;
	Local_631.f_8 = 4;
	Local_631.f_13 = 1;
	Local_631.f_17 = 3;
	Local_631.f_18 = 2;
	Local_631.f_19 = 3;
	Local_631.f_21 = 3;
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
	func_187(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_188(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_189(&(uParam0->f_41));
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
	HUD::TEXT_BLOCK_REQUEST("BHCR");
	func_190(uParam0, 0);
	func_41(uParam0, iLocal_24, 7);
	func_41(uParam0, iLocal_23, 7);
	func_41(uParam0, iLocal_25, 7);
	func_41(uParam0, iLocal_26, 7);
	func_41(uParam0, iLocal_27, 7);
	func_191(uParam0, cLocal_15, 2, -1, 7);
	func_191(uParam0, cLocal_16, 2, -1, 7);
	func_191(uParam0, cLocal_17, 2, -1, 7);
	func_191(uParam0, cLocal_18, 2, -1, 7);
	func_191(uParam0, cLocal_19, 2, -1, 7);
	func_191(uParam0, cLocal_20, 2, -1, 7);
	func_191(uParam0, cLocal_21, 2, -1, 7);
	func_191(uParam0, cLocal_22, 2, -1, 7);
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_826[1]));
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_826[2]));
	AUDIO::PREPARE_MUSIC_EVENT(&(sLocal_826[0]));
	AUDIO::_0xD9130842D7226045("RBT21_sounds", 0);
}

void func_43(var uParam0, int iParam1)
{
	if (func_192(uParam0) == iParam1)
	{
		return;
	}
	func_193(uParam0, uParam0->f_168, iParam1);
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
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_194(uParam0->f_174))
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

	switch (func_195(&iVar0))
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
	func_196(bParam0);
	func_197(bParam0);
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
	if (func_198(uParam0, uParam0->f_168))
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
	if (func_199() != -1)
	{
		return 0;
	}
	if (!func_200(iParam0))
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
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { -812.8008f, -1252.858f, 42.617f };
			Var1.f_3 = 137.2571f;
			break;
		case 1:
			Var1 = { -779.1705f, -1318.74f, 47.0959f };
			Var1.f_3 = 82.085f;
			break;
		case 2:
			Var1 = { -750.2899f, -1268.952f, 42.4927f };
			Var1.f_3 = 87.668f;
			break;
		case 3:
			Var1 = { -755.2801f, -1269.268f, 43.1401f };
			Var1.f_3 = 275.965f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_201(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (iLocal_37 == 0)
	{
		if (fLocal_835 > 150f)
		{
			StringCopy(&(uParam0->f_2578), "BNTY_RBT21_F_LEFT_W", 24);
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_422) && ENTITY::IS_ENTITY_DEAD(Local_422))
		{
			StringCopy(&(uParam0->f_2578), "BNTY_RBT21_F_DEAD", 24);
			return 1;
		}
	}
	else if (func_202(&Local_38, 1120403456, 1125515264))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_826[0]));
		switch (Local_38.f_64)
		{
			case 1:
				StringCopy(&(uParam0->f_2578), "BNTY_RBT21_F_LEFT_A", 24);
				break;
			case 0:
				StringCopy(&(uParam0->f_2578), "BNTY_RBT21_F_DEAD", 24);
				break;
			case 4:
				StringCopy(&(uParam0->f_2578), "BNTY_RBT21_F_LOST", 24);
				break;
			case 3:
				StringCopy(&(uParam0->f_2578), "BNTY_RBT21_F_ESCP", 24);
				break;
			default:
				StringCopy(&(uParam0->f_2578), func_203(Local_38.f_64), 24);
				break;
		}
		return 1;
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
	int iVar0;

	func_204(uParam0, &Local_422);
	func_205(uParam0, &iLocal_441);
	iVar0 = 0;
	while (iVar0 < Local_460)
	{
		func_206(uParam0, Local_460[iVar0 /*19*/], iVar0);
		iVar0++;
	}
	func_207(uParam0);
	fLocal_835 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_28, true);
	fLocal_836 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_208(Local_38.f_300), true);
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;

	if (!func_200(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_209(iParam0, &vVar0))
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
		if (func_57(iVar0) && func_210(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_211(uParam0->f_174))
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
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_194(uParam0->f_174))
	{
		func_212(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_213(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_214(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_215(iVar1))
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
		if (func_214(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
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
			iVar2 = func_216();
			if (!func_217(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
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
		if (func_218(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_219(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_220(uParam0) || func_221(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_222(uParam0) && func_223(uParam0->f_743))
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

	func_224();
	func_225(uParam0);
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
				func_226(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_227(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_ENABLE_HUD_CONTEXT_THIS_FRAME(Global_35, 262143);
			func_228(Global_35);
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
		func_229(uParam0->f_174);
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
		func_230(uParam0);
	}
	func_161(uParam0);
	func_231(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_232(&(uParam0->f_2585));
	func_233(uParam0);
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
			fVar4 = func_234(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_235(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_236(uParam0->f_174, fVar3);
		func_237(uParam0->f_174, vVar0, fVar3);
		func_238(uParam0->f_174);
		func_239(uParam0->f_174);
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
			func_240(uParam0);
		}
		else
		{
			func_241(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_242() };
				Var8 = { func_243(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_244(&(uParam0->f_206));
					func_245(&(uParam0->f_206), &cVar0);
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
	if (func_246(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_247(uParam0);
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
		if (func_248(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_249(uParam0);
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
			if (func_250(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_251(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_252(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_253(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_254(uParam0->f_2605[iVar0 /*16*/]);
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
			if (func_250(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_255(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_256(uParam0->f_2605.f_241[iVar0 /*16*/]);
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
			if (func_250(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_255(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_257(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_250(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_258(&(uParam0->f_2605));
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
	if (func_259(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_260(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_261(uParam0);
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
	if (func_262(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_263() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
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
	if (func_264(uParam0) && func_265(uParam0))
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
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_266(uParam0->f_174), func_267(uParam0->f_174)))
		{
			func_268(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_266(uParam0->f_174), func_267(uParam0->f_174)))
			{
				func_269(uParam0->f_174);
				func_270(uParam0->f_174);
			}
		}
		else
		{
			func_271(Global_1347702[uParam0->f_174 /*49*/]);
			func_269(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_266(uParam0->f_174), func_267(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_266(uParam0->f_174), func_267(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_272(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_273(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_274(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_275(Global_1935630, 8);
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
	func_276(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		LAW::_0x292AD61A33A7A485();
		func_277(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_227(1);
	func_231(1);
	func_278();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_279(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_280(1);
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
	func_281(uParam0);
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
	if (func_282(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_283(uParam0, func_61(0), func_61(1), 0, 1, 0);
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
		if (uParam0->f_171 != 0 || func_284(uParam0))
		{
			if (func_285(uParam0))
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
		return func_286();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	func_287(&iLocal_675, 1);
	switch (iVar0)
	{
		case 0:
			if (!func_288())
			{
				return 2;
			}
			if (func_289(&uLocal_660))
			{
				func_290(uParam0->f_174, 1);
				func_283(uParam0, func_61(0), func_61(1), 0, 1, 0);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				iLocal_37 = 0;
				func_291(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!func_288())
			{
				return 2;
			}
			if (func_289(&uLocal_660))
			{
				TASK::_0xFF745B0346E19E2C(-2146271366);
				if (TASK::_0xB8F52A3F84A7CC59(-2146271366))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_422))
					{
						ENTITY::_0x203BEFFDBE12E96A(Local_422, -780.4235f, -1318.749f, 47.0959f, 82.085f, 1, 0, 1);
						ENTITY::_0x9587913B9E772D29(Local_422, 0);
						if (!func_292(Local_422, -2108652971))
						{
							TASK::_0xF0B4F759F35CC7F5(Local_422, ENTITY::_0x34F008A7E48C496B(Local_422, 1), 0, 0, 0);
						}
					}
				}
				else
				{
					return 2;
				}
				func_283(uParam0, func_61(1), func_61(1), 1, 1, 0);
				func_291(1, 1);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_287(&iLocal_675, 32);
				func_287(&iLocal_675, 16777216);
				iLocal_37 = 1;
				return 7;
			}
			break;
		case 2:
			if (!func_288())
			{
				return 2;
			}
			if (func_289(&uLocal_660))
			{
				TASK::_0xFF745B0346E19E2C(-2146271366);
				if (TASK::_0xB8F52A3F84A7CC59(-2146271366))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_422))
					{
						if (!func_292(Local_422, -2108652971))
						{
							TASK::_0xF0B4F759F35CC7F5(Local_422, ENTITY::_0x34F008A7E48C496B(Local_422, 1), Global_35, 0, 0);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_422, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
					}
				}
				else
				{
					return 2;
				}
				func_283(uParam0, func_61(2), func_61(3), 2, 3, 0);
				func_291(1, 1);
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				func_287(&iLocal_675, 32);
				func_287(&iLocal_675, 16777216);
				func_287(&iLocal_675, 33554432);
				iLocal_37 = 1;
				return 7;
			}
			break;
		case 3:
			func_293(iLocal_23, Local_38.f_300, 0);
			func_294(iLocal_23, Local_38.f_300, Local_38.f_299);
			func_295(Global_40.f_9074.f_3, 1, 1065353216, 1, 0, 0, 1, 752097756);
			func_291(1, 1);
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
			return 8;
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
		iVar0 = func_296();
		iVar1 = func_297(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_298(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_298(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
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
		if (!func_299(uParam0))
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
		func_300();
		func_301(uParam0);
		if (!func_302(uParam0))
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
		func_303(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_304(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_283(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_305(Global_35))
		{
			if (func_306())
			{
				func_307(42, 1);
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
	return func_308(Var0, &(uParam0->f_206), uParam0);
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
		func_309(&(uParam0->f_206));
	}
	func_310(&(uParam0->f_206));
	func_311(uParam0);
}

int func_103(var uParam0)
{
	return 8;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_299(uParam0))
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
				func_283(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_312(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_313(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	CLOCK::SET_CLOCK_TIME(func_314(iLocal_656), func_315(iLocal_656), func_316(iLocal_656));
	func_317();
	func_318(uParam0);
	if (func_319(iLocal_675, 524288))
	{
		func_320();
	}
	func_321();
	if (!func_319(iLocal_675, 4096))
	{
		if (func_319(iLocal_675, 32))
		{
			func_322();
			func_287(&iLocal_675, 4096);
		}
	}
	switch (iLocal_37)
	{
		case 0:
			if (!func_319(iLocal_675, 2))
			{
				if (((fLocal_835 < (100f * 0.75f) || func_323(Global_35, &(iLocal_567[0]), 1, 0)) || func_323(Global_35, &(iLocal_567[1]), 1, 0)) || func_323(Global_35, &(iLocal_567[2]), 1, 0))
				{
					if (!MAP::DOES_BLIP_EXIST(&(uLocal_520[0])))
					{
						uLocal_520[0] = func_324(-308585968, &(iLocal_567[3]), 0);
					}
					if (!MAP::DOES_BLIP_EXIST(&(uLocal_520[1])))
					{
						if (!func_319(iLocal_675, 1024))
						{
							uLocal_520[1] = func_324(-308585968, &(iLocal_567[4]), 0);
						}
					}
					if (MAP::DOES_BLIP_EXIST(&(uLocal_520[0])) && MAP::DOES_BLIP_EXIST(&(uLocal_520[1])))
					{
						func_126(uParam0, "RBT21_O_INVEST", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
					else
					{
						func_126(uParam0, "RBT21_O_INVEST2", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
					}
					func_325(&iLocal_675, 4);
					func_287(&iLocal_675, 2);
				}
			}
			if (!func_319(iLocal_675, 4))
			{
				if (func_319(iLocal_675, 2))
				{
					if (fLocal_835 > 100f)
					{
						func_126(uParam0, "RBT21_O_RETURN1", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
						func_325(&iLocal_675, 2);
						func_287(&iLocal_675, 4);
					}
				}
			}
			if (!func_319(iLocal_675, 1024))
			{
				if (func_323(Global_35, &(iLocal_567[5]), 1, 0))
				{
					if (!func_79(&uLocal_663))
					{
						func_261(&uLocal_663);
					}
				}
				if (func_79(&uLocal_663))
				{
					if (func_326(&uLocal_663) > 5f || !func_323(Global_35, &(iLocal_567[5]), 1, 0))
					{
						func_232(&uLocal_663);
						func_327(uLocal_520[1]);
						func_126(uParam0, "RBT21_O_INVEST2", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
						func_287(&iLocal_675, 1024);
					}
				}
			}
			if (((func_328(Local_422, 1.5f, 2.5f, 10f) || func_319(Local_422.f_5, 2)) || func_319(iLocal_675, 32)) || func_319(iLocal_675, 16))
			{
				iLocal_37 = 1;
			}
			break;
		case 1:
			if (!func_319(iLocal_675, 8))
			{
				func_327(uLocal_520[0]);
				func_327(uLocal_520[1]);
				func_327(&(Local_422.f_1));
				func_329(&Local_38);
				func_290(uParam0->f_174, 1);
				func_330(&Local_38, 4, 1);
				func_331(7, 1, 1);
				func_287(&iLocal_675, 8);
			}
			if (!func_319(iLocal_675, 16384))
			{
				if (func_332())
				{
					func_333();
					func_287(&iLocal_675, 16384);
				}
			}
			if (!func_319(iLocal_675, 8192))
			{
				if (func_319(iLocal_675, 16384))
				{
					if (func_334(uParam0))
					{
						func_287(&iLocal_675, 8192);
					}
				}
			}
			if (!func_319(iLocal_675, 32768))
			{
				if (func_319(iLocal_675, 8192))
				{
					if (func_288())
					{
						func_287(&iLocal_675, 32768);
					}
				}
			}
			if (func_319(iLocal_675, 32))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])))
				{
					if (!&iLocal_830[1])
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_826[1])))
						{
							iLocal_830[1] = 1;
						}
					}
				}
			}
			if (!func_319(iLocal_675, 4194304))
			{
				if (!func_319(iLocal_675, 64))
				{
					if (func_319(iLocal_675, 32))
					{
						func_335(1);
						func_287(&iLocal_675, 4194304);
					}
				}
			}
			else if (func_319(iLocal_675, 64))
			{
				func_335(0);
				func_325(&iLocal_675, 4194304);
			}
			func_336(&Local_38);
			if (func_337(&Local_38, 1))
			{
				iLocal_37 = 2;
			}
			break;
		case 2:
			if (func_338(&Local_38))
			{
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
				return 8;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_339(iParam0) == 0;
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
	return func_341(func_340(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_342(func_340(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_343(func_340(iParam0));
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
	if (!func_200(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_344(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_345(iParam0);
		if ((!func_218(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::UI_FEED_CLEAR_HELP_TEXT_FEED(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_327(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_346(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_347(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_348(iParam0))
	{
		return;
	}
	bVar0 = func_349(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_350(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_352(iParam0, func_351());
			func_353(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_354(iParam0, 67108864);
		func_352(iParam0, -15);
	}
	func_355(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_356(0))
	{
		if (func_357(0))
		{
			func_358(0);
		}
	}
	if (func_356(1))
	{
		if (func_357(1))
		{
			func_358(1);
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
			if (func_200(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_226(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_359(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_359(1);
		}
		else if (iVar3 == 61)
		{
			func_359(0);
		}
		else if (iVar3 == 83)
		{
			func_359(0);
		}
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_200(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_360(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_361(iVar0, 1);
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

	func_362(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_363(sParam1))
	{
		func_364(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
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

	if (!func_200(iParam0))
	{
		return;
	}
	if (func_365())
	{
		func_268(iParam0, 1);
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
		if (!func_365())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_366(iParam0, 0, iParam3);
	if (func_200(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_367(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_368(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_369(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_370();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_371(iParam0);
			}
			bParam5 = false;
			uVar0 = func_372(((*Global_1347702)[iParam0 /*49*/])->f_15);
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
		func_373(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_374(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_375(iParam0);
}

int func_129(int iParam0)
{
	if (!func_200(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_376(iParam0);
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
	vVar2 = { func_377(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_378(vVar2, uVar1, uVar0, 0);
	func_379(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_199() != -1)
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
	func_380();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_199() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_381(1, bParam1);
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
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_351();
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
	func_382(Var10, 0);
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
	if (!func_383(Global_35, 0))
	{
		func_366(uParam0->f_174, 0, 0);
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
		func_384(0);
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
	if (func_385(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_386(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_386(&(Global_1347343->f_11), 16384);
	}
	if (func_387() >= 2)
	{
		if (!func_385(Global_1347343->f_11, 16384))
		{
			func_386(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_275(Global_1935630, 2048);
	func_388(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_389(1, &(uParam0->f_2605.f_482));
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
	if (func_390(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_391(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_392(iParam0);
	func_197(1);
	func_393(0);
	func_394(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_395(1);
			func_396(15, 0, 1);
			break;
		case 4:
			func_396(10, 0, 1);
			break;
		case 8:
			func_396(10, 0, 1);
			break;
		case 9:
			func_396(10, 0, 1);
			break;
		case 2:
			func_396(10, 0, 1);
			break;
		case 6:
			func_396(10, 0, 1);
			break;
		case 5:
			func_396(10, 0, 1);
			break;
	}
	func_397(1);
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
		fParam2 = BUILTIN::VDIST2(Global_36, func_398(iParam0));
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
		if (func_399())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_400(sVar1, 10000, 0, 0, 0, 1);
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
		if (func_401())
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
		if (func_200(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
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
	return 1000f;
}

int func_150(var uParam0)
{
	switch (func_71(uParam0))
	{
		case 0:
			if (func_402(&Local_38))
			{
				func_403(Local_38.f_300, ENTITY::GET_ENTITY_MODEL(Local_38.f_67));
				func_23(&Local_422);
				return 1;
			}
			else
			{
				func_404(uParam0);
			}
			return 0;
		case 1:
			return 1;
		default:
			if (!func_405(Local_422, -1082130432, 1116471296))
			{
				return 0;
			}
			break;
	}
	return 1;
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
	int iVar0;

	HUD::_TEXT_BLOCK_DELETE("BHCR");
	AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_826[0]));
	func_406(&Local_38, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_422))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_422, -1976316465);
		ENTITY::_0x0DB41D59E0F1502B(Local_422);
	}
	func_169(&Local_422, 0, 0, 1);
	func_169(&iLocal_441, 0, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_23);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_25);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	func_407();
	iVar0 = 0;
	while (iVar0 < iLocal_567)
	{
		if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[iVar0])))
		{
			VOLUME::DELETE_VOLUME(&(iLocal_567[iVar0]));
		}
		iVar0++;
	}
	func_327(uLocal_520[0]);
	func_327(uLocal_520[1]);
	iVar0 = 0;
	while (iVar0 < Local_460)
	{
		func_169(Local_460[iVar0 /*19*/], 0, 0, 1);
		iVar0++;
	}
	func_408(&iLocal_518, 0, 1);
	func_408(&iLocal_519, 0, 1);
	func_409();
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_15))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_15);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_16))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_16);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_17))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_17);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_18))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_18);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_19))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_19);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_20))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_20);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_21))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_21);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_22))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(cLocal_22);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
	func_410();
	func_411(&Local_38);
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	func_412(-800.6447f, -1289.064f, 42.5356f, 30f, 5);
	func_331(7, 0, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY_NO_ANIMALS", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SACK_OUT_CART_TARP", true);
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
	func_232(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;

	Var0 = { func_413(uParam0->f_174) };
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&Var0))
	{
		HUD::_TEXT_BLOCK_DELETE(&Var0);
	}
	Var0 = { func_414(uParam0->f_174) };
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
	switch (func_199())
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

	if (!func_415(iParam0))
	{
		return;
	}
	if (!func_416(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_417(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_418(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_419(iParam0, 0);
	func_420(iParam0);
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
		func_421(((*Global_1347702)[iParam0 /*49*/])->f_41);
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

	if (func_422(iParam0, &iVar1, &iVar0))
	{
		if (func_423(iVar1, iVar0, 1))
		{
			func_424(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_339(iParam0);
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
	if (!func_174(iParam0) && !func_272(iParam0))
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
	if (func_390(iParam0) == 3 || (func_390(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_109(iParam0))))
	{
		func_391(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_425(iParam0);
			if (iVar0 != -1)
			{
				func_426(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_427();
				if (iVar0 != -1)
				{
					func_426(0);
				}
			}
		}
	}
	func_394(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_197(1);
		func_393(0);
		func_397(1);
	}
	func_428(iParam0, 1);
	func_392(iParam0);
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

	if (!func_200(iParam0))
	{
		return;
	}
	func_429(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_429(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_212(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_200(&(Global_40.f_450[iVar0])))
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
		func_430(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_431(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_432((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_433(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_376(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_434(iParam0, 32);
	func_435();
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
	if (func_348(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_436(vParam0, bParam3);
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_187(var uParam0)
{
	func_437(uParam0);
	func_438(uParam0, 1);
	func_439(uParam0, 1);
	func_440(uParam0, 1);
	func_441(uParam0, 1);
	func_442(uParam0, 1);
	func_443(uParam0, 1);
	func_444(uParam0, 1);
	func_445(uParam0, 0);
}

int func_188(var uParam0, int iParam1)
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

int func_189(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_446((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_190(var uParam0, char* sParam1)
{
	struct<2> Var0;

	Var0 = { func_413(uParam0->f_174) };
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
			uParam0->f_2573 = { func_414(uParam0->f_174) };
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2573)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2573));
	}
}

void func_191(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_447(&(uParam0->f_117), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_448(&(uParam0->f_117));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_117[iVar0 /*5*/] = cParam1;
	(uParam0->f_117[iVar0 /*5*/])->f_1 = iParam2;
	(uParam0->f_117[iVar0 /*5*/])->f_2 = iParam3;
	(uParam0->f_117[iVar0 /*5*/])->f_4 = ((uParam0->f_117[iVar0 /*5*/])->f_4 || iParam4);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

int func_192(var uParam0)
{
	return uParam0->f_168;
}

void func_193(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_449((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_450((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_449((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_430(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_449((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_450((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_449((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_431(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_449(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_450(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_449(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_432((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_449((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_450((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_449((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_433(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_194(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_451(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_195(var uParam0)
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
						*uParam0 = func_452(vVar0.z);
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

void func_196(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_ENABLE_DISPATCH_LAW(bParam0);
	LAW::_ENABLE_DISPATCH_LAW_2(bParam0);
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_275(Global_1935630, 4194304);
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

int func_198(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_446(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_449((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_453(uParam0->f_41[iVar1 /*3*/]))
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
		if (func_454(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_449((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_455(uParam0->f_117[iVar1 /*5*/]))
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
		if (func_456((*uParam0)[iVar1 /*3*/]))
		{
			if (func_449(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_457((*uParam0)[iVar1 /*3*/]))
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
		if (func_458(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_449((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_459(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_460(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_461(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_462(uParam0, iParam1))
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

int func_199()
{
	return Global_1572887->f_12;
}

bool func_200(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_201(vector3 vParam0, var uParam3)
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
	iVar0 = func_463(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_464(0, 0);
		if (func_465(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_466(1, 0);
		}
	}
	else
	{
		func_466(1, 0);
	}
	func_154(0);
	func_467(0, vParam0, uParam3);
	return 1;
}

int func_202(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_319(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_327(&(uParam0->f_68));
			return 1;
		}
		return 0;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_468(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_327(&(uParam0->f_68));
				return 1;
			}
			if (!func_79(&(uParam0->f_321)))
			{
				if (func_469(uParam0->f_67))
				{
					func_261(&(uParam0->f_321));
				}
			}
			else if ((!func_469(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
			{
				func_232(&(uParam0->f_321));
			}
			else if (func_326(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_327(&(uParam0->f_68));
				return 1;
			}
		}
		else if (!func_79(&(uParam0->f_321)))
		{
			if (func_469(uParam0->f_67))
			{
				func_261(&(uParam0->f_321));
			}
		}
		else if ((!func_469(uParam0->f_67) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 4) || ENTITY::_0x61914209C36EFDDB(uParam0->f_67) == 5)
		{
			func_232(&(uParam0->f_321));
		}
		else if (func_326(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_327(&(uParam0->f_68));
			return 1;
		}
	}
	fVar0 = func_470(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_468(uParam0->f_67))
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
			if (!func_319(uParam0->f_329, 16))
			{
				func_330(uParam0, 256, 1);
				func_287(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_319(uParam0->f_329, 16))
			{
				func_325(&(uParam0->f_329), 16);
				if (func_468(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_330(uParam0, 16, 0);
				}
				else
				{
					func_330(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_218(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_383(uParam0->f_69, 0))
		{
			if (func_471(uParam0))
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
		fVar1 = func_472(Global_35, func_208(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar1 > 35f)
		{
			if (!func_319(uParam0->f_329, 131072))
			{
				func_287(&(uParam0->f_329), 131072);
				func_330(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_319(uParam0->f_329, 131072))
			{
				func_325(&(uParam0->f_329), 131072);
				func_330(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_472(Global_35, func_208(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return 1;
		}
		else if (fVar2 > 55f)
		{
			if (!func_319(uParam0->f_329, 33554432))
			{
				func_287(&(uParam0->f_329), 33554432);
				func_330(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_319(uParam0->f_329, 33554432))
			{
				func_325(&(uParam0->f_329), 33554432);
				func_330(uParam0, 2048, 0);
			}
		}
	}
	return 0;
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BNTY_F_DEAD";
		case 1:
			return "BNTY_F_LEFT_A";
		case 2:
			return "BNTY_F_LEFT_D";
		case 3:
			return "BNTY_F_ESCP";
		case 4:
			return "BNTY_F_LOST";
		case 5:
			return "BNTY_F_WANTED";
		case 6:
			return "BNTY_F_ATCK";
		case 7:
			return "BNTY_F_ADJL";
	}
	return "";
}

void func_204(var uParam0, int iParam1)
{
	float fVar0;

	fVar0 = 42.65f;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_16 = func_470(*iParam1, Global_35, 1, 1);
			if (!func_319(iParam1->f_5, 512))
			{
				if (func_319(iParam1->f_5, 1024))
				{
					if (!PED::_0x9682F850056C9ADE(*iParam1))
					{
						if (!func_319(iParam1->f_5, 2048))
						{
							iLocal_676 = -1;
							func_473(*iParam1);
							func_474(Local_758[0 /*17*/], "INTERACT_CALLOUT", " ", 162081675, 0, 0, 0, 1, 0);
							func_287(&(iParam1->f_5), 2048);
						}
						else
						{
							if (func_475())
							{
								func_476(&Local_758);
							}
							iLocal_676 = func_477(iParam1, &iLocal_698, 35f, &Local_758, 0f, 3, 0, 0, 4204545, 0, 0, 2, -1082130432);
							if (iLocal_676 == 0)
							{
								func_287(&(iParam1->f_5), 4096);
							}
						}
					}
					else
					{
						func_478(&iLocal_698, 0);
						func_479(&Local_758, 0, 0, 1, 0);
					}
				}
			}
			if (!func_319(iParam1->f_5, 32))
			{
				if (PED::IS_PED_HOGTIED(*iParam1) || func_480(*iParam1) == 1)
				{
					func_481(iParam1, 10, 0, 0);
					func_287(&(iParam1->f_5), 32);
				}
			}
			if (!func_319(iParam1->f_5, 64))
			{
				if (PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
				{
					func_287(&(iParam1->f_5), 64);
				}
			}
			if (!func_319(iParam1->f_5, 131072))
			{
				if (iParam1->f_2 == 7 || iParam1->f_2 == 4)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, 1) == 1)
						{
							if (TASK::IS_PED_RUNNING(*iParam1) || TASK::IS_PED_SPRINTING(*iParam1))
							{
								if (!func_79(&uLocal_669))
								{
									func_261(&uLocal_669);
								}
								else if (func_79(&uLocal_669) && func_326(&uLocal_669) > 1f)
								{
									if (!func_323(*iParam1, &(iLocal_567[18]), 1, 0))
									{
										if (!func_323(*iParam1, &(iLocal_567[19]), 1, 0) || (func_323(*iParam1, &(iLocal_567[19]), 1, 0) && func_323(Global_35, &(iLocal_567[19]), 1, 0)))
										{
											if (func_323(Global_35, &(iLocal_567[24]), 1, 0))
											{
												if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(*iParam1, Global_35, 17))
												{
													func_481(iParam1, 11, 0, 0);
													func_287(&(iParam1->f_5), 131072);
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
			if (func_319(iLocal_675, 1048576))
			{
				if (func_482(&uLocal_622))
				{
					func_410();
					func_325(&iLocal_675, 1048576);
				}
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(iLocal_794[0]), "pbl_ActionLeft") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(iLocal_794[0]), "pbl_ActionRight"))
					{
						func_483(Local_422, &uLocal_622, 0f, 0f, 0f, 1, 30f, 100f, -1, 3000, 1000, 1075838976, 1, 1, 1084227584);
					}
				}
			}
			if (!func_319(iParam1->f_5, 262144))
			{
				if (func_319(iLocal_675, 64))
				{
					if (!func_319(iLocal_675, 512))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0))
						{
							if (ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_794[1]), "CRIMINAL") && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(*iParam1, &(iLocal_794[1])))
							{
								func_481(iParam1, 9, 0, 0);
								func_287(&(iParam1->f_5), 262144);
							}
						}
					}
				}
			}
			switch (iParam1->f_2)
			{
				case 1:
					if (iParam1->f_3 == 0)
					{
						PED::SET_PED_CONFIG_FLAG(*iParam1, 354, true);
						iLocal_676 = -1;
						func_474(Local_740[0 /*17*/], "INTERACT_QUESTION", " ", -163964935, 0, 0, 0, 1, 0);
						iParam1->f_3 = 1;
					}
					else
					{
						func_287(&iLocal_675, 524288);
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[0]), 0))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[0]), "pbl_ActionLeft");
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[0]), "pbl_ActionRight");
						}
						if (iParam1->f_16 < 25f)
						{
							if (!func_79(&(iParam1->f_6)))
							{
								func_261(&(iParam1->f_6));
							}
							else if (func_79(&(iParam1->f_6)))
							{
								if (func_326(&(iParam1->f_6)) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(3, 5)))
								{
									MAP::ALLOW_SONAR_BLIPS(true);
									MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
									MAP::TRIGGER_SONAR_BLIP(1891783641, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false));
									AUDIO::_0x6FB1DA3CA9DA7D90("Tools_Rattle", *iParam1, "RBT21_sounds", 0, 0, 0);
									func_232(&(iParam1->f_6));
								}
							}
						}
						if (!func_319(iParam1->f_5, 2))
						{
							if (!func_319(iParam1->f_5, 128))
							{
								if (((((func_484(iParam1, &uLocal_593, &uLocal_621, 1) || func_323(Global_35, &(iLocal_567[9]), 1, 0)) || func_323(Global_35, &(iLocal_567[10]), 1, 0)) || func_323(Global_35, &(iLocal_567[8]), 1, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_567[6]), true, 2)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_567[7]), true, 2))
								{
									func_287(&(iParam1->f_5), 2);
								}
							}
						}
						if (!func_319(iParam1->f_5, 128))
						{
							if (!func_319(iParam1->f_5, 2))
							{
								iLocal_676 = func_477(iParam1, &iLocal_677, 10f, &Local_740, 0f, 3, 0, 0, 1, &(iLocal_567[6]), 0, 2, -1082130432);
								if (iLocal_676 == 0)
								{
									func_473(*iParam1);
									func_287(&(iParam1->f_5), 128);
								}
							}
						}
						if (func_319(iParam1->f_5, 2) || func_319(iParam1->f_5, 128))
						{
							func_473(*iParam1);
							func_325(&(iParam1->f_5), 2048);
							func_325(&(iParam1->f_5), 1024);
							PED::SET_PED_CONFIG_FLAG(*iParam1, 354, false);
							PED::SET_PED_CONFIG_FLAG(*iParam1, 169, false);
							if (func_485())
							{
								func_287(&iLocal_675, 65536);
							}
							if (func_486())
							{
								func_287(&iLocal_675, 131072);
							}
							if (func_487(*iParam1))
							{
								if (func_319(iLocal_675, 65536))
								{
									func_481(iParam1, 11, 0, 0);
								}
								else
								{
									func_488(-800.6447f, -1289.064f, 42.5356f, 30f, 0, 0, 5);
									func_481(iParam1, 2, 0, 0);
								}
							}
							else if (func_319(iLocal_675, 131072))
							{
								func_481(iParam1, 11, 0, 0);
							}
							else
							{
								func_481(iParam1, 3, 0, 0);
							}
							func_287(&iLocal_675, 32);
						}
					}
					break;
				case 2:
				case 3:
					if (iParam1->f_3 == 0)
					{
						if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[0]), 0)) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[0]), "pbl_ActionLeft")) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[0]), "pbl_ActionRight"))
						{
							switch (iParam1->f_2)
							{
								case 2:
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_794[0]), "pbl_ActionLeft", true);
									break;
								case 3:
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_794[0]), "pbl_ActionRight", true);
									break;
							}
							if (!PED::IS_PED_INJURED(Global_35) && PED::IS_PED_CARRYING_SOMETHING(Global_35))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(iLocal_794[0]), "JOHN", Global_35);
							}
							ANIMSCENE::SET_ANIM_SCENE_RATE(&(iLocal_794[0]), 1.1f);
							func_287(&iLocal_675, 1048576);
							iParam1->f_3 = 1;
						}
					}
					else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])))
					{
						if (ANIMSCENE::_0x005E6F28DD7ED58D(&(iLocal_794[0]), "CRIMINAL"))
						{
							func_287(&(iParam1->f_5), 8192);
							func_325(&iLocal_675, 524288);
							func_325(&(iParam1->f_5), 2048);
							func_325(&(iParam1->f_5), 1024);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							PED::SET_PED_CONFIG_FLAG(*iParam1, 169, false);
							if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), *iParam1))
							{
								PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), *iParam1, 0);
							}
							PED::FORCE_PED_MOTION_STATE(*iParam1, -530524, false, 0, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*iParam1, false, false);
							switch (iParam1->f_2)
							{
								case 2:
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, cLocal_15, 0, 10344, -1, 0, 0, -1);
									func_287(&(iParam1->f_5), 16384);
									func_481(iParam1, 7, 1, 0);
									break;
								case 3:
									if (!func_323(Global_35, &(iLocal_567[11]), 1, 0))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, cLocal_16, 0, 10344, -1, 0, 0, -1);
										func_287(&(iParam1->f_5), 32768);
										func_481(iParam1, 7, 1, 0);
									}
									else
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, cLocal_17, 0, 10344, -1, 0, 0, -1);
										func_287(&(iParam1->f_5), 65536);
										func_481(iParam1, 7, 1, 0);
									}
									break;
							}
						}
					}
					break;
				case 7:
					func_325(&iLocal_675, 524288);
					func_287(&(iParam1->f_5), 1024);
					if (!VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[24])))
					{
						iLocal_567[24] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, 4f, 10f, 2.5f, "RBTG21_VOLUME_TARGET_PED_VOLUME");
						PED::_0x7C00CFC48A782DC0(&(iLocal_567[24]), *iParam1, 0f, 5f, 0f, 0f, 0f, 0f, 2, 1);
					}
					if (iParam1->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						if (func_319(iParam1->f_5, 16384))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, cLocal_15, 0, 10344, -1, 0, 0, -1);
						}
						else if (func_319(iParam1->f_5, 32768))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, cLocal_16, 0, 10344, -1, 0, 0, -1);
						}
						else if (func_319(iParam1->f_5, 65536))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam1, cLocal_17, 0, 8296, -1, 0, 0, -1);
						}
						func_232(&uLocal_669);
						iParam1->f_3 = 1;
					}
					else
					{
						if (func_319(iParam1->f_5, 16384) || func_319(iParam1->f_5, 32768))
						{
							if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_794[1]), 1, 0))
							{
								ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[1]), "pbl_Jump");
								ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[1]), "pbl_DeadendIdles");
								ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[1]), "pbl_surrenderAction");
							}
							else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])))
							{
								iLocal_794[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@blackwaterhunt@ig2_4_deadend_jump", 0, "pbl_DeadendAction", false, true);
								ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_794[1]));
							}
						}
						func_489(*iParam1);
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, 1) == 1)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
							{
								iParam1->f_18 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
								if (func_319(iParam1->f_5, 16384) || func_319(iParam1->f_5, 32768))
								{
									if ((func_319(iParam1->f_5, 16384) && (iParam1->f_18 >= 42 || func_472(*iParam1, vLocal_31, 1) < 3.5f)) || (func_319(iParam1->f_5, 32768) && (iParam1->f_18 >= 84 || func_472(*iParam1, vLocal_31, 1) < 3.5f)))
									{
										if (iParam1->f_16 < 20f)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vLocal_34, 3f, 60000, 0.25f, 5506053, 40000f);
											func_481(iParam1, 4, 0, 0);
										}
										else
										{
											func_481(iParam1, 8, 0, 0);
										}
									}
								}
								else if (func_319(iParam1->f_5, 65536))
								{
									if (iParam1->f_18 >= 91)
									{
										if (iParam1->f_16 < 25f)
										{
											func_481(iParam1, 9, 0, 0);
										}
										else
										{
											func_481(iParam1, 11, 0, 0);
										}
									}
								}
							}
						}
						else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
						{
							if (!PED::IS_PED_RAGDOLL(*iParam1) && !func_319(iParam1->f_5, 32))
							{
								func_481(iParam1, 7, 0, 0);
							}
						}
					}
					break;
				case 4:
					func_325(&(iParam1->f_5), 2048);
					func_325(&(iParam1->f_5), 1024);
					if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, 1) == 1)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam1, 2f);
					}
					if (iParam1->f_3 == 0)
					{
						if (func_472(*iParam1, vLocal_34, 1) < 0.8f || TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, 1) == 8)
						{
							if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_794[1]), 1, 0))
							{
								iLocal_676 = -1;
								func_473(*iParam1);
								func_474(Local_776[0 /*17*/], "INTERACT_THREATEN", " ", 648122183, 0, 0, 0, 1, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_794[1]), "CRIMINAL", *iParam1, 0);
								ANIMSCENE::START_ANIM_SCENE(&(iLocal_794[1]));
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
								func_490(uParam0, "RBT21_DEADEND", 0);
								func_232(&(iParam1->f_6));
								func_287(&iLocal_675, 64);
								iParam1->f_3 = 1;
							}
						}
					}
					else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0))
					{
						if (!func_319(iParam1->f_5, 256))
						{
							iLocal_676 = func_477(iParam1, &iLocal_719, 15f, &Local_776, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432);
							if (iLocal_676 == 0)
							{
								func_473(*iParam1);
								if (func_323(Global_35, &(iLocal_567[16]), 1, 0) || func_323(Global_35, &(iLocal_567[18]), 1, 0))
								{
									func_287(&iLocal_675, 128);
								}
								else
								{
									func_325(&iLocal_675, 128);
								}
								func_287(&(iParam1->f_5), 256);
							}
						}
						if (func_323(Global_35, &(iLocal_567[18]), 1, 0))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(iLocal_794[1]), "pbl_DeadendAction") && ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_794[1]), "s_DeadendIdles", 1))
							{
								if (!func_319(iParam1->f_5, 4))
								{
									if (!func_319(iParam1->f_5, 256))
									{
										func_491(&uLocal_593, 0);
										if (iParam1->f_16 < 6f || func_484(iParam1, &uLocal_593, &uLocal_621, 1))
										{
											func_287(&(iParam1->f_5), 4);
											func_287(&iLocal_675, 128);
										}
									}
								}
							}
						}
						if (!func_323(Global_35, &(iLocal_567[16]), 1, 0))
						{
							if (!func_79(&(iParam1->f_6)))
							{
								if (PED::IS_TRACKED_PED_VISIBLE(*iParam1))
								{
									func_261(&(iParam1->f_6));
								}
							}
							if (!func_319(iParam1->f_5, 4))
							{
								if (!func_319(iParam1->f_5, 256))
								{
									func_491(&uLocal_593, 0);
									if (func_484(iParam1, &uLocal_593, &uLocal_621, 1))
									{
										func_287(&(iParam1->f_5), 4);
									}
								}
							}
						}
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(&(iLocal_794[1]), "pbl_DeadendAction") && ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_794[1]), "s_DeadendIdles", 1))
						{
							if ((((func_492(9) && !func_493("RBT21_ILO")) || ((func_492(9) && func_493("RBT21_ILO")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT21_ILO") > 0)) || (func_319(iParam1->f_5, 4) && !func_319(iParam1->f_5, 256))) || ((((iParam1->f_16 < 15f && PED::IS_TRACKED_PED_VISIBLE(*iParam1)) && func_79(&(iParam1->f_6))) && func_326(&(iParam1->f_6)) > 6f) && !func_319(iParam1->f_5, 256)))
							{
								func_473(*iParam1);
								if (func_319(iLocal_675, 128))
								{
									func_481(iParam1, 5, 0, 0);
								}
								else
								{
									func_481(iParam1, 11, 0, 0);
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, 1) == 8 && func_472(*iParam1, vLocal_34, 1) > 1f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vLocal_34, 3f, 60000, 0.25f, 5506053, 40000f);
						func_481(iParam1, 4, 0, 0);
					}
					break;
				case 5:
					func_287(&iLocal_675, 64);
					if (iParam1->f_3 == 0)
					{
						if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(*iParam1, &(iLocal_794[1]))) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[1]), "pbl_SurrenderAction"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_794[1]), "pbl_SurrenderAction", true);
							if (!func_492(10))
							{
								if (func_490(uParam0, "RBT21_GIVEUP", 0))
								{
									func_494(10, 1);
								}
							}
							func_232(&(iParam1->f_6));
							func_232(&(iParam1->f_9));
							iParam1->f_3 = 1;
						}
					}
					else if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(*iParam1, &(iLocal_794[1])))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam1, &Local_631);
						if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_794[1]), "s_SurrenderIdles", 1))
						{
							if (!func_79(&(iParam1->f_6)))
							{
								func_80(&(iParam1->f_6), 0);
							}
							if (!func_79(&(iParam1->f_9)))
							{
								if (!func_495() && !func_496())
								{
									func_80(&(iParam1->f_9), 0);
								}
							}
							else if (func_79(&(iParam1->f_9)) && func_326(&(iParam1->f_9)) > 3f)
							{
								if (!func_492(12))
								{
									if (func_497(uParam0))
									{
										func_494(12, 1);
									}
								}
							}
							if (!func_319(iParam1->f_5, 8))
							{
								func_491(&uLocal_593, 0);
								if (func_484(iParam1, &uLocal_593, &uLocal_621, 1))
								{
									func_287(&(iParam1->f_5), 8);
								}
							}
							if ((((iParam1->f_16 < 5f || iParam1->f_16 > 20f) || !func_323(Global_35, &(iLocal_567[18]), 1, 0)) || (func_79(&(iParam1->f_6)) && func_326(&(iParam1->f_6)) > 20f)) || func_319(iParam1->f_5, 8))
							{
								if (!func_496())
								{
									func_481(iParam1, 6, 0, 0);
								}
							}
						}
					}
					break;
				case 6:
					if (iParam1->f_3 == 0)
					{
						if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(*iParam1, &(iLocal_794[1]))) && ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(&(iLocal_794[1]), "pbl_Jump"))
						{
							TASK::TASK_CLEAR_LOOK_AT(*iParam1);
							_NAMESPACE29::_0x873C792E07A32C8B(*iParam1, 0);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_794[1]), "pbl_Jump", true);
							if (!func_492(11))
							{
								if (func_490(uParam0, "RBT21_S1_IG4", 0))
								{
									func_494(11, 1);
								}
							}
							iParam1->f_3 = 1;
						}
					}
					else if (!func_319(iLocal_675, 512))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])))
						{
							if (ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_794[1]), "CRIMINAL") || ANIMSCENE::_0x005E6F28DD7ED58D(&(iLocal_794[1]), "CRIMINAL"))
							{
								PED::_0x89F5E7ADECCCB49C(*iParam1, "injured_right_leg");
								ENTITY::SET_ENTITY_PROOFS(*iParam1, 8, false);
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(*iParam1, 2000, 3000, 0, 0f, 0f, -1f, fVar0, 0f, 0f, 0f, 0f, 0f, 0f);
								func_287(&iLocal_675, 512);
							}
						}
					}
					else if ((!PED::IS_PED_RAGDOLL(*iParam1) && !PED::IS_PED_FALLING(*iParam1)) && !PED::_0x3E592D0486DEC0F6(*iParam1))
					{
						ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
						ENTITY::_SET_ENTITY_HEALTH(*iParam1, 45, 0);
						if (func_323(*iParam1, &(iLocal_567[18]), 1, 0))
						{
							func_481(iParam1, 9, 0, 0);
						}
						else
						{
							func_481(iParam1, 11, 0, 0);
						}
					}
					break;
				case 8:
					func_325(&(iParam1->f_5), 2048);
					func_325(&(iParam1->f_5), 1024);
					if (iParam1->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COWER(*iParam1, -1, Global_35, 0);
						func_232(&(iParam1->f_6));
						func_232(&uLocal_669);
						iParam1->f_3 = 1;
					}
					else
					{
						if (!func_319(iParam1->f_5, 16))
						{
							func_491(&uLocal_593, 0);
							if (iParam1->f_16 < 15f || func_484(iParam1, &uLocal_593, &uLocal_621, 1))
							{
								func_287(&(iParam1->f_5), 16);
							}
						}
						if ((iParam1->f_16 < 20f || func_323(Global_35, &(iLocal_567[16]), 1, 0)) || func_319(iParam1->f_5, 16))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vLocal_34, 3f, 60000, 0.25f, 5506053, 40000f);
							func_481(iParam1, 4, 0, 0);
						}
						else if (iParam1->f_16 > 35f)
						{
							if (!func_79(&(iParam1->f_6)))
							{
								func_261(&(iParam1->f_6));
							}
							else if (func_79(&(iParam1->f_6)) && func_326(&(iParam1->f_6)) > 20f)
							{
								func_481(iParam1, 11, 0, 0);
							}
						}
					}
					break;
				case 9:
					func_325(&(iParam1->f_5), 2048);
					func_325(&(iParam1->f_5), 1024);
					if (iParam1->f_3 == 0)
					{
						func_232(&(iParam1->f_6));
						func_232(&(iParam1->f_9));
						func_473(*iParam1);
						if (((!PED::IS_PED_RAGDOLL(*iParam1) && !TASK::IS_PED_GETTING_UP(*iParam1)) && !TASK::_0xF330A5C062B29BED(*iParam1)) && !PED::_0x3BDFCF25B58B0415(*iParam1))
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam1, &Local_631);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_HANDS_UP(*iParam1, -1, Global_35, -1, false);
							iParam1->f_3 = 1;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -1519143300, 1) == 1)
					{
						if (!func_492(10))
						{
							if (func_496())
							{
								func_498(1, 0);
							}
							if (!func_495() && !func_496())
							{
								if (func_490(uParam0, "RBT21_GIVEUP", 0))
								{
									func_494(10, 1);
								}
							}
						}
						if (!func_323(Global_35, &(iLocal_567[18]), 1, 0) && !func_323(Global_35, &(iLocal_567[19]), 1, 0))
						{
							if ((iParam1->f_16 > 25f || func_499(*iParam1, &uLocal_834, iParam1->f_16, &(iParam1->f_6))) || (func_323(*iParam1, &(iLocal_567[18]), 1, 0) && !func_323(Global_35, &(iLocal_567[18]), 1, 0)))
							{
								if (!func_495() && !func_496())
								{
									if (!func_492(11))
									{
										if (func_490(uParam0, "RBT21_S1_IG4", 0))
										{
											func_494(11, 1);
										}
									}
									func_481(iParam1, 11, 0, 0);
								}
							}
						}
					}
					break;
				case 10:
					func_325(&(iParam1->f_5), 2048);
					func_325(&(iParam1->f_5), 1024);
					func_287(&iLocal_675, 64);
					if (iParam1->f_3 == 0)
					{
						func_232(&(iParam1->f_6));
						func_232(&(iParam1->f_9));
						func_473(*iParam1);
						iParam1->f_3 = 1;
					}
					else if (!PED::IS_PED_HOGTIED(*iParam1) && !TASK::IS_PED_GETTING_UP(*iParam1))
					{
						func_325(&(iParam1->f_5), 32);
						func_481(iParam1, 11, 0, 0);
					}
					break;
				case 11:
					PED::SET_PED_RESET_FLAG(*iParam1, 53, true);
					func_287(&(iParam1->f_5), 1024);
					func_287(&iLocal_675, 64);
					func_325(&iLocal_675, 524288);
					if (iParam1->f_3 == 0)
					{
						func_232(&(iParam1->f_6));
						func_232(&(iParam1->f_9));
						func_500(uParam0);
						if (func_319(iLocal_675, 512))
						{
							TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam1, false);
						}
						else
						{
							TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam1, false);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 4, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1048576, true);
						TASK::_0xE8F1A5B4CED3725A(*iParam1, -781.52f, -1320.16f, 47.11f, -1082130432);
						TASK::_0x3923EC958249657D(*iParam1, Global_35, -1082130432);
						TASK::TASK_CLEAR_LOOK_AT(*iParam1);
						_NAMESPACE29::_0x873C792E07A32C8B(*iParam1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 257, 2f, 0);
						iParam1->f_3 = 1;
					}
					break;
			}
		}
	}
}

void func_205(var uParam0, int* iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_16 = func_470(*iParam1, Global_35, 1, 1);
			switch (iParam1->f_2)
			{
				case 0:
					if (iParam1->f_3 == 0)
					{
						func_232(&(iParam1->f_6));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, -75130390, 0, 0, 0, -1082130432, 0);
						iParam1->f_3 = 1;
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 993674639, 1) == 1)
						{
							if (iParam1->f_16 < 20f)
							{
								if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(*iParam1))
								{
									if (!func_79(&(iParam1->f_6)))
									{
										func_261(&(iParam1->f_6));
									}
									else if (func_326(&(iParam1->f_6)) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(4, 9)))
									{
										MAP::ALLOW_SONAR_BLIPS(true);
										MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
										MAP::_0x0C7A2289A5C4D7C9(249295937, *iParam1);
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												AUDIO::PLAY_ANIMAL_VOCALIZATION(*iParam1, "meow", 0);
												break;
											case 1:
												AUDIO::PLAY_ANIMAL_VOCALIZATION(*iParam1, "purr", 0);
												break;
											case 2:
												AUDIO::PLAY_ANIMAL_VOCALIZATION(*iParam1, "lonely", 0);
												break;
										}
										func_232(&(iParam1->f_6));
									}
								}
							}
						}
						if (func_323(Global_35, &(iLocal_567[5]), 1, 0))
						{
							if (iParam1->f_16 < 7.5f)
							{
								func_481(iParam1, 11, 0, 0);
							}
						}
					}
					break;
				case 11:
					if (iParam1->f_3 == 0)
					{
						AUDIO::PLAY_ANIMAL_VOCALIZATION(*iParam1, "scared", 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						PED::_0xEEED8FAFEC331A70(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						TASK::_0x3923EC958249657D(*iParam1, Global_35, -1082130432);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 100f, -1, 0, 1.5f, 0);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
						iParam1->f_3 = 1;
					}
					break;
			}
		}
	}
}

void func_206(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			uParam1->f_16 = func_470(*uParam1, Global_35, 1, 1);
			uParam1->f_17 = func_470(*uParam1, Local_422, 1, 1);
			switch (uParam1->f_2)
			{
				case 0:
					if (uParam1->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
						PED::_0xF1C03A5352243A30(*uParam1);
						TASK::_TASK_START_SCENARIO_IN_PLACE(*uParam1, -1569277059, 0, 0, 0, -1082130432, 0);
						uParam1->f_3 = 1;
					}
					else if (func_501(*uParam1, Local_422, 3.5f, 1) || func_323(Local_422, &(iLocal_567[23]), 1, 0))
					{
						func_481(uParam1, 12, 0, 0);
					}
					break;
				case 12:
					if (uParam1->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, false);
						TASK::_0xE7FA07624574B79A(*uParam1, Local_422, 2, 1, 5f, 1, 0, 0, 0);
						uParam1->f_3 = 1;
					}
					else if (!func_319(uParam1->f_5, 524288))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam1))
						{
							if (func_502(*uParam1, "BUMP", -435184212, 0, 1, 0, 0, 1))
							{
								func_287(&(uParam1->f_5), 524288);
							}
						}
					}
					break;
			}
		}
	}
}

void func_207(var uParam0)
{
	int iVar0;

	if (!func_319(iLocal_675, 8))
	{
		if (!func_319(iLocal_675, 16))
		{
			if (func_503(Global_36, vLocal_28, 100f, 1) && func_504(Local_422, &uLocal_666, 1069547520, 1056964608, 0.2f, 0.45f))
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
				{
					if (func_490(uParam0, "RBT21_SPOT", 0))
					{
						func_494(0, 1);
					}
				}
				func_287(&iLocal_675, 16);
			}
		}
	}
	if (func_319(iLocal_675, 32))
	{
		if (!func_492(1) && !func_492(2))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[0]), 0))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_422, &(iLocal_794[0])))
				{
					if (!func_495() && !func_496())
					{
						if (func_319(Local_422.f_5, 128))
						{
							if (func_490(uParam0, "RBT21_CAUGHT", 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_422, 5000, 2048, 51, 0);
								func_494(2, 1);
							}
						}
						else if (func_490(uParam0, "RBT21_SPOOK", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_422, 5000, 2048, 51, 0);
							func_494(1, 1);
						}
					}
				}
			}
		}
		if (func_319(Local_422.f_5, 8192) || ((((ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0]))) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_422, &(iLocal_794[0]))) && !func_505(Local_422)))
		{
			if (!func_492(3))
			{
				if (!func_495() && !func_496())
				{
					if (func_490(uParam0, "RBT21_CALLOUT", 0))
					{
						func_494(3, 1);
					}
				}
			}
			else if (!func_492(4))
			{
				if (func_500(uParam0))
				{
					func_494(4, 1);
				}
			}
		}
		if (!func_319(Local_422.f_5, 512))
		{
			if (func_319(Local_422.f_5, 1024))
			{
				if (func_319(Local_422.f_5, 4096))
				{
					if (((((iLocal_838 == 0 && func_490(uParam0, "RBT21_CHASE1", 0)) || (iLocal_838 == 1 && func_490(uParam0, "RBT21_CHASE2", 0))) || (iLocal_838 == 2 && func_490(uParam0, "RBT21_CHASE3", 0))) || (iLocal_838 == 3 && func_490(uParam0, "RBT21_CHASE4", 0))) || (iLocal_838 == 4 && func_490(uParam0, "RBT21_CHASE5", 0)))
					{
						iLocal_838++;
						if (iLocal_838 > 4)
						{
							func_473(Local_422);
							func_287(&(Local_422.f_5), 512);
						}
						func_325(&(Local_422.f_5), 4096);
					}
				}
			}
		}
		if (!func_492(6))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (TASK::IS_PED_RUNNING(Local_422) || TASK::IS_PED_SPRINTING(Local_422))
				{
					if ((func_501(Local_422, &(Local_460[0 /*19*/]), 4.5f, 1) || func_501(Local_422, &(Local_460[1 /*19*/]), 4.5f, 1)) || func_501(Local_422, &(Local_460[2 /*19*/]), 4.5f, 1))
					{
						if (!func_495() && !func_496())
						{
							if (func_490(uParam0, "RBT21_BLOCKED", 0))
							{
								func_494(6, 1);
							}
						}
						else
						{
							func_494(6, 1);
						}
					}
				}
			}
		}
		if (!func_492(9))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[1])) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[1]), 0))
			{
				if (!func_495() && !func_496())
				{
					if (func_319(Local_422.f_5, 256))
					{
						if (func_319(iLocal_675, 128))
						{
							if (func_506(uParam0, "RBT21_ILO", 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_422, 5000, 2048, 51, 0);
								func_494(9, 1);
							}
						}
						else if (func_490(uParam0, "RBT21_ILO", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_422, 5000, 2048, 51, 0);
							func_494(9, 1);
						}
					}
				}
			}
		}
		if (((!func_492(13) && !func_492(14)) && !func_492(15)) && !func_492(16))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (Local_422.f_2 == 9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_422, -1519143300, 1) == 1)
					{
						if (!func_79(&(Local_422.f_9)))
						{
							func_80(&(Local_422.f_9), 0);
						}
						else if (func_79(&(Local_422.f_9)) && func_326(&(Local_422.f_9)) > ((10f * IntToFloat(iLocal_841)) + MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 7.5f)))
						{
							if (func_497(uParam0))
							{
								func_232(&(Local_422.f_9));
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
		{
			if (Local_422.f_2 == 11)
			{
				if (PED::IS_PED_FLEEING(Local_422))
				{
					if (!func_79(&(Local_422.f_9)))
					{
						func_80(&(Local_422.f_9), 0);
					}
					else if (func_79(&(Local_422.f_9)) && func_326(&(Local_422.f_9)) > ((10f * IntToFloat(iLocal_839)) + MISC::GET_RANDOM_FLOAT_IN_RANGE(12f, 15f)))
					{
						if (Local_422.f_16 < 30f)
						{
							if (func_500(uParam0))
							{
								func_232(&(Local_422.f_9));
							}
						}
					}
				}
			}
		}
		if (!func_492(17) && !func_492(18))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (PED::IS_PED_HOGTIED(Local_422) || ENTITY::_0x61914209C36EFDDB(Local_422) == 1)
				{
					if (!func_495() && !func_496())
					{
						if (PED::GET_PED_CONFIG_FLAG(Local_422, 11, false) == 0)
						{
							if (!func_319(Local_422.f_5, 64))
							{
								if (func_490(uParam0, "RBT21_HOG", 0))
								{
									func_494(17, 1);
								}
							}
							else if (PED::IS_PED_HOGTIED(Local_422))
							{
								if (func_490(uParam0, "RBT21_HOGWAK", 0))
								{
									func_494(18, 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_492(19))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (PED::IS_PED_HOGTIED(Local_422))
				{
					if (ENTITY::_0x61914209C36EFDDB(Local_422) == 5 || ENTITY::_0x61914209C36EFDDB(Local_422) == 4)
					{
						if (!func_495() && !func_496())
						{
							if (func_490(uParam0, "RBT21_PICKUP", 0))
							{
								func_494(19, 1);
							}
						}
					}
				}
			}
		}
		if (!func_492(20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (Local_422.f_2 == 10)
				{
					if (PED::IS_PED_HOGTIED(Local_422))
					{
						if (func_507(Local_422, 1))
						{
							if (fLocal_836 > 20f)
							{
								if (!func_79(&(Local_422.f_9)))
								{
									func_80(&(Local_422.f_9), 0);
								}
								else if (func_79(&(Local_422.f_9)) && func_326(&(Local_422.f_9)) > ((10f * IntToFloat(iLocal_842)) + MISC::GET_RANDOM_FLOAT_IN_RANGE(6f, 9f)))
								{
									if (!func_495() && !func_496())
									{
										if (func_490(uParam0, "RBT21_GRUMBLE", 0))
										{
											iLocal_842++;
											func_232(&(Local_422.f_9));
											if (iLocal_842 == 5)
											{
												func_494(20, 1);
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
		if (!func_492(7))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (Local_422.f_2 == 7 || Local_422.f_2 == 11)
				{
					if (TASK::IS_PED_RUNNING(Local_422) || TASK::IS_PED_SPRINTING(Local_422))
					{
						if (!func_79(&uLocal_672))
						{
							func_261(&uLocal_672);
						}
						if (func_79(&uLocal_672) && func_326(&uLocal_672) > 5f)
						{
							if (!func_495() && !func_496())
							{
								iVar0 = func_508(Local_422, -1976316465, 0, 0, 28);
								if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
								{
									if (func_323(iVar0, &(iLocal_567[24]), 1, 0))
									{
										if (func_501(Local_422, iVar0, 3.5f, 1))
										{
											if (func_490(uParam0, "RBT21_BLOCKED", 0))
											{
												if (func_502(iVar0, "BUMP", -435184212, 0, 1, 0, 0, 1))
												{
													TASK::_0xE7FA07624574B79A(iVar0, Local_422, 2, 1, 3f, 1, 0, 0, 0);
												}
												iLocal_840++;
												func_232(&uLocal_672);
												if (iLocal_840 == 1)
												{
													func_494(7, 1);
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
		if (!func_492(21))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (Local_422.f_2 == 10)
				{
					if (PED::IS_PED_HOGTIED(Local_422))
					{
						if (func_507(Local_422, 1))
						{
							if (fLocal_836 > 20f)
							{
								if (iLocal_842 > 0)
								{
									if (!func_495() && !func_496())
									{
										if (func_490(uParam0, "RBT21_RETURN1", 0))
										{
											func_232(&(Local_422.f_9));
											func_494(21, 1);
											func_287(&iLocal_675, 8388608);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_493("RBT21_RETURN1"))
			{
				func_232(&(Local_422.f_9));
			}
			if (func_319(iLocal_675, 8388608))
			{
				if (!func_509("RBT21_RETURN1") && !func_493("RBT21_RETURN1"))
				{
					func_411(&Local_38);
					func_325(&iLocal_675, 8388608);
				}
			}
			if (!func_492(22))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
				{
					if (Local_422.f_2 == 10)
					{
						if (PED::IS_PED_HOGTIED(Local_422))
						{
							if (func_507(Local_422, 1))
							{
								if (fLocal_836 > 20f)
								{
									if (!func_495() && !func_496())
									{
										if (func_490(uParam0, "RBT21_SHUSHJ", 0))
										{
											func_232(&(Local_422.f_9));
											func_494(22, 1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_492(23))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (Local_422.f_2 == 10)
				{
					if (PED::IS_PED_HOGTIED(Local_422))
					{
						if (func_507(Local_422, 1))
						{
							if (fLocal_836 < 20f)
							{
								if (func_496())
								{
									func_498(1, 0);
								}
								if (!func_495() && !func_496())
								{
									if (func_490(uParam0, "RBT21_CLJAIL", 0))
									{
										func_494(21, 1);
										func_494(22, 1);
										func_494(23, 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_319(iLocal_675, 8388608))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB65A4DAB460A19BD(Global_35)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422))
			{
				if (func_510(&Local_38, 1056964608, "RBT21_SHUSH", 1))
				{
					if (func_509("RBT21_RETURN1"))
					{
						func_511("RBT21_RETURN1", 0, 0);
						func_494(22, 1);
					}
				}
			}
		}
	}
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2910.89f, 1310.44f, 44.38f;
		case 5:
			return 2506.39f, -1308.93f, 47.95f;
		case 105:
			return 1359.44f, -1304.92f, 76.76f;
		case 26:
			return -1808.58f, -350.06f, 163.65f;
		case 76:
			return -275.78f, 804.02f, 118.37f;
		case 38:
			return -757.78f, -1269.13f, 43.14f;
		case 115:
			return -5528.903f, -2929.261f, -2.2833f;
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_512(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_513(0);
	if (iVar0 == 11)
	{
		iVar1 = func_514(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_515(Global_40.f_4283);
				if (func_348(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_516(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_348(Global_1894899->f_2) && Global_1894899->f_2 == func_515(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_517(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_518(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_518(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_518(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_518(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_518(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_519(2) && !func_518(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_518(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_522(func_520(65536), 0, 3, func_521(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_512(iVar1);
			if (!func_319(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_518(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_518(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_518(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_518(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_518(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_518(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_518(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_512(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_518(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_518(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_523(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_524(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_518(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_272(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_525(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_526() <= 160)
			{
				return 1;
			}
			else
			{
				func_527(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_528(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_272(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_272(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_529(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_272(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_272(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_272(((*Global_1835011)[21 /*74*/])->f_1))
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
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_530())
		{
			if (func_364("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_212(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_531(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_272(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_272(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_213(int iParam0)
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

int func_214(int iParam0)
{
	if (!func_348(iParam0))
	{
		return 0;
	}
	return func_349(iParam0, 33554432);
}

int func_215(int iParam0)
{
	if (!func_348(iParam0))
	{
		return 0;
	}
	return func_349(iParam0, 67108864);
}

var func_216()
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

bool func_217(int iParam0, int iParam1)
{
	return func_532(iParam0, iParam1);
}

int func_218(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_533(iParam0, bParam1, iParam2, iParam3))
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

int func_219(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			else if (func_534(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_416(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_535(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_536(func_417(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_220(var uParam0)
{
	if (func_59(8))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0, float fParam1)
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

int func_222(var uParam0)
{
	return 0;
}

int func_223(float fParam0)
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

void func_224()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_415(iVar0) && func_416(iVar0))
		{
			func_537(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_225(var uParam0)
{
	func_261(&(Local_422.f_9));
	iLocal_525 = func_538(509);
	if (func_383(iLocal_525, 0))
	{
		func_539(uParam0, iLocal_525, "BLW_Police_Chief", 1);
	}
	if (func_383(Local_422, 0))
	{
		if (func_71(uParam0) != 0 || func_71(uParam0) != 1)
		{
			func_540(&Local_422, &Global_35, 1176256512, -1, 0, 1077936128, 1, 1, 0, 1, 0, 0);
		}
	}
}

void func_226(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_266(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_267(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_267(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_267(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_267(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_227(int iParam0)
{
	Global_36579 = iParam0;
}

void func_228(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_229(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_235(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_541(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_230(var uParam0)
{
	if (func_542(uParam0->f_174))
	{
		func_543(262144, 5, 0, 1);
		func_544(720f, 1, 0);
	}
}

void func_231(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_232(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_233(var uParam0)
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

float func_234(int iParam0)
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

void func_235(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_200(iParam0))
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
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_545(iParam0);
	if (!bParam5 && func_546(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_398(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
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
		func_547(8);
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
	func_541(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_199() == -1)
	{
		func_548(iParam0);
		iVar0 = func_515(Global_40.f_4283);
		if (func_348(iVar0) && func_549(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_550(iVar0);
		}
		if (func_551(iParam0, iVar1, iVar0))
		{
			func_552(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
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
		if (((!func_546(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
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
		if (func_553(iParam0))
		{
			if (iParam0 == 97)
			{
				func_307(185, 0);
			}
			else
			{
				func_307(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_400(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_268(iParam0, 2);
	}
}

void func_236(int iParam0, float fParam1)
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

void func_237(int iParam0, vector3 vParam1, float fParam4)
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
	if (func_554(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_235(iParam0, vParam1, 1, 0);
	}
}

void func_238(int iParam0)
{
	if (func_555(179))
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
	else if (func_546(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_556())
	{
		func_557(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_239(int iParam0)
{
	if (func_555(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_546(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_556())
	{
		func_557(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_240(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_241(var uParam0)
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
		Var0 = { func_558(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_242()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_243(var uParam0)
{
	return uParam0->f_350;
}

void func_244(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_559(uParam0) };
	func_560(uParam0, &Var0);
}

void func_245(var uParam0, char* sParam1)
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
	func_560(uParam0, sParam1);
	func_561(uParam0, 2097152, 1);
	func_562(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_246(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_563(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_248(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_564(uParam0, 256) && !func_564(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_565(uParam0, sParam1);
	if (!func_564(uParam0, 64))
	{
		if (!func_246(func_566(uParam0)))
		{
			func_562(uParam0, 64);
		}
		else
		{
			vVar0 = { func_567(uParam0) };
			if (!func_246(vVar0))
			{
				func_568(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_472(Global_35, func_566(uParam0), 1);
	if (func_564(uParam0, 128) || func_564(uParam0, 256))
	{
		if ((fVar3 >= func_569(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_570();
				uParam0->f_433 = 0;
			}
			func_571(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_309(uParam0);
			func_561(uParam0, 128, 1);
			func_561(uParam0, 256, 1);
			func_561(uParam0, 4096, 1);
			func_561(uParam0, 32768, 1);
			func_561(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_572(uParam0) || bParam2)
	{
		if (!func_564(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_348))
			{
				if (func_572(uParam0) >= func_569(uParam0))
				{
				}
				Var4 = { func_243(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_573(uParam0);
				}
				Var4 = { func_243(uParam0) };
				iVar12 = 256;
				if (!func_564(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_574(uParam0, 0, 0, 0, 0);
				func_562(uParam0, 128);
			}
		}
	}
	if (func_564(uParam0, 128))
	{
		if (func_564(uParam0, 256) && !func_564(uParam0, 4194304))
		{
			return 1;
		}
		func_575(uParam0);
		if (!uParam0->f_433)
		{
			if (func_576())
			{
				func_577(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_559(uParam0) };
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
			if (!func_564(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_348, &Var15))
				{
					if (!func_564(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_348, &Var15) && !ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_348, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_348, &Var15);
						}
						func_562(uParam0, 16777216);
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
			func_562(uParam0, 256);
			func_561(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0)
{
}

bool func_250(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_251(var uParam0, char* sParam1, int iParam2)
{
	if (func_250(sParam1, 2))
	{
		return 0;
	}
	if (func_250(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_578(sParam1) == 9 || func_578(sParam1) == 12) || func_578(sParam1) == 13)
	{
		if (!func_250(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_579(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_580(uParam0, func_578(sParam1));
	}
	return 0;
}

void func_252(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_579(sParam0, 1);
}

int func_253(var uParam0, char* sParam1, int iParam2)
{
	if (!func_250(sParam1, 1))
	{
		return 0;
	}
	if (func_250(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_581(sParam1) == 9 || func_581(sParam1) == 12) || func_581(sParam1) == 13)
	{
		if (!func_250(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_579(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_580(uParam0, func_581(sParam1));
	}
	return 0;
}

void func_254(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_579(sParam0, 2);
}

int func_255(var uParam0, char* sParam1, int iParam2)
{
	if (func_250(sParam1, 1))
	{
		return 0;
	}
	if (func_578(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_578(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_582(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_578(sParam1) == 9 || func_578(sParam1) == 12) || func_578(sParam1) == 13) && func_250(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_578(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		case 4:
			return func_313(&(uParam0->f_753));
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		case 9:
		case 12:
		case 13:
			if (!func_250(sParam1, 8))
			{
				func_579(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_256(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_579(sParam0, 1);
}

int func_257(char* sParam0, bool bParam1)
{
	if (func_250(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_579(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_579(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_579(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_579(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_579(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_579(sParam0, 1);
		return 1;
	}
	func_579(sParam0, 1);
	return 0;
}

void func_258(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_250(uParam0->f_482[iVar0 /*16*/], 1048576) && func_250(uParam0->f_482[iVar0 /*16*/], 4)) && !func_250(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_259(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (!func_583(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_584(uParam0, 0))
			{
				if (func_585(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_586(uParam0, 1, &iVar0))
					{
					}
					if (func_587(uParam0, 3, &cVar2))
					{
					}
					if (func_586(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_586(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_586(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_586(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_586(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_588(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_579((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_579(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_579(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_250(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_588(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_579(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
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
			if (func_584(uParam0, 12))
			{
				if (func_586(uParam0, 13, &iVar0))
				{
				}
				if (func_586(uParam0, 14, &iVar1))
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
		func_589(uParam0);
	}
	return 1;
}

bool func_260(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_261(var uParam0)
{
	func_590(uParam0, 0f);
}

bool func_262(var uParam0)
{
	return func_260(*uParam0, 2);
}

int func_263()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_264(var uParam0)
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
		func_591(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_592(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_592(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
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

int func_265(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_95(uParam0);
	iVar1 = 0;
	iVar2 = 1;
	if (func_282(uParam0) && !func_593(uParam0))
	{
		iVar1 = 1;
		if (iVar0 != 0)
		{
			iVar2 = 0;
		}
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("BHCR"))
	{
		return 0;
	}
	if (!func_594(uParam0, &Local_422))
	{
		return 0;
	}
	if (!func_595())
	{
		return 0;
	}
	if (iVar2 == 1)
	{
		if (!func_596(uParam0))
		{
			if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[5])))
			{
				func_597(-766.0262f, -1235.004f, 42.5569f, 30f, 0);
				PED::_0x4C39C95AE5DB1329(&(iLocal_567[5]), 0, 15);
			}
			return 0;
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])) && ANIMSCENE::IS_ANIM_SCENE_LOADED(&(iLocal_794[0]), 1, 0))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_422) && !ENTITY::IS_ENTITY_DEAD(Local_422)) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(&(iLocal_794[0]), 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_794[0]), "JOHN", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_794[0]), "TOOLS", iLocal_518, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_794[0]), "CRIMINAL", Local_422, 0);
				ANIMSCENE::START_ANIM_SCENE(&(iLocal_794[0]));
				if (iVar1 == 1)
				{
					MISC::CLEAR_AREA(VOLUME::GET_VOLUME_COORDS(&(iLocal_567[17])), 25f, 2442122);
				}
				func_481(&Local_422, 1, 0, 0);
			}
		}
		else
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(&(iLocal_794[0])))
			{
				iLocal_794[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@blackwaterhunt@ig1_caught", 0, "pbl_Idles", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_794[0]));
			}
			return 0;
		}
	}
	func_598();
	func_437(&uLocal_593);
	func_441(&uLocal_593, 1);
	func_439(&uLocal_593, 1);
	func_438(&uLocal_593, 1);
	func_440(&uLocal_593, 0);
	func_445(&uLocal_593, 0);
	func_442(&uLocal_593, 0);
	func_444(&uLocal_593, 0);
	func_599(&uLocal_593, 0);
	func_539(uParam0, Global_35, "JOHN", 0);
	func_600(&Local_38);
	return 1;
}

int func_266(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_267(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_268(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_269(int iParam0)
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
	uVar10 = func_601(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_266(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_267(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_267(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_267(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_267(iParam0)))
	{
		func_268(iParam0, 4);
	}
}

void func_270(int iParam0)
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
		cVar3 = func_602(0, &Var1, 0, 0, -1, -1);
		func_603(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_271(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_200(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_226(iVar0, 1);
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

int func_272(int iParam0)
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
		iVar0 = func_390(iParam0);
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

void func_273(int iParam0, bool bParam1)
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
	func_394(iParam0, 1);
	bParam1 = bParam1;
}

void func_274(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_272(iParam0))
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
				func_604(func_111(iParam0));
			}
			if (func_199() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_605(iParam0);
	if (!func_57(func_56(0)))
	{
		func_394(iParam0, 3);
		func_197(bParam2);
		if (func_199() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_393(1);
		}
		func_606(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_607(&Global_0, 1024);
		}
		if (func_199() == -1)
		{
			func_608(&(Global_1347343->f_11), 536870912);
			func_609(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_610(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_611(0);
			}
		}
		if (func_199() == -1)
		{
			iVar1 = func_425(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_427();
				switch (iVar1)
				{
					case 0:
						func_612(0);
						break;
					case 1:
						func_612(1);
						break;
					case 2:
						func_612(2);
						break;
					case 3:
						func_612(3);
						break;
					case 4:
						func_612(4);
						break;
					case 5:
						func_612(5);
						break;
					case 6:
						func_612(5);
						break;
					case 7:
						func_612(7);
						break;
					case 8:
						func_612(8);
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
						func_612(11);
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
						func_612(11);
						break;
					default:
						iVar1 = func_427();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_613(0);
									break;
								case 1:
									func_613(1);
									break;
								case 2:
									func_613(2);
									break;
								case 3:
									func_613(3);
									break;
								case 4:
									func_613(4);
									break;
								case 5:
									func_613(5);
									break;
								case 6:
									func_613(5);
									break;
								case 7:
									func_613(7);
									break;
								case 8:
									func_613(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_397(1);
	}
	else
	{
		func_606(iParam0, -1);
		func_394(iParam0, 4);
	}
	func_428(iParam0, 0);
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_276(var uParam0)
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

void func_277(bool bParam0, int iParam1, bool bParam2)
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

void func_278()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_415(iVar0))
		{
			func_537(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_279(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_518(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_518(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
		{
			if (!func_614(joaat("weapon_revolver_cattleman")))
			{
				func_615(joaat("weapon_revolver_cattleman"));
			}
			func_616(Global_35, joaat("weapon_revolver_cattleman"), 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
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

void func_280(bool bParam0)
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
	func_617(0f);
	Global_1935436->f_11 = 1;
	if (func_365())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_618();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_281(var uParam0)
{
	iLocal_656 = func_351();
}

int func_282(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_283(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;

	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_619(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_620(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_286() == iParam9 && func_621() == iParam10) && !func_622(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_286() != iParam9 && !func_622(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_623(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

int func_284(var uParam0)
{
	func_624(&Local_38, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_18, 0, 0);
	func_204(uParam0, &Local_422);
	func_205(uParam0, &iLocal_441);
	func_207(uParam0);
	if ((func_323(Global_35, &(iLocal_567[0]), 1, 0) || func_323(Global_35, &(iLocal_567[1]), 1, 0)) || func_323(Global_35, &(iLocal_567[2]), 1, 0))
	{
		if (!func_79(&uLocal_657))
		{
			func_80(&uLocal_657, 0);
		}
	}
	if (func_79(&uLocal_657) && func_326(&uLocal_657) > 1f)
	{
		func_287(&iLocal_675, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_422) && ENTITY::IS_ENTITY_DEAD(Local_422))
	{
		func_287(&iLocal_675, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_422) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_422, Global_35, 1, 1))
	{
		func_287(&iLocal_675, 1);
	}
	if (func_319(iLocal_675, 16))
	{
		iLocal_37 = 1;
		func_287(&iLocal_675, 1);
	}
	if (func_319(iLocal_675, 1))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		func_232(&uLocal_657);
		return 1;
	}
	return 0;
}

int func_285(var uParam0)
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
				func_625(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			func_625(0, 1, 1, 1);
			if (func_626(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_286()
{
	return Global_1572864->f_9;
}

void func_287(int iParam0, int iParam1)
{
	func_627(iParam0, iParam1);
}

int func_288()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_560[iVar0])) && ENTITY::GET_ENTITY_COLLISION_DISABLED(&(iLocal_560[iVar0])))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == iLocal_560)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_560[iVar0])))
		{
			if (!ENTITY::GET_ENTITY_COLLISION_DISABLED(&(iLocal_560[iVar0])))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(iLocal_560[iVar0]), false);
				ENTITY::SET_ENTITY_COLLISION(&(iLocal_560[iVar0]), false, false);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_560[iVar0])))
		{
			if (&iLocal_553[iVar0] == 0)
			{
				switch (iVar0)
				{
					case 0:
						iLocal_553[iVar0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(1678119818, -778.0885f, -1309.391f, 42.6932f, 11);
						break;
					case 1:
						iLocal_553[iVar0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(-1437208391, -769.6603f, -1272.661f, 42.5683f, 11);
						break;
					case 2:
						iLocal_553[iVar0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(-1782470881, -769.7077f, -1271.859f, 42.5656f, 11);
						break;
					case 3:
						iLocal_553[iVar0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_bottle02x"), -773.8401f, -1327.212f, 42.7109f, 11);
						break;
					case 4:
						iLocal_553[iVar0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(1814756438, -773.9418f, -1327.212f, 42.714f, 11);
						break;
					case 5:
						iLocal_553[iVar0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(1814756438, -773.812f, -1327.315f, 42.7429f, 11);
						break;
				}
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(&(iLocal_553[iVar0])))
			{
				iLocal_560[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(&(iLocal_553[iVar0])));
			}
		}
		iVar0++;
	}
	return 0;
}

int func_289(var uParam0)
{
	if (!func_79(uParam0))
	{
		func_80(uParam0, 0);
	}
	if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
	{
		return 1;
	}
	if (func_326(uParam0) > 15f)
	{
		return 1;
	}
	return 0;
}

void func_290(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_512(((*Global_1347702)[iParam0 /*49*/])->f_15);
	func_325(&iVar0, iParam1);
	func_628(((*Global_1347702)[iParam0 /*49*/])->f_15, iVar0);
}

void func_291(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::RESET_ADAPTATION(6);
	}
	if (iParam1 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
}

int func_292(int iParam0, int iParam1)
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

void func_293(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_629(iParam1);
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
				func_630(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_631(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_630(iVar3, iParam0, iParam1, 0);
}

void func_294(int iParam0, int iParam1, var uParam2)
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

void func_295(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_632(iParam0, sParam4, iParam5);
	}
	func_633(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_296()
{
	int iVar0;

	iVar0 = func_526();
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

int func_297(int iParam0)
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

float func_298(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_299(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_634(uParam0))
		{
			return 0;
		}
		func_212(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_241(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_625(0, 1, 1, 1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_300()
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

void func_301(var uParam0)
{
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
}

int func_302(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_635(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_303(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_183(uParam1, 32768))
	{
		Var0 = { func_559(uParam0) };
		func_245(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_562(uParam0, 268435456);
			if (func_246(uParam0->f_409))
			{
				uParam0->f_409 = { func_636(uParam1, uParam1->f_1580) };
			}
			if (func_246(uParam0->f_406))
			{
				uParam0->f_406 = { func_636(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_637(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_562(uParam0, 67108864);
		func_638(uParam1, 524288);
	}
	if (func_639(uParam1, 128))
	{
		func_562(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_640(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_637(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_IS_CAMERA_AVAILABLE(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_304(var uParam0, int iParam1)
{
	var uVar0;

	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_641(uParam0->f_174)}, 8);
		func_642(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_305(int iParam0)
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
	iVar0 = func_643();
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

int func_306()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_644();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, 0);
	func_645(-1);
	func_646(3);
	return 1;
}

void func_307(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_647(iParam0, &iVar0, &iVar1);
	if (!func_648(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_649(iVar0, iVar1);
}

int func_308(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	func_565(uParam4, &sParam0);
	if (func_564(uParam4, 2) && !func_564(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_650(uParam4) != 1)
	{
		func_651(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_650(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0))
				{
					func_652(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
				{
					func_653(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_654(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_655(uParam5);
				}
				func_653(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_564(uParam4, 134217728))
				{
				}
				else
				{
					func_244(uParam4);
				}
				func_261(&(uParam4->f_1));
				func_653(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_575(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_326(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_653(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
			{
				if (func_248(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_348, 1, 0))
					{
						func_653(uParam4, 4);
					}
					else if (!func_246(func_566(uParam4)) && !func_656(Global_35, func_566(uParam4), 100f, 1, 1))
					{
						func_657(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_566(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_326(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_653(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_658(1, 0);
					func_652(uParam4, &sParam0, uParam5);
					func_653(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_326(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_653(uParam4, 4);
			}
			break;
		case 3:
			func_659(uParam4);
			if (func_654(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_655(uParam5);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_348, 0)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348) || func_564(uParam4, 512)))
			{
				if (!func_564(uParam4, 1024) && func_660(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_564(uParam4, 512))
				{
					func_261(&(uParam4->f_1));
					func_562(uParam4, 512);
					func_653(uParam4, 4);
				}
				else if (func_564(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_651(uParam4);
			}
			if (func_564(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_661(uParam4) - func_662(uParam4)))) <= 2f)
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
				if (func_663(uParam4, Global_35, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_662(uParam4) > 5000)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
				}
			}
			if (func_664(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				func_665(uParam4);
				func_666(uParam4);
				return 1;
			}
			else
			{
				if (func_564(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_261(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(1, 1);
						func_562(uParam4, 512);
						func_561(uParam4, 67108864, 1);
						func_653(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_564(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_662(uParam4) <= 5000) && func_662(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_564(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_667(&(uParam4->f_405), 0);
					func_562(uParam4, 536870912);
				}
				if (func_662(uParam4) >= 5000 && func_662(uParam4) <= (func_661(uParam4) - 5000))
				{
					func_668();
				}
			}
			break;
		case 6:
			if (func_664(uParam4))
			{
				func_665(uParam4);
				func_666(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_564(uParam4, 524288))
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
						func_562(uParam4, 1073741824);
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
					if (func_669(uParam5))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_653(uParam4, 3);
					}
					else if (func_326(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_653(uParam4, 3);
					}
				}
				if (func_650(uParam4) == 3)
				{
					if (func_564(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_653(uParam4, 4);
			break;
	}
	return 0;
}

void func_309(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_564(uParam0, 16))
		{
			POPULATION::REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_670(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, 0);
		}
	}
	if (func_564(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_561(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_561(uParam0, 16, 1);
}

void func_310(int* iParam0)
{
	struct<367> Var0;

	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_311(var uParam0)
{
	func_671(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

int func_312(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
	if (func_672(uParam0) >= 3)
	{
		uParam0->f_1792 = func_533(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
		func_673(uParam0);
	}
	if (func_672(uParam0) < 10)
	{
		if (func_672(uParam0) == 3)
		{
			func_674(uParam0, iParam5, bParam6);
		}
		else if (func_672(uParam0) > 3)
		{
			if (func_675(uParam0) == 0)
			{
				if (!func_183(uParam0, 524288))
				{
					func_676(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_677(uParam0, 4);
					func_678(uParam0, 10);
					func_679(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_183(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_640(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			func_680(0);
			func_681();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_640(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_682(uParam0, uParam0->f_1580))
				{
					if (func_683(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_684(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_684(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_685(uParam0);
			}
		}
	}
	bVar0 = func_686(uParam0, iParam5, bParam6);
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
				func_687(uParam0, 131072);
				func_687(uParam0, 268435456);
			}
		}
		if (func_639(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_640(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::GET_LETTER_BOX_RATIO() > 0f || func_675(uParam0) == 0)
			{
				HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1679307491);
				CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_672(uParam0) == 3 || func_183(uParam0, 131072))
	{
		func_688(uParam0);
		if (!func_183(uParam0, 262144))
		{
			if ((bVar0 && func_183(uParam0, 65536)) || func_183(uParam0, 131072))
			{
				func_687(uParam0, 32768);
				func_677(uParam0, 4);
				func_678(uParam0, 10);
				uParam0->f_1665 = 1;
				func_679(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_672(uParam0) >= 3)
	{
		func_689(uParam0, iParam5);
		func_690(uParam0);
		if (!func_691(uParam0, 1))
		{
			func_692(uParam0);
		}
		func_693(uParam0);
	}
	switch (func_672(uParam0))
	{
		case 0:
			func_694(uParam0, Param1, iParam5);
			break;
		case 1:
			func_695(uParam0);
			break;
		case 2:
			func_696(uParam0);
			break;
		case 3:
			if (func_313(uParam0))
			{
				func_697(2);
				func_684(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_261(&(uParam0->f_1768));
				func_677(uParam0, 1);
				func_698();
				func_678(uParam0, 5);
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
			if (func_672(uParam0) == 5)
			{
				if (func_699(uParam0))
				{
					func_677(uParam0, 2);
					func_678(uParam0, 6);
				}
			}
			if (func_672(uParam0) == 6)
			{
				if (func_700(uParam0))
				{
					func_677(uParam0, 3);
					func_678(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_701(&(uParam0->f_1768)) >= 15f)
			{
				if (func_702(uParam0, iParam5))
				{
					if (func_703(uParam0))
					{
						uParam0->f_1581 = func_704(uParam0);
						func_261(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_DISABLE_HUD_CONTEXT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_677(uParam0, 6);
						func_678(uParam0, 9);
					}
					else
					{
						func_677(uParam0, 4);
						func_678(uParam0, 10);
						func_679(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_702(uParam0, iParam5))
			{
				func_679(uParam0, iParam5);
				func_678(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

int func_313(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

int func_314(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_315(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_316(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

void func_317()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_524))
	{
		iLocal_524 = func_705(0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_523))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && iVar0 != iLocal_524)
			{
				iLocal_523 = iVar0;
			}
		}
		else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			iVar1 = TASK::_0xED1F514AF4732258(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iVar1 != iLocal_524)
			{
				iLocal_523 = iVar1;
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::_0x4C8B59171957BCF7(Global_35))) && PED::_0x4C8B59171957BCF7(Global_35) != iLocal_524)
		{
			iLocal_523 = PED::_0x4C8B59171957BCF7(Global_35);
		}
	}
}

void func_318(var uParam0)
{
	if (!func_319(iLocal_675, 16777216))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_422))
		{
			if (PED::IS_PED_HOGTIED(Local_422))
			{
				AUDIO::TRIGGER_MUSIC_EVENT(&(sLocal_826[2]));
				func_283(uParam0, func_61(1), func_61(2), 1, 2, 0);
				func_287(&iLocal_675, 16777216);
			}
		}
	}
	if (!func_319(iLocal_675, 33554432))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_422))
		{
			if (func_507(Local_422, 0))
			{
				if (fLocal_836 < 15f)
				{
					func_283(uParam0, func_61(2), func_61(3), 2, 3, 0);
					func_287(&iLocal_675, 33554432);
				}
			}
		}
	}
}

bool func_319(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_320()
{
	if (func_505(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -641399502, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1819459471, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, 407462115, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1993599493, false);
		PAD::DISABLE_CONTROL_ACTION(0, 99527120, false);
	}
}

void func_321()
{
	if (func_323(Global_35, &(iLocal_567[12]), 1, 0) && TASK::IS_PED_RUNNING(Global_35))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 247, true);
		if (!func_319(iLocal_675, 2097152))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			func_287(&iLocal_675, 2097152);
		}
	}
	else if (func_319(iLocal_675, 2097152))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		func_325(&iLocal_675, 2097152);
	}
}

void func_322()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_524) && !ENTITY::IS_ENTITY_DEAD(iLocal_524))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_524, -751.3687f, -1265.616f, 42.3311f, 1f, 60000, 0.25f, 5242884, 88.1672f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_523) && !ENTITY::IS_ENTITY_DEAD(iLocal_523))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_523, -751.3687f, -1265.616f, 42.3311f, 1f, 60000, 0.25f, 5242884, 88.1672f);
	}
}

bool func_323(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_324(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = MAP::_0xA6EF0C54A3443E70(iParam0, iParam1);
	if (bParam2)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

void func_325(int iParam0, int iParam1)
{
	func_706(iParam0, iParam1);
}

float func_326(var uParam0)
{
	if (!func_79(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_262(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_707() - uParam0->f_1);
}

void func_327(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_328(int iParam0, float fParam1, float fParam2, float fParam3)
{
	float fVar0;

	fVar0 = func_470(Global_35, iParam0, 1, 1);
	if (fVar0 < fParam1)
	{
		return 1;
	}
	else if (fVar0 < fParam2)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 1;
		}
	}
	else if (fVar0 < fParam3)
	{
		if (func_708(iParam0, 1, 1, 1, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_329(var uParam0)
{
	int iVar0;

	if (func_319(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_383(uParam0->f_67, 0) || PED::IS_PED_HOGTIED(uParam0->f_67))
	{
		iVar0 = 455691738;
	}
	else
	{
		iVar0 = 953018525;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_68))
	{
		MAP::_0xBD62D98799A3DAF0(uParam0->f_68, iVar0);
	}
	else
	{
		uParam0->f_68 = MAP::BLIP_ADD_FOR_ENTITY(iVar0, uParam0->f_67);
	}
	MAP::_0x97F6F158CC5B5CA2(uParam0->f_67, uParam0->f_68);
	MAP::BLIP_ADD_MODIFIER(uParam0->f_68, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_68, &(uParam0->f_325));
}

void func_330(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	_NAMESPACE71::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	if (bParam2)
	{
		if (func_319(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_709(uParam0->f_65))
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
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_319(uParam0->f_329, 1048576))
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
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_319(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_468(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_319(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_468(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_319(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_468(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), func_712(uParam0->f_300));
			if (bParam2)
			{
				func_713(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_319(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_383(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_710(uParam0, bParam2, sVar0, func_712(uParam0->f_300), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, func_712(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_468(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_714(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_710(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_711(MISC::_CREATE_VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_715(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_710(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_364(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_715(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_710(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_364(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_710(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_364(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_287(&(uParam0->f_330), iParam1);
	}
}

void func_331(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_716(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_717(iParam0, 512);
		func_718(iParam0, 256);
		func_718(iParam0, 1048576);
	}
	else
	{
		func_718(iParam0, 512);
	}
	if (bParam2)
	{
		func_719(iParam0);
	}
}

int func_332()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_519))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_519))
	{
		iLocal_519 = OBJECT::CREATE_OBJECT(iLocal_25, -774.71f, -1329.34f, 42.63f, true, true, false, false, true);
		ENTITY::_0x203BEFFDBE12E96A(iLocal_519, -774.71f, -1329.34f, 42.63f, 88.0888f, 1, 0, 1);
		ENTITY::_0x9587913B9E772D29(iLocal_519, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_519, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_519, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_519, false);
	}
	return 0;
}

void func_333()
{
	if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[16])))
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(&(iLocal_567[16]), 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(&(iLocal_567[16]), 0, 0, 0, -1, -1, 2);
		iLocal_527[16] = PED::_0x4C39C95AE5DB1329(&(iLocal_567[16]), 0, 15);
		MISC::CLEAR_AREA(VOLUME::GET_VOLUME_COORDS(&(iLocal_567[16])), 25f, 1064968);
	}
	if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[14])))
	{
		PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(&(iLocal_567[14]), 7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[20])))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[21])))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(&(iLocal_567[15])))
	{
		iLocal_527[15] = PED::_0x4C39C95AE5DB1329(&(iLocal_567[15]), 0, 8);
	}
}

int func_334(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	if (iLocal_837 == Local_460)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_460[iLocal_837 /*19*/])))
	{
		switch (iLocal_837)
		{
			case 0:
				fVar0 = 70.47f;
				vVar1 = { -771.38f, -1319.28f, 43.6f };
				break;
			case 1:
				fVar0 = -76.27f;
				vVar1 = { -773.55f, -1316.79f, 43.65f };
				break;
			case 2:
				fVar0 = 62.88f;
				vVar1 = { -770.9f, -1317.96f, 43.58f };
				break;
		}
		Local_460[iLocal_837 /*19*/] = func_592(uParam0, iLocal_24, vVar1, fVar0, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_460[iLocal_837 /*19*/])) && !ENTITY::IS_ENTITY_DEAD